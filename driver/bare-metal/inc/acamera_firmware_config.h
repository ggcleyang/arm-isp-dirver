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

#ifndef __ACAMERA_FIRMWARE_CONFIG_H__
#define __ACAMERA_FIRMWARE_CONFIG_H__


#define ACAMERA_EVENT_QUEUE_SIZE 256
#define ACAMERA_FW_SHP_DETECTED_MAXIMUM 1023
#define ACAMERA_IRQ_AE_STATS 3
#define ACAMERA_IRQ_AF2_STATS 1
#define ACAMERA_IRQ_ANTIFOG_HIST 14
#define ACAMERA_IRQ_AWB_STATS 4
#define ACAMERA_IRQ_DFE_FRAME_END 17
#define ACAMERA_IRQ_FPGA_FRAME_END 9
#define ACAMERA_IRQ_FRAME_END 0
#define ACAMERA_IRQ_FRAME_START 7
#define ACAMERA_IRQ_FRAME_WRITER_DS 6
#define ACAMERA_IRQ_FRAME_WRITER_FR 5
#define ACAMERA_ISP_PROFILING 0
#define ACAMERA_ISP_PROFILING_INIT 0
#define AE_CENTER_ZONES 65535
#define AF_SPOT_COUNT_X 5
#define AF_SPOT_COUNT_Y 5
#define ANALOG_GAIN_ACCURACY (1<<(LOG2_GAIN_SHIFT-2))
#define AWB_BG_MAX_GAIN 0
#define BLACK_LEVEL_SHIFT_DG 8
#define BLACK_LEVEL_SHIFT_WB 8
#define CALIBRATION_IRIDIX_AVG_COEF_INIT 0
#define CM_SATURATION_TARGET 128
#define CONNECTION_BUFFER_SIZE (26*1024)
#define CONNECTION_IN_THREAD 0
#define DDR_BASE_ADDRESS 0
#define EXPOSURE_DRIVES_LONG_INTEGRATION_TIME 0
#define FILTER_LONG_INT_TIME 0
#define FILTER_SHORT_INT_TIME 0
#define FIRMWARE_CONTEXT_NUMBER 1
#define FPGA_HAS_HDMI 1
#define FSM_NAMES {"GENERIC","SENSOR","CMOS","CROP","GENERAL","AE_BALANCED","AWB_MESH_NBP","COLOR_MATRIX","IRIDIX8","NOISE_REDUCTION","SHARPENING","MATRIX_YUV","GAMMA_CONTRAST","AF_LMS","DMA_WRITER","MONITOR"}
#define FW_DO_INITIALIZATION 1
#define FW_DS1_OUTPUT_FORMAT_PIPE PIPE_OUT_RGB
#define FW_EVT_QUEUE_TIMEOUT_MS 100
#define FW_FR_OUTPUT_FORMAT_PIPE PIPE_OUT_RGB
#define FW_HAS_CONTROL_CHANNEL 0
#define FW_HAS_CUSTOM_SETTINGS 1
#define FW_INPUT_FORMAT DMA_FORMAT_RAW16
#define FW_LOG_FROM_ISR 0
#define FW_LOG_HAS_SRC 0
#define FW_LOG_HAS_TIME 0
#define FW_LOG_LEVEL LOG_NOTHING
#define FW_LOG_MASK 4294967295
#define FW_LOG_REAL_TIME 0
#define FW_OUTPUT_FORMAT DMA_FORMAT_A2R10G10B10
#define FW_OUTPUT_FORMAT_SECONDARY DMA_FORMAT_DISABLE
#define FW_USE_SYSTEM_DMA 1
#define FW_ZONE_AE 0
#define IRIDIX_BYPASS_MAX_STR_CLIP 0
#define IRIDIX_HAS_CUSTOM_ASYMMETRY 1
#define IRIDIX_HAS_PRE_POST_GAMMA_LUT_LINEAR 0
#define IRIDIX_STRENGTH_BY_EXP_RATIO 0
#define IRIDIX_STRENGTH_TARGET 128
#define ISP_BINARY_SEQUENCE 0
#define ISP_CONTROLS_DMA_READER 1
#define ISP_DEFAULT_AF_ZONES_HOR 15
#define ISP_DEFAULT_AF_ZONES_VERT 15
#define ISP_DISPLAY_MODE 1080
#define ISP_DMA_RAW_BANKS 1
#define ISP_DMA_RAW_CAPTURE 0
#define ISP_FULL_HISTOGRAM_SIZE 1024
#define ISP_FW_BUILD 1
#define ISP_GAMMA_LUT_SIZE 129
#define ISP_HAS_AE_BALANCED_FSM 1
#define ISP_HAS_AF 1
#define ISP_HAS_AF_LMS_FSM 1
#define ISP_HAS_AWB_MESH_NBP_FSM 1
#define ISP_HAS_CMOS_FSM 1
#define ISP_HAS_COLOR_MATRIX_FSM 1
#define ISP_HAS_CONNECTION_BUFFER 1
#define ISP_HAS_CONNECTION_CHARDEV 0
#define ISP_HAS_CONNECTION_DEBUG 0
#define ISP_HAS_CONNECTION_SOCKET 0
#define ISP_HAS_CONNECTION_SOCKET_PORT 0
#define ISP_HAS_CONNECTION_UART 0
#define ISP_HAS_CROP_FSM 1
#define ISP_HAS_DMA_INPUT 0
#define ISP_HAS_DMA_WRITER_FSM 1
#define ISP_HAS_DS1 1
#define ISP_HAS_FPGA_WRAPPER 0
#define ISP_HAS_GAMMA_CONTRAST_FSM 1
#define ISP_HAS_GENERAL_FSM 1
#define ISP_HAS_IRIDIX8_FSM 1
#define ISP_HAS_MATRIX_YUV_FSM 1
#define ISP_HAS_META_CB 0
#define ISP_HAS_MONITOR_FSM 1
#define ISP_HAS_NOISE_REDUCTION_FSM 1
#define ISP_HAS_RAW_CB 0
#define ISP_HAS_SENSOR_FSM 1
#define ISP_HAS_SHARPENING_FSM 1
#define ISP_HAS_SINTER_RADIAL_LUT 1
#define ISP_HAS_TEMPER 3
#define ISP_HAS_WDR_FRAME_BUFFER 0
#define ISP_INPUT_BITS 20
#define ISP_IRQ_DISABLE_ALL_IRQ 4294967295
#define ISP_IRQ_MASK_VECTOR 4289200114
#define ISP_MAX_SENSOR_MODES 8
#define ISP_MBLAZE_DMA_COHERENT_DUMMY_ALLOC_BASE 1681915904
#define ISP_MBLAZE_DMA_COHERENT_DUMMY_ALLOC_SIZE 536870912
#define ISP_PIPE_BUFFER_SIZE 6
#define ISP_SENSOR_DRIVER_AD5821 0
#define ISP_SENSOR_DRIVER_AN41908A 0
#define ISP_SENSOR_DRIVER_BU64748 0
#define ISP_SENSOR_DRIVER_DONGWOON 0
#define ISP_SENSOR_DRIVER_DW9800 0
#define ISP_SENSOR_DRIVER_FP5510A 0
#define ISP_SENSOR_DRIVER_LC898201 0
#define ISP_SENSOR_DRIVER_MODEL 0
#define ISP_SENSOR_DRIVER_NULL 1
#define ISP_SENSOR_DRIVER_ROHM 0
#define ISP_SENSOR_DRIVER_V4L2 0
#define ISP_SOC_DMA_BUS_OFFSET 0
#define ISP_SOC_START_ADDR 4290772992
#define ISP_V4L2_DMA_COHERENT_DUMMY_ALLOC 1
#define ISP_V4L2_DMA_COHERENT_DUMMY_ALLOC_BASE 1866465280
#define ISP_V4L2_DMA_COHERENT_DUMMY_ALLOC_SIZE 536870912
#define ISP_WDR_DEFAULT_MODE WDR_MODE_LINEAR
#define ISP_WDR_SWITCH 1
#define JUNO_DIRECT_DDR_ACCESS 0
#define KERNEL_MODULE 0
#define LOG2_GAIN_SHIFT 18
#define LOG_MODULE_AE_BALANCED 5
#define LOG_MODULE_AE_BALANCED_MASK 32
#define LOG_MODULE_AF_LMS 13
#define LOG_MODULE_AF_LMS_MASK 8192
#define LOG_MODULE_ALL 65535
#define LOG_MODULE_AWB_MESH_NBP 6
#define LOG_MODULE_AWB_MESH_NBP_MASK 64
#define LOG_MODULE_CMOS 2
#define LOG_MODULE_CMOS_MASK 4
#define LOG_MODULE_COLOR_MATRIX 7
#define LOG_MODULE_COLOR_MATRIX_MASK 128
#define LOG_MODULE_CROP 3
#define LOG_MODULE_CROP_MASK 8
#define LOG_MODULE_DMA_WRITER 14
#define LOG_MODULE_DMA_WRITER_MASK 16384
#define LOG_MODULE_GAMMA_CONTRAST 12
#define LOG_MODULE_GAMMA_CONTRAST_MASK 4096
#define LOG_MODULE_GENERAL 4
#define LOG_MODULE_GENERAL_MASK 16
#define LOG_MODULE_GENERIC 0
#define LOG_MODULE_GENERIC_MASK 1
#define LOG_MODULE_IRIDIX8 8
#define LOG_MODULE_IRIDIX8_MASK 256
#define LOG_MODULE_MATRIX_YUV 11
#define LOG_MODULE_MATRIX_YUV_MASK 2048
#define LOG_MODULE_MAX 16
#define LOG_MODULE_MONITOR 15
#define LOG_MODULE_MONITOR_MASK 32768
#define LOG_MODULE_NOISE_REDUCTION 9
#define LOG_MODULE_NOISE_REDUCTION_MASK 512
#define LOG_MODULE_SENSOR 1
#define LOG_MODULE_SENSOR_MASK 2
#define LOG_MODULE_SHARPENING 10
#define LOG_MODULE_SHARPENING_MASK 1024
#define MAX_DMA_QUEUE_FRAMES ISP_PIPE_BUFFER_SIZE
#define OVEREXPOSE_TO_KEEP_ANTIFLICKER 0
#define PROJECT_DEPLOY 0
#define SENSOR_BINARY_SEQUENCE 0
#define SENSOR_DEFAULT_EXP_NUM 1
#define SENSOR_DEFAULT_PRESET_MODE 0
#define SENSOR_HAS_FLASH 0
#define SENSOR_HW_INTERFACE ACameraDefault
#define SENSOR_MASTER_CLOCK 27
#define SYSTEM_AE_COMPENSATION_DEFAULT 128
#define SYSTEM_ANTI_FLICKER_FREQUENCY_DEFAULT 50
#define SYSTEM_EXPOSURE_PARTITION_VALUE_COUNT 10
#define SYSTEM_EXPOSURE_RATIO_DEFAULT 8
#define SYSTEM_MANUAL_EXPOSURE_RATIO_DEFAULT 0
#define SYSTEM_MAXIMUM_IRIDIX_STRENGTH_DEFAULT 255
#define SYSTEM_MAX_EXPOSURE_RATIO_DEFAULT 16
#define SYSTEM_MINIMUM_IRIDIX_STRENGTH_DEFAULT 0
#define USER_MODULE 0
#define V4L2_FRAME_ID_SYNC 0
#define V4L2_INTERFACE_BUILD 0
#define V4L2_RUNNING_ON_JUNO 0
#define V4L2_SOC_SUBDEV_ENABLE 0
#define WDR_AUTO_SWITCH_TO WDR_MODE_LINEAR
#define WDR_SWITCH_EXPOSURE_CORRECTION 0
#define WDR_SWITCH_FRAMES 0
#define WDR_SWITCH_THRESHOLD 0
#define WDR_SWITCH_THRESHOLD_HISTERESIS 0
#endif
