/* SPDX-License-Identifier: MIT */
/*
 * Copyright © 2021-2024 Intel Corporation
 */

#ifndef _XE_GUC_CAPTURE_TYPES_H
#define _XE_GUC_CAPTURE_TYPES_H

#include <linux/types.h>
#include "regs/xe_reg_defs.h"

struct xe_guc;

/* data type of the register in register list */
enum capture_register_data_type {
	REG_32BIT = 0,
	REG_64BIT_LOW_DW,
	REG_64BIT_HI_DW,
};

/**
 * struct __guc_mmio_reg_descr - GuC mmio register descriptor
 *
 * xe_guc_capture module uses these structures to define a register
 * (offsets, names, flags,...) that are used at the ADS regisration
 * time as well as during runtime processing and reporting of error-
 * capture states generated by GuC just prior to engine reset events.
 */
struct __guc_mmio_reg_descr {
	/** @reg: the register */
	struct xe_reg reg;
	/**
	 * @data_type: data type of the register
	 * Could be 32 bit, low or hi dword of a 64 bit, see enum
	 * register_data_type
	 */
	enum capture_register_data_type data_type;
	/** @flags: Flags for the register */
	u32 flags;
	/** @mask: The mask to apply */
	u32 mask;
	/** @regname: Name of the register */
	const char *regname;
};

/**
 * struct __guc_mmio_reg_descr_group - The group of register descriptor
 *
 * xe_guc_capture module uses these structures to maintain static
 * tables (per unique platform) that consists of lists of registers
 * (offsets, names, flags,...) that are used at the ADS regisration
 * time as well as during runtime processing and reporting of error-
 * capture states generated by GuC just prior to engine reset events.
 */
struct __guc_mmio_reg_descr_group {
	/** @list: The register list */
	const struct __guc_mmio_reg_descr *list;
	/** @num_regs: Count of registers in the list */
	u32 num_regs;
	/** @owner: PF/VF owner, see enum guc_capture_list_index_type */
	u32 owner;
	/** @type: Capture register type, see enum guc_state_capture_type */
	u32 type;
	/** @engine: The engine class, see enum guc_capture_list_class_type */
	u32 engine;
};

#endif