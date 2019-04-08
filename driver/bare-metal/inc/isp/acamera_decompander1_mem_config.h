//----------------------------------------------------------------------------
//   The confidential and proprietary information contained in this file may
//   only be used by a person authorised under and to the extent permitted
//   by a subsisting licensing agreement from ARM Limited or its affiliates.
//
//          (C) COPYRIGHT [2018] ARM Limited or its affiliates.
//              ALL RIGHTS RESERVED
//
//   This entire notice must be reproduced on all copies of this file
//   and copies of this file may only be made by a person if such person is
//   permitted to do so under the terms of a subsisting license agreement
//   from ARM Limited or its affiliates.
//----------------------------------------------------------------------------

#ifndef __ACAMERA_DECOMPANDER1_MEM_CONFIG_H__
#define __ACAMERA_DECOMPANDER1_MEM_CONFIG_H__


#include "system_sw_io.h"

#include "system_hw_io.h"

// ------------------------------------------------------------------------------ //
// Instance 'decompander1_ping_mem' of module 'decompander1_ping_mem'
// ------------------------------------------------------------------------------ //

#define ACAMERA_DECOMPANDER1_MEM_BASE_ADDR (0xabf0L)
#define ACAMERA_DECOMPANDER1_MEM_SIZE (0x800)

#define ACAMERA_DECOMPANDER1_MEM_ARRAY_DATA_DEFAULT (0x0)
#define ACAMERA_DECOMPANDER1_MEM_ARRAY_DATA_DATASIZE (32)
#define ACAMERA_DECOMPANDER1_MEM_ARRAY_DATA_OFFSET (0xabf0L)

// args: index (0-256), data (32-bit)
static __inline void acamera_decompander1_mem_array_data_write( uintptr_t base, uint32_t index, uint32_t data) {
    system_sw_write_32(base + 0xabf0L + (index << 2), data);
}
static __inline uint32_t acamera_decompander1_mem_array_data_read( uintptr_t base, uint32_t index) {
    return system_sw_read_32(base + 0xabf0L + (index << 2));
}
// ------------------------------------------------------------------------------ //
#endif //__ACAMERA_DECOMPANDER1_MEM_CONFIG_H__
