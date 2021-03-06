/*
 * Contains register definitions common to the Book E PowerPC
 * specification.  Notice that while the IBM-40x series of CPUs
 * are not true Book E PowerPCs, they borrowed a number of features
 * before Book E was finalized, and are included here as well.  Unfortunately,
 * they sometimes used different locations than true Book E CPUs did.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation.
 *
 * Copyright 2009-2010 Freescale Semiconductor, Inc.
 */
#ifdef __KERNEL__
#ifndef __ASM_POWERPC_REG_BOOKE_H__
#define __ASM_POWERPC_REG_BOOKE_H__

#define MSR_GS		(1<<28) 
#define MSR_UCLE	(1<<26)	
#define MSR_SPE		(1<<25)	
#define MSR_DWE		(1<<10)	
#define MSR_UBLE	(1<<10)	
#define MSR_IS		MSR_IR	
#define MSR_DS		MSR_DR	
#define MSR_PMM		(1<<2)	
#define MSR_CM		(1<<31) 

#if defined(CONFIG_PPC_BOOK3E_64)
#define MSR_64BIT	MSR_CM

#define MSR_		MSR_ME | MSR_CE
#define MSR_KERNEL	MSR_ | MSR_64BIT
#define MSR_USER32	MSR_ | MSR_PR | MSR_EE
#define MSR_USER64	MSR_USER32 | MSR_64BIT
#elif defined (CONFIG_40x)
#define MSR_KERNEL	(MSR_ME|MSR_RI|MSR_IR|MSR_DR|MSR_CE)
#define MSR_USER	(MSR_KERNEL|MSR_PR|MSR_EE)
#else
#define MSR_KERNEL	(MSR_ME|MSR_RI|MSR_CE)
#define MSR_USER	(MSR_KERNEL|MSR_PR|MSR_EE)
#endif

#define SPRN_DECAR	0x036	
#define SPRN_IVPR	0x03F	
#define SPRN_USPRG0	0x100	
#define SPRN_SPRG3R	0x103	
#define SPRN_SPRG4R	0x104	
#define SPRN_SPRG5R	0x105	
#define SPRN_SPRG6R	0x106	
#define SPRN_SPRG7R	0x107	
#define SPRN_SPRG4W	0x114	
#define SPRN_SPRG5W	0x115	
#define SPRN_SPRG6W	0x116	
#define SPRN_SPRG7W	0x117	
#define SPRN_EPCR	0x133	
#define SPRN_DBCR2	0x136	
#define SPRN_IAC3	0x13A	
#define SPRN_IAC4	0x13B	
#define SPRN_DVC1	0x13E	
#define SPRN_DVC2	0x13F	
#define SPRN_MAS8	0x155	
#define SPRN_TLB0PS	0x158	
#define SPRN_TLB1PS	0x159	
#define SPRN_MAS5_MAS6	0x15c	
#define SPRN_MAS8_MAS1	0x15d	
#define SPRN_EPTCFG	0x15e	
#define SPRN_MAS7_MAS3	0x174	
#define SPRN_MAS0_MAS1	0x175	
#define SPRN_IVOR0	0x190	
#define SPRN_IVOR1	0x191	
#define SPRN_IVOR2	0x192	
#define SPRN_IVOR3	0x193	
#define SPRN_IVOR4	0x194	
#define SPRN_IVOR5	0x195	
#define SPRN_IVOR6	0x196	
#define SPRN_IVOR7	0x197	
#define SPRN_IVOR8	0x198	
#define SPRN_IVOR9	0x199	
#define SPRN_IVOR10	0x19A	
#define SPRN_IVOR11	0x19B	
#define SPRN_IVOR12	0x19C	
#define SPRN_IVOR13	0x19D	
#define SPRN_IVOR14	0x19E	
#define SPRN_IVOR15	0x19F	
#define SPRN_IVOR38	0x1B0	
#define SPRN_IVOR39	0x1B1	
#define SPRN_IVOR40	0x1B2	
#define SPRN_IVOR41	0x1B3	
#define SPRN_SPEFSCR	0x200	
#define SPRN_BBEAR	0x201	
#define SPRN_BBTAR	0x202	
#define SPRN_L1CFG0	0x203	
#define SPRN_L1CFG1	0x204	
#define SPRN_ATB	0x20E	
#define SPRN_ATBL	0x20E	
#define SPRN_ATBU	0x20F	
#define SPRN_IVOR32	0x210	
#define SPRN_IVOR33	0x211	
#define SPRN_IVOR34	0x212	
#define SPRN_IVOR35	0x213	
#define SPRN_IVOR36	0x214	
#define SPRN_IVOR37	0x215	
#define SPRN_MCARU	0x239	
#define SPRN_MCSRR0	0x23A	
#define SPRN_MCSRR1	0x23B	
#define SPRN_MCSR	0x23C	
#define SPRN_MCAR	0x23D	
#define SPRN_DSRR0	0x23E	
#define SPRN_DSRR1	0x23F	
#define SPRN_SPRG8	0x25C	
#define SPRN_SPRG9	0x25D	
#define SPRN_L1CSR2	0x25E	
#define SPRN_MAS0	0x270	
#define SPRN_MAS1	0x271	
#define SPRN_MAS2	0x272	
#define SPRN_MAS3	0x273	
#define SPRN_MAS4	0x274	
#define SPRN_MAS5	0x153	
#define SPRN_MAS6	0x276	
#define SPRN_PID1	0x279	
#define SPRN_PID2	0x27A	
#define SPRN_TLB0CFG	0x2B0	
#define SPRN_TLB1CFG	0x2B1	
#define SPRN_TLB2CFG	0x2B2	
#define SPRN_TLB3CFG	0x2B3	
#define SPRN_EPR	0x2BE	
#define SPRN_CCR1	0x378	
#define SPRN_ZPR	0x3B0	
#define SPRN_MAS7	0x3B0	
#define SPRN_MMUCR	0x3B2	
#define SPRN_CCR0	0x3B3	
#define SPRN_EPLC	0x3B3	
#define SPRN_EPSC	0x3B4	
#define SPRN_SGR	0x3B9	
#define SPRN_DCWR	0x3BA	
#define SPRN_SLER	0x3BB	
#define SPRN_SU0R	0x3BC	
#define SPRN_DCMP	0x3D1	
#define SPRN_ICDBDR	0x3D3	
#define SPRN_EVPR	0x3D6	
#define SPRN_L1CSR0	0x3F2	
#define SPRN_L1CSR1	0x3F3	
#define SPRN_MMUCSR0	0x3F4	
#define SPRN_MMUCFG	0x3F7	
#define SPRN_PIT	0x3DB	
#define SPRN_BUCSR	0x3F5	
#define SPRN_L2CSR0	0x3F9	
#define SPRN_L2CSR1	0x3FA	
#define SPRN_DCCR	0x3FA	
#define SPRN_ICCR	0x3FB	
#define SPRN_SVR	0x3FF	

#ifdef CONFIG_BOOKE
#define SPRN_CSRR0	0x03A	
#define SPRN_CSRR1	0x03B	
#define SPRN_DEAR	0x03D	
#define SPRN_ESR	0x03E	
#define SPRN_PIR	0x11E	
#define SPRN_DBSR	0x130	
#define SPRN_DBCR0	0x134	
#define SPRN_DBCR1	0x135	
#define SPRN_IAC1	0x138	
#define SPRN_IAC2	0x139	
#define SPRN_DAC1	0x13C	
#define SPRN_DAC2	0x13D	
#define SPRN_TSR	0x150	
#define SPRN_TCR	0x154	
#endif 
#ifdef CONFIG_40x
#define SPRN_DBCR1	0x3BD			
#define SPRN_ESR	0x3D4	
#define SPRN_DEAR	0x3D5	
#define SPRN_TSR	0x3D8	
#define SPRN_TCR	0x3DA	
#define SPRN_SRR2	0x3DE	
#define SPRN_SRR3	0x3DF	
#define SPRN_DBSR	0x3F0			
#define SPRN_DBCR0	0x3F2	
#define SPRN_DAC1	0x3F6	
#define SPRN_DAC2	0x3F7	
#define SPRN_CSRR0	SPRN_SRR2 
#define SPRN_CSRR1	SPRN_SRR3 
#endif

#ifdef CONFIG_PPC_ICSWX
#define SPRN_HACOP	0x15F	
#endif

#define	CCR1_DPC	0x00000100 
#define	CCR1_TCS	0x00000080 

#define MCSR_MCS	0x80000000 
#define MCSR_IB		0x40000000 
#define MCSR_DRB	0x20000000 
#define MCSR_DWB	0x10000000 
#define MCSR_TLBP	0x08000000 
#define MCSR_ICP	0x04000000 
#define MCSR_DCSP	0x02000000 
#define MCSR_DCFP	0x01000000 
#define MCSR_IMPE	0x00800000 

#define PPC47x_MCSR_GPR	0x01000000 
#define PPC47x_MCSR_FPR	0x00800000 
#define PPC47x_MCSR_IPR	0x00400000 

#ifdef CONFIG_E500
#define MCSR_MCP 	0x80000000UL 
#define MCSR_ICPERR 	0x40000000UL 

#define MCSR_DCP_PERR 	0x20000000UL 
#define MCSR_DCPERR 	0x10000000UL 
#define MCSR_BUS_IAERR 	0x00000080UL 
#define MCSR_BUS_RAERR 	0x00000040UL 
#define MCSR_BUS_WAERR 	0x00000020UL 
#define MCSR_BUS_IBERR 	0x00000010UL 
#define MCSR_BUS_RBERR 	0x00000008UL 
#define MCSR_BUS_WBERR 	0x00000004UL 
#define MCSR_BUS_IPERR 	0x00000002UL 
#define MCSR_BUS_RPERR 	0x00000001UL 

#define MCSR_DCPERR_MC	0x20000000UL 
#define MCSR_L2MMU_MHIT	0x04000000UL 
#define MCSR_NMI	0x00100000UL 
#define MCSR_MAV	0x00080000UL 
#define MCSR_MEA	0x00040000UL 
#define MCSR_IF		0x00010000UL 
#define MCSR_LD		0x00008000UL 
#define MCSR_ST		0x00004000UL 
#define MCSR_LDG	0x00002000UL 
#define MCSR_TLBSYNC	0x00000002UL 
#define MCSR_BSL2_ERR	0x00000001UL 
#endif

#ifdef CONFIG_E200
#define MCSR_MCP 	0x80000000UL 
#define MCSR_CP_PERR 	0x20000000UL 
#define MCSR_CPERR 	0x10000000UL 
#define MCSR_EXCP_ERR 	0x08000000UL 
#define MCSR_BUS_IRERR 	0x00000010UL 
#define MCSR_BUS_DRERR 	0x00000008UL 
#define MCSR_BUS_WRERR 	0x00000004UL 
#endif

#ifdef CONFIG_E500
#define HID1_PLL_CFG_MASK 0xfc000000	
#define HID1_RFXE	0x00020000	
#define HID1_R1DPE	0x00008000	
#define HID1_R2DPE	0x00004000	
#define HID1_ASTME	0x00002000	
#define HID1_ABE	0x00001000	
#define HID1_MPXTT	0x00000400	
#define HID1_ATS	0x00000080	
#define HID1_MID_MASK	0x0000000f	
#endif

#ifdef CONFIG_BOOKE
#define DBSR_IC		0x08000000	
#define DBSR_BT		0x04000000	
#define DBSR_IRPT	0x02000000	
#define DBSR_TIE	0x01000000	
#define DBSR_IAC1	0x00800000	
#define DBSR_IAC2	0x00400000	
#define DBSR_IAC3	0x00200000	
#define DBSR_IAC4	0x00100000	
#define DBSR_DAC1R	0x00080000	
#define DBSR_DAC1W	0x00040000	
#define DBSR_DAC2R	0x00020000	
#define DBSR_DAC2W	0x00010000	
#define DBSR_RET	0x00008000	
#define DBSR_CIRPT	0x00000040	
#define DBSR_CRET	0x00000020	
#define DBSR_IAC12ATS	0x00000002	
#define DBSR_IAC34ATS	0x00000001	
#endif
#ifdef CONFIG_40x
#define DBSR_IC		0x80000000	
#define DBSR_BT		0x40000000	
#define DBSR_IRPT	0x20000000	
#define DBSR_TIE	0x10000000	
#define DBSR_IAC1	0x04000000	
#define DBSR_IAC2	0x02000000	
#define DBSR_IAC3	0x00080000	
#define DBSR_IAC4	0x00040000	
#define DBSR_DAC1R	0x01000000	
#define DBSR_DAC1W	0x00800000	
#define DBSR_DAC2R	0x00400000	
#define DBSR_DAC2W	0x00200000	
#endif

#define ESR_MCI		0x80000000	
#define ESR_IMCP	0x80000000	
#define ESR_IMCN	0x40000000	
#define ESR_IMCB	0x20000000	
#define ESR_IMCT	0x10000000	
#define ESR_PIL		0x08000000	
#define ESR_PPR		0x04000000	
#define ESR_PTR		0x02000000	
#define ESR_FP		0x01000000	
#define ESR_DST		0x00800000	
#define ESR_DIZ		0x00400000	
#define ESR_ST		0x00800000	
#define ESR_DLK		0x00200000	
#define ESR_ILK		0x00100000	
#define ESR_PUO		0x00040000	
#define ESR_BO		0x00020000	
#define ESR_SPV		0x00000080	

#if defined(CONFIG_40x)
#define DBCR0_EDM	0x80000000	
#define DBCR0_IDM	0x40000000	
#define DBCR0_RST	0x30000000	
#define DBCR0_RST_SYSTEM 0x30000000	
#define DBCR0_RST_CHIP	0x20000000	
#define DBCR0_RST_CORE	0x10000000	
#define DBCR0_RST_NONE	0x00000000	
#define DBCR0_IC	0x08000000	
#define DBCR0_ICMP	DBCR0_IC
#define DBCR0_BT	0x04000000	
#define DBCR0_BRT	DBCR0_BT
#define DBCR0_EDE	0x02000000	
#define DBCR0_IRPT	DBCR0_EDE
#define DBCR0_TDE	0x01000000	
#define DBCR0_IA1	0x00800000	
#define DBCR0_IAC1	DBCR0_IA1
#define DBCR0_IA2	0x00400000	
#define DBCR0_IAC2	DBCR0_IA2
#define DBCR0_IA12	0x00200000	
#define DBCR0_IA12X	0x00100000	
#define DBCR0_IA3	0x00080000	
#define DBCR0_IAC3	DBCR0_IA3
#define DBCR0_IA4	0x00040000	
#define DBCR0_IAC4	DBCR0_IA4
#define DBCR0_IA34	0x00020000	
#define DBCR0_IA34X	0x00010000	
#define DBCR0_IA12T	0x00008000	
#define DBCR0_IA34T	0x00004000	
#define DBCR0_FT	0x00000001	

#define dbcr_iac_range(task)	((task)->thread.dbcr0)
#define DBCR_IAC12I	DBCR0_IA12			
#define DBCR_IAC12X	(DBCR0_IA12 | DBCR0_IA12X)	
#define DBCR_IAC12MODE	(DBCR0_IA12 | DBCR0_IA12X)	
#define DBCR_IAC34I	DBCR0_IA34			
#define DBCR_IAC34X	(DBCR0_IA34 | DBCR0_IA34X)	
#define DBCR_IAC34MODE	(DBCR0_IA34 | DBCR0_IA34X)	

#define DBCR1_DAC1R	0x80000000	
#define DBCR1_DAC2R	0x40000000	
#define DBCR1_DAC1W	0x20000000	
#define DBCR1_DAC2W	0x10000000	

#define dbcr_dac(task)	((task)->thread.dbcr1)
#define DBCR_DAC1R	DBCR1_DAC1R
#define DBCR_DAC1W	DBCR1_DAC1W
#define DBCR_DAC2R	DBCR1_DAC2R
#define DBCR_DAC2W	DBCR1_DAC2W

#define DBCR0_ACTIVE_EVENTS	(DBCR0_ICMP | DBCR0_IAC1 | DBCR0_IAC2 | \
				 DBCR0_IAC3 | DBCR0_IAC4)
#define DBCR1_ACTIVE_EVENTS	(DBCR1_DAC1R | DBCR1_DAC2R | \
				 DBCR1_DAC1W | DBCR1_DAC2W)
#define DBCR_ACTIVE_EVENTS(dbcr0, dbcr1)  (((dbcr0) & DBCR0_ACTIVE_EVENTS) || \
					   ((dbcr1) & DBCR1_ACTIVE_EVENTS))

#elif defined(CONFIG_BOOKE)
#define DBCR0_EDM	0x80000000	
#define DBCR0_IDM	0x40000000	
#define DBCR0_RST	0x30000000	
#define DBCR0_RST_SYSTEM 0x30000000	
#define DBCR0_RST_CHIP	0x20000000	
#define DBCR0_RST_CORE	0x10000000	
#define DBCR0_RST_NONE	0x00000000	
#define DBCR0_ICMP	0x08000000	
#define DBCR0_IC	DBCR0_ICMP
#define DBCR0_BRT	0x04000000	
#define DBCR0_BT	DBCR0_BRT
#define DBCR0_IRPT	0x02000000	
#define DBCR0_TDE	0x01000000	
#define DBCR0_TIE	DBCR0_TDE
#define DBCR0_IAC1	0x00800000	
#define DBCR0_IAC2	0x00400000	
#define DBCR0_IAC3	0x00200000	
#define DBCR0_IAC4	0x00100000	
#define DBCR0_DAC1R	0x00080000	
#define DBCR0_DAC1W	0x00040000	
#define DBCR0_DAC2R	0x00020000	
#define DBCR0_DAC2W	0x00010000	
#define DBCR0_RET	0x00008000	
#define DBCR0_CIRPT	0x00000040	
#define DBCR0_CRET	0x00000020	
#define DBCR0_FT	0x00000001	

#define dbcr_dac(task)	((task)->thread.dbcr0)
#define DBCR_DAC1R	DBCR0_DAC1R
#define DBCR_DAC1W	DBCR0_DAC1W
#define DBCR_DAC2R	DBCR0_DAC2R
#define DBCR_DAC2W	DBCR0_DAC2W

#define DBCR1_IAC1US	0xC0000000	
#define DBCR1_IAC1ER	0x30000000	
#define DBCR1_IAC1ER_01	0x10000000	
#define DBCR1_IAC1ER_10	0x20000000	
#define DBCR1_IAC1ER_11	0x30000000	
#define DBCR1_IAC2US	0x0C000000	
#define DBCR1_IAC2ER	0x03000000	
#define DBCR1_IAC2ER_01	0x01000000	
#define DBCR1_IAC2ER_10	0x02000000	
#define DBCR1_IAC2ER_11	0x03000000	
#define DBCR1_IAC12M	0x00800000	
#define DBCR1_IAC12MX	0x00C00000	
#define DBCR1_IAC12AT	0x00010000	
#define DBCR1_IAC3US	0x0000C000	
#define DBCR1_IAC3ER	0x00003000	
#define DBCR1_IAC3ER_01	0x00001000	
#define DBCR1_IAC3ER_10	0x00002000	
#define DBCR1_IAC3ER_11	0x00003000	
#define DBCR1_IAC4US	0x00000C00	
#define DBCR1_IAC4ER	0x00000300	
#define DBCR1_IAC4ER_01	0x00000100	
#define DBCR1_IAC4ER_10	0x00000200	
#define DBCR1_IAC4ER_11	0x00000300	
#define DBCR1_IAC34M	0x00000080	
#define DBCR1_IAC34MX	0x000000C0	
#define DBCR1_IAC34AT	0x00000001	

#define dbcr_iac_range(task)	((task)->thread.dbcr1)
#define DBCR_IAC12I	DBCR1_IAC12M	
#define DBCR_IAC12X	DBCR1_IAC12MX	
#define DBCR_IAC12MODE	DBCR1_IAC12MX	
#define DBCR_IAC34I	DBCR1_IAC34M	
#define DBCR_IAC34X	DBCR1_IAC34MX	
#define DBCR_IAC34MODE	DBCR1_IAC34MX	

#define DBCR2_DAC1US	0xC0000000	
#define DBCR2_DAC1ER	0x30000000	
#define DBCR2_DAC2US	0x0C000000	
#define DBCR2_DAC2ER	0x03000000	
#define DBCR2_DAC12M	0x00800000	
#define DBCR2_DAC12MM	0x00400000	
#define DBCR2_DAC12MX	0x00C00000	
#define DBCR2_DAC12MODE	0x00C00000	
#define DBCR2_DAC12A	0x00200000	
#define DBCR2_DVC1M	0x000C0000	
#define DBCR2_DVC1M_SHIFT	18	
#define DBCR2_DVC2M	0x00030000	
#define DBCR2_DVC2M_SHIFT	16	
#define DBCR2_DVC1BE	0x00000F00	
#define DBCR2_DVC1BE_SHIFT	8	
#define DBCR2_DVC2BE	0x0000000F	
#define DBCR2_DVC2BE_SHIFT	0	

#define DBCR0_ACTIVE_EVENTS  (DBCR0_ICMP | DBCR0_IAC1 | DBCR0_IAC2 | \
			      DBCR0_IAC3 | DBCR0_IAC4 | DBCR0_DAC1R | \
			      DBCR0_DAC1W  | DBCR0_DAC2R | DBCR0_DAC2W)
#define DBCR1_ACTIVE_EVENTS	0

#define DBCR_ACTIVE_EVENTS(dbcr0, dbcr1)  (((dbcr0) & DBCR0_ACTIVE_EVENTS) || \
					   ((dbcr1) & DBCR1_ACTIVE_EVENTS))
#endif 

#define TCR_WP(x)	(((x)&0x3)<<30)	
#define TCR_WP_MASK	TCR_WP(3)
#define WP_2_17		0		
#define WP_2_21		1		
#define WP_2_25		2		
#define WP_2_29		3		
#define TCR_WRC(x)	(((x)&0x3)<<28)	
#define TCR_WRC_MASK	TCR_WRC(3)
#define WRC_NONE	0		
#define WRC_CORE	1		
#define WRC_CHIP	2		
#define WRC_SYSTEM	3		
#define TCR_WIE		0x08000000	
#define TCR_PIE		0x04000000	
#define TCR_DIE		TCR_PIE		
#define TCR_FP(x)	(((x)&0x3)<<24)	
#define TCR_FP_MASK	TCR_FP(3)
#define FP_2_9		0		
#define FP_2_13		1		
#define FP_2_17		2		
#define FP_2_21		3		
#define TCR_FIE		0x00800000	
#define TCR_ARE		0x00400000	

#define TSR_ENW		0x80000000	
#define TSR_WIS		0x40000000	
#define TSR_WRS(x)	(((x)&0x3)<<28)	
#define WRS_NONE	0		
#define WRS_CORE	1		
#define WRS_CHIP	2		
#define WRS_SYSTEM	3		
#define TSR_PIS		0x08000000	
#define TSR_DIS		TSR_PIS		
#define TSR_FIS		0x04000000	

#define DCCR_NOCACHE	0		
#define DCCR_CACHE	1		

#define DCWR_COPY	0		
#define DCWR_WRITE	1		

#define ICCR_NOCACHE	0		
#define ICCR_CACHE	1		

#define L1CSR0_CPE	0x00010000	
#define L1CSR0_CLFC	0x00000100	
#define L1CSR0_DCFI	0x00000002	
#define L1CSR0_CFI	0x00000002	
#define L1CSR0_DCE	0x00000001	

#define L1CSR1_CPE	0x00010000	
#define L1CSR1_ICLFR	0x00000100	
#define L1CSR1_ICFI	0x00000002	
#define L1CSR1_ICE	0x00000001	

#define L1CSR2_DCWS	0x40000000	

#define L2CSR0_L2E	0x80000000	
#define L2CSR0_L2PE	0x40000000	
#define L2CSR0_L2WP	0x1c000000	
#define L2CSR0_L2CM	0x03000000	
#define L2CSR0_L2FI	0x00200000	
#define L2CSR0_L2IO	0x00100000	
#define L2CSR0_L2DO	0x00010000	
#define L2CSR0_L2REP	0x00003000	
#define L2CSR0_L2FL	0x00000800	
#define L2CSR0_L2LFC	0x00000400	
#define L2CSR0_L2LOA	0x00000080	
#define L2CSR0_L2LO	0x00000020	

#define SGR_NORMAL	0		
#define SGR_GUARDED	1		

#define SPRN_EPCR_EXTGS		0x80000000	
#define SPRN_EPCR_DTLBGS	0x40000000	
#define SPRN_EPCR_ITLBGS	0x20000000	
#define SPRN_EPCR_DSIGS		0x10000000	
#define SPRN_EPCR_ISIGS		0x08000000	
#define SPRN_EPCR_DUVD		0x04000000	
#define SPRN_EPCR_ICM		0x02000000	
#define SPRN_EPCR_GICM		0x01000000	
#define SPRN_EPCR_DGTMI		0x00800000	
#define SPRN_EPCR_DMIUH		0x00400000	


#ifdef CONFIG_403GCX
#define SPRN_TBHU	0x3CC	
#define SPRN_TBLU	0x3CD	
#define SPRN_CDBCR	0x3D7	
#define SPRN_TBHI	0x3DC	
#define SPRN_TBLO	0x3DD	
#define SPRN_DBCR	0x3F2	
#define SPRN_PBL1	0x3FC	
#define SPRN_PBL2	0x3FE	
#define SPRN_PBU1	0x3FD	
#define SPRN_PBU2	0x3FF	


#define DBCR_EDM	DBCR0_EDM
#define DBCR_IDM	DBCR0_IDM
#define DBCR_RST(x)	(((x) & 0x3) << 28)
#define DBCR_RST_NONE	0
#define DBCR_RST_CORE	1
#define DBCR_RST_CHIP	2
#define DBCR_RST_SYSTEM	3
#define DBCR_IC		DBCR0_IC	
#define DBCR_BT		DBCR0_BT	
#define DBCR_EDE	DBCR0_EDE	
#define DBCR_TDE	DBCR0_TDE	
#define DBCR_FER	0x00F80000	
#define DBCR_FT		0x00040000	
#define DBCR_IA1	0x00020000	
#define DBCR_IA2	0x00010000	
#define DBCR_D1R	0x00008000	
#define DBCR_D1W	0x00004000	
#define DBCR_D1S(x)	(((x) & 0x3) << 12)	
#define DAC_BYTE	0
#define DAC_HALF	1
#define DAC_WORD	2
#define DAC_QUAD	3
#define DBCR_D2R	0x00000800	
#define DBCR_D2W	0x00000400	
#define DBCR_D2S(x)	(((x) & 0x3) << 8)	
#define DBCR_SBT	0x00000040	
#define DBCR_SED	0x00000020	
#define DBCR_STD	0x00000010	
#define DBCR_SIA	0x00000008	
#define DBCR_SDA	0x00000004	
#define DBCR_JOI	0x00000002	
#define DBCR_JII	0x00000001	
#endif 

#define SPRN_SSPCR		830
#define SPRN_USPCR		831
#define SPRN_ISPCR		829
#define SPRN_MMUBE0		820
#define MMUBE0_IBE0_SHIFT	24
#define MMUBE0_IBE1_SHIFT	16
#define MMUBE0_IBE2_SHIFT	8
#define MMUBE0_VBE0		0x00000004
#define MMUBE0_VBE1		0x00000002
#define MMUBE0_VBE2		0x00000001
#define SPRN_MMUBE1		821
#define MMUBE1_IBE3_SHIFT	24
#define MMUBE1_IBE4_SHIFT	16
#define MMUBE1_IBE5_SHIFT	8
#define MMUBE1_VBE3		0x00000004
#define MMUBE1_VBE4		0x00000002
#define MMUBE1_VBE5		0x00000001

#endif 
#endif 
