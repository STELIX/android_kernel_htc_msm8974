/*
 * Bestcomm FEC tasks driver
 *
 *
 * Copyright (C) 2006-2007 Sylvain Munaut <tnt@246tNt.com>
 * Copyright (C) 2003-2004 MontaVista, Software, Inc.
 *                         ( by Dale Farnsworth <dfarnsworth@mvista.com> )
 *
 * This file is licensed under the terms of the GNU General Public License
 * version 2. This program is licensed "as is" without any warranty of any
 * kind, whether express or implied.
 */

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/types.h>
#include <asm/io.h>

#include "bestcomm.h"
#include "bestcomm_priv.h"
#include "fec.h"



extern u32 bcom_fec_rx_task[];
extern u32 bcom_fec_tx_task[];

struct bcom_fec_rx_var {
	u32 enable;		
	u32 fifo;		
	u32 bd_base;		
	u32 bd_last;		
	u32 bd_start;		
	u32 buffer_size;	
};

struct bcom_fec_rx_inc {
	u16 pad0;
	s16 incr_bytes;
	u16 pad1;
	s16 incr_dst;
	u16 pad2;
	s16 incr_dst_ma;
};

struct bcom_fec_tx_var {
	u32 DRD;		
	u32 fifo;		
	u32 enable;		
	u32 bd_base;		
	u32 bd_last;		
	u32 bd_start;		
	u32 buffer_size;	
};

struct bcom_fec_tx_inc {
	u16 pad0;
	s16 incr_bytes;
	u16 pad1;
	s16 incr_src;
	u16 pad2;
	s16 incr_src_ma;
};

struct bcom_fec_priv {
	phys_addr_t	fifo;
	int		maxbufsize;
};



struct bcom_task *
bcom_fec_rx_init(int queue_len, phys_addr_t fifo, int maxbufsize)
{
	struct bcom_task *tsk;
	struct bcom_fec_priv *priv;

	tsk = bcom_task_alloc(queue_len, sizeof(struct bcom_fec_bd),
				sizeof(struct bcom_fec_priv));
	if (!tsk)
		return NULL;

	tsk->flags = BCOM_FLAGS_NONE;

	priv = tsk->priv;
	priv->fifo = fifo;
	priv->maxbufsize = maxbufsize;

	if (bcom_fec_rx_reset(tsk)) {
		bcom_task_free(tsk);
		return NULL;
	}

	return tsk;
}
EXPORT_SYMBOL_GPL(bcom_fec_rx_init);

int
bcom_fec_rx_reset(struct bcom_task *tsk)
{
	struct bcom_fec_priv *priv = tsk->priv;
	struct bcom_fec_rx_var *var;
	struct bcom_fec_rx_inc *inc;

	
	bcom_disable_task(tsk->tasknum);

	
	var = (struct bcom_fec_rx_var *) bcom_task_var(tsk->tasknum);
	inc = (struct bcom_fec_rx_inc *) bcom_task_inc(tsk->tasknum);

	if (bcom_load_image(tsk->tasknum, bcom_fec_rx_task))
		return -1;

	var->enable	= bcom_eng->regs_base +
				offsetof(struct mpc52xx_sdma, tcr[tsk->tasknum]);
	var->fifo	= (u32) priv->fifo;
	var->bd_base	= tsk->bd_pa;
	var->bd_last	= tsk->bd_pa + ((tsk->num_bd-1) * tsk->bd_size);
	var->bd_start	= tsk->bd_pa;
	var->buffer_size = priv->maxbufsize;

	inc->incr_bytes	= -(s16)sizeof(u32);	
	inc->incr_dst	= sizeof(u32);		
	inc->incr_dst_ma= sizeof(u8);		

	
	tsk->index = 0;
	tsk->outdex = 0;

	memset(tsk->bd, 0x00, tsk->num_bd * tsk->bd_size);

	
	bcom_set_task_pragma(tsk->tasknum, BCOM_FEC_RX_BD_PRAGMA);
	bcom_set_task_auto_start(tsk->tasknum, tsk->tasknum);

	out_8(&bcom_eng->regs->ipr[BCOM_INITIATOR_FEC_RX], BCOM_IPR_FEC_RX);

	out_be32(&bcom_eng->regs->IntPend, 1<<tsk->tasknum);	

	return 0;
}
EXPORT_SYMBOL_GPL(bcom_fec_rx_reset);

void
bcom_fec_rx_release(struct bcom_task *tsk)
{
	
	bcom_task_free(tsk);
}
EXPORT_SYMBOL_GPL(bcom_fec_rx_release);



	
static u32 *self_modified_drd(int tasknum)
{
	u32 *desc;
	int num_descs;
	int drd_count;
	int i;

	num_descs = bcom_task_num_descs(tasknum);
	desc = bcom_task_desc(tasknum) + num_descs - 1;
	drd_count = 0;
	for (i=0; i<num_descs; i++, desc--)
		if (bcom_desc_is_drd(*desc) && ++drd_count == 3)
			break;
	return desc;
}

struct bcom_task *
bcom_fec_tx_init(int queue_len, phys_addr_t fifo)
{
	struct bcom_task *tsk;
	struct bcom_fec_priv *priv;

	tsk = bcom_task_alloc(queue_len, sizeof(struct bcom_fec_bd),
				sizeof(struct bcom_fec_priv));
	if (!tsk)
		return NULL;

	tsk->flags = BCOM_FLAGS_ENABLE_TASK;

	priv = tsk->priv;
	priv->fifo = fifo;

	if (bcom_fec_tx_reset(tsk)) {
		bcom_task_free(tsk);
		return NULL;
	}

	return tsk;
}
EXPORT_SYMBOL_GPL(bcom_fec_tx_init);

int
bcom_fec_tx_reset(struct bcom_task *tsk)
{
	struct bcom_fec_priv *priv = tsk->priv;
	struct bcom_fec_tx_var *var;
	struct bcom_fec_tx_inc *inc;

	
	bcom_disable_task(tsk->tasknum);

	
	var = (struct bcom_fec_tx_var *) bcom_task_var(tsk->tasknum);
	inc = (struct bcom_fec_tx_inc *) bcom_task_inc(tsk->tasknum);

	if (bcom_load_image(tsk->tasknum, bcom_fec_tx_task))
		return -1;

	var->enable	= bcom_eng->regs_base +
				offsetof(struct mpc52xx_sdma, tcr[tsk->tasknum]);
	var->fifo	= (u32) priv->fifo;
	var->DRD	= bcom_sram_va2pa(self_modified_drd(tsk->tasknum));
	var->bd_base	= tsk->bd_pa;
	var->bd_last	= tsk->bd_pa + ((tsk->num_bd-1) * tsk->bd_size);
	var->bd_start	= tsk->bd_pa;

	inc->incr_bytes	= -(s16)sizeof(u32);	
	inc->incr_src	= sizeof(u32);		
	inc->incr_src_ma= sizeof(u8);		

	
	tsk->index = 0;
	tsk->outdex = 0;

	memset(tsk->bd, 0x00, tsk->num_bd * tsk->bd_size);

	
	bcom_set_task_pragma(tsk->tasknum, BCOM_FEC_TX_BD_PRAGMA);
	bcom_set_task_auto_start(tsk->tasknum, tsk->tasknum);

	out_8(&bcom_eng->regs->ipr[BCOM_INITIATOR_FEC_TX], BCOM_IPR_FEC_TX);

	out_be32(&bcom_eng->regs->IntPend, 1<<tsk->tasknum);	

	return 0;
}
EXPORT_SYMBOL_GPL(bcom_fec_tx_reset);

void
bcom_fec_tx_release(struct bcom_task *tsk)
{
	
	bcom_task_free(tsk);
}
EXPORT_SYMBOL_GPL(bcom_fec_tx_release);


MODULE_DESCRIPTION("BestComm FEC tasks driver");
MODULE_AUTHOR("Dale Farnsworth <dfarnsworth@mvista.com>");
MODULE_LICENSE("GPL v2");

