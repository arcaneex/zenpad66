/*
 * Copyright (C) 2012-2014 Intel Mobile Communications GmbH
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */


#ifndef _FMR_RX_API_H_
#define _FMR_RX_API_H_

/* Module FMRREGISTERS */
#ifndef MASK0_CAST
#define MASK0_CAST
#endif


#define FMRID_ADDR (0x8000)

#define MDSPDBG_ADDR (0x8100)
#define MDSPDBG_RUNNING_WIDTH 1
#define MDSPDBG_RUNNING_POS16 1
#define MDSPDBG_RUNNING_POS32 17
#define MDSPDBG_RUNNING_MASK0 (MASK0_CAST 0x0001)
#define MDSPDBG_RUNNING_MASK16 0x0002
#define MDSPDBG_RUNNING_MASK32 0x00020000
#define MDSPDBG_RUNNING_C16(value) \
((value & MDSPDBG_RUNNING_MASK0) << MDSPDBG_RUNNING_POS16)
#define MDSPDBG_RUNNING_C32(value) \
((value & MDSPDBG_RUNNING_MASK0) << MDSPDBG_RUNNING_POS32)

#define MINIDSPCTL_ADDR (0x8128)
#define MINIDSPCTL_HALT_WIDTH 1
#define MINIDSPCTL_HALT_POS16 3
#define MINIDSPCTL_HALT_POS32 19
#define MINIDSPCTL_HALT_MASK0 (MASK0_CAST 0x0001)
#define MINIDSPCTL_HALT_MASK16 0x0008
#define MINIDSPCTL_HALT_MASK32 0x00080000
#define MINIDSPCTL_HALT_C16(value) \
((value & MINIDSPCTL_HALT_MASK0) << MINIDSPCTL_HALT_POS16)
#define MINIDSPCTL_HALT_C32(value) \
((value & MINIDSPCTL_HALT_MASK0) << MINIDSPCTL_HALT_POS32)
#define MINIDSPCTL_RUN_WIDTH 1
#define MINIDSPCTL_RUN_POS16 2
#define MINIDSPCTL_RUN_POS32 18
#define MINIDSPCTL_RUN_MASK0 (MASK0_CAST 0x0001)
#define MINIDSPCTL_RUN_MASK16 0x0004
#define MINIDSPCTL_RUN_MASK32 0x00040000
#define MINIDSPCTL_RUN_C16(value) \
((value & MINIDSPCTL_RUN_MASK0) << MINIDSPCTL_RUN_POS16)
#define MINIDSPCTL_RUN_C32(value) \
((value & MINIDSPCTL_RUN_MASK0) << MINIDSPCTL_RUN_POS32)
#define MINIDSPCTL_PC_WIDTH 15
#define MINIDSPCTL_PC_POS16 1
#define MINIDSPCTL_PC_POS32 1
#define MINIDSPCTL_PC_MASK0 (MASK0_CAST 0x7fff)
#define MINIDSPCTL_PC_MASK16 0xfffe
#define MINIDSPCTL_PC_MASK32 0x0000fffe
#define MINIDSPCTL_PC_C16(value) \
((value & MINIDSPCTL_PC_MASK0) << MINIDSPCTL_PC_POS16)
#define MINIDSPCTL_PC_C32(value) \
((value & MINIDSPCTL_PC_MASK0) << MINIDSPCTL_PC_POS32)

#define TRIGCTL_ADDR (0x8108)
#define TRIGCTL_MASK_SW_WIDTH 5
#define TRIGCTL_MASK_SW_POS16 6
#define TRIGCTL_MASK_SW_POS32 22
#define TRIGCTL_MASK_SW_MASK0 (MASK0_CAST 0x001f)
#define TRIGCTL_MASK_SW_MASK16 0x07c0
#define TRIGCTL_MASK_SW_MASK32 0x07c00000
#define TRIGCTL_MASK_SW_C16(value) \
((value & TRIGCTL_MASK_SW_MASK0) << TRIGCTL_MASK_SW_POS16)
#define TRIGCTL_MASK_SW_C32(value) \
((value & TRIGCTL_MASK_SW_MASK0) << TRIGCTL_MASK_SW_POS32)
#define TRIGCTL_MASK_HW_WIDTH 5
#define TRIGCTL_MASK_HW_POS16 1
#define TRIGCTL_MASK_HW_POS32 17
#define TRIGCTL_MASK_HW_MASK0 (MASK0_CAST 0x001f)
#define TRIGCTL_MASK_HW_MASK16 0x003e
#define TRIGCTL_MASK_HW_MASK32 0x003e0000
#define TRIGCTL_MASK_HW_C16(value) \
((value & TRIGCTL_MASK_HW_MASK0) << TRIGCTL_MASK_HW_POS16)
#define TRIGCTL_MASK_HW_C32(value) \
((value & TRIGCTL_MASK_HW_MASK0) << TRIGCTL_MASK_HW_POS32)
#define TRIGCTL_STATUS_SW_WIDTH 5
#define TRIGCTL_STATUS_SW_POS16 6
#define TRIGCTL_STATUS_SW_POS32 6
#define TRIGCTL_STATUS_SW_MASK0 (MASK0_CAST 0x001f)
#define TRIGCTL_STATUS_SW_MASK16 0x07c0
#define TRIGCTL_STATUS_SW_MASK32 0x000007c0
#define TRIGCTL_STATUS_SW_C16(value) \
((value & TRIGCTL_STATUS_SW_MASK0) << TRIGCTL_STATUS_SW_POS16)
#define TRIGCTL_STATUS_SW_C32(value) \
((value & TRIGCTL_STATUS_SW_MASK0) << TRIGCTL_STATUS_SW_POS32)
#define TRIGCTL_STATUS_HW_WIDTH 5
#define TRIGCTL_STATUS_HW_POS16 1
#define TRIGCTL_STATUS_HW_POS32 1
#define TRIGCTL_STATUS_HW_MASK0 (MASK0_CAST 0x001f)
#define TRIGCTL_STATUS_HW_MASK16 0x003e
#define TRIGCTL_STATUS_HW_MASK32 0x0000003e
#define TRIGCTL_STATUS_HW_C16(value) \
((value & TRIGCTL_STATUS_HW_MASK0) << TRIGCTL_STATUS_HW_POS16)
#define TRIGCTL_STATUS_HW_C32(value) \
((value & TRIGCTL_STATUS_HW_MASK0) << TRIGCTL_STATUS_HW_POS32)

#define INTSTATUS_ADDR (0x810c)
#define INTSTATUS_INTDED_WIDTH 4
#define INTSTATUS_INTDED_POS16 8
#define INTSTATUS_INTDED_POS32 8
#define INTSTATUS_INTDED_MASK0 (MASK0_CAST 0x000f)
#define INTSTATUS_INTDED_MASK16 0x0f00
#define INTSTATUS_INTDED_MASK32 0x00000f00
#define INTSTATUS_INTDED_C16(value) \
((value & INTSTATUS_INTDED_MASK0) << INTSTATUS_INTDED_POS16)
#define INTSTATUS_INTDED_C32(value) \
((value & INTSTATUS_INTDED_MASK0) << INTSTATUS_INTDED_POS32)
#define INTSTATUS_BUSERR_WIDTH 1
#define INTSTATUS_BUSERR_POS16 7
#define INTSTATUS_BUSERR_POS32 7
#define INTSTATUS_BUSERR_MASK0 (MASK0_CAST 0x0001)
#define INTSTATUS_BUSERR_MASK16 0x0080
#define INTSTATUS_BUSERR_MASK32 0x00000080
#define INTSTATUS_BUSERR_C16(value) \
((value & INTSTATUS_BUSERR_MASK0) << INTSTATUS_BUSERR_POS16)
#define INTSTATUS_BUSERR_C32(value) \
((value & INTSTATUS_BUSERR_MASK0) << INTSTATUS_BUSERR_POS32)
#define INTSTATUS_BRK_WIDTH 1
#define INTSTATUS_BRK_POS16 6
#define INTSTATUS_BRK_POS32 6
#define INTSTATUS_BRK_MASK0 (MASK0_CAST 0x0001)
#define INTSTATUS_BRK_MASK16 0x0040
#define INTSTATUS_BRK_MASK32 0x00000040
#define INTSTATUS_BRK_C16(value) \
((value & INTSTATUS_BRK_MASK0) << INTSTATUS_BRK_POS16)
#define INTSTATUS_BRK_C32(value) \
((value & INTSTATUS_BRK_MASK0) << INTSTATUS_BRK_POS32)
#define INTSTATUS_SWINT_WIDTH 5
#define INTSTATUS_SWINT_POS16 1
#define INTSTATUS_SWINT_POS32 1
#define INTSTATUS_SWINT_MASK0 (MASK0_CAST 0x001f)
#define INTSTATUS_SWINT_MASK16 0x003e
#define INTSTATUS_SWINT_MASK32 0x0000003e
#define INTSTATUS_SWINT_C16(value) \
((value & INTSTATUS_SWINT_MASK0) << INTSTATUS_SWINT_POS16)
#define INTSTATUS_SWINT_C32(value) \
((value & INTSTATUS_SWINT_MASK0) << INTSTATUS_SWINT_POS32)
#define INTSTATUS_HWINT_WIDTH 1
#define INTSTATUS_HWINT_POS16 0
#define INTSTATUS_HWINT_POS32 0
#define INTSTATUS_HWINT_MASK0 (MASK0_CAST 0x0001)
#define INTSTATUS_HWINT_MASK16 0x0001
#define INTSTATUS_HWINT_MASK32 0x00000001
#define INTSTATUS_HWINT_C16(value) \
((value & INTSTATUS_HWINT_MASK0) << INTSTATUS_HWINT_POS16)
#define INTSTATUS_HWINT_C32(value) \
((value & INTSTATUS_HWINT_MASK0) << INTSTATUS_HWINT_POS32)

#define INTSETCTL_ADDR (0x811c)
#define INTSETCTL_INTDEDCLR_WIDTH 4
#define INTSETCTL_INTDEDCLR_POS16 8
#define INTSETCTL_INTDEDCLR_POS32 24
#define INTSETCTL_INTDEDCLR_MASK0 (MASK0_CAST 0x000f)
#define INTSETCTL_INTDEDCLR_MASK16 0x0f00
#define INTSETCTL_INTDEDCLR_MASK32 0x0f000000
#define INTSETCTL_INTDEDCLR_C16(value) \
((value & INTSETCTL_INTDEDCLR_MASK0) << INTSETCTL_INTDEDCLR_POS16)
#define INTSETCTL_INTDEDCLR_C32(value) \
((value & INTSETCTL_INTDEDCLR_MASK0) << INTSETCTL_INTDEDCLR_POS32)
#define INTSETCTL_BRKCLR_WIDTH 1
#define INTSETCTL_BRKCLR_POS16 6
#define INTSETCTL_BRKCLR_POS32 22
#define INTSETCTL_BRKCLR_MASK0 (MASK0_CAST 0x0001)
#define INTSETCTL_BRKCLR_MASK16 0x0040
#define INTSETCTL_BRKCLR_MASK32 0x00400000
#define INTSETCTL_BRKCLR_C16(value) \
((value & INTSETCTL_BRKCLR_MASK0) << INTSETCTL_BRKCLR_POS16)
#define INTSETCTL_BRKCLR_C32(value) \
((value & INTSETCTL_BRKCLR_MASK0) << INTSETCTL_BRKCLR_POS32)
#define INTSETCTL_SWINTCLR_WIDTH 5
#define INTSETCTL_SWINTCLR_POS16 1
#define INTSETCTL_SWINTCLR_POS32 17
#define INTSETCTL_SWINTCLR_MASK0 (MASK0_CAST 0x001f)
#define INTSETCTL_SWINTCLR_MASK16 0x003e
#define INTSETCTL_SWINTCLR_MASK32 0x003e0000
#define INTSETCTL_SWINTCLR_C16(value) \
((value & INTSETCTL_SWINTCLR_MASK0) << INTSETCTL_SWINTCLR_POS16)
#define INTSETCTL_SWINTCLR_C32(value) \
((value & INTSETCTL_SWINTCLR_MASK0) << INTSETCTL_SWINTCLR_POS32)
#define INTSETCTL_INTDEDSET_WIDTH 4
#define INTSETCTL_INTDEDSET_POS16 8
#define INTSETCTL_INTDEDSET_POS32 8
#define INTSETCTL_INTDEDSET_MASK0 (MASK0_CAST 0x000f)
#define INTSETCTL_INTDEDSET_MASK16 0x0f00
#define INTSETCTL_INTDEDSET_MASK32 0x00000f00
#define INTSETCTL_INTDEDSET_C16(value) \
((value & INTSETCTL_INTDEDSET_MASK0) << INTSETCTL_INTDEDSET_POS16)
#define INTSETCTL_INTDEDSET_C32(value) \
((value & INTSETCTL_INTDEDSET_MASK0) << INTSETCTL_INTDEDSET_POS32)
#define INTSETCTL_SWINTSET_WIDTH 5
#define INTSETCTL_SWINTSET_POS16 1
#define INTSETCTL_SWINTSET_POS32 1
#define INTSETCTL_SWINTSET_MASK0 (MASK0_CAST 0x001f)
#define INTSETCTL_SWINTSET_MASK16 0x003e
#define INTSETCTL_SWINTSET_MASK32 0x0000003e
#define INTSETCTL_SWINTSET_C16(value) \
((value & INTSETCTL_SWINTSET_MASK0) << INTSETCTL_SWINTSET_POS16)
#define INTSETCTL_SWINTSET_C32(value) \
((value & INTSETCTL_SWINTSET_MASK0) << INTSETCTL_SWINTSET_POS32)

#define TRIGSETCTL_ADDR (0x8120)
#define TRIGSETCTL_SWTRIGCLR_WIDTH 5
#define TRIGSETCTL_SWTRIGCLR_POS16 6
#define TRIGSETCTL_SWTRIGCLR_POS32 22
#define TRIGSETCTL_SWTRIGCLR_MASK0 (MASK0_CAST 0x001f)
#define TRIGSETCTL_SWTRIGCLR_MASK16 0x07c0
#define TRIGSETCTL_SWTRIGCLR_MASK32 0x07c00000
#define TRIGSETCTL_SWTRIGCLR_C16(value) \
((value & TRIGSETCTL_SWTRIGCLR_MASK0) << TRIGSETCTL_SWTRIGCLR_POS16)
#define TRIGSETCTL_SWTRIGCLR_C32(value) \
((value & TRIGSETCTL_SWTRIGCLR_MASK0) << TRIGSETCTL_SWTRIGCLR_POS32)
#define TRIGSETCTL_HWTRIGCLR_WIDTH 5
#define TRIGSETCTL_HWTRIGCLR_POS16 1
#define TRIGSETCTL_HWTRIGCLR_POS32 17
#define TRIGSETCTL_HWTRIGCLR_MASK0 (MASK0_CAST 0x001f)
#define TRIGSETCTL_HWTRIGCLR_MASK16 0x003e
#define TRIGSETCTL_HWTRIGCLR_MASK32 0x003e0000
#define TRIGSETCTL_HWTRIGCLR_C16(value) \
((value & TRIGSETCTL_HWTRIGCLR_MASK0) << TRIGSETCTL_HWTRIGCLR_POS16)
#define TRIGSETCTL_HWTRIGCLR_C32(value) \
((value & TRIGSETCTL_HWTRIGCLR_MASK0) << TRIGSETCTL_HWTRIGCLR_POS32)
#define TRIGSETCTL_SWTRIGSET_WIDTH 5
#define TRIGSETCTL_SWTRIGSET_POS16 6
#define TRIGSETCTL_SWTRIGSET_POS32 6
#define TRIGSETCTL_SWTRIGSET_MASK0 (MASK0_CAST 0x001f)
#define TRIGSETCTL_SWTRIGSET_MASK16 0x07c0
#define TRIGSETCTL_SWTRIGSET_MASK32 0x000007c0
#define TRIGSETCTL_SWTRIGSET_C16(value) \
((value & TRIGSETCTL_SWTRIGSET_MASK0) << TRIGSETCTL_SWTRIGSET_POS16)
#define TRIGSETCTL_SWTRIGSET_C32(value) \
((value & TRIGSETCTL_SWTRIGSET_MASK0) << TRIGSETCTL_SWTRIGSET_POS32)

#define INTMASK_ADDR (0x8124)
#define INTMASK_TRIGMASK_WIDTH 10
#define INTMASK_TRIGMASK_POS16 1
#define INTMASK_TRIGMASK_POS32 17
#define INTMASK_TRIGMASK_MASK0 (MASK0_CAST 0x03ff)
#define INTMASK_TRIGMASK_MASK16 0x07fe
#define INTMASK_TRIGMASK_MASK32 0x07fe0000
#define INTMASK_TRIGMASK_C16(value) \
((value & INTMASK_TRIGMASK_MASK0) << INTMASK_TRIGMASK_POS16)
#define INTMASK_TRIGMASK_C32(value) \
((value & INTMASK_TRIGMASK_MASK0) << INTMASK_TRIGMASK_POS32)
#define INTMASK_INTMASKDED_WIDTH 4
#define INTMASK_INTMASKDED_POS16 8
#define INTMASK_INTMASKDED_POS32 8
#define INTMASK_INTMASKDED_MASK0 (MASK0_CAST 0x000f)
#define INTMASK_INTMASKDED_MASK16 0x0f00
#define INTMASK_INTMASKDED_MASK32 0x00000f00
#define INTMASK_INTMASKDED_C16(value) \
((value & INTMASK_INTMASKDED_MASK0) << INTMASK_INTMASKDED_POS16)
#define INTMASK_INTMASKDED_C32(value) \
((value & INTMASK_INTMASKDED_MASK0) << INTMASK_INTMASKDED_POS32)
#define INTMASK_INTMASK_WIDTH 8
#define INTMASK_INTMASK_POS16 0
#define INTMASK_INTMASK_POS32 0
#define INTMASK_INTMASK_MASK0 (MASK0_CAST 0x00ff)
#define INTMASK_INTMASK_MASK16 0x00ff
#define INTMASK_INTMASK_MASK32 0x000000ff
#define INTMASK_INTMASK_C16(value) \
((value & INTMASK_INTMASK_MASK0) << INTMASK_INTMASK_POS16)
#define INTMASK_INTMASK_C32(value) \
((value & INTMASK_INTMASK_MASK0) << INTMASK_INTMASK_POS32)

#define MDSPHALTCTL_ADDR (0x8118)
#define MDSPHALTCTL_MST_HALT_WIDTH 1
#define MDSPHALTCTL_MST_HALT_POS16 3
#define MDSPHALTCTL_MST_HALT_POS32 3
#define MDSPHALTCTL_MST_HALT_MASK0 (MASK0_CAST 0x0001)
#define MDSPHALTCTL_MST_HALT_MASK16 0x0008
#define MDSPHALTCTL_MST_HALT_MASK32 0x00000008
#define MDSPHALTCTL_MST_HALT_C16(value) \
((value & MDSPHALTCTL_MST_HALT_MASK0) << MDSPHALTCTL_MST_HALT_POS16)
#define MDSPHALTCTL_MST_HALT_C32(value) \
((value & MDSPHALTCTL_MST_HALT_MASK0) << MDSPHALTCTL_MST_HALT_POS32)
#define MDSPHALTCTL_MST_RUN_WIDTH 1
#define MDSPHALTCTL_MST_RUN_POS16 2
#define MDSPHALTCTL_MST_RUN_POS32 2
#define MDSPHALTCTL_MST_RUN_MASK0 (MASK0_CAST 0x0001)
#define MDSPHALTCTL_MST_RUN_MASK16 0x0004
#define MDSPHALTCTL_MST_RUN_MASK32 0x00000004
#define MDSPHALTCTL_MST_RUN_C16(value) \
((value & MDSPHALTCTL_MST_RUN_MASK0) << MDSPHALTCTL_MST_RUN_POS16)
#define MDSPHALTCTL_MST_RUN_C32(value) \
((value & MDSPHALTCTL_MST_RUN_MASK0) << MDSPHALTCTL_MST_RUN_POS32)

/* API */
#define FMR_RXMAIN_HOSTIF_BUF_ADDR 0x7000

#define FMR_RXMAIN_HOSTIF_BUF_END_ADDR 0x72e8

#define FMR_RXMAIN_FOFFS_ADDR     0x7f2c

#define FMR_RXMAIN_PN_ADDR        0x7f2a

#define FMR_RXMAIN_RSSI_ADDR      0x7f28

#define FMR_RXMAIN_API_END_ADDR   0x7ff0

#define FMR_RXMAIN_API_START_ADDR 0x7f1a

#define FMR_RXMAIN_AUDIO_EN_ADDR  0x7f60

#define FMR_RXMAIN_AUDIO_FAST_MUTE_ADDR 0x7ff0

#define FMR_RXMAIN_AUDIO_GAIN_OUT_L_ADDR 0x7f94

#define FMR_RXMAIN_AUDIO_GAIN_OUT_R_ADDR 0x7f96

#define FMR_RXMAIN_AUDIO_MUTE_ADDR 0x7f72

#define FMR_RXMAIN_AUDIOGAIN_IIR_PARAM_ADDR 0x7f90

#define FMR_RXMAIN_CH_INFO_CH_FREQ_ADDR 0x7f3c

#define FMR_RXMAIN_CH_INFO_FOFFS_ADDR 0x7f50

#define FMR_RXMAIN_CH_INFO_HSI_IMG_RSSI_ADDR 0x7f4e

#define FMR_RXMAIN_CH_INFO_HSI_RSSI_ADDR 0x7f4c

#define FMR_RXMAIN_CH_INFO_INJ_SIDE_ADDR 0x7f46

#define FMR_RXMAIN_CH_INFO_LO_FREQ_ADDR 0x7f40

#define FMR_RXMAIN_CH_INFO_LSI_IMG_RSSI_ADDR 0x7f4a

#define FMR_RXMAIN_CH_INFO_LSI_RSSI_ADDR 0x7f48

#define FMR_RXMAIN_CH_INFO_PN_ADDR 0x7f54

#define FMR_RXMAIN_CH_INFO_VCO_FREQ_ADDR 0x7f44

#define FMR_RXMAIN_CH_SCAN_BUF_END_ADDR 0x7f58

#define FMR_RXMAIN_CH_SCAN_BUF_START_ADDR 0x7f56

#define FMR_RXMAIN_CH_SCAN_HOST_IRQ_PTR_ADDR 0x7f5e

#define FMR_RXMAIN_CH_SCAN_HOST_READ_PTR_ADDR 0x7f5c

#define FMR_RXMAIN_CH_SCAN_STATUS_ADDR 0x7f38

#define FMR_RXMAIN_CH_SCAN_WRITE_PTR_ADDR 0x7f5a

#define FMR_RXMAIN_CH_SEARCH_STATUS_ADDR 0x7f36

#define FMR_RXMAIN_CH_TUNE_STATUS_ADDR 0x7f34

#define FMR_RXMAIN_CMD_ID_ADDR    0x7fcc

#define FMR_RXMAIN_CMD_PARAM1_ADDR 0x7fd0

#define FMR_RXMAIN_CMD_PARAM10_ADDR 0x7fe2

#define FMR_RXMAIN_CMD_PARAM11_ADDR 0x7fe4

#define FMR_RXMAIN_CMD_PARAM12_ADDR 0x7fe6

#define FMR_RXMAIN_CMD_PARAM13_ADDR 0x7fe8

#define FMR_RXMAIN_CMD_PARAM14_ADDR 0x7fea

#define FMR_RXMAIN_CMD_PARAM15_ADDR 0x7fec

#define FMR_RXMAIN_CMD_PARAM16_ADDR 0x7fee

#define FMR_RXMAIN_CMD_PARAM2_ADDR 0x7fd2

#define FMR_RXMAIN_CMD_PARAM3_ADDR 0x7fd4

#define FMR_RXMAIN_CMD_PARAM4_ADDR 0x7fd6

#define FMR_RXMAIN_CMD_PARAM5_ADDR 0x7fd8

#define FMR_RXMAIN_CMD_PARAM6_ADDR 0x7fda

#define FMR_RXMAIN_CMD_PARAM7_ADDR 0x7fdc

#define FMR_RXMAIN_CMD_PARAM8_ADDR 0x7fde

#define FMR_RXMAIN_CMD_PARAM9_ADDR 0x7fe0

#define FMR_RXMAIN_CMD_RESERVED_ADDR 0x7fce

#define FMR_RXMAIN_CP_TUNE_ADDR   0x7fc0

#define FMR_RXMAIN_DAC_GAIN_LEFT_ADDR 0x7f6c

#define FMR_RXMAIN_DAC_GAIN_RIGHT_ADDR 0x7f6e

#define FMR_RXMAIN_DEEM_TD_ADDR   0x7f64

#define FMR_RXMAIN_EV_RSSI_THR_LO_ADDR 0x7fbe

#define FMR_RXMAIN_EV_RSSI_THR_UP_ADDR 0x7fbc

#define FMR_RXMAIN_EVENT_CLEAR_ADDR 0x7fb6

#define FMR_RXMAIN_EVENT_EN_ADDR  0x7fb8

#define FMR_RXMAIN_EVENT_STATUS_ADDR 0x7fb4

#define FMR_RXMAIN_FORCE_MONO_ADDR 0x7f70

#define FMR_RXMAIN_FREQTRACK_ENABLE_ADDR 0x7f1e

#define FMR_RXMAIN_FREQTRACK_FOFFS_HZ_ADDR 0x7f20

#define FMR_RXMAIN_FW_BUILDTIME_ADDR 0x7ff8

#define FMR_RXMAIN_FW_ID_ADDR     0x7ff4

#define FMR_RXMAIN_FW_VERSION_END_ADDR 0x7ffc

#define FMR_RXMAIN_FW_VERSION_START_ADDR 0x7ff4

#define FMR_RXMAIN_PILOT_AMPL_HZ_ADDR 0x7f26

#define FMR_RXMAIN_PILOT_STATUS_ADDR 0x7f24

#define FMR_RXMAIN_RDS_BUF_END_ADDR 0x7fa2

#define FMR_RXMAIN_RDS_BUF_START_ADDR 0x7fa0

#define FMR_RXMAIN_RDS_DISCARDED_BLOCKS_ADDR 0x7faa

#define FMR_RXMAIN_RDS_FAST_PI_ADDR 0x7f9a

#define FMR_RXMAIN_RDS_HOST_IRQ_PTR_ADDR 0x7fa8

#define FMR_RXMAIN_RDS_HOST_READ_PTR_ADDR 0x7fa6

#define FMR_RXMAIN_RDS_MODE_ADDR  0x7f9c

#define FMR_RXMAIN_RDS_PI_ADDR    0x7fac

#define FMR_RXMAIN_RDS_PI_ACCEPT_ERRS_ADDR 0x7f9e

#define FMR_RXMAIN_RDS_PI_ERRS_ADDR 0x7fae

#define FMR_RXMAIN_RDS_REPORT_ALL_MISSED_ADDR 0x7fb0

#define FMR_RXMAIN_RDS_SYNC_ADDR  0x7f98

#define FMR_RXMAIN_RDS_WRITE_PTR_ADDR 0x7fa4

#define FMR_RXMAIN_RSSI_OTHER_OFFS_ADDR 0x7f30

#define FMR_RXMAIN_SM_EN_ADDR     0x7f7a

#define FMR_RXMAIN_SM_LEVEL_ADDR  0x7f88

#define FMR_RXMAIN_SM_STEP_ADDR   0x7f82

#define FMR_RXMAIN_SM_THR_UP_ADDR 0x7f80

#define FMR_RXMAIN_SM_VOLUME_ADDR 0x7f8a

#define FMR_RXMAIN_SNC_EN_ADDR    0x7f78

#define FMR_RXMAIN_SNC_STEP_ADDR  0x7f84

#define FMR_RXMAIN_SNC_STEREO_LEVEL_LMR_ADDR 0x7f8c

#define FMR_RXMAIN_SNC_STEREO_LEVEL_LPR_ADDR 0x7f8e

#define FMR_RXMAIN_SNC_THR_LO_ADDR 0x7f7e

#define FMR_RXMAIN_SNC_THR_UP_ADDR 0x7f7c

#define FMR_RXMAIN_SR_ADDR        0x7f62

#define FMR_RXMAIN_SRC_GAIN_LEFT_ADDR 0x7f68

#define FMR_RXMAIN_SRC_GAIN_RIGHT_ADDR 0x7f6a

#define FMR_RXMAIN_STATE_ADDR     0x7f1c

#define FMR_RXMAIN_STEREO_STATUS_ADDR 0x7f76

#define FMR_RXMAIN_SWAP_LR_ADDR   0x7f74

#define FMR_RXMAIN_TUNE_RX_STARTUP_STATE_ADDR 0x7fb2

#define FMR_RXMAIN_WATCHDOG_ACK_ADDR 0x7fc6

#define FMR_RXMAIN_WATCHDOG_REQ_ADDR 0x7fc4

#define FMR_RXMAIN_WATCHDOG_TICK_ADDR 0x7fc8


/** \file
    FMR API Definitions

    \note:
    - only constant values are allowed
    - all bit masks are given related to the corresponding bit field
 */

/*-----------------------------------*/
/* Include global definitions        */
/*-----------------------------------*/

/** \file
    FMR API Global Definitions

    \note:
    - only constant values are allowed
    - all bit masks are given related to the corresponding bit field
*/

/*-------------------------------*/
/* FW Interrupt Requests         */
/*-------------------------------*/

/* dedicated IRQ Position 0, Command completed */
#define FMRTX_IR_CMD               1
/* dedicated IRQ Position 1, EV_ONESHOT, EV_BLOCKTIMER */
#define FMRTX_IR_CMD2              2

#define FMRTX_SWINT_OTHER          (1 << 4)

#define FMRX_SWINT_RX_ALL         16


/*-------------------------------*/
/* SW Trigger                    */
/*-------------------------------*/
#define FMRTX_SWTRIG_CMD           (1 << 0)  /* SWTRIG Position 0 */
#define FMRTX_SWTRIG_FW_FSM        (1 << 4)  /* SWTRIG Position 4 */


/*-------------------------------*/
/* FW Module Constants           */
/*-------------------------------*/



/* IF Frequency */
#define FMRTX_IF_525KHZ     1
#define FMRTX_IF_275KHZ     0


/*-----------------------------------*/
/* API enumeration type definitions  */
/*-----------------------------------*/

/* API Firmware Commands */
#define FMRX_CMD_HALT                   0
#define FMRX_CMD_IDLE                   2
#define FMRX_CMD_RC_ALIGN               4
/* #define FMRX_CMD_RUN_BABS               6 */
#define FMRX_CMD_RESERVED_1             6
#define FMRX_CMD_RECEIVE                8
#define FMRX_CMD_RF_POWER_UP            18
#define FMRX_CMD_RF_POWER_DOWN          20
#define FMRX_CMD_CH_TUNE                22
#define FMRX_CMD_CH_SEARCH              24
#define FMRX_CMD_CH_SCAN                26
#define FMRX_CMD_CFG_SYSCLK             -2
#define FMRX_CMD_CFG_AGC                -4
#define FMRX_CMD_CFG_LNA_GAINOFFS       -6
#define FMRX_CMD_CFG_PPF_GAINOFFS       -8
#define FMRX_CMD_CFG_PILOT_SWITCH       -10
/*#define FMRX_CMD_CFG_CFT_TRACK          -12 */
#define FMRX_CMD_CFG_RDS                -12
#define FMRX_CMD_CFG_BAND               -16
#define FMRX_CMD_CFG_RSSI_CH_OFFS       -18
#define FMRX_CMD_CFG_ANT_TUNE_CP_INIT   -22


/* Firmware State */
#define FMRX_STATE_ANT_TUNE_RX          4
#define FMRX_STATE_RECEIVE              6
#define FMRX_STATE_IDLE                 8
#define FMRX_STATE_HALTED               10
#define FMRX_STATE_RUN_BABS             12
#define FMRX_STATE_RC_ALIGN             14
#define FMRX_STATE_RF_POWER_UP          16
#define FMRX_STATE_RF_POWER_DOWN        18
#define FMRX_STATE_CH_TUNE              20
#define FMRX_STATE_CH_SEARCH            22
#define FMRX_STATE_CH_SCAN              24
#define FMRX_STATE_SINE_RX              30

/* De-Emphasis Filter */
#define DEEM_50us_SRC                   0
#define DEEM_75us_SRC                   1
#define DEEM_50us_DAC                   2
#define DEEM_75us_DAC                   3
#define DEEM_0us_SRC                    4
#define DEEM_0us_DAC                    5

/* Mono / Stereo */
#define EN_STEREO                       0
#define FORCE_MONO                      1

/* Automatic Audio Gain Control */
#define AGC_DISABLED                    0
#define AGC_ENABLED                     2

/* Stereo Noise Cancellation */
#define SNC_DISABLED                    0
#define SNC_ENABLED                     2

/* Soft Mute */
#define SOFT_MUTE_DISABLED              0
#define SOFT_MUTE_ENABLED               2

/* Audio Routing */
#define AUDIOOUT_DAC                    0
#define AUDIOOUT_SRC_48                 2

/* Audio Enable */
#define AUDIO_DISABLED                  0
#define AUDIO_ENABLED                   2

/* Audio Mute */
#define AUDIO_MUTE_DISABLED             0
#define AUDIO_MUTE_ENABLED              1

/* Audio L/R Channel Swap */
#define SWAP_LR_OFF                     0
#define SWAP_LR_ON                      1

/* RDS mode */
#define RDS_MODE_OFF                    0
#define RDS_MODE_ON                     1
#define RDS_MODE_RETAIN                 2

/* Pilot Switch Status */
#define PILOT_NOT_DETECTED              0
#define PILOT_DETECTED                  2

/* Mono/Stereo Status */
#define STEREO_STATUS_MONO              0
#define STEREO_STATUS_STEREO            2


/* Antenna Types */
#define ANTTYPE_HS  0
#define ANTTYPE_EBD     4
#define ANTTYPE_DIFF    2
#define ANTTYPE_SINGLE                  8

#define ANTTYPE_HS_DIFF           (ANTTYPE_HS  | ANTTYPE_DIFF)    /* = 2 */
#define ANTTYPE_EBD_DIFF          (ANTTYPE_EBD | ANTTYPE_DIFF)    /* = 6 */
#define ANTTYPE_HS_SINGLE         (ANTTYPE_HS  | ANTTYPE_SINGLE)  /* = 8 */
#define ANTTYPE_EBD_SINGLE        (ANTTYPE_EBD | ANTTYPE_SINGLE)  /* = 12*/

/* Channel Eval Base Status */
#define FMRX_CH_EVAL_BASE_STATUS_PLL_FAIL   -2
#define FMRX_CH_EVAL_BASE_STATUS_RUNNING     2
#define FMRX_CH_EVAL_BASE_STATUS_IDLE        6
#define FMRX_CH_EVAL_BASE_STATUS_DONE        8
#define FMRX_CH_EVAL_BASE_STATUS_MEASURING  10

/* antenna tuning FSM status */
#define FMRX_ANTENNA_TUNING_STATUS_RUNNING     2
#define FMRX_ANTENNA_TUNING_STATUS_IDLE        6
#define FMRX_ANTENNA_TUNING_STATUS_TUNED       8
#define FMRX_ANTENNA_TUNING_STATUS_FAILED     -2

/* antenna tuning tracking modes */
#define FMRX_ANTENNA_TUNING_MODE_TUNE_TRACK 0
#define FMRX_ANTENNA_TUNING_MODE_TUNE_ONLY  2
#define FMRX_ANTENNA_TUNING_MODE_TRACK_ONLY 4


/* RX Channel Tune */
/* Injection Side Select Mode */
#define FMRX_CH_TUNE_INJ_SIDE_AUTO          0
#define FMRX_CH_TUNE_INJ_SIDE_FORCE_BOTH    2
#define FMRX_CH_TUNE_INJ_SIDE_FORCE_LSI     4
#define FMRX_CH_TUNE_INJ_SIDE_FORCE_HSI     6
/* Selected Injection Side */
#define FMRX_CH_TUNE_IS_SELECTED_HSI        0
#define FMRX_CH_TUNE_IS_SELECTED_LSI        1
/* Status */
#define FMRX_CH_TUNE_STATUS_PLL_FAIL        FMRX_CH_EVAL_BASE_STATUS_PLL_FAIL
#define FMRX_CH_TUNE_STATUS_RUNNING         12
#define FMRX_CH_TUNE_STATUS_OUT_OF_BAND     14
#define FMRX_CH_TUNE_STATUS_OK              FMRX_CH_EVAL_BASE_STATUS_DONE


/* RX Channel Search */
/* Injection Side Select Mode */
#define FMRX_CH_SEARCH_INJ_SIDE_AUTO        FMRX_CH_TUNE_INJ_SIDE_AUTO
#define FMRX_CH_SEARCH_INJ_SIDE_FORCE_LSI   FMRX_CH_TUNE_INJ_SIDE_FORCE_LSI
#define FMRX_CH_SEARCH_INJ_SIDE_FORCE_HSI   FMRX_CH_TUNE_INJ_SIDE_FORCE_HSI
#define FMRX_CH_SEARCH_INJ_SIDE_FORCE_BOTH  FMRX_CH_TUNE_INJ_SIDE_FORCE_BOTH

/* FORCE_MEAS Mask */
#define FMRX_CH_SEARCH_FORCE_IMG_MASK       (1 << 1)
#define FMRX_CH_SEARCH_FORCE_PN_MASK        (1 << 2)
/* NOTE: Only valid when FORCE_PN is selected too ! */
#define FMRX_CH_SEARCH_FORCE_FO_MASK ((1 << 3) | FMRX_CH_SEARCH_FORCE_PN_MASK)

/* Status */
#define FMRX_CH_SEARCH_STATUS_PLL_FAIL      FMRX_CH_EVAL_BASE_STATUS_PLL_FAIL
#define FMRX_CH_SEARCH_STATUS_RUNNING       12
#define FMRX_CH_SEARCH_STATUS_OUT_OF_BAND   14
#define FMRX_CH_SEARCH_STATUS_FAIL          16
#define FMRX_CH_SEARCH_STATUS_IDLE          FMRX_CH_EVAL_BASE_STATUS_IDLE
#define FMRX_CH_SEARCH_STATUS_OK            FMRX_CH_EVAL_BASE_STATUS_DONE


/* RX Channel Scan */
/* Injection Side Select Mode */
#define FMRX_CH_SCAN_INJ_SIDE_AUTO        FMRX_CH_TUNE_INJ_SIDE_AUTO
#define FMRX_CH_SCAN_INJ_SIDE_FORCE_LSI   FMRX_CH_TUNE_INJ_SIDE_FORCE_LSI
#define FMRX_CH_SCAN_INJ_SIDE_FORCE_HSI   FMRX_CH_TUNE_INJ_SIDE_FORCE_HSI
#define FMRX_CH_SCAN_INJ_SIDE_FORCE_BOTH  FMRX_CH_TUNE_INJ_SIDE_FORCE_BOTH

/* FORCE_MEAS Mask */
#define FMRX_CH_SCAN_FORCE_IMG_MASK  (1 << 1)
#define FMRX_CH_SCAN_FORCE_PN_MASK   (1 << 2)
/* NOTE: Only valid when FORCE_PN is selected too ! */
#define FMRX_CH_SCAN_FORCE_FO_MASK   ((1 << 3) | FMRX_CH_SCAN_FORCE_PN_MASK)

/* Status */
#define FMRX_CH_SCAN_STATUS_PLL_FAIL      FMRX_CH_EVAL_BASE_STATUS_PLL_FAIL
#define FMRX_CH_SCAN_STATUS_RUNNING       12
#define FMRX_CH_SCAN_STATUS_OUT_OF_BAND   14
#define FMRX_CH_SCAN_STATUS_FAIL          16
#define FMRX_CH_SCAN_STATUS_IDLE          FMRX_CH_EVAL_BASE_STATUS_IDLE
#define FMRX_CH_SCAN_STATUS_OK            FMRX_CH_EVAL_BASE_STATUS_DONE



/* frequency track retune enable (temp. drift compensation) */
#define RX_DPLL_TEMP_TRACK_DISABLED  0
#define RX_DPLL_TEMP_TRACK_ENABLED   2


/*-------------------------------*/
/* FW Event Requests             */
/*-------------------------------*/

/* Soft Interrupts */
#define SWINT_RSSI                      (1 << 0)
#define SWINT_RDS                       (1 << 1)
#define SWINT_RDSSYNC                   (1 << 2)
#define SWINT_STEREO                    (1 << 3)
#define SWINT_OTHER                     FMRTX_SWINT_OTHER

/* Firmware Events */
/* enum event_en */
#define  EV_PILOT                       (1 << 3)
#define EV_SCAN_DATA                    (1 << 7)



#endif  /* _FMR_RX_API_H_ */