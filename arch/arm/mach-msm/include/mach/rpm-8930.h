/* Copyright (c) 2011-2012, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __ARCH_ARM_MACH_MSM_RPM_8930_H
#define __ARCH_ARM_MACH_MSM_RPM_8930_H

enum {
	MSM_RPM_8930_CTRL_VERSION_MAJOR,
	MSM_RPM_8930_CTRL_VERSION_MINOR,
	MSM_RPM_8930_CTRL_VERSION_BUILD,

	MSM_RPM_8930_CTRL_REQ_CTX_0,
	MSM_RPM_8930_CTRL_REQ_CTX_7 = MSM_RPM_8930_CTRL_REQ_CTX_0 + 7,
	MSM_RPM_8930_CTRL_REQ_SEL_0,
	MSM_RPM_8930_CTRL_REQ_SEL_3 = MSM_RPM_8930_CTRL_REQ_SEL_0 + 3,
	MSM_RPM_8930_CTRL_ACK_CTX_0,
	MSM_RPM_8930_CTRL_ACK_CTX_7 = MSM_RPM_8930_CTRL_ACK_CTX_0 + 7,
	MSM_RPM_8930_CTRL_ACK_SEL_0,
	MSM_RPM_8930_CTRL_ACK_SEL_7 = MSM_RPM_8930_CTRL_ACK_SEL_0 + 7,
};

enum {
	MSM_RPM_8930_SEL_NOTIFICATION				= 0,
	MSM_RPM_8930_SEL_INVALIDATE				= 1,
	MSM_RPM_8930_SEL_TRIGGER_TIMED_0			= 2,
	MSM_RPM_8930_SEL_RPM_CTL				= 3,
	MSM_RPM_8930_SEL_CXO_CLK				= 5,
	MSM_RPM_8930_SEL_PXO_CLK				= 6,
	MSM_RPM_8930_SEL_QDSS_CLK				= 7,
	MSM_RPM_8930_SEL_APPS_FABRIC_CLK			= 8,
	MSM_RPM_8930_SEL_SYSTEM_FABRIC_CLK			= 9,
	MSM_RPM_8930_SEL_MM_FABRIC_CLK				= 10,
	MSM_RPM_8930_SEL_DAYTONA_FABRIC_CLK			= 11,
	MSM_RPM_8930_SEL_SFPB_CLK				= 12,
	MSM_RPM_8930_SEL_CFPB_CLK				= 13,
	MSM_RPM_8930_SEL_MMFPB_CLK				= 14,
	MSM_RPM_8930_SEL_EBI1_CLK				= 16,
	MSM_RPM_8930_SEL_APPS_FABRIC_CFG_HALT			= 18,
	MSM_RPM_8930_SEL_APPS_FABRIC_CFG_CLKMOD			= 19,
	MSM_RPM_8930_SEL_APPS_FABRIC_CFG_IOCTL			= 20,
	MSM_RPM_8930_SEL_APPS_FABRIC_ARB			= 21,
	MSM_RPM_8930_SEL_SYS_FABRIC_CFG_HALT			= 22,
	MSM_RPM_8930_SEL_SYS_FABRIC_CFG_CLKMOD			= 23,
	MSM_RPM_8930_SEL_SYS_FABRIC_CFG_IOCTL			= 24,
	MSM_RPM_8930_SEL_SYSTEM_FABRIC_ARB			= 25,
	MSM_RPM_8930_SEL_MMSS_FABRIC_CFG_HALT			= 26,
	MSM_RPM_8930_SEL_MMSS_FABRIC_CFG_CLKMOD			= 27,
	MSM_RPM_8930_SEL_MMSS_FABRIC_CFG_IOCTL			= 28,
	MSM_RPM_8930_SEL_MM_FABRIC_ARB				= 29,

	
	MSM_RPM_8930_SEL_PM8038_S1				= 30,
	MSM_RPM_8930_SEL_PM8038_S2				= 31,
	MSM_RPM_8930_SEL_PM8038_S3				= 32,
	MSM_RPM_8930_SEL_PM8038_S4				= 33,
	MSM_RPM_8930_SEL_PM8038_S5				= 34,
	MSM_RPM_8930_SEL_PM8038_S6				= 35,
	MSM_RPM_8930_SEL_PM8038_L1				= 36,
	MSM_RPM_8930_SEL_PM8038_L2				= 37,
	MSM_RPM_8930_SEL_PM8038_L3				= 38,
	MSM_RPM_8930_SEL_PM8038_L4				= 39,
	MSM_RPM_8930_SEL_PM8038_L5				= 40,
	MSM_RPM_8930_SEL_PM8038_L6				= 41,
	MSM_RPM_8930_SEL_PM8038_L7				= 42,
	MSM_RPM_8930_SEL_PM8038_L8				= 43,
	MSM_RPM_8930_SEL_PM8038_L9				= 44,
	MSM_RPM_8930_SEL_PM8038_L10				= 45,
	MSM_RPM_8930_SEL_PM8038_L11				= 46,
	MSM_RPM_8930_SEL_PM8038_L12				= 47,
	MSM_RPM_8930_SEL_PM8038_L13				= 48,
	MSM_RPM_8930_SEL_PM8038_L14				= 49,
	MSM_RPM_8930_SEL_PM8038_L15				= 50,
	MSM_RPM_8930_SEL_PM8038_L16				= 51,
	MSM_RPM_8930_SEL_PM8038_L17				= 52,
	MSM_RPM_8930_SEL_PM8038_L18				= 53,
	MSM_RPM_8930_SEL_PM8038_L19				= 54,
	MSM_RPM_8930_SEL_PM8038_L20				= 55,
	MSM_RPM_8930_SEL_PM8038_L21				= 56,
	MSM_RPM_8930_SEL_PM8038_L22				= 57,
	MSM_RPM_8930_SEL_PM8038_L23				= 58,
	MSM_RPM_8930_SEL_PM8038_L24				= 59,
	MSM_RPM_8930_SEL_PM8038_L25				= 60,
	MSM_RPM_8930_SEL_PM8038_L26				= 61,
	MSM_RPM_8930_SEL_PM8038_L27				= 62,
	MSM_RPM_8930_SEL_PM8038_CLK1				= 63,
	MSM_RPM_8930_SEL_PM8038_CLK2				= 64,
	MSM_RPM_8930_SEL_PM8038_LVS1				= 65,
	MSM_RPM_8930_SEL_PM8038_LVS2				= 66,

	
	MSM_RPM_8930_SEL_PM8917_S1				= 30,
	MSM_RPM_8930_SEL_PM8917_S2				= 31,
	MSM_RPM_8930_SEL_PM8917_S3				= 32,
	MSM_RPM_8930_SEL_PM8917_S4				= 33,
	MSM_RPM_8930_SEL_PM8917_S5				= 34,
	MSM_RPM_8930_SEL_PM8917_S6				= 35,
	MSM_RPM_8930_SEL_PM8917_S7				= 36,
	MSM_RPM_8930_SEL_PM8917_S8				= 37,
	MSM_RPM_8930_SEL_PM8917_L1				= 38,
	MSM_RPM_8930_SEL_PM8917_L2				= 39,
	MSM_RPM_8930_SEL_PM8917_L3				= 40,
	MSM_RPM_8930_SEL_PM8917_L4				= 41,
	MSM_RPM_8930_SEL_PM8917_L5				= 42,
	MSM_RPM_8930_SEL_PM8917_L6				= 43,
	MSM_RPM_8930_SEL_PM8917_L7				= 44,
	MSM_RPM_8930_SEL_PM8917_L8				= 45,
	MSM_RPM_8930_SEL_PM8917_L9				= 46,
	MSM_RPM_8930_SEL_PM8917_L10				= 47,
	MSM_RPM_8930_SEL_PM8917_L11				= 48,
	MSM_RPM_8930_SEL_PM8917_L12				= 49,
	MSM_RPM_8930_SEL_PM8917_L14				= 50,
	MSM_RPM_8930_SEL_PM8917_L15				= 51,
	MSM_RPM_8930_SEL_PM8917_L16				= 52,
	MSM_RPM_8930_SEL_PM8917_L17				= 53,
	MSM_RPM_8930_SEL_PM8917_L18				= 54,
	MSM_RPM_8930_SEL_PM8917_L21				= 55,
	MSM_RPM_8930_SEL_PM8917_L22				= 56,
	MSM_RPM_8930_SEL_PM8917_L23				= 57,
	MSM_RPM_8930_SEL_PM8917_L24				= 58,
	MSM_RPM_8930_SEL_PM8917_L25				= 59,
	MSM_RPM_8930_SEL_PM8917_L26				= 60,
	MSM_RPM_8930_SEL_PM8917_L27				= 61,
	MSM_RPM_8930_SEL_PM8917_L28				= 62,
	MSM_RPM_8930_SEL_PM8917_L29				= 63,
	MSM_RPM_8930_SEL_PM8917_L30				= 64,
	MSM_RPM_8930_SEL_PM8917_L31				= 65,
	MSM_RPM_8930_SEL_PM8917_L32				= 66,
	MSM_RPM_8930_SEL_PM8917_L33				= 67,
	MSM_RPM_8930_SEL_PM8917_L34				= 68,
	MSM_RPM_8930_SEL_PM8917_L35				= 69,
	MSM_RPM_8930_SEL_PM8917_L36				= 70,
	MSM_RPM_8930_SEL_PM8917_CLK1				= 71,
	MSM_RPM_8930_SEL_PM8917_CLK2				= 72,
	MSM_RPM_8930_SEL_PM8917_LVS1				= 73,
	MSM_RPM_8930_SEL_PM8917_LVS3				= 74,
	MSM_RPM_8930_SEL_PM8917_LVS4				= 75,
	MSM_RPM_8930_SEL_PM8917_LVS5				= 76,
	MSM_RPM_8930_SEL_PM8917_LVS6				= 77,
	MSM_RPM_8930_SEL_PM8917_LVS7				= 78,

	MSM_RPM_8930_SEL_NCP					= 80,
	MSM_RPM_8930_SEL_CXO_BUFFERS				= 81,
	MSM_RPM_8930_SEL_USB_OTG_SWITCH				= 82,
	MSM_RPM_8930_SEL_HDMI_SWITCH				= 83,
	MSM_RPM_8930_SEL_DDR_DMM				= 84,
	MSM_RPM_8930_SEL_VOLTAGE_CORNER				= 87,

	MSM_RPM_8930_SEL_LAST = MSM_RPM_8930_SEL_VOLTAGE_CORNER,
};

enum {
	MSM_RPM_8930_ID_NOTIFICATION_CONFIGURED_0		= 0,
	MSM_RPM_8930_ID_NOTIFICATION_CONFIGURED_3 =
		MSM_RPM_8930_ID_NOTIFICATION_CONFIGURED_0 + 3,

	MSM_RPM_8930_ID_NOTIFICATION_REGISTERED_0		= 4,
	MSM_RPM_8930_ID_NOTIFICATION_REGISTERED_3 =
		MSM_RPM_8930_ID_NOTIFICATION_REGISTERED_0 + 3,

	MSM_RPM_8930_ID_INVALIDATE_0				= 8,
	MSM_RPM_8930_ID_INVALIDATE_7 =
		MSM_RPM_8930_ID_INVALIDATE_0 + 7,

	MSM_RPM_8930_ID_TRIGGER_TIMED_TO_			= 16,
	MSM_RPM_8930_ID_TRIGGER_TIMED_SCLK_COUNT		= 17,
	MSM_RPM_8930_ID_RPM_CTL					= 18,
	MSM_RPM_8930_ID_RESERVED_0				= 19,
	MSM_RPM_8930_ID_RESERVED_5 =
		MSM_RPM_8930_ID_RESERVED_0 + 5,
	MSM_RPM_8930_ID_CXO_CLK					= 25,
	MSM_RPM_8930_ID_PXO_CLK					= 26,
	MSM_RPM_8930_ID_APPS_FABRIC_CLK				= 27,
	MSM_RPM_8930_ID_SYSTEM_FABRIC_CLK			= 28,
	MSM_RPM_8930_ID_MM_FABRIC_CLK				= 29,
	MSM_RPM_8930_ID_DAYTONA_FABRIC_CLK			= 30,
	MSM_RPM_8930_ID_SFPB_CLK				= 31,
	MSM_RPM_8930_ID_CFPB_CLK				= 32,
	MSM_RPM_8930_ID_MMFPB_CLK				= 33,
	MSM_RPM_8930_ID_EBI1_CLK				= 34,
	MSM_RPM_8930_ID_APPS_FABRIC_CFG_HALT_0			= 35,
	MSM_RPM_8930_ID_APPS_FABRIC_CFG_HALT_1			= 36,
	MSM_RPM_8930_ID_APPS_FABRIC_CFG_CLKMOD_0		= 37,
	MSM_RPM_8930_ID_APPS_FABRIC_CFG_CLKMOD_1		= 38,
	MSM_RPM_8930_ID_APPS_FABRIC_CFG_CLKMOD_2		= 39,
	MSM_RPM_8930_ID_APPS_FABRIC_CFG_IOCTL			= 40,
	MSM_RPM_8930_ID_APPS_FABRIC_ARB_0			= 41,
	MSM_RPM_8930_ID_APPS_FABRIC_ARB_5 =
		MSM_RPM_8930_ID_APPS_FABRIC_ARB_0 + 5,
	MSM_RPM_8930_ID_SYS_FABRIC_CFG_HALT_0			= 47,
	MSM_RPM_8930_ID_SYS_FABRIC_CFG_HALT_1			= 48,
	MSM_RPM_8930_ID_SYS_FABRIC_CFG_CLKMOD_0			= 49,
	MSM_RPM_8930_ID_SYS_FABRIC_CFG_CLKMOD_1			= 50,
	MSM_RPM_8930_ID_SYS_FABRIC_CFG_CLKMOD_2			= 51,
	MSM_RPM_8930_ID_SYS_FABRIC_CFG_IOCTL			= 52,
	MSM_RPM_8930_ID_SYSTEM_FABRIC_ARB_0			= 53,
	MSM_RPM_8930_ID_SYSTEM_FABRIC_ARB_19 =
		MSM_RPM_8930_ID_SYSTEM_FABRIC_ARB_0 + 19,
	MSM_RPM_8930_ID_MMSS_FABRIC_CFG_HALT_0			= 73,
	MSM_RPM_8930_ID_MMSS_FABRIC_CFG_HALT_1			= 74,
	MSM_RPM_8930_ID_MMSS_FABRIC_CFG_CLKMOD_0		= 75,
	MSM_RPM_8930_ID_MMSS_FABRIC_CFG_CLKMOD_1		= 76,
	MSM_RPM_8930_ID_MMSS_FABRIC_CFG_CLKMOD_2		= 77,
	MSM_RPM_8930_ID_MMSS_FABRIC_CFG_IOCTL			= 78,
	MSM_RPM_8930_ID_MM_FABRIC_ARB_0				= 79,
	MSM_RPM_8930_ID_MM_FABRIC_ARB_10 =
		MSM_RPM_8930_ID_MM_FABRIC_ARB_0	+ 10,

	
	MSM_RPM_8930_ID_PM8038_S1_0		= 90,
	MSM_RPM_8930_ID_PM8038_S1_1		= 91,
	MSM_RPM_8930_ID_PM8038_S2_0		= 92,
	MSM_RPM_8930_ID_PM8038_S2_1		= 93,
	MSM_RPM_8930_ID_PM8038_S3_0		= 94,
	MSM_RPM_8930_ID_PM8038_S3_1		= 95,
	MSM_RPM_8930_ID_PM8038_S4_0		= 96,
	MSM_RPM_8930_ID_PM8038_S4_1		= 97,
	MSM_RPM_8930_ID_PM8038_S5_0		= 98,
	MSM_RPM_8930_ID_PM8038_S5_1		= 99,
	MSM_RPM_8930_ID_PM8038_S6_0		= 100,
	MSM_RPM_8930_ID_PM8038_S6_1		= 101,
	MSM_RPM_8930_ID_PM8038_L1_0		= 102,
	MSM_RPM_8930_ID_PM8038_L1_1		= 103,
	MSM_RPM_8930_ID_PM8038_L2_0		= 104,
	MSM_RPM_8930_ID_PM8038_L2_1		= 105,
	MSM_RPM_8930_ID_PM8038_L3_0		= 106,
	MSM_RPM_8930_ID_PM8038_L3_1		= 107,
	MSM_RPM_8930_ID_PM8038_L4_0		= 108,
	MSM_RPM_8930_ID_PM8038_L4_1		= 109,
	MSM_RPM_8930_ID_PM8038_L5_0		= 110,
	MSM_RPM_8930_ID_PM8038_L5_1		= 111,
	MSM_RPM_8930_ID_PM8038_L6_0		= 112,
	MSM_RPM_8930_ID_PM8038_L6_1		= 113,
	MSM_RPM_8930_ID_PM8038_L7_0		= 114,
	MSM_RPM_8930_ID_PM8038_L7_1		= 115,
	MSM_RPM_8930_ID_PM8038_L8_0		= 116,
	MSM_RPM_8930_ID_PM8038_L8_1		= 117,
	MSM_RPM_8930_ID_PM8038_L9_0		= 118,
	MSM_RPM_8930_ID_PM8038_L9_1		= 119,
	MSM_RPM_8930_ID_PM8038_L10_0		= 120,
	MSM_RPM_8930_ID_PM8038_L10_1		= 121,
	MSM_RPM_8930_ID_PM8038_L11_0		= 122,
	MSM_RPM_8930_ID_PM8038_L11_1		= 123,
	MSM_RPM_8930_ID_PM8038_L12_0		= 124,
	MSM_RPM_8930_ID_PM8038_L12_1		= 125,
	MSM_RPM_8930_ID_PM8038_L13_0		= 126,
	MSM_RPM_8930_ID_PM8038_L13_1		= 127,
	MSM_RPM_8930_ID_PM8038_L14_0		= 128,
	MSM_RPM_8930_ID_PM8038_L14_1		= 129,
	MSM_RPM_8930_ID_PM8038_L15_0		= 130,
	MSM_RPM_8930_ID_PM8038_L15_1		= 131,
	MSM_RPM_8930_ID_PM8038_L16_0		= 132,
	MSM_RPM_8930_ID_PM8038_L16_1		= 133,
	MSM_RPM_8930_ID_PM8038_L17_0		= 134,
	MSM_RPM_8930_ID_PM8038_L17_1		= 135,
	MSM_RPM_8930_ID_PM8038_L18_0		= 136,
	MSM_RPM_8930_ID_PM8038_L18_1		= 137,
	MSM_RPM_8930_ID_PM8038_L19_0		= 138,
	MSM_RPM_8930_ID_PM8038_L19_1		= 139,
	MSM_RPM_8930_ID_PM8038_L20_0		= 140,
	MSM_RPM_8930_ID_PM8038_L20_1		= 141,
	MSM_RPM_8930_ID_PM8038_L21_0		= 142,
	MSM_RPM_8930_ID_PM8038_L21_1		= 143,
	MSM_RPM_8930_ID_PM8038_L22_0		= 144,
	MSM_RPM_8930_ID_PM8038_L22_1		= 145,
	MSM_RPM_8930_ID_PM8038_L23_0		= 146,
	MSM_RPM_8930_ID_PM8038_L23_1		= 147,
	MSM_RPM_8930_ID_PM8038_L24_0		= 148,
	MSM_RPM_8930_ID_PM8038_L24_1		= 149,
	MSM_RPM_8930_ID_PM8038_L25_0		= 150,
	MSM_RPM_8930_ID_PM8038_L25_1		= 151,
	MSM_RPM_8930_ID_PM8038_L26_0		= 152,
	MSM_RPM_8930_ID_PM8038_L26_1		= 153,
	MSM_RPM_8930_ID_PM8038_L27_0		= 154,
	MSM_RPM_8930_ID_PM8038_L27_1		= 155,
	MSM_RPM_8930_ID_PM8038_CLK1_0		= 156,
	MSM_RPM_8930_ID_PM8038_CLK1_1		= 157,
	MSM_RPM_8930_ID_PM8038_CLK2_0		= 158,
	MSM_RPM_8930_ID_PM8038_CLK2_1		= 159,
	MSM_RPM_8930_ID_PM8038_LVS1		= 160,
	MSM_RPM_8930_ID_PM8038_LVS2		= 161,
	MSM_RPM_8930_ID_PM8038_NCP_0		= 162,
	MSM_RPM_8930_ID_PM8038_NCP_1		= 163,
	MSM_RPM_8930_ID_PM8038_CXO_BUFFERS	= 164,
	MSM_RPM_8930_ID_PM8038_USB_OTG_SWITCH	= 165,
	MSM_RPM_8930_ID_PM8038_HDMI_SWITCH	= 166,
	MSM_RPM_8930_ID_PM8038_QDSS_CLK		= 167,
	MSM_RPM_8930_ID_PM8038_VOLTAGE_CORNER	= 168,
	MSM_RPM_8930_ID_PM8038_LAST = MSM_RPM_8930_ID_PM8038_VOLTAGE_CORNER,

	
	MSM_RPM_8930_ID_PM8917_S1_0		= 90,
	MSM_RPM_8930_ID_PM8917_S1_1		= 91,
	MSM_RPM_8930_ID_PM8917_S2_0		= 92,
	MSM_RPM_8930_ID_PM8917_S2_1		= 93,
	MSM_RPM_8930_ID_PM8917_S3_0		= 94,
	MSM_RPM_8930_ID_PM8917_S3_1		= 95,
	MSM_RPM_8930_ID_PM8917_S4_0		= 96,
	MSM_RPM_8930_ID_PM8917_S4_1		= 97,
	MSM_RPM_8930_ID_PM8917_S5_0		= 98,
	MSM_RPM_8930_ID_PM8917_S5_1		= 99,
	MSM_RPM_8930_ID_PM8917_S6_0		= 100,
	MSM_RPM_8930_ID_PM8917_S6_1		= 101,
	MSM_RPM_8930_ID_PM8917_S7_0		= 102,
	MSM_RPM_8930_ID_PM8917_S7_1		= 103,
	MSM_RPM_8930_ID_PM8917_S8_0		= 104,
	MSM_RPM_8930_ID_PM8917_S8_1		= 105,
	MSM_RPM_8930_ID_PM8917_L1_0		= 106,
	MSM_RPM_8930_ID_PM8917_L1_1		= 107,
	MSM_RPM_8930_ID_PM8917_L2_0		= 108,
	MSM_RPM_8930_ID_PM8917_L2_1		= 109,
	MSM_RPM_8930_ID_PM8917_L3_0		= 110,
	MSM_RPM_8930_ID_PM8917_L3_1		= 111,
	MSM_RPM_8930_ID_PM8917_L4_0		= 112,
	MSM_RPM_8930_ID_PM8917_L4_1		= 113,
	MSM_RPM_8930_ID_PM8917_L5_0		= 114,
	MSM_RPM_8930_ID_PM8917_L5_1		= 115,
	MSM_RPM_8930_ID_PM8917_L6_0		= 116,
	MSM_RPM_8930_ID_PM8917_L6_1		= 117,
	MSM_RPM_8930_ID_PM8917_L7_0		= 118,
	MSM_RPM_8930_ID_PM8917_L7_1		= 119,
	MSM_RPM_8930_ID_PM8917_L8_0		= 120,
	MSM_RPM_8930_ID_PM8917_L8_1		= 121,
	MSM_RPM_8930_ID_PM8917_L9_0		= 122,
	MSM_RPM_8930_ID_PM8917_L9_1		= 123,
	MSM_RPM_8930_ID_PM8917_L10_0		= 124,
	MSM_RPM_8930_ID_PM8917_L10_1		= 125,
	MSM_RPM_8930_ID_PM8917_L11_0		= 126,
	MSM_RPM_8930_ID_PM8917_L11_1		= 127,
	MSM_RPM_8930_ID_PM8917_L12_0		= 128,
	MSM_RPM_8930_ID_PM8917_L12_1		= 129,
	MSM_RPM_8930_ID_PM8917_L14_0		= 130,
	MSM_RPM_8930_ID_PM8917_L14_1		= 131,
	MSM_RPM_8930_ID_PM8917_L15_0		= 132,
	MSM_RPM_8930_ID_PM8917_L15_1		= 133,
	MSM_RPM_8930_ID_PM8917_L16_0		= 134,
	MSM_RPM_8930_ID_PM8917_L16_1		= 135,
	MSM_RPM_8930_ID_PM8917_L17_0		= 136,
	MSM_RPM_8930_ID_PM8917_L17_1		= 137,
	MSM_RPM_8930_ID_PM8917_L18_0		= 138,
	MSM_RPM_8930_ID_PM8917_L18_1		= 139,
	MSM_RPM_8930_ID_PM8917_L21_0		= 140,
	MSM_RPM_8930_ID_PM8917_L21_1		= 141,
	MSM_RPM_8930_ID_PM8917_L22_0		= 142,
	MSM_RPM_8930_ID_PM8917_L22_1		= 143,
	MSM_RPM_8930_ID_PM8917_L23_0		= 144,
	MSM_RPM_8930_ID_PM8917_L23_1		= 145,
	MSM_RPM_8930_ID_PM8917_L24_0		= 146,
	MSM_RPM_8930_ID_PM8917_L24_1		= 147,
	MSM_RPM_8930_ID_PM8917_L25_0		= 148,
	MSM_RPM_8930_ID_PM8917_L25_1		= 149,
	MSM_RPM_8930_ID_PM8917_L26_0		= 150,
	MSM_RPM_8930_ID_PM8917_L26_1		= 151,
	MSM_RPM_8930_ID_PM8917_L27_0		= 152,
	MSM_RPM_8930_ID_PM8917_L27_1		= 153,
	MSM_RPM_8930_ID_PM8917_L28_0		= 154,
	MSM_RPM_8930_ID_PM8917_L28_1		= 155,
	MSM_RPM_8930_ID_PM8917_L29_0		= 156,
	MSM_RPM_8930_ID_PM8917_L29_1		= 157,
	MSM_RPM_8930_ID_PM8917_L30_0		= 158,
	MSM_RPM_8930_ID_PM8917_L30_1		= 159,
	MSM_RPM_8930_ID_PM8917_L31_0		= 160,
	MSM_RPM_8930_ID_PM8917_L31_1		= 161,
	MSM_RPM_8930_ID_PM8917_L32_0		= 162,
	MSM_RPM_8930_ID_PM8917_L32_1		= 163,
	MSM_RPM_8930_ID_PM8917_L33_0		= 164,
	MSM_RPM_8930_ID_PM8917_L33_1		= 165,
	MSM_RPM_8930_ID_PM8917_L34_0		= 166,
	MSM_RPM_8930_ID_PM8917_L34_1		= 167,
	MSM_RPM_8930_ID_PM8917_L35_0		= 168,
	MSM_RPM_8930_ID_PM8917_L35_1		= 169,
	MSM_RPM_8930_ID_PM8917_L36_0		= 170,
	MSM_RPM_8930_ID_PM8917_L36_1		= 171,
	MSM_RPM_8930_ID_PM8917_CLK1_0		= 172,
	MSM_RPM_8930_ID_PM8917_CLK1_1		= 173,
	MSM_RPM_8930_ID_PM8917_CLK2_0		= 174,
	MSM_RPM_8930_ID_PM8917_CLK2_1		= 175,
	MSM_RPM_8930_ID_PM8917_LVS1		= 176,
	MSM_RPM_8930_ID_PM8917_LVS3		= 177,
	MSM_RPM_8930_ID_PM8917_LVS4		= 178,
	MSM_RPM_8930_ID_PM8917_LVS5		= 179,
	MSM_RPM_8930_ID_PM8917_LVS6		= 180,
	MSM_RPM_8930_ID_PM8917_LVS7		= 181,
	MSM_RPM_8930_ID_PM8917_NCP_0		= 182,
	MSM_RPM_8930_ID_PM8917_NCP_1		= 183,
	MSM_RPM_8930_ID_PM8917_CXO_BUFFERS	= 184,
	MSM_RPM_8930_ID_PM8917_USB_OTG_SWITCH	= 185,
	MSM_RPM_8930_ID_PM8917_HDMI_SWITCH	= 186,
	MSM_RPM_8930_ID_PM8917_QDSS_CLK		= 187,
	MSM_RPM_8930_ID_PM8917_VOLTAGE_CORNER	= 188,

	MSM_RPM_8930_ID_LAST = MSM_RPM_8930_ID_PM8917_VOLTAGE_CORNER,
	MSM_RPM_8930_ID_PM8917_LAST = MSM_RPM_8930_ID_LAST,
};

enum {
	MSM_RPM_8930_STATUS_ID_VERSION_MAJOR			= 0,
	MSM_RPM_8930_STATUS_ID_VERSION_MINOR			= 1,
	MSM_RPM_8930_STATUS_ID_VERSION_BUILD			= 2,
	MSM_RPM_8930_STATUS_ID_SUPPORTED_RESOURCES_0		= 3,
	MSM_RPM_8930_STATUS_ID_SUPPORTED_RESOURCES_1		= 4,
	MSM_RPM_8930_STATUS_ID_SUPPORTED_RESOURCES_2		= 5,
	MSM_RPM_8930_STATUS_ID_RESERVED_SUPPORTED_RESOURCES_0	= 6,
	MSM_RPM_8930_STATUS_ID_SEQUENCE				= 7,
	MSM_RPM_8930_STATUS_ID_RPM_CTL				= 8,
	MSM_RPM_8930_STATUS_ID_CXO_CLK				= 9,
	MSM_RPM_8930_STATUS_ID_PXO_CLK				= 10,
	MSM_RPM_8930_STATUS_ID_APPS_FABRIC_CLK			= 11,
	MSM_RPM_8930_STATUS_ID_SYSTEM_FABRIC_CLK		= 12,
	MSM_RPM_8930_STATUS_ID_MM_FABRIC_CLK			= 13,
	MSM_RPM_8930_STATUS_ID_DAYTONA_FABRIC_CLK		= 14,
	MSM_RPM_8930_STATUS_ID_SFPB_CLK				= 15,
	MSM_RPM_8930_STATUS_ID_CFPB_CLK				= 16,
	MSM_RPM_8930_STATUS_ID_MMFPB_CLK			= 17,
	MSM_RPM_8930_STATUS_ID_EBI1_CLK				= 18,
	MSM_RPM_8930_STATUS_ID_APPS_FABRIC_CFG_HALT		= 19,
	MSM_RPM_8930_STATUS_ID_APPS_FABRIC_CFG_CLKMOD		= 20,
	MSM_RPM_8930_STATUS_ID_APPS_FABRIC_CFG_IOCTL		= 21,
	MSM_RPM_8930_STATUS_ID_APPS_FABRIC_ARB			= 22,
	MSM_RPM_8930_STATUS_ID_SYS_FABRIC_CFG_HALT		= 23,
	MSM_RPM_8930_STATUS_ID_SYS_FABRIC_CFG_CLKMOD		= 24,
	MSM_RPM_8930_STATUS_ID_SYS_FABRIC_CFG_IOCTL		= 25,
	MSM_RPM_8930_STATUS_ID_SYSTEM_FABRIC_ARB		= 26,
	MSM_RPM_8930_STATUS_ID_MMSS_FABRIC_CFG_HALT		= 27,
	MSM_RPM_8930_STATUS_ID_MMSS_FABRIC_CFG_CLKMOD		= 28,
	MSM_RPM_8930_STATUS_ID_MMSS_FABRIC_CFG_IOCTL		= 29,
	MSM_RPM_8930_STATUS_ID_MM_FABRIC_ARB			= 30,

	
	MSM_RPM_8930_STATUS_ID_PM8038_S1_0			= 31,
	MSM_RPM_8930_STATUS_ID_PM8038_S1_1			= 32,
	MSM_RPM_8930_STATUS_ID_PM8038_S2_0			= 33,
	MSM_RPM_8930_STATUS_ID_PM8038_S2_1			= 34,
	MSM_RPM_8930_STATUS_ID_PM8038_S3_0			= 35,
	MSM_RPM_8930_STATUS_ID_PM8038_S3_1			= 36,
	MSM_RPM_8930_STATUS_ID_PM8038_S4_0			= 37,
	MSM_RPM_8930_STATUS_ID_PM8038_S4_1			= 38,
	MSM_RPM_8930_STATUS_ID_PM8038_L1_0			= 43,
	MSM_RPM_8930_STATUS_ID_PM8038_L1_1			= 44,
	MSM_RPM_8930_STATUS_ID_PM8038_L2_0			= 45,
	MSM_RPM_8930_STATUS_ID_PM8038_L2_1			= 46,
	MSM_RPM_8930_STATUS_ID_PM8038_L3_0			= 47,
	MSM_RPM_8930_STATUS_ID_PM8038_L3_1			= 48,
	MSM_RPM_8930_STATUS_ID_PM8038_L4_0			= 49,
	MSM_RPM_8930_STATUS_ID_PM8038_L4_1			= 50,
	MSM_RPM_8930_STATUS_ID_PM8038_L5_0			= 51,
	MSM_RPM_8930_STATUS_ID_PM8038_L5_1			= 52,
	MSM_RPM_8930_STATUS_ID_PM8038_L6_0			= 53,
	MSM_RPM_8930_STATUS_ID_PM8038_L6_1			= 54,
	MSM_RPM_8930_STATUS_ID_PM8038_L7_0			= 55,
	MSM_RPM_8930_STATUS_ID_PM8038_L7_1			= 56,
	MSM_RPM_8930_STATUS_ID_PM8038_L8_0			= 57,
	MSM_RPM_8930_STATUS_ID_PM8038_L8_1			= 58,
	MSM_RPM_8930_STATUS_ID_PM8038_L9_0			= 59,
	MSM_RPM_8930_STATUS_ID_PM8038_L9_1			= 60,
	MSM_RPM_8930_STATUS_ID_PM8038_L10_0			= 61,
	MSM_RPM_8930_STATUS_ID_PM8038_L10_1			= 62,
	MSM_RPM_8930_STATUS_ID_PM8038_L11_0			= 63,
	MSM_RPM_8930_STATUS_ID_PM8038_L11_1			= 64,
	MSM_RPM_8930_STATUS_ID_PM8038_L12_0			= 65,
	MSM_RPM_8930_STATUS_ID_PM8038_L12_1			= 66,
	MSM_RPM_8930_STATUS_ID_PM8038_L13_0			= 67,
	MSM_RPM_8930_STATUS_ID_PM8038_L13_1			= 68,
	MSM_RPM_8930_STATUS_ID_PM8038_L14_0			= 69,
	MSM_RPM_8930_STATUS_ID_PM8038_L14_1			= 70,
	MSM_RPM_8930_STATUS_ID_PM8038_L15_0			= 71,
	MSM_RPM_8930_STATUS_ID_PM8038_L15_1			= 72,
	MSM_RPM_8930_STATUS_ID_PM8038_L16_0			= 73,
	MSM_RPM_8930_STATUS_ID_PM8038_L16_1			= 74,
	MSM_RPM_8930_STATUS_ID_PM8038_L17_0			= 75,
	MSM_RPM_8930_STATUS_ID_PM8038_L17_1			= 76,
	MSM_RPM_8930_STATUS_ID_PM8038_L18_0			= 77,
	MSM_RPM_8930_STATUS_ID_PM8038_L18_1			= 78,
	MSM_RPM_8930_STATUS_ID_PM8038_L19_0			= 79,
	MSM_RPM_8930_STATUS_ID_PM8038_L19_1			= 80,
	MSM_RPM_8930_STATUS_ID_PM8038_L20_0			= 81,
	MSM_RPM_8930_STATUS_ID_PM8038_L20_1			= 82,
	MSM_RPM_8930_STATUS_ID_PM8038_L21_0			= 83,
	MSM_RPM_8930_STATUS_ID_PM8038_L21_1			= 84,
	MSM_RPM_8930_STATUS_ID_PM8038_L22_0			= 85,
	MSM_RPM_8930_STATUS_ID_PM8038_L22_1			= 86,
	MSM_RPM_8930_STATUS_ID_PM8038_L23_0			= 87,
	MSM_RPM_8930_STATUS_ID_PM8038_L23_1			= 88,
	MSM_RPM_8930_STATUS_ID_PM8038_L24_0			= 89,
	MSM_RPM_8930_STATUS_ID_PM8038_L24_1			= 90,
	MSM_RPM_8930_STATUS_ID_PM8038_L25_0			= 91,
	MSM_RPM_8930_STATUS_ID_PM8038_L25_1			= 92,
	MSM_RPM_8930_STATUS_ID_PM8038_L26_0			= 93,
	MSM_RPM_8930_STATUS_ID_PM8038_L26_1			= 94,
	MSM_RPM_8930_STATUS_ID_PM8038_L27_0			= 95,
	MSM_RPM_8930_STATUS_ID_PM8038_L27_1			= 96,
	MSM_RPM_8930_STATUS_ID_PM8038_CLK1_0			= 97,
	MSM_RPM_8930_STATUS_ID_PM8038_CLK1_1			= 98,
	MSM_RPM_8930_STATUS_ID_PM8038_CLK2_0			= 99,
	MSM_RPM_8930_STATUS_ID_PM8038_CLK2_1			= 100,
	MSM_RPM_8930_STATUS_ID_PM8038_LVS1			= 101,
	MSM_RPM_8930_STATUS_ID_PM8038_LVS2			= 102,
	MSM_RPM_8930_STATUS_ID_PM8038_NCP_0			= 103,
	MSM_RPM_8930_STATUS_ID_PM8038_NCP_1			= 104,
	MSM_RPM_8930_STATUS_ID_PM8038_CXO_BUFFERS		= 105,
	MSM_RPM_8930_STATUS_ID_PM8038_USB_OTG_SWITCH		= 106,
	MSM_RPM_8930_STATUS_ID_PM8038_HDMI_SWITCH		= 107,
	MSM_RPM_8930_STATUS_ID_PM8038_QDSS_CLK			= 108,
	MSM_RPM_8930_STATUS_ID_PM8038_VOLTAGE_CORNER		= 109,

	MSM_RPM_8930_STATUS_ID_PM8038_LAST
		= MSM_RPM_8930_STATUS_ID_PM8038_VOLTAGE_CORNER,

	
	MSM_RPM_8930_STATUS_ID_PM8917_S1_0			= 31,
	MSM_RPM_8930_STATUS_ID_PM8917_S1_1			= 32,
	MSM_RPM_8930_STATUS_ID_PM8917_S2_0			= 33,
	MSM_RPM_8930_STATUS_ID_PM8917_S2_1			= 34,
	MSM_RPM_8930_STATUS_ID_PM8917_S3_0			= 35,
	MSM_RPM_8930_STATUS_ID_PM8917_S3_1			= 36,
	MSM_RPM_8930_STATUS_ID_PM8917_S4_0			= 37,
	MSM_RPM_8930_STATUS_ID_PM8917_S4_1			= 38,
	MSM_RPM_8930_STATUS_ID_PM8917_S5_0			= 39,
	MSM_RPM_8930_STATUS_ID_PM8917_S5_1			= 40,
	MSM_RPM_8930_STATUS_ID_PM8917_S6_0			= 41,
	MSM_RPM_8930_STATUS_ID_PM8917_S6_1			= 42,
	MSM_RPM_8930_STATUS_ID_PM8917_S7_0			= 43,
	MSM_RPM_8930_STATUS_ID_PM8917_S7_1			= 44,
	MSM_RPM_8930_STATUS_ID_PM8917_S8_0			= 45,
	MSM_RPM_8930_STATUS_ID_PM8917_S8_1			= 46,
	MSM_RPM_8930_STATUS_ID_PM8917_L1_0			= 47,
	MSM_RPM_8930_STATUS_ID_PM8917_L1_1			= 48,
	MSM_RPM_8930_STATUS_ID_PM8917_L2_0			= 49,
	MSM_RPM_8930_STATUS_ID_PM8917_L2_1			= 50,
	MSM_RPM_8930_STATUS_ID_PM8917_L3_0			= 51,
	MSM_RPM_8930_STATUS_ID_PM8917_L3_1			= 52,
	MSM_RPM_8930_STATUS_ID_PM8917_L4_0			= 53,
	MSM_RPM_8930_STATUS_ID_PM8917_L4_1			= 54,
	MSM_RPM_8930_STATUS_ID_PM8917_L5_0			= 55,
	MSM_RPM_8930_STATUS_ID_PM8917_L5_1			= 56,
	MSM_RPM_8930_STATUS_ID_PM8917_L6_0			= 57,
	MSM_RPM_8930_STATUS_ID_PM8917_L6_1			= 58,
	MSM_RPM_8930_STATUS_ID_PM8917_L7_0			= 59,
	MSM_RPM_8930_STATUS_ID_PM8917_L7_1			= 60,
	MSM_RPM_8930_STATUS_ID_PM8917_L8_0			= 61,
	MSM_RPM_8930_STATUS_ID_PM8917_L8_1			= 62,
	MSM_RPM_8930_STATUS_ID_PM8917_L9_0			= 63,
	MSM_RPM_8930_STATUS_ID_PM8917_L9_1			= 64,
	MSM_RPM_8930_STATUS_ID_PM8917_L10_0			= 65,
	MSM_RPM_8930_STATUS_ID_PM8917_L10_1			= 66,
	MSM_RPM_8930_STATUS_ID_PM8917_L11_0			= 67,
	MSM_RPM_8930_STATUS_ID_PM8917_L11_1			= 68,
	MSM_RPM_8930_STATUS_ID_PM8917_L12_0			= 69,
	MSM_RPM_8930_STATUS_ID_PM8917_L12_1			= 70,
	MSM_RPM_8930_STATUS_ID_PM8917_L14_0			= 71,
	MSM_RPM_8930_STATUS_ID_PM8917_L14_1			= 72,
	MSM_RPM_8930_STATUS_ID_PM8917_L15_0			= 73,
	MSM_RPM_8930_STATUS_ID_PM8917_L15_1			= 74,
	MSM_RPM_8930_STATUS_ID_PM8917_L16_0			= 75,
	MSM_RPM_8930_STATUS_ID_PM8917_L16_1			= 76,
	MSM_RPM_8930_STATUS_ID_PM8917_L17_0			= 77,
	MSM_RPM_8930_STATUS_ID_PM8917_L17_1			= 78,
	MSM_RPM_8930_STATUS_ID_PM8917_L18_0			= 79,
	MSM_RPM_8930_STATUS_ID_PM8917_L18_1			= 80,
	MSM_RPM_8930_STATUS_ID_PM8917_L21_0			= 81,
	MSM_RPM_8930_STATUS_ID_PM8917_L21_1			= 82,
	MSM_RPM_8930_STATUS_ID_PM8917_L22_0			= 83,
	MSM_RPM_8930_STATUS_ID_PM8917_L22_1			= 84,
	MSM_RPM_8930_STATUS_ID_PM8917_L23_0			= 85,
	MSM_RPM_8930_STATUS_ID_PM8917_L23_1			= 86,
	MSM_RPM_8930_STATUS_ID_PM8917_L24_0			= 87,
	MSM_RPM_8930_STATUS_ID_PM8917_L24_1			= 88,
	MSM_RPM_8930_STATUS_ID_PM8917_L25_0			= 89,
	MSM_RPM_8930_STATUS_ID_PM8917_L25_1			= 90,
	MSM_RPM_8930_STATUS_ID_PM8917_L26_0			= 91,
	MSM_RPM_8930_STATUS_ID_PM8917_L26_1			= 92,
	MSM_RPM_8930_STATUS_ID_PM8917_L27_0			= 93,
	MSM_RPM_8930_STATUS_ID_PM8917_L27_1			= 94,
	MSM_RPM_8930_STATUS_ID_PM8917_L28_0			= 95,
	MSM_RPM_8930_STATUS_ID_PM8917_L28_1			= 96,
	MSM_RPM_8930_STATUS_ID_PM8917_L29_0			= 97,
	MSM_RPM_8930_STATUS_ID_PM8917_L29_1			= 98,
	MSM_RPM_8930_STATUS_ID_PM8917_L30_0			= 99,
	MSM_RPM_8930_STATUS_ID_PM8917_L30_1			= 100,
	MSM_RPM_8930_STATUS_ID_PM8917_L31_0			= 101,
	MSM_RPM_8930_STATUS_ID_PM8917_L31_1			= 102,
	MSM_RPM_8930_STATUS_ID_PM8917_L32_0			= 103,
	MSM_RPM_8930_STATUS_ID_PM8917_L32_1			= 104,
	MSM_RPM_8930_STATUS_ID_PM8917_L33_0			= 105,
	MSM_RPM_8930_STATUS_ID_PM8917_L33_1			= 106,
	MSM_RPM_8930_STATUS_ID_PM8917_L34_0			= 107,
	MSM_RPM_8930_STATUS_ID_PM8917_L34_1			= 108,
	MSM_RPM_8930_STATUS_ID_PM8917_L35_0			= 109,
	MSM_RPM_8930_STATUS_ID_PM8917_L35_1			= 110,
	MSM_RPM_8930_STATUS_ID_PM8917_L36_0			= 111,
	MSM_RPM_8930_STATUS_ID_PM8917_L36_1			= 112,
	MSM_RPM_8930_STATUS_ID_PM8917_CLK1_0			= 113,
	MSM_RPM_8930_STATUS_ID_PM8917_CLK1_1			= 114,
	MSM_RPM_8930_STATUS_ID_PM8917_CLK2_0			= 115,
	MSM_RPM_8930_STATUS_ID_PM8917_CLK2_1			= 116,
	MSM_RPM_8930_STATUS_ID_PM8917_LVS1			= 117,
	MSM_RPM_8930_STATUS_ID_PM8917_LVS3			= 118,
	MSM_RPM_8930_STATUS_ID_PM8917_LVS4			= 119,
	MSM_RPM_8930_STATUS_ID_PM8917_LVS5			= 120,
	MSM_RPM_8930_STATUS_ID_PM8917_LVS6			= 121,
	MSM_RPM_8930_STATUS_ID_PM8917_LVS7			= 122,
	MSM_RPM_8930_STATUS_ID_PM8917_NCP_0			= 123,
	MSM_RPM_8930_STATUS_ID_PM8917_NCP_1			= 124,
	MSM_RPM_8930_STATUS_ID_PM8917_CXO_BUFFERS		= 125,
	MSM_RPM_8930_STATUS_ID_PM8917_USB_OTG_SWITCH		= 126,
	MSM_RPM_8930_STATUS_ID_PM8917_HDMI_SWITCH		= 127,
	MSM_RPM_8930_STATUS_ID_PM8917_QDSS_CLK			= 128,
	MSM_RPM_8930_STATUS_ID_PM8917_VOLTAGE_CORNER		= 129,
	MSM_RPM_8930_STATUS_ID_PM8917_PM8917_LAST
			= MSM_RPM_8930_STATUS_ID_PM8917_VOLTAGE_CORNER,
};

#endif 
