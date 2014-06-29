#!/system/bin/sh
# Copyright (c) 2014, Savoca <adeddo27@gmail.com>
# Copyright (c) 2009-2014, The Linux Foundation. All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#     * Redistributions of source code must retain the above copyright
#       notice, this list of conditions and the following disclaimer.
#     * Redistributions in binary form must reproduce the above copyright
#       notice, this list of conditions and the following disclaimer in the
#       documentation and/or other materials provided with the distribution.
#     * Neither the name of The Linux Foundation nor
#       the names of its contributors may be used to endorse or promote
#       products derived from this software without specific prior written
#       permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
# NON-INFRINGEMENT ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
# CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
# EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
# PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
# OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
# WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
# OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
# ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#

# Sweep2Dim default
if [ -e /sys/android_touch/sweep2wake ]; then
	if [ -e /sys/module/synaptics_3k/parameters/s2d_enabled ]; then
		echo "0" > /sys/android_touch/sweep2wake
		echo "1" > /sys/module/synaptics_3k/parameters/s2d_enabled
		echo "73" > /sys/module/synaptics_3k/parameters/down_kcal
		echo "73" > /sys/module/synaptics_3k/parameters/up_kcal
		echo "[furnace] sweep2dim configured!" | tee /dev/kmsg
	else
		echo "[furnace] sweep2dim not found" | tee /dev/kmsg
	fi
else
	echo "[furnace] sweep2wake not found" | tee /dev/kmsg
fi

# Disable MPD, enable intelliplug
if [ -e /sys/module/intelli_plug/parameters/intelli_plug_active ]; then
	stop mpdecision
	echo "1" > /sys/module/intelli_plug/parameters/intelli_plug_active
	echo "[furnace] IntelliPlug enabled" | tee /dev/kmsg
else
	echo "[furnace] IntelliPlug not found, using MPDecision" | tee /dev/kmsg
	start mpdecision
fi

# Set TCP westwood
if [ -e /proc/sys/net/ipv4/tcp_congestion_control ]; then
	echo "westwood" > /proc/sys/net/ipv4/tcp_congestion_control
	echo "[furnace] TCP set: westwood" | tee /dev/kmsg
else
	echo "[furnace] what" | tee /dev/kmsg
fi

# Enable powersuspend
if [ -e /sys/kernel/power_suspend/power_suspend_mode ]; then
	echo "1" > /sys/kernel/power_suspend/power_suspend_mode
	echo "[furnace] Powersuspend enabled" | tee /dev/kmsg
else
	echo "[furnace] Failed to set powersuspend" | tee /dev/kmsg
fi

# Set RGB KCAL
if [ -e /sys/devices/platform/kcal_ctrl.0/kcal ]; then
	sd_r=255
	sd_g=255
	sd_b=255
	kcal="$sd_r $sd_g $sd_b"
	echo "$kcal" > /sys/devices/platform/kcal_ctrl.0/kcal
	echo "1" > /sys/devices/platform/kcal_ctrl.0/kcal_ctrl
	echo "[furnace] LCD_KCAL: red=[$sd_r], green=[$sd_g], blue=[$sd_b]" | tee /dev/kmsg
fi

if [ -e /sys/devices/system/cpu/cpu0/cpufreq/scaling_max_freq ]; then
	echo "2265600" > /sys/devices/system/cpu/cpu0/cpufreq/scaling_max_freq
	echo "2265600" > /sys/devices/system/cpu/cpu1/cpufreq/scaling_max_freq
	echo "2265600" > /sys/devices/system/cpu/cpu2/cpufreq/scaling_max_freq
	echo "2265600" > /sys/devices/system/cpu/cpu3/cpufreq/scaling_max_freq
	echo "[furnace] Max freq set: 2265600" | tee /dev/kmsg
else
	echo "[furnace] Call the police!" | tee /dev/kmsg
fi
