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

#ifndef _ACAMERA_COMMAND_API_IMPL_H_
#define _ACAMERA_COMMAND_API_IMPL_H_
#include "acamera_types.h"
#include "acamera_fw.h"

uint8_t general_context_number(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t general_active_context(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t selftest_fw_revision(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t sensor_streaming(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t sensor_supported_presets(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t sensor_preset(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t sensor_wdr_mode(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t sensor_fps(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t sensor_width(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t sensor_height(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t sensor_exposures(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t sensor_info_preset(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t sensor_info_wdr_mode(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t sensor_info_fps(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t sensor_info_width(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t sensor_info_height(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t sensor_info_exposures(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_logger_level(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_logger_mask(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t buffer_data_type(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t test_pattern_enable(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t test_pattern(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t temper_mode(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_freeze_firmware(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_manual_exposure(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_manual_exposure_ratio(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_manual_integration_time(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_manual_max_integration_time(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_manual_sensor_analog_gain(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_manual_sensor_digital_gain(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_manual_isp_digital_gain(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_manual_awb(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_manual_saturation(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_exposure(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_exposure_ratio(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_max_exposure_ratio(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_integration_time(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_long_integration_time(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_short_integration_time(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_max_integration_time(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_sensor_analog_gain(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_max_sensor_analog_gain(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_sensor_digital_gain(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_max_sensor_digital_gain(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_isp_digital_gain(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_max_isp_digital_gain(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_awb_red_gain(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_awb_blue_gain(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_saturation_target(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_antiflicker_enable(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t system_anti_flicker_frequency(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t calibration_update(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t isp_modules_manual_iridix(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t isp_modules_manual_sinter(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t isp_modules_manual_temper(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t isp_modules_manual_auto_level(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t isp_modules_manual_frame_stitch(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t isp_modules_manual_raw_frontend(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t isp_modules_manual_black_level(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t isp_modules_manual_shading(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t isp_modules_manual_demosaic(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t isp_modules_manual_cnr(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t isp_modules_manual_sharpen(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t status_info_exposure_log2(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t status_info_gain_ones(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t status_info_gain_log2(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t status_info_awb_mix_light_contrast(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t status_info_af_lens_pos(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t status_info_af_focus_value(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t dma_reader_output(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t fr_format_base_plane(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t ds1_format_base_plane(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t orientation_vflip(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t orientation_hflip(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t image_resize_type(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t image_resize_enable(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t image_resize_width(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t image_resize_height(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t image_crop_xoffset(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t image_crop_yoffset(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t af_lens_status(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t af_mode(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t af_range_low(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t af_range_high(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t af_roi(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t af_manual_control(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t ae_mode(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t ae_split_preset(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t ae_gain(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t ae_exposure(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t ae_roi(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t ae_compensation(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t awb_mode(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t awb_temperature(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t antiflicker_mode(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t color_mode(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t brightness_strength(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t contrast_strength(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t saturation_strength(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t sharpening_strength(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t register_address(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t register_size(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t register_source(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
uint8_t register_value(acamera_fsm_mgr_t *instance, uint32_t value, uint8_t direction, uint32_t *ret_value);
#endif//_ACAMERA_COMMAND_API_IMPL_H_
