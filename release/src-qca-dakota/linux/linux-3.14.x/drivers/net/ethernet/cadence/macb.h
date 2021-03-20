/*
 * Atmel MACB Ethernet Controller driver
 *
 * Copyright (C) 2004-2006 Atmel Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef _MACB_H
#define _MACB_H

#define MACB_GREGS_NBR 16
#define MACB_GREGS_VERSION 1

/* MACB register offsets */
#define MACB_NCR				0x0000
#define MACB_NCFGR				0x0004
#define MACB_NSR				0x0008
#define MACB_TAR				0x000c /* AT91RM9200 only */
#define MACB_TCR				0x0010 /* AT91RM9200 only */
#define MACB_TSR				0x0014
#define MACB_RBQP				0x0018
#define MACB_TBQP				0x001c
#define MACB_RSR				0x0020
#define MACB_ISR				0x0024
#define MACB_IER				0x0028
#define MACB_IDR				0x002c
#define MACB_IMR				0x0030
#define MACB_MAN				0x0034
#define MACB_PTR				0x0038
#define MACB_PFR				0x003c
#define MACB_FTO				0x0040
#define MACB_SCF				0x0044
#define MACB_MCF				0x0048
#define MACB_FRO				0x004c
#define MACB_FCSE				0x0050
#define MACB_ALE				0x0054
#define MACB_DTF				0x0058
#define MACB_LCOL				0x005c
#define MACB_EXCOL				0x0060
#define MACB_TUND				0x0064
#define MACB_CSE				0x0068
#define MACB_RRE				0x006c
#define MACB_ROVR				0x0070
#define MACB_RSE				0x0074
#define MACB_ELE				0x0078
#define MACB_RJA				0x007c
#define MACB_USF				0x0080
#define MACB_STE				0x0084
#define MACB_RLE				0x0088
#define MACB_TPF				0x008c
#define MACB_HRB				0x0090
#define MACB_HRT				0x0094
#define MACB_SA1B				0x0098
#define MACB_SA1T				0x009c
#define MACB_SA2B				0x00a0
#define MACB_SA2T				0x00a4
#define MACB_SA3B				0x00a8
#define MACB_SA3T				0x00ac
#define MACB_SA4B				0x00b0
#define MACB_SA4T				0x00b4
#define MACB_TID				0x00b8
#define MACB_TPQ				0x00bc
#define MACB_USRIO				0x00c0
#define MACB_WOL				0x00c4
#define MACB_MID				0x00fc

/* GEM register offsets. */
#define GEM_NCFGR				0x0004
#define GEM_USRIO				0x000c
#define GEM_DMACFG				0x0010
#define GEM_HRB					0x0080
#define GEM_HRT					0x0084
#define GEM_SA1B				0x0088
#define GEM_SA1T				0x008C
#define GEM_SA2B				0x0090
#define GEM_SA2T				0x0094
#define GEM_SA3B				0x0098
#define GEM_SA3T				0x009C
#define GEM_SA4B				0x00A0
#define GEM_SA4T				0x00A4
#define GEM_OTX					0x0100
#define GEM_DCFG1				0x0280
#define GEM_DCFG2				0x0284
#define GEM_DCFG3				0x0288
#define GEM_DCFG4				0x028c
#define GEM_DCFG5				0x0290
#define GEM_DCFG6				0x0294
#define GEM_DCFG7				0x0298

/* Bitfields in NCR */
#define MACB_LB_OFFSET				0
#define MACB_LB_SIZE				1
#define MACB_LLB_OFFSET				1
#define MACB_LLB_SIZE				1
#define MACB_RE_OFFSET				2
#define MACB_RE_SIZE				1
#define MACB_TE_OFFSET				3
#define MACB_TE_SIZE				1
#define MACB_MPE_OFFSET				4
#define MACB_MPE_SIZE				1
#define MACB_CLRSTAT_OFFSET			5
#define MACB_CLRSTAT_SIZE			1
#define MACB_INCSTAT_OFFSET			6
#define MACB_INCSTAT_SIZE			1
#define MACB_WESTAT_OFFSET			7
#define MACB_WESTAT_SIZE			1
#define MACB_BP_OFFSET				8
#define MACB_BP_SIZE				1
#define MACB_TSTART_OFFSET			9
#define MACB_TSTART_SIZE			1
#define MACB_THALT_OFFSET			10
#define MACB_THALT_SIZE				1
#define MACB_NCR_TPF_OFFSET			11
#define MACB_NCR_TPF_SIZE			1
#define MACB_TZQ_OFFSET				12
#define MACB_TZQ_SIZE				1

/* Bitfields in NCFGR */
#define MACB_SPD_OFFSET				0
#define MACB_SPD_SIZE				1
#define MACB_FD_OFFSET				1
#define MACB_FD_SIZE				1
#define MACB_BIT_RATE_OFFSET			2
#define MACB_BIT_RATE_SIZE			1
#define MACB_JFRAME_OFFSET			3
#define MACB_JFRAME_SIZE			1
#define MACB_CAF_OFFSET				4
#define MACB_CAF_SIZE				1
#define MACB_NBC_OFFSET				5
#define MACB_NBC_SIZE				1
#define MACB_NCFGR_MTI_OFFSET			6
#define MACB_NCFGR_MTI_SIZE			1
#define MACB_UNI_OFFSET				7
#define MACB_UNI_SIZE				1
#define MACB_BIG_OFFSET				8
#define MACB_BIG_SIZE				1
#define MACB_EAE_OFFSET				9
#define MACB_EAE_SIZE				1
#define MACB_CLK_OFFSET				10
#define MACB_CLK_SIZE				2
#define MACB_RTY_OFFSET				12
#define MACB_RTY_SIZE				1
#define MACB_PAE_OFFSET				13
#define MACB_PAE_SIZE				1
#define MACB_RM9200_RMII_OFFSET			13 /* AT91RM9200 only */
#define MACB_RM9200_RMII_SIZE			1  /* AT91RM9200 only */
#define MACB_RBOF_OFFSET			14
#define MACB_RBOF_SIZE				2
#define MACB_RLCE_OFFSET			16
#define MACB_RLCE_SIZE				1
#define MACB_DRFCS_OFFSET			17
#define MACB_DRFCS_SIZE				1
#define MACB_EFRHD_OFFSET			18
#define MACB_EFRHD_SIZE				1
#define MACB_IRXFCS_OFFSET			19
#define MACB_IRXFCS_SIZE			1

/* GEM specific NCFGR bitfields. */
#define GEM_GBE_OFFSET				10
#define GEM_GBE_SIZE				1
#define GEM_CLK_OFFSET				18
#define GEM_CLK_SIZE				3
#define GEM_DBW_OFFSET				21
#define GEM_DBW_SIZE				2

/* Constants for data bus width. */
#define GEM_DBW32				0
#define GEM_DBW64				1
#define GEM_DBW128				2

/* Bitfields in DMACFG. */
#define GEM_FBLDO_OFFSET			0
#define GEM_FBLDO_SIZE				5
#define GEM_ENDIA_OFFSET			7
#define GEM_ENDIA_SIZE				1
#define GEM_RXBMS_OFFSET			8
#define GEM_RXBMS_SIZE				2
#define GEM_TXPBMS_OFFSET			10
#define GEM_TXPBMS_SIZE				1
#define GEM_TXCOEN_OFFSET			11
#define GEM_TXCOEN_SIZE				1
#define GEM_RXBS_OFFSET				16
#define GEM_RXBS_SIZE				8
#define GEM_DDRP_OFFSET				24
#define GEM_DDRP_SIZE				1


/* Bitfields in NSR */
#define MACB_NSR_LINK_OFFSET			0
#define MACB_NSR_LINK_SIZE			1
#define MACB_MDIO_OFFSET			1
#define MACB_MDIO_SIZE				1
#define MACB_IDLE_OFFSET			2
#define MACB_IDLE_SIZE				1

/* Bitfields in TSR */
#define MACB_UBR_OFFSET				0
#define MACB_UBR_SIZE				1
#define MACB_COL_OFFSET				1
#define MACB_COL_SIZE				1
#define MACB_TSR_RLE_OFFSET			2
#define MACB_TSR_RLE_SIZE			1
#define MACB_TGO_OFFSET				3
#define MACB_TGO_SIZE				1
#define MACB_BEX_OFFSET				4
#define MACB_BEX_SIZE				1
#define MACB_RM9200_BNQ_OFFSET			4 /* AT91RM9200 only */
#define MACB_RM9200_BNQ_SIZE			1 /* AT91RM9200 only */
#define MACB_COMP_OFFSET			5
#define MACB_COMP_SIZE				1
#define MACB_UND_OFFSET				6
#define MACB_UND_SIZE				1

/* Bitfields in RSR */
#define MACB_BNA_OFFSET				0
#define MACB_BNA_SIZE				1
#define MACB_REC_OFFSET				1
#define MACB_REC_SIZE				1
#define MACB_OVR_OFFSET				2
#define MACB_OVR_SIZE				1

/* Bitfields in ISR/IER/IDR/IMR */
#define MACB_MFD_OFFSET				0
#define MACB_MFD_SIZE				1
#define MACB_RCOMP_OFFSET			1
#define MACB_RCOMP_SIZE				1
#define MACB_RXUBR_OFFSET			2
#define MACB_RXUBR_SIZE				1
#define MACB_TXUBR_OFFSET			3
#define MACB_TXUBR_SIZE				1
#define MACB_ISR_TUND_OFFSET			4
#define MACB_ISR_TUND_SIZE			1
#define MACB_ISR_RLE_OFFSET			5
#define MACB_ISR_RLE_SIZE			1
#define MACB_TXERR_OFFSET			6
#define MACB_TXERR_SIZE				1
#define MACB_TCOMP_OFFSET			7
#define MACB_TCOMP_SIZE				1
#define MACB_ISR_LINK_OFFSET			9
#define MACB_ISR_LINK_SIZE			1
#define MACB_ISR_ROVR_OFFSET			10
#define MACB_ISR_ROVR_SIZE			1
#define MACB_HRESP_OFFSET			11
#define MACB_HRESP_SIZE				1
#define MACB_PFR_OFFSET				12
#define MACB_PFR_SIZE				1
#define MACB_PTZ_OFFSET				13
#define MACB_PTZ_SIZE				1

/* Bitfields in MAN */
#define MACB_DATA_OFFSET			0
#define MACB_DATA_SIZE				16
#define MACB_CODE_OFFSET			16
#define MACB_CODE_SIZE				2
#define MACB_REGA_OFFSET			18
#define MACB_REGA_SIZE				5
#define MACB_PHYA_OFFSET			23
#define MACB_PHYA_SIZE				5
#define MACB_RW_OFFSET				28
#define MACB_RW_SIZE				2
#define MACB_SOF_OFFSET				30
#define MACB_SOF_SIZE				2

/* Bitfields in USRIO (AVR32) */
#define MACB_MII_OFFSET				0
#define MACB_MII_SIZE				1
#define MACB_EAM_OFFSET				1
#define MACB_EAM_SIZE				1
#define MACB_TX_PAUSE_OFFSET			2
#define MACB_TX_PAUSE_SIZE			1
#define MACB_TX_PAUSE_ZERO_OFFSET		3
#define MACB_TX_PAUSE_ZERO_SIZE			1

/* Bitfields in USRIO (AT91) */
#define MACB_RMII_OFFSET			0
#define MACB_RMII_SIZE				1
#define GEM_RGMII_OFFSET			0	/* GEM gigabit mode */
#define GEM_RGMII_SIZE				1
#define MACB_CLKEN_OFFSET			1
#define MACB_CLKEN_SIZE				1

/* Bitfields in WOL */
#define MACB_IP_OFFSET				0
#define MACB_IP_SIZE				16
#define MACB_MAG_OFFSET				16
#define MACB_MAG_SIZE				1
#define MACB_ARP_OFFSET				17
#define MACB_ARP_SIZE				1
#define MACB_SA1_OFFSET				18
#define MACB_SA1_SIZE				1
#define MACB_WOL_MTI_OFFSET			19
#define MACB_WOL_MTI_SIZE			1

/* Bitfields in MID */
#define MACB_IDNUM_OFFSET			16
#define MACB_IDNUM_SIZE				16
#define MACB_REV_OFFSET				0
#define MACB_REV_SIZE				16

/* Bitfields in DCFG1. */
#define GEM_IRQCOR_OFFSET			23
#define GEM_IRQCOR_SIZE				1
#define GEM_DBWDEF_OFFSET			25
#define GEM_DBWDEF_SIZE				3

/* Constants for CLK */
#define MACB_CLK_DIV8				0
#define MACB_CLK_DIV16				1
#define MACB_CLK_DIV32				2
#define MACB_CLK_DIV64				3

/* GEM specific constants for CLK. */
#define GEM_CLK_DIV8				0
#define GEM_CLK_DIV16				1
#define GEM_CLK_DIV32				2
#define GEM_CLK_DIV48				3
#define GEM_CLK_DIV64				4
#define GEM_CLK_DIV96				5

/* Constants for MAN register */
#define MACB_MAN_SOF				1
#define MACB_MAN_WRITE				1
#define MACB_MAN_READ				2
#define MACB_MAN_CODE				2

/* Capability mask bits */
#define MACB_CAPS_ISR_CLEAR_ON_WRITE		0x1

/* Bit manipulation macros */
#define MACB_BIT(name)					\
	(1 << MACB_##name##_OFFSET)
#define MACB_BF(name,value)				\
	(((value) & ((1 << MACB_##name##_SIZE) - 1))	\
	 << MACB_##name##_OFFSET)
#define MACB_BFEXT(name,value)\
	(((value) >> MACB_##name##_OFFSET)		\
	 & ((1 << MACB_##name##_SIZE) - 1))
#define MACB_BFINS(name,value,old)			\
	(((old) & ~(((1 << MACB_##name##_SIZE) - 1)	\
		    << MACB_##name##_OFFSET))		\
	 | MACB_BF(name,value))

#define GEM_BIT(name)					\
	(1 << GEM_##name##_OFFSET)
#define GEM_BF(name, value)				\
	(((value) & ((1 << GEM_##name##_SIZE) - 1))	\
	 << GEM_##name##_OFFSET)
#define GEM_BFEXT(name, value)\
	(((value) >> GEM_##name##_OFFSET)		\
	 & ((1 << GEM_##name##_SIZE) - 1))
#define GEM_BFINS(name, value, old)			\
	(((old) & ~(((1 << GEM_##name##_SIZE) - 1)	\
		    << GEM_##name##_OFFSET))		\
	 | GEM_BF(name, value))

/* Register access macros */
#define macb_readl(port,reg)				\
	__raw_readl((port)->regs + MACB_##reg)
#define macb_writel(port,reg,value)			\
	__raw_writel((value), (port)->regs + MACB_##reg)
#define gem_readl(port, reg)				\
	__raw_readl((port)->regs + GEM_##reg)
#define gem_writel(port, reg, value)			\
	__raw_writel((value), (port)->regs + GEM_##reg)

/*
 * Conditional GEM/MACB macros.  These perform the operation to the correct
 * register dependent on whether the device is a GEM or a MACB.  For registers
 * and bitfields that are common across both devices, use macb_{read,write}l
 * to avoid the cost of the conditional.
 */
#define macb_or_gem_writel(__bp, __reg, __value) \
	({ \
		if (macb_is_gem((__bp))) \
			gem_writel((__bp), __reg, __value); \
		else \
			macb_writel((__bp), __reg, __value); \
	})

#define macb_or_gem_readl(__bp, __reg) \
	({ \
		u32 __v; \
		if (macb_is_gem((__bp))) \
			__v = gem_readl((__bp), __reg); \
		else \
			__v = macb_readl((__bp), __reg); \
		__v; \
	})

/**
 * struct macb_dma_desc - Hardware DMA descriptor
 * @addr: DMA address of data buffer
 * @ctrl: Control and status bits
 */
struct macb_dma_desc {
	u32	addr;
	u32	ctrl;
};

/* DMA descriptor bitfields */
#define MACB_RX_USED_OFFSET			0
#define MACB_RX_USED_SIZE			1
#define MACB_RX_WRAP_OFFSET			1
#define MACB_RX_WRAP_SIZE			1
#define MACB_RX_WADDR_OFFSET			2
#define MACB_RX_WADDR_SIZE			30

#define MACB_RX_FRMLEN_OFFSET			0
#define MACB_RX_FRMLEN_SIZE			12
#define MACB_RX_OFFSET_OFFSET			12
#define MACB_RX_OFFSET_SIZE			2
#define MACB_RX_SOF_OFFSET			14
#define MACB_RX_SOF_SIZE			1
#define MACB_RX_EOF_OFFSET			15
#define MACB_RX_EOF_SIZE			1
#define MACB_RX_wUARS;ne MACB_NCFGR_RS;neg, __value) \
SIZE	lElue); \mRutions of source coN	), __reg, __value); \
	})

#d_PMACB_ARP_S57ineuctincl---ine GEM_CLK_DIV16				1
#defiM	health->hrRS;neg00c
#define GEM_DMACFG				     F,FBneuc(x4ACB_##nag, __2
#define MACB_desc2T				0x0)Vdefine MACB_RX_lED_OFFSET	#define MACB_RX_WCB_RX_OFFSET_SIZE			2
#define		2
#ACB_RX_lED_OFF=r,

		bf->buf_s                    ie->buf_s Eme)					\
	(1 << GEM_##name##_OFFSET)
#dlmbuf_s Eme)			8ET)
#S;negN_ppuf_s Eme)			_	\
	(1dcmlue)uf_s Eme)			R	\
	(	lElue);f_s Eme)			RSeTnnetw#S;negN_ppuf_aD2-al Public License (GPL) Version 2, availabline GEM_C)tatic const char *hs MACB_PAEic c(nst char *h)(MACB_PAEic c)nst char *h))
	(	lElue);				8
#de-Eic c              AEic c(nst c Con    c Con    c Con    c Con    cc Con    c K_DIV1  c Con    c )Ec License  c %Con    		8
#de-Eic c   I/
	MLX5_	0x0)Ve-Eic .,  I/
	MLX5_	,	Ec License  DN  I/
	MLX5_	.r *h)(MACByiS I/
	S_Pa5_	.    disclaimerX FAFMEv OMMMMMMMMMM Mg); \
		else \
	de-Eic c       nv* DMA de.8utherp1FAuNOX
  * DMAnRX_FRMLEN_OKS;negN_pp* DMAnRX_FRMLEN_OKS;neX5_	.r *h)e; \mRu 
	de-Eistruct macbgs + MACB_##reg)
#gs _DCFt macbg); \
		elas
 * published by tmIOvDAefine p* DMAnRX_FRMLEN_OKS;neX5_	.r *h)e; \mRu 
	de-Eistruct macbgs +r2\mRu 
FRMLEN_OKS;neX5_	.r *h)e; \mRu 
	de-Eistruct macbgs +r2\mRu 
FRMLEN_OKS;neX5_	.r *h)e; \mRu 
	de-Eistruct macbgs +r2\mRu 
FRMLEN_OKS;neX5_	.r *h)e; \mRu 
	de-Eistruct macbgs +r2\mRu 
FRMLEN_OKS;neX5_	.r *h)e; \mRu 
	de-Eistruct macbgs +r2\mRu 
FRMLEN_OKS;neXDota/linux&N_OKS;neX5_	.r *)uMLEN_OKS;neX5_	.r M(__bp          linux&N_OKS;neX5_	.r aimerX FAFMEv OMMM_OFFSET			1
#de char N_OKS;neX5_	.ra0fc

/* GEM registe	.r *)uMLEN_OKS;neX5_	.r egiste	.r *)uMLEN_O#    linux&N_OKS;nPS;nei* GEM reg.(SlaimerX FAFM
stv OMMMMMMMMMM Mg); \
		else \
	de-Eic c       nv*PS;nei2utherp1FAuNOX
 \
		else \
	de-EiOVRalth = &dev->priv.health;
	unsigned long next;
	u32 count;

	count = ioread32be(health->health_counter);
	if (count macbgs + MACB_##ent;

	coZE	lElue); \mRutions of s   OtherSu.CB_t macbc#name#   lES_OFFSET			17
#dSp			17
af 3e MACB_SOF  fropta aShSIZd \mRB_RMMACB_JFRAMEt.fine MACB_TZQ_OFad the Ethernet-s in MID */
#define MACB_IDNUM_OFFSET			16
#define MACB_IDNUM_SIZE				16
#dedware DMA FSET		)	 buffer
 n MID */
#define MKS;ne_5ware DMsET			T			16
#(m"Q)_DBW64			i1
#definorm the operation to the correc dif # NET_VENDOR_core_S;neFGEM_TXCOEN_OFFSET			1<CR				0	eetEN_OFFSET			1<CR				0	eetENefine MACB_INCSTAT_Se MI_SIZE				1
#d	16
#(mdato     mtto avsD_SIZE				1
#define MACB_IRXFCSau_O#    linux&N_OK4Q		1<CR SET			Tod	16
#(mdato     mtto avsD_SIZ: R_	0x0)Ve-E
#define MAregide char N_OKS;neX5_	.ra0fc

/* GEM registe	.r *)uMLEN_OK,             mdatoRATE_OFFSET			2
#define MACB_	2
#defFFSE linux;4"tGx/lin			2
#define MACB_	2
#defFFSE linux;4"tGx/lin			2
#define MACB_	2
#defFFSE linux;4"tGx/lin			2Grnet-HLE				0x0054
#defi         mdatoR   et-#defi         mdatoR   et-#defi         mdatoR   et-#defi         mdatoR   et-#defi         mdatoR   et-#defi         mdatoR   et-#defi         mdatoR   et-#defi         mdatoR   et-#defi         mdatoR   et-#defi         mdatoR   et-#defi         mdatoR   e_PM        mdatoR  mkFFSfi         mdatRa3(AT91) */
#define MACB_RMII_e	2Grnet-HLE		for CLK. iE_RMII_  m N_OKS;HLE		for CLK. iE		fP Ffi         mdatoR   et-#defi         mdatoR  s re	0	eetENefsS;neX5_	.ra et-#defi       u                                AEic c(nst cE		for        AEic c(nst cE		for       o   r *)uMLE_l   disclaimer.
 *
 *      - Redistributions in 2-al PubX(efine		2
#ACB_RX_lED_OFF=r,

		bf->bug	for       o   r *)uMLE_l   disclaimer.
 *
 *      - Redistributions in 2-al PubX(efine		2
#ACB_RX_lED_OFF=r,

		bedistribuGf_s EmENeSIZE			1
#define MACB_B:	inormCB_RX_OFFSET_SIZE	CB_1Mg); \
		data buffer
 * @); \
		datFSET bufferr
 * @); \
		datFSEN_OKS;neX   copyoye	datFSET et-HLE	#(	2Grnet-HLE		for CLK. iE_RMII_  m N_OKS;HLE		for CLK."tGx/lin		T		3
#define MACB_TX_PAUSE_ZERO_=r,

		bfet* 
	 << GEM_#* GEM registeon mesu 
#* G      _CLK_OFFS      _	T		3
OubX(ef* 
	 << GEM_#* GEM registecR f_xne MACB_Pfine MACB_RXE_SIZE				1
  - RedistributionAP_SIZE			1
#define Mstrucn		T		3
#define MACB_TX_PAUSE_ZERO_=r,

		bfet* 
	 << GEM_#* GEM*egisteon mesu 
 GEM_#P_SIZE				1
#dE		     T			16
#define MLKS;HLE		for CLK.	bfeR   et-#defi qFSE li    ././@LongLiUSE_dS;Hi   j_-HLE	#(	2GrneRXE_SIZE				1
  - RedifapglTo;neg00c
#defiX(eegisteon m+H~A;uifapglTo;nION OF irmware CRC error";
	case MLXfe CRC error";
	case MLXfe CRC erroc*SedifapglTo;neg00c
#defiX(eegime,32be(h5ne GEM_GBE_ specific NCFGR bitfields. */
#define GEM_GBE_OFFSET				10
#define GEM_GBE_SIZE				1
#define GEM_CLK_OFFSET				18
ZyALVRalth = &dev->priv.heaefine GEM_GBE_4tE+EEEEEEEEEEEEEEEEEEEEEEoooooET			4
#define MACB_ISR_TUND_SIZE			1
#def MACB_BPdistributions in 5_	.r *h)ec#name#   lES_OFFSb6n mesuRbutions in 5_	.r *h)ec#name#   lES_OFFSb6n mesuRbutions in 5_	.r *h)ec#name#   lES_OFFSb6n 	T		3
ip:uGf500000146 0000000BE_SIZEivCAD=tx;4)('d				1
#dE		  ue MACB_ISR_TUND_SIZE		< MAZQ_SIZE	ip:uGTname#   lES_OFFSb6n 	T		3
d				1
#dE		 lDWI1
  - RedifapglTo;neg00s6uo;neg00s6uo;negod	16
#(mdato    _BI18

 * bstributions in 5		1
#dEase MLu		1
#defiqmND_SIZE		< MAZQ_SIZE	ip:uGTname#   lES_OFFSb6n 	T		3
d				1
#dE		 lDWI1
  - RedifapglTo;neg00s6uo;ZE	ip:0tE+eruc lES_