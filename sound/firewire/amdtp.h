#ifndef SOUND_FIREWIRE_AMDTP_H_INCLUDED
#define SOUND_FIREWIRE_AMDTP_H_INCLUDED

#include <linux/mutex.h>
#include <linux/spinlock.h>
#include "packets-buffer.h"

enum cip_out_flags {
	CIP_NONBLOCKING = 0,
};

enum cip_sfc {
	CIP_SFC_32000  = 0,
	CIP_SFC_44100  = 1,
	CIP_SFC_48000  = 2,
	CIP_SFC_88200  = 3,
	CIP_SFC_96000  = 4,
	CIP_SFC_176400 = 5,
	CIP_SFC_192000 = 6,
};

#define AMDTP_OUT_PCM_FORMAT_BITS	(SNDRV_PCM_FMTBIT_S16 | \
					 SNDRV_PCM_FMTBIT_S32)

struct fw_unit;
struct fw_iso_context;
struct snd_pcm_substream;

struct amdtp_out_stream {
	struct fw_unit *unit;
	enum cip_out_flags flags;
	struct fw_iso_context *context;
	struct mutex mutex;

	enum cip_sfc sfc;
	unsigned int data_block_quadlets;
	unsigned int pcm_channels;
	unsigned int midi_ports;
	void (*transfer_samples)(struct amdtp_out_stream *s,
				 struct snd_pcm_substream *pcm,
				 __be32 *buffer, unsigned int frames);

	unsigned int syt_interval;
	unsigned int source_node_id_field;
	struct iso_packets_buffer buffer;

	struct snd_pcm_substream *pcm;

	int packet_index;
	unsigned int data_block_counter;

	unsigned int data_block_state;

	unsigned int last_syt_offset;
	unsigned int syt_offset_state;

	unsigned int pcm_buffer_pointer;
	unsigned int pcm_period_pointer;
};

int amdtp_out_stream_init(struct amdtp_out_stream *s, struct fw_unit *unit,
			  enum cip_out_flags flags);
void amdtp_out_stream_destroy(struct amdtp_out_stream *s);

void amdtp_out_stream_set_rate(struct amdtp_out_stream *s, unsigned int rate);
unsigned int amdtp_out_stream_get_max_payload(struct amdtp_out_stream *s);

int amdtp_out_stream_start(struct amdtp_out_stream *s, int channel, int speed);
void amdtp_out_stream_update(struct amdtp_out_stream *s);
void amdtp_out_stream_stop(struct amdtp_out_stream *s);

void amdtp_out_stream_set_pcm_format(struct amdtp_out_stream *s,
				     snd_pcm_format_t format);
void amdtp_out_stream_pcm_abort(struct amdtp_out_stream *s);

static inline void amdtp_out_stream_set_pcm(struct amdtp_out_stream *s,
					    unsigned int pcm_channels)
{
	s->pcm_channels = pcm_channels;
}

static inline void amdtp_out_stream_set_midi(struct amdtp_out_stream *s,
					     unsigned int midi_ports)
{
	s->midi_ports = midi_ports;
}

static inline bool amdtp_out_streaming_error(struct amdtp_out_stream *s)
{
	return s->packet_index < 0;
}

static inline void amdtp_out_stream_pcm_prepare(struct amdtp_out_stream *s)
{
	s->pcm_buffer_pointer = 0;
	s->pcm_period_pointer = 0;
}

static inline void amdtp_out_stream_pcm_trigger(struct amdtp_out_stream *s,
						struct snd_pcm_substream *pcm)
{
	ACCESS_ONCE(s->pcm) = pcm;
}

static inline unsigned long
amdtp_out_stream_pcm_pointer(struct amdtp_out_stream *s)
{
	return ACCESS_ONCE(s->pcm_buffer_pointer);
}

static inline bool cip_sfc_is_base_44100(enum cip_sfc sfc)
{
	return sfc & 1;
}

#endif
