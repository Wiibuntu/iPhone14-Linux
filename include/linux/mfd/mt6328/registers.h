/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2022 Yassine Oudjana <y.oudjana@protonmail.com>
 */

#ifndef __MFD_MT6328_REGISTERS_H__
#define __MFD_MT6328_REGISTERS_H__

/* PMIC Registers */
#define MT6328_STRUP_CON0            0x0000
#define MT6328_STRUP_CON2            0x0002
#define MT6328_STRUP_CON3            0x0004
#define MT6328_STRUP_CON4            0x0006
#define MT6328_STRUP_CON5            0x0008
#define MT6328_STRUP_CON6            0x000a
#define MT6328_STRUP_CON7            0x000c
#define MT6328_STRUP_CON8            0x000e
#define MT6328_STRUP_CON9            0x0010
#define MT6328_STRUP_CON10           0x0012
#define MT6328_STRUP_CON11           0x0014
#define MT6328_STRUP_CON12           0x0016
#define MT6328_STRUP_CON13           0x0018
#define MT6328_STRUP_CON14           0x001a
#define MT6328_STRUP_CON15           0x001c
#define MT6328_STRUP_CON16           0x001e
#define MT6328_STRUP_CON17           0x0020
#define MT6328_STRUP_CON18           0x0022
#define MT6328_STRUP_CON19           0x0024
#define MT6328_STRUP_CON20           0x0026
#define MT6328_STRUP_CON21           0x0028
#define MT6328_STRUP_CON22           0x002a
#define MT6328_STRUP_CON23           0x002c
#define MT6328_STRUP_CON24           0x002e
#define MT6328_STRUP_CON25           0x0030
#define MT6328_STRUP_CON26           0x0032
#define MT6328_STRUP_CON27           0x0034
#define MT6328_STRUP_CON28           0x0036
#define MT6328_STRUP_CON29           0x0038
#define MT6328_STRUP_CON30           0x003a
#define MT6328_STRUP_CON31           0x003c
#define MT6328_STRUP_CON32           0x003e
#define MT6328_STRUP_ANA_CON0        0x0040
#define MT6328_HWCID                 0x0200
#define MT6328_SWCID                 0x0202
#define MT6328_TOP_CON               0x0204
#define MT6328_TEST_OUT              0x0206
#define MT6328_TEST_CON0             0x0208
#define MT6328_TEST_CON1             0x020a
#define MT6328_TESTMODE_SW           0x020c
#define MT6328_EN_STATUS0            0x020e
#define MT6328_EN_STATUS1            0x0210
#define MT6328_EN_STATUS2            0x0212
#define MT6328_OCSTATUS0             0x0214
#define MT6328_OCSTATUS1             0x0216
#define MT6328_OCSTATUS2             0x0218
#define MT6328_PGDEBSTATUS           0x021a
#define MT6328_PGSTATUS              0x021c
#define MT6328_THERMALSTATUS         0x021e
#define MT6328_TOPSTATUS             0x0220
#define MT6328_TDSEL_CON             0x0222
#define MT6328_RDSEL_CON             0x0224
#define MT6328_SMT_CON0              0x0226
#define MT6328_SMT_CON1              0x0228
#define MT6328_SMT_CON2              0x022a
#define MT6328_DRV_CON0              0x022c
#define MT6328_DRV_CON1              0x022e
#define MT6328_DRV_CON2              0x0230
#define MT6328_DRV_CON3              0x0232
#define MT6328_TOP_STATUS            0x0234
#define MT6328_TOP_STATUS_SET        0x0236
#define MT6328_TOP_STATUS_CLR        0x0238
#define MT6328_RGS_ANA_MON           0x023a
#define MT6328_TOP_CKPDN_CON0        0x023c
#define MT6328_TOP_CKPDN_CON0_SET    0x023e
#define MT6328_TOP_CKPDN_CON0_CLR    0x0240
#define MT6328_TOP_CKPDN_CON1        0x0242
#define MT6328_TOP_CKPDN_CON1_SET    0x0244
#define MT6328_TOP_CKPDN_CON1_CLR    0x0246
#define MT6328_TOP_CKPDN_CON2        0x0248
#define MT6328_TOP_CKPDN_CON2_SET    0x024a
#define MT6328_TOP_CKPDN_CON2_CLR    0x024c
#define MT6328_TOP_CKPDN_CON3        0x024e
#define MT6328_TOP_CKPDN_CON3_SET    0x0250
#define MT6328_TOP_CKPDN_CON3_CLR    0x0252
#define MT6328_TOP_CKPDN_CON4        0x0254
#define MT6328_TOP_CKPDN_CON4_SET    0x0256
#define MT6328_TOP_CKPDN_CON4_CLR    0x0258
#define MT6328_TOP_CKSEL_CON0        0x025a
#define MT6328_TOP_CKSEL_CON0_SET    0x025c
#define MT6328_TOP_CKSEL_CON0_CLR    0x025e
#define MT6328_TOP_CKSEL_CON1        0x0260
#define MT6328_TOP_CKSEL_CON1_SET    0x0262
#define MT6328_TOP_CKSEL_CON1_CLR    0x0264
#define MT6328_TOP_CKSEL_CON2        0x0266
#define MT6328_TOP_CKSEL_CON2_SET    0x0268
#define MT6328_TOP_CKSEL_CON2_CLR    0x026a
#define MT6328_TOP_CKDIVSEL_CON0     0x026c
#define MT6328_TOP_CKDIVSEL_CON0_SET 0x026e
#define MT6328_TOP_CKDIVSEL_CON0_CLR 0x0270
#define MT6328_TOP_CKDIVSEL_CON1     0x0272
#define MT6328_TOP_CKDIVSEL_CON1_SET 0x0274
#define MT6328_TOP_CKDIVSEL_CON1_CLR 0x0276
#define MT6328_TOP_CKHWEN_CON0       0x0278
#define MT6328_TOP_CKHWEN_CON0_SET   0x027a
#define MT6328_TOP_CKHWEN_CON0_CLR   0x027c
#define MT6328_TOP_CKHWEN_CON1       0x027e
#define MT6328_TOP_CKHWEN_CON1_SET   0x0280
#define MT6328_TOP_CKHWEN_CON1_CLR   0x0282
#define MT6328_TOP_CKTST_CON0        0x0284
#define MT6328_TOP_CKTST_CON1        0x0286
#define MT6328_TOP_CKTST_CON2        0x0288
#define MT6328_TOP_CLKSQ             0x028a
#define MT6328_TOP_CLKSQ_SET         0x028c
#define MT6328_TOP_CLKSQ_CLR         0x028e
#define MT6328_TOP_CLKSQ_RTC         0x0290
#define MT6328_TOP_CLKSQ_RTC_SET     0x0292
#define MT6328_TOP_CLKSQ_RTC_CLR     0x0294
#define MT6328_TOP_CLK_TRIM          0x0296
#define MT6328_TOP_RST_CON0          0x0298
#define MT6328_TOP_RST_CON0_SET      0x029a
#define MT6328_TOP_RST_CON0_CLR      0x029c
#define MT6328_TOP_RST_CON1          0x029e
#define MT6328_TOP_RST_MISC          0x02a0
#define MT6328_TOP_RST_MISC_SET      0x02a2
#define MT6328_TOP_RST_MISC_CLR      0x02a4
#define MT6328_TOP_RST_STATUS        0x02a6
#define MT6328_TOP_RST_STATUS_SET    0x02a8
#define MT6328_TOP_RST_STATUS_CLR    0x02aa
#define MT6328_INT_CON0              0x02ac
#define MT6328_INT_CON0_SET          0x02ae
#define MT6328_INT_CON0_CLR          0x02b0
#define MT6328_INT_CON1              0x02b2
#define MT6328_INT_CON1_SET          0x02b4
#define MT6328_INT_CON1_CLR          0x02b6
#define MT6328_INT_CON2              0x02b8
#define MT6328_INT_CON2_SET          0x02ba
#define MT6328_INT_CON2_CLR          0x02bc
#define MT6328_INT_MISC_CON          0x02be
#define MT6328_INT_MISC_CON_SET      0x02c0
#define MT6328_INT_MISC_CON_CLR      0x02c2
#define MT6328_INT_STATUS0           0x02c4
#define MT6328_INT_STATUS1           0x02c6
#define MT6328_INT_STATUS2           0x02c8
#define MT6328_OC_GEAR_0             0x02ca
#define MT6328_FQMTR_CON0            0x02cc
#define MT6328_FQMTR_CON1            0x02ce
#define MT6328_FQMTR_CON2            0x02d0
#define MT6328_RG_SPI_CON            0x02d2
#define MT6328_DEW_DIO_EN            0x02d4
#define MT6328_DEW_READ_TEST         0x02d6
#define MT6328_DEW_WRITE_TEST        0x02d8
#define MT6328_DEW_CRC_SWRST         0x02da
#define MT6328_DEW_CRC_EN            0x02dc
#define MT6328_DEW_CRC_VAL           0x02de
#define MT6328_DEW_DBG_MON_SEL       0x02e0
#define MT6328_DEW_CIPHER_KEY_SEL    0x02e2
#define MT6328_DEW_CIPHER_IV_SEL     0x02e4
#define MT6328_DEW_CIPHER_EN         0x02e6
#define MT6328_DEW_CIPHER_RDY        0x02e8
#define MT6328_DEW_CIPHER_MODE       0x02ea
#define MT6328_DEW_CIPHER_SWRST      0x02ec
#define MT6328_DEW_RDDMY_NO          0x02ee
#define MT6328_INT_TYPE_CON0         0x02f0
#define MT6328_INT_TYPE_CON0_SET     0x02f2
#define MT6328_INT_TYPE_CON0_CLR     0x02f4
#define MT6328_INT_TYPE_CON1         0x02f6
#define MT6328_INT_TYPE_CON1_SET     0x02f8
#define MT6328_INT_TYPE_CON1_CLR     0x02fa
#define MT6328_INT_TYPE_CON2         0x02fc
#define MT6328_INT_TYPE_CON2_SET     0x02fe
#define MT6328_INT_TYPE_CON2_CLR     0x0300
#define MT6328_INT_STA               0x0302
#define MT6328_BUCK_ALL_CON0         0x0400
#define MT6328_BUCK_ALL_CON1         0x0402
#define MT6328_BUCK_ALL_CON2         0x0404
#define MT6328_BUCK_ALL_CON3         0x0406
#define MT6328_BUCK_ALL_CON4         0x0408
#define MT6328_BUCK_ALL_CON5         0x040a
#define MT6328_BUCK_ALL_CON6         0x040c
#define MT6328_BUCK_ALL_CON9         0x040e
#define MT6328_BUCK_ALL_CON12        0x0410
#define MT6328_BUCK_ALL_CON13        0x0412
#define MT6328_BUCK_ALL_CON14        0x0414
#define MT6328_BUCK_ALL_CON16        0x0416
#define MT6328_BUCK_ALL_CON18        0x0418
#define MT6328_BUCK_ALL_CON19        0x041a
#define MT6328_BUCK_ALL_CON20        0x041c
#define MT6328_BUCK_ALL_CON21        0x041e
#define MT6328_BUCK_ALL_CON22        0x0420
#define MT6328_BUCK_ALL_CON23        0x0422
#define MT6328_BUCK_ALL_CON24        0x0424
#define MT6328_BUCK_ALL_CON25        0x0426
#define MT6328_BUCK_ALL_CON26        0x0428
#define MT6328_BUCK_ALL_CON27        0x042a
#define MT6328_BUCK_ALL_CON28        0x042c
#define MT6328_SMPS_TOP_ANA_CON0     0x042e
#define MT6328_SMPS_TOP_ANA_CON1     0x0430
#define MT6328_SMPS_TOP_ANA_CON2     0x0432
#define MT6328_SMPS_TOP_ANA_CON3     0x0434
#define MT6328_SMPS_TOP_ANA_CON4     0x0436
#define MT6328_SMPS_TOP_ANA_CON5     0x0438
#define MT6328_SMPS_TOP_ANA_CON6     0x043a
#define MT6328_SMPS_TOP_ANA_CON7     0x043c
#define MT6328_SMPS_TOP_ANA_CON8     0x043e
#define MT6328_VCORE_ANA_CON0        0x0440
#define MT6328_VCORE_ANA_CON1        0x0442
#define MT6328_VCORE_ANA_CON2        0x0444
#define MT6328_VCORE_ANA_CON3        0x0446
#define MT6328_VCORE_ANA_CON4        0x0448
#define MT6328_VSYS22_ANA_CON0       0x044a
#define MT6328_VSYS22_ANA_CON1       0x044c
#define MT6328_VSYS22_ANA_CON2       0x044e
#define MT6328_VSYS22_ANA_CON3       0x0450
#define MT6328_VSYS22_ANA_CON4       0x0452
#define MT6328_VPROC_ANA_CON0        0x0454
#define MT6328_VPROC_ANA_CON1        0x0456
#define MT6328_VPROC_ANA_CON2        0x0458
#define MT6328_VPROC_ANA_CON3        0x045a
#define MT6328_VPROC_ANA_CON4        0x045c
#define MT6328_OSC32_ANA_CON0        0x045e
#define MT6328_OSC32_ANA_CON1        0x0460
#define MT6328_VPA_ANA_CON0          0x0462
#define MT6328_VPA_ANA_CON1          0x0464
#define MT6328_VPA_ANA_CON2          0x0466
#define MT6328_VPA_ANA_CON3          0x0468
#define MT6328_VLTE_ANA_CON0         0x046a
#define MT6328_VLTE_ANA_CON1         0x046c
#define MT6328_VLTE_ANA_CON2         0x046e
#define MT6328_VLTE_ANA_CON3         0x0470
#define MT6328_VLTE_ANA_CON4         0x0472
#define MT6328_VPROC_CON0            0x0474
#define MT6328_VPROC_CON1            0x0476
#define MT6328_VPROC_CON2            0x0478
#define MT6328_VPROC_CON3            0x047a
#define MT6328_VPROC_CON4            0x047c
#define MT6328_VPROC_CON5            0x047e
#define MT6328_VPROC_CON6            0x0480
#define MT6328_VPROC_CON7            0x0482
#define MT6328_VPROC_CON8            0x0484
#define MT6328_VPROC_CON9            0x0486
#define MT6328_VPROC_CON10           0x0488
#define MT6328_VPROC_CON11           0x048a
#define MT6328_VPROC_CON12           0x048c
#define MT6328_VPROC_CON13           0x048e
#define MT6328_VPROC_CON14           0x0490
#define MT6328_VPROC_CON15           0x0492
#define MT6328_VPROC_CON16           0x0494
#define MT6328_VPROC_CON17           0x0496
#define MT6328_VPROC_CON18           0x0498
#define MT6328_VPROC_CON19           0x049a
#define MT6328_VSRAM_CON0            0x049c
#define MT6328_VSRAM_CON1            0x049e
#define MT6328_VSRAM_CON2            0x04a0
#define MT6328_VSRAM_CON3            0x04a2
#define MT6328_VSRAM_CON4            0x04a4
#define MT6328_VSRAM_CON5            0x04a6
#define MT6328_VSRAM_CON6            0x04a8
#define MT6328_VSRAM_CON7            0x04aa
#define MT6328_VSRAM_CON8            0x04ac
#define MT6328_VSRAM_CON9            0x04ae
#define MT6328_VSRAM_CON10           0x04b0
#define MT6328_VSRAM_CON11           0x04b2
#define MT6328_VSRAM_CON12           0x04b4
#define MT6328_VSRAM_CON13           0x04b6
#define MT6328_VSRAM_CON14           0x04b8
#define MT6328_VSRAM_CON15           0x04ba
#define MT6328_VSRAM_CON16           0x04bc
#define MT6328_VSRAM_CON17           0x04be
#define MT6328_VSRAM_CON18           0x04c0
#define MT6328_VSRAM_CON19           0x04c2
#define MT6328_VLTE_CON0             0x04c4
#define MT6328_VLTE_CON1             0x04c6
#define MT6328_VLTE_CON2             0x04c8
#define MT6328_VLTE_CON3             0x04ca
#define MT6328_VLTE_CON4             0x04cc
#define MT6328_VLTE_CON5             0x04ce
#define MT6328_VLTE_CON6             0x04d0
#define MT6328_VLTE_CON7             0x04d2
#define MT6328_VLTE_CON8             0x04d4
#define MT6328_VLTE_CON9             0x04d6
#define MT6328_VLTE_CON10            0x04d8
#define MT6328_VLTE_CON11            0x04da
#define MT6328_VLTE_CON12            0x04dc
#define MT6328_VLTE_CON13            0x04de
#define MT6328_VLTE_CON14            0x04e0
#define MT6328_VLTE_CON15            0x04e2
#define MT6328_VLTE_CON16            0x04e4
#define MT6328_VLTE_CON17            0x04e6
#define MT6328_VLTE_CON18            0x04e8
#define MT6328_VLTE_CON19            0x04ea
#define MT6328_VCORE1_CON0           0x0600
#define MT6328_VCORE1_CON1           0x0602
#define MT6328_VCORE1_CON2           0x0604
#define MT6328_VCORE1_CON3           0x0606
#define MT6328_VCORE1_CON4           0x0608
#define MT6328_VCORE1_CON5           0x060a
#define MT6328_VCORE1_CON6           0x060c
#define MT6328_VCORE1_CON7           0x060e
#define MT6328_VCORE1_CON8           0x0610
#define MT6328_VCORE1_CON9           0x0612
#define MT6328_VCORE1_CON10          0x0614
#define MT6328_VCORE1_CON11          0x0616
#define MT6328_VCORE1_CON12          0x0618
#define MT6328_VCORE1_CON13          0x061a
#define MT6328_VCORE1_CON14          0x061c
#define MT6328_VCORE1_CON15          0x061e
#define MT6328_VCORE1_CON16          0x0620
#define MT6328_VCORE1_CON17          0x0622
#define MT6328_VCORE1_CON18          0x0624
#define MT6328_VCORE1_CON19          0x0626
#define MT6328_VSYS22_CON0           0x0628
#define MT6328_VSYS22_CON1           0x062a
#define MT6328_VSYS22_CON2           0x062c
#define MT6328_VSYS22_CON3           0x062e
#define MT6328_VSYS22_CON4           0x0630
#define MT6328_VSYS22_CON5           0x0632
#define MT6328_VSYS22_CON6           0x0634
#define MT6328_VSYS22_CON7           0x0636
#define MT6328_VSYS22_CON8           0x0638
#define MT6328_VSYS22_CON9           0x063a
#define MT6328_VSYS22_CON10          0x063c
#define MT6328_VSYS22_CON11          0x063e
#define MT6328_VSYS22_CON12          0x0640
#define MT6328_VSYS22_CON13          0x0642
#define MT6328_VSYS22_CON14          0x0644
#define MT6328_VSYS22_CON15          0x0646
#define MT6328_VSYS22_CON16          0x0648
#define MT6328_VSYS22_CON17          0x064a
#define MT6328_VSYS22_CON18          0x064c
#define MT6328_VSYS22_CON19          0x064e
#define MT6328_VPA_CON0              0x0650
#define MT6328_VPA_CON1              0x0652
#define MT6328_VPA_CON2              0x0654
#define MT6328_VPA_CON3              0x0656
#define MT6328_VPA_CON4              0x0658
#define MT6328_VPA_CON5              0x065a
#define MT6328_VPA_CON6              0x065c
#define MT6328_VPA_CON7              0x065e
#define MT6328_VPA_CON8              0x0660
#define MT6328_VPA_CON9              0x0662
#define MT6328_VPA_CON10             0x0664
#define MT6328_VPA_CON11             0x0666
#define MT6328_VPA_CON12             0x0668
#define MT6328_VPA_CON13             0x066a
#define MT6328_VPA_CON14             0x066c
#define MT6328_VPA_CON15             0x066e
#define MT6328_VPA_CON16             0x0670
#define MT6328_VPA_CON17             0x0672
#define MT6328_VPA_CON18             0x0674
#define MT6328_VPA_CON19             0x0676
#define MT6328_VPA_CON20             0x0678
#define MT6328_VPA_CON21             0x067a
#define MT6328_VPA_CON22             0x067c
#define MT6328_VPA_CON23             0x067e
#define MT6328_VPA_CON24             0x0680
#define MT6328_BUCK_K_CON0           0x0682
#define MT6328_BUCK_K_CON1           0x0684
#define MT6328_BUCK_K_CON2           0x0686
#define MT6328_BUCK_K_CON3           0x0688
#define MT6328_ZCD_CON0              0x0800
#define MT6328_ZCD_CON1              0x0802
#define MT6328_ZCD_CON2              0x0804
#define MT6328_ZCD_CON3              0x0806
#define MT6328_ZCD_CON4              0x0808
#define MT6328_ZCD_CON5              0x080a
#define MT6328_ISINK0_CON0           0x080c
#define MT6328_ISINK0_CON1           0x080e
#define MT6328_ISINK0_CON2           0x0810
#define MT6328_ISINK0_CON3           0x0812
#define MT6328_ISINK1_CON0           0x0814
#define MT6328_ISINK1_CON1           0x0816
#define MT6328_ISINK1_CON2           0x0818
#define MT6328_ISINK1_CON3           0x081a
#define MT6328_ISINK2_CON1           0x081c
#define MT6328_ISINK3_CON1           0x081e
#define MT6328_ISINK_ANA0            0x0820
#define MT6328_ISINK_ANA1            0x0822
#define MT6328_ISINK_PHASE_DLY       0x0824
#define MT6328_ISINK_SFSTR           0x0826
#define MT6328_ISINK_EN_CTRL         0x0828
#define MT6328_ISINK_MODE_CTRL       0x082a
#define MT6328_VTCXO_0_CON0          0x0a00
#define MT6328_VTCXO_1_CON0          0x0a02
#define MT6328_VAUD28_CON0           0x0a04
#define MT6328_VAUX18_CON0           0x0a06
#define MT6328_VRF18_0_CON0          0x0a08
#define MT6328_VRF18_0_CON1          0x0a0a
#define MT6328_VCAMA_CON0            0x0a0c
#define MT6328_VCN28_CON0            0x0a0e
#define MT6328_VCN33_CON0            0x0a10
#define MT6328_VCN33_CON1            0x0a12
#define MT6328_VCN33_CON2            0x0a14
#define MT6328_VRF18_1_CON0          0x0a16
#define MT6328_VRF18_1_CON1          0x0a18
#define MT6328_VUSB33_CON0           0x0a1a
#define MT6328_VMCH_CON0             0x0a1c
#define MT6328_VMCH_CON1             0x0a1e
#define MT6328_VMC_CON0              0x0a20
#define MT6328_VMC_CON1              0x0a22
#define MT6328_VEMC_3V3_CON0         0x0a24
#define MT6328_VEMC_3V3_CON1         0x0a26
#define MT6328_VIO28_CON0            0x0a28
#define MT6328_VCAMAF_CON0           0x0a2a
#define MT6328_VGP1_CON0             0x0a2c
#define MT6328_VGP1_CON1             0x0a2e
#define MT6328_VEFUSE_CON0           0x0a30
#define MT6328_VSIM1_CON0            0x0a32
#define MT6328_VSIM2_CON0            0x0a34
#define MT6328_VIO18_CON0            0x0a36
#define MT6328_VIBR_CON0             0x0a38
#define MT6328_VCN18_CON0            0x0a3a
#define MT6328_VCAM_CON0             0x0a3c
#define MT6328_VCAMIO_CON0           0x0a3e
#define MT6328_LDO_VSRAM_CON0        0x0a40
#define MT6328_LDO_VSRAM_CON1        0x0a42
#define MT6328_VTREF_CON0            0x0a44
#define MT6328_VM_CON0               0x0a46
#define MT6328_VM_CON1               0x0a48
#define MT6328_VRTC_CON0             0x0a4a
#define MT6328_LDO_OCFB0             0x0a4c
#define MT6328_ALDO_ANA_CON0         0x0a4e
#define MT6328_ADLDO_ANA_CON1        0x0a50
#define MT6328_ADLDO_ANA_CON2        0x0a52
#define MT6328_ADLDO_ANA_CON3        0x0a54
#define MT6328_ADLDO_ANA_CON4        0x0a56
#define MT6328_ADLDO_ANA_CON5        0x0a58
#define MT6328_ADLDO_ANA_CON6        0x0a5a
#define MT6328_ADLDO_ANA_CON7        0x0a5c
#define MT6328_ADLDO_ANA_CON8        0x0a5e
#define MT6328_ADLDO_ANA_CON9        0x0a60
#define MT6328_ADLDO_ANA_CON10       0x0a62
#define MT6328_ADLDO_ANA_CON11       0x0a64
#define MT6328_ADLDO_ANA_CON12       0x0a66
#define MT6328_ADLDO_ANA_CON13       0x0a68
#define MT6328_DLDO_ANA_CON0         0x0a6a
#define MT6328_DLDO_ANA_CON1         0x0a6c
#define MT6328_DLDO_ANA_CON2         0x0a6e
#define MT6328_DLDO_ANA_CON3         0x0a70
#define MT6328_DLDO_ANA_CON4         0x0a72
#define MT6328_DLDO_ANA_CON5         0x0a74
#define MT6328_SLDO_ANA_CON0         0x0a76
#define MT6328_SLDO_ANA_CON1         0x0a78
#define MT6328_SLDO_ANA_CON2         0x0a7a
#define MT6328_SLDO_ANA_CON3         0x0a7c
#define MT6328_SLDO_ANA_CON4         0x0a7e
#define MT6328_SLDO_ANA_CON5         0x0a80
#define MT6328_SLDO_ANA_CON6         0x0a82
#define MT6328_SLDO_ANA_CON7         0x0a84
#define MT6328_SLDO_ANA_CON8         0x0a86
#define MT6328_SLDO_ANA_CON9         0x0a88
#define MT6328_SLDO_ANA_CON10        0x0a8a
#define MT6328_LDO_RSV_CON0          0x0a8c
#define MT6328_LDO_RSV_CON1          0x0a8e
#define MT6328_SPK_CON0              0x0a90
#define MT6328_SPK_CON1              0x0a92
#define MT6328_SPK_CON2              0x0a94
#define MT6328_SPK_CON3              0x0a96
#define MT6328_SPK_CON4              0x0a98
#define MT6328_SPK_CON5              0x0a9a
#define MT6328_SPK_CON6              0x0a9c
#define MT6328_SPK_CON7              0x0a9e
#define MT6328_SPK_CON8              0x0aa0
#define MT6328_SPK_CON9              0x0aa2
#define MT6328_SPK_CON10             0x0aa4
#define MT6328_SPK_CON11             0x0aa6
#define MT6328_SPK_CON12             0x0aa8
#define MT6328_SPK_CON13             0x0aaa
#define MT6328_SPK_CON14             0x0aac
#define MT6328_SPK_CON15             0x0aae
#define MT6328_SPK_CON16             0x0ab0
#define MT6328_SPK_ANA_CON0          0x0ab2
#define MT6328_SPK_ANA_CON1          0x0ab4
#define MT6328_SPK_ANA_CON3          0x0ab6
#define MT6328_OTP_CON0              0x0c00
#define MT6328_OTP_CON1              0x0c02
#define MT6328_OTP_CON2              0x0c04
#define MT6328_OTP_CON3              0x0c06
#define MT6328_OTP_CON4              0x0c08
#define MT6328_OTP_CON5              0x0c0a
#define MT6328_OTP_CON6              0x0c0c
#define MT6328_OTP_CON7              0x0c0e
#define MT6328_OTP_CON8              0x0c10
#define MT6328_OTP_CON9              0x0c12
#define MT6328_OTP_CON10             0x0c14
#define MT6328_OTP_CON11             0x0c16
#define MT6328_OTP_CON12             0x0c18
#define MT6328_OTP_CON13             0x0c1a
#define MT6328_OTP_CON14             0x0c1c
#define MT6328_OTP_DOUT_0_15         0x0c1e
#define MT6328_OTP_DOUT_16_31        0x0c20
#define MT6328_OTP_DOUT_32_47        0x0c22
#define MT6328_OTP_DOUT_48_63        0x0c24
#define MT6328_OTP_DOUT_64_79        0x0c26
#define MT6328_OTP_DOUT_80_95        0x0c28
#define MT6328_OTP_DOUT_96_111       0x0c2a
#define MT6328_OTP_DOUT_112_127      0x0c2c
#define MT6328_OTP_DOUT_128_143      0x0c2e
#define MT6328_OTP_DOUT_144_159      0x0c30
#define MT6328_OTP_DOUT_160_175      0x0c32
#define MT6328_OTP_DOUT_176_191      0x0c34
#define MT6328_OTP_DOUT_192_207      0x0c36
#define MT6328_OTP_DOUT_208_223      0x0c38
#define MT6328_OTP_DOUT_224_239      0x0c3a
#define MT6328_OTP_DOUT_240_255      0x0c3c
#define MT6328_OTP_DOUT_256_271      0x0c3e
#define MT6328_OTP_DOUT_272_287      0x0c40
#define MT6328_OTP_DOUT_288_303      0x0c42
#define MT6328_OTP_DOUT_304_319      0x0c44
#define MT6328_OTP_DOUT_320_335      0x0c46
#define MT6328_OTP_DOUT_336_351      0x0c48
#define MT6328_OTP_DOUT_352_367      0x0c4a
#define MT6328_OTP_DOUT_368_383      0x0c4c
#define MT6328_OTP_DOUT_384_399      0x0c4e
#define MT6328_OTP_DOUT_400_415      0x0c50
#define MT6328_OTP_DOUT_416_431      0x0c52
#define MT6328_OTP_DOUT_432_447      0x0c54
#define MT6328_OTP_DOUT_448_463      0x0c56
#define MT6328_OTP_DOUT_464_479      0x0c58
#define MT6328_OTP_DOUT_480_495      0x0c5a
#define MT6328_OTP_DOUT_496_511      0x0c5c
#define MT6328_OTP_VAL_0_15          0x0c5e
#define MT6328_OTP_VAL_16_31         0x0c60
#define MT6328_OTP_VAL_32_47         0x0c62
#define MT6328_OTP_VAL_48_63         0x0c64
#define MT6328_OTP_VAL_64_79         0x0c66
#define MT6328_OTP_VAL_80_95         0x0c68
#define MT6328_OTP_VAL_96_111        0x0c6a
#define MT6328_OTP_VAL_112_127       0x0c6c
#define MT6328_OTP_VAL_128_143       0x0c6e
#define MT6328_OTP_VAL_144_159       0x0c70
#define MT6328_OTP_VAL_160_175       0x0c72
#define MT6328_OTP_VAL_176_191       0x0c74
#define MT6328_OTP_VAL_192_207       0x0c76
#define MT6328_OTP_VAL_208_223       0x0c78
#define MT6328_OTP_VAL_224_239       0x0c7a
#define MT6328_OTP_VAL_240_255       0x0c7c
#define MT6328_OTP_VAL_256_271       0x0c7e
#define MT6328_OTP_VAL_272_287       0x0c80
#define MT6328_OTP_VAL_288_303       0x0c82
#define MT6328_OTP_VAL_304_319       0x0c84
#define MT6328_OTP_VAL_320_335       0x0c86
#define MT6328_OTP_VAL_336_351       0x0c88
#define MT6328_OTP_VAL_352_367       0x0c8a
#define MT6328_OTP_VAL_368_383       0x0c8c
#define MT6328_OTP_VAL_384_399       0x0c8e
#define MT6328_OTP_VAL_400_415       0x0c90
#define MT6328_OTP_VAL_416_431       0x0c92
#define MT6328_OTP_VAL_432_447       0x0c94
#define MT6328_OTP_VAL_448_463       0x0c96
#define MT6328_OTP_VAL_464_479       0x0c98
#define MT6328_OTP_VAL_480_495       0x0c9a
#define MT6328_OTP_VAL_496_511       0x0c9c
#define MT6328_RTC_MIX_CON0          0x0c9e
#define MT6328_RTC_MIX_CON1          0x0ca0
#define MT6328_RTC_MIX_CON2          0x0ca2
#define MT6328_FGADC_CON0            0x0ca4
#define MT6328_FGADC_CON1            0x0ca6
#define MT6328_FGADC_CON2            0x0ca8
#define MT6328_FGADC_CON3            0x0caa
#define MT6328_FGADC_CON4            0x0cac
#define MT6328_FGADC_CON5            0x0cae
#define MT6328_FGADC_CON6            0x0cb0
#define MT6328_FGADC_CON7            0x0cb2
#define MT6328_FGADC_CON8            0x0cb4
#define MT6328_FGADC_CON9            0x0cb6
#define MT6328_FGADC_CON10           0x0cb8
#define MT6328_FGADC_CON11           0x0cba
#define MT6328_FGADC_CON12           0x0cbc
#define MT6328_FGADC_CON13           0x0cbe
#define MT6328_FGADC_CON14           0x0cc0
#define MT6328_FGADC_CON15           0x0cc2
#define MT6328_FGADC_CON16           0x0cc4
#define MT6328_FGADC_CON17           0x0cc6
#define MT6328_FGADC_CON18           0x0cc8
#define MT6328_FGADC_CON19           0x0cca
#define MT6328_FGADC_CON20           0x0ccc
#define MT6328_FGADC_CON21           0x0cce
#define MT6328_FGADC_CON22           0x0cd0
#define MT6328_FGADC_CON23           0x0cd2
#define MT6328_FGADC_CON24           0x0cd4
#define MT6328_FGADC_CON25           0x0cd6
#define MT6328_FGADC_CON26           0x0cd8
#define MT6328_FGADC_CON27           0x0cda
#define MT6328_AUDDEC_ANA_CON0       0x0cdc
#define MT6328_AUDDEC_ANA_CON1       0x0cde
#define MT6328_AUDDEC_ANA_CON2       0x0ce0
#define MT6328_AUDDEC_ANA_CON3       0x0ce2
#define MT6328_AUDDEC_ANA_CON4       0x0ce4
#define MT6328_AUDDEC_ANA_CON5       0x0ce6
#define MT6328_AUDDEC_ANA_CON6       0x0ce8
#define MT6328_AUDDEC_ANA_CON7       0x0cea
#define MT6328_AUDDEC_ANA_CON8       0x0cec
#define MT6328_AUDENC_ANA_CON0       0x0cee
#define MT6328_AUDENC_ANA_CON1       0x0cf0
#define MT6328_AUDENC_ANA_CON2       0x0cf2
#define MT6328_AUDENC_ANA_CON3       0x0cf4
#define MT6328_AUDENC_ANA_CON4       0x0cf6
#define MT6328_AUDENC_ANA_CON5       0x0cf8
#define MT6328_AUDENC_ANA_CON6       0x0cfa
#define MT6328_AUDENC_ANA_CON7       0x0cfc
#define MT6328_AUDENC_ANA_CON8       0x0cfe
#define MT6328_AUDENC_ANA_CON9       0x0d00
#define MT6328_AUDENC_ANA_CON10      0x0d02
#define MT6328_AUDNCP_CLKDIV_CON0    0x0d04
#define MT6328_AUDNCP_CLKDIV_CON1    0x0d06
#define MT6328_AUDNCP_CLKDIV_CON2    0x0d08
#define MT6328_AUDNCP_CLKDIV_CON3    0x0d0a
#define MT6328_AUDNCP_CLKDIV_CON4    0x0d0c
#define MT6328_AUXADC_ADC0           0x0e00
#define MT6328_AUXADC_ADC1           0x0e02
#define MT6328_AUXADC_ADC2           0x0e04
#define MT6328_AUXADC_ADC3           0x0e06
#define MT6328_AUXADC_ADC4           0x0e08
#define MT6328_AUXADC_ADC5           0x0e0a
#define MT6328_AUXADC_ADC6           0x0e0c
#define MT6328_AUXADC_ADC7           0x0e0e
#define MT6328_AUXADC_ADC8           0x0e10
#define MT6328_AUXADC_ADC9           0x0e12
#define MT6328_AUXADC_ADC10          0x0e14
#define MT6328_AUXADC_ADC11          0x0e16
#define MT6328_AUXADC_ADC12          0x0e18
#define MT6328_AUXADC_ADC13          0x0e1a
#define MT6328_AUXADC_ADC14          0x0e1c
#define MT6328_AUXADC_ADC15          0x0e1e
#define MT6328_AUXADC_ADC16          0x0e20
#define MT6328_AUXADC_ADC17          0x0e22
#define MT6328_AUXADC_ADC18          0x0e24
#define MT6328_AUXADC_ADC19          0x0e26
#define MT6328_AUXADC_ADC20          0x0e28
#define MT6328_AUXADC_ADC21          0x0e2a
#define MT6328_AUXADC_ADC22          0x0e2c
#define MT6328_AUXADC_ADC23          0x0e2e
#define MT6328_AUXADC_ADC24          0x0e30
#define MT6328_AUXADC_ADC25          0x0e32
#define MT6328_AUXADC_ADC26          0x0e34
#define MT6328_AUXADC_ADC27          0x0e36
#define MT6328_AUXADC_ADC28          0x0e38
#define MT6328_AUXADC_ADC29          0x0e3a
#define MT6328_AUXADC_ADC30          0x0e3c
#define MT6328_AUXADC_ADC31          0x0e3e
#define MT6328_AUXADC_ADC32          0x0e40
#define MT6328_AUXADC_ADC33          0x0e42
#define MT6328_AUXADC_BUF0           0x0e44
#define MT6328_AUXADC_BUF1           0x0e46
#define MT6328_AUXADC_BUF2           0x0e48
#define MT6328_AUXADC_BUF3           0x0e4a
#define MT6328_AUXADC_BUF4           0x0e4c
#define MT6328_AUXADC_BUF5           0x0e4e
#define MT6328_AUXADC_BUF6           0x0e50
#define MT6328_AUXADC_BUF7           0x0e52
#define MT6328_AUXADC_BUF8           0x0e54
#define MT6328_AUXADC_BUF9           0x0e56
#define MT6328_AUXADC_BUF10          0x0e58
#define MT6328_AUXADC_BUF11          0x0e5a
#define MT6328_AUXADC_BUF12          0x0e5c
#define MT6328_AUXADC_BUF13          0x0e5e
#define MT6328_AUXADC_BUF14          0x0e60
#define MT6328_AUXADC_BUF15          0x0e62
#define MT6328_AUXADC_BUF16          0x0e64
#define MT6328_AUXADC_BUF17          0x0e66
#define MT6328_AUXADC_BUF18          0x0e68
#define MT6328_AUXADC_BUF19          0x0e6a
#define MT6328_AUXADC_BUF20          0x0e6c
#define MT6328_AUXADC_BUF21          0x0e6e
#define MT6328_AUXADC_BUF22          0x0e70
#define MT6328_AUXADC_BUF23          0x0e72
#define MT6328_AUXADC_BUF24          0x0e74
#define MT6328_AUXADC_BUF25          0x0e76
#define MT6328_AUXADC_BUF26          0x0e78
#define MT6328_AUXADC_BUF27          0x0e7a
#define MT6328_AUXADC_BUF28          0x0e7c
#define MT6328_AUXADC_BUF29          0x0e7e
#define MT6328_AUXADC_BUF30          0x0e80
#define MT6328_AUXADC_BUF31          0x0e82
#define MT6328_AUXADC_STA0           0x0e84
#define MT6328_AUXADC_STA1           0x0e86
#define MT6328_AUXADC_RQST0          0x0e88
#define MT6328_AUXADC_RQST0_SET      0x0e8a
#define MT6328_AUXADC_RQST0_CLR      0x0e8c
#define MT6328_AUXADC_RQST1          0x0e8e
#define MT6328_AUXADC_RQST1_SET      0x0e90
#define MT6328_AUXADC_RQST1_CLR      0x0e92
#define MT6328_AUXADC_CON0           0x0e94
#define MT6328_AUXADC_CON0_SET       0x0e96
#define MT6328_AUXADC_CON0_CLR       0x0e98
#define MT6328_AUXADC_CON1           0x0e9a
#define MT6328_AUXADC_CON2           0x0e9c
#define MT6328_AUXADC_CON3           0x0e9e
#define MT6328_AUXADC_CON4           0x0ea0
#define MT6328_AUXADC_CON5           0x0ea2
#define MT6328_AUXADC_CON6           0x0ea4
#define MT6328_AUXADC_CON7           0x0ea6
#define MT6328_AUXADC_CON8           0x0ea8
#define MT6328_AUXADC_CON9           0x0eaa
#define MT6328_AUXADC_CON10          0x0eac
#define MT6328_AUXADC_CON11          0x0eae
#define MT6328_AUXADC_CON12          0x0eb0
#define MT6328_AUXADC_CON13          0x0eb2
#define MT6328_AUXADC_CON14          0x0eb4
#define MT6328_AUXADC_CON15          0x0eb6
#define MT6328_AUXADC_CON16          0x0eb8
#define MT6328_AUXADC_AUTORPT0       0x0eba
#define MT6328_AUXADC_LBAT0          0x0ebc
#define MT6328_AUXADC_LBAT1          0x0ebe
#define MT6328_AUXADC_LBAT2          0x0ec0
#define MT6328_AUXADC_LBAT3          0x0ec2
#define MT6328_AUXADC_LBAT4          0x0ec4
#define MT6328_AUXADC_LBAT5          0x0ec6
#define MT6328_AUXADC_LBAT6          0x0ec8
#define MT6328_AUXADC_ACCDET         0x0eca
#define MT6328_AUXADC_THR0           0x0ecc
#define MT6328_AUXADC_THR1           0x0ece
#define MT6328_AUXADC_THR2           0x0ed0
#define MT6328_AUXADC_THR3           0x0ed2
#define MT6328_AUXADC_THR4           0x0ed4
#define MT6328_AUXADC_THR5           0x0ed6
#define MT6328_AUXADC_THR6           0x0ed8
#define MT6328_AUXADC_EFUSE0         0x0eda
#define MT6328_AUXADC_EFUSE1         0x0edc
#define MT6328_AUXADC_EFUSE2         0x0ede
#define MT6328_AUXADC_EFUSE3         0x0ee0
#define MT6328_AUXADC_EFUSE4         0x0ee2
#define MT6328_AUXADC_EFUSE5         0x0ee4
#define MT6328_AUXADC_DBG0           0x0ee6
#define MT6328_AUXADC_IMP0           0x0ee8
#define MT6328_AUXADC_IMP1           0x0eea
#define MT6328_AUXADC_VISMPS0_1      0x0eec
#define MT6328_AUXADC_VISMPS0_2      0x0eee
#define MT6328_AUXADC_VISMPS0_3      0x0ef0
#define MT6328_AUXADC_VISMPS0_4      0x0ef2
#define MT6328_AUXADC_VISMPS0_5      0x0ef4
#define MT6328_AUXADC_VISMPS0_6      0x0ef6
#define MT6328_AUXADC_VISMPS0_7      0x0ef8
#define MT6328_AUXADC_LBAT2_1        0x0efa
#define MT6328_AUXADC_LBAT2_2        0x0efc
#define MT6328_AUXADC_LBAT2_3        0x0efe
#define MT6328_AUXADC_LBAT2_4        0x0f00
#define MT6328_AUXADC_LBAT2_5        0x0f02
#define MT6328_AUXADC_LBAT2_6        0x0f04
#define MT6328_AUXADC_LBAT2_7        0x0f06
#define MT6328_AUXADC_MDBG_0         0x0f08
#define MT6328_AUXADC_MDBG_1         0x0f0a
#define MT6328_AUXADC_MDBG_2         0x0f0c
#define MT6328_AUXADC_MDRT_0         0x0f0e
#define MT6328_AUXADC_MDRT_1         0x0f10
#define MT6328_AUXADC_MDRT_2         0x0f12
#define MT6328_ACCDET_CON0           0x0f14
#define MT6328_ACCDET_CON1           0x0f16
#define MT6328_ACCDET_CON2           0x0f18
#define MT6328_ACCDET_CON3           0x0f1a
#define MT6328_ACCDET_CON4           0x0f1c
#define MT6328_ACCDET_CON5           0x0f1e
#define MT6328_ACCDET_CON6           0x0f20
#define MT6328_ACCDET_CON7           0x0f22
#define MT6328_ACCDET_CON8           0x0f24
#define MT6328_ACCDET_CON9           0x0f26
#define MT6328_ACCDET_CON10          0x0f28
#define MT6328_ACCDET_CON11          0x0f2a
#define MT6328_ACCDET_CON12          0x0f2c
#define MT6328_ACCDET_CON13          0x0f2e
#define MT6328_ACCDET_CON14          0x0f30
#define MT6328_ACCDET_CON15          0x0f32
#define MT6328_ACCDET_CON16          0x0f34
#define MT6328_ACCDET_CON17          0x0f36
#define MT6328_ACCDET_CON18          0x0f38
#define MT6328_ACCDET_CON19          0x0f3a
#define MT6328_ACCDET_CON20          0x0f3c
#define MT6328_ACCDET_CON21          0x0f3e
#define MT6328_ACCDET_CON22          0x0f40
#define MT6328_ACCDET_CON23          0x0f42
#define MT6328_ACCDET_CON24          0x0f44
#define MT6328_ACCDET_CON25          0x0f46
#define MT6328_CHR_CON0              0x0f48
#define MT6328_CHR_CON1              0x0f4a
#define MT6328_CHR_CON2              0x0f4c
#define MT6328_CHR_CON3              0x0f4e
#define MT6328_CHR_CON4              0x0f50
#define MT6328_CHR_CON5              0x0f52
#define MT6328_CHR_CON6              0x0f54
#define MT6328_CHR_CON7              0x0f56
#define MT6328_CHR_CON8              0x0f58
#define MT6328_CHR_CON9              0x0f5a
#define MT6328_CHR_CON10             0x0f5c
#define MT6328_CHR_CON11             0x0f5e
#define MT6328_CHR_CON12             0x0f60
#define MT6328_CHR_CON13             0x0f62
#define MT6328_CHR_CON14             0x0f64
#define MT6328_CHR_CON15             0x0f66
#define MT6328_CHR_CON16             0x0f68
#define MT6328_CHR_CON17             0x0f6a
#define MT6328_CHR_CON18             0x0f6c
#define MT6328_CHR_CON19             0x0f6e
#define MT6328_CHR_CON20             0x0f70
#define MT6328_CHR_CON21             0x0f72
#define MT6328_CHR_CON22             0x0f74
#define MT6328_CHR_CON23             0x0f76
#define MT6328_CHR_CON24             0x0f78
#define MT6328_CHR_CON25             0x0f7a
#define MT6328_CHR_CON26             0x0f7c
#define MT6328_CHR_CON27             0x0f7e
#define MT6328_CHR_CON28             0x0f80
#define MT6328_CHR_CON29             0x0f82
#define MT6328_CHR_CON30             0x0f84
#define MT6328_CHR_CON31             0x0f86
#define MT6328_CHR_CON32             0x0f88
#define MT6328_CHR_CON33             0x0f8a
#define MT6328_CHR_CON34             0x0f8c
#define MT6328_CHR_CON35             0x0f8e
#define MT6328_CHR_CON36             0x0f90
#define MT6328_CHR_CON37             0x0f92
#define MT6328_CHR_CON38             0x0f94
#define MT6328_CHR_CON39             0x0f96
#define MT6328_CHR_CON40             0x0f98
#define MT6328_CHR_CON41             0x0f9a
#define MT6328_CHR_CON42             0x0f9c
#define MT6328_BATON_CON0            0x0f9e
#define MT6328_CHR_CON43             0x0fa0
#define MT6328_EOSC_CALI_CON0        0x0faa
#define MT6328_EOSC_CALI_CON1        0x0fac
#define MT6328_VRTC_PWM_CON0         0x0fae

#endif /* __MFD_MT6328_REGISTERS_H__ */