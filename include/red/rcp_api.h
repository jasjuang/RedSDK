/********************************************************************************
 * This file is part of the RCP SDK Release 6.51.2
 * Copyright (C) 2009-2018 RED.COM, LLC.  All rights reserved.
 *
 * For technical support please email rcpsdk@red.com.
 *
 * "Source Code" means the accompanying software in any form preferred for making
 * modifications. "Source Code" does not include the accompanying strlcat.c and
 * strlcpy.c software and examples/qt/common/qt/serial software.
 * 
 * "Binary Code" means machine-readable Source Code in binary form.
 * 
 * "Approved Recipients" means only those recipients of the Source Code who have
 * entered into the RCP SDK License Agreement with RED.COM, LLC. All
 * other recipients are not authorized to possess, modify, use, or distribute the
 * Source Code.
 *
 * RED.COM, LLC hereby grants Approved Recipients the rights to modify this
 * Source Code, create derivative works based on this Source Code, and distribute
 * the modified/derivative works only as Binary Code in its binary form. Approved
 * Recipients may not distribute the Source Code or any modification or derivative
 * work of the Source Code. Redistributions of Binary Code must reproduce this
 * copyright notice, this list of conditions, and the following disclaimer in the
 * documentation or other materials provided with the distribution. RED.COM, LLC
 * may not be used to endorse or promote Binary Code redistributions without
 * specific prior written consent from RED.COM, LLC. 
 *
 * The only exception to the above licensing requirements is any recipient may use,
 * copy, modify, and distribute in any format the strlcat.c and strlcpy.c software
 * in accordance with the provisions required by the license associated therewith;
 * provided, however, that the modifications are solely to the strlcat.c and
 * strlcpy.c software and do not include any other portion of the Source Code.
 * 
 * THE ACCOMPANYING SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE, AND NON-INFRINGEMENT.
 * IN NO EVENT SHALL THE RED.COM, LLC, ANY OTHER COPYRIGHT HOLDERS, OR ANYONE
 * DISTRIBUTING THE SOFTWARE BE LIABLE FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER
 * IN CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 ********************************************************************************/

/********** Begin file: rcp_types_public.h **************************************/
#ifndef RCP_TYPES_PUBLIC_H
#define RCP_TYPES_PUBLIC_H

#include <stdint.h>

#define ALLOWED_NAME_CHARS "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789 -=[];',./!@#$%^&*()_+{}:<>?"
#define ALLOWED_SCENE_CHARS "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-"
#define ALLOWED_SHOT_CHARS "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789*"
#define ALLOWED_COMM_NAME_CHARS "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_"
#define ALLOWED_AUDIO_CHANNEL_CHARS "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"
#define ALLOWED_HOST_IP_CHARS "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-."
#define ALLOWED_SSID_CHARS "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789 -=[];',./!@#$%^&*()_+{}:<>?\""
#define ALLOWED_WEP_PW_CHARS "ABCDEF0123456789"
#define ALLOWED_WPA_PW_CHARS "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789 -=[];',./!@#$%^&*()_+{}:<>?\"\\`|"
#define ALLOWED_LENS_NAME_CHARS "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789 -=[];',./!@#$%^&*()_+{}:<>?"
#define ALLOWED_LENS_SERIAL_CHARS "0123456789"

#define BATTERY_INVALID_VALUE           (-1)
#define BATTERY_RUNTIME_WARNING_MINUTES (10)
#define BATTERY_RUNTIME_LOW_MINUTES     (5)
#define BATTERY_RUNTIME_MAX_MINUTES     (600)

/* RCP: CSPACE */
typedef enum {
    COLORSPACE_REC709 = 1,
    COLORSPACE_REDCOLOR2 = 6,
    COLORSPACE_REDCOLOR3 = 8,
    COLORSPACE_DRAGONCOLOR = 9,
    COLORSPACE_ACES = 10,
    COLORSPACE_REDCOLOR4 = 11,
    COLORSPACE_DRAGONCOLOR2 = 12,
    COLORSPACE_REC2020 = 13,
    COLORSPACE_ACES_AP1 = 14,
    COLORSPACE_RWGRGB = 15,
    COLORSPACE_P3 = 16,
    COLORSPACE_MAX,
    COLORSPACE_UNDEFINED = 255
} colorspace_t;

/* RCP: GSPACE */
typedef enum {
    GAMMACURVE_REDLOGFILM = 9,
    GAMMACURVE_REDGAMMA2 = 10,
    GAMMACURVE_REDGAMMA3 = 11,
    GAMMACURVE_REDGAMMA4 = 12,
    GAMMACURVE_ACESPROXY = 13,
    GAMMACURVE_LOG3G12 = 14,
    GAMMACURVE_HDR2084 = 15,
    GAMMACURVE_BT1886 = 16,
    GAMMACURVE_ACESCC = 17,
    GAMMACURVE_LOG3G10 = 18,
    GAMMACURVE_MAX,
    GAMMACURVE_UNDEFINED = 255
} gammaspace_t;

/* RCP: CLPDIR */
typedef enum
{
    PLAYER_DIRECTION_DEFAULT,
    PLAYER_DIRECTION_FWD,
    PLAYER_DIRECTION_REV
} player_direction_t;

/* RCP: LOOP */
typedef enum
{
    PLAYER_NO_LOOP,
    PLAYER_LOOP,
    PLAYER_LOOP_LIST
} player_loop_t;

/* RCP: FORMAT2 */
typedef enum
{
    RESOLUTION_8K = 0,
    RESOLUTION_6P5K,
    RESOLUTION_2K,
    RESOLUTION_3K,
    RESOLUTION_3P5K,
    RESOLUTION_4K,
    RESOLUTION_4P5K,
    RESOLUTION_5K,
    RESOLUTION_1K,
    RESOLUTION_6K,
    RESOLUTION_5P5K,
    RESOLUTION_2P5K,
    RESOLUTION_7K,
    RESOLUTION_7P5K,
    RESOLUTION_UNKNOWN,
    RESOLUTION_MAX
} resolution_t;

/* RCP: FORMAT2 */
typedef enum
{
    AR_3_2,
    AR_4_3,
    AR_5_4,
    AR_16_9,
    AR_2_1,
    AR_2_4_1,
    AR_FF,
    AR_720P,
    AR_1080P,
    AR_1_22_1,
    AR_6_5,
    AR_4_1,
    AR_8_1,
    AR_1_1,
    AR_14_9,
    AR_1_7_1,
    AR_8_9,
    AR_1_2_1,
    AR_UNKNOWN,
    AR_MAX
} aspect_ratio_t;

/* RCP: FORMAT2 */
typedef enum
{
    ANA_OFF = 0,
    ANA_2 = 1,
    ANA_1_3 = 2,
    ANA_1_25 = 3,
    ANA_MAX
} anamorphic_t;

/* RCP: HDRMODE */
typedef enum
{
    HDR_MODE_OFF,
    HDR_MODE_HDRX
} hdr_mode_t;

/* RCP: OGTMODE */
typedef enum
{
    OPEN_GATE_MODE_DONT_ALLOW,
    OPEN_GATE_MODE_ALLOW
} open_gate_mode_t;

/* RCP: OGTSTATE */
typedef enum
{
    OPEN_GATE_STATE_OFF,
    OPEN_GATE_STATE_ACTIVE
} open_gate_state_t;

/* RCP: LENSFDMD */
typedef enum {
    FOCUS_DISTANCE_MODE_METRIC,
    FOCUS_DISTANCE_MODE_IMPERIAL
} focus_distance_mode_t;

/* RCP: SHMODE */
typedef enum {
    SHUTTER_MODE_ABSOLUTE,
    SHUTTER_MODE_RELATIVE
} shutter_mode_t;

/* RCP: SHDISP */
typedef enum {
    SHUTTER_TIME,
    SHUTTER_ANGLE
} shutter_display_t;

/* RCP: SYNC */
typedef enum {  /* actual shutter sync state. */
    SYNC_STATE_NONE,          /*  grey */
    SYNC_STATE_NO_LOCK,       /*  red */
    SYNC_STATE_GENLOCK        /*  green */
} sync_state_t;

/* RCP: GENLOC */
typedef enum {
    GENLOCK_STATE_NONE,      /*  grey - no signal detected */
    GENLOCK_STATE_PRESENT,   /*  red - signal detected but not locked */
    GENLOCK_STATE_LOCKED,     /*  green - monitors locked to genlock signal. */
    GENLOCK_STATE_CROSSLOCKED /*  yellow - genlock in does not match monitor rate, but gennum can cross lock */
} genlock_state_t;

/* RCP: FALSEC */
typedef enum {
    FALSE_COLOR_MODE_NONE,
    FALSE_COLOR_MODE_EXPOSURE,
    FALSE_COLOR_MODE_VIDEO,
    FALSE_COLOR_MODE_FOCUS,
    FALSE_COLOR_MODE_EDGE,
    FALSE_COLOR_MODE_GIO_SCOPE
} false_color_mode_t;

/* RCP: PWRSRC */
typedef enum {
    POWER_SOURCE_REAR_BAT_1,
    POWER_SOURCE_REAR_BAT_2,
    POWER_SOURCE_REAR_BAT_3,
    POWER_SOURCE_REAR_BAT_4,
    POWER_SOURCE_SH_BAT,
    POWER_SOURCE_DC_JACK_BAT,   /* Battery */
    POWER_SOURCE_DC_JACK_AC,    /* AC Adaptor (ElPac) */
    POWER_SOURCE_DEPRECATED_1,
    POWER_SOURCE_DEPRECATED_2,
    POWER_SOURCE_VMOUNT,
    POWER_SOURCE_DC_JACK_28V,   /* XL 28V DC IN */
    POWER_SOURCE_COUNT
} power_source_t;

/* RCP: RECORD (S) */
typedef enum {
    SET_RECORD_STATE_STOP,
    SET_RECORD_STATE_START,
    SET_RECORD_STATE_TOGGLE,
    SET_RECORD_STATE_START_PRE_RECORD
} set_record_state_t;

/* RCP: RECORD (G and C) */
typedef enum {
    RECORD_STATE_NOT_RECORDING,
    RECORD_STATE_RECORDING,
    RECORD_STATE_FINALIZING,
    RECORD_STATE_PRE_RECORDING,
    RECORD_STATE_ENCODING,
    RECORD_STATE_COUNT
} record_state_t;

/* RCP: TETHERED SERVER (G and C) */
typedef enum {
    TETHERED_SERVER_STATE_NOT_RECORDING,
    TETHERED_SERVER_STATE_RECORDING
} tethered_server_state_t;

/* RCP: PLAYBACK (S) */
typedef enum {
    SET_PLAYBACK_STATE_STOP,
    SET_PLAYBACK_STATE_START,
    SET_PLAYBACK_STATE_TOGGLE
} set_playback_state_t;

/* RCP: PLAYBACK (G and C) */
typedef enum {
    PLAYBACK_STATE_NOT_IN_PLAYBACK,
    PLAYBACK_STATE_IN_PLAYBACK,
    PLAYBACK_STATE_COUNT
} playback_state_t;

/* RCP: CAMPOS */
typedef enum {
    CAM_POS_LEFT,
    CAM_POS_CENTER,
    CAM_POS_RIGHT
} cam_pos_t;

/* RCP: TPATTERN */
typedef enum
{
    MONITOR_TEST_PATTERN_NONE,
    MONITOR_TEST_PATTERN_CHIP_CHART,
    MONITOR_TEST_PATTERN_SMPTE_BAR,
    MONITOR_TEST_PATTERN_LUMA_RAMP,
    MONITOR_TEST_PATTERN_COUNT
} monitor_test_pattern_t;

/* RCP: SELISO, SELSH */
typedef enum {
    LIST_SELECT_NEXT,
    LIST_SELECT_PREVIOUS,
    LIST_SELECT_FIRST,
    LIST_SELECT_LAST
} list_select_t;

/* RCP: TCJAM */
typedef enum {
    TC_SYNC_STATE_NOT_PRESENT,       /* no analog LTC timecode being detected */
    TC_SYNC_STATE_PRESENT_NOT_USED,  /* analog LTC signal is being received, but not being used */
    TC_SYNC_STATE_PRESENT_USED       /* analog LTC signal is being received and TC is jamsynced to it */
} tc_sync_state_t;

/* RCP: FRPRMODE */
typedef enum {
    FRAME_PROCESSING_INVALID = -1,
    FRAME_PROCESSING_OFF,
    FRAME_PROCESSING_SUM,
    FRAME_PROCESSING_AVG
} frame_processing_t;

/* RCP: BATTMODE */
typedef enum {
    BATTERY_DISPLAY_MODE_PERCENT,
    BATTERY_DISPLAY_MODE_TOTAL_TIME
} battery_display_mode_t;

/* RCP: RAWMODE */
typedef enum {
    RAW_MODE_OFF,
    RAW_MODE_ON,
    RAW_MODE_COUNT
} raw_mode_t;

/* RCP: LOGVIEWMODE */
typedef enum {
    LOG_VIEW_MODE_OFF,
    LOG_VIEW_MODE_ON,
    LOG_VIEW_MODE_COUNT
} log_view_mode_t;

/* RCP: MEDIAMOD */
typedef enum
{
    MEDIA_DISPLAY_PERCENTAGE,
    MEDIA_DISPLAY_TIME
} media_display_t;

/* RCP: RECMODE */
typedef enum {
    RECORD_MODE_CONTINUOUS,
    RECORD_MODE_TIMELAPSE,
    RECORD_MODE_FRAME_TRIGGER,
    RECORD_MODE_RAMP,
    RECORD_MODE_EXTERNAL,
    RECORD_MODE_STREAM,
    RECORD_MODE_BURST,
    RECORD_MODE_MULTI_SHOT,
    RECORD_MODE_MOTION_PLUS_STILLS,
    RECORD_MODE_PREVIEW_OVERDRIVE,
    RECORD_MODE_COUNT
} record_mode_t;

/* RCP: HDRXMONX */
typedef enum
{
    HDR_TRACK_A,
    HDR_TRACK_X
} hdr_track_t;

typedef enum
{
    KEY_ACTION_KEY_DISABLED = 1,
    KEY_ACTION_SLOT_SET_ISO = 2,
    KEY_ACTION_SLOT_SET_COLOR_TEMP = 3,
    KEY_ACTION_SLOT_SET_SHUTTER = 4,
    KEY_ACTION_SLOT_SET_APERTURE = 5,
    KEY_ACTION_RECORD_TOGGLE = 6,
    KEY_ACTION_MAGNIFY_TOGGLE = 7,
    KEY_ACTION_WB_AUTO_CALC = 8,
    KEY_ACTION_NAVIGATION_SELECT = 9,
    KEY_ACTION_EJECT_MEDIA = 10,
    KEY_ACTION_AF_START = 11,
    KEY_ACTION_NAVIGATION_LEFT = 12,
    KEY_ACTION_NAVIGATION_RIGHT = 13,
    KEY_ACTION_NAVIGATION_MENU = 14,
    KEY_ACTION_SHOW_DIALOG = 15,
    KEY_ACTION_VIDEO_CHECK_TOGGLE = 16,
    KEY_ACTION_SLOT_NEXT_VALUE = 17,
    KEY_ACTION_SLOT_PREVIOUS_VALUE = 18,
    KEY_ACTION_SHUTDOWN = 19,
    KEY_ACTION_AF_MODE_CYCLE = 20,
    KEY_ACTION_EXPOSURE_CHECK_TOGGLE = 21,
    KEY_ACTION_AF_CENTER_WINDOW = 22,
    KEY_ACTION_LCD_BRAIN_BR_UP = 23,
    KEY_ACTION_LCD_BRAIN_BR_DOWN = 24,
    KEY_ACTION_SLOT_SET_FPS = 25,
    KEY_ACTION_SLOT_SET_FORMAT = 26,
    KEY_ACTION_SLOT_SET_REDCODE = 27,
    KEY_ACTION_LCD_TOGGLE_LOCK = 28,
    KEY_ACTION_EVF_BRAIN_CYCLE_MODE = 29,
    KEY_ACTION_RECORD_START = 30,
    KEY_ACTION_RECORD_STOP = 31,
    KEY_ACTION_SH_TOGGLE_BACKLIGHT = 32,
    KEY_ACTION_NAVIGATION_UP = 33,
    KEY_ACTION_NAVIGATION_DOWN = 34,
    KEY_ACTION_NAVIGATION_CW = 35,
    KEY_ACTION_NAVIGATION_CCW = 36,
    KEY_ACTION_CAMERA_MODE_STILLS = 37,
    KEY_ACTION_CAMERA_MODE_MOTION = 38,
    KEY_ACTION_RAW_CHECK_TOGGLE = 39,
    KEY_ACTION_HDR_MODE_TOGGLE = 40,
    KEY_ACTION_DISPLAY_CHECK_MODE_CYCLE = 41,
    KEY_ACTION_PLAYBACK_PREVIEW_TOGGLE = 42,
    KEY_ACTION_ZEBRA_1_TOGGLE = 43,
    KEY_ACTION_ZEBRA_2_TOGGLE = 44,
    KEY_ACTION_ZEBRA_1_2_TOGGLE = 45,
    KEY_ACTION_SHUTTER_MODE_TOGGLE = 46,
    KEY_ACTION_SHUTTER_ANGLE_ABS_REL_MODE_TOGGLE = 47,
    KEY_ACTION_TC_DISPLAY_MODE_TOGGLE = 48,
    /* Deprecated - 49 */
    KEY_ACTION_AF_ONE_SHOT = 50,
    KEY_ACTION_SOUND_SHUTTER = 51,
    KEY_ACTION_SOUND_OTHER = 52,
    KEY_ACTION_AF_TOGGLE_WINDOW_SIZE = 53,
    KEY_ACTION_EVF_REAR_CYCLE_MODE = 54,
    KEY_ACTION_EDGE_FOCUS_CHECK_TOGGLE = 55,
    KEY_ACTION_FOCUS_CHECK_TOGGLE = 56,
    KEY_ACTION_IRIS_OPEN = 57,
    KEY_ACTION_IRIS_CLOSE = 58,
    KEY_ACTION_FOCUS_NEAR = 59,
    KEY_ACTION_FOCUS_FAR = 60,
    KEY_ACTION_GO_TO_PLAYBACK = 61,
    KEY_ACTION_GO_TO_PREVIEW = 62,
    /* Deprecated - 63 */
    KEY_ACTION_STROBE_TRIGGER = 64,
    KEY_ACTION_APPLY_LOOK = 65,
    KEY_ACTION_LCD_REAR_BR_UP = 66,
    KEY_ACTION_LCD_REAR_BR_DOWN = 67,
    KEY_ACTION_SH_TOGGLE_KEY_LOCK = 68,
    KEY_ACTION_APPLY_PRESET = 69,
    KEY_ACTION_MAGNIFY_ON = 70,
    KEY_ACTION_MAGNIFY_OFF = 71,
    KEY_ACTION_PLAYBACK_PLAY_PAUSE = 72,
    KEY_ACTION_PLAYBACK_STEP_FORWARD = 73,
    KEY_ACTION_PLAYBACK_STEP_BACKWARD = 74,
    KEY_ACTION_PLAYBACK_NEXT_CLIP = 75,
    KEY_ACTION_PLAYBACK_PREV_CLIP = 76,
    KEY_ACTION_PLAYBACK_SET_IN_POINT = 77,
    KEY_ACTION_PLAYBACK_SET_OUT_POINT = 78,
    KEY_ACTION_PLAYBACK_TOGGLE_LOOP = 79,
    KEY_ACTION_PLAYBACK_TOGGLE_DIRECTION = 80,
    KEY_ACTION_PLAYBACK_CYCLE_SPEED = 81,
    KEY_ACTION_INTEGRATION_TIME_INCREASE = 82,
    KEY_ACTION_INTEGRATION_TIME_DECREASE = 83,
    KEY_ACTION_ISO_INCREASE = 84,
    KEY_ACTION_ISO_DECREASE = 85,
    KEY_ACTION_SAVE_UI_SCREENSHOT_TO_MEDIA = 86,
    KEY_ACTION_LCD_BRAIN_CYCLE_MODE = 87,
    KEY_ACTION_HDMI_BRAIN_CYCLE_MODE = 88,
    KEY_ACTION_HDSDI_BRAIN_CYCLE_MODE = 89,
    KEY_ACTION_LCD_REAR_CYCLE_MODE = 90,
    KEY_ACTION_HDSDI_PVW_PRO_I_O_CYCLE_MODE = 91,
    KEY_ACTION_HDSDI_PGM_PRO_I_O_CYCLE_MODE = 92,
    KEY_ACTION_POWER_OUT_PRO_I_O_GPIO_ENABLE = 93,
    KEY_ACTION_POWER_OUT_PRO_I_O_GPIO_DISABLE = 94,
    KEY_ACTION_POWER_OUT_PRO_I_O_GPIO_TOGGLE = 95,
    KEY_ACTION_POWER_OUT_PRO_I_O_PWR_ENABLE = 96,
    KEY_ACTION_POWER_OUT_PRO_I_O_PWR_DISABLE = 97,
    KEY_ACTION_POWER_OUT_PRO_I_O_PWR_TOGGLE = 98,
    KEY_ACTION_POWER_OUT_PRO_I_O_AUX_ENABLE = 99,
    KEY_ACTION_POWER_OUT_PRO_I_O_AUX_DISABLE = 100,
    KEY_ACTION_POWER_OUT_PRO_I_O_AUX_TOGGLE = 101,
    KEY_ACTION_RECORD_FRAME_TRIGGER = 102,
    KEY_ACTION_RECORD_START_SPEED_RAMP_A = 103,
    KEY_ACTION_EVF_BRAIN_BR_UP = 104,
    KEY_ACTION_EVF_BRAIN_BR_DOWN = 105,
    KEY_ACTION_EVF_REAR_BR_UP = 106,
    KEY_ACTION_EVF_REAR_BR_DOWN = 107,
    KEY_ACTION_RECORD_START_PRE_RECORD = 108,
    KEY_ACTION_POWER_OUT_PLUS_1_PWR_ENABLE = 109,
    KEY_ACTION_POWER_OUT_PLUS_1_PWR_DISABLE = 110,
    KEY_ACTION_POWER_OUT_PLUS_1_PWR_TOGGLE = 111,
    KEY_ACTION_POWER_SAVE_ENTER_LOW_POWER_PREVIEW = 112,
    KEY_ACTION_POWER_SAVE_ENTER_SLEEP = 113,
    KEY_ACTION_RECORD_START_SPEED_RAMP_B = 114,
    KEY_ACTION_RECORD_START_SPEED_RAMP_C = 115,
    KEY_ACTION_RECORD_START_SPEED_RAMP_D = 116,
    KEY_ACTION_RECORD_START_SPEED_RAMP_RESET = 117,
    KEY_ACTION_SHUTTER_ND_075 = 118,
    KEY_ACTION_SHUTTER_ND_100 = 119,
    KEY_ACTION_SHUTTER_ND_150 = 120,
    KEY_ACTION_SHUTTER_ND_225 = 121,
    KEY_ACTION_SHUTTER_ND_300 = 122,
    KEY_ACTION_SHUTTER_ANTIALIAS_1944_360 = 123,
    KEY_ACTION_SHUTTER_ND_ONLY = 124,
    KEY_ACTION_TOGGLE_RETURN_FEED = 125,
    KEY_ACTION_SHUTTER_INCREMENT_ND_PLUS_010 = 126,
    KEY_ACTION_SHUTTER_DECREMENT_ND_MINUS_010 = 127,
    KEY_ACTION_SHUTTER_ND_050 = 128,
    KEY_ACTION_SHUTTER_SQUARE_180_360 = 129,
    /* free - 130 */
    KEY_ACTION_AF_RACK_TO_A = 131,
    KEY_ACTION_AF_RACK_TO_B = 132,
    KEY_ACTION_AF_RACK_TO_C = 133,
    KEY_ACTION_AF_RACK_TO_D = 134,
    /* free - 135 */
    KEY_ACTION_SAVE_LOG = 136,
    KEY_ACTION_MARK_SNAPSHOT = 137,
    KEY_ACTION_TOGGLE_OVERLAYS_BRAIN_LCD = 138,
    KEY_ACTION_TOGGLE_OVERLAYS_BRAIN_EVF = 139,
    KEY_ACTION_TOGGLE_OVERLAYS_BRAIN_HDMI = 140,
    KEY_ACTION_TOGGLE_OVERLAYS_BRAIN_HDSDI = 141,
    KEY_ACTION_TOGGLE_OVERLAYS_REAR_LCD = 142,
    KEY_ACTION_TOGGLE_OVERLAYS_REAR_EVF = 143,
    KEY_ACTION_TOGGLE_OVERLAYS_REAR_HDSDI_1 = 144,
    KEY_ACTION_TOGGLE_OVERLAYS_REAR_HDSDI_2 = 145,
    KEY_ACTION_RUN_SCRIPT = 146,
    KEY_ACTION_NEXT_TAGGED_FRAME = 147,
    KEY_ACTION_PREV_TAGGED_FRAME = 148,
    KEY_ACTION_AE_CALC = 149,
    KEY_ACTION_AE_EV_UP = 150,
    KEY_ACTION_AE_EV_DOWN = 151,
    KEY_ACTION_HDR_TRACK_TOGGLE = 152,
    KEY_ACTION_HORIZON_ENABLE = 153,
    KEY_ACTION_HORIZON_DISABLE = 154,
    KEY_ACTION_HORIZON_TOGGLE = 155,
    KEY_ACTION_AE_MODE_OFF = 156,
    KEY_ACTION_AE_MODE_SINGLE_SHOT = 157,
    KEY_ACTION_AE_MODE_PREVIEW_ONLY = 158,
    KEY_ACTION_AE_MODE_PREVIEW_RECORD = 159,
    KEY_ACTION_AE_MODE_TOGGLE = 160,
    KEY_ACTION_AE_ZONE_SPOT = 161,
    KEY_ACTION_AE_ZONE_CENTER = 162,
    KEY_ACTION_AE_ZONE_AVERAGE = 163,
    KEY_ACTION_AE_ZONE_TOGGLE = 164,
    KEY_ACTION_RECORD_START_MARK_FRAME = 165,
    KEY_ACTION_RECORD_MULTISHOT_STOP = 166,
    KEY_ACTION_APERTURE_PRIORITY_ENABLE_TOGGLE = 167,
    KEY_ACTION_ALGO_TRIGGER = 168,
    KEY_ACTION_GIO_SCOPE_TOGGLE = 169,
    /* free - 170 */
    /* free - 171 */
    KEY_ACTION_CAMERA_MODE_TOGGLE = 172,
    KEY_ACTION_SH_KEY_1 = 173,
    KEY_ACTION_SH_KEY_2 = 174,
    KEY_ACTION_SH_KEY_3 = 175,
    KEY_ACTION_SH_KEY_4 = 176,
    KEY_ACTION_RECORD_MULTISHOT_START = 177,
    KEY_ACTION_AUDIO_CH1_GAIN_INCREMENT = 178,
    KEY_ACTION_AUDIO_CH1_GAIN_DECREMENT = 179,
    KEY_ACTION_AUDIO_CH2_GAIN_INCREMENT = 180,
    KEY_ACTION_AUDIO_CH2_GAIN_DECREMENT = 181,
    KEY_ACTION_AUDIO_CH3_GAIN_INCREMENT = 182,
    KEY_ACTION_AUDIO_CH3_GAIN_DECREMENT = 183,
    KEY_ACTION_AUDIO_CH4_GAIN_INCREMENT = 184,
    KEY_ACTION_AUDIO_CH4_GAIN_DECREMENT = 185,
    KEY_ACTION_AF_SET_RACK_A = 186,
    KEY_ACTION_AF_SET_RACK_B = 187,
    KEY_ACTION_AF_SET_RACK_C = 188,
    KEY_ACTION_AF_SET_RACK_D = 189,
    KEY_ACTION_LCD3_BR_UP = 190,
    KEY_ACTION_LCD3_BR_DOWN = 191,
    KEY_ACTION_LCD3_CYCLE_MODE = 192,
    KEY_ACTION_TOGGLE_OVERLAYS_LCD3 = 193,
    KEY_ACTION_EVF3_BR_UP = 194,
    KEY_ACTION_EVF3_BR_DOWN = 195,
    KEY_ACTION_EVF3_CYCLE_MODE = 196,
    KEY_ACTION_TOGGLE_OVERLAYS_EVF3 = 197,
    KEY_ACTION_APERTURE_FINE_ADJUSTMENT_OPEN = 198,
    KEY_ACTION_APERTURE_FINE_ADJUSTMENT_CLOSE = 199,
    KEY_ACTION_SENSOR_SENSITIVITY_TOGGLE = 200,
    KEY_ACTION_COUNT
} key_action_t;

typedef enum
{
    TAG_INFO_TAG_TYPE_NONE = 0,
    TAG_INFO_TAG_TYPE_STILL = 1
} tag_info_tag_type_t;

typedef struct
{
    uint64_t frame;
    tag_info_tag_type_t type;
    char tod_timecode[14];
} tag_info_t;

/* RCP: MMNDMODE */
typedef enum
{
    MOTION_MOUNT_DISPLAY_ND,
    MOTION_MOUNT_DISPLAY_OD,
    MOTION_MOUNT_DISPLAY_FSTOP
} motion_mount_display_mode_t;

/* RCP: MMMODE */
typedef enum {
    MOTION_MOUNT_SHUTTER_MODE_ND_ONLY,
    MOTION_MOUNT_SHUTTER_MODE_SOFT,
    MOTION_MOUNT_SHUTTER_MODE_SQUARE
} motion_mount_shutter_mode_t;

/* RCP: RIGSTATE */
typedef enum
{
    METADATA_STATUS_DISABLED,
    METADATA_STATUS_ENABLED_INVALID,
    METADATA_STATUS_ENABLED_VALID
} metadata_status_t;

/* RCP: NWSTAT */
typedef enum
{
    GIGE_STATUS_DISABLED,
    GIGE_STATUS_ERROR,
    GIGE_STATUS_OK,
    GIGE_STATUS_WARNING
} gige_status_t;

/* RCP: LCDM, HDMIM, HDSDIM, PLCDM, PHDSDI1M, PHDSDI2M, EVFM, REVFM */
typedef enum
{
    MONITOR_MODE_OVERLAY,
    MONITOR_MODE_CLEAN,
    MONITOR_MODE_MIRROR_BRAIN_LCD,
    MONITOR_MODE_MIRROR_BRAIN_EVF,
    MONITOR_MODE_MIRROR_BRAIN_HDMI,
    MONITOR_MODE_MIRROR_BRAIN_HDSDI,
    MONITOR_MODE_MIRROR_REAR_LCD,
    MONITOR_MODE_MIRROR_REAR_EVF,
    MONITOR_MODE_MIRROR_PROIO_HDSDI_1,
    MONITOR_MODE_MIRROR_PROIO_HDSDI_2,
    MONITOR_MODE_DEPRECATED_1,
    MONITOR_MODE_MIRROR_BRAIN_LCD3,
    MONITOR_MODE_MIRROR_BRAIN_EVF3,
    MONITOR_MODE_CLONE_PROIO_HDSDI_1,
    MONITOR_MODE_CLONE_PROIO_HDSDI_2,
    MONITOR_MODE_UHD
} monitor_mode_t;

/* RCP: MAGNIFY */
typedef enum {
    MAGNIFY_MODE_OFF,
    MAGNIFY_MODE_ON,
    MAGNIFY_MODE_COUNT
} magnify_mode_t;

/* RCP: AFMODE */
typedef enum
{
    AF_MODE_MANUAL,
    AF_MODE_CONFIRM,
    AF_MODE_PRIORITY,
    AF_MODE_CONTINUOUS,
    AF_MODE_TOUCH_TRACK,
    AF_MODE_RACK,
    AF_MODE_FAST
} af_mode_t;

/* RCP: AFZONE */
typedef enum
{
    AF_FOCUSZONE_CENTER,
    AF_FOCUSZONE_SPOT
} af_focuszone_t;

/* RCP: FSMODE */
typedef enum {
    FAN_MODE_MANUAL,                                    /* Manual Mode */
    FAN_MODE_AUTO,
    FAN_MODE_CONTROL_LOOP = 6,                          /* Adaptive Mode */
    FAN_MODE_LOW_NOISE_PREVIEW_RECORD,                  /* Quiet Mode */
    FAN_MODE_ADAPTIVE_PREVIEW_LOW_NOISE_RECORD = 9      /* Adaptive Preview Quiet Record Mode */
} fan_mode_t;

/* RCP: AEMODE */
typedef enum {
    AE_MODE_OFF,
    AE_MODE_SINGLESHOT,
    AE_MODE_CONTINUOUS_PREVIEW,
    AE_MODE_CONTINUOUS_RECORD,
    AE_MODE_TOGGLE
} ae_mode_t;

/* RCP: CALSTAT */
typedef enum {
    CAL_STATUS_MINUS_LEVEL_3,
    CAL_STATUS_MINUS_LEVEL_2,
    CAL_STATUS_MINUS_LEVEL_1,
    CAL_STATUS_OK,
    CAL_STATUS_PLUS_LEVEL_1,
    CAL_STATUS_PLUS_LEVEL_2,
    CAL_STATUS_PLUS_LEVEL_3
} cal_status_t;

/* RCP: LDISPM */
typedef enum
{
    APERTURE_LIST_1_3,
    APERTURE_LIST_1_4
} aperture_list_t;

/* RCP: VUSRC */
typedef enum {
    VU_METER_SOURCE_PRE_MIXER,
    VU_METER_SOURCE_POST_MIXER
} vu_meter_source_t;

/* RCP: HISTTYPE */
typedef enum
{
    HISTOGRAM_TYPE_RGB,
    HISTOGRAM_TYPE_LUMA
} histogram_type_t;

/* RCP: MMMISOND */
typedef enum
{
    MOTION_MOUNT_ISO_PULL_DISABLE,
    MOTION_MOUNT_ISO_PULL_ENABLE
} motion_mount_iso_pull_t;

/* RCP: SHRCKDST */
typedef enum
{
    FOCUS_RACK_SHOW_DISTANCE_DISABLE,
    FOCUS_RACK_SHOW_DISTANCE_ENABLE
} focus_rack_show_distance_t;

/* RCP: TCDMODE */
typedef enum {
    TC_DISPLAY_TOD,
    TC_DISPLAY_EDGE
} tc_display_t;

/* RCP: TCDFMODE */
typedef enum {
    TC_DISPLAY_DROP_FRAME,
    TC_DISPLAY_NON_DROP_FRAME
} tc_drop_frame_display_t;

/* RCP: TCSOURCE */
typedef enum
{
    TC_SOURCE_USER,
    TC_SOURCE_BRAIN,
    TC_SOURCE_REAR_MODULE,
    TC_SOURCE_INTERNAL
} tc_source_t;

/* RCP: F0MODE, F1MODE, F2MODE */
typedef enum
{
    GUIDE_ASPECT_RATIO_ABSOLUTE = -3,
    GUIDE_ASPECT_RATIO_USER = -2,
    GUIDE_ASPECT_RATIO_OFF = -1,
    GUIDE_ASPECT_RATIO_FULL = 0,
    GUIDE_ASPECT_RATIO_4__3 = 1333333,
    GUIDE_ASPECT_RATIO_16__9 = 1777778,
    GUIDE_ASPECT_RATIO_1_85__1 = 1850000,
    GUIDE_ASPECT_RATIO_1_9__1 = 1896296,
    GUIDE_ASPECT_RATIO_2_4__1 = 2400000
} guide_aspect_ratio_t;

/* RCP: F0LNST, F1LNST, F2LNST */
typedef enum
{
    GUIDE_LINE_STYLE_SOLID,
    GUIDE_LINE_STYLE_DASHED,
    GUIDE_LINE_STYLE_BRACKET,
    GUIDE_LINE_STYLE_NONE,
    GUIDE_LINE_STYLE_COUNT
} guide_line_style_t;

/* RCP: AFCNFRMS */
typedef enum
{
    FOCUS_ASSIST_NONE,
    FOCUS_ASSIST_CIRCLE,
    FOCUS_ASSIST_BAR,
    FOCUS_ASSIST_PIE
} focus_assist_type_t;

/* RCP: AEMETERM */
typedef enum {
    AE_METERING_AVERAGE,
    AE_METERING_CENTER_WEIGHTED,
    AE_METERING_SPOT,
    AE_METERING_EVALUATIVE,
    AE_METERING_TOGGLE
} ae_metering_t;

/* RCP: AESPEED */
typedef enum {
    AE_SPEED_SLOW,
    AE_SPEED_NORMAL,
    AE_SPEED_FAST
} ae_speed_t;

/* RCP: AESELECT */
typedef enum {
    AE_SELECTION_LIST_ONLY_SAVE,
    AE_SELECTION_LIST_ONLY_CLOSEST,
    AE_SELECTION_FREE
} ae_selection_t;

/* RCP: AEEXPRI */
typedef enum {
    AE_EXPOSURE_PRIORITY_M,
    AE_EXPOSURE_PRIORITY_A,
    AE_EXPOSURE_PRIORITY_AV,
    AE_EXPOSURE_PRIORITY_TV
} ae_exposure_priority_t;

/* RCP: CH12SRC, CH34SRC */
typedef enum {
    AUDIO_CHANNEL_SOURCE_NONE,
    AUDIO_CHANNEL_SOURCE_CAM_ANALOG12,
    AUDIO_CHANNEL_SOURCE_PRO_IO_ANALOG12,
    AUDIO_CHANNEL_SOURCE_PRO_IO_DIGITAL12,
    AUDIO_CHANNEL_SOURCE_PRO_IO_DIGITAL34
} audio_channel_source_t;

/* RCP: CH1MODE, CH2MODE, CH3MODE, CH4MODE */
typedef enum {
    AUDIO_CHANNEL_MODE_OFF,
    AUDIO_CHANNEL_MODE_DYN_MIC,       /* for analog input, Unbalanced Dynamic Microphone */
    AUDIO_CHANNEL_MODE_48V_MIC,       /* for analog input, Balanced Mic with Phantom Power !!Should not be set Directly !!! */
    AUDIO_CHANNEL_MODE_AES_LOCK,      /* for digital input, AS Locked (Not supported in current HW) */
    AUDIO_CHANNEL_MODE_AES_FREE,      /* for digital input, AES Free-Running */
    AUDIO_CHANNEL_MODE_LINE,          /* Analog Line(0dBu) in (Only supported on Pro I/O) */
    AUDIO_CHANNEL_MODE_BAL_MIC,       /* Balanced Mic without Phantom Power */
    AUDIO_CHANNEL_MODE_LINE_1         /* Analog Line(0VU) in (Only supported on Pro I/O) */
} audio_channel_mode_t;

typedef enum {
    NOTIFICATION_PROGRESS_NONE,
    NOTIFICATION_PROGRESS_NORMAL,
    NOTIFICATION_PROGRESS_INFINITE
} notification_progress_t;

typedef enum {
    NOTIFICATION_SEVERITY_NOTE,
    NOTIFICATION_SEVERITY_WARNING,
    NOTIFICATION_SEVERITY_ERROR
} notification_severity_t;

typedef enum
{
    NOTIFICATION_STYLE_POPUP,
    NOTIFICATION_STYLE_STATUS
} notification_style_t;

/* RCP: SHSYNC */
typedef enum {
    SYNC_MODE_OFF,
    SYNC_MODE_TRI_LEVEL,   /* requires external tri-level source, aka Genlcok */
    SYNC_MODE_SHUTTER,     /* external single pulses in, double pulse to sensor, aka MoCo */
    SYNC_MODE_DEPRECATED_1,
    SYNC_MODE_DEPRECATED_2,
    SYNC_MODE_DEPRECATED_3,
    SYNC_MODE_COUNT,
    SYNC_MODE_INVALID = SYNC_MODE_COUNT
} sync_mode_t;

/* RCP: GPIN */
typedef enum {
    GPI_FUNCTION_EXTERNAL_SYNCI,
    GPI_FUNCTION_GP_INPUT
} gpi_function_t;

/* RCP: GPOUT */
typedef enum {
    GPO_FUNCTION_EXTERNAL_SYNCO,
    GPO_FUNCTION_GP_OUTPUT
} gpo_function_t;

/* RCP: GENSRC */
typedef enum
{
    GENLOCK_SOURCE_BRAIN,
    GENLOCK_SOURCE_REAR_MODULE
} genlock_source_t;

typedef enum {
    RCP_MENU_NODE_TYPE_BRANCH,
    RCP_MENU_NODE_TYPE_ACTION_LEAF,
    RCP_MENU_NODE_TYPE_CURVE_LEAF,
    RCP_MENU_NODE_TYPE_ENABLE_LEAF,
    RCP_MENU_NODE_TYPE_IP_ADDRESS_LEAF,
    RCP_MENU_NODE_TYPE_LIST_LEAF,
    RCP_MENU_NODE_TYPE_NUMBER_LEAF,
    RCP_MENU_NODE_TYPE_TEXT_LEAF,
    RCP_MENU_NODE_TYPE_ORDERED_LIST_LEAF,
    RCP_MENU_NODE_TYPE_DATETIME_LEAF,
    RCP_MENU_NODE_TYPE_TIMECODE_LEAF,
    RCP_MENU_NODE_TYPE_STATUS_LEAF,
    RCP_MENU_NODE_TYPE_MULTI_ACTION_LIST_LEAF,
    RCP_MENU_NODE_TYPE_NOT_YET_SUPPORTED_LEAF,
    RCP_MENU_NODE_TYPE_CLIP_LIST_LEAF,
    RCP_MENU_NODE_TYPE_GIO_SCOPE_LEAF,
    RCP_MENU_NODE_TYPE_KEY_MAPPING_LEAF
} rcp_menu_node_type_t;

typedef enum {
    RCP_MENU_NODE_FILTER_NONE = 0,
    RCP_MENU_NODE_FILTER_RECORD_ONLY = 1,
    RCP_MENU_NODE_FILTER_PLAYBACK_ONLY = 2,
    RCP_MENU_NODE_FILTER_RECORD_AND_PLAYBACK = RCP_MENU_NODE_FILTER_RECORD_ONLY | RCP_MENU_NODE_FILTER_PLAYBACK_ONLY
} rcp_menu_node_filter_t;

typedef enum {
    RCP_MENU_ACTION_NODE_PERFORM_ACTION,
    RCP_MENU_ACTION_NODE_CANCEL_ACTION
} rcp_menu_action_node_t;

/* RCP: HORIZON */
typedef enum
{
    UI_ENABLE_HORIZON_DISABLED,
    UI_ENABLE_HORIZON_ENABLED,
    UI_ENABLE_HORIZON_TOGGLE
} ui_enable_horizon_t;

/* RCP: BEEPREC, BEEPSTOP, BEEPTAGS */
typedef enum
{
    AUDIO_SIGNAL_NONE,
    AUDIO_SIGNAL_BEEP,
    AUDIO_SIGNAL_BEEP_2,
    AUDIO_SIGNAL_BEEP_ASC,
    AUDIO_SIGNAL_BEEP_DES,
    AUDIO_SIGNAL_MONEY,
    AUDIO_SIGNAL_SHUTTER,
    AUDIO_SIGNAL_COUNT
} audio_signal_t;

/* RCP: SERPROTO */
typedef enum {
    UART_PROTOCOL_NONE,
    UART_PROTOCOL_ET,
    UART_PROTOCOL_TA,
    UART_PROTOCOL_DEPRECIATED_1,
    UART_PROTOCOL_SERIAL_SHELL,
    UART_PROTOCOL_RCP,
    UART_PROTOCOL_RCP_3D_METADATA,
    UART_PROTOCOL_RCP_CAM_TO_CAM,
    UART_PROTOCOL_COOKE_I,
    UART_PROTOCOL_PRESTON
} uart_protocol_t;

/* RCP: HDMIR, HDSDIR, PHDSDI1R, PHDSDI2R */
typedef enum
{
    MONITOR_RESOLUTION_480,
    MONITOR_RESOLUTION_600,
    MONITOR_RESOLUTION_720,
    MONITOR_RESOLUTION_784,
    MONITOR_RESOLUTION_1080,
    MONITOR_RESOLUTION_360,
    MONITOR_RESOLUTION_1200,
    MONITOR_RESOLUTION_768,
    MONITOR_RESOLUTION_848,
    MONITOR_RESOLUTION_480P,
    MONITOR_RESOLUTION_720_NO_PD,
    MONITOR_RESOLUTION_UHD,
    MONITOR_RESOLUTION_1200_2,
    MONITOR_RESOLUTION_COUNT
} monitor_resolution_t;

typedef enum
{
    FREQUENCY_AUTO,
    FREQUENCY_23_98 = 24000,
    FREQUENCY_24 = 24024,
    FREQUENCY_25 = 25025,
    FREQUENCY_29_97 = 30000,
    FREQUENCY_30 = 30030,
    FREQUENCY_48 = 48048,
    FREQUENCY_50 = 50050,
    FREQUENCY_59_94 = 60000,
    FREQUENCY_60 = 60060
} monitor_frequency_t;

/* RCP: AF_ZONE_COLOR, GUIDE_FRAME_0_COLOR, GUIDE_FRAME_1_COLOR */
/* GUIDE_FRAME_2_COLOR, GUIDE_CENTER_COLOR, GUIDE_GRID_COLOR, GUIDE_LOOKAROUND_COLOR */
typedef enum {
    FRAMEGUIDE_COLOR_BLACK,
    FRAMEGUIDE_COLOR_RED,
    FRAMEGUIDE_COLOR_BLUE,
    FRAMEGUIDE_COLOR_GREEN,
    FRAMEGUIDE_COLOR_YELLOW,
    FRAMEGUIDE_COLOR_MAGENTA,
    FRAMEGUIDE_COLOR_CYAN,
    FRAMEGUIDE_COLOR_DARKGRAY,
    FRAMEGUIDE_COLOR_WHITE,
    FRAMEGUIDE_COLOR_DEFAULT,
    FRAMEGUIDE_COLOR_COUNT
} frameguide_color_t;

/* RCP: AWBMODE */
typedef enum {
    AWB_MODE_OFF,
    AWB_MODE_SINGLESHOT
} awb_mode_t;

/* RCP: TARGET */
typedef enum {
    RCP_TARGET_ALL,
    RCP_TARGET_NONE,
    RCP_TARGET_CUSTOM
} rcp_target_t;

typedef enum {
    MEDIA_LOC_ACTIVE,
    MEDIA_LOC_SIDE,
    MEDIA_LOC_REAR
} media_loc_t;

/* RCP: LCDCV, HDMICV, HDSDICV, PLCDCV */
/*      PHDSD1CV, PHDSD2CV, EVFCV, REVFCV */
typedef enum
{
    MONITOR_CURVE_NEUTRAL,
    MONITOR_CURVE_GRADED,
    MONITOR_CURVE_PRIMARY_ACESCC,
    MONITOR_CURVE_PRIMARY_BT1886,
    MONITOR_CURVE_PRIMARY_HDR2084,
    MONITOR_CURVE_PRIMARY_LOG3G10,
    MONITOR_CURVE_PRIMARY_REDGAMMA2,
    MONITOR_CURVE_PRIMARY_REDGAMMA3,
    MONITOR_CURVE_PRIMARY_REDGAMMA4,
    MONITOR_CURVE_PRIMARY_REDLOGFILM,
    MONITOR_CURVE_PRIMARY_REC709,
    MONITOR_CURVE_3DLUT,
    MONITOR_CURVE_3DLUT_ACESCC_SDR,
    MONITOR_CURVE_3DLUT_BT1886_SDR,
    MONITOR_CURVE_3DLUT_HDR2084_SDR,
    MONITOR_CURVE_3DLUT_LOG3G10_SDR,
    MONITOR_CURVE_3DLUT_REDLOGFILM_SDR,
    MONITOR_CURVE_3DLUT_REC709_SDR,
    MONITOR_CURVE_COUNT
} monitor_curve_t;

/* RCP: DROPREG */
typedef enum
{
    DROP_REGION_START,
    DROP_REGION_END
} drop_region_t;

typedef enum
{
    RCP_INTERFACE_UNKNOWN,
    RCP_INTERFACE_BRAIN_SERIAL,
    RCP_INTERFACE_BRAIN_GIGABIT_ETHERNET,
    RCP_INTERFACE_REDLINK_BRIDGE,
    RCP_INTERFACE_BRAIN_WIFI,
    RCP_INTERFACE_REDMOTE_REDLINK,
    RCP_INTERFACE_INTERNAL,
    RCP_INTERFACE_COUNT
} rcp_interface_t;

/* RCP: CNA1STA */
typedef enum
{
    RCP_CNA1_STATUS_DISABLED,           /* interface is turned off */
    RCP_CNA1_STATUS_UNCONFIGURED,       /* no IP configured */
    RCP_CNA1_STATUS_CONNECTING,         /* trying to connect */
    RCP_CNA1_STATUS_CONNECTED,          /* connected and operating */
    RCP_CNA1_STATUS_ERROR               /* something is broken */
} rcp_cna1_status_t;

/* RCP: WLANSTAT */
typedef enum {
    WL_STATUS_OFFLINE,          /* Offline */
    WL_STATUS_SEARCHING,        /* Searching for infrastructure network */
    WL_STATUS_CONNECTING,       /* Connecting to infrastructure network or establishing ad-hoc network */
    WL_STATUS_CONNECTED,        /* Connected to infrastructure network or ad-hoc network established */
    WL_STATUS_LOST,             /* Has lost its infrastructure connection - will try to re-connect */
    WL_STATUS_ERROR             /* Has failed to establish an infrastructure network connection */
} wl_status_t;

/* RCP: MTMST0, MTMST1, MTMST2 */
typedef enum {
    MC_MOTOR_STATUS_UNCONNECTED = 0, /* No Motor Connected */
    MC_MOTOR_STATUS_ERROR = 1,       /* Error */
    MC_MOTOR_STATUS_IDLE = 2,        /* Motor is Idle */
    MC_MOTOR_STATUS_MOVING = 3,      /* Motor is Moving */
    MC_MOTOR_STATUS_HOMING = 4       /* Motor is searching homing position */
} mc_motor_status_t;

/* RCP: RMSTATE */
typedef enum {
    REDMOTE_CONNECTED_STATE_NOT_CONNECTED,      /* REDMOTE is not connected */
    REDMOTE_CONNECTED_STATE_CONNECTED           /* REDMOTE is connected */
} redmote_connected_state_t;

typedef enum {
    CAMERA_CAPTURE_MODE_MOTION = 2,
    CAMERA_CAPTURE_MODE_STILLS = 4
} camera_capture_mode_t;

typedef enum
{
    PRIMARY_STORAGE_LOCAL,
    PRIMARY_STORAGE_NETWORK,
    PRIMARY_STORAGE_EXTERNAL,
    PRIMARY_STORAGE_COUNT
} primary_storage_t;

typedef enum
{
    MONITOR_NULL = -1,
    MONITOR_BRAIN_LCD = 0,
    MONITOR_BRAIN_EVF,
    MONITOR_BRAIN_HDMI,
    MONITOR_BRAIN_HDSDI,
    MONITOR_REAR_LCD,
    MONITOR_REAR_EVF,
    MONITOR_REAR_HDSDI_1,
    MONITOR_REAR_HDSDI_2,
    MONITOR_BRAIN_LCD3,
    MONITOR_BRAIN_EVF3,
    MONITOR_REAR_UHDSDI_1,
    MONITOR_REAR_UHDSDI_2,
    MONITOR_COUNT
} monitor_t;

typedef enum {
    VIDEO_CODEC_PRORES_4444 = 0,
    VIDEO_CODEC_PRORES_4444XQ,
    VIDEO_CODEC_PRORES_422HQ,
    VIDEO_CODEC_PRORES_422,
    VIDEO_CODEC_PRORES_422LT,
    VIDEO_CODEC_DNX_444,
    VIDEO_CODEC_DNX_HQX,
    VIDEO_CODEC_DNX_HQ,
    VIDEO_CODEC_DNX_SQ,
    VIDEO_CODEC_DNX_LB,
    VIDEO_CODEC_COUNT
} video_codec_t;

typedef enum {
    FILE_FORMAT_REDCODE_RAW,
    FILE_FORMAT_QUICKTIME,
    FILE_FORMAT_REDCODE_RAW_PLUS_QUICKTIME,
    FILE_FORMAT_MXF,
    FILE_FORMAT_REDCODE_RAW_PLUS_MXF,
    FILE_FORMAT_COUNT
} file_format_t;

typedef enum {
    FILE_FORMAT_TYPE_RAW,
    FILE_FORMAT_TYPE_BAKED,
    FILE_FORMAT_TYPE_COUNT
} file_format_type_t;

typedef enum {
    CODEC_RESOLUTION_2K = 0,
    CODEC_RESOLUTION_4K,
    CODEC_RESOLUTION_COUNT
} codec_resolution_t;

typedef enum {
    /* When adding HW capabilities to this enum, remember to also add it to the hw_cap_name[]
     * table in hw_cap_if.cpp
     * */

    HW_CAP_COLOR_SENSOR = 0,
    HW_CAP_WIFI = 1,
    HW_CAP_FIZ = 2,
    HW_CAP_GIG_ETHERNET = 3,
    HW_CAP_TETHERING = 4,
    HW_CAP_SIDE_UI = 5,
    HW_CAP_ND_CONTROL = 6,
    HW_CAP_3D_LUT = 7,
    HW_CAP_MON_BRAIN_LCD_EVF = 8,
    HW_CAP_SW = 9,
    HW_CAP_MON_BRAIN_HDMI = 10,
    HW_CAP_MON_BRAIN_HDSDI = 11,
    HW_CAP_MON_REAR_LCD_EVF = 12,
    HW_CAP_WIRELESS_HAND_CONTROLLER = 13,
    HW_CAP_MON_REAR_HDSDI_1 = 14,
    HW_CAP_MON_REAR_HDSDI_2 = 15,
    HW_CAP_CONTROL_UART = 16,
    HW_CAP_REDMOTE_COMM = 17,
    HW_CAP_PRORES = 18,
    HW_CAP_HEADPHONE = 19,
    HW_CAP_AUDIO_OUT = 20,
    HW_CAP_MONITOR_WITH_AUDIO = 21,
    HW_CAP_AUDIO_PHANTOM_POWER = 22,
    HW_CAP_AUDIO_LIMITER = 23,
    HW_CAP_TIMECODE_IN = 24,
    HW_CAP_TIMECODE_OUT = 25,
    HW_CAP_GENLOCK = 26,
    HW_CAP_GPI = 27,
    HW_CAP_GPO = 28,
    HW_CAP_SYNC_IN = 29,
    HW_CAP_SYNC_OUT = 30,
    HW_CAP_GPI_SYNC_IN_MUXED = 31,
    HW_CAP_GPO_SYNC_OUT_MUXED = 32,
    HW_CAP_PRO_IO_GPI_A = 33,
    HW_CAP_PRO_IO_GPI_B = 34,
    HW_CAP_PRO_IO_SW_1 = 35,
    HW_CAP_PRO_IO_SW_2 = 36,
    HW_CAP_LCD_EVF_2_HDMI_MUX = 37,
    HW_CAP_SIDE_HANDLE = 38,
    HW_CAP_POWER_OUT_PRO_IO_GPIO = 39,
    HW_CAP_POWER_OUT_PRO_IO_PWR = 40,
    HW_CAP_POWER_OUT_PRO_IO_AUX = 41,
    HW_CAP_POWER_OUT_PLUS_ONE_PWR = 42,
    HW_CAP_POWER_OUT_BAT_AUX = 43,
    HW_CAP_POWER_OUT_BAT_AUX_WITH_ENABLE = 44,
    HW_CAP_POWER_OUT_JETPACK_USB = 45,
    HW_CAP_MULTI_MONITOR_FEEDS = 46,
    HW_CAP_MON_BRAIN_LCD_EVF_MULTI_FEEDS = 47,
    HW_CAP_MON_BRAIN_HDMI_MULTI_FEEDS = 48,
    HW_CAP_MON_BRAIN_HDSDI_MULTI_FEEDS = 49,
    HW_CAP_MON_REAR_LCD_EVF_MULTI_FEEDS = 50,
    HW_CAP_MON_REAR_HDSDI_1_MULTI_FEEDS = 51,
    HW_CAP_MON_REAR_HDSDI_2_MULTI_FEEDS = 52,
    HW_CAP_SSD_TALLY_LIGHT = 53,
    HW_CAP_STROBE = 54,
    HW_CAP_MULTI_MONITOR_FEED_0 = 55,
    HW_CAP_MULTI_MONITOR_FEED_1 = 56,
    HW_CAP_MULTI_MONITOR_FEED_1_AND_3D_LUT = 57,
    HW_CAP_POWER_OUT_REAR_PTAP = 58,
    HW_CAP_CONTROL_UART_2 = 59,
    HW_CAP_POWER_OUT_REAR_AUX = 60,
    HW_CAP_POWER_OUT_TIMECODE = 61,
    HW_CAP_SW_2 = 62,
    HW_CAP_AUDIO_MODE_NO_UI_CONTROL_12 = 63,
    HW_CAP_AUDIO_MODE_UI_CONTROL_12 = 64,
    HW_CAP_AUDIO_MODE_UI_CONTROL_34 = 65,
    HW_CAP_WEAPON_SIDE_HANDLE = 66,
    HW_CAP_MON_LCD3_EVF3 = 67,
    HW_CAP_MON_LCD3_EVF3_MULTI_FEEDS = 68,
    HW_CAP_AUDIO_CAM_MIC_12 = 69,
    HW_CAP_AUDIO_REAR_ANALOG_12 = 70,
    HW_CAP_AUDIO_REAR_DIGITAL_12 = 71,
    HW_CAP_AUDIO_REAR_DIGITAL_34 = 72,
    HW_CAP_THIRD_PARTY_OLPFS = 73,
    HW_CAP_PL_POWER = 74,
    HW_CAP_PL_DETECT = 75,
    HW_CAP_GENLOCK_MUXED = 76,
    HW_CAP_AUDIO_MODE_NO_UI_CONTROL_34 = 77,
    HW_CAP_TOP_MODULE_RECORD_BUTTON = 78,
    HW_CAP_SIDE_MODULE_FOCUS_WHEEL = 79,
    HW_CAP_SIDE_MODULE_KEYS = 80,
    HW_CAP_SIDE_MODULE_RECORD = 81,
    HW_CAP_SIDE_MODULE_NAVIGATION = 82,
    HW_CAP_INTERNAL_AMBIENT = 83,
    HW_CAP_COLOR_SCIENCE_IPP2 = 84,
    HW_CAP_PRESTON_FIZ = 85,
    HW_CAP_SIDE_UI_LEFT = 86,
    HW_CAP_SIDE_UI_RIGHT = 87,
    HW_CAP_MON_REAR_UHDSDI_1 = 88,
    HW_CAP_MON_REAR_UHDSDI_2 = 89,
    HW_CAP_RETURN_FEED = 90,
    HW_CAP_MON_BRAIN_LCD_EVF_RETURN_FEED = 91,
    HW_CAP_MON_BRAIN_HDMI_RETURN_FEED = 92,
    HW_CAP_MON_BRAIN_HDSDI_RETURN_FEED = 93,
    HW_CAP_MON_REAR_LCD_EVF_RETURN_FEED = 94,
    HW_CAP_MON_REAR_HDSDI_1_RETURN_FEED = 95,
    HW_CAP_MON_REAR_HDSDI_2_RETURN_FEED = 96,
    HW_CAP_MON_LCD3_EVF3_RETURN_FEED = 97,
    HW_CAP_MON_REAR_UHDSDI_1_2_SHARED = 98,
    HW_CAP_FRAME_PROCESSING = 99,
    HW_CAP_ANAMORPHIC = 100,
    HW_CAP_LOOKAROUND = 101,
    HW_CAP_ALLOW_ISO_CALIBRATION1 = 102,
    HW_CAP_DROP_FRAME_TIMECODE = 103,
    HW_CAP_SENSOR_FLIP = 105,
    HW_CAP_SENSOR_SENSITIVITY = 107,
    HW_CAP_COUNT
} hw_cap_t;

typedef enum {
    WL_MODE_DISABLED,
    WL_MODE_AD_HOC,
    WL_MODE_INFRASTRUCTURE
} wl_mode_t;

typedef enum {
    WL_ENCRYPTION_NONE,
    WL_ENCRYPTION_WEP,
    WL_ENCRYPTION_WPA,
    WL_ENCRYPTION_WPA2
} wl_encryption_t;

typedef enum {
    WL_ERROR_NO_ERROR,
    WL_ERROR_WRONG_PASSPHRASE,
    WL_ERROR_WRONG_ENCRYPTION,
    WL_ERROR_CONNECTION_FAILED,
    WL_ERROR_UNKNOWN_ERROR,
    WL_ERROR_INVALID_WEP_PW,
    WL_ERROR_INVALID_IP_ADDR,
    WL_ERROR_INVALID_ADHOC_PW
} wl_error_t;

typedef enum {
    MULTI_ACTION_LIST_LEAF_PROPERTY_CLOSE_ON_ACTION = 0x10000,

    MULTI_ACTION_LIST_LEAF_ENABLE_MASK = 0x0f,
    MULTI_ACTION_LIST_LEAF_PROPERTY_MASK = 0xf0,
    MULTI_ACTION_LIST_LEAF_ENABLE_BIT_MASK = 0xffff,
    MULTI_ACTION_LIST_LEAF_PROPERTY_BIT_MASK = 0x000f0000,

    MULTI_ACTION_LIST_LEAF_PROPERTY_BIT_SHIFT = 12
} multi_action_list_leaf_property_t;

/* RCP: PWRSAVE */
typedef enum {
    POWER_SAVE_STATE_NORMAL,
    POWER_SAVE_STATE_LEVEL_1,
    POWER_SAVE_STATE_LEVEL_2,
    POWER_SAVE_STATE_LEVEL_3
} power_save_state_t;

typedef enum
{
    RFTP_SUCCESS,                               /* No error */
    RFTP_TRANSFER_COMPLETE,                     /* No error, file transfer completed */
    RFTP_ERROR_FILE_NOT_FOUND,                  /* File not found (when retrieving a remote file) */
    RFTP_ERROR_FILE_EXISTS,                     /* File already exists (when sending a local file) */
    RFTP_ERROR_NO_READ_PERMISSION,              /* Read permission denied (when retrieving a remote file) */
    RFTP_ERROR_NO_WRITE_PERMISSION,             /* Write permission denied (when sending a local file) */
    RFTP_ERROR_INVALID_PATH,                    /* Invalid path specified (when sending a local file to the wrong directory, getting a directory listing for a directory that does not exist, etc.) */
    RFTP_ERROR_NOT_ENOUGH_SPACE,                /* File receiver doesn't have enough space */
    RFTP_ERROR_UNABLE_TO_CREATE_FILE,           /* Other file creation errors */
    RFTP_ERROR_TETHERED_TRANSFER_IN_PROGRESS,   /* A tethered transfer is already in progress (when retrieving another file using tethering) */
    RFTP_ERROR_INTERNAL,                        /* Internal error  */
    RFTP_ERROR_TRANSFERS_PAUSED                 /* A tethered transfer is requested while transfers are paused */
} rftp_error_t;

typedef enum
{
    RFTP_PERMISSION_DIRECTORY = 0x01,
    RFTP_PERMISSION_READ = 0x02,
    RFTP_PERMISSION_WRITE = 0x04
} rftp_permission_t;

typedef enum
{
    RFTP_TYPE_NONE,
    RFTP_TYPE_STORE,
    RFTP_TYPE_RETRIEVE,
    RFTP_TYPE_ABORT_STORE,
    RFTP_TYPE_ABORT_RETRIEVE,
    RFTP_TYPE_DELETE,
    RFTP_TYPE_LIST
} rftp_type_t;

typedef enum
{
    VIDEO_SOURCE_GRADED,
    VIDEO_SOURCE_SPLIT_CURVE_RLF,
    VIDEO_SOURCE_ACES,
    VIDEO_SOURCE_ACES_AND_SPLIT_CURVE,
    VIDEO_SOURCE_SPLIT_CURVE_LOG3G12,
    VIDEO_SOURCE_DEPRECATED_0,
    VIDEO_SOURCE_DEPRECATED_1,
    VIDEO_SOURCE_SLOG3,
    VIDEO_SOURCE_SPLIT_CURVE_SLOG3,
    VIDEO_SOURCE_SPLIT_CURVE_LOG3G10,
    VIDEO_SOURCE_ACESCC_ACESAP1,
    VIDEO_SOURCE_LOG3G10_DRAGONCOLOR,
    VIDEO_SOURCE_LOG3G10_DRAGONCOLOR2,
    VIDEO_SOURCE_LOG3G10_REC709,
    VIDEO_SOURCE_LOG3G10_REC709NK,
    VIDEO_SOURCE_LOG3G10_REC2020,
    VIDEO_SOURCE_LOG3G10_REDCOLOR2,
    VIDEO_SOURCE_LOG3G10_REDCOLOR3,
    VIDEO_SOURCE_LOG3G10_REDCOLOR4,
    VIDEO_SOURCE_LOG3G10_RWGRGB,
    VIDEO_SOURCE_3DLUT,
    VIDEO_SOURCE_COUNT
} video_source_t;

typedef enum
{
    MONITOR_FEED_0,
    MONITOR_FEED_1,
    MONITOR_FEED_COUNT
} monitor_feed_t;

typedef enum
{
    REDCODE_RAW_RECORD_STATE_OFF,
    REDCODE_RAW_RECORD_STATE_OK,
    REDCODE_RAW_RECORD_STATE_ERROR,
    REDCODE_RAW_RECORD_STATE_COUNT
} redcode_raw_record_state_t;

typedef enum
{
    QUICKTIME_RECORD_STATE_OFF,
    QUICKTIME_RECORD_STATE_OK,
    QUICKTIME_RECORD_STATE_ERROR,
    QUICKTIME_RECORD_STATE_WARNING,
    QUICKTIME_RECORD_STATE_COUNT
} quicktime_record_state_t;

typedef enum
{
    MXF_RECORD_STATE_OFF,
    MXF_RECORD_STATE_OK,
    MXF_RECORD_STATE_ERROR,
    MXF_RECORD_STATE_WARNING,
    MXF_RECORD_STATE_COUNT
} mxf_record_state_t;

typedef enum {
    FLAT_UI_CONTROL_MODE_LOCAL,
    FLAT_UI_CONTROL_MODE_REMOTE
} flat_ui_control_mode_t;

typedef enum {
    SENSOR_SCAN_DIRECTION_NORMAL,
    SENSOR_SCAN_DIRECTION_ROTATED,
    SENSOR_SCAN_DIRECTION_COUNT
} sensor_scan_direction_t;

typedef enum
{
    HDMI_MUX_LCD_EVF,
    HDMI_MUX_HDMI
} hdmi_mux_t;

/* ZEBRA1M, ZEBRA2M */
typedef enum
{
    ZEBRA_MODE_VIDEO,
    ZEBRA_MODE_RAW,
    ZEBRA_MODE_COUNT
} zebra_mode_t;

typedef enum
{
    ZEBRA_PATTERN_BACK,
    ZEBRA_PATTERN_FORWARD,
    ZEBRA_PATTERN_FILL
} zebra_pattern_t;

typedef enum {
    ZEBRA_COLOR_BLACK,
    ZEBRA_COLOR_RED,
    ZEBRA_COLOR_BLUE,
    ZEBRA_COLOR_GREEN,
    ZEBRA_COLOR_YELLOW,
    ZEBRA_COLOR_MAGENTA,
    ZEBRA_COLOR_CYAN,
    ZEBRA_COLOR_DARKGRAY,
    ZEBRA_COLOR_WHITE
} zebra_color_t;

typedef enum
{
    HDMI_VENDOR_NONE = 0,
    HDMI_VENDOR_ATOMOS,
    HDMI_VENDOR_COUNT
} hdmi_vendor_t;

/* PLDETECT */
typedef enum
{
    PL_DETECT_DISABLE = 0,
    PL_DETECT_RETRY = 5,
    PL_DETECT_ENABLE = 255
} pl_detect_t;

typedef enum
{
    POWER_OUT_PROPERTY_UNSUPPORTED = 0,
    POWER_OUT_PROPERTY_ENABLE = 1,
    POWER_OUT_PROPERTY_CURRENT = 2,
    POWER_OUT_PROPERTY_STATUS = 4,

    POWER_OUT_PROPERTY_RESET = POWER_OUT_PROPERTY_ENABLE | POWER_OUT_PROPERTY_STATUS
} power_out_property_t;

typedef enum
{
    MENU_LABEL_FULL,
    MENU_LABEL_PARENT,
    MENU_LABEL_CHILD,
    MENU_LABEL_FROM_LIST_VAL_WITH_INDEX,
    MENU_LABEL_COUNT
} menu_label_t;

/* RCP: MEDAGCII, */
typedef struct
{
    int32_t index;
    char clip_name[20];
    char clip_date[12];
    char clip_time[10];
    int32_t sensor_fps;
    char edge_start_timecode[14];
    char edge_end_timecode[14];
    char tod_start_timecode[14];
    char tod_end_timecode[14];
    int has_r3d;
    int has_qt;
    int has_mxf;
    char duration[12];
    record_mode_t record_mode;
    char compression[5];
    char format[30];
    char project_fps[20];
    char iso[20];
    char kelvin[20];
    char tint[20];
    char num_frames[10];
    camera_capture_mode_t camera_mode;
    char sensor_fps_str[20];
    tc_drop_frame_display_t drop_frame_display_mode;
} extended_clipinfo_t;

typedef enum
{
    COLOR_SCIENCE_FLUT,
    COLOR_SCIENCE_IPP2,
    COLOR_SCIENCE_COUNT
} color_science_t;

typedef enum
{
    IMAGE_PIPELINE_MODE_LEGACY,
    IMAGE_PIPELINE_MODE_IPP2,
    IMAGE_PIPELINE_MODE_CUSTOM,
    IMAGE_PIPELINE_MODE_COUNT
} image_pipeline_mode_t;

typedef enum
{
    SIDE_UI_PAGE_OFF,
    SIDE_UI_PAGE_ON
} side_ui_page_t;

typedef enum
{
    SIDE_UI_AUTO_HOME_NEVER,
    SIDE_UI_AUTO_HOME_ON_RECORD,
    SIDE_UI_AUTO_HOME_ON_TIMEOUT
} side_ui_auto_home_t;

typedef enum
{
    MAIN_OUTPUT_PRESET_CAMERA_DEFAULT = -1,
    MAIN_OUTPUT_PRESET_ACES_PROXY = 0,
    MAIN_OUTPUT_PRESET_BT1886,
    MAIN_OUTPUT_PRESET_HDR,
    MAIN_OUTPUT_PRESET_HDR2084,
    MAIN_OUTPUT_PRESET_HDR_400,
    MAIN_OUTPUT_PRESET_HDR_1K,
    MAIN_OUTPUT_PRESET_HDR_2K,
    MAIN_OUTPUT_PRESET_HDR_4K,
    MAIN_OUTPUT_PRESET_LOG3G10,
    MAIN_OUTPUT_PRESET_REC709,
    MAIN_OUTPUT_PRESET_REDGAMMA2,
    MAIN_OUTPUT_PRESET_REDGAMMA3,
    MAIN_OUTPUT_PRESET_REDGAMMA4,
    MAIN_OUTPUT_PRESET_REDLOGFILM,
    MAIN_OUTPUT_PRESET_SDR,
    MAIN_OUTPUT_PRESET_SDR_REC709,
    MAIN_OUTPUT_PRESET_SDR_REC709_NO_KNEE,
    MAIN_OUTPUT_PRESET_USER,
    MAIN_OUTPUT_PRESET_RLF_TO_3DLUT,
    MAIN_OUTPUT_PRESET_COUNT
} main_output_preset_t;

/* RCP: DPLCD, DPHDMI, DPHDSDI, DPRLCD  */
/*      DPDSD1, DPPHDSD2, DPEVF, DPREVF */
/*      DPLCD3, DPEVF3                  */
typedef enum
{
    DISPLAY_PRESET_CAMERA_DEFAULT = -1,
    DISPLAY_PRESET_ACES_PROXY = 0,
    DISPLAY_PRESET_FLUT_BT1886,
    DISPLAY_PRESET_FLUT_HDR2084,
    DISPLAY_PRESET_FLUT_LOG3G10,
    DISPLAY_PRESET_FLUT_REDGAMMA2,
    DISPLAY_PRESET_FLUT_REDGAMMA3,
    DISPLAY_PRESET_FLUT_REDGAMMA4,
    DISPLAY_PRESET_FLUT_REDLOGFILM,
    DISPLAY_PRESET_MAIN_HDR,
    DISPLAY_PRESET_MAIN_HDR_400,
    DISPLAY_PRESET_MAIN_HDR_1K,
    DISPLAY_PRESET_MAIN_HDR_2K,
    DISPLAY_PRESET_MAIN_HDR_4K,
    DISPLAY_PRESET_MAIN_SDR,
    DISPLAY_PRESET_MAIN_SDR_REC709,
    DISPLAY_PRESET_MAIN_SDR_REC709_NO_KNEE,
    DISPLAY_PRESET_RWGRGB_HDR,
    DISPLAY_PRESET_RWGRGB_HDR_400,
    DISPLAY_PRESET_RWGRGB_HDR_1K,
    DISPLAY_PRESET_RWGRGB_HDR_2K,
    DISPLAY_PRESET_RWGRGB_HDR_4K,
    DISPLAY_PRESET_RWGRGB_SDR,
    DISPLAY_PRESET_RWGRGB_SDR_REC709,
    DISPLAY_PRESET_RWGRGB_SDR_REC709_NO_KNEE,
    DISPLAY_PRESET_USER,
    DISPLAY_PRESET_RWGRGB_LOG3G10,
    DISPLAY_PRESET_RLF_TO_3DLUT,
    DISPLAY_PRESET_COUNT
} display_preset_t;

typedef enum
{
    OUTPUT_TRANSFORM_CAMERA_DEFAULT = -1,
    OUTPUT_TRANSFORM_ACES_AP1 = 0,
    OUTPUT_TRANSFORM_DRAGONCOLOR,
    OUTPUT_TRANSFORM_DRAGONCOLOR2,
    OUTPUT_TRANSFORM_P3,
    OUTPUT_TRANSFORM_REC709,
    OUTPUT_TRANSFORM_REC2020,
    OUTPUT_TRANSFORM_REDCOLOR2,
    OUTPUT_TRANSFORM_REDCOLOR3,
    OUTPUT_TRANSFORM_REDCOLOR4,
    OUTPUT_TRANSFORM_RWGRGB,
    OUTPUT_TRANSFORM_NONE,
    OUTPUT_TRANSFORM_CUSTOM,
    OUTPUT_TRANSFORM_COUNT
} output_transform_t;

typedef enum
{
    POWER_IN_PROPERTY_NONE = 0,
    POWER_IN_PROPERTY_VOLTAGE = (1 << 0),
    POWER_IN_PROPERTY_PERCENT = (1 << 1),
    POWER_IN_PROPERTY_RUNTIME = (1 << 2),
    POWER_IN_PROPERTY_CURRENT = (1 << 3),
    POWER_IN_PROPERTY_PRESENT = (1 << 4)
} power_in_property_t;

typedef enum
{
    OUTPUT_TONE_MAP_LOW_CONTRAST,
    OUTPUT_TONE_MAP_MEDIUM_CONTRAST,
    OUTPUT_TONE_MAP_HIGH_CONTRAST,
    OUTPUT_TONE_MAP_NONE,
    OUTPUT_TONE_MAP_COUNT
} output_tone_map_t;

typedef enum
{
    RETURN_FEED_DISABLED,
    RETURN_FEED_ON,
    RETURN_FEED_NO_SIGNAL,
    RETURN_FEED_INVALID_SIGNAL,
    RETURN_FEED_INVALID_CAMERA_FORMAT
} return_feed_status_t;

typedef enum
{
    ROLL_OFF_NONE,
    ROLL_OFF_HARD,
    ROLL_OFF_MEDIUM,
    ROLL_OFF_SOFT,
    ROLL_OFF_VERY_SOFT,
    ROLL_OFF_COUNT
} roll_off_t;

typedef enum
{
    SENSOR_SENSITIVITY_LOW_LIGHT,
    SENSOR_SENSITIVITY_STANDARD
} sensor_sensitivity_t;

#endif
/********** End file: rcp_types_public.h ****************************************/

/********** Begin file: c_list.h ************************************************/
/*line -strong(AJX,c_list_error_t,c_list_find_t,c_list_string_type_t) */
#ifndef C_LIST_H_INCLUDED
#define C_LIST_H_INCLUDED

#include <stdlib.h>
#include <stdint.h>

/** @file c_list.h
 * c_list is a library for maintaining lists used in-camera.  There is a
 * C++ wrapper for this library called cList.
 *
 * Lists contain any number of entries.  Each entry contains a numeric
 * value, string representation, and option user defined data.
 *
 * Lists also have a "current" entry.  That is, a entry in the list
 * that is the denoted as being the currently selected item.
 *
 * Lists can be converted to strings for transfer between two devices.
 * Normally, this is to send lists out from the camera to a external
 * device using RCP.
 * */

/*
 * Stringify format:  There are three different stringify formats
 * including: normal (C_LIST_STRING_TYPE_NORMAL), compressed
 * (C_LIST_STRING_TYPE_COMPRESSED), and min/max/step
 * (C_LIST_STRING_TYPE_MIN_MAX_STEP).
 *
 * C_LIST_STRING_TYPE_NORMAL:
 *     format: TYPE|CURRENT_INDEX|[NUM|STRING|]*
 *
 * C_LIST_STRING_TYPE_COMPRESSED:
 *     format: TYPE|CURRENT_INDEX|[NUM|COMPRESSED_STRING|]*{[UNCOMPRESSED_STRING:COMPRESSED_CHARACTER|]*}
 *
 *     Note: Compression is only used when the normal format generates a
 *     string too large to fit the 8K buffer.
 *
 *     This format replaces the STRING portion of the
 *     C_LIST_STRING_TYPE_NORMAL format with a COMPRESSED_STRING.  The
 *     COMPRESSED_STRING can contain both COMPRESSED_CHARACTERs and
 *     non-compressed portions of the original STRING. The mapping
 *     between UNCOMPRESSED_STRINGs and COMPRESSED_CHARACTERs is added
 *     at the end of the stringified list in a dictionary (denoted by
 *     curly braces).  To uncompress the stringified list use the
 *     dictionary to replace all COMPRESSED_CHARACTERs in each
 *     COMPRESSED_STRING with the corresponding UNCOMPRESSED_STRING.
 *
 * C_LIST_STRING_TYPE_MIN_MAX_STEP:
 *     format: TYPE|CURRENT_INDEX|MIN|MAX|STEP|DIVIDER|PRECISION|PREFIX|POSTFIX|
 *
 * TYPE: type of string (see c_list_string_type_t)
 * CURRENT_INDEX: zero based index denoting which entry in the list is
 *     the "current" entry; -1, if the list is empty.
 * NUM: integer portion of list entry
 * STRING: string portion of list entry
 * COMPRESSED_STRING: see above
 * UNCOMPRESSED_STRING: see above
 * COMPRESSED_CHARACTER: see above
 * MIN: minimum value for NUM (value for first entry in list)
 * MAX: maximum value for NUM
 * STEP: each entry in list is calculated as previous entry plus STEP
 * DIVIDER/PRECISION/PREFIX/POSTFIX: used to create string for entry
 *     based on NUM.  The format is: "PREFIX VALUE POSTFIX" where VALUE
 *     is NUM/DIVIDER shown to PRECISION decimal places.
 */

typedef int32_t c_list_num_t;
#define C_LIST_MAX_STRING_LEN 255
typedef void * (* c_list_malloc_t) (size_t);
typedef void (* c_list_free_t) (void *);

#ifdef __cplusplus
extern "C"
{
#endif

typedef enum {
    C_LIST_SUCCESS,                    /**< No error */
    C_LIST_INDEX_ERROR,                /**< Index is out of range */
    C_LIST_FIND_ERROR,                 /**< Could not find item matching search criteria */
    C_LIST_LOAD_ERROR,                 /**< Error loading list from file */
    C_LIST_PARAM_ERROR,                /**< Invalid parameter */
    C_LIST_MEM_ERROR,                  /**< Out of memory */
    C_LIST_NO_DATA_ERROR,              /**< Empty List */
    C_LIST_BUFFER_FULL_ERROR           /**< String buffer full Error*/
} c_list_error_t;

typedef enum {
    C_LIST_FIND_EXACT,                 /**< Match search criteria exactly */
    C_LIST_FIND_CLOSEST,               /**< Find closest value */
    C_LIST_FIND_NEXT_SMALLER,          /**< Find next smaller match */
    C_LIST_FIND_NEXT_BIGGER            /**< Find next bigger match */
} c_list_find_t;

typedef enum {
    C_LIST_STRING_TYPE_NORMAL,
    C_LIST_STRING_TYPE_MIN_MAX_STEP,
    C_LIST_STRING_TYPE_COMPRESSED
} c_list_string_type_t;

/** INTERNAL USE ONLY */
typedef struct
{
    int valid;
    int min;
    int max;
    int step;
    int divider;
    int precision;
    char prefix[C_LIST_MAX_STRING_LEN];
    char postfix[C_LIST_MAX_STRING_LEN];
} c_list_step_options_t;

typedef union
{
    void * ptr;
    int32_t int32;
} user_defined_t;

/** Structure defining each entry in the list */
typedef struct c_list_entry_tag {
    c_list_num_t num;                   /**< Number */
    char str[C_LIST_MAX_STRING_LEN];    /**< String */
    user_defined_t user_defined;        /**< User Defined Data */
    struct c_list_entry_tag * next;     /**< INTERNAL USE ONLY */
    struct c_list_entry_tag * prev;     /**< INTERNAL USE ONLY */
} c_list_entry_t;

/** INTERNAL USE ONLY */
typedef struct {
    c_list_entry_t * head;
    c_list_entry_t * tail;
    c_list_entry_t * cur;
    c_list_step_options_t step_options;
    c_list_malloc_t malloc;
    c_list_free_t free;
} c_list_t;

/** @brief Create list.
 *
 * @param[in] c_list_malloc    allocator function to use for all
 * dynamic memory allocations (typically this will be malloc)
 * @param[in] c_list_free      de-allocator function to use for all
 * dynamic memory de-allocations (typically this will be free)
 *
 * @returns pointer to newly allocated list (must be deleted by
 * calling @ref c_list_delete) or NULL on error.
 * */
c_list_t * c_list_create(c_list_malloc_t c_list_malloc, c_list_free_t c_list_free);

/** @brief Delete list.
 *
 * @param[in] c_list    pointer of list to delete (returned by @ref c_list_create)
 *
 * @returns C_LIST_SUCCESS on success.
 * */
c_list_error_t c_list_delete(c_list_t * c_list);

/** @brief Copy list.
 *
 * Will copy list @p src to @p dest.  Both @p src and @p must be valid
 * lists allocated by @ref c_list_create.  @note If the @a user_defined
 * field is a pointer to an external object it will not be deep copied.
 *
 * @param dest  destination list
 * @param src   source list
 *
 * @returns C_LIST_SUCCESS on success.
 * */
c_list_error_t c_list_copy(c_list_t * dest, const c_list_t * src);

/** @brief Append item to list.
 *
 * @param[in] c_list    list to add item to
 * @param[in] num       integer value of item to add
 * @param[in] str       string value of item to add
 * @param[in] user_defined   user defined value of item to add
 *
 * @returns C_LIST_SUCCESS on success.
 * */
c_list_error_t c_list_append(c_list_t * c_list, c_list_num_t num, const char * str, user_defined_t user_defined);

/** @brief Insert item in list at specified location.
 *
 * @param[in] c_list    list to add item to
 * @param[in] idx       0-based index of where to add item
 * @param[in] num       integer value of item to add
 * @param[in] str       string value of item to add
 * @param[in] user_defined   user defined value of item to add
 *
 * @returns C_LIST_SUCCESS on success.
 * */
c_list_error_t c_list_insert(c_list_t * c_list, size_t idx, c_list_num_t num, const char * str, user_defined_t user_defined);

/** @brief Insert item in list in sorted order.
 *
 * Inserts item in list in sorted order.
 *
 * @note The list must already be in sorted order
 *
 * @param[in] c_list    list to add item to
 * @param[in] num       integer value of item to add
 * @param[in] str       string value of item to add
 * @param[in] user_defined   user defined value of item to add
 *
 * @returns C_LIST_SUCCESS on success.
 * */
c_list_error_t c_list_insert_in_sort_order(c_list_t * c_list, c_list_num_t num, const char * str, user_defined_t user_defined);

/** @brief Insert item in list in sorted order (unique).
 *
 * Inserts item in list in sorted order.  If an item with the same
 * numeric value already exists in the list it will be replaced with
 * the values provided.
 *
 * @note The list must already be in sorted order
 *
 * @param[in] c_list    list to add item to
 * @param[in] num       integer value of item to add
 * @param[in] str       string value of item to add
 * @param[in] user_defined   user defined value of item to add
 *
 * @returns C_LIST_SUCCESS on success.
 * */
c_list_error_t c_list_insert_in_sort_order_unique(c_list_t * c_list, c_list_num_t num, const char * str, user_defined_t user_defined);

/** @brief Insert item in list in alphabetical order.
 *
 * @note The list must already be in alphabetical order
 *
 * @param[in] c_list    list to add item to
 * @param[in] num       integer value of item to add
 * @param[in] str       string value of item to add
 * @param[in] user_defined   user defined value of item to add
 *
 * @returns C_LIST_SUCCESS on success.
 * */
c_list_error_t c_list_insert_in_alphabetical_order(c_list_t * c_list, c_list_num_t num, const char * str, user_defined_t user_defined);

/** @brief Remove item from list.
 *
 * Remove item from list specified by the index @p idx
 *
 * @param[in] c_list    list object
 * @param[in] idx   index of item to remove
 *
 * @returns C_LIST_SUCCESS on success.
 * */
c_list_error_t c_list_remove(c_list_t * c_list, size_t idx);

/** @brief Clear list.
 *
 * Clears all items from list
 *
 * @param[in] c_list    list object
 *
 * @returns C_LIST_SUCCESS on success.
 * */
c_list_error_t c_list_clear(c_list_t * c_list);

/** @brief Length of list
 *
 * @param[in] c_list    list object
 *
 * @returns the number of items in the list.
 * */
size_t c_list_get_length(const c_list_t * c_list);

/** @brief Find first entry in the list
 *
 * Sets the current item index to the first item in the list and returns the
 * contents of the item.
 *
 * @param[in] c_list    list object
 * @param[out] c_list_entry pointer to list entry object that found
 * data will be copied to
 *
 * @returns C_LIST_SUCCESS on success.
 * */
c_list_error_t c_list_find_first(c_list_t * c_list, c_list_entry_t * c_list_entry);

/** @brief Find last entry in the list
 *
 * Sets the current item index to the last item in the list and returns the
 * contents of the item.
 *
 * @param[in] c_list    list object
 * @param[out] c_list_entry pointer to list entry object that found
 * data will be copied to
 *
 * @returns C_LIST_SUCCESS on success.
 * */
c_list_error_t c_list_find_last(c_list_t * c_list, c_list_entry_t * c_list_entry);

/** @brief Find next entry in the list
 *
 * Sets the current item index to the next item in the list (based on
 * the current item index) and returns the contents of the item.
 *
 * @param[in] c_list    list object
 * @param[out] c_list_entry pointer to list entry object that found
 * data will be copied to
 *
 * @returns C_LIST_SUCCESS on success.
 * */
c_list_error_t c_list_find_next(c_list_t * c_list, c_list_entry_t * c_list_entry);

/** @brief Find previous entry in the list
 *
 * Sets the current item index to the previous item in the list (based on
 * the current item index) and returns the contents of the item.
 *
 * @param[in] c_list    list object
 * @param[out] c_list_entry pointer to list entry object that found
 * data will be copied to
 *
 * @returns C_LIST_SUCCESS on success.
 * */
c_list_error_t c_list_find_prev(c_list_t * c_list, c_list_entry_t * c_list_entry);

/** @brief Get entry details by index.
 *
 * Get entry details for an entry by index
 *
 * @param[in] c_list            list object
 * @param[in] idx               index of item to get
 * @param[out] c_list_entry     pointer to list entry object to copy
 * data to
 *
 * @returns C_LIST_SUCCESS on success.
 * */
c_list_error_t c_list_get_entry(const c_list_t * c_list, size_t idx, c_list_entry_t * c_list_entry);

/** @brief Set entry details by index.
 *
 * Replace the given entry (specified by the index @p idx) with the
 * data contained in @p c_list_entry.
 *
 * @param[in] c_list        list_object
 * @param[in] idx           index of item to replace
 * @param[in] c_list_entry  pointer to entry object containing new data
 *
 * @returns C_LIST_SUCCESS on success.
 * */
c_list_error_t c_list_set_entry(c_list_t * c_list, size_t idx, const c_list_entry_t * c_list_entry);

/** @brief Get current entry details.
 *
 * Get current entry details
 *
 * @param[in] c_list            list object
 * @param[out] c_list_entry     pointer to list entry object to copy
 * data to
 *
 * @returns C_LIST_SUCCESS on success.
 * */
c_list_error_t c_list_get_current_entry(const c_list_t * c_list, c_list_entry_t * c_list_entry);

/** @brief Set details of current entry.
 *
 * Replace the current entry with the data contained in @p c_list_entry.
 *
 * @param[in] c_list        list object
 * @param[in] c_list_entry  pointer to entry object containing new data
 *
 * @returns C_LIST_SUCCESS on success.
 * */
c_list_error_t c_list_set_current_entry(c_list_t * c_list, const c_list_entry_t * c_list_entry);

/** @brief Get index of current entry.
 *
 * @param[in] c_list    list object
 * @param[out] idx      index of current object
 *
 * @returns C_LIST_SUCCESS on success.*/
c_list_error_t c_list_get_index(const c_list_t * c_list, size_t * idx);

/** @brief Set current entry by index;
 *
 * @param[in] c_list    list object
 * @param[in] idx       index of new current object
 *
 * @returns C_LIST_SUCCESS on success.*/
c_list_error_t c_list_set_index(c_list_t * c_list, size_t idx);

/** @brief Find entry by number.
 *
 * Finds the entry in the list that matches the specified number @p num (using
 * the criteria set by @p find).  The entry, if found, is set as the
 * current entry.
 *
 * @param[in] c_list            list object
 * @param[in] num               number to find
 * @param[out] c_list_entry     pointer to entry object to copy data to
 * @param[in] find              search criteria
 *
 * @returns C_LIST_SUCCESS if a match is found.
 * */
c_list_error_t c_list_find_num(c_list_t * c_list, c_list_num_t num, c_list_entry_t * c_list_entry, c_list_find_t find);

/** @brief Find entry by string.
 *
 * Finds the entry in the list that matches the specified string @p
 * str. The entry, if found, is set as the current entry.
 *
 * @param[in] c_list            list object
 * @param[in] str               string to find
 * @param[out] c_list_entry     pointer to entry object to copy data to
 *
 * @returns C_LIST_SUCCESS if a match is found.
 * */
c_list_error_t c_list_find_str(c_list_t * c_list, const char * str, c_list_entry_t * c_list_entry);

/** @brief Find entry by partial string.
 *
 * Finds the entry in the list that matches the specified string @p
 * str up to the length @p len. The entry, if found, is set as the current entry.
 *
 * @param[in] c_list            list object
 * @param[in] str               string to find
 * @param[in] len               length of characters to compare
 * @param[out] c_list_entry     pointer to entry object to copy data to
 *
 * @returns C_LIST_SUCCESS if a match is found.
 * */
c_list_error_t c_list_find_strn(c_list_t * c_list, const char * str, size_t len, c_list_entry_t * c_list_entry);

/** @brief Create list using min, max, step.
 *
 * Create a list given a @p min value, @p max value and @p step size.
 * The string for each entry will be generated using the @p divider and
 * @p precision parameters.  For example, if @p divider is 1000 and @p
 * precision is 3, the value 1000 will be represented as "1.000".
 * Furthermore, each string will have the @p prefix and @p postfix
 * added to the string.
 *
 * @note: The list will be cleared of any existing data before being
 * filled with new data.
 *
 * @param[in] c_list        list object
 * @param[in] min           minimum value in list
 * @param[in] max           maximum value in list
 * @param[in] step          step size used to create values between @p
 * min and @p max
 * @param[in] divider       divider used to create string
 * @param[in] precision     precision (number of digits after decimal
 * point) used to create string
 * @param[in] postfix       string to the appended to end of string
 * @param[in] prefix        string to be prepended to beginning of
 * string
 *
 * @return C_LIST_SUCCESS on success.
 * */
c_list_error_t c_list_fill_generic(c_list_t * c_list, int min, int max, int step, int divider, int precision, const char * postfix, const char * prefix);

/** @brief Decode all decorated strings in list.
 *
 *  Decorated string contain special characters encoded using the HTML
 *  Entities syntax.  That is, \&special;.  This function will decode
 *  all the strings and replace the special characters with ASCII
 *  equivalents.  For example, \&red1over; will be replaced with "1/".
 *
 *  @param[in] c_list   list object
 *
 *  @returns C_LIST_SUCCESS on success.
 * */
c_list_error_t c_list_decode(const c_list_t * c_list);

/** @brief Convert string to list.
 *
 * This function will import a list from a string previously created by
 * @ref c_list_export_to_string.
 *
 * @note All contents of the list will be cleared before importing form
 * the string.
 *
 * @param[in] c_list    list object
 * @param[in] str       string to import
 *
 * @returns C_LIST_SUCCESS on success.
 * */
c_list_error_t c_list_import_from_string(c_list_t * c_list, const char * str);

/** @brief Convert list to a single string.
 *
 * This function will convert the list into a single string that can be
 * converted back into a list using @ref c_list_import_from_string.
 *
 * @note The user_defined data for each entry is not part of the created
 * string.
 *
 * @param[in] c_list    list_object
 * @param[out] str      buffer to hold output string
 * @param[in] size      size of @p str
 *
 * @returns C_LIST_SUCCESS on success.
 * */
c_list_error_t c_list_export_to_string(const c_list_t * c_list, char * str, size_t size);
c_list_error_t c_list_export_to_string_ext(const c_list_t * c_list, char * str, size_t size, int force_compression);

/** @brief Compare two lists.
 *
 * Two lists are considered equal if all their entries are identical
 * and they have the same "current" entry.
 *
 * @param[in] c_list_1  first list to compare
 * @param[in] c_list_2  second list to compare
 *
 * @return 1 if two lists are equal, 0 otherwise.
 * */
int c_list_compare(const c_list_t * c_list_1, const c_list_t * c_list_2);

#ifdef __cplusplus
}
#endif

#endif
/********** End file: c_list.h **************************************************/

/********** Begin file: keydefinition.h *****************************************/
#ifndef KEYDEFINITION_H_INCLUDED
#define KEYDEFINITION_H_INCLUDED

/* Unique Key-Codes are defined as 24-bit numbers
 * Lower 8 Bit = Code
 * Middle 8 Bit = Flags
 * Upper 8 Bit = Source
 * */

/* Event sources */
#define BRAIN                       0
#define SIDE_HANDLE                 1
#define BOTTOM_HANDLE               2
#define SIDE_SSD                    3
#define REDMOTE                     4
#define LCD                         5
#define LENS                        6
#define LCD_PROMODULE               7
#define EVF                         8
#define EVF_PROMODULE               9
#define PRO_IO                      10
#define UI_SOFTKEY                  11
#define SIDE_MODULE                 12
#define FLAT_UI                     13
#define TOP_HANDLE                  14
#define WEAPON_SIDE_HANDLE          15
#define LCD3                        16
#define EVF3                        17
#define XLFIZ                       18  /* No longer supported... */
#define SIDE_UI_LEFT                19
#define SIDE_UI_RIGHT               20

/* Key flags */
#define KEY_DOWN                    1   /**< Key press down event (should always be followed eventually by a @ref KEY_UP event. */
#define KEY_UP                      2   /**< Key released */
#define CW                          4   /**< Clockwise */
#define CCW                         8   /**< Counter Clockwise */

/* Key ID's */
#define USER_KEY_A                  1
#define USER_KEY_B                  2
#define USER_KEY_C                  3
#define USER_KEY_D                  4
#define FUNCTION_KEY_1              5
#define FUNCTION_KEY_2              6
#define FUNCTION_KEY_3              7
#define FUNCTION_KEY_4              8
#define FUNCTION_KEY_5              9
#define FUNCTION_KEY_6              10
#define FUNCTION_KEY_7              11
#define FUNCTION_KEY_8              12
#define STILL_SELECT_KEY            13
#define MOVIE_SELECT_KEY            14
#define RECORD_HALF_KEY             15
#define RECORD_FULL_KEY             16
#define FRONT_ROTARY_1              26
#define FRONT_ROTARY_2              27
#define BACK_ROTARY_JOG             28
#define BACKLIGHT_KEY               29
#define MENU_KEY                    30
#define NORTH_KEY                   31
#define SOUTH_KEY                   32
#define EAST_KEY                    33
#define WEST_KEY                    34
#define CENTER_KEY                  35
#define LOCK_KEY                    40
#define UNLOCK_KEY                  41
#define ROCKER_PLUS                 42
#define ROCKER_MINUS                43
#define MODE_KEY                    44

/* Utility Macros */

/** Create keycode from @p source, @p flags, and @p id. */
#define MAKEKEYCODE(source, flags, id) ((((source) & 0xFF) << 16) | (((flags) & 0xFF) << 8) | ((id) & 0xFF))

/** Extract source from @p keycode. */
#define KEYCODE_SOURCE(keycode) (((keycode) & 0xFF0000) >> 16)

/** Extract flags from @p keycode. */
#define KEYCODE_FLAGS(keycode) (((keycode) & 0x00FF00) >> 8)

/** Extract id from @p keycode. */
#define KEYCODE_ID(keycode) ((keycode) & 0x0000FF)
#endif
/********** End file: keydefinition.h *******************************************/

/********** Begin file: rcp_api.h ***********************************************/
/*lint -strong(AJX,rcp_param_t,rcp_param_status_t,rcp_connection_state_t,rcp_mutex_t,rcp_log_t,rcp_notification_action_t,rcp_clip_list_status_t,rcp_error_t) */

/** @file rcp_api.h
 * RCP API Header
 **/

/** @mainpage Documentation
 *
 * @section API_OVERVIEW API Overview
 *
 * @subsection RCP_API_INFO RCP API Information
 * function                 | description
 * -------------------------|------------
 * @ref rcp_api_get_version | @copybrief rcp_api_get_version
 *
 * @subsection CONNECTION_MANAGEMENT Connection Management
 *
 * function                          | description
 * ----------------------------------|------------
 * @ref rcp_create_camera_connection | @copybrief rcp_create_camera_connection
 * @ref rcp_delete_camera_connection | @copybrief rcp_delete_camera_connection
 * @ref rcp_camera_connection_stats  | @copybrief rcp_camera_connection_stats
 *
 * @subsection CAMERA_DISCOVERY Camera Discovery
 * function                        | description
 * --------------------------------|------------
 * @ref rcp_discovery_start        | @copybrief rcp_discovery_start
 * @ref rcp_discovery_step         | @copybrief rcp_discovery_step
 * @ref rcp_discovery_get_list     | @copybrief rcp_discovery_get_list
 * @ref rcp_discovery_free_list    | @copybrief rcp_discovery_free_list
 * @ref rcp_discovery_process_data | @copybrief rcp_discovery_process_data
 * @ref rcp_discovery_end          | @copybrief rcp_discovery_end
 *
 * @subsection SET_GET_CAM_PARAMS Setting/Getting Camera Parameters
 * function                           | description
 * -----------------------------------|------------
 * @ref rcp_get                       | @copybrief rcp_get
 * @ref rcp_get_list                  | @copybrief rcp_get_list
 * @ref rcp_get_status                | @copybrief rcp_get_status
 * @ref rcp_get_default               | @copybrief rcp_get_default
 * @ref rcp_send                      | @copybrief rcp_send
 * @ref rcp_set_int                   | @copybrief rcp_set_int
 * @ref rcp_set_int_relative          | @copybrief rcp_set_int_relative
 * @ref rcp_set_uint                  | @copybrief rcp_set_uint
 * @ref rcp_set_uint_relative         | @copybrief rcp_set_uint_relative
 * @ref rcp_set_str                   | @copybrief rcp_set_str
 * @ref rcp_set_list                  | @copybrief rcp_set_list
 * @ref rcp_set_list_relative         | @copybrief rcp_set_list_relative
 * @ref rcp_get_periodic_is_supported | @copybrief rcp_get_periodic_is_supported
 * @ref rcp_get_periodic_on           | @copybrief rcp_get_periodic_on
 * @ref rcp_get_periodic_off          | @copybrief rcp_get_periodic_off
 *
 * @subsection NOTIFICATIONS Notification Interface
 * function                       | description
 * -------------------------------|------------
 * @ref rcp_notification_get      | @copybrief rcp_notification_get
 * @ref rcp_notification_timeout  | @copybrief rcp_notification_timeout
 * @ref rcp_notification_response | @copybrief rcp_notification_response
 *
 * @subsection GET_PARAM_PROP Getting Properties of RCP Parameters
 * function                               | description
 * ---------------------------------------|------------
 * @ref rcp_get_name                      | @copybrief rcp_get_name
 * @ref rcp_get_label                     | @copybrief rcp_get_label
 * @ref rcp_get_id                        | @copybrief rcp_get_id
 * @ref rcp_get_update_list_only_on_close | (DEPRECATED) @copybrief rcp_get_update_list_only_on_close
 * @ref rcp_get_is_supported              | @copybrief rcp_get_is_supported
 *
 * @subsection MENU_TREE Getting Menu Tree for Camera
 * function                                       | description
 * -----------------------------------------------|------------
 * @ref rcp_menu_is_supported                     | @copybrief rcp_menu_is_supported
 * @ref rcp_menu_get_children                     | @copybrief rcp_menu_get_children
 * @ref rcp_menu_node_status_is_supported         | @copybrief rcp_menu_node_status_is_supported
 * @ref rcp_menu_get_node_status                  | @copybrief rcp_menu_get_node_status
 * @ref rcp_menu_get_multi_action_list_leaf_flags | @copybrief rcp_menu_get_multi_action_list_leaf_flags
 *
 * @subsection FILE_TRANSFER File Transfer Functions
 * function                                       | description
 * -----------------------------------------------|------------
 * @ref rcp_rftp_is_supported                     | @copybrief rcp_rftp_is_supported
 * @ref rcp_rftp_tethered_is_supported            | @copybrief rcp_rftp_tethered_is_supported
 * @ref rcp_rftp_send_file                        | @copybrief rcp_rftp_send_file
 * @ref rcp_rftp_retrieve_file                    | @copybrief rcp_rftp_retrieve_file
 * @ref rcp_rftp_retrieve_file_tethered           | @copybrief rcp_rftp_retrieve_file_tethered
 * @ref rcp_rftp_abort_transfer                   | @copybrief rcp_rftp_abort_transfer
 * @ref rcp_rftp_delete_file                      | @copybrief rcp_rftp_delete_file
 * @ref rcp_rftp_directory_listing                | @copybrief rcp_rftp_directory_listing
 *
 * @subsection USER_MSG User Pass-Through Message Functions
 * function                          | description
 * ----------------------------------|------------
 * @ref rcp_user_is_supported        | @copybrief rcp_user_is_supported
 * @ref rcp_user_send_set            | @copybrief rcp_user_send_set
 * @ref rcp_user_send_get            | @copybrief rcp_user_send_get
 * @ref rcp_user_send_current        | @copybrief rcp_user_send_current
 *
 * @subsection USER_METADATA_MSG User Metadata Message Functions
 * function                             | description
 * -------------------------------------|------------
 * @ref rcp_user_metadata_is_supported  | @copybrief rcp_user_metadata_is_supported
 * @ref rcp_user_metadata_register      | @copybrief rcp_user_metadata_register
 * @ref rcp_user_metadata_unregister    | @copybrief rcp_user_metadata_unregister
 * @ref rcp_user_metadata_send          | @copybrief rcp_user_metadata_send
 *
 * @subsection KEYMAPPING_FUNCTIONS Key Mapping Functions
 *
 * function                                | description
 * ----------------------------------------|------------
 * @ref rcp_key_mapping_is_supported        | @copybrief rcp_key_mapping_is_supported
 * @ref rcp_key_mapping_get_action_list     | @copybrief rcp_key_mapping_get_action_list
 * @ref rcp_key_mapping_get_mapping         | @copybrief rcp_key_mapping_get_mapping
 * @ref rcp_key_mapping_set_mapping         | @copybrief rcp_key_mapping_set_mapping
 *
 * @subsection CLIENT_FUNCTIONS Client Provided Functions
 *
 * function              | description
 * ----------------------|------------
 * @ref rcp_malloc       | @copybrief rcp_malloc
 * @ref rcp_free         | @copybrief rcp_free
 * @ref rcp_mutex_lock   | @copybrief rcp_mutex_lock
 * @ref rcp_mutex_unlock | @copybrief rcp_mutex_unlock
 * @ref rcp_log          | @copybrief rcp_log
 * @ref rcp_rand         | @copybrief rcp_rand
 * @ref rcp_timestamp    | @copybrief rcp_timestamp
 *
 * @section BUILD_CONFIGURATION API Build Configuration
 *
 * The API build can be customized to fit the needs of your target
 * platform - for details see rcp_api_config.h
 *
 * @page CHANGELOG Changelog
 *
 * @section VERSION_6_51_2 Version 6.51.2
 * - Added parameters:
 *   - @ref RCP_PARAM_SENSOR_SENSITIVITY
 *
 * @section VERSION_6_51_0 Version 6.51.0
 * - Added parameters:
 *   - @ref RCP_PARAM_QT_DROPPED_FRAMES
 *   - @ref RCP_PARAM_MXF_DROPPED_FRAMES
 *   - @ref RCP_PARAM_R3D_DROPPED_FRAMES
 *
 * @section VERSION_6_50_24 Version 6.50.24
 * - Added is_paused field to rcp_cur_rftp_status_cb_data_t
 *
 *
 * @section VERSION_6_50_23 Version 6.50.23
 * - Added parameters:
 *   - @ref RCP_PARAM_MIN_RECORD_PROXY_BAKED_IN_SETTINGS
 *   - @ref RCP_PARAM_MAX_RECORD_PROXY_BAKED_IN_SETTINGS
 *
 * @section VERSION_6_50_22 Version 6.50.22
 * - Added parameters:
 *   - @ref RCP_PARAM_MONITOR_LUT_LCD
 *   - @ref RCP_PARAM_MONITOR_LUT_EVF
 *   - @ref RCP_PARAM_MONITOR_LUT_HDMI
 *   - @ref RCP_PARAM_MONITOR_LUT_HDSDI
 *   - @ref RCP_PARAM_MONITOR_LUT_REAR_LCD
 *   - @ref RCP_PARAM_MONITOR_LUT_REAR_EVF
 *   - @ref RCP_PARAM_MONITOR_LUT_REAR_HDSDI1
 *   - @ref RCP_PARAM_MONITOR_LUT_REAR_HDSDI2
 *   - @ref RCP_PARAM_MONITOR_LUT_BRAIN_LCD3
 *   - @ref RCP_PARAM_MONITOR_LUT_BRAIN_EVF3
 *   - @ref RCP_PARAM_RECORD_PROXY_BAKED_IN_SETTINGS
 *
 * @section VERSION_6_50_20 Version 6.50.20
 * - bug fixes
 *
 * @section VERSION_6_50_16 Version 6.50.16
 * - Added Client ID feature: The API will now inform the camera with
 * the client application provided information: see client_name,
 * client_version, and client_user added to
 * rcp_camera_connection_info_t.  This information may be shown to the
 * camera operator.
 * - Added rcp_interface_enabled and rcp_interface_enabled_valid fields
 * to rcp_cam_info_t.
 * - Added RCP_CONNECTION_STATE_RCP_DISABLED_ON_INTERFACE
 * to rcp_connection_state_t.  This is used to signify that RCP has
 * been disabled on the interface connected to (the user will need to
 * re-enable before a connection is allowed)
 * - Note: Periodic data (RCP_PARAM_HISTOGRAM, RCP_PARAM_AUDIO_VU_DATA,
 * RCP_PARAM_CAMERA_PITCH, and RCP_PARAM_CAMERA_ROLL) is no longer
 * enabled by default on the camera.  If you application requires this
 * data, you must enable it using:
 * - Added @ref rcp_get_periodic_is_supported, @ref
 * rcp_get_periodic_on, and @ref rcp_get_periodic_off.
 * - Added @ref rcp_get_default
 *
 * - Deprecated parameters:
 *   - @ref RCP_PARAM_SET_TIMECODE
 *   - @ref RCP_PARAM_PROXY_ENCODE_FRAMERATE (replaced with
 *   @ref RCP_PARAM_PRORES_ENCODE_FRAMERATE and
 *   @ref RCP_PARAM_MXF_ENCODE_FRAMERATE)
 *   - @ref RCP_PARAM_MONITOR_SPLIT_CURVE
 *   - @ref RCP_PARAM_MONITOR_CURVE_LCD
 *   - @ref RCP_PARAM_MONITOR_CURVE_HDMI
 *   - @ref RCP_PARAM_MONITOR_CURVE_HDSDI
 *   - @ref RCP_PARAM_MONITOR_CURVE_EVF
 *   - @ref RCP_PARAM_MONITOR_CURVE_REAR_LCD
 *   - @ref RCP_PARAM_MONITOR_CURVE_REAR_HDSDI1
 *   - @ref RCP_PARAM_MONITOR_CURVE_REAR_HDSDI2
 *   - @ref RCP_PARAM_MONITOR_CURVE_REAR_EVF
 *   - @ref RCP_PARAM_MONITOR_CURVE_LCD3
 *   - @ref RCP_PARAM_MONITOR_CURVE_EVF3
 *   - @ref RCP_PARAM_FLIP_MIRROR_FEED_0
 *   - @ref RCP_PARAM_FLIP_MIRROR_FEED_1
 *
 * - Added parameters:
 *   - @ref RCP_PARAM_CDL_SATURATION
 *   - @ref RCP_PARAM_EXPOSURE_ADJUST
 *   - @ref RCP_PARAM_CDL_OFFSET_RED
 *   - @ref RCP_PARAM_CDL_OFFSET_GREEN
 *   - @ref RCP_PARAM_CDL_OFFSET_BLUE
 *   - @ref RCP_PARAM_CDL_POWER_RED
 *   - @ref RCP_PARAM_CDL_POWER_GREEN
 *   - @ref RCP_PARAM_CDL_POWER_BLUE
 *   - @ref RCP_PARAM_CDL_SLOPE_RED
 *   - @ref RCP_PARAM_CDL_SLOPE_GREEN
 *   - @ref RCP_PARAM_CDL_SLOPE_BLUE
 *   - @ref RCP_PARAM_GIGABIT_ETHERNET_MAC_ADDRESS
 *   - @ref RCP_PARAM_WIFI_MAC_ADDRESS
 *   - @ref RCP_PARAM_PRORES_ENCODE_FRAMERATE
 *   - @ref RCP_PARAM_MXF_ENCODE_FRAMERATE
 *   - @ref RCP_PARAM_MONITOR_MODE_LCD3
 *   - @ref RCP_PARAM_MONITOR_OVERLAY_LCD3
 *   - @ref RCP_PARAM_MONITOR_FREQ_LCD3
 *   - @ref RCP_PARAM_MONITOR_CURVE_LCD3
 *   - @ref RCP_PARAM_MONITOR_TOOLS_LCD3
 *   - @ref RCP_PARAM_MONITOR_UI_FLIP_MIRROR_LCD3
 *   - @ref RCP_PARAM_MONITOR_VIDEO_FLIP_LCD3
 *   - @ref RCP_PARAM_MONITOR_FLIP_MIRROR_LCD3
 *   - @ref RCP_PARAM_MONITOR_FRAMED_OVERLAY_LCD3
 *   - @ref RCP_PARAM_MONITOR_DOCK_MENUS_LCD3
 *   - @ref RCP_PARAM_MONITOR_FEED_LCD3
 *   - @ref RCP_PARAM_MONITOR_FLIP_MIRROR_SUPPORTED_LCD3
 *   - @ref RCP_PARAM_MONITOR_MODE_EVF3
 *   - @ref RCP_PARAM_MONITOR_OVERLAY_EVF3
 *   - @ref RCP_PARAM_MONITOR_FREQ_EVF3
 *   - @ref RCP_PARAM_MONITOR_CURVE_EVF3
 *   - @ref RCP_PARAM_MONITOR_TOOLS_EVF3
 *   - @ref RCP_PARAM_MONITOR_UI_FLIP_MIRROR_EVF3
 *   - @ref RCP_PARAM_MONITOR_VIDEO_FLIP_EVF3
 *   - @ref RCP_PARAM_MONITOR_FLIP_MIRROR_EVF3
 *   - @ref RCP_PARAM_MONITOR_FRAMED_OVERLAY_EVF3
 *   - @ref RCP_PARAM_MONITOR_DOCK_MENUS_EVF3
 *   - @ref RCP_PARAM_MONITOR_FEED_EVF3
 *   - @ref RCP_PARAM_MONITOR_FLIP_MIRROR_SUPPORTED_EVF3
 *   - @ref RCP_PARAM_MONITOR_BRIGHTNESS_LCD3
 *   - @ref RCP_PARAM_MONITOR_BRIGHTNESS_EVF3
 *   - @ref RCP_PARAM_ND_INCREMENT_SIZE
 *   - @ref RCP_PARAM_ZEBRA_1_PATTERN
 *   - @ref RCP_PARAM_ZEBRA_2_PATTERN
 *   - @ref RCP_PARAM_ZEBRA_1_COLOR
 *   - @ref RCP_PARAM_ZEBRA_2_COLOR
 *   - @ref RCP_PARAM_START_USER_CAL_MANUAL_CURRENT_INT_TIME
 *   - @ref RCP_PARAM_START_USER_CAL_MANUAL_DEFAULT_INT_TIME
 *   - @ref RCP_PARAM_START_USER_CAL_AUTO
 *   - @ref RCP_PARAM_MONITOR_CONTROL_SCREEN
 *   - @ref RCP_PARAM_RCP_CLIENT_LIST
 *   - @ref RCP_PARAM_BWF_ENABLE
 *   - @ref RCP_PARAM_BWF_VALID
 *   - @ref RCP_PARAM_WSH_FOCUS_WHEEL
 *   - @ref RCP_PARAM_SIDE_MODULE_LOCK_KEYS
 *   - @ref RCP_PARAM_SIDE_MODULE_RECORD_KEY_LOCKABLE
 *   - @ref RCP_PARAM_SIDE_MODULE_NAV_KEYS_LOCKABLE
 *   - @ref RCP_PARAM_SHOW_KEY_ACTION_NOTIFICATIONS
 *   - @ref RCP_PARAM_POWER_IN_LIST
 *   - @ref RCP_PARAM_POWER_IN_PERCENT_0 - @ref RCP_PARAM_POWER_IN_PERCENT_LAST
 *   - @ref RCP_PARAM_POWER_IN_RUNTIME_0 - @ref RCP_PARAM_POWER_IN_RUNTIME_LAST
 *   - @ref RCP_PARAM_POWER_IN_VOLTAGE_0 - @ref RCP_PARAM_POWER_IN_VOLTAGE_LAST
 *   - @ref RCP_PARAM_POWER_IN_CURRENT_0 - @ref RCP_PARAM_POWER_IN_CURRENT_LAST
 *   - @ref RCP_PARAM_POWER_IN_PRESENT_0 - @ref RCP_PARAM_POWER_IN_PRESENT_LAST
 *   - @ref RCP_PARAM_POWER_OUT_LIST
 *   - @ref RCP_PARAM_POWER_OUT_ENABLE_0 - @ref RCP_PARAM_POWER_OUT_ENABLE_LAST
 *   - @ref RCP_PARAM_POWER_OUT_STATUS_0 - @ref RCP_PARAM_POWER_OUT_STATUS_LAST
 *   - @ref RCP_PARAM_POWER_OUT_RESET_0 - @ref RCP_PARAM_POWER_OUT_RESET_LAST
 *   - @ref RCP_PARAM_POWER_OUT_CURRENT_0 - @ref RCP_PARAM_POWER_OUT_CURRENT_LAST
 *   - @ref RCP_PARAM_MONITOR_LIST
 *   - @ref RCP_PARAM_SIDE_UI_NAME
 *   - @ref RCP_PARAM_SENSOR_WIDTH_PHY
 *   - @ref RCP_PARAM_SENSOR_HEIGHT_PHY
 *   - @ref RCP_PARAM_SENSOR_DIMENSIONS_PHY
 *   - @ref RCP_PARAM_FORMAT_WIDTH_PHY
 *   - @ref RCP_PARAM_FORMAT_HEIGHT_PHY
 *   - @ref RCP_PARAM_FORMAT_DIMENSIONS_PHY
 *   - @ref RCP_PARAM_FORMAT_WIDTH_PIXELS
 *   - @ref RCP_PARAM_FORMAT_HEIGHT_PIXELS
 *   - @ref RCP_PARAM_FORMAT_DIMENSIONS_PIXELS
 *   - @ref RCP_PARAM_RECORD_FORMAT_SPHERICAL
 *   - @ref RCP_PARAM_RECORD_FORMAT_ANA_1_3
 *   - @ref RCP_PARAM_RECORD_FORMAT_ANA_1_25
 *   - @ref RCP_PARAM_RECORD_FORMAT_ANA_2
 *   - @ref RCP_PARAM_RECORD_FORMAT_RESOLUTION
 *   - @ref RCP_PARAM_RECORD_FORMAT_ASPECT_RATIO
 *   - @ref RCP_PARAM_RECORD_FORMAT_ANAMORPHIC
 *   - @ref RCP_PARAM_RECORD_FORMAT_LOOKAROUND
 *   - @ref RCP_PARAM_SENSOR_NAME
 *   - @ref RCP_PARAM_SHADOW_FORMAT_WIDTH_PHY
 *   - @ref RCP_PARAM_SHADOW_FORMAT_HEIGHT_PHY
 *   - @ref RCP_PARAM_SHADOW_FORMAT_DIMENSIONS_PHY
 *   - @ref RCP_PARAM_SHADOW_FORMAT_WIDTH_PIXELS
 *   - @ref RCP_PARAM_SHADOW_FORMAT_HEIGHT_PIXELS
 *   - @ref RCP_PARAM_SHADOW_FORMAT_DIMENSIONS_PIXELS
 *   - @ref RCP_PARAM_AMBIENT_CHANNEL
 *   - @ref RCP_PARAM_KEY_MAPPING_ACTION_LIST
 *   - @ref RCP_PARAM_DIALOG_LIST
 *   - @ref RCP_PARAM_CAMERA_SCRIPT_LIST
 *   - @ref RCP_PARAM_COLOR_SCIENCE
 *   - @ref RCP_PARAM_IMAGE_PIPELINE_MODE
 *   - @ref RCP_PARAM_SUPPORT_CONTACT
 *   - @ref RCP_PARAM_CAMERA_CDL_LIST
 *   - @ref RCP_PARAM_CAMERA_CDL_APPLY
 *   - @ref RCP_PARAM_CAMERA_CDL_EXPORT_TO_MEDIA
 *   - @ref RCP_PARAM_CAMERA_CDL_EXPORT_ALL_TO_MEDIA
 *   - @ref RCP_PARAM_CAMERA_CDL_CREATE
 *   - @ref RCP_PARAM_CAMERA_CDL_DELETE
 *   - @ref RCP_PARAM_MEDIA_CDL_LIST
 *   - @ref RCP_PARAM_MEDIA_CDL_IMPORT_TO_CAMERA
 *   - @ref RCP_PARAM_MEDIA_CDL_IMPORT_ALL_TO_CAMERA
 *   - @ref RCP_PARAM_SLATE_CAMERA_COLOR
 *   - @ref RCP_PARAM_SIDE_UI_PAGE_USER_LEFT
 *   - @ref RCP_PARAM_SIDE_UI_PAGE_AUDIO_LEFT
 *   - @ref RCP_PARAM_SIDE_UI_PAGE_MONITOR_LEFT
 *   - @ref RCP_PARAM_SIDE_UI_AUTO_HOME_LEFT
 *   - @ref RCP_PARAM_SIDE_UI_AUTO_HOME_TIMEOUT_LEFT
 *   - @ref RCP_PARAM_SIDE_UI_PAGE_USER_RIGHT
 *   - @ref RCP_PARAM_SIDE_UI_PAGE_AUDIO_RIGHT
 *   - @ref RCP_PARAM_SIDE_UI_PAGE_MONITOR_RIGHT
 *   - @ref RCP_PARAM_SIDE_UI_AUTO_HOME_RIGHT
 *   - @ref RCP_PARAM_SIDE_UI_AUTO_HOME_TIMEOUT_RIGHT
 *   - @ref RCP_PARAM_MONITOR_MODE_REAR_UHDSDI1
 *   - @ref RCP_PARAM_MONITOR_MODE_REAR_UHDSDI2
 *   - @ref RCP_PARAM_MONITOR_FREQ_REAR_UHDSDI
 *   - @ref RCP_PARAM_DISPLAY_PRESET_REAR_UHDSDI
 *   - @ref RCP_PARAM_RETURN_FEED
 *   - @ref RCP_PARAM_RETURN_FEED_STATE
 *   - @ref RCP_PARAM_MONITOR_ALLOW_RETURN_FEED_LCD
 *   - @ref RCP_PARAM_MONITOR_ALLOW_RETURN_FEED_HDMI
 *   - @ref RCP_PARAM_MONITOR_ALLOW_RETURN_FEED_HDSDI
 *   - @ref RCP_PARAM_MONITOR_ALLOW_RETURN_FEED_EVF
 *   - @ref RCP_PARAM_MONITOR_ALLOW_RETURN_FEED_REAR_LCD
 *   - @ref RCP_PARAM_MONITOR_ALLOW_RETURN_FEED_REAR_HDSDI1
 *   - @ref RCP_PARAM_MONITOR_ALLOW_RETURN_FEED_REAR_HDSDI2
 *   - @ref RCP_PARAM_MONITOR_ALLOW_RETURN_FEED_REAR_EVF
 *   - @ref RCP_PARAM_MONITOR_ALLOW_RETURN_FEED_LCD3
 *   - @ref RCP_PARAM_MONITOR_ALLOW_RETURN_FEED_EVF3
 *   - @ref RCP_PARAM_OUTPUT_TRANSFORM
 *   - @ref RCP_PARAM_DISPLAY_PRESET_LCD
 *   - @ref RCP_PARAM_DISPLAY_PRESET_HDMI
 *   - @ref RCP_PARAM_DISPLAY_PRESET_HDSDI
 *   - @ref RCP_PARAM_DISPLAY_PRESET_EVF
 *   - @ref RCP_PARAM_DISPLAY_PRESET_REAR_LCD
 *   - @ref RCP_PARAM_DISPLAY_PRESET_REAR_HDSDI1
 *   - @ref RCP_PARAM_DISPLAY_PRESET_REAR_HDSDI2
 *   - @ref RCP_PARAM_DISPLAY_PRESET_REAR_EVF
 *   - @ref RCP_PARAM_DISPLAY_PRESET_LCD3
 *   - @ref RCP_PARAM_DISPLAY_PRESET_EVF3
 *   - @ref RCP_PARAM_OUTPUT_TONE_MAP
 *   - @ref RCP_PARAM_FLIP_MIRROR_FEED_0_1
 *   - @ref RCP_PARAM_MIN_FRAME_PROCESSING_MODE
 *   - @ref RCP_PARAM_MAX_FRAME_PROCESSING_MODE
 *   - @ref RCP_PARAM_MIN_FRAME_PROCESSING_FRAME_COUNT
 *   - @ref RCP_PARAM_MAX_FRAME_PROCESSING_FRAME_COUNT
 *   - @ref RCP_PARAM_ROLL_OFF
 *   - @ref RCP_PARAM_LOOKAROUND_AVAILABLE
 *   - @ref RCP_PARAM_LOG_VIEW_MODE
 *   - @ref RCP_PARAM_AUTO_FOCUS_PEAK
 *   - @ref RCP_PARAM_TIMECODE_DROP_FRAME_DISPLAY_MODE
 *   - @ref RCP_PARAM_ISO_CAL2_ENABLED
 *
 * - Added support for user metadata RCP messages
 *   - @ref rcp_user_metadata_is_supported
 *   - @ref rcp_user_metadata_register
 *   - @ref rcp_user_metadata_unregister
 *   - @ref rcp_user_metadata_send
 *   - Added new handle_user_metadata_cb callback
 *
 * - Added support for key mapping via RCP messages
 *   - @ref rcp_key_mapping_is_supported
 *   - @ref rcp_key_mapping_get_action_list
 *   - @ref rcp_key_mapping_get_mapping
 *   - @ref rcp_key_mapping_set_mapping
 *
 * - Added new menu tree node: RCP_MENU_NODE_TYPE_KEY_MAPPING_LEAF
 *
 * @section VERSION_6_42_5 Version 6.42.5
 * - Added support for compressed c_list
 *   (C_LIST_STRING_TYPE_COMPRESSED) types
 *
 * @section VERSION_6_42_4 Version 6.42.4
 * - Added parameters:
 *   - @ref RCP_PARAM_AUDIO_CH3_MODE_STATUS
 *   - @ref RCP_PARAM_AUDIO_CH4_MODE_STATUS
 *   - @ref RCP_PARAM_RECORD_PRE_FRAME_COUNT_AVAILABLE
 *   - @ref RCP_PARAM_RECORD_POST_FRAME_COUNT_AVAILABLE
 *   - @ref RCP_PARAM_RECORD_PRE_FRAME_COUNT_ACTUAL
 *   - @ref RCP_PARAM_RECORD_POST_FRAME_COUNT_ACTUAL
 *
 * @section VERSION_6_41_5 Version 6.41.5
 * - Added parameters:
 *   - @ref RCP_PARAM_WIFI_NETMASK
 *   - @ref RCP_PARAM_WIFI_GATEWAY
 *   - @ref RCP_PARAM_WIFI_DHCP_ENABLE
 *   - @ref RCP_PARAM_AUDIO_CH1_MODE_STATUS
 *   - @ref RCP_PARAM_AUDIO_CH2_MODE_STATUS
 *
 * @section VERSION_6_40_13 Version 6.40.13
 * - Added support for user RCP messages (for communicating with 3rd
 *   party modules attached to the camera)
 *   - @ref rcp_user_is_supported
 *   - @ref rcp_user_send_set
 *   - @ref rcp_user_send_get
 *   - @ref rcp_user_send_current
 * - Added @ref rcp_param_properties_t.has_display_str
 *
 * - Added parameters:
 *   - @ref RCP_PARAM_MEDIA_IS_PRESENT
 *   - @ref RCP_PARAM_LENS_IMAGE_STABILIZATION_ENABLED
 *   - @ref RCP_PARAM_LENS_CAPABILITIES
 *   - @ref RCP_PARAM_PLAYBACK_FILE_FORMAT
 *   - @ref RCP_PARAM_MONITOR_MODE_LCD3
 *   - @ref RCP_PARAM_MONITOR_OVERLAY_LCD3
 *   - @ref RCP_PARAM_MONITOR_FREQ_LCD3
 *   - @ref RCP_PARAM_MONITOR_CURVE_LCD3
 *   - @ref RCP_PARAM_MONITOR_TOOLS_LCD3
 *   - @ref RCP_PARAM_MONITOR_UI_FLIP_MIRROR_LCD3
 *   - @ref RCP_PARAM_MONITOR_VIDEO_FLIP_LCD3
 *   - @ref RCP_PARAM_MONITOR_FLIP_MIRROR_LCD3
 *   - @ref RCP_PARAM_MONITOR_FRAMED_OVERLAY_LCD3
 *   - @ref RCP_PARAM_MONITOR_DOCK_MENUS_LCD3
 *   - @ref RCP_PARAM_MONITOR_FEED_LCD3
 *   - @ref RCP_PARAM_MONITOR_FLIP_MIRROR_SUPPORTED_LCD3
 *   - @ref RCP_PARAM_MONITOR_MODE_EVF3
 *   - @ref RCP_PARAM_MONITOR_OVERLAY_EVF3
 *   - @ref RCP_PARAM_MONITOR_FREQ_EVF3
 *   - @ref RCP_PARAM_MONITOR_CURVE_EVF3
 *   - @ref RCP_PARAM_MONITOR_TOOLS_EVF3
 *   - @ref RCP_PARAM_MONITOR_UI_FLIP_MIRROR_EVF3
 *   - @ref RCP_PARAM_MONITOR_VIDEO_FLIP_EVF3
 *   - @ref RCP_PARAM_MONITOR_FLIP_MIRROR_EVF3
 *   - @ref RCP_PARAM_MONITOR_FRAMED_OVERLAY_EVF3
 *   - @ref RCP_PARAM_MONITOR_DOCK_MENUS_EVF3
 *   - @ref RCP_PARAM_MONITOR_FEED_EVF3
 *   - @ref RCP_PARAM_MONITOR_FLIP_MIRROR_SUPPORTED_EVF3
 *   - @ref RCP_PARAM_MONITOR_BRIGHTNESS_LCD3
 *   - @ref RCP_PARAM_MONITOR_BRIGHTNESS_EVF3
 *   - @ref RCP_PARAM_RECORD_VIDEO_MXF_CODEC
 *   - @ref RCP_PARAM_MIN_RECORD_VIDEO_MXF_CODEC
 *   - @ref RCP_PARAM_RECORD_VIDEO_MXF_CODEC_RESOLUTION
 *   - @ref RCP_PARAM_RECORD_MXF_STATE
 *   - @ref RCP_PARAM_RECORD_MXF_STATE_DETAILED
 *   - @ref RCP_PARAM_MXF_WIDTH
 *   - @ref RCP_PARAM_MXF_HEIGHT
 *   - @ref RCP_PARAM_MXF_DIMENSION
 *   - @ref RCP_PARAM_RECORD_VIDEO_MXF_COMPRESSION_ID
 *   - @ref RCP_PARAM_PLAYBACK_FILE_FORMAT_TYPE
 *   - @ref RCP_PARAM_OLPF_THIRD_PARTY_NAME
 *   - @ref RCP_PARAM_OLPF_THIRD_PARTY_EMULATED_TYPE
 *   - @ref RCP_PARAM_LENS_META_NAME
 *   - @ref RCP_PARAM_LENS_META_SERIAL
 *   - @ref RCP_PARAM_LENS_META_OWNER
 *   - @ref RCP_PARAM_LENS_META_MANUFACTURER
 *   - @ref RCP_PARAM_LENS_META_FLEN_MIN
 *   - @ref RCP_PARAM_LENS_META_FLEN_MAX
 *   - @ref RCP_PARAM_RECORD_R3D_METADATA_CURVE
 *
 * @section VERSION_6_32_10 Version 6.32.10
 * - Fix potential bad read from memory when parsing histogram data
 * - Frame limit is no longer available for any camera while in network
 * mode.
 * - Disable various look controls based on RAW and ACES modes
 *
 * @section VERSION_6_32_7 Version 6.32.7
 * - Fixed typos/wording of comments
 * - Fixed labels
 * - Fixed typo (from RCP_API_ENABLE_CACHEING to RCP_API_ENABLE_CACHING)
 * - Fixed bug where 'is_hw_supported_valid' was not cleared when connecting to a camera
 * - Fixed @ref RCP_PARAM_HDR_FACTOR not updating on boot
 * - Fixed bug in handling hardware capabilities for older firmware
 *
 * @section VERSION_6_32_4 Version 6.32.4
 * - Added parameters:
 *   - @ref RCP_PARAM_SERIAL_2_PROTOCOL
 *   - @ref RCP_PARAM_POWER_OUT_REAR_AUX_ENABLE
 *   - @ref RCP_PARAM_POWER_OUT_REAR_AUX_STATUS
 *   - @ref RCP_PARAM_POWER_OUT_REAR_AUX_RESET
 *   - @ref RCP_PARAM_POWER_OUT_REAR_AUX_CURRENT
 *   - @ref RCP_PARAM_POWER_OUT_TIMECODE_ENABLE
 *   - @ref RCP_PARAM_POWER_OUT_TIMECODE_STATUS
 *   - @ref RCP_PARAM_POWER_OUT_TIMECODE_RESET
 *
 * @section VERSION_6_31_6 Version 6.31.6
 * - Added parameters:
 *   - @ref RCP_PARAM_ZEBRA_1_MODE
 *   - @ref RCP_PARAM_ZEBRA_1_STOPS_LOW
 *   - @ref RCP_PARAM_ZEBRA_1_STOPS_HIGH
 *   - @ref RCP_PARAM_ZEBRA_2_MODE
 *   - @ref RCP_PARAM_ZEBRA_2_STOPS_LOW
 *   - @ref RCP_PARAM_ZEBRA_2_STOPS_HIGH
 *
 * @section VERSION_6_30_16 Version 6.30.16
 * - Added file transfer API.  This allows the transfer of
 *   presets, overlays, LUTs, thumbnails, log files, etc. to and from
 *   the camera.
 *
 * - Added parameters:
 *   - @ref RCP_PARAM_MEDIA_FORMAT_FILE_SYSTEM
 *   - @ref RCP_PARAM_WIPE_CAMERA
 *   - @ref RCP_PARAM_PROXY_ENCODE_FRAMERATE
 *   - @ref RCP_PARAM_CAMERA_CAL_LIST
 *   - @ref RCP_PARAM_CAMERA_CAL_APPLY
 *   - @ref RCP_PARAM_CAMERA_CAL_EXPORT_TO_MEDIA
 *   - @ref RCP_PARAM_CAMERA_CAL_EXPORT_ALL_TO_MEDIA
 *   - @ref RCP_PARAM_CAMERA_CAL_DELETE
 *   - @ref RCP_PARAM_MEDIA_CAL_LIST
 *   - @ref RCP_PARAM_MEDIA_CAL_APPLY
 *   - @ref RCP_PARAM_MEDIA_CAL_IMPORT_TO_CAMERA
 *   - @ref RCP_PARAM_MEDIA_CAL_IMPORT_ALL_TO_CAMERA
 *   - @ref RCP_PARAM_PRORES_WIDTH
 *   - @ref RCP_PARAM_PRORES_HEIGHT
 *   - @ref RCP_PARAM_PRORES_DIMENSION
 *   - @ref RCP_PARAM_OPEN_GATE_MODE
 *   - @ref RCP_PARAM_OPEN_GATE_STATE
 *   - @ref RCP_PARAM_RECORD_REDCODE_RAW_STATE_DETAILED
 *   - @ref RCP_PARAM_RECORD_QUICKTIME_STATE_DETAILED
 *   - @ref RCP_PARAM_WIFI_SCAN_SELECT
 *
 * @section VERSION_6_21_8 Version 6.21.8
 * - Bug fixes
 *
 * @section VERSION_6_21_6 Version 6.21.6
 * - Added @ref extended_clipinfo_t.has_r3d and @ref extended_clipinfo_t.has_qt
 *
 * @section VERSION_6_21_5 Version 6.21.5
 * - Fixed string for RCP_PARAM_PLAYBACK_METADATA_ISO
 *
 * @section VERSION_6_21_4 Version 6.21.4
 * - Added support for REC. 709
 *
 * @section VERSION_6_21_3 Version 6.21.3
 * - RCP_PARAM_RECORD_LIMIT_ENABLE and RCP_PARAM_RECORD_LIMIT_FRAMES
 *   are now enabled when RCP_PARAM_PRIMARY_STORAGE == PRIMARY_STORAGE_NETWORK.
 * - Added more descriptive ProRes labels to RCP_PARAM_QUALITY
 *
 * @section VERSION_6_20_23 Version 6.20.23
 * - Added new required functions to be implemented by client code:
 *   - rcp_rand
 *   - rcp_timestamp
 * - Added @ref rcp_cur_str_edit_info_t.min_len and @ref rcp_cur_str_edit_info_t.is_password
 * - Added @ref rcp_menu_node_info_t.is_supported and @ref rcp_menu_node_info_t.is_supported_valid
 * - Added @ref rcp_cur_menu_node_status_cb_data_t.is_supported and @ref rcp_cur_menu_node_status_cb_data_t.is_supported_valid
 *
 * - Added utility function @ref rcp_menu_get_multi_action_list_leaf_flags
 * - Added functions:
 *   - @ref rcp_get_clip_list
 *
 * - Added parameters:
 *   - @ref RCP_PARAM_FOCUS_STATE_DETAILED
 *   - @ref RCP_PARAM_IRIS_STATE_DETAILED
 *   - @ref RCP_PARAM_ZOOM_STATE_DETAILED
 *   - @ref RCP_PARAM_RECORD_FILE_FORMAT
 *   - @ref RCP_PARAM_RECORD_VIDEO_CODEC
 *   - @ref RCP_PARAM_HARDWARE_CAPABILITIES
 *   - @ref RCP_PARAM_AUDIO_CH1_MUTE
 *   - @ref RCP_PARAM_AUDIO_CH2_MUTE
 *   - @ref RCP_PARAM_AUDIO_MIX_CH12_VOL1
 *   - @ref RCP_PARAM_AUDIO_MIX_CH12_PAN1
 *   - @ref RCP_PARAM_AUDIO_MIX_CH12_VOL2
 *   - @ref RCP_PARAM_AUDIO_MIX_CH12_PAN2
 *   - @ref RCP_PARAM_AUDIO_MIX_CH12_VOL3
 *   - @ref RCP_PARAM_AUDIO_MIX_CH12_PAN3
 *   - @ref RCP_PARAM_AUDIO_MIX_CH12_VOL4
 *   - @ref RCP_PARAM_AUDIO_MIX_CH12_PAN4
 *   - @ref RCP_PARAM_AUDIO_MIX_CH34_VOL1
 *   - @ref RCP_PARAM_AUDIO_MIX_CH34_PAN1
 *   - @ref RCP_PARAM_AUDIO_MIX_CH34_VOL2
 *   - @ref RCP_PARAM_AUDIO_MIX_CH34_PAN2
 *   - @ref RCP_PARAM_AUDIO_MIX_CH34_VOL3
 *   - @ref RCP_PARAM_AUDIO_MIX_CH34_PAN3
 *   - @ref RCP_PARAM_AUDIO_MIX_CH34_VOL4
 *   - @ref RCP_PARAM_AUDIO_MIX_CH34_PAN4
 *   - @ref RCP_PARAM_AUDIO_MIX_MON_VOL1
 *   - @ref RCP_PARAM_AUDIO_MIX_MON_PAN1
 *   - @ref RCP_PARAM_AUDIO_MIX_MON_VOL2
 *   - @ref RCP_PARAM_AUDIO_MIX_MON_PAN2
 *   - @ref RCP_PARAM_AUDIO_MIX_MON_VOL3
 *   - @ref RCP_PARAM_AUDIO_MIX_MON_PAN3
 *   - @ref RCP_PARAM_AUDIO_MIX_MON_VOL4
 *   - @ref RCP_PARAM_AUDIO_MIX_MON_PAN4
 *   - @ref RCP_PARAM_MONITOR_LCD_EVF_2_HDMI_MUX
 *   - @ref RCP_PARAM_WIFI_MODE
 *   - @ref RCP_PARAM_WIFI_AD_HOC_ENCRYPTION
 *   - @ref RCP_PARAM_WIFI_AD_HOC_PASSPHRASE
 *   - @ref RCP_PARAM_WIFI_AD_HOC_SSID
 *   - @ref RCP_PARAM_WIFI_CHANNEL
 *   - @ref RCP_PARAM_WIFI_INFRASTRUCTURE_ENCRYPTION
 *   - @ref RCP_PARAM_WIFI_INFRASTRUCTURE_PASSPHRASE
 *   - @ref RCP_PARAM_WIFI_INFRASTRUCTURE_SSID
 *   - @ref RCP_PARAM_WIFI_SIGNAL
 *   - @ref RCP_PARAM_WIFI_CONNECT
 *   - @ref RCP_PARAM_WIFI_SCAN
 *   - @ref RCP_PARAM_WIFI_SCAN_RESULTS
 *   - @ref RCP_PARAM_WIFI_IP_ADDRESS
 *   - @ref RCP_PARAM_MODULE_CAPABILITIES
 *   - @ref RCP_PARAM_POWER_OUT_PRO_IO_GPIO_ENABLE
 *   - @ref RCP_PARAM_POWER_OUT_PRO_IO_GPIO_STATUS
 *   - @ref RCP_PARAM_POWER_OUT_PRO_IO_GPIO_RESET
 *   - @ref RCP_PARAM_POWER_OUT_PRO_IO_PWR_ENABLE
 *   - @ref RCP_PARAM_POWER_OUT_PRO_IO_PWR_STATUS
 *   - @ref RCP_PARAM_POWER_OUT_PRO_IO_PWR_RESET
 *   - @ref RCP_PARAM_POWER_OUT_PRO_IO_AUX_ENABLE
 *   - @ref RCP_PARAM_POWER_OUT_PLUS_ONE_PWR_ENABLE
 *   - @ref RCP_PARAM_POWER_OUT_PLUS_ONE_PWR_STATUS
 *   - @ref RCP_PARAM_POWER_OUT_PLUS_ONE_PWR_RESET
 *   - @ref RCP_PARAM_POWER_OUT_BAT_AUX_ENABLE
 *   - @ref RCP_PARAM_POWER_OUT_BAT_AUX_STATUS
 *   - @ref RCP_PARAM_POWER_OUT_BAT_AUX_CURRENT
 *   - @ref RCP_PARAM_POWER_OUT_BAT_AUX_RESET
 *   - @ref RCP_PARAM_POWER_OUT_JETPACK_USB_ENABLE
 *   - @ref RCP_PARAM_POWER_OUT_JETPACK_USB_STATUS
 *   - @ref RCP_PARAM_POWER_OUT_JETPACK_USB_RESET
 *   - @ref RCP_PARAM_POWER_SAVE_STATE
 *   - @ref RCP_PARAM_QUALITY
 *   - @ref RCP_PARAM_CUSTOM_SENSOR_FRAME_RATE
 *   - @ref RCP_PARAM_MASTER_SENSOR_FRAME_RATE
 *   - @ref RCP_PARAM_CUSTOM_RECORD_FORMAT
 *   - @ref RCP_PARAM_MASTER_RECORD_FORMAT
 *   - @ref RCP_PARAM_CUSTOM_SHUTTER_ANGLE
 *   - @ref RCP_PARAM_MASTER_SHUTTER_ANGLE
 *   - @ref RCP_PARAM_CUSTOM_INTEGRATION_TIME
 *   - @ref RCP_PARAM_MASTER_INTEGRATION_TIME
 *   - @ref RCP_PARAM_CUSTOM_ISO
 *   - @ref RCP_PARAM_MASTER_ISO
 *   - @ref RCP_PARAM_CUSTOM_REDCODE
 *   - @ref RCP_PARAM_MASTER_REDCODE
 *   - @ref RCP_PARAM_CUSTOM_COLOR_TEMPERATURE
 *   - @ref RCP_PARAM_MASTER_COLOR_TEMPERATURE
 *   - @ref RCP_PARAM_USE_CUSTOM_FORMAT
 *   - @ref RCP_PARAM_USE_CUSTOM_FRAME_RATE
 *   - @ref RCP_PARAM_USE_CUSTOM_SHUTTER_ANGLE
 *   - @ref RCP_PARAM_USE_CUSTOM_INTEGRATION_TIME
 *   - @ref RCP_PARAM_USE_CUSTOM_ISO
 *   - @ref RCP_PARAM_USE_CUSTOM_REDCODE
 *   - @ref RCP_PARAM_USE_CUSTOM_COLOR_TEMPERATURE
 *   - @ref RCP_PARAM_MONITOR_FEED_LCD
 *   - @ref RCP_PARAM_MONITOR_FEED_HDMI
 *   - @ref RCP_PARAM_MONITOR_FEED_HDSDI
 *   - @ref RCP_PARAM_MONITOR_FEED_EVF
 *   - @ref RCP_PARAM_MONITOR_FEED_REAR_LCD
 *   - @ref RCP_PARAM_MONITOR_FEED_REAR_HDSDI1
 *   - @ref RCP_PARAM_MONITOR_FEED_REAR_HDSDI2
 *   - @ref RCP_PARAM_MONITOR_FEED_REAR_EVF
 *   - @ref RCP_PARAM_VIDEO_SOURCE
 *   - @ref RCP_PARAM_LUT_FEED_1
 *   - @ref RCP_PARAM_FLIP_MIRROR_FEED_0
 *   - @ref RCP_PARAM_FLIP_MIRROR_FEED_1
 *   - @ref RCP_PARAM_SSD_TALLY_LIGHT
 *   - @ref RCP_PARAM_OVERDRIVE_FRAME_RATE
 *   - @ref RCP_PARAM_PRE_RECORD
 *   - @ref RCP_PARAM_CALIBRATION_ENTRY
 *   - @ref RCP_PARAM_RECORD_VIDEO_CODEC_FEED
 *   - @ref RCP_PARAM_RECORD_VIDEO_CODEC_RESOLUTION
 *   - @ref RCP_PARAM_RECORD_REDCODE_RAW_STATE
 *   - @ref RCP_PARAM_RECORD_QUICKTIME_STATE
 *   - @ref RCP_PARAM_SENSOR_SCAN_DIRECTION
 *
 * @section VERSION_6_10_28 Version 6.10.28
 *   - Minor bug fixes
 *   - Fix numerous parameter dependencies
 *
 * @section VERSION_6_10_25 Version 6.10.25
 * - Added status for menu nodes:
 *   - @ref rcp_menu_node_status_is_supported
 *   - @ref rcp_menu_get_node_status
 * - Added parameters:
 *   - @ref RCP_PARAM_CAMERA_LUT_LIST
 *   - @ref RCP_PARAM_CAMERA_LUT_EXPORT_TO_MEDIA
 *   - @ref RCP_PARAM_CAMERA_LUT_EXPORT_ALL_TO_MEDIA
 *   - @ref RCP_PARAM_CAMERA_LUT_DELETE
 *   - @ref RCP_PARAM_MEDIA_LUT_LIST
 *   - @ref RCP_PARAM_MEDIA_LUT_IMPORT_TO_CAMERA
 *   - @ref RCP_PARAM_MEDIA_LUT_IMPORT_ALL_TO_CAMERA
 *   - @ref RCP_PARAM_LUT_CH_0
 *   - @ref RCP_PARAM_LUT_CH_1
 *   - @ref RCP_PARAM_LUT_CH_2
 *   - @ref RCP_PARAM_LUT_CH_3
 *   - @ref RCP_PARAM_MONITOR_FLIP_MIRROR_SUPPORTED_BRAIN_EVF
 *   - @ref RCP_PARAM_MONITOR_FLIP_MIRROR_SUPPORTED_REAR_EVF
 *   - @ref RCP_PARAM_MONITOR_FLIP_MIRROR_BRAIN_EVF
 *   - @ref RCP_PARAM_MONITOR_FLIP_MIRROR_REAR_EVF
 *   - @ref RCP_PARAM_AUDIO_CH12_OUTPUT_NAME
 *   - @ref RCP_PARAM_AUDIO_CH34_OUTPUT_NAME
 *   - @ref RCP_PARAM_AUDIO_CH56_OUTPUT_NAME
 *   - @ref RCP_PARAM_AE_EXPOSURE_PRIORITY
 *   - @ref RCP_PARAM_REMOTE_CONTROL_PANEL_ENABLE
 *   - @ref RCP_PARAM_REMOTE_CONTROL_PANEL_ADDRESS
 *   - @ref RCP_PARAM_REMOTE_CONTROL_PANEL_STATUS
 *   - @ref RCP_PARAM_TETHERED_SERVER_ADDRESS
 *   - @ref RCP_PARAM_TETHERED_SERVER_STATE
 *   - @ref RCP_PARAM_OUTPUT_SHARPNESS
 *   - @ref RCP_PARAM_SLATE_SHOT
 *   - @ref RCP_PARAM_CALIBRATION_STATUS_TEMPERATURE
 *   - @ref RCP_PARAM_CALIBRATION_STATUS_EXPOSURE
 *   - @ref RCP_PARAM_WIFI_STATE
 *   - @ref RCP_PARAM_TIMECODE_LTC_OUT_ENABLE
 *   - @ref RCP_PARAM_FOCUS_STATE
 *   - @ref RCP_PARAM_IRIS_STATE
 *   - @ref RCP_PARAM_ZOOM_STATE
 *   - @ref RCP_PARAM_REDMOTE_STATE
 *   - @ref RCP_PARAM_CAMERA_CAPTURE_MODE
 *   - @ref RCP_PARAM_PRIMARY_STORAGE
 *   - @ref RCP_PARAM_USER_MATRIX_RR
 *   - @ref RCP_PARAM_USER_MATRIX_RG
 *   - @ref RCP_PARAM_USER_MATRIX_RB
 *   - @ref RCP_PARAM_USER_MATRIX_GR
 *   - @ref RCP_PARAM_USER_MATRIX_GG
 *   - @ref RCP_PARAM_USER_MATRIX_GB
 *   - @ref RCP_PARAM_USER_MATRIX_BR
 *   - @ref RCP_PARAM_USER_MATRIX_BG
 *   - @ref RCP_PARAM_USER_MATRIX_BB
 *   - @ref RCP_PARAM_FALSE_COLOR_MODE_STATE
 *   - @ref RCP_PARAM_RIG_STATE_DETAILED
 *   - @ref RCP_PARAM_GIGE_STATE_DETAILED
 *   - @ref RCP_PARAM_SYNC_STATE_DETAILED
 *   - @ref RCP_PARAM_GENLOCK_STATE_DETAILED
 *   - @ref RCP_PARAM_TIMECODE_STATE_DETAILED
 *   - @ref RCP_PARAM_WIFI_STATE_DETAILED
 *   - @ref RCP_PARAM_MEDIA_MODEL_NUMBER
 *   - @ref RCP_PARAM_MEDIA_ACTIVE_MEDIA
 *   - @ref RCP_PARAM_SLATE_AUTO_HEAD_FRAMES
 *   - @ref RCP_PARAM_SLATE_AUTO_TAIL_FRAMES
 *   - @ref RCP_PARAM_GIO_SCOPE_PRIMARY_COLORS
 *   - @ref RCP_PARAM_GIO_SCOPE_SECONDARY_COLORS
 *   - @ref RCP_PARAM_GIO_SCOPE_ZONES
 *   - @ref RCP_PARAM_UI_GESTURE_PINCH_MAGNIFY
 *   - @ref RCP_PARAM_UI_GESTURE_DOUBLE_TAP_RIGHT_REC
 *   - @ref RCP_PARAM_UI_GESTURE_DOUBLE_TAP_LEFT_AF
 *   - @ref RCP_PARAM_UI_LOCK_TOUCHSCREEN
 *   - @ref RCP_PARAM_UI_SMALL_DIALOGS_ON_9_INCH
 *   - @ref RCP_PARAM_PLAYBACK_CLIP_DATE
 *   - @ref RCP_PARAM_PLAYBACK_CLIP_TIME
 *   - @ref RCP_PARAM_PLAYBACK_CLIP_DATE_TIME
 *   - @ref RCP_PARAM_PLAYBACK_METADATA_FOCAL_LENGTH
 *   - @ref RCP_PARAM_PLAYBACK_METADATA_ISO
 *   - @ref RCP_PARAM_PLAYBACK_METADATA_COLOR_TEMPERATURE
 *   - @ref RCP_PARAM_PLAYBACK_METADATA_TINT
 *   - @ref RCP_PARAM_CAMERA_FIRMWARE_SVN_REVISION
 *   - @ref RCP_PARAM_CAMERA_RUNTIME
 *   - @ref RCP_PARAM_RED_CURVE_SHADOW_X
 *   - @ref RCP_PARAM_RED_CURVE_SHADOW_Y
 *   - @ref RCP_PARAM_RED_CURVE_DARK_X
 *   - @ref RCP_PARAM_RED_CURVE_DARK_Y
 *   - @ref RCP_PARAM_RED_CURVE_MIDTONE_X
 *   - @ref RCP_PARAM_RED_CURVE_MIDTONE_Y
 *   - @ref RCP_PARAM_RED_CURVE_LIGHT_X
 *   - @ref RCP_PARAM_RED_CURVE_LIGHT_Y
 *   - @ref RCP_PARAM_RED_CURVE_HIGHLIGHT_X
 *   - @ref RCP_PARAM_RED_CURVE_HIGHLIGHT_Y
 *   - @ref RCP_PARAM_GREEN_CURVE_SHADOW_X
 *   - @ref RCP_PARAM_GREEN_CURVE_SHADOW_Y
 *   - @ref RCP_PARAM_GREEN_CURVE_DARK_X
 *   - @ref RCP_PARAM_GREEN_CURVE_DARK_Y
 *   - @ref RCP_PARAM_GREEN_CURVE_MIDTONE_X
 *   - @ref RCP_PARAM_GREEN_CURVE_MIDTONE_Y
 *   - @ref RCP_PARAM_GREEN_CURVE_LIGHT_X
 *   - @ref RCP_PARAM_GREEN_CURVE_LIGHT_Y
 *   - @ref RCP_PARAM_GREEN_CURVE_HIGHLIGHT_X
 *   - @ref RCP_PARAM_GREEN_CURVE_HIGHLIGHT_Y
 *   - @ref RCP_PARAM_BLUE_CURVE_SHADOW_X
 *   - @ref RCP_PARAM_BLUE_CURVE_SHADOW_Y
 *   - @ref RCP_PARAM_BLUE_CURVE_DARK_X
 *   - @ref RCP_PARAM_BLUE_CURVE_DARK_Y
 *   - @ref RCP_PARAM_BLUE_CURVE_MIDTONE_X
 *   - @ref RCP_PARAM_BLUE_CURVE_MIDTONE_Y
 *   - @ref RCP_PARAM_BLUE_CURVE_LIGHT_X
 *   - @ref RCP_PARAM_BLUE_CURVE_LIGHT_Y
 *   - @ref RCP_PARAM_BLUE_CURVE_HIGHLIGHT_X
 *   - @ref RCP_PARAM_BLUE_CURVE_HIGHLIGHT_Y
 *   - @ref RCP_PARAM_LUMA_CURVE_SHADOW_X
 *   - @ref RCP_PARAM_LUMA_CURVE_SHADOW_Y
 *   - @ref RCP_PARAM_LUMA_CURVE_DARK_X
 *   - @ref RCP_PARAM_LUMA_CURVE_DARK_Y
 *   - @ref RCP_PARAM_LUMA_CURVE_MIDTONE_X
 *   - @ref RCP_PARAM_LUMA_CURVE_MIDTONE_Y
 *   - @ref RCP_PARAM_LUMA_CURVE_LIGHT_X
 *   - @ref RCP_PARAM_LUMA_CURVE_LIGHT_Y
 *   - @ref RCP_PARAM_LUMA_CURVE_HIGHLIGHT_X
 *   - @ref RCP_PARAM_LUMA_CURVE_HIGHLIGHT_Y
 *   - @ref RCP_PARAM_MEDIA_IS_ATTACHED
 *   - @ref RCP_PARAM_MEDIA_SERIAL_NUMBER
 *   - @ref RCP_PARAM_MEDIA_FIRMWARE_VERSION
 *   - @ref RCP_PARAM_MEDIA_SIZE
 *   - @ref RCP_PARAM_MEDIA_SIZE_AVIALABLE
 *   - @ref RCP_PARAM_OLPF_TYPE
 *   - @ref RCP_PARAM_MEDIA_DOWNLOAD_FIRMWARE
 *   - @ref RCP_PARAM_RESET_FACTORY_DEFAULTS
 *   - @ref RCP_PARAM_REDISCOVER_HARDWARE
 *   - @ref RCP_PARAM_RAMP_A_FPS
 *   - @ref RCP_PARAM_RAMP_A_DURATION
 *   - @ref RCP_PARAM_RAMP_B_FPS
 *   - @ref RCP_PARAM_RAMP_B_DURATION
 *   - @ref RCP_PARAM_RAMP_C_FPS
 *   - @ref RCP_PARAM_RAMP_C_DURATION
 *   - @ref RCP_PARAM_RAMP_D_FPS
 *   - @ref RCP_PARAM_RAMP_D_DURATION
 *   - @ref RCP_PARAM_RAMP_RESET_DURATION
 *   - @ref RCP_PARAM_CAMERA_PRESET_LIST
 *   - @ref RCP_PARAM_CAMERA_PRESET_APPLY
 *   - @ref RCP_PARAM_CAMERA_PRESET_EXPORT_TO_MEDIA
 *   - @ref RCP_PARAM_CAMERA_PRESET_EXPORT_ALL_TO_MEDIA
 *   - @ref RCP_PARAM_CAMERA_PRESET_UPDATE
 *   - @ref RCP_PARAM_CAMERA_PRESET_DELETE
 *   - @ref RCP_PARAM_MEDIA_PRESET_LIST
 *   - @ref RCP_PARAM_MEDIA_PRESET_IMPORT_TO_CAMERA
 *   - @ref RCP_PARAM_MEDIA_PRESET_IMPORT_ALL_TO_CAMERA
 *   - @ref RCP_PARAM_CAMERA_LOOK_LIST
 *   - @ref RCP_PARAM_CAMERA_LOOK_APPLY
 *   - @ref RCP_PARAM_CAMERA_LOOK_EXPORT_TO_MEDIA
 *   - @ref RCP_PARAM_CAMERA_LOOK_EXPORT_ALL_TO_MEDIA
 *   - @ref RCP_PARAM_CAMERA_LOOK_DELETE
 *   - @ref RCP_PARAM_MEDIA_LOOK_LIST
 *   - @ref RCP_PARAM_MEDIA_LOOK_IMPORT_TO_CAMERA
 *   - @ref RCP_PARAM_MEDIA_LOOK_IMPORT_ALL_TO_CAMERA
 *   - @ref RCP_PARAM_UPGRADE_CAMERA_FIRMWARE
 *   - @ref RCP_PARAM_UPGRADE_REDMOTE_FIRMWARE
 *   - @ref RCP_PARAM_AF_RACK_SPEED
 *   - @ref RCP_PARAM_AF_RACK_NUMBER_OF_POINTS
 *   - @ref RCP_PARAM_AF_RACK_TO_POINT
 *   - @ref RCP_PARAM_CAMERA_OVERLAY_LIST
 *   - @ref RCP_PARAM_CAMERA_OVERLAY_DELETE
 *   - @ref RCP_PARAM_CAMERA_OVERLAY_EXPORT_TO_MEDIA
 *   - @ref RCP_PARAM_CAMERA_OVERLAY_EXPORT_ALL_TO_MEDIA
 *   - @ref RCP_PARAM_MEDIA_OVERLAY_LIST
 *   - @ref RCP_PARAM_MEDIA_OVERLAY_IMPORT_TO_CAMERA
 *   - @ref RCP_PARAM_MEDIA_OVERLAY_IMPORT_ALL_TO_CAMERA
 *   - @ref RCP_PARAM_CURRENT_CALIBRATION_TEMPERATURE
 *   - @ref RCP_PARAM_CURRENT_CALIBRATION_INTEGRATION_TIME
 *   - @ref RCP_PARAM_REDMOTE_WIRELESS_ENABLE
 *   - @ref RCP_PARAM_REDMOTE_WIRELESS_CHANNEL
 *   - @ref RCP_PARAM_REDMOTE_DISCOVERED_LIST
 *   - @ref RCP_PARAM_REDMOTE_PAIRED_LIST
 *   - @ref RCP_PARAM_REDMOTE_SCAN
 *   - @ref RCP_PARAM_REDMOTE_PAIR
 *   - @ref RCP_PARAM_REDMOTE_UNPAIR
 *   - @ref RCP_PARAM_REDMOTE_CAMERA_MAC
 *   - @ref RCP_PARAM_REDMOTE_ATTACHED_MAC
 *   - @ref RCP_PARAM_AUTO_PRESET_STARTUP
 *   - @ref RCP_PARAM_AUTO_PRESET_MOTION
 *   - @ref RCP_PARAM_AUTO_PRESET_MOTION_AUTO_UPDATE
 *   - @ref RCP_PARAM_AUTO_PRESET_STILLS
 *   - @ref RCP_PARAM_AUTO_PRESET_STILLS_AUTO_UPDATE
 *   - @ref RCP_PARAM_AUTO_PRESET_PLAYBACK
 *   - @ref RCP_PARAM_AUTO_PRESET_PLAYBACK_AUTO_UPDATE
 *   - @ref RCP_PARAM_TETHERING_SUPPORTED
 *   - @ref RCP_PARAM_TETHERING_SUPPORTED_ON_THIS_INTERFACE
 *   - @ref RCP_PARAM_TETHERED_SERVER_SPACE_TOTAL
 *   - @ref RCP_PARAM_TETHERED_SERVER_SPACE_REMAINING
 *   - @ref RCP_PARAM_TETHERED_SERVER_REEL_NO
 *   - @ref RCP_PARAM_TETHERED_SERVER_CLIP_NO
 *   - @ref RCP_PARAM_GENLOCK_OFFSET_HDSDI
 *   - @ref RCP_PARAM_GENLOCK_OFFSET_REDCAST
 *   - @ref RCP_PARAM_AF_RACK_POINT_SELECT
 *   - @ref RCP_PARAM_AF_WINDOW_POS_X
 *   - @ref RCP_PARAM_AF_WINDOW_POS_Y
 *   - @ref RCP_PARAM_AF_WINDOW_POS_MOVE_COMPLETE
 * - Added @ref RECORD_STATE_ENCODING
 * - Added dependencies between audio CH1/2 source CH3/4 source
 * - Added dependencies between audio CH1/2/3/4 source and its mode
 * - Added dependency between RCP_PARAM_FOCUS_CONTROL and RCP_PARAM_AF_MODE
 * - Added dependency between RCP_PARAM_CALIBRATION_STATUS and RCP_PARAM_CALIBRATION_STATUS_TEMPERATURE
 * - Added dependency between RCP_PARAM_CALIBRATION_STATUS and RCP_PARAM_CALIBRATION_STATUS_EXPOSURE
 * - Added dependency between RCP_PARAM_PROJECT_FRAME_RATE and RCP_PARAM_AUDIO_VU_DATA
 * - Added dependency between RCP_PARAM_RECORD_MODE and RCP_PARAM_AUDIO_VU_DATA
 * - Added dependency between RCP_PARAM_VARISPEED_MODE and RCP_PARAM_AUDIO_VU_DATA
 * - Added dependency between RCP_PARAM_AUDIO_CH12_STATE and RCP_PARAM_AUDIO_VU_DATA
 * - Added dependency between RCP_PARAM_AUDIO_CH34_STATE and RCP_PARAM_AUDIO_VU_DATA
 *
 * - Added more audio information to @ref rcp_cur_audio_vu_cb_data_t
 * - Modified _rcp_process_audio_vu_packet to enable dependencies with other parameters
 *
 * - Added abbreviated display strings for parameters:
 *   - @ref RCP_PARAM_HDR_MODE
 *   - @ref RCP_PARAM_TIMECODE_STATE
 *   - @ref RCP_PARAM_MAGNIFY_STATE
 *   - @ref RCP_PARAM_FALSE_COLOR_MODE
 *   - @ref RCP_PARAM_GIGE_STATE
 *   - @ref RCP_PARAM_RIG_STATE
 *   - @ref RCP_PARAM_SYNC_STATE
 *   - @ref RCP_PARAM_GENLOCK_STATE
 *
 * - Added functions to set a parameter's value with a relative offset
 *  from current value (or index in list):
 *   - @ref rcp_set_int_relative
 *   - @ref rcp_set_uint_relative
 *   - @ref rcp_set_list_relative
 *
 * - Added the following flags:
 *   - @ref rcp_param_properties_t.has_set_int_relative
 *   - @ref rcp_param_properties_t.has_set_uint_relative
 *   - @ref rcp_param_properties_t.has_set_list_relative
 *
 * - The following parameters are considered deprecated (and may be
 *  removed in future released):
 *   - @ref RCP_PARAM_LIST_SELECT_ISO (use @ref rcp_set_list_relative with
 *    @ref RCP_PARAM_ISO instead)
 *   - @ref  RCP_PARAM_LIST_SELECT_SHUTTER (use @ref rcp_set_list_relative with
 *    @ref RCP_PARAM_EXPOSURE_DISPLAY instead)
 *
 * - Added new error @ref RCP_ERROR_INTERNAL, see @ref rcp_error_t
 *
 * @section VERSION_6_0_45 Version 6.0.45
 * - Modified RCP_PARAM_FALSE_COLOR_MODE so that update_list_only_on_close flag is now false
 * - Fixed status of timecode settings so they are disabled during record
 * - Fixed bug that would invalidate a cached list if it was empty
 *
 * @section VERSION_6_0_36 Version 6.0.36
 *
 * - Added dependencies between audio CH1/2 source CH3/4 source
 * - Added dependencies between audio CH1/2/3/4 source and its mode
 * - Fixed histogram label when ACES Proxy is enabled.
 * - Fixed status of @ref RCP_PARAM_RECORD_HDR_MODE and @ref
 * RCP_PARAM_HDR_FACTOR so they are disabled while in record.
 * - Fixed name of RCP_PARAM_RTC_DATE_TIME
 *
 * @section VERSION_6_0_29 Version 6.0.29
 *
 * Version 6.0.x of the API is a major update to the API.  It provides
 * many more parameters that can be controlled as well as major new
 * features such as parameter status, notification support, and menu
 * tree support.
 *
 * Parameter status should be used to disable controls dynamically
 * based on other camera settings.  The application does not need to
 * know the logic of when a parameter should be disabled as the API
 * will push the status to the application when appropriate.
 *
 * Notifications can now be displayed on the application and provide
 * feedback to the camera.  Note: only a subset of all notifications
 * that are generated by the camera are pushed to external controllers.
 *
 * Menu tree support allows a generic way for the application to show
 * the menu tree of the connected camera.  It works by providing a list
 * of children under a specified node (starting at a ROOT node).  Each
 * entry in the list provides the information required to show the
 * final "leaf" node such as the parameter ID and leaf type (list, text entry,
 * etc).
 *
 * All Changes:
 * - Refactored source code into multiple source files
 * - Added rcp_api_config.h to allow customization of API
 * - Added over 230 new parameters (see @ref rcp_param_t for details)
 * - Added support for Notifications
 *   - @ref rcp_notification_get
 *   - @ref rcp_notification_timeout
 *   - @ref rcp_notification_response
 * - Added support for Menu Tree
 *   - @ref rcp_menu_is_supported
 *   - @ref rcp_menu_get_children
 * - Added connection statistics (see @ref rcp_camera_connection_stats)
 * - Added ability to get the status of any parameter (see @ref
 * rcp_get_status and @ref rcp_cur_status_cb_data_t)
 * - Added ability to set list on allowed parameters (see @ref rcp_set_list)
 * - Added parameter properties (returned from @ref
 * rcp_get_is_supported)
 * - Added edit info to current data callbacks.  This provides
 * information required to allow the user to manually enter values for
 * parameters (like min value, max value, divider, etc.)
 * - Added the following fields to the current list callback:
 *   - send_int
 *   - send_uint
 *   - send_str
 *   - update_list_only_on_close
 * - Added @ref rcp_cam_info_t.rcp_interface
 * - Moved @ref rcp_discovery_cam_info_list_t.ip_address field from @ref rcp_cam_info_t
 * - Renamed rcp_cam_info_list_t to @ref rcp_discovery_cam_info_list_t
 * - Added new error code @ref RCP_ERROR_NOT_SUPPORTED
 * - Added new parameter status color @ref RCP_PARAM_DISPLAY_STATUS_WARNING2
 * - Added new callbacks per connection:
 *   - cur_status_cb: changes to status of a parameter (see @ref  rcp_cur_status_cb_t)
 *   - notification_cb: notifications from camera (see @ref rcp_notification_cb_t)
 *   - cur_audio_vu_cb: data to display audio VU meters (see @ref rcp_cur_audio_vu_cb_t)
 *   - cur_menu_cb: data to display menu tree (see @ref rcp_cur_menu_cb_t)
 * - Deprecated @ref rcp_get_update_list_only_on_close
 *
 * Changes that break backwards compatibility with 5.1.x:
 * - UDP discovery process:
 *   - the client must provide the IP address to the API in a new
 *   argument of @ref rcp_discovery_process_data
 *   - the struct rcp_cam_info_list_t has been renamed to @ref rcp_discovery_cam_info_list_t
 *   - the ip_address field of @ref rcp_cam_info_t has been moved to @ref rcp_discovery_cam_info_list_t
 * - New callbacks required in @ref rcp_camera_connection_info_t (set
 * to NULL if they won't be used)
 * - @ref rcp_get_is_supported has a new argument that returns the
 * properties of the provided parameter (pass in NULL if these
 * properties are not required).
 *
 * @section VERSION_5_1_5 Version 5.1.5
 * - Added parameters:
 *   - @ref RCP_PARAM_HAND_CONTROLLER_FOCUS_POS
 *   - @ref RCP_PARAM_HAND_CONTROLLER_IRIS_POS
 *   - @ref RCP_PARAM_HAND_CONTROLLER_ZOOM_POS
 *   - @ref RCP_PARAM_HAND_CONTROLLER_REINIT
 *
 * @section VERSION_5_0_8 Version 5.0.8
 * - Initial Release
 */

#ifndef RCP_API_H
#define RCP_API_H

#include <stdlib.h>
/* #include "types/rcp_types_public.h" */
/* #include "clist/c_list.h" */
/* #include "keys/keydefinition.h" */

#ifdef __cplusplus
extern "C"
{
#endif

#define RCP_DISCOVERY_STEP_SLEEP_MS 300
#define RCP_DISCOVERY_STEP_LOOP_COUNT 5

typedef struct rcp_camera_connection_t rcp_camera_connection_t;

typedef enum
{
    RCP_PARAM_HISTOGRAM,                              /**< DSHIST: added in Parameter Set Version 5.0 */
    RCP_PARAM_AUDIO_VU_DATA,                          /**< AUDIOVU: added in Parameter Set Version 6.0 */
    RCP_PARAM_CAMERA_PITCH,                           /**< MPITCH: added in Parameter Set Version 5.0 */
    RCP_PARAM_CAMERA_ROLL,                            /**< MROLL: added in Parameter Set Version 5.0 */
    RCP_PARAM_POWER_VAL,                              /**< PWRBATL: for display use @ref RCP_PARAM_POWER_DISPLAY_VAL instead, added in Parameter Set Version 5.0 */
    RCP_PARAM_POWER_TIME_REMAINING,                   /**< BATTRTM: added in Parameter Set Version 5.0 */
    RCP_PARAM_FAN_SPEED_TOP,                          /**< FANPCTT: added in Parameter Set Version 5.0 */
    RCP_PARAM_FAN_SPEED_FRONT,                        /**< FANPCTF: added in Parameter Set Version 5.0 */
    RCP_PARAM_CORE_TEMP,                              /**< CURRTEMP: added in Parameter Set Version 5.0 */
    RCP_PARAM_SENSOR_TEMP,                            /**< CURSENST: added in Parameter Set Version 5.0 */
    RCP_PARAM_TIMECODE,                               /**< POSTTC: added in Parameter Set Version 5.0 */
    RCP_PARAM_ISO,                                    /**< ISO: added in Parameter Set Version 5.0 */
    RCP_PARAM_REDCODE,                                /**< REDCODE: added in Parameter Set Version 5.0 */
    RCP_PARAM_SHUTDOWN,                               /**< SHUTDOWN: added in Parameter Set Version 5.0 */
    RCP_PARAM_MM_ISO_PULL,                            /**< MMMISOND: see @ref motion_mount_iso_pull_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_ND_VAL,                                 /**< MMNDV: added in Parameter Set Version 5.0 */
    RCP_PARAM_ND_DISPLAY_VAL,                         /**< Composite of: @ref RCP_PARAM_ND_VAL, @ref RCP_PARAM_MM_MODE, and @ref RCP_PARAM_MM_ND_MODE, added in Parameter Set Version 5.0 */
    RCP_PARAM_SENSOR_FRAME_RATE,                      /**< SENSFPS: added in Parameter Set Version 5.0 */
    RCP_PARAM_PROJECT_FRAME_RATE,                     /**< PROJFPS: added in Parameter Set Version 5.0 */
    RCP_PARAM_APERTURE,                               /**< APRTR: added in Parameter Set Version 5.0 */
    RCP_PARAM_EXPOSURE_INTEGRATION_TIME,              /**< SHTIME: added in Parameter Set Version 5.0 */
    RCP_PARAM_COLOR_TEMPERATURE,                      /**< COLTMP: added in Parameter Set Version 5.0 */
    RCP_PARAM_RCP_VERSION,                            /**< RCPVER: added in Parameter Set Version 5.0 */
    RCP_PARAM_RCP_PARAMETER_SET_VERSION,              /**< RCPPSVER: added in Parameter Set Version 5.0 */
    RCP_PARAM_RECORD_FORMAT,                          /**< FORMAT2: added in Parameter Set Version 5.0 */
    RCP_PARAM_RECORD_FORMAT_NAME,                     /**< FORMATST: added in Parameter Set Version 5.0 */
    RCP_PARAM_RECORD_STATE_BASE,                      /**< RECORD: see @ref set_record_state_t and @ref record_state_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_RECORD_STATE,                           /**< Composite of: @ref RCP_PARAM_RECORD_STATE_BASE, @ref RCP_PARAM_RECORD_MODE, and @ref RCP_PARAM_TETHERED_SERVER_STATE, added in Parameter Set Version 5.0 */
    RCP_PARAM_SATURATION,                             /**< SATURAT: added in Parameter Set Version 5.0 */
    RCP_PARAM_CDL_SATURATION,                         /**< CSATURAT: added in Parameter Set Version 6.50 */
    RCP_PARAM_CONTRAST,                               /**< CONTRST: added in Parameter Set Version 5.0 */
    RCP_PARAM_BRIGHTNESS,                             /**< BRIGHT: added in Parameter Set Version 5.0 */
    RCP_PARAM_EXPOSURE_COMPENSATION,                  /**< EXPCOMP: added in Parameter Set Version 5.0 */
    RCP_PARAM_RED_GAIN,                               /**< REDG: added in Parameter Set Version 5.0 */
    RCP_PARAM_GREEN_GAIN,                             /**< GREENG: added in Parameter Set Version 5.0 */
    RCP_PARAM_BLUE_GAIN,                              /**< BLUEG: added in Parameter Set Version 5.0 */
    RCP_PARAM_FLUT,                                   /**< FLUT: added in Parameter Set Version 5.0 */
    RCP_PARAM_EXPOSURE_ADJUST,                        /**< FLUT: added in Parameter Set Version 5.0 */
    RCP_PARAM_SHADOW,                                 /**< SHADOW: added in Parameter Set Version 5.0 */
    RCP_PARAM_FOCUS_DIST,                             /**< FOCUS: added in Parameter Set Version 5.0 */
    RCP_PARAM_FOCUS_DIST_NEAR,                        /**< FOCUSN: added in Parameter Set Version 5.0 */
    RCP_PARAM_FOCUS_DIST_FAR,                         /**< FOCUSF: added in Parameter Set Version 5.0 */
    RCP_PARAM_FOCUS_DIST_DISPLAY_MODE,                /**< LENSFDMD: see @ref focus_distance_mode_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_FRAME_PROCESSING_MODE,                  /**< FRPRMODE: see @ref frame_processing_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_FRAME_PROCESSING_NUM,                   /**< FRPRNUM: added in Parameter Set Version 5.0 */
    RCP_PARAM_EXPOSURE_ANGLE,                         /**< SHANGLE: added in Parameter Set Version 5.0 */
    RCP_PARAM_AF_MODE,                                /**< AFMODE: see @ref af_mode_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_MIN_REDCODE,                            /**< MINRC: added in Parameter Set Version 5.0 */
    RCP_PARAM_MAX_REDCODE,                            /**< MAXRC: added in Parameter Set Version 5.0 */
    RCP_PARAM_MIN_EXPOSURE_INTEGRATION_TIME,          /**< MINSHT: added in Parameter Set Version 5.0 */
    RCP_PARAM_MAX_EXPOSURE_INTEGRATION_TIME,          /**< MAXSHT: added in Parameter Set Version 5.0 */
    RCP_PARAM_MIN_EXPOSURE_ANGLE,                     /**< MINSHA: added in Parameter Set Version 5.0 */
    RCP_PARAM_MAX_EXPOSURE_ANGLE,                     /**< MAXSHA: added in Parameter Set Version 5.0 */
    RCP_PARAM_CLIP_NAME,                              /**< CLIPNAME: added in Parameter Set Version 5.0 */
    RCP_PARAM_CAMERA_ID,                              /**< CAMID: added in Parameter Set Version 5.0 */
    RCP_PARAM_GAMMA_SPACE,                            /**< GSPACE: see @ref gammaspace_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_COLOR_SPACE,                            /**< CSPACE: see @ref colorspace_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_RAW_MODE,                               /**< RAWMODE: see @ref raw_mode_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_RECORD_HDR_MODE,                        /**< HDRMODE: see @ref hdr_mode_t,  added in Parameter Set Version 5.0 */
    RCP_PARAM_HDR_MONITOR_TRACK,                      /**< HDRXMONX: see @ref hdr_track_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_HDR_FACTOR,                             /**< HDRFACT: added in Parameter Set Version 5.0 */
    RCP_PARAM_FALSE_COLOR_MODE,                       /**< FALSEC: see @ref false_color_mode_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_FALSE_COLOR_MODE_STATE,                 /**< FALSEC: see @ref false_color_mode_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_TINT,                                   /**< TINT: added in Parameter Set Version 5.0 */
    RCP_PARAM_MAGNIFY_STATE,                          /**< MAGNIFY: see @ref magnify_mode_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_RIG_STATE,                              /**< RIGSTATE: see @ref metadata_status_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_RIG_STATE_DETAILED,                     /**< RIGSTATE: see @ref metadata_status_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_GIGE_STATE,                             /**< NWSTAT: see @ref gige_status_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_GIGE_STATE_DETAILED,                    /**< NWSTAT: see @ref gige_status_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_SYNC_STATE,                             /**< SYNC: see @ref sync_state_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_SYNC_STATE_DETAILED,                    /**< SYNC: see @ref sync_state_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_GENLOCK_STATE,                          /**< GENLOC: see @ref genlock_state_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_GENLOCK_STATE_DETAILED,                 /**< GENLOC: see @ref genlock_state_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_TIMECODE_STATE,                         /**< TCJAM: see @ref tc_sync_state_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_TIMECODE_STATE_DETAILED,                /**< TCJAM: see @ref tc_sync_state_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_FAN_MODE,                               /**< FSMODE: added in Parameter Set Version 5.0 */
    RCP_PARAM_FAN_REC_SPEED,                          /**< RECFS: added in Parameter Set Version 5.0 */
    RCP_PARAM_FAN_PREVIEW_SPEED,                      /**< PREVFS: added in Parameter Set Version 5.0 */
    RCP_PARAM_FAN_DELAY,                              /**< FPRDELAY: added in Parameter Set Version 5.0 */
    RCP_PARAM_AF_ZONE,                                /**< AFZONE: added in Parameter Set Version 5.0 */
    RCP_PARAM_AUDIO_CH1_GAIN,                         /**< CH1GAIN: added in Parameter Set Version 5.0 */
    RCP_PARAM_AUDIO_CH2_GAIN,                         /**< CH2GAIN: added in Parameter Set Version 5.0 */
    RCP_PARAM_AUDIO_CH3_GAIN,                         /**< CH3GAIN: added in Parameter Set Version 5.0 */
    RCP_PARAM_AUDIO_CH4_GAIN,                         /**< CH4GAIN: added in Parameter Set Version 5.0 */
    RCP_PARAM_AUDIO_CH1_VOL,                          /**< CH1VOL: added in Parameter Set Version 5.0 */
    RCP_PARAM_AUDIO_CH2_VOL,                          /**< CH2VOL: added in Parameter Set Version 5.0 */
    RCP_PARAM_AUDIO_CH3_VOL,                          /**< CH3VOL: added in Parameter Set Version 5.0 */
    RCP_PARAM_AUDIO_CH4_VOL,                          /**< CH4VOL: added in Parameter Set Version 5.0 */
    RCP_PARAM_R3D_DROPPED_FRAMES,                     /**< DRPFRMS: added in Parameter Set Version 5.0 */
    RCP_PARAM_MONITOR_MODE_LCD,                       /**< LCDM: added in Parameter Set Version 5.0 */
    RCP_PARAM_MONITOR_MODE_HDMI,                      /**< HDMIM: added in Parameter Set Version 5.0 */
    RCP_PARAM_MONITOR_MODE_HDSDI,                     /**< HDSDIM: added in Parameter Set Version 5.0 */
    RCP_PARAM_MONITOR_MODE_EVF,                       /**< EVFM: added in Parameter Set Version 5.0 */
    RCP_PARAM_MONITOR_MODE_REAR_LCD,                  /**< PLCDM: added in Parameter Set Version 5.0 */
    RCP_PARAM_MONITOR_MODE_REAR_HDSDI1,               /**< PHDSDI1M: added in Parameter Set Version 5.0 */
    RCP_PARAM_MONITOR_MODE_REAR_HDSDI2,               /**< PHDSDI2M: added in Parameter Set Version 5.0 */
    RCP_PARAM_MONITOR_MODE_REAR_EVF,                  /**< REVFM: added in Parameter Set Version 5.0 */
    RCP_PARAM_MM_MODE,                                /**< MMMODE: see @ref motion_mount_shutter_mode_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_PLAYBACK_STATE,                         /**< PLAYBACK: see @ref set_playback_state_t and @ref playback_state_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_RECORD_MODE,                            /**< RECMODE: see @ref record_mode_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_POWER_LABEL,                            /**< PLABEL: added in Parameter Set Version 5.0 */
    RCP_PARAM_MEDIA_VAL,                              /**< MEDIAPCT: for display use @ref RCP_PARAM_MEDIA_DISPLAY_VAL instead, added in Parameter Set Version 5.0 */
    RCP_PARAM_MEDIA_LABEL,                            /**< MLABEL: for display use @ref RCP_PARAM_MEDIA_DISPLAY_LABEL instead, added in Parameter Set Version 5.0 */
    RCP_PARAM_RED_CLIP,                               /**< RCLIP: added in Parameter Set Version 5.0 */
    RCP_PARAM_GREEN_CLIP,                             /**< GCLIP: added in Parameter Set Version 5.0 */
    RCP_PARAM_BLUE_CLIP,                              /**< BCLIP: added in Parameter Set Version 5.0 */
    RCP_PARAM_AUDIO_CH12_STATE,                       /**< CH12ST: added in Parameter Set Version 5.0 */
    RCP_PARAM_AUDIO_CH34_STATE,                       /**< CH34ST: added in Parameter Set Version 5.0 */
    RCP_PARAM_POWER_DISPLAY_MODE,                     /**< BATTMODE: see @ref battery_display_mode_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_MEDIA_TIME_REMAINING,                   /**< MEDIAMIN: added in Parameter Set Version 5.0 */
    RCP_PARAM_MEDIA_DISPLAY_MODE,                     /**< MEDIAMOD: see @ref media_display_t added in Parameter Set Version 5.0 */
    RCP_PARAM_PLAYBACK_NUM_HDR_TRACKS,                /**< PBHDRTRC: added in Parameter Set Version 5.0 */
    RCP_PARAM_MEDIA_DISPLAY_VAL,                      /**< Composite of: @ref RCP_PARAM_MEDIA_VAL, @ref RCP_PARAM_MEDIA_TIME_REMAINING, @ref RCP_PARAM_MEDIA_DISPLAY_MODE, @ref RCP_PARAM_RECORD_MODE, and @ref RCP_PARAM_PRIMARY_STORAGE added in Parameter Set Version 5.0 */
    RCP_PARAM_POWER_DISPLAY_VAL,                      /**< Composite of: @ref RCP_PARAM_POWER_VAL, @ref RCP_PARAM_POWER_TIME_REMAINING, and @ref RCP_PARAM_POWER_DISPLAY_MODE, added in Parameter Set Version 5.0 */
    RCP_PARAM_MEDIA_DISPLAY_LABEL,                    /**< Composite of: @ref RCP_PARAM_RECORD_MODE, @ref RCP_PARAM_MEDIA_LABEL, and @ref RCP_PARAM_PRIMARY_STORAGE, added in Parameter Set Version 5.0 */
    RCP_PARAM_HDR_MODE,                               /**< Composite of: @ref RCP_PARAM_RECORD_HDR_MODE, @ref RCP_PARAM_PLAYBACK_STATE, and @ref RCP_PARAM_PLAYBACK_NUM_HDR_TRACKS, added in Parameter Set Version 5.0 */
    RCP_PARAM_HDR_MODE_DETAILED,                      /**< Composite of: @ref RCP_PARAM_RECORD_HDR_MODE, @ref RCP_PARAM_PLAYBACK_STATE, and @ref RCP_PARAM_PLAYBACK_NUM_HDR_TRACKS, added in Parameter Set Version 5.0 */
    RCP_PARAM_CAMERA_FIRMWARE_VERSION,                /**< CAMFWVER: added in Parameter Set Version 5.0 */
    RCP_PARAM_CAMERA_TYPE,                            /**< CAMNAME: added in Parameter Set Version 5.0 */
    RCP_PARAM_CAMERA_PIN,                             /**< CAMSER: added in Parameter Set Version 5.0 */
    RCP_PARAM_KEYCODE,                                /**< KEYCODE: see @ref MAKEKEYCODE, added in Parameter Set Version 5.0 */
    RCP_PARAM_LIST_SELECT_ISO,                        /**< SELISO: see @ref list_select_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_LIST_SELECT_SHUTTER,                    /**< SELSH: see @ref list_select_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_SLATE_CAMERA_OPERATOR,                  /**< CAMERAOP: added in Parameter Set Version 5.0 */
    RCP_PARAM_SLATE_LOCATION,                         /**< CAMLOC: added in Parameter Set Version 5.0 */
    RCP_PARAM_SLATE_SCENE,                            /**< CAMSCENE: added in Parameter Set Version 5.0 */
    RCP_PARAM_SLATE_TAKE,                             /**< CAMTAKE: added in Parameter Set Version 5.0 */
    RCP_PARAM_SLATE_UNIT,                             /**< CAMUNIT: added in Parameter Set Version 5.0 */
    RCP_PARAM_SLATE_DIRECTOR,                         /**< DIRECTOR: added in Parameter Set Version 5.0 */
    RCP_PARAM_SLATE_DOP,                              /**< DOPNAME: added in Parameter Set Version 5.0 */
    RCP_PARAM_SLATE_PRODUCTION,                       /**< PRODUCTN: added in Parameter Set Version 5.0 */
    RCP_PARAM_SLATE_COPYRIGHT,                        /**< PROJINFO: added in Parameter Set Version 5.0 */
    RCP_PARAM_SLATE_CAMERA_ID,                        /**< CAMMEID: added in Parameter Set Version 5.0 */
    RCP_PARAM_SLATE_CAMERA_POS,                       /**< CAMPOS: see @ref cam_pos_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_ZEBRA_1_ENABLE,                         /**< ZEBRA1: added in Parameter Set Version 5.0 */
    RCP_PARAM_ZEBRA_1_MODE,                           /**< ZEBRA1M: added in Parameter Set Version 6.31 */
    RCP_PARAM_ZEBRA_1_IRE_LOW,                        /**< ZEBRA1LO: added in Parameter Set Version 5.0 */
    RCP_PARAM_ZEBRA_1_IRE_HIGH,                       /**< ZEBRA1HI: added in Parameter Set Version 5.0 */
    RCP_PARAM_ZEBRA_1_STOPS_LOW,                      /**< ZEBRA1LS: added in Parameter Set Version 6.31 */
    RCP_PARAM_ZEBRA_1_STOPS_HIGH,                     /**< ZEBRA1HS: added in Parameter Set Version 6.31 */
    RCP_PARAM_ZEBRA_2_ENABLE,                         /**< ZEBRA2: added in Parameter Set Version 5.0 */
    RCP_PARAM_ZEBRA_2_MODE,                           /**< ZEBRA2M: added in Parameter Set Version 6.31 */
    RCP_PARAM_ZEBRA_2_IRE_LOW,                        /**< ZEBRA2LO: added in Parameter Set Version 5.0 */
    RCP_PARAM_ZEBRA_2_IRE_HIGH,                       /**< ZEBRA2HI: added in Parameter Set Version 5.0 */
    RCP_PARAM_ZEBRA_2_STOPS_LOW,                      /**< ZEBRA2LS: added in Parameter Set Version 6.31 */
    RCP_PARAM_ZEBRA_2_STOPS_HIGH,                     /**< ZEBRA2HS: added in Parameter Set Version 6.31 */
    RCP_PARAM_FOCAL_LENGTH,                           /**< FLENGTH: added in Parameter Set Version 5.0 */
    RCP_PARAM_APERTURE_CONTROL,                       /**< APERCTRL: added in Parameter Set Version 5.0 */
    RCP_PARAM_FOCUS_CONTROL,                          /**< FOCSCTRL: added in Parameter Set Version 5.0 */
    RCP_PARAM_SET_TIMECODE,                           /**< TCSET: added in Parameter Set Version 5.0 */
    RCP_PARAM_VARISPEED_MODE,                         /**< VRISPDMD: added in Parameter Set Version 5.0 */
    RCP_PARAM_POWER_SOURCE,                           /**< PWRSRC: see @ref power_source_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_TEST_PATTERN,                           /**< TPATTERN: see @ref monitor_test_pattern_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_MIN_SENSOR_FRAME_RATE,                  /**< MINFPS: added in Parameter Set Version 5.0 */
    RCP_PARAM_MAX_SENSOR_FRAME_RATE,                  /**< MAXFPS: added in Parameter Set Version 5.0 */
    RCP_PARAM_SHUTTER_DISPLAY_MODE,                   /**< SHDISP: see @ref shutter_display_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_SHUTTER_MODE,                           /**< SHMODE: see @ref shutter_mode_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_RED_CURVE,                              /**< RCURVE: added in Parameter Set Version 5.0 */
    RCP_PARAM_GREEN_CURVE,                            /**< GCURVE: added in Parameter Set Version 5.0 */
    RCP_PARAM_BLUE_CURVE,                             /**< BCURVE: added in Parameter Set Version 5.0 */
    RCP_PARAM_LUMA_CURVE,                             /**< LCURVE: added in Parameter Set Version 5.0 */
    RCP_PARAM_PLAYBACK_CLIP_LENGTH,                   /**< CLIPLEN: added in Parameter Set Version 5.0 */
    RCP_PARAM_PLAYBACK_CLIP_LOAD,                     /**< CLIPLOAD: added in Parameter Set Version 5.0 */
    RCP_PARAM_PLAYBACK_CLIP_LOAD_REL,                 /**< CLPNUM: added in Parameter Set Version 5.0 */
    RCP_PARAM_PLAYBACK_CLIP_DIR,                      /**< CLPDIR: see @ref player_direction_t, added in Parameter Set Version 5.0 */
    RCP_PARAM_PLAYBACK_IN_POINT,                      /**< CLPINPT: added in Parameter Set Version 5.0 */
    RCP_PARAM_PLAYBACK_OUT_POINT,                     /**< CLPOUTPT: added in Parameter Set Version 5.0 */
    RCP_PARAM_PLAYBACK_LOOP,                          /**< LOOP: added in Parameter Set Version 5.0 */
    RCP_PARAM_PLAYBACK_PLAY,                          /**< PLAY: added in Parameter Set Version 5.0 */
    RCP_PARAM_PLAYBACK_PAUSE,                         /**< PAUSE: added in Parameter Set Version 5.0 */
    RCP_PARAM_PLAYBACK_PLAY_PAUSE,                    /**< PLAYPAUS: added in Parameter Set Version 5.0 */
    RCP_PARAM_PLAYBACK_POS,                           /**< PLAYPOS: added in Parameter Set Version 5.0 */
    RCP_PARAM_PLAYBACK_POS_REL,                       /**< PLAYRPOS: added in Parameter Set Version 5.0 */
    RCP_PARAM_PLAYBACK_SPEED,                         /**< PLAYSPD: added in Parameter Set Version 5.0 */
    RCP_PARAM_MEDIA_CLIP_COUNT,                       /**< MEDACLPC: added in Parameter Set Version 5.0 */
    RCP_PARAM_MEDIA_CLIP_EXT_INFO,                    /**< MEDAGCII: added in Parameter Set Version 5.0 */
    RCP_PARAM_KEYACTION,                              /**< KEYACT: added in Parameter Set Version 5.0 */
    RCP_PARAM_FRAME_TAG,                              /**< TAGGED: added in Parameter Set Version 5.0 */
    RCP_PARAM_CAMERA_INFO,                            /**< CAMINFO: added in Parameter Set Version 5.0 */
    RCP_PARAM_HAND_CONTROLLER_FOCUS_POS,              /**< HCFOCUS: added in Parameter Set Version 5.1 */
    RCP_PARAM_HAND_CONTROLLER_IRIS_POS,               /**< HCIRIS: added in Parameter Set Version 5.1 */
    RCP_PARAM_HAND_CONTROLLER_ZOOM_POS,               /**< HCZOOM: added in Parameter Set Version 5.1 */
    RCP_PARAM_HAND_CONTROLLER_REINIT,                 /**< HCREINIT: added in Parameter Set Version 5.1 */
    RCP_PARAM_EXPOSURE_DISPLAY,                       /**< Composite of: @ref RCP_PARAM_SHUTTER_DISPLAY_MODE, @ref RCP_PARAM_EXPOSURE_INTEGRATION_TIME, @ref RCP_PARAM_EXPOSURE_ANGLE, added in Parameter Set Version 5.0 */
    RCP_PARAM_MM_SHUTTER_COLOR,                       /**< MMSHCOLR: added in Parameter Set Version 6.0 */
    RCP_PARAM_MM_INTEGRATION_TIME,                    /**< MMSHTIME: added in Parameter Set Version 6.0 */
    RCP_PARAM_MM_SHUTTER_ANGLE,                       /**< MMSHANGL: added in Parameter Set Version 6.0 */
    RCP_PARAM_GROUP_ID,                               /**< GROUPID: added in Parameter Set Version 6.0 */
    RCP_PARAM_CORE_TEMP_WARNING_1,                    /**< TWARN1: added in Parameter Set Version 6.0 */
    RCP_PARAM_CORE_TEMP_WARNING_2,                    /**< TWARN2: added in Parameter Set Version 6.0 */
    RCP_PARAM_CORE_TEMP_WARNING_3,                    /**< TWARN3: added in Parameter Set Version 6.0 */
    RCP_PARAM_AE_MODE,                                /**< AEMODE: see @ref ae_mode_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_AE_EV_SHIFT,                            /**< AEEVSHFT: added in Parameter Set Version 6.0 */
    RCP_PARAM_AE_METERING_MODE,                       /**< AEMETERM: see @ref ae_metering_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_AE_SPEED,                               /**< AESPEED: see @ref ae_speed_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_AE_SELECTION,                           /**< AESELECT: see @ref ae_selection_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_AE_LOCK_APERTURE,                       /**< AELOCKAP: added in Parameter Set Version 6.0, deprecated - use RCP_PARAM_AE_EXPOSURE_PRIORITY instead */
    RCP_PARAM_AE_LOCK_EXPOSURE,                       /**< AELOCKEX: added in Parameter Set Version 6.0, deprecated - use RCP_PARAM_AE_EXPOSURE_PRIORITY instead */
    RCP_PARAM_CALIBRATION_STATUS,                     /**< CALSTAT: see @ref cal_status_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_CALIBRATION_STATUS_TEMPERATURE,         /**< Component of: @ref RCP_PARAM_CALIBRATION_STATUS, just the temperature portion, added in Parameter Set Version 6.0 */
    RCP_PARAM_CALIBRATION_STATUS_EXPOSURE,            /**< Component of: @ref RCP_PARAM_CALIBRATION_STATUS, just the exposure portion, added in Parameter Set Version 6.0 */
    RCP_PARAM_FAN_TARGET_TEMPERATURE,                 /**< FANTRGTT: added in Parameter Set Version 6.0 */
    RCP_PARAM_COLOR_TEMPERATURE_PRESET,               /**< COLTMPP: added in Parameter Set Version 6.0 */
    RCP_PARAM_SHOW_HORIZON_LINE,                      /**< HORIZON: added in Parameter Set Version 6.0 */
    RCP_PARAM_TEST_PATTERN_TONE,                      /**< TPATTONE: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_OVERLAY_LCD,                    /**< BLCDOV: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_OVERLAY_HDMI,                   /**< BHDMIOV: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_OVERLAY_HDSDI,                  /**< BHDSDIOV: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_OVERLAY_EVF,                    /**< BEVFOV: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_OVERLAY_REAR_LCD,               /**< PLCDOV: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_OVERLAY_REAR_HDSDI1,            /**< PHDS1OV: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_OVERLAY_REAR_HDSDI2,            /**< PHDS2OV: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_OVERLAY_REAR_EVF,               /**< REVFOV: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_RESOLUTION_HDMI,                /**< HDMIR: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_RESOLUTION_HDSDI,               /**< HDSDIR: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_RESOLUTION_REAR_HDSDI1,         /**< PHDSDI1R: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_RESOLUTION_REAR_HDSDI2,         /**< PHDSDI2R: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_FREQ_LCD,                       /**< LCDF: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_FREQ_HDMI,                      /**< HDMIF: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_FREQ_HDSDI,                     /**< HDSDIF: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_FREQ_EVF,                       /**< EVFF: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_FREQ_REAR_LCD,                  /**< PLCDF: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_FREQ_REAR_HDSDI1,               /**< PHDSDI1F: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_FREQ_REAR_HDSDI2,               /**< PHDSDI2F: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_FREQ_REAR_EVF,                  /**< REVFF: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_TOOLS_LCD,                      /**< BLCDTL: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_TOOLS_HDMI,                     /**< BHDMITL: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_TOOLS_HDSDI,                    /**< BHDSDITL: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_TOOLS_EVF,                      /**< BEVFTL: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_TOOLS_REAR_LCD,                 /**< PLCDTL: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_TOOLS_REAR_HDSDI1,              /**< PSDI1TL: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_TOOLS_REAR_HDSDI2,              /**< PSDI2TL: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_TOOLS_REAR_EVF,                 /**< REVFTL: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_UI_FLIP_MIRROR_LCD,             /**< BLCDFM: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_UI_FLIP_MIRROR_HDMI,            /**< BHDMIFM: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_UI_FLIP_MIRROR_HDSDI,           /**< BHDSDIFM: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_UI_FLIP_MIRROR_EVF,             /**< BEVFFM: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_UI_FLIP_MIRROR_REAR_LCD,        /**< PLCDFM: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_UI_FLIP_MIRROR_REAR_HDSDI1,     /**< PSDI1FM: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_UI_FLIP_MIRROR_REAR_HDSDI2,     /**< PSDI2FM: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_UI_FLIP_MIRROR_REAR_EVF,        /**< REVFFM: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_VIDEO_FLIP_LCD,                 /**< BLCDVF: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_VIDEO_FLIP_HDMI,                /**< BHDMIVF: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_VIDEO_FLIP_HDSDI,               /**< BHDSDIVF: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_VIDEO_FLIP_EVF,                 /**< BEVFVF: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_VIDEO_FLIP_REAR_LCD,            /**< PLCDVF: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_VIDEO_FLIP_REAR_HDSDI1,         /**< PSDI1VF: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_VIDEO_FLIP_REAR_HDSDI2,         /**< PSDI2VF: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_VIDEO_FLIP_REAR_EVF,            /**< REVFVF: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_FRAMED_OVERLAY_LCD,             /**< BLCDFO: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_FRAMED_OVERLAY_HDMI,            /**< BHDMIFO: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_FRAMED_OVERLAY_HDSDI,           /**< BHDSDIFO: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_FRAMED_OVERLAY_EVF,             /**< BEVFFO: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_FRAMED_OVERLAY_REAR_LCD,        /**< PLCDFO: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_FRAMED_OVERLAY_REAR_HDSDI1,     /**< PSDI1FO: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_FRAMED_OVERLAY_REAR_HDSDI2,     /**< PSDI2FO: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_FRAMED_OVERLAY_REAR_EVF,        /**< REVFFO: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_DOCK_MENUS_LCD,                 /**< BLCDDM: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_DOCK_MENUS_HDMI,                /**< BHDMIDM: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_DOCK_MENUS_HDSDI,               /**< BHDSDIDM: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_DOCK_MENUS_EVF,                 /**< BEVFDM: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_DOCK_MENUS_REAR_LCD,            /**< PLCDDM: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_DOCK_MENUS_REAR_HDSDI1,         /**< PSDI1DM: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_DOCK_MENUS_REAR_HDSDI2,         /**< PSDI2DM: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_DOCK_MENUS_REAR_EVF,            /**< REVFDM: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_BRIGHTNESS_LCD,                 /**< BLCDBR: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_BRIGHTNESS_EVF,                 /**< BEVFBR: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_BRIGHTNESS_REAR_LCD,            /**< PLCDBR: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_BRIGHTNESS_REAR_EVF,            /**< REVFBR: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_BRIGHTNESS_SIDE_UI,             /**< FUIBR: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_ENABLE_HDSDI,                   /**< BHDSDIEN: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_ENABLE_REAR_HDSDI1,             /**< PHDS1EN: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_ENABLE_REAR_HDSDI2,             /**< PHDS2EN: added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_VU_METER_SOURCE,                  /**< VUSRC: see @ref vu_meter_source_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_HISTOGRAM_TYPE,                         /**< HISTTYPE: see @ref histogram_type_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_APERTURE_LIST_MODE,                     /**< LDISPM: see @ref aperture_list_t added, in Parameter Set Version 6.0 */
    RCP_PARAM_MM_ND_MODE,                             /**< MMNDMODE: see @ref motion_mount_display_mode_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_SHOW_RACK_DISTANCES,                    /**< SHRCKDST: see @ref focus_rack_show_distance_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_POWER_SAVE_LEVEL_1,                     /**< PSLEVEL1: added in Parameter Set Version 6.0 */
    RCP_PARAM_POWER_SAVE_LEVEL_2,                     /**< PSLEVEL2: added in Parameter Set Version 6.0 */
    RCP_PARAM_POWER_SAVE_LEVEL_3,                     /**< PSLEVEL3: added in Parameter Set Version 6.0 */
    RCP_PARAM_FRAME_GUIDE_MODE,                       /**< F0MODE: added in Parameter Set Version 6.0 */
    RCP_PARAM_FRAME_GUIDE_USER_AR_NUM,                /**< F0NUM: added in Parameter Set Version 6.0 */
    RCP_PARAM_FRAME_GUIDE_SCALE,                      /**< F0SCL: added in Parameter Set Version 6.0 */
    RCP_PARAM_FRAME_GUIDE_X_OFFSET,                   /**< F0OFFSX: added in Parameter Set Version 6.0 */
    RCP_PARAM_FRAME_GUIDE_Y_OFFSET,                   /**< F0OFFSY: added in Parameter Set Version 6.0 */
    RCP_PARAM_FRAME_GUIDE_ABS_X_OFFSET,               /**< F0ABSXOF: added in Parameter Set Version 6.0 */
    RCP_PARAM_FRAME_GUIDE_ABS_Y_OFFSET,               /**< F0ABSYOF: added in Parameter Set Version 6.0 */
    RCP_PARAM_FRAME_GUIDE_ABS_W,                      /**< F0ABSW: added in Parameter Set Version 6.0 */
    RCP_PARAM_FRAME_GUIDE_ABS_H,                      /**< F0ABSH: added in Parameter Set Version 6.0 */
    RCP_PARAM_FRAME_GUIDE_LINE_STYLE,                 /**< F0LNST: see @ref guide_line_style_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_FRAME_GUIDE_COLOR,                      /**< F0COLOR: added in Parameter Set Version 6.0 */
    RCP_PARAM_FRAME_GUIDE_OPACITY,                    /**< F0OPAC: added in Parameter Set Version 6.0 */
    RCP_PARAM_ACTION_GUIDE_MODE,                      /**< F1MODE: added in Parameter Set Version 6.0 */
    RCP_PARAM_ACTION_GUIDE_USER_AR_NUM,               /**< F1NUM: added in Parameter Set Version 6.0 */
    RCP_PARAM_ACTION_GUIDE_SCALE,                     /**< F1SCL: added in Parameter Set Version 6.0 */
    RCP_PARAM_ACTION_GUIDE_X_OFFSET,                  /**< F1OFFSX: added in Parameter Set Version 6.0 */
    RCP_PARAM_ACTION_GUIDE_Y_OFFSET,                  /**< F1OFFSY: added in Parameter Set Version 6.0 */
    RCP_PARAM_ACTION_GUIDE_ABS_X_OFFSET,              /**< F1ABSXOF: added in Parameter Set Version 6.0 */
    RCP_PARAM_ACTION_GUIDE_ABS_Y_OFFSET,              /**< F1ABSYOF: added in Parameter Set Version 6.0 */
    RCP_PARAM_ACTION_GUIDE_ABS_W,                     /**< F1ABSW: added in Parameter Set Version 6.0 */
    RCP_PARAM_ACTION_GUIDE_ABS_H,                     /**< F1ABSH: added in Parameter Set Version 6.0 */
    RCP_PARAM_ACTION_GUIDE_LINE_STYLE,                /**< F1LNST: see @ref guide_line_style_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_ACTION_GUIDE_COLOR,                     /**< F1COLOR: added in Parameter Set Version 6.0 */
    RCP_PARAM_ACTION_GUIDE_OPACITY,                   /**< F1OPAC: added in Parameter Set Version 6.0 */
    RCP_PARAM_ACTION_GUIDE_RELATIVE,                  /**< F1RELF0: added in Parameter Set Version 6.0 */
    RCP_PARAM_TITLE_GUIDE_MODE,                       /**< F2MODE: added in Parameter Set Version 6.0 */
    RCP_PARAM_TITLE_GUIDE_USER_AR_NUM,                /**< F2NUM: added in Parameter Set Version 6.0 */
    RCP_PARAM_TITLE_GUIDE_SCALE,                      /**< F2SCL: added in Parameter Set Version 6.0 */
    RCP_PARAM_TITLE_GUIDE_X_OFFSET,                   /**< F2OFFSX: added in Parameter Set Version 6.0 */
    RCP_PARAM_TITLE_GUIDE_Y_OFFSET,                   /**< F2OFFSY: added in Parameter Set Version 6.0 */
    RCP_PARAM_TITLE_GUIDE_ABS_X_OFFSET,               /**< F2ABSXOF: added in Parameter Set Version 6.0 */
    RCP_PARAM_TITLE_GUIDE_ABS_Y_OFFSET,               /**< F2ABSYOF: added in Parameter Set Version 6.0 */
    RCP_PARAM_TITLE_GUIDE_ABS_W,                      /**< F2ABSW: added in Parameter Set Version 6.0 */
    RCP_PARAM_TITLE_GUIDE_ABS_H,                      /**< F2ABSH: added in Parameter Set Version 6.0 */
    RCP_PARAM_TITLE_GUIDE_LINE_STYLE,                 /**< F2LNST: see @ref guide_line_style_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_TITLE_GUIDE_COLOR,                      /**< F2COLOR: added in Parameter Set Version 6.0 */
    RCP_PARAM_TITLE_GUIDE_OPACITY,                    /**< F2OPAC: added in Parameter Set Version 6.0 */
    RCP_PARAM_TITLE_GUIDE_RELATIVE,                   /**< F2RELF0: added in Parameter Set Version 6.0 */
    RCP_PARAM_CENTER_GUIDE_GUIDE,                     /**< CGGUIDE: added in Parameter Set Version 6.0 */
    RCP_PARAM_CENTER_GUIDE_COLOR,                     /**< CGCOLOR: added in Parameter Set Version 6.0 */
    RCP_PARAM_CENTER_GUIDE_OPACITY,                   /**< CGOPAC: added in Parameter Set Version 6.0 */
    RCP_PARAM_GRID_GUIDE_GUIDE,                       /**< GGGUIDE: added in Parameter Set Version 6.0 */
    RCP_PARAM_GRID_GUIDE_COLOR,                       /**< GGCOLOR: added in Parameter Set Version 6.0 */
    RCP_PARAM_GRID_GUIDE_OPACITY,                     /**< GGOPAC: added in Parameter Set Version 6.0 */
    RCP_PARAM_SHADING_GUIDE,                          /**< SHGUIDE: added in Parameter Set Version 6.0 */
    RCP_PARAM_SHADING_COLOR,                          /**< SHCOLOR: added in Parameter Set Version 6.0 */
    RCP_PARAM_SHADING_OPACITY,                        /**< SHOPAC: added in Parameter Set Version 6.0 */
    RCP_PARAM_ACES_PROXY,                             /**< ACES:  added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_SPLIT_CURVE,                    /**< IMGSPCRV: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_CURVE_LCD,                      /**< LCDCV: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_CURVE_HDMI,                     /**< HDMICV: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_CURVE_HDSDI,                    /**< HDSDICV: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_CURVE_EVF,                      /**< EVFCV: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_CURVE_REAR_LCD,                 /**< PLCDCV: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_CURVE_REAR_HDSDI1,              /**< PHDSD1CV: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_CURVE_REAR_HDSDI2,              /**< PHDSD2CV: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_CURVE_REAR_EVF,                 /**< REVFCV: added in Parameter Set Version 6.0 */
    RCP_PARAM_TIMECODE_DISPLAY_MODE,                  /**< TCDMODE: see @ref tc_display_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_TIMECODE_SOURCE,                        /**< TCSOURCE: see @ref tc_source_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_SAVE_LOG,                               /**< SAVELOG: added in Parameter Set Version 6.0 */
    RCP_PARAM_AF_SIZE,                                /**< AFSIZE: added in Parameter Set Version 6.0 */
    RCP_PARAM_AF_ENHANCED_ENABLE,                     /**< AFENHNCD: added in Parameter Set Version 6.0 */
    RCP_PARAM_AF_ENHANCED_MONITOR,                    /**< AFENHMON: added in Parameter Set Version 6.0 */
    RCP_PARAM_AF_ENHANCED_CONFIRM_STYLE,              /**< AFENCONS: added in Parameter Set Version 6.0 */
    RCP_PARAM_BEEP_ENABLE,                            /**< BEEPEN: added in Parameter Set Version 6.0 */
    RCP_PARAM_BEEP_RECORD_START,                      /**< BEEPREC: added in Parameter Set Version 6.0 */
    RCP_PARAM_BEEP_RECORD_STOP,                       /**< BEEPSTOP: added in Parameter Set Version 6.0 */
    RCP_PARAM_BEEP_TAG_STILL_FRAME,                   /**< BEEPTAGS: added in Parameter Set Version 6.0 */
    RCP_PARAM_EVF_TALLY_LIGHT,                        /**< EVFTALLY: added in Parameter Set Version 6.0 */
    RCP_PARAM_PRE_RECORD_DURATION,                    /**< PRERECDR: added in Parameter Set Version 6.0 */
    RCP_PARAM_PRE_RECORD_ALWAYS_TRIGGER,              /**< PRERECON: added in Parameter Set Version 6.0 */
    RCP_PARAM_LGG_LIFT_RED,                           /**< RLIFT: added in Parameter Set Version 6.0 */
    RCP_PARAM_CDL_OFFSET_RED,                         /**< ROFFSET: added in Parameter Set Version 6.50 */
    RCP_PARAM_LGG_LIFT_GREEN,                         /**< GLIFT: added in Parameter Set Version 6.0 */
    RCP_PARAM_CDL_OFFSET_GREEN,                       /**< GOFFSET: added in Parameter Set Version 6.50 */
    RCP_PARAM_LGG_LIFT_BLUE,                          /**< BLIFT: added in Parameter Set Version 6.0 */
    RCP_PARAM_CDL_OFFSET_BLUE,                        /**< BOFFSET: added in Parameter Set Version 6.50 */
    RCP_PARAM_LGG_GAMMA_RED,                          /**< RGAMMA: added in Parameter Set Version 6.0 */
    RCP_PARAM_CDL_POWER_RED,                          /**< RPOWER: added in Parameter Set Version 6.50 */
    RCP_PARAM_LGG_GAMMA_GREEN,                        /**< GGAMMA: added in Parameter Set Version 6.0 */
    RCP_PARAM_CDL_POWER_GREEN,                        /**< GPOWER: added in Parameter Set Version 6.50 */
    RCP_PARAM_LGG_GAMMA_BLUE,                         /**< BGAMMA: added in Parameter Set Version 6.0 */
    RCP_PARAM_CDL_POWER_BLUE,                         /**< BPOWER: added in Parameter Set Version 6.50 */
    RCP_PARAM_LGG_GAIN_RED,                           /**< RGAIN: added in Parameter Set Version 6.0 */
    RCP_PARAM_CDL_SLOPE_RED,                          /**< RSLOPE: added in Parameter Set Version 6.50 */
    RCP_PARAM_LGG_GAIN_GREEN,                         /**< GGAIN: added in Parameter Set Version 6.0 */
    RCP_PARAM_CDL_SLOPE_GREEN,                        /**< GSLOPE: added in Parameter Set Version 6.50 */
    RCP_PARAM_LGG_GAIN_BLUE,                          /**< BGAIN: added in Parameter Set Version 6.0 */
    RCP_PARAM_CDL_SLOPE_BLUE,                         /**< BSLOPE: added in Parameter Set Version 6.50 */
    RCP_PARAM_GIGABIT_ETHERNET_IP_ADDRESS,            /**< GEIPADDR: added in Parameter Set Version 6.0 */
    RCP_PARAM_GIGABIT_ETHERNET_NETMASK,               /**< GENETMSK: added in Parameter Set Version 6.0 */
    RCP_PARAM_GIGABIT_ETHERNET_GATEWAY,               /**< GEGWADDR: added in Parameter Set Version 6.0 */
    RCP_PARAM_GIGABIT_ETHERNET_DHCP_ENABLE,           /**< GEDHCP: added in Parameter Set Version 6.0 */
    RCP_PARAM_GIGABIT_ETHERNET_C2C_ENABLE,            /**< GEC2C: added in Parameter Set Version 6.0 */
    RCP_PARAM_GIGABIT_ETHERNET_EXT_ENABLE,            /**< GEEXT: added in Parameter Set Version 6.0 */
    RCP_PARAM_GIGABIT_ETHERNET_MAC_ADDRESS,           /**< GEMAC: added in Parameter Set Version 6.50 */
    RCP_PARAM_SERIAL_PROTOCOL,                        /**< SERPROTO: added in Parameter Set Version 6.0 */
    RCP_PARAM_SERIAL_2_PROTOCOL,                      /**< SERPROT2: added in Parameter Set Version 6.32 */
    RCP_PARAM_AUDIO_CH12_SOURCE,                      /**< CH12SRC: see @ref audio_channel_source_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH34_SOURCE,                      /**< CH34SRC: see @ref audio_channel_source_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH12_LINK_GAIN,                   /**< CH12ILNK: added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH34_LINK_GAIN,                   /**< CH34ILNK: added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH12_LINK_VOL,                    /**< CH12OLNK: added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH34_LINK_VOL,                    /**< CH34OLNK: added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH1_NAME,                         /**< CH1NAME: added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH1_MODE,                         /**< CH1MODE: see @ref audio_channel_mode_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH1_48V_POWER,                    /**< CH1_48V: added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH1_48V_PRESENT,                  /**< CH1_48VP: added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH1_LIMITER,                      /**< CH1LIMIT: added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH1_LIMITER_PRESENT,              /**< CH1LIMPR: added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH2_NAME,                         /**< CH2NAME: added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH2_MODE,                         /**< CH2MODE: see @ref audio_channel_mode_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH2_48V_POWER,                    /**< CH2_48V: added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH2_48V_PRESENT,                  /**< CH2_48VP: added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH2_LIMITER,                      /**< CH2LIMIT: added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH2_LIMITER_PRESENT,              /**< CH2LIMPR: added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH3_NAME,                         /**< CH3NAME: added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH3_MODE,                         /**< CH3MODE: see @ref audio_channel_mode_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH3_48V_POWER,                    /**< CH3_48V: added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH3_48V_PRESENT,                  /**< CH3_48VP: added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH3_LIMITER,                      /**< CH3LIMIT: added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH3_LIMITER_PRESENT,              /**< CH3LIMPR: added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH4_NAME,                         /**< CH4NAME: added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH4_MODE,                         /**< CH4MODE: see @ref audio_channel_mode_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH4_48V_POWER,                    /**< CH4_48V: added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH4_48V_PRESENT,                  /**< CH4_48VP: added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH4_LIMITER,                      /**< CH4LIMIT: added in Parameter Set Version 6.0 */
    RCP_PARAM_AUDIO_CH4_LIMITER_PRESENT,              /**< CH4LIMPR: added in Parameter Set Version 6.0 */
    RCP_PARAM_CLIP_NAME_STATUS,                       /**< CLIPNMST: added in Parameter Set Version 6.0 */
    RCP_PARAM_SENSOR_SYNC_MODE,                       /**< SHSYNC: see @ref sync_mode_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_GPI_FUNCTION,                           /**< GPIN: see @ref gpi_function_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_GPO_FUNCTION,                           /**< GPOUT: see @ref gpo_function_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_GENLOCK_SOURCE,                         /**< GENSRC: see @ref genlock_source_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_AWB_MODE,                               /**< AWBMODE: see @ref awb_mode_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_RECORD_LIMIT_ENABLE,                    /**< RECLIMEN: added in Parameter Set Version 6.0 */
    RCP_PARAM_RECORD_LIMIT_FRAMES,                    /**< RECLIMFR: added in Parameter Set Version 6.0 */
    RCP_PARAM_RECORD_TIMELAPSE_FRAMES,                /**< RECTLFR: added in Parameter Set Version 6.0 */
    RCP_PARAM_RECORD_TIMELAPSE_INTERVAL,              /**< RECTLINT: added in Parameter Set Version 6.0 */
    RCP_PARAM_RECORD_PRE_FRAME_COUNT,                 /**< RECPRE: added in Parameter Set Version 6.0 */
    RCP_PARAM_RECORD_POST_FRAME_COUNT,                /**< RECPOST: added in Parameter Set Version 6.0 */
    RCP_PARAM_RECORD_PRE_FRAME_COUNT_AVAILABLE,       /**< RECPREA: added in Parameter Set Version 6.42 */
    RCP_PARAM_RECORD_POST_FRAME_COUNT_AVAILABLE,      /**< RECPOSTA: added in Parameter Set Version 6.42 */
    RCP_PARAM_RECORD_PRE_FRAME_COUNT_ACTUAL,          /**< RECPREB: added in Parameter Set Version 6.42 */
    RCP_PARAM_RECORD_POST_FRAME_COUNT_ACTUAL,         /**< RECPOSTB: added in Parameter Set Version 6.42 */
    RCP_PARAM_RTC_DATE_TIME,                          /**< DATETIME: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_PRIORITY_LIST,                  /**< MONPRTY: added in Parameter Set Version 6.0 */
    RCP_PARAM_TARGET,                                 /**< TARGET: see @ref rcp_target_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_TARGET_ID,                              /**< TARGETID: added in Parameter Set Version 6.0 */
    RCP_PARAM_MEDIA_EJECT,                            /**< EJECT: see @ref media_loc_t, added in Parameter Set Version 6.0 */
    RCP_PARAM_TIMEZONE,                               /**< TIMEZONE: added in Parameter Set Version 6.0 */
    RCP_PARAM_MEDIA_FORMAT_REEL_NO,                   /**< FMTREELN: added in Parameter Set Version 6.0 */
    RCP_PARAM_MEDIA_FORMAT_CAMERA_ID,                 /**< FMTCAMID: added in Parameter Set Version 6.0 */
    RCP_PARAM_MEDIA_FORMAT_CAMERA_POS,                /**< FMTCAMPO: added in Parameter Set Version 6.0 */
    RCP_PARAM_MEDIA_FORMAT_EDGE_TC_START,             /**< FMTETCS: added in Parameter Set Version 6.0 */
    RCP_PARAM_MEDIA_FORMAT,                           /**< FMTMEDIA: added in Parameter Set Version 6.0 */
    RCP_PARAM_MEDIA_SECURE_FORMAT,                    /**< SFMTMEDI: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_FLIP_MIRROR_SUPPORTED_LCD,      /**< BLCDFMSP: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_FLIP_MIRROR_SUPPORTED_REAR_LCD, /**< RLCDFMSP: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_FLIP_MIRROR_LCD,                /**< BLCDFM2: added in Parameter Set Version 6.0 */
    RCP_PARAM_MONITOR_FLIP_MIRROR_REAR_LCD,           /**< RLCDFM2: added in Parameter Set Version 6.0 */
    RCP_PARAM_REMOTE_CONTROL_PANEL_ENABLE,            /**< CNA1ENA: added in Parameter Set Version 6.1 */
    RCP_PARAM_REMOTE_CONTROL_PANEL_ADDRESS,           /**< CNA1ADDR: added in Parameter Set Version 6.1 */
    RCP_PARAM_REMOTE_CONTROL_PANEL_STATUS,            /**< CNA1STA: added in Parameter Set Version 6.1 */
    RCP_PARAM_TETHERED_SERVER_ADDRESS,                /**< TSRVAD: added in Parameter Set Version 6.1 (Intended for internal RED use only) */
    RCP_PARAM_TETHERED_SERVER_STATE,                  /**< TSRVSTAT: added in Parameter Set Version 6.1 (Intended for internal RED use only) */
    RCP_PARAM_OUTPUT_SHARPNESS,                       /**< FRSHARP: added in Parameter Set Version 6.1 */
    RCP_PARAM_SLATE_SHOT,                             /**< CAMSHOT: added in Parameter Set Version 6.1 */
    RCP_PARAM_WIFI_STATE,                             /**< WLANSTAT: see @ref wl_status_t, added in Parameter Set Version 6.1 */
    RCP_PARAM_WIFI_STATE_DETAILED,                    /**< WLANSTAT: see @ref wl_status_t, added in Parameter Set Version 6.1 */
    RCP_PARAM_FOCUS_STATE,                            /**< MTMST0: see @ref mc_motor_status_t, added in Parameter Set Version 6.1 */
    RCP_PARAM_FOCUS_STATE_DETAILED,                   /**< MTMST0: see @ref mc_motor_status_t, added in Parameter Set Version 6.1 */
    RCP_PARAM_IRIS_STATE,                             /**< MTMST1: see @ref mc_motor_status_t, added in Parameter Set Version 6.1 */
    RCP_PARAM_IRIS_STATE_DETAILED,                    /**< MTMST1: see @ref mc_motor_status_t, added in Parameter Set Version 6.1 */
    RCP_PARAM_ZOOM_STATE,                             /**< MTMST2: see @ref mc_motor_status_t, added in Parameter Set Version 6.1 */
    RCP_PARAM_ZOOM_STATE_DETAILED,                    /**< MTMST2: see @ref mc_motor_status_t, added in Parameter Set Version 6.1 */
    RCP_PARAM_TIMECODE_LTC_OUT_ENABLE,                /**< TCLTCOUT: added in Parameter Set Version 6.1 */
    RCP_PARAM_REDMOTE_STATE,                          /**< RMSTATE: see @ref redmote_connected_state_t, added in Parameter Set Version 6.1 */
    RCP_PARAM_CAMERA_CAPTURE_MODE,                    /**< CAMMODE: see @ref camera_capture_mode_t, added in Parameter Set Version 6.1 */
    RCP_PARAM_PRIMARY_STORAGE,                        /**< PRISTOR: see @ref primary_storage_t, added in Parameter Set Version 6.1 */
    RCP_PARAM_USER_MATRIX_RR,                         /**< CMATRR: added in Parameter Set Version 6.1 */
    RCP_PARAM_USER_MATRIX_RG,                         /**< CMATRG: added in Parameter Set Version 6.1 */
    RCP_PARAM_USER_MATRIX_RB,                         /**< CMATRB: added in Parameter Set Version 6.1 */
    RCP_PARAM_USER_MATRIX_GR,                         /**< CMATGR: added in Parameter Set Version 6.1 */
    RCP_PARAM_USER_MATRIX_GG,                         /**< CMATGG: added in Parameter Set Version 6.1 */
    RCP_PARAM_USER_MATRIX_GB,                         /**< CMATGB: added in Parameter Set Version 6.1 */
    RCP_PARAM_USER_MATRIX_BR,                         /**< CMATBR: added in Parameter Set Version 6.1 */
    RCP_PARAM_USER_MATRIX_BG,                         /**< CMATBG: added in Parameter Set Version 6.1 */
    RCP_PARAM_USER_MATRIX_BB,                         /**< CMATBB: added in Parameter Set Version 6.1 */
    RCP_PARAM_MEDIA_MODEL_NUMBER,                     /**< MEDIANUM: added in Parameter Set Version 6.1 */
    RCP_PARAM_MEDIA_ACTIVE_MEDIA,                     /**< MEDIA: added in Parameter Set Version 6.1 */
    RCP_PARAM_SLATE_AUTO_HEAD_FRAMES,                 /**< SLHEAD: added in Parameter Set Version 6.1 */
    RCP_PARAM_SLATE_AUTO_TAIL_FRAMES,                 /**< SLTAIL: added in Parameter Set Version 6.1 */
    RCP_PARAM_GIO_SCOPE_PRIMARY_COLORS,               /**< GIOCPRI: added in Parameter Set Version 6.1 */
    RCP_PARAM_GIO_SCOPE_SECONDARY_COLORS,             /**< GIOCSEC: added in Parameter Set Version 6.1 */
    RCP_PARAM_GIO_SCOPE_ZONES,                        /**< GIOZONE: added in Parameter Set Version 6.1 */
    RCP_PARAM_UI_GESTURE_PINCH_MAGNIFY,               /**< GESTPNCH: added in Parameter Set Version 6.1 */
    RCP_PARAM_UI_GESTURE_DOUBLE_TAP_RIGHT_REC,        /**< GESTDTR: added in Parameter Set Version 6.1 */
    RCP_PARAM_UI_GESTURE_DOUBLE_TAP_LEFT_AF,          /**< GESTDTL: added in Parameter Set Version 6.1 */
    RCP_PARAM_UI_LOCK_TOUCHSCREEN,                    /**< UILOCK: added in Parameter Set Version 6.1 */
    RCP_PARAM_UI_SMALL_DIALOGS_ON_9_INCH,             /**< SMDLG9IN: added in Parameter Set Version 6.1 */
    RCP_PARAM_PLAYBACK_CLIP_DATE,                     /**< PBCLSTDT: added in Parameter Set Version 6.1 */
    RCP_PARAM_PLAYBACK_CLIP_TIME,                     /**< PBCLSTTM: added in Parameter Set Version 6.1 */
    RCP_PARAM_PLAYBACK_CLIP_DATE_TIME,                /**< Composite of @ref RCP_PARAM_PLAYBACK_CLIP_DATE and @ref RCP_PARAM_PLAYBACK_CLIP_TIME, added in Paramter Set Version 6.1 */
    RCP_PARAM_PLAYBACK_METADATA_FOCAL_LENGTH,         /**< PBZOOM: added in Parameter Set Version 6.1 */
    RCP_PARAM_PLAYBACK_METADATA_ISO,                  /**< PBISO: added in Parameter Set Version 6.1 */
    RCP_PARAM_PLAYBACK_METADATA_COLOR_TEMPERATURE,    /**< PBCOLTMP: added in Parameter Set Version 6.1 */
    RCP_PARAM_PLAYBACK_METADATA_TINT,                 /**< PBTINT: added in Parameter Set Version 6.1 */
    RCP_PARAM_CAMERA_FIRMWARE_SVN_REVISION,           /**< CAMVCREV: added in Parameter Set Version 6.1 */
    RCP_PARAM_CAMERA_RUNTIME,                         /**< RUNTIME: added in Parameter Set Version 6.1 */
    RCP_PARAM_RED_CURVE_SHADOW_X,                     /**< RCURVESX: added in Parameter Set Version 6.1 */
    RCP_PARAM_RED_CURVE_SHADOW_Y,                     /**< RCURVESY: added in Parameter Set Version 6.1 */
    RCP_PARAM_RED_CURVE_DARK_X,                       /**< RCURVEDX: added in Parameter Set Version 6.1 */
    RCP_PARAM_RED_CURVE_DARK_Y,                       /**< RCURVEDY: added in Parameter Set Version 6.1 */
    RCP_PARAM_RED_CURVE_MIDTONE_X,                    /**< RCURVEMX: added in Parameter Set Version 6.1 */
    RCP_PARAM_RED_CURVE_MIDTONE_Y,                    /**< RCURVEMY: added in Parameter Set Version 6.1 */
    RCP_PARAM_RED_CURVE_LIGHT_X,                      /**< RCURVELX: added in Parameter Set Version 6.1 */
    RCP_PARAM_RED_CURVE_LIGHT_Y,                      /**< RCURVELY: added in Parameter Set Version 6.1 */
    RCP_PARAM_RED_CURVE_HIGHLIGHT_X,                  /**< RCURVEHX: added in Parameter Set Version 6.1 */
    RCP_PARAM_RED_CURVE_HIGHLIGHT_Y,                  /**< RCURVEHY: added in Parameter Set Version 6.1 */
    RCP_PARAM_GREEN_CURVE_SHADOW_X,                   /**< GCURVESX: added in Parameter Set Version 6.1 */
    RCP_PARAM_GREEN_CURVE_SHADOW_Y,                   /**< GCURVESY: added in Parameter Set Version 6.1 */
    RCP_PARAM_GREEN_CURVE_DARK_X,                     /**< GCURVEDX: added in Parameter Set Version 6.1 */
    RCP_PARAM_GREEN_CURVE_DARK_Y,                     /**< GCURVEDY: added in Parameter Set Version 6.1 */
    RCP_PARAM_GREEN_CURVE_MIDTONE_X,                  /**< GCURVEMX: added in Parameter Set Version 6.1 */
    RCP_PARAM_GREEN_CURVE_MIDTONE_Y,                  /**< GCURVEMY: added in Parameter Set Version 6.1 */
    RCP_PARAM_GREEN_CURVE_LIGHT_X,                    /**< GCURVELX: added in Parameter Set Version 6.1 */
    RCP_PARAM_GREEN_CURVE_LIGHT_Y,                    /**< GCURVELY: added in Parameter Set Version 6.1 */
    RCP_PARAM_GREEN_CURVE_HIGHLIGHT_X,                /**< GCURVEHX: added in Parameter Set Version 6.1 */
    RCP_PARAM_GREEN_CURVE_HIGHLIGHT_Y,                /**< GCURVEHY: added in Parameter Set Version 6.1 */
    RCP_PARAM_BLUE_CURVE_SHADOW_X,                    /**< BCURVESX: added in Parameter Set Version 6.1 */
    RCP_PARAM_BLUE_CURVE_SHADOW_Y,                    /**< BCURVESY: added in Parameter Set Version 6.1 */
    RCP_PARAM_BLUE_CURVE_DARK_X,                      /**< BCURVEDX: added in Parameter Set Version 6.1 */
    RCP_PARAM_BLUE_CURVE_DARK_Y,                      /**< BCURVEDY: added in Parameter Set Version 6.1 */
    RCP_PARAM_BLUE_CURVE_MIDTONE_X,                   /**< BCURVEMX: added in Parameter Set Version 6.1 */
    RCP_PARAM_BLUE_CURVE_MIDTONE_Y,                   /**< BCURVEMY: added in Parameter Set Version 6.1 */
    RCP_PARAM_BLUE_CURVE_LIGHT_X,                     /**< BCURVELX: added in Parameter Set Version 6.1 */
    RCP_PARAM_BLUE_CURVE_LIGHT_Y,                     /**< BCURVELY: added in Parameter Set Version 6.1 */
    RCP_PARAM_BLUE_CURVE_HIGHLIGHT_X,                 /**< BCURVEHX: added in Parameter Set Version 6.1 */
    RCP_PARAM_BLUE_CURVE_HIGHLIGHT_Y,                 /**< BCURVEHY: added in Parameter Set Version 6.1 */
    RCP_PARAM_LUMA_CURVE_SHADOW_X,                    /**< LCURVESX: added in Parameter Set Version 6.1 */
    RCP_PARAM_LUMA_CURVE_SHADOW_Y,                    /**< LCURVESY: added in Parameter Set Version 6.1 */
    RCP_PARAM_LUMA_CURVE_DARK_X,                      /**< LCURVEDX: added in Parameter Set Version 6.1 */
    RCP_PARAM_LUMA_CURVE_DARK_Y,                      /**< LCURVEDY: added in Parameter Set Version 6.1 */
    RCP_PARAM_LUMA_CURVE_MIDTONE_X,                   /**< LCURVEMX: added in Parameter Set Version 6.1 */
    RCP_PARAM_LUMA_CURVE_MIDTONE_Y,                   /**< LCURVEMY: added in Parameter Set Version 6.1 */
    RCP_PARAM_LUMA_CURVE_LIGHT_X,                     /**< LCURVELX: added in Parameter Set Version 6.1 */
    RCP_PARAM_LUMA_CURVE_LIGHT_Y,                     /**< LCURVELY: added in Parameter Set Version 6.1 */
    RCP_PARAM_LUMA_CURVE_HIGHLIGHT_X,                 /**< LCURVEHX: added in Parameter Set Version 6.1 */
    RCP_PARAM_LUMA_CURVE_HIGHLIGHT_Y,                 /**< LCURVEHY: added in Parameter Set Version 6.1 */
    RCP_PARAM_MEDIA_IS_ATTACHED,                      /**< MEDATCHD: added in Parameter Set Version 6.1 */
    RCP_PARAM_MEDIA_IS_PRESENT,                       /**< MEDPRSNT: added in Parameter Set Version 6.40 */
    RCP_PARAM_MEDIA_SERIAL_NUMBER,                    /**< MEDASRNU: added in Parameter Set Version 6.1 */
    RCP_PARAM_MEDIA_FIRMWARE_VERSION,                 /**< MEDIAVER: added in Parameter Set Version 6.1 */
    RCP_PARAM_MEDIA_SIZE,                             /**< MEDIASZ: added in Parameter Set Version 6.1 */
    RCP_PARAM_MEDIA_SIZE_AVIALABLE,                   /**< MEDIASZA: added in Parameter Set Version 6.1 */
    RCP_PARAM_OLPF_TYPE,                              /**< OLPF: added in Parameter Set Version 6.1 */
    RCP_PARAM_MEDIA_DOWNLOAD_FIRMWARE,                /**< MEDIAUPG: added in Parameter Set Version 6.1 */
    RCP_PARAM_RESET_FACTORY_DEFAULTS,                 /**< RESETDEF: added in Parameter Set Version 6.1 */
    RCP_PARAM_REDISCOVER_HARDWARE,                    /**< RESETHW: added in Parameter Set Version 6.1 */
    RCP_PARAM_RAMP_A_FPS,                             /**< RAMPAFPS: added in Parameter Set Version 6.1 */
    RCP_PARAM_RAMP_A_DURATION,                        /**< RAMPADUR: added in Parameter Set Version 6.1 */
    RCP_PARAM_RAMP_B_FPS,                             /**< RAMPBFPS: added in Parameter Set Version 6.1 */
    RCP_PARAM_RAMP_B_DURATION,                        /**< RAMPBDUR: added in Parameter Set Version 6.1 */
    RCP_PARAM_RAMP_C_FPS,                             /**< RAMPCFPS: added in Parameter Set Version 6.1 */
    RCP_PARAM_RAMP_C_DURATION,                        /**< RAMPCDUR: added in Parameter Set Version 6.1 */
    RCP_PARAM_RAMP_D_FPS,                             /**< RAMPDFPS: added in Parameter Set Version 6.1 */
    RCP_PARAM_RAMP_D_DURATION,                        /**< RAMPDDUR: added in Parameter Set Version 6.1 */
    RCP_PARAM_RAMP_RESET_DURATION,                    /**< RAMPRDUR: added in Parameter Set Version 6.1 */
    RCP_PARAM_CAMERA_PRESET_LIST,                     /**< CPRE: added in Parameter Set Version 6.1 */
    RCP_PARAM_CAMERA_PRESET_APPLY,                    /**< CPREAPLY: added in Parameter Set Version 6.1 */
    RCP_PARAM_CAMERA_PRESET_EXPORT_TO_MEDIA,          /**< CPREE2M: added in Parameter Set Version 6.1 */
    RCP_PARAM_CAMERA_PRESET_EXPORT_ALL_TO_MEDIA,      /**< CPREEA2M: added in Parameter Set Version 6.1 */
    RCP_PARAM_CAMERA_PRESET_UPDATE,                   /**< CPREUP: added in Parameter Set Version 6.1 */
    RCP_PARAM_CAMERA_PRESET_DELETE,                   /**< CPREDEL: added in Parameter Set Version 6.1 */
    RCP_PARAM_MEDIA_PRESET_LIST,                      /**< MPRE: added in Parameter Set Version 6.1 */
    RCP_PARAM_MEDIA_PRESET_IMPORT_TO_CAMERA,          /**< MPREI2C: added in Parameter Set Version 6.1 */
    RCP_PARAM_MEDIA_PRESET_IMPORT_ALL_TO_CAMERA,      /**< MPREIA2C: added in Parameter Set Version 6.1 */
    RCP_PARAM_CAMERA_LOOK_LIST,                       /**< CLOK: added in Parameter Set Version 6.1 */
    RCP_PARAM_CAMERA_LOOK_APPLY,                      /**< CLOKAPLY: added in Parameter Set Version 6.1 */
    RCP_PARAM_CAMERA_LOOK_EXPORT_TO_MEDIA,            /**< CLOKE2M: added in Parameter Set Version 6.1 */
    RCP_PARAM_CAMERA_LOOK_EXPORT_ALL_TO_MEDIA,        /**< CLOKEA2M: added in Parameter Set Version 6.1 */
    RCP_PARAM_CAMERA_LOOK_DELETE,                     /**< CLOKDEL: added in Parameter Set Version 6.1 */
    RCP_PARAM_MEDIA_LOOK_LIST,                        /**< MLOK: added in Parameter Set Version 6.1 */
    RCP_PARAM_MEDIA_LOOK_IMPORT_TO_CAMERA,            /**< MLOKI2C: added in Parameter Set Version 6.1 */
    RCP_PARAM_MEDIA_LOOK_IMPORT_ALL_TO_CAMERA,        /**< MLOKIA2C: added in Parameter Set Version 6.1 */
    RCP_PARAM_UPGRADE_CAMERA_FIRMWARE,                /**< CAMUPG: added in Parameter Set Version 6.1 */
    RCP_PARAM_UPGRADE_REDMOTE_FIRMWARE,               /**< RMUPG: added in Parameter Set Version 6.1 */
    RCP_PARAM_AF_RACK_SPEED,                          /**< AFRCKSPD: added in Parameter Set Version 6.1 */
    RCP_PARAM_AF_RACK_NUMBER_OF_POINTS,               /**< AFRCKNPT: added in Parameter Set Version 6.1 */
    RCP_PARAM_AF_RACK_TO_POINT,                       /**< AFRCKTO: added in Parameter Set Version 6.1 */
    RCP_PARAM_CAMERA_OVERLAY_LIST,                    /**< COVR: added in Parameter Set Version 6.1 */
    RCP_PARAM_CAMERA_OVERLAY_DELETE,                  /**< COVRDEL: added in Parameter Set Version 6.1 */
    RCP_PARAM_CAMERA_OVERLAY_EXPORT_TO_MEDIA,         /**< COVRE2M: added in Parameter Set Version 6.1 */
    RCP_PARAM_CAMERA_OVERLAY_EXPORT_ALL_TO_MEDIA,     /**< COVREA2M: added in Parameter Set Version 6.1 */
    RCP_PARAM_MEDIA_OVERLAY_LIST,                     /**< MOVR: added in Parameter Set Version 6.1 */
    RCP_PARAM_MEDIA_OVERLAY_IMPORT_TO_CAMERA,         /**< MOVRI2C: added in Parameter Set Version 6.1 */
    RCP_PARAM_MEDIA_OVERLAY_IMPORT_ALL_TO_CAMERA,     /**< MOVRIA2C: added in Parameter Set Version 6.1 */
    RCP_PARAM_CURRENT_CALIBRATION_TEMPERATURE,        /**< CALTEMP: added in Parameter Set Version 6.1 */
    RCP_PARAM_CURRENT_CALIBRATION_INTEGRATION_TIME,   /**< CALINT: added in Parameter Set Version 6.1 */
    RCP_PARAM_REDMOTE_WIRELESS_ENABLE,                /**< RMEN: added in Parameter Set Version 6.1 */
    RCP_PARAM_REDMOTE_WIRELESS_CHANNEL,               /**< RMCH: added in Parameter Set Version 6.1 */
    RCP_PARAM_REDMOTE_DISCOVERED_LIST,                /**< RMDMAC: added in Parameter Set Version 6.1 */
    RCP_PARAM_REDMOTE_PAIRED_LIST,                    /**< RMPMAC: added in Parameter Set Version 6.1 */
    RCP_PARAM_REDMOTE_SCAN,                           /**< RMSCAN: added in Parameter Set Version 6.1 */
    RCP_PARAM_REDMOTE_PAIR,                           /**< RMPAIR: added in Parameter Set Version 6.1 */
    RCP_PARAM_REDMOTE_UNPAIR,                         /**< RMUNPAIR: added in Parameter Set Version 6.1 */
    RCP_PARAM_REDMOTE_CAMERA_MAC,                     /**< RMCAMMAC: added in Parameter Set Version 6.1 */
    RCP_PARAM_REDMOTE_ATTACHED_MAC,                   /**< RMMAC: added in Parameter Set Version 6.1 */
    RCP_PARAM_AUTO_PRESET_STARTUP,                    /**< APSTART: added in Parameter Set Version 6.1 */
    RCP_PARAM_AUTO_PRESET_MOTION,                     /**< APMOTION: added in Parameter Set Version 6.1 */
    RCP_PARAM_AUTO_PRESET_MOTION_AUTO_UPDATE,         /**< APAUMOTN: added in Parameter Set Version 6.1 */
    RCP_PARAM_AUTO_PRESET_STILLS,                     /**< APSTILLS: added in Parameter Set Version 6.1 */
    RCP_PARAM_AUTO_PRESET_STILLS_AUTO_UPDATE,         /**< APAUSTIL: added in Parameter Set Version 6.1 */
    RCP_PARAM_AUTO_PRESET_PLAYBACK,                   /**< APPLAY: added in Parameter Set Version 6.1 */
    RCP_PARAM_AUTO_PRESET_PLAYBACK_AUTO_UPDATE,       /**< APAUPLAY: added in Parameter Set Version 6.1 */
    RCP_PARAM_TETHERING_SUPPORTED,                    /**< TETHERS: added in Parameter Set Version 6.1 (Intended for internal RED use only) */
    RCP_PARAM_TETHERING_SUPPORTED_ON_THIS_INTERFACE,  /**< TETHERSI: added in Parameter Set Version 6.1 (Intended for internal RED use only) */
    RCP_PARAM_TETHERED_SERVER_SPACE_TOTAL,            /**< TSRVSPT: added in Parameter Set Version 6.1 (Intended for internal RED use only) */
    RCP_PARAM_TETHERED_SERVER_SPACE_REMAINING,        /**< TSRVSPR: added in Parameter Set Version 6.1 (Intended for internal RED use only) */
    RCP_PARAM_TETHERED_SERVER_REEL_NO,                /**< TSRVRN: added in Parameter Set Version 6.1 (Intended for internal RED use only) */
    RCP_PARAM_TETHERED_SERVER_CLIP_NO,                /**< TSRVCN: added in Parameter Set Version 6.1 (Intended for internal RED use only) */
    RCP_PARAM_PL_POWER,                               /**< PLPOWER: added in Parameter Set Version 6.1 */
    RCP_PARAM_PL_DETECT,                              /**< PLDETECT: added in Parameter Set Version 6.1 */
    RCP_PARAM_GENLOCK_OFFSET_HDSDI,                   /**< BHDSGLO: added in Parameter Set Version 6.1 */
    RCP_PARAM_GENLOCK_OFFSET_REDCAST,                 /**< TURRGLO: added in Parameter Set Version 6.1 */
    RCP_PARAM_AF_RACK_POINT_SELECT,                   /**< AFRCKSEL: added in Parameter Set Version 6.1 */
    RCP_PARAM_AF_WINDOW_POS_X,                        /**< AFWPOSX: added in Parameter Set Version 6.1 */
    RCP_PARAM_AF_WINDOW_POS_Y,                        /**< AFWPOSY: added in Parameter Set Version 6.1 */
    RCP_PARAM_AF_WINDOW_POS_MOVE_COMPLETE,            /**< AFWPOSC: added in Parameter Set Version 6.1 */
    RCP_PARAM_CAMERA_LUT_LIST,                        /**< CLUT: added in Parameter Set Version 6.10 */
    RCP_PARAM_CAMERA_LUT_EXPORT_TO_MEDIA,             /**< CLUTE2M: added in Parameter Set Version 6.10 */
    RCP_PARAM_CAMERA_LUT_EXPORT_ALL_TO_MEDIA,         /**< CLUTEA2M: added in Parameter Set Version 6.10 */
    RCP_PARAM_CAMERA_LUT_DELETE,                      /**< CLUTDEL: added in Parameter Set Version 6.10 */
    RCP_PARAM_MEDIA_LUT_LIST,                         /**< MLUT: added in Parameter Set Version 6.10 */
    RCP_PARAM_MEDIA_LUT_IMPORT_TO_CAMERA,             /**< MLUTI2C: added in Parameter Set Version 6.10 */
    RCP_PARAM_MEDIA_LUT_IMPORT_ALL_TO_CAMERA,         /**< MLUTIA2C: added in Parameter Set Version 6.10 */
    RCP_PARAM_LUT_CH_0,                               /**< CLUTCH0: added in Parameter Set Version 6.10 */
    RCP_PARAM_LUT_CH_1,                               /**< CLUTCH1: added in Parameter Set Version 6.10 */
    RCP_PARAM_LUT_CH_2,                               /**< CLUTCH2: added in Parameter Set Version 6.10 */
    RCP_PARAM_LUT_CH_3,                               /**< CLUTCH3: added in Parameter Set Version 6.10 */
    RCP_PARAM_MONITOR_FLIP_MIRROR_SUPPORTED_BRAIN_EVF, /**< BEVFFMSP: added in Parameter Set Version 6.10 */
    RCP_PARAM_MONITOR_FLIP_MIRROR_SUPPORTED_REAR_EVF, /**< REVFFMSP: added in Parameter Set Version 6.10 */
    RCP_PARAM_MONITOR_FLIP_MIRROR_BRAIN_EVF,          /**< BEVFFM2: added in Parameter Set Version 6.10 */
    RCP_PARAM_MONITOR_FLIP_MIRROR_REAR_EVF,           /**< REVFFM2: added in Parameter Set Version 6.10 */
    RCP_PARAM_AUDIO_CH12_OUTPUT_NAME,                 /**< CH12ONME: added in Parameter Set Version 6.10 */
    RCP_PARAM_AUDIO_CH34_OUTPUT_NAME,                 /**< CH34ONME: added in Parameter Set Version 6.10 */
    RCP_PARAM_AUDIO_CH56_OUTPUT_NAME,                 /**< CH56ONME: added in Parameter Set Version 6.10 */
    RCP_PARAM_AE_EXPOSURE_PRIORITY,                   /**< AEEXPRI: added in Parameter Set Version 6.10 */
    RCP_PARAM_RECORD_FILE_FORMAT,                     /**< FILEFMT: added in Parameter Set Version 6.20 */
    RCP_PARAM_RECORD_VIDEO_CODEC,                     /**< VCODEC: added in Parameter Set Version 6.20 */
    RCP_PARAM_MIN_RECORD_VIDEO_CODEC,                 /**< Composite of @ref RCP_PARAM_RECORD_VIDEO_CODEC_RESOLUTION */
    RCP_PARAM_RECORD_VIDEO_CODEC_RESOLUTION,          /**< VCODECR: added in Parameter Set Version 6.20 */
    RCP_PARAM_RECORD_VIDEO_MXF_CODEC,                 /**< VMCODEC: added in Parameter Set Version 6.40 */
    RCP_PARAM_MIN_RECORD_VIDEO_MXF_CODEC,             /**< Composite of @ref RCP_PARAM_RECORD_VIDEO_MXF_CODEC_RESOLUTION */
    RCP_PARAM_RECORD_VIDEO_MXF_CODEC_RESOLUTION,      /**< VMCODECR: added in Parameter Set Version 6.40 */
    RCP_PARAM_RECORD_VIDEO_MXF_COMPRESSION_ID,        /**< MXFCMPID: added in Parameter Set Version 6.40 */
    RCP_PARAM_HARDWARE_CAPABILITIES,                  /**< HWCAP: added in Parameter Set Version 6.20 */
    RCP_PARAM_AUDIO_CH1_MUTE,                         /**< CH1MUTE: added in Parameter Set Version 6.20 */
    RCP_PARAM_AUDIO_CH2_MUTE,                         /**< CH2MUTE: added in Parameter Set Version 6.20 */
    RCP_PARAM_AUDIO_MIX_CH12_VOL1,                    /**< MIX12VL1: added in Parameter Set Version 6.20 */
    RCP_PARAM_AUDIO_MIX_CH12_PAN1,                    /**< MIX12PN1: added in Parameter Set Version 6.20 */
    RCP_PARAM_AUDIO_MIX_CH12_VOL2,                    /**< MIX12VL2: added in Parameter Set Version 6.20 */
    RCP_PARAM_AUDIO_MIX_CH12_PAN2,                    /**< MIX12PN2: added in Parameter Set Version 6.20 */
    RCP_PARAM_AUDIO_MIX_CH12_VOL3,                    /**< MIX12VL3: added in Parameter Set Version 6.20 */
    RCP_PARAM_AUDIO_MIX_CH12_PAN3,                    /**< MIX12PN3: added in Parameter Set Version 6.20 */
    RCP_PARAM_AUDIO_MIX_CH12_VOL4,                    /**< MIX12VL4: added in Parameter Set Version 6.20 */
    RCP_PARAM_AUDIO_MIX_CH12_PAN4,                    /**< MIX12PN4: added in Parameter Set Version 6.20 */
    RCP_PARAM_AUDIO_MIX_CH34_VOL1,                    /**< MIX12VL1: added in Parameter Set Version 6.20 */
    RCP_PARAM_AUDIO_MIX_CH34_PAN1,                    /**< MIX12PN1: added in Parameter Set Version 6.20 */
    RCP_PARAM_AUDIO_MIX_CH34_VOL2,                    /**< MIX12VL2: added in Parameter Set Version 6.20 */
    RCP_PARAM_AUDIO_MIX_CH34_PAN2,                    /**< MIX12PN2: added in Parameter Set Version 6.20 */
    RCP_PARAM_AUDIO_MIX_CH34_VOL3,                    /**< MIX12VL3: added in Parameter Set Version 6.20 */
    RCP_PARAM_AUDIO_MIX_CH34_PAN3,                    /**< MIX12PN3: added in Parameter Set Version 6.20 */
    RCP_PARAM_AUDIO_MIX_CH34_VOL4,                    /**< MIX12VL4: added in Parameter Set Version 6.20 */
    RCP_PARAM_AUDIO_MIX_CH34_PAN4,                    /**< MIX12PN4: added in Parameter Set Version 6.20 */
    RCP_PARAM_AUDIO_MIX_MON_VOL1,                     /**< MIXHDVL1: added in Parameter Set Version 6.20 */
    RCP_PARAM_AUDIO_MIX_MON_PAN1,                     /**< MIXHDPN1: added in Parameter Set Version 6.20 */
    RCP_PARAM_AUDIO_MIX_MON_VOL2,                     /**< MIXHDVL2: added in Parameter Set Version 6.20 */
    RCP_PARAM_AUDIO_MIX_MON_PAN2,                     /**< MIXHDPN2: added in Parameter Set Version 6.20 */
    RCP_PARAM_AUDIO_MIX_MON_VOL3,                     /**< MIXHDVL3: added in Parameter Set Version 6.20 */
    RCP_PARAM_AUDIO_MIX_MON_PAN3,                     /**< MIXHDPN3: added in Parameter Set Version 6.20 */
    RCP_PARAM_AUDIO_MIX_MON_VOL4,                     /**< MIXHDVL4: added in Parameter Set Version 6.20 */
    RCP_PARAM_AUDIO_MIX_MON_PAN4,                     /**< MIXHDPN4: added in Parameter Set Version 6.20 */
    RCP_PARAM_MONITOR_LCD_EVF_2_HDMI_MUX,             /**< HDMIMUX: added in Parameter Set Version 6.20 */
    RCP_PARAM_WIFI_MODE,                              /**< WLANMODE: added in Parameter Set Version 6.20 */
    RCP_PARAM_WIFI_AD_HOC_ENCRYPTION,                 /**< WLANAHEN: added in Parameter Set Version 6.20 */
    RCP_PARAM_WIFI_AD_HOC_PASSPHRASE,                 /**< WLANAHPW: added in Parameter Set Version 6.20 */
    RCP_PARAM_WIFI_AD_HOC_SSID,                       /**< WLANAHID: added in Parameter Set Version 6.20 */
    RCP_PARAM_WIFI_CHANNEL,                           /**< WLANCHAN: added in Parameter Set Version 6.20 */
    RCP_PARAM_WIFI_INFRASTRUCTURE_ENCRYPTION,         /**< WLANAPEN: added in Parameter Set Version 6.20 */
    RCP_PARAM_WIFI_INFRASTRUCTURE_PASSPHRASE,         /**< WLANAPPW: added in Parameter Set Version 6.20 */
    RCP_PARAM_WIFI_INFRASTRUCTURE_SSID,               /**< WLANAPID: added in Parameter Set Version 6.20 */
    RCP_PARAM_WIFI_SIGNAL,                            /**< WLANSIG: added in Parameter Set Version 6.20 */
    RCP_PARAM_WIFI_CONNECT,                           /**< WLANCONN: added in Parameter Set Version 6.20 */
    RCP_PARAM_WIFI_SCAN,                              /**< WLANSCAN: added in Parameter Set Version 6.20 */
    RCP_PARAM_WIFI_SCAN_RESULTS,                      /**< WLANSCRL: added in Parameter Set Version 6.20 */
    RCP_PARAM_WIFI_SCAN_SELECT,                       /**< WLANSCS: added in Parameter Set Version 6.30 */
    RCP_PARAM_WIFI_IP_ADDRESS,                        /**< WLANIP: added in Parameter Set Version 6.20 */
    RCP_PARAM_WIFI_NETMASK,                           /**< WLANNETM: added in Parameter Set Version 6.41 */
    RCP_PARAM_WIFI_GATEWAY,                           /**< WLANGATE: added in Parameter Set Version 6.41 */
    RCP_PARAM_WIFI_DHCP_ENABLE,                       /**< WLANDHCP: added in Parameter Set Version 6.41 */
    RCP_PARAM_WIFI_MAC_ADDRESS,                       /**< WLANMAC: added in Parameter Set Version 6.50 */
    RCP_PARAM_MODULE_CAPABILITIES,                    /**< MODCAP: added in Parameter Set Version 6.20 */
    RCP_PARAM_POWER_OUT_PRO_IO_GPIO_ENABLE,           /**< POPIOGE: added in Parameter Set Version 6.20 */
    RCP_PARAM_POWER_OUT_PRO_IO_GPIO_STATUS,           /**< POPIOGS: added in Parameter Set Version 6.20 */
    RCP_PARAM_POWER_OUT_PRO_IO_GPIO_RESET,            /**< POPIOGR: added in Parameter Set Version 6.20 */
    RCP_PARAM_POWER_OUT_PRO_IO_PWR_ENABLE,            /**< POPIOPE: added in Parameter Set Version 6.20 */
    RCP_PARAM_POWER_OUT_PRO_IO_PWR_STATUS,            /**< POPIOPS: added in Parameter Set Version 6.20 */
    RCP_PARAM_POWER_OUT_PRO_IO_PWR_RESET,             /**< POPIOPR: added in Parameter Set Version 6.20 */
    RCP_PARAM_POWER_OUT_PRO_IO_AUX_ENABLE,            /**< POPIOAE: added in Parameter Set Version 6.20 */
    RCP_PARAM_POWER_OUT_PLUS_ONE_PWR_ENABLE,          /**< POPOPE: added in Parameter Set Version 6.20 */
    RCP_PARAM_POWER_OUT_PLUS_ONE_PWR_STATUS,          /**< POPOPS: added in Parameter Set Version 6.20 */
    RCP_PARAM_POWER_OUT_PLUS_ONE_PWR_RESET,           /**< POPOPR: added in Parameter Set Version 6.20 */
    RCP_PARAM_POWER_OUT_BAT_AUX_ENABLE,               /**< POBAE: added in Parameter Set Version 6.20 */
    RCP_PARAM_POWER_OUT_BAT_AUX_STATUS,               /**< POBAS: added in Parameter Set Version 6.20 */
    RCP_PARAM_POWER_OUT_BAT_AUX_CURRENT,              /**< POBAC: added in Parameter Set Version 6.20 */
    RCP_PARAM_POWER_OUT_BAT_AUX_RESET,                /**< POBAR: added in Parameter Set Version 6.20 */
    RCP_PARAM_POWER_OUT_JETPACK_USB_ENABLE,           /**< POJPUE: added in Parameter Set Version 6.20 */
    RCP_PARAM_POWER_OUT_JETPACK_USB_STATUS,           /**< POJPUS: added in Parameter Set Version 6.20 */
    RCP_PARAM_POWER_OUT_JETPACK_USB_RESET,            /**< POJPUR: added in Parameter Set Version 6.20 */
    RCP_PARAM_POWER_OUT_REAR_AUX_ENABLE,              /**< PORXAE: added in Parameter Set Version 6.32 */
    RCP_PARAM_POWER_OUT_REAR_AUX_STATUS,              /**< PORXAS: added in Parameter Set Version 6.32 */
    RCP_PARAM_POWER_OUT_REAR_AUX_RESET,               /**< PORXAR: added in Parameter Set Version 6.32 */
    RCP_PARAM_POWER_OUT_REAR_AUX_CURRENT,             /**< PORXAC: added in Parameter Set Version 6.32 */
    RCP_PARAM_POWER_OUT_TIMECODE_ENABLE,              /**< PORXTCE: added in Parameter Set Version 6.32 */
    RCP_PARAM_POWER_OUT_TIMECODE_STATUS,              /**< PORXTCS: added in Parameter Set Version 6.32 */
    RCP_PARAM_POWER_OUT_TIMECODE_RESET,               /**< PORXTCR: added in Parameter Set Version 6.32 */
    RCP_PARAM_POWER_SAVE_STATE,                       /**< PWRSAVE: see @ref power_save_state_t, added in Parameter Set Version 6.20 */
    RCP_PARAM_QUALITY,                                /**< Composite of @ref RCP_PARAM_REDCODE, @ref RCP_PARAM_RECORD_FILE_FORMAT, @ref RCP_PARAM_RECORD_VIDEO_CODEC, and @ref RCP_PARAM_RECORD_VIDEO_MXF_CODEC, added in Parameter Set Version 6.20 */
    RCP_PARAM_CUSTOM_SENSOR_FRAME_RATE,               /**< CUSTMFPS: added in Parameter Set Version 6.20 */
    RCP_PARAM_MASTER_SENSOR_FRAME_RATE,               /**< MASTRFPS: added in Parameter Set Version 6.20 */
    RCP_PARAM_CUSTOM_RECORD_FORMAT,                   /**< CUSTMFMT: added in Parameter Set Version 6.20 */
    RCP_PARAM_MASTER_RECORD_FORMAT,                   /**< MASTRFMT: added in Parameter Set Version 6.20 */
    RCP_PARAM_CUSTOM_SHUTTER_ANGLE,                   /**< CUSTMPHS: added in Parameter Set Version 6.20 */
    RCP_PARAM_MASTER_SHUTTER_ANGLE,                   /**< MASTRPHS: added in Parameter Set Version 6.20 */
    RCP_PARAM_CUSTOM_INTEGRATION_TIME,                /**< CUSTMINT: added in Parameter Set Version 6.20 */
    RCP_PARAM_MASTER_INTEGRATION_TIME,                /**< MASTRINT: added in Parameter Set Version 6.20 */
    RCP_PARAM_CUSTOM_ISO,                             /**< CUSTMISO: added in Parameter Set Version 6.20 */
    RCP_PARAM_MASTER_ISO,                             /**< MASTRISO: added in Parameter Set Version 6.20 */
    RCP_PARAM_CUSTOM_REDCODE,                         /**< CUSTMRC: added in Parameter Set Version 6.20 */
    RCP_PARAM_MASTER_REDCODE,                         /**< MASTRRC: added in Parameter Set Version 6.20 */
    RCP_PARAM_CUSTOM_COLOR_TEMPERATURE,               /**< CUSTMAWB: added in Parameter Set Version 6.20 */
    RCP_PARAM_MASTER_COLOR_TEMPERATURE,               /**< MASTRAWB: added in Parameter Set Version 6.20 */
    RCP_PARAM_USE_CUSTOM_FORMAT,                      /**< USECFL: added in Parameter Set Version 6.20 */
    RCP_PARAM_USE_CUSTOM_FRAME_RATE,                  /**< USECFRL: added in Parameter Set Version 6.20 */
    RCP_PARAM_USE_CUSTOM_SHUTTER_ANGLE,               /**< USECPHSL: added in Parameter Set Version 6.20 */
    RCP_PARAM_USE_CUSTOM_INTEGRATION_TIME,            /**< USECINTL: added in Parameter Set Version 6.20 */
    RCP_PARAM_USE_CUSTOM_ISO,                         /**< USECISOL: added in Parameter Set Version 6.20 */
    RCP_PARAM_USE_CUSTOM_REDCODE,                     /**< USECRCL: added in Parameter Set Version 6.20 */
    RCP_PARAM_USE_CUSTOM_COLOR_TEMPERATURE,           /**< USECWBL: added in Parameter Set Version 6.20 */
    RCP_PARAM_MONITOR_FEED_LCD,                       /**< LCDG: added in Parameter Set Version 6.20 */
    RCP_PARAM_MONITOR_FEED_HDMI,                      /**< HDMIG: added in Parameter Set Version 6.20 */
    RCP_PARAM_MONITOR_FEED_HDSDI,                     /**< HDSDIG: added in Parameter Set Version 6.20 */
    RCP_PARAM_MONITOR_FEED_EVF,                       /**< EVFG: added in Parameter Set Version 6.20 */
    RCP_PARAM_MONITOR_FEED_REAR_LCD,                  /**< PLCDG: added in Parameter Set Version 6.20 */
    RCP_PARAM_MONITOR_FEED_REAR_HDSDI1,               /**< PHDSDI1G: added in Parameter Set Version 6.20 */
    RCP_PARAM_MONITOR_FEED_REAR_HDSDI2,               /**< PHDSDI2G: added in Parameter Set Version 6.20 */
    RCP_PARAM_MONITOR_FEED_REAR_EVF,                  /**< REVFG: added in Parameter Set Version 6.20 */
    RCP_PARAM_VIDEO_SOURCE,                           /**< VIDEOSRC: added in Parameter Set Version 6.20 */
    RCP_PARAM_LUT_FEED_1,                             /**< CLUTF1: added in Parameter Set Version 6.20 */
    RCP_PARAM_FLIP_MIRROR_FEED_0,                     /**< ROTF0: added in Parameter Set Version 6.20 */
    RCP_PARAM_FLIP_MIRROR_FEED_1,                     /**< ROTF1: added in Parameter Set Version 6.20 */
    RCP_PARAM_FLIP_MIRROR_FEED_0_1,                   /**< ROTF01: added in Parameter Set Version 6.50 */
    RCP_PARAM_SSD_TALLY_LIGHT,                        /**< SSDTALLY: added in Parameter Set Version 6.20 */
    RCP_PARAM_OVERDRIVE_FRAME_RATE,                   /**< PORECFPS: added in Parameter Set Version 6.20 */
    RCP_PARAM_PRE_RECORD,                             /**< PREREC: added in Parameter Set Version 6.20 */
    RCP_PARAM_CALIBRATION_ENTRY,                      /**< CALENTRY: added in Parameter Set Version 6.20 */
    RCP_PARAM_RECORD_VIDEO_CODEC_FEED,                /**< VCODECG: added in Parameter Set Version 6.20 */
    RCP_PARAM_RECORD_REDCODE_RAW_STATE,               /**< R3DST: added in Parameter Set Version 6.20 */
    RCP_PARAM_RECORD_REDCODE_RAW_STATE_DETAILED,      /**< R3DSTD: added in Parameter Set Version 6.30 */
    RCP_PARAM_RECORD_QUICKTIME_STATE,                 /**< QTST: added in Parameter Set Version 6.20 */
    RCP_PARAM_RECORD_QUICKTIME_STATE_DETAILED,        /**< QTSTD: added in Parameter Set Version 6.30 */
    RCP_PARAM_RECORD_MXF_STATE,                       /**< MXFST: added in Parameter Set Version 6.40 */
    RCP_PARAM_RECORD_MXF_STATE_DETAILED,              /**< MXFSTD: added in Parameter Set Version 6.40 */
    RCP_PARAM_SENSOR_SCAN_DIRECTION,                  /**< SSCANDIR: added in Parameter Set Version 6.20 */
    RCP_PARAM_MEDIA_FORMAT_FILE_SYSTEM,               /**< FMTFSYS: added in Parameter Set Version 6.30 */
    RCP_PARAM_WIPE_CAMERA,                            /**< RESETUSR: added in Parameter Set Version 6.30 */
    RCP_PARAM_PROXY_ENCODE_FRAMERATE,                 /**< PROXYFPS: added in Parameter Set Version 6.30 */
    RCP_PARAM_PRORES_ENCODE_FRAMERATE,                /**< PROXYFPS: added in Parameter Set Version 6.50 */
    RCP_PARAM_MXF_ENCODE_FRAMERATE,                   /**< PROXYFPS: added in Parameter Set Version 6.50 */
    RCP_PARAM_CAMERA_CAL_LIST,                        /**< CCAL: added in Parameter Set Version 6.30 */
    RCP_PARAM_CAMERA_CAL_APPLY,                       /**< CCALAPLY: added in Parameter Set Version 6.30 */
    RCP_PARAM_CAMERA_CAL_EXPORT_TO_MEDIA,             /**< CCALE2M: added in Parameter Set Version 6.30 */
    RCP_PARAM_CAMERA_CAL_EXPORT_ALL_TO_MEDIA,         /**< CCALEA2M: added in Parameter Set Version 6.30 */
    RCP_PARAM_CAMERA_CAL_DELETE,                      /**< CCALDEL: added in Parameter Set Version 6.30 */
    RCP_PARAM_MEDIA_CAL_LIST,                         /**< MCAL: added in Parameter Set Version 6.30 */
    RCP_PARAM_MEDIA_CAL_APPLY,                        /**< MCALAPLY: added in Parameter Set Version 6.30 */
    RCP_PARAM_MEDIA_CAL_IMPORT_TO_CAMERA,             /**< MCALI2C: added in Parameter Set Version 6.30 */
    RCP_PARAM_MEDIA_CAL_IMPORT_ALL_TO_CAMERA,         /**< MCALIA2C: added in Parameter Set Version 6.30 */
    RCP_PARAM_PRORES_WIDTH,                           /**< PRORESW: added in Parameter Set Version 6.30 */
    RCP_PARAM_PRORES_HEIGHT,                          /**< PRORESH: added in Parameter Set Version 6.30 */
    RCP_PARAM_PRORES_DIMENSION,                       /**< Composite of @ref RCP_PARAM_PRORES_WIDTH, @ref RCP_PARAM_PRORES_HEIGHT added in Parameter Set Version 6.30 */
    RCP_PARAM_MXF_WIDTH,                              /**< MXFW: added in Parameter Set Version 6.40 */
    RCP_PARAM_MXF_HEIGHT,                             /**< MXFH: added in Parameter Set Version 6.40 */
    RCP_PARAM_MXF_DIMENSION,                          /**< Composite of @ref RCP_PARAM_MXF_WIDTH, @ref RCP_PARAM_MXF_HEIGHT added in Parameter Set Version 4.30 */
    RCP_PARAM_OPEN_GATE_MODE,                         /**< OGTMODE: added in Parameter Set Version 6.30 */
    RCP_PARAM_OPEN_GATE_STATE,                        /**< OGTSTATE: added in Parameter Set Version 6.30 */
    RCP_PARAM_LENS_IMAGE_STABILIZATION_ENABLED,       /**< LENSISEN: added in Parameter Set Version 6.40 */
    RCP_PARAM_LENS_CAPABILITIES,                      /**< LENSCAP: added in Parameter Set Version 6.40 */
    RCP_PARAM_PLAYBACK_FILE_FORMAT,                   /**< PLAYFMT: added in Parameter Set Version 6.40 */
    RCP_PARAM_MONITOR_MODE_LCD3,                      /**< LCD3M: added in Parameter Set Version 6.40 */
    RCP_PARAM_MONITOR_OVERLAY_LCD3,                   /**< LCD3OV: added in Parameter Set Version 6.40 */
    RCP_PARAM_MONITOR_FREQ_LCD3,                      /**< LCD3F: added in Parameter Set Version 6.40 */
    RCP_PARAM_MONITOR_CURVE_LCD3,                     /**< LCD3CV: added in Parameter Set Version 6.40 */
    RCP_PARAM_MONITOR_TOOLS_LCD3,                     /**< LCD3TL: added in Parameter Set Version 6.40 */
    RCP_PARAM_MONITOR_UI_FLIP_MIRROR_LCD3,            /**< LCD3FM: added in Parameter Set Version 6.40 */
    RCP_PARAM_MONITOR_VIDEO_FLIP_LCD3,                /**< LCD3VF: added in Parameter Set Version 6.40 */
    RCP_PARAM_MONITOR_FLIP_MIRROR_LCD3,               /**< LCD3FM2: added in Parameter Set Version 6.40 */
    RCP_PARAM_MONITOR_FRAMED_OVERLAY_LCD3,            /**< LCD3FO: added in Parameter Set Version 6.40 */
    RCP_PARAM_MONITOR_DOCK_MENUS_LCD3,                /**< LCD3DM: added in Parameter Set Version 6.40 */
    RCP_PARAM_MONITOR_FEED_LCD3,                      /**< LCD3G: added in Parameter Set Version 6.40 */
    RCP_PARAM_MONITOR_FLIP_MIRROR_SUPPORTED_LCD3,     /**< LCD3FMSP: added in Parameter Set Version 6.40 */
    RCP_PARAM_MONITOR_MODE_EVF3,                      /**< EVF3M: added in Parameter Set Version 6.40 */
    RCP_PARAM_MONITOR_OVERLAY_EVF3,                   /**< EVF3OV: added in Parameter Set Version 6.40 */
    RCP_PARAM_MONITOR_FREQ_EVF3,                      /**< EVF3F: added in Parameter Set Version 6.40 */
    RCP_PARAM_MONITOR_CURVE_EVF3,                     /**< EVF3CV: added in Parameter Set Version 6.40 */
    RCP_PARAM_MONITOR_TOOLS_EVF3,                     /**< EVF3TL: added in Parameter Set Version 6.40 */
    RCP_PARAM_MONITOR_UI_FLIP_MIRROR_EVF3,            /**< EVF3FM: added in Parameter Set Version 6.40 */
    RCP_PARAM_MONITOR_VIDEO_FLIP_EVF3,                /**< EVF3VF: added in Parameter Set Version 6.40 */
    RCP_PARAM_MONITOR_FLIP_MIRROR_EVF3,               /**< EVF3FM2: added in Parameter Set Version 6.40 */
    RCP_PARAM_MONITOR_FRAMED_OVERLAY_EVF3,            /**< EVF3FO: added in Parameter Set Version 6.40 */
    RCP_PARAM_MONITOR_DOCK_MENUS_EVF3,                /**< EVF3DM: added in Parameter Set Version 6.40 */
    RCP_PARAM_MONITOR_FEED_EVF3,                      /**< EVF3G: added in Parameter Set Version 6.40 */
    RCP_PARAM_MONITOR_FLIP_MIRROR_SUPPORTED_EVF3,     /**< EVF3FMSP: added in Parameter Set Version 6.40 */
    RCP_PARAM_MONITOR_BRIGHTNESS_LCD3,                /**< LCD3BR: added in Parameter Set Version 6.40 */
    RCP_PARAM_MONITOR_BRIGHTNESS_EVF3,                /**< EVF3BR: added in Parameter Set Version 6.40 */
    RCP_PARAM_PLAYBACK_FILE_FORMAT_TYPE,              /**< PLAYTYPE: added in Parameter Set Version 6.40 */
    RCP_PARAM_OLPF_THIRD_PARTY_NAME,                  /**< OLPFTPNM: added in Parameter Set Version 6.40 */
    RCP_PARAM_OLPF_THIRD_PARTY_EMULATED_TYPE,         /**< OLPFTPEM: added in Parameter Set Version 6.40 */
    RCP_PARAM_LENS_META_NAME,                         /**< LNMTNAME: added in Parameter Set Version 6.40 */
    RCP_PARAM_LENS_META_SERIAL,                       /**< LNMTSERL: added in Parameter Set Version 6.40 */
    RCP_PARAM_LENS_META_OWNER,                        /**< LNMTOWNR: added in Parameter Set Version 6.40 */
    RCP_PARAM_LENS_META_MANUFACTURER,                 /**< LNMTMANU: added in Parameter Set Version 6.40 */
    RCP_PARAM_LENS_META_FLEN_MIN,                     /**< LNMTFLMN: added in Parameter Set Version 6.40 */
    RCP_PARAM_LENS_META_FLEN_MAX,                     /**< LNMTFLMX: added in Parameter Set Version 6.40 */
    RCP_PARAM_RECORD_R3D_METADATA_CURVE,              /**< METACV: added in Parameter Set Version 6.40 */
    RCP_PARAM_ND_INCREMENT_SIZE,                      /**< MMNDINSZ: added in Parameter Set Version 6.50 */
    RCP_PARAM_ZEBRA_1_PATTERN,                        /**< ZEB1PAT: added in Parameter Set Version 6.50 */
    RCP_PARAM_ZEBRA_2_PATTERN,                        /**< ZEB2PAT: added in Parameter Set Version 6.50 */
    RCP_PARAM_ZEBRA_1_COLOR,                          /**< ZEB1CLR: added in Parameter Set Version 6.50 */
    RCP_PARAM_ZEBRA_2_COLOR,                          /**< ZEB2CLR: added in Parameter Set Version 6.50 */
    RCP_PARAM_AUDIO_CH1_MODE_STATUS,                  /**< AINSR1ST: added in Parameter Set Version 6.41 */
    RCP_PARAM_AUDIO_CH2_MODE_STATUS,                  /**< AINSR2ST: added in Parameter Set Version 6.41 */
    RCP_PARAM_AUDIO_CH3_MODE_STATUS,                  /**< AINSR3ST: added in Parameter Set Version 6.42 */
    RCP_PARAM_AUDIO_CH4_MODE_STATUS,                  /**< AINSR4ST: added in Parameter Set Version 6.42 */
    RCP_PARAM_START_USER_CAL_MANUAL_CURRENT_INT_TIME, /**< CALMANC: added in Parameter Set Version 6.50 */
    RCP_PARAM_START_USER_CAL_MANUAL_DEFAULT_INT_TIME, /**< CALMAND: added in Parameter Set Version 6.50 */
    RCP_PARAM_START_USER_CAL_AUTO,                    /**< CALAUTO: added in Parameter Set Version 6.50 */
    RCP_PARAM_MONITOR_CONTROL_SCREEN,                 /**< CTRLSCRN: added in Parameter Set Version 6.50 */
    RCP_PARAM_RCP_CLIENT_LIST,                        /**< RCPCLL: added in Parameter Set Version 6.50 */
    RCP_PARAM_BWF_ENABLE,                             /**< BWFENABL: added in Parameter Set Version 6.50 */
    RCP_PARAM_BWF_VALID,                              /**< BWFVALID: added in Parameter Set Version 6.50 */
    RCP_PARAM_WSH_FOCUS_WHEEL,                        /**< WSHFOCUS: added in Parameter Set Version 6.50 */
    RCP_PARAM_SIDE_MODULE_LOCK_KEYS,                  /**< SMLCKKEY: added in Parameter Set Version 6.50 */
    RCP_PARAM_SIDE_MODULE_RECORD_KEY_LOCKABLE,        /**< SMLCKREC: added in Parameter Set Version 6.50 */
    RCP_PARAM_SIDE_MODULE_NAV_KEYS_LOCKABLE,          /**< SMLCKNAV: added in Parameter Set Version 6.50 */
    RCP_PARAM_SHOW_KEY_ACTION_NOTIFICATIONS,          /**< KEYACNOT: added in Parameter Set Version 6.50 */

    /* Indexed Power In Messages
     * Note: if adding more placeholders make sure to update the *_LAST
     * pointers. Also, the dependency table entries for these
     * parameters are auto generated)
     * */
    RCP_PARAM_POWER_IN_LIST,                          /**< PWILIST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_PERCENT_0,                     /**< PWIBTLVL: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_PERCENT_1,                     /**< PWIBTLVL: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_PERCENT_2,                     /**< PWIBTLVL: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_PERCENT_3,                     /**< PWIBTLVL: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_PERCENT_4,                     /**< PWIBTLVL: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_PERCENT_5,                     /**< PWIBTLVL: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_PERCENT_6,                     /**< PWIBTLVL: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_PERCENT_7,                     /**< PWIBTLVL: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_PERCENT_8,                     /**< PWIBTLVL: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_PERCENT_9,                     /**< PWIBTLVL: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_PERCENT_LAST = RCP_PARAM_POWER_IN_PERCENT_9,
    RCP_PARAM_POWER_IN_RUNTIME_0,                     /**< PWIBTRT: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_RUNTIME_1,                     /**< PWIBTRT: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_RUNTIME_2,                     /**< PWIBTRT: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_RUNTIME_3,                     /**< PWIBTRT: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_RUNTIME_4,                     /**< PWIBTRT: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_RUNTIME_5,                     /**< PWIBTRT: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_RUNTIME_6,                     /**< PWIBTRT: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_RUNTIME_7,                     /**< PWIBTRT: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_RUNTIME_8,                     /**< PWIBTRT: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_RUNTIME_9,                     /**< PWIBTRT: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_RUNTIME_LAST = RCP_PARAM_POWER_IN_RUNTIME_9,
    RCP_PARAM_POWER_IN_VOLTAGE_0,                     /**< PWIVOLT: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_VOLTAGE_1,                     /**< PWIVOLT: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_VOLTAGE_2,                     /**< PWIVOLT: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_VOLTAGE_3,                     /**< PWIVOLT: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_VOLTAGE_4,                     /**< PWIVOLT: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_VOLTAGE_5,                     /**< PWIVOLT: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_VOLTAGE_6,                     /**< PWIVOLT: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_VOLTAGE_7,                     /**< PWIVOLT: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_VOLTAGE_8,                     /**< PWIVOLT: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_VOLTAGE_9,                     /**< PWIVOLT: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_VOLTAGE_LAST = RCP_PARAM_POWER_IN_VOLTAGE_9,
    RCP_PARAM_POWER_IN_CURRENT_0,                     /**< PWIAMPS: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_CURRENT_1,                     /**< PWIAMPS: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_CURRENT_2,                     /**< PWIAMPS: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_CURRENT_3,                     /**< PWIAMPS: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_CURRENT_4,                     /**< PWIAMPS: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_CURRENT_5,                     /**< PWIAMPS: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_CURRENT_6,                     /**< PWIAMPS: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_CURRENT_7,                     /**< PWIAMPS: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_CURRENT_8,                     /**< PWIAMPS: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_CURRENT_9,                     /**< PWIAMPS: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_CURRENT_LAST = RCP_PARAM_POWER_IN_CURRENT_9,
    RCP_PARAM_POWER_IN_PRESENT_0,                     /**< PWIPRST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_PRESENT_1,                     /**< PWIPRST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_PRESENT_2,                     /**< PWIPRST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_PRESENT_3,                     /**< PWIPRST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_PRESENT_4,                     /**< PWIPRST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_PRESENT_5,                     /**< PWIPRST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_PRESENT_6,                     /**< PWIPRST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_PRESENT_7,                     /**< PWIPRST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_PRESENT_8,                     /**< PWIPRST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_PRESENT_9,                     /**< PWIPRST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_IN_PRESENT_LAST = RCP_PARAM_POWER_IN_PRESENT_9,

    /* Indexed Power Out Messages
     * Note: if adding more placeholders make sure to update the *_LAST
     * pointers. Also, the dependency table entries for these
     * parameters are auto generated)
     * */
    RCP_PARAM_POWER_OUT_LIST,                         /**< PWOLIST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_ENABLE_0,                     /**< PWOIEN: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_ENABLE_1,                     /**< PWOIEN: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_ENABLE_2,                     /**< PWOIEN: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_ENABLE_3,                     /**< PWOIEN: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_ENABLE_4,                     /**< PWOIEN: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_ENABLE_5,                     /**< PWOIEN: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_ENABLE_6,                     /**< PWOIEN: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_ENABLE_7,                     /**< PWOIEN: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_ENABLE_8,                     /**< PWOIEN: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_ENABLE_9,                     /**< PWOIEN: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_ENABLE_LAST = RCP_PARAM_POWER_OUT_ENABLE_9,
    RCP_PARAM_POWER_OUT_STATUS_0,                     /**< PWOIST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_STATUS_1,                     /**< PWOIST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_STATUS_2,                     /**< PWOIST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_STATUS_3,                     /**< PWOIST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_STATUS_4,                     /**< PWOIST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_STATUS_5,                     /**< PWOIST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_STATUS_6,                     /**< PWOIST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_STATUS_7,                     /**< PWOIST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_STATUS_8,                     /**< PWOIST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_STATUS_9,                     /**< PWOIST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_STATUS_LAST = RCP_PARAM_POWER_OUT_STATUS_9,
    RCP_PARAM_POWER_OUT_RESET_0,                      /**< PWOIRST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_RESET_1,                      /**< PWOIRST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_RESET_2,                      /**< PWOIRST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_RESET_3,                      /**< PWOIRST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_RESET_4,                      /**< PWOIRST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_RESET_5,                      /**< PWOIRST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_RESET_6,                      /**< PWOIRST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_RESET_7,                      /**< PWOIRST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_RESET_8,                      /**< PWOIRST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_RESET_9,                      /**< PWOIRST: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_RESET_LAST = RCP_PARAM_POWER_OUT_RESET_9,
    RCP_PARAM_POWER_OUT_CURRENT_0,                    /**< PWOIAMPS: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_CURRENT_1,                    /**< PWOIAMPS: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_CURRENT_2,                    /**< PWOIAMPS: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_CURRENT_3,                    /**< PWOIAMPS: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_CURRENT_4,                    /**< PWOIAMPS: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_CURRENT_5,                    /**< PWOIAMPS: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_CURRENT_6,                    /**< PWOIAMPS: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_CURRENT_7,                    /**< PWOIAMPS: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_CURRENT_8,                    /**< PWOIAMPS: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_CURRENT_9,                    /**< PWOIAMPS: added in Parameter Set Version 6.50 */
    RCP_PARAM_POWER_OUT_CURRENT_LAST = RCP_PARAM_POWER_OUT_CURRENT_9,

    RCP_PARAM_MONITOR_LIST,                           /**< MONLIST: added in Parameter Set Version 6.50 */
    RCP_PARAM_SIDE_UI_NAME,                           /**< SUNAME: added in Parameter Set Version 6.50 */
    RCP_PARAM_SENSOR_WIDTH_PHY,                       /**< PHYSENSW: added in Parameter Set Version 6.50 */
    RCP_PARAM_SENSOR_HEIGHT_PHY,                      /**< PHYSENSH: added in Parameter Set Version 6.50 */
    RCP_PARAM_SENSOR_DIMENSIONS_PHY,                  /**< Composite of @ref RCP_PARAM_SENSOR_WIDTH_PHY and @ref RCP_PARAM_SENSOR_HEIGHT_PHY, added in Parameter Set Version 6.50 */
    RCP_PARAM_FORMAT_WIDTH_PHY,                       /**< Composite of @ref RCP_PARAM_SENSOR_WIDTH_PHY and @ref RCP_PARAM_FORMAT_WIDTH_PIXELS, added in Parameter Set Version 6.50 */
    RCP_PARAM_FORMAT_HEIGHT_PHY,                      /**< Composite of @ref RCP_PARAM_SENSOR_HEIGHT_PHY and @ref RCP_PARAM_FORMAT_HEIGHT_PIXELS, added in Parameter Set Version 6.50 */
    RCP_PARAM_FORMAT_DIMENSIONS_PHY,                  /**< Composite of @ref RCP_PARAM_FORMAT_WIDTH_PHY and @ref RCP_PARAM_FORMAT_HEIGHT_PHY, added in Parameter Set Version 6.50 */
    RCP_PARAM_FORMAT_WIDTH_PIXELS,                    /**< PXFMTW: added in Parameter Set Version 6.50 */
    RCP_PARAM_FORMAT_HEIGHT_PIXELS,                   /**< PXFMTH: added in Parameter Set Version 6.50 */
    RCP_PARAM_FORMAT_DIMENSIONS_PIXELS,               /**< Composite of @ref RCP_PARAM_FORMAT_WIDTH_PIXELS and @ref RCP_PARAM_FORMAT_HEIGHT_PIXELS, added in Parameter Set Version 6.50 */
    RCP_PARAM_RECORD_FORMAT_SPHERICAL,                /**< FRMTSPH: added in Parameter Set Version 6.50 */
    RCP_PARAM_RECORD_FORMAT_ANA_1_3,                  /**< FRMTA13: added in Parameter Set Version 6.50 */
    RCP_PARAM_RECORD_FORMAT_ANA_1_25,                 /**< FRMTA125: added in Parameter Set Version 6.50 */
    RCP_PARAM_RECORD_FORMAT_ANA_2,                    /**< FRMTA12: added in Parameter Set Version 6.50 */
    RCP_PARAM_RECORD_FORMAT_RESOLUTION,               /**< FRMTRES: added in Parameter Set Version 6.50 */
    RCP_PARAM_RECORD_FORMAT_ASPECT_RATIO,             /**< FRMTAR: added in Parameter Set Version 6.50 */
    RCP_PARAM_RECORD_FORMAT_ANAMORPHIC,               /**< FRMTANA: added in Parameter Set Version 6.50 */
    RCP_PARAM_RECORD_FORMAT_LOOKAROUND,               /**< FRMTLA: added in Parameter Set Version 6.50 */
    RCP_PARAM_SENSOR_NAME,                            /**< SENSNAME: added in Parameter Set Version 6.50 */
    RCP_PARAM_SHADOW_FORMAT_WIDTH_PHY,                /**< Composite of @ref RCP_PARAM_SENSOR_WIDTH_PHY and @ref RCP_PARAM_SHADOW_FORMAT_WIDTH_PIXELS, added in Parameter Set Version 6.50 */
    RCP_PARAM_SHADOW_FORMAT_HEIGHT_PHY,               /**< Composite of @ref RCP_PARAM_SENSOR_HEIGHT_PHY and @ref RCP_PARAM_SHADOW_FORMAT_HEIGHT_PIXELS, added in Parameter Set Version 6.50 */
    RCP_PARAM_SHADOW_FORMAT_DIMENSIONS_PHY,           /**< Composite of @ref RCP_PARAM_SHADOW_FORMAT_WIDTH_PHY and @ref RCP_PARAM_SHADOW_FORMAT_HEIGHT_PHY, added in Parameter Set Version 6.50 */
    RCP_PARAM_SHADOW_FORMAT_WIDTH_PIXELS,             /**< PXSFMTW: added in Parameter Set Version 6.50 */
    RCP_PARAM_SHADOW_FORMAT_HEIGHT_PIXELS,            /**< PXSFMTH: added in Parameter Set Version 6.50 */
    RCP_PARAM_SHADOW_FORMAT_DIMENSIONS_PIXELS,        /**< Composite of @ref RCP_PARAM_SHADOW_FORMAT_WIDTH_PIXELS and @ref RCP_PARAM_SHADOW_FORMAT_HEIGHT_PIXELS, added in Parameter Set Version 6.50 */
    RCP_PARAM_AMBIENT_CHANNEL,                        /**< AMBNTCH: added in Parameter Set Version 6.50 */
    RCP_PARAM_KEY_MAPPING_ACTION_LIST,                /**< ACTION: added in Parameter Set Version 6.50 */
    RCP_PARAM_DIALOG_LIST,                            /**< DIALOGS: added in Parameter Set Version 6.50 */
    RCP_PARAM_CAMERA_SCRIPT_LIST,                     /**< CSCR: added in Parameter Set Version 6.50 */
    RCP_PARAM_COLOR_SCIENCE,                          /**< COLORSCI: added in Parameter Set Version 6.50 */
    RCP_PARAM_IMAGE_PIPELINE_MODE,                    /**< IMGPIPEM: added in Parameter Set Version 6.50 */
    RCP_PARAM_SUPPORT_CONTACT,                        /**< SUPPORT: added in Parameter Set Version 6.50 */
    RCP_PARAM_CAMERA_CDL_LIST,                        /**< CCDL: added in Parameter Set Version 6.50 */
    RCP_PARAM_CAMERA_CDL_APPLY,                       /**< CCDLAPLY: added in Parameter Set Version 6.50 */
    RCP_PARAM_CAMERA_CDL_EXPORT_TO_MEDIA,             /**< CCDLE2M: added in Parameter Set Version 6.50 */
    RCP_PARAM_CAMERA_CDL_EXPORT_ALL_TO_MEDIA,         /**< CCDLEA2M: added in Parameter Set Version 6.50 */
    RCP_PARAM_CAMERA_CDL_CREATE,                      /**< CCDLCREA: added in Parameter Set Version 6.50 */
    RCP_PARAM_CAMERA_CDL_DELETE,                      /**< CCDLDEL: added in Parameter Set Version 6.50 */
    RCP_PARAM_MEDIA_CDL_LIST,                         /**< MCDL: added in Parameter Set Version 6.50 */
    RCP_PARAM_MEDIA_CDL_IMPORT_TO_CAMERA,             /**< MCDLI2C: added in Parameter Set Version 6.50 */
    RCP_PARAM_MEDIA_CDL_IMPORT_ALL_TO_CAMERA,         /**< MCDLIA2C: added in Parameter Set Version 6.50 */
    RCP_PARAM_SLATE_CAMERA_COLOR,                     /**< CAMCOLOR: added in Parameter Set Version 6.50 */
    RCP_PARAM_SIDE_UI_PAGE_USER_LEFT,                 /**< SUILPUSR: added in Parameter Set Version 6.50 */
    RCP_PARAM_SIDE_UI_PAGE_AUDIO_LEFT,                /**< SUILPAUD: added in Parameter Set Version 6.50 */
    RCP_PARAM_SIDE_UI_PAGE_MONITOR_LEFT,              /**< SUILPMON: added in Parameter Set Version 6.50 */
    RCP_PARAM_SIDE_UI_AUTO_HOME_LEFT,                 /**< SUILAH: added in Parameter Set Version 6.50 */
    RCP_PARAM_SIDE_UI_AUTO_HOME_TIMEOUT_LEFT,         /**< SUILAHTO: added in Parameter Set Version 6.50 */
    RCP_PARAM_SIDE_UI_PAGE_USER_RIGHT,                /**< SUIRPUSR: added in Parameter Set Version 6.50 */
    RCP_PARAM_SIDE_UI_PAGE_AUDIO_RIGHT,               /**< SUIRPAUD: added in Parameter Set Version 6.50 */
    RCP_PARAM_SIDE_UI_PAGE_MONITOR_RIGHT,             /**< SUIRPMON: added in Parameter Set Version 6.50 */
    RCP_PARAM_SIDE_UI_AUTO_HOME_RIGHT,                /**< SUIRAH: added in Parameter Set Version 6.50 */
    RCP_PARAM_SIDE_UI_AUTO_HOME_TIMEOUT_RIGHT,        /**< SUIRAHTO: added in Parameter Set Version 6.50 */
    RCP_PARAM_MONITOR_MODE_REAR_UHDSDI1,              /**< UHDSDI1M: added in Parameter Set Version 6.50 */
    RCP_PARAM_MONITOR_MODE_REAR_UHDSDI2,              /**< UHDSDI2M: added in Parameter Set Version 6.50 */
    RCP_PARAM_MONITOR_FREQ_REAR_UHDSDI,               /**< UHDSDIF: added in Parameter Set Version 6.50 */
    RCP_PARAM_DISPLAY_PRESET_REAR_UHDSDI,             /**< DPUHD: added in Parameter Set Version 6.50 */
    RCP_PARAM_RETURN_FEED,                            /**< RTRNFEED: added in Parameter Set Version 6.50 */
    RCP_PARAM_RETURN_FEED_STATE,                      /**< RTRNFST: added in Parameter Set Version 6.50 */
    RCP_PARAM_MONITOR_ALLOW_RETURN_FEED_LCD,          /**< BLCDRF: added in Parameter Set Version 6.50 */
    RCP_PARAM_MONITOR_ALLOW_RETURN_FEED_HDMI,         /**< BHDMIRF: added in Parameter Set Version 6.50 */
    RCP_PARAM_MONITOR_ALLOW_RETURN_FEED_HDSDI,        /**< BHDSDIRF: added in Parameter Set Version 6.50 */
    RCP_PARAM_MONITOR_ALLOW_RETURN_FEED_EVF,          /**< BEVFRF: added in Parameter Set Version 6.50 */
    RCP_PARAM_MONITOR_ALLOW_RETURN_FEED_REAR_LCD,     /**< PLCDRF: added in Parameter Set Version 6.50 */
    RCP_PARAM_MONITOR_ALLOW_RETURN_FEED_REAR_HDSDI1,  /**< PSDI1RF: added in Parameter Set Version 6.50 */
    RCP_PARAM_MONITOR_ALLOW_RETURN_FEED_REAR_HDSDI2,  /**< PSDI2RF: added in Parameter Set Version 6.50 */
    RCP_PARAM_MONITOR_ALLOW_RETURN_FEED_REAR_EVF,     /**< REVFRF: added in Parameter Set Version 6.50 */
    RCP_PARAM_MONITOR_ALLOW_RETURN_FEED_LCD3,         /**< LCD3RF: added in Parameter Set Version 6.50 */
    RCP_PARAM_MONITOR_ALLOW_RETURN_FEED_EVF3,         /**< EVF3RF: added in Parameter Set Version 6.50 */
    RCP_PARAM_OUTPUT_TRANSFORM,                       /**< OUTPUTTR: added in Parameter Set Version 6.50 */
    RCP_PARAM_DISPLAY_PRESET_LCD,                     /**< DPLCD: added in Parameter Set Version 6.50 */
    RCP_PARAM_DISPLAY_PRESET_HDMI,                    /**< DPHDMI: added in Parameter Set Version 6.50 */
    RCP_PARAM_DISPLAY_PRESET_HDSDI,                   /**< DPHDSDI: added in Parameter Set Version 6.50 */
    RCP_PARAM_DISPLAY_PRESET_EVF,                     /**< DPEVF: added in Parameter Set Version 6.50 */
    RCP_PARAM_DISPLAY_PRESET_REAR_LCD,                /**< DPRLCD: added in Parameter Set Version 6.50 */
    RCP_PARAM_DISPLAY_PRESET_REAR_HDSDI1,             /**< DPPHDSD1: added in Parameter Set Version 6.50 */
    RCP_PARAM_DISPLAY_PRESET_REAR_HDSDI2,             /**< DPPHDSD2: added in Parameter Set Version 6.50 */
    RCP_PARAM_DISPLAY_PRESET_REAR_EVF,                /**< DPREVF: added in Parameter Set Version 6.50 */
    RCP_PARAM_DISPLAY_PRESET_LCD3,                    /**< DPLCD3: added in Parameter Set Version 6.50 */
    RCP_PARAM_DISPLAY_PRESET_EVF3,                    /**< DPEVF3: added in Parameter Set Version 6.50 */
    RCP_PARAM_OUTPUT_TONE_MAP,                        /**< DEVCON: added in Parameter Set Version 6.50 */
    RCP_PARAM_MIN_FRAME_PROCESSING_MODE,              /**< MINFRPRM: added in Parameter Set Version 6.50 */
    RCP_PARAM_MAX_FRAME_PROCESSING_MODE,              /**< MAXFRPRM: added in Parameter Set Version 6.50 */
    RCP_PARAM_MIN_FRAME_PROCESSING_FRAME_COUNT,       /**< MINFRPRF: added in Parameter Set Version 6.50 */
    RCP_PARAM_MAX_FRAME_PROCESSING_FRAME_COUNT,       /**< MAXFRPRF: added in Parameter Set Version 6.50 */
    RCP_PARAM_ROLL_OFF,                               /**< ROLLOFF: added in Parameter Set Version 6.50 */
    RCP_PARAM_LOOKAROUND_AVAILABLE,                   /**< FRMTLAST: added in Parameter Set Version 6.50 */
    RCP_PARAM_LOG_VIEW_MODE,                          /**< LOGVWMDE: see @ref log_view_mode_t, added in Parameter Set Version 6.50 */
    RCP_PARAM_AUTO_FOCUS_PEAK,                        /**< AUTOPEAK: added in Parameter Set Version 6.50 */
    RCP_PARAM_TIMECODE_DROP_FRAME_DISPLAY_MODE,       /**< TCDFMODE: see @ref tc_drop_frame_display_t, added in Parameter Set Version 6.50 */
    RCP_PARAM_ISO_CAL2_ENABLED,                       /**< ISOCAL2: added in Parameter Set Version 6.50 */
    RCP_PARAM_MONITOR_LUT_LCD,                        /**< BLCDLUT: added in Parameter Set Version 6.50 */
    RCP_PARAM_MONITOR_LUT_EVF,                        /**< BEVFLUT: added in Parameter Set Version 6.50 */
    RCP_PARAM_MONITOR_LUT_HDMI,                       /**< BHDMILUT: added in Parameter Set Version 6.50 */
    RCP_PARAM_MONITOR_LUT_HDSDI,                      /**< BSDILUT: added in Parameter Set Version 6.50 */
    RCP_PARAM_MONITOR_LUT_REAR_LCD,                   /**< RLCDLUT: added in Parameter Set Version 6.50 */
    RCP_PARAM_MONITOR_LUT_REAR_EVF,                   /**< REVFLUT: added in Parameter Set Version 6.50 */
    RCP_PARAM_MONITOR_LUT_REAR_HDSDI1,                /**< RSDI1FLT: added in Parameter Set Version 6.50 */
    RCP_PARAM_MONITOR_LUT_REAR_HDSDI2,                /**< RSDI2FLT: added in Parameter Set Version 6.50 */
    RCP_PARAM_MONITOR_LUT_BRAIN_LCD3,                 /**< LCD3LUT: added in Parameter Set Version 6.50 */
    RCP_PARAM_MONITOR_LUT_BRAIN_EVF3,                 /**< EVF3LUT: added in Parameter Set Version 6.50 */
    RCP_PARAM_RECORD_PROXY_BAKED_IN_SETTINGS,         /**< VCBAKED: added in Parameter Set Version 6.50 */
    RCP_PARAM_MIN_RECORD_PROXY_BAKED_IN_SETTINGS,     /**< VCBAKMIN: added in Parameter Set Version 6.50 */
    RCP_PARAM_MAX_RECORD_PROXY_BAKED_IN_SETTINGS,     /**< VCBAKMAX: added in Parameter Set Version 6.50 */
    RCP_PARAM_SENSOR_SENSITIVITY,                     /**< SENSTVTY: added in Parameter Set Version 6.50 */ 
    RCP_PARAM_QT_DROPPED_FRAMES,                      /**< QTDRPFRM: added in Parameter Set Version 6.51 */
    RCP_PARAM_MXF_DROPPED_FRAMES,                     /**< MXFDRPFM: added in Parameter Set Version 6.51 */
    RCP_PARAM_DROPPED_FRAMES,                         /**< Composite of @ref RCP_PARAM_R3D_DROPPED_FRAMES, @ref RCP_PARAM_QT_DROPPED_FRAMES and @ref RCP_PARAM_MXF_DROPPED_FRAMES, added in Parameter Set Version 6.51 */

    RCP_PARAM_COUNT
} rcp_param_t;

typedef struct
{
    const char * name;                  /**< Name of parameter */
    const char * label;                 /**< Label for parameter */
    int has_get;                        /**< If true, calls to @ref rcp_get are valid for this parameter */
    int has_get_list;                   /**< If true, calls to @ref rcp_get_list are valid for this parameter */
    int has_get_status;                 /**< If true, calls to @ref rcp_get_status are valid for this parameter */
    int has_get_periodic;               /**< If true, calls to @ref rcp_get_periodic_on/@ref rcp_get_periodic_off are valid for this parameter */
    int has_send;                       /**< If true, calls to @ref rcp_send are valid for this parameter */
    int has_set_int;                    /**< If true, calls to @ref rcp_set_int are valid for this parameter */
    int has_set_int_relative;           /**< If true, calls to @ref rcp_set_int_relative are valid for this parameter */
    int has_set_uint;                   /**< If true, calls to @ref rcp_set_uint are valid for this parameter */
    int has_set_uint_relative;          /**< If true, calls to @ref rcp_set_uint_relative are valid for this parameter */
    int has_set_str;                    /**< If true, calls to @ref rcp_set_str are valid for this parameter */
    int has_set_list;                   /**< If true, calls to @ref rcp_set_list are valid for this parameter */
    int has_set_list_relative;          /**< If true, calls to @ref rcp_set_list_relative are valid for this parameter */
    int has_display_str;                /**< If true, there is a display string available for this parameter */
    int has_edit_info;                  /**< If true, edit info exists for this parameter.  see @ref rcp_cur_int_edit_info_t, @ref rcp_cur_uint_edit_info_t, @ref rcp_cur_str_edit_info_t  */
    int update_list_only_on_close;      /**< If true, only set data once list is closed and not as the user scrolls through the list (this parameter takes a long time to apply the setting) */
} rcp_param_properties_t;

typedef enum
{
    RCP_PARAM_DISPLAY_STATUS_NORMAL,     /**< The parameter should be displayed in its default color (typically white). */

    RCP_PARAM_DISPLAY_STATUS_GOOD,       /**< The parameter should be displayed in a good color (typically green). */
    RCP_PARAM_DISPLAY_STATUS_WARNING,    /**< The parameter should be displayed in a warning color (typically yellow). */
    RCP_PARAM_DISPLAY_STATUS_WARNING2,   /**< The parameter should be displayed in a serious warning color (typically orange). */
    RCP_PARAM_DISPLAY_STATUS_ERROR,      /**< The parameter should be displayed in an error color (typically red). */
    RCP_PARAM_DISPLAY_STATUS_DISABLED,   /**< The parameter should be displayed in a disabled color (typically dark gray). */

    RCP_PARAM_DISPLAY_STATUS_RECORDING,  /**< The parameter should be displayed in a recording color (typically red). */
    RCP_PARAM_DISPLAY_STATUS_FINALIZING  /**< The parameter should be displayed in a finalizing color (typically yellow). */
} rcp_param_status_t;

typedef enum
{
    RCP_CONNECTION_STATE_INIT,                                      /**< The connection to the camera is being initialized. */
    RCP_CONNECTION_STATE_GET_REQUIRED_PARAMS,                       /**< Initialization is complete, but the API needs more information before allowing the application to continue.  */
    RCP_CONNECTION_STATE_CONNECTED,                                 /**< The connection has been established and communication is ready to continue. */
    RCP_CONNECTION_STATE_ERROR_RCP_VERSION_MISMATCH,                /**< There was an error establishing a connection due to RCP version mismatch. An updates RCP API is likely required. */
    RCP_CONNECTION_STATE_ERROR_RCP_PARAMETER_SET_VERSION_MISMATCH,  /**< There was an error establishing a connection due to RCP parameter set version mismatch. An updates RCP API is likely required. */
    RCP_CONNECTION_STATE_RCP_DISABLED_ON_INTERFACE,                 /**< RCP Communication is not allowed on this interface.  If once connected, connection should be closed. */
    RCP_CONNECTION_STATE_COMMUNICATION_ERROR,                       /**< There was a communication error with the camera. */
    RCP_CONNECTION_STATE_COUNT
} rcp_connection_state_t;

typedef struct
{
    size_t tx_packets;
    size_t tx_bytes;
    size_t rx_packets;
    size_t rx_bytes;
} rcp_camera_connection_stats_t;

typedef enum
{
    RCP_MUTEX_CONNECTION,
    RCP_MUTEX_DISCOVERY,
    RCP_MUTEX_COUNT
} rcp_mutex_t;

typedef enum
{
    RCP_LOG_ERROR,
    RCP_LOG_WARNING,
    RCP_LOG_INFO,
    RCP_LOG_DEBUG
} rcp_log_t;

typedef struct
{
    uint16_t parameter_set_version_major;   /**< For internal use */
    uint16_t parameter_set_version_minor;   /**< For internal use */
    int32_t min;                            /**< Minimum allowed value */
    int32_t max;                            /**< Maximum allowed value */
    int32_t divider;                        /**< Divide the current value by @ref divider to get floating point representation */
    int32_t digits;                         /**< The number of digits show/allow in the floating point result */
    int32_t step;                           /**< Minimum step size (for non-divided value) */
    const char * prefix;                    /**< Text to be shown in-line before the user entered value */
    const char * prefix_decoded;            /**< Text to be shown in-line before the user entered value (decoded) */
    const char * suffix;                    /**< Text to be shown in-line after the user entered value */
    const char * suffix_decoded;            /**< Text to be shown in-line after the user entered value (decoded) */
} rcp_cur_int_edit_info_t;

/** This structure is passed into the current integer callback. */
typedef struct
{
    rcp_camera_connection_t * con;          /**< Camera connection. */
    rcp_param_t id;                         /**< ID of parameter being updated. */
    int32_t cur_val;                        /**< Current value of parameter. */
    int cur_val_valid;                      /**< If true, @ref cur_val contains valid data. */
    int32_t target_val;                     /**< Target value of parameter. */
    int target_val_valid;                   /**< If true, @ref target_val contains valid data. */
    const char * display_str;               /**< Current value formatted into a string to be displayed (contains special markups chars). */
    const char * display_str_decoded;       /**< Decoded version of @ref display_str. That is, all special markup chars have been replaced. */
    const char * display_str_abbr;          /**< Current value formatted into an abbreviated string to be displayed (contains special markups chars). */
    const char * display_str_abbr_decoded;  /**< Decoded version of @ref display_str_abbr. That is, all special markup chars have been replaced. */
    rcp_param_status_t display_str_status;  /**< Status associated with @ref display_str. That is, the color to display the string. */
    int display_str_valid;                  /**< If true, @ref display_str, @ref display_str_decoded, and @ref display_str_status contain valid data. */
    int display_str_in_list;                /**< If true, the display string needs to be retrieved from the list rather than the members in this struct. */
    rcp_cur_int_edit_info_t edit_info;      /**< Contains information required for manually editing the value */
    int edit_info_valid;                    /**< If true, the parameter can be editing using the properties described in @ref edit_info  */
} rcp_cur_int_cb_data_t;

typedef struct
{
    rcp_camera_connection_t * con;          /**< Camera connection. */
    rcp_param_t id;                         /**< ID of parameter being updated. */
    int32_t default_val;                    /**< Default value of parameter. */
    int default_val_valid;                  /**< If true, @ref default_val contains valid data. */
} rcp_cur_default_int_cb_data_t;

typedef struct
{
    uint16_t parameter_set_version_major;   /**< For internal use */
    uint16_t parameter_set_version_minor;   /**< For internal use */
    uint32_t min;                           /**< Minimum allowed value */
    uint32_t max;                           /**< Maximum allowed value */
    uint32_t divider;                       /**< Divide the current value by @ref divider to get floating point representation */
    uint32_t digits;                        /**< The number of digits show/allow in the floating point result */
    uint32_t step;                          /**< Minimum step size (for non-divided value) */
    const char * prefix;                    /**< Text to be shown in-line before the user entered value */
    const char * prefix_decoded;            /**< Text to be shown in-line before the user entered value (decoded) */
    const char * suffix;                    /**< Text to be shown in-line after the user entered value */
    const char * suffix_decoded;            /**< Text to be shown in-line after the user entered value (decoded) */
} rcp_cur_uint_edit_info_t;

/** This structure is passed into the current unsigned integer callback. */
typedef struct
{
    rcp_camera_connection_t * con;          /**< Camera connection. */
    rcp_param_t id;                         /**< ID of parameter being updated. */
    uint32_t cur_val;                       /**< Current value of parameter. */
    int cur_val_valid;                      /**< If true, @ref cur_val contains valid data. */
    uint32_t target_val;                    /**< Target value of parameter. */
    int target_val_valid;                   /**< If true, @ref target_val contains valid data. */
    const char * display_str;               /**< Current value formatted into a string to be displayed (contains special markups chars). */
    const char * display_str_decoded;       /**< Decoded version of @ref display_str. That is, all special markup chars have been replaced. */
    const char * display_str_abbr;          /**< Current value formatted into an abbreviated string to be displayed (contains special markups chars). */
    const char * display_str_abbr_decoded;  /**< Decoded version of @ref display_str_abbr. That is, all special markup chars have been replaced. */
    rcp_param_status_t display_str_status;  /**< Status associated with @ref display_str. That is, the color to display the string. */
    int display_str_valid;                  /**< If true, @ref display_str, @ref display_str_decoded, and @ref display_str_status contain valid data. */
    int display_str_in_list;                /**< If true, the display string needs to be retrieved from the list rather than the members in this struct. */
    rcp_cur_uint_edit_info_t edit_info;     /**< Contains information required for manually editing the value */
    int edit_info_valid;                    /**< If true, the parameter can be editing using the properties described in @ref edit_info  */
} rcp_cur_uint_cb_data_t;

typedef struct
{
    rcp_camera_connection_t * con;          /**< Camera connection. */
    rcp_param_t id;                         /**< ID of parameter being updated. */
    uint32_t default_val;                   /**< Default value of parameter. */
    int default_val_valid;                  /**< If true, @ref default_val contains valid data. */
} rcp_cur_default_uint_cb_data_t;

typedef struct
{
    rcp_camera_connection_t * con;          /**< Camera connection. */
    rcp_param_t id;                         /**< ID of parameter being updated. */
    const char * list_string;               /**< Raw string representation of list (needs to be converted to a cList or equivalent). */
    int list_string_valid;                  /**< If true, @ref list_string contains valid data. */
    int display_str_in_list;                /**< If true, the display string needs to be retrieved from this list rather than current message. */
    int32_t min_val;                        /**< Minimum value in list that is currently available on camera. Values outside this range can still be selected by the user as a target. Should be shown in an alternate color. */
    int min_val_valid;                      /**< If true, @ref min_val contains valid data. */
    int32_t max_val;                        /**< Maximum value in list that is currently available on camera. Values outside this range can still be selected by the user as a target. Should be shown in an alternate color. */
    int max_val_valid;                      /**< If true, @ref max_val contains valid data. */
    int send_int;                           /**< If true, send back integer value in set command. */
    int send_uint;                          /**< If true, send back unsigned integer value in set command. */
    int send_str;                           /**< If true, send back string value in set command. */
    int update_list_only_on_close;          /**< If true, only set data once list is closed and not as the user scrolls through the list (this parameter takes a long time to apply the setting) */
} rcp_cur_list_cb_data_t;

typedef struct
{
    rcp_camera_connection_t * con;          /**< Camera connection. */
    rcp_param_t id;                         /**< ID of parameter being updated. */
    uint32_t red[128];                      /**< red data (4 bits per column - 128 columns)*/
    uint32_t green[128];                    /**< green data (4 bits per column - 128 columns)*/
    uint32_t blue[128];                     /**< blue data (4 bits per column - 128 columns)*/
    uint32_t luma[128];                     /**< luma data (4 bits per column - 128 columns)*/
    int32_t bottom_clip;                    /**< percent (0-100) of bottom clip bar (or goalpost) that should be filled in. */
    int32_t top_clip;                       /**< percent (0-100) of top clip bar (or goalpost) that should be filled in. */
    const char * display_str;               /**< Label that should be shown super-imposed on histogram. */
    const char * display_str_decoded;       /**< Decoded version of @ref display_str. That is, all special markup chars have been replaced. */
    const char * display_str_abbr;          /**< Abbreviated label that should be shown super-imposed on histogram. Use this version if @ref display_str is too long. */
    const char * display_str_abbr_decoded;  /**< Decoded version of @ref display_str_abbr. That is, all special markup chars have been replaced. */
} rcp_cur_hist_cb_data_t;

typedef struct
{
    uint16_t parameter_set_version_major;   /**< For internal use */
    uint16_t parameter_set_version_minor;   /**< For internal use */
    size_t min_len;                         /**< Minimum number of characters allowed in string */
    size_t max_len;                         /**< Maximum number of characters allowed in string */
    int is_password;                        /**< If true, show this field as a password */
    const char * allowed_characters;        /**< If NULL, no characters limitations, else contains list of allowed characters  */
    const char * prefix;                    /**< Text to be shown in-line before the user entered value */
    const char * prefix_decoded;            /**< Text to be shown in-line before the user entered value (decoded) */
    const char * suffix;                    /**< Text to be shown in-line after the user entered value */
    const char * suffix_decoded;            /**< Text to be shown in-line after the user entered value (decoded) */
} rcp_cur_str_edit_info_t;

typedef struct
{
    rcp_camera_connection_t * con;          /**< Camera connection. */
    rcp_param_t id;                         /**< ID of parameter being updated. */
    const char * display_str;               /**< Current value formatted into a string to be displayed (contains special markups chars). */
    const char * display_str_decoded;       /**< Decoded version of @ref display_str. That is, all special markup chars have been replaced. */
    const char * display_str_abbr;          /**< Current value formatted into an abbreviated string to be displayed (contains special markups chars). */
    const char * display_str_abbr_decoded;  /**< Decoded version of @ref display_str_abbr. That is, all special markup chars have been replaced. */
    rcp_param_status_t display_str_status;  /**< Status associated with @ref display_str. That is, the color to display the string. */
    rcp_cur_str_edit_info_t edit_info;      /**< Contains information required for manually editing the value */
    int edit_info_valid;                    /**< If true, the parameter can be editing using the properties described in @ref edit_info  */
} rcp_cur_str_cb_data_t;

typedef struct
{
    char id[9];                         /**< Camera ID (setup in communication dialog on camera) */
    char pin[12];                       /**< Unique PIN of camera. */
    char type[50];                      /**< Type of camera (e.g. "EPIC-X") */
    char version[50];                   /**< Version of camera (e.g. "5.1.38") */
    rcp_interface_t rcp_interface;      /**< RCP Interface type to camera */
    int rcp_interface_enabled;          /**< If true, RCP is enabled on this interface */
    int rcp_interface_enabled_valid;    /**< If true, the value in @ref rcp_interface_enabled is valid */
} rcp_cam_info_t;

typedef struct
{
    rcp_camera_connection_t * con;        /**< Camera connection. */
    rcp_connection_state_t state;         /**< Current state of camera connection. */
    int32_t parameter_set_version_major;  /**< Camera RCP parameter set version (major) */
    int32_t parameter_set_version_minor;  /**< Camera RCP parameter set version (minor) */
    int parameter_set_newer;              /**< Camera RCP parameter set version is newer than APIs; upgrade API. */
    int parameter_set_version_valid;      /**< If true, the values in @ref parameter_set_version_major, @ref parameter_set_version_minor, and @ref parameter_set_newer */
    const rcp_cam_info_t * cam_info;      /**< Pointer to camera info structure of camera connected to */
} rcp_state_data_t;

typedef struct rcp_discovery_cam_info_list
{
    rcp_cam_info_t info;
    char ip_address[16];                /**< IP Address of camera (e.g. "192.168.0.2") */
    struct rcp_discovery_cam_info_list * next;
} rcp_discovery_cam_info_list_t;

typedef struct rcp_clip_info_list
{
    extended_clipinfo_t info;
    struct rcp_clip_info_list * next;
} rcp_clip_info_list_t;

typedef struct
{
    char * id;                          /**< Unique ID of notification.  Used in calls back into API.  */
    char * title;                       /**< Title of notification.  */
    char * message;                     /**< Message of notification.  '|' represents a new line. */
    notification_progress_t progress_type; /**< Type of progress bar to show */
    uint8_t progress_percent;           /**< Percentage to show on progress bar (only applicable for progress_type == NOTIFICATION_PROGRESS_NORMAL) */
    char * response_list;               /**< List of responses available to the user (should be shown as list of buttons) (needs to be converted to a cList or equivalent) */
    int32_t timeout;                    /**< Number of seconds for notification to auto-timeout (or 0 if no timeout) */
    int32_t type;                       /**< Internal use only */
} rcp_notification_t;

typedef enum
{
    NOTIFICATION_ACTION_OPEN,           /**< Open (or Show) the Notification  */
    NOTIFICATION_ACTION_UPDATE,         /**< Update the already open notification with the supplied information  */
    NOTIFICATION_ACTION_CLOSE           /**< Close the currently open notification */
} rcp_notification_action_t;

typedef struct
{
    rcp_camera_connection_t * con;              /**< Camera connection. */
    rcp_notification_action_t action;           /**< Notification action  */
    const rcp_notification_t * notification;    /**< Notification details  */
} rcp_notification_cb_data_t;

typedef struct
{
    rcp_camera_connection_t * con;              /**< Camera connection. */
    int32_t input_db[4];                        /**< dB of audio input channels */
    int32_t output_db[6];                       /**< dB of audio output channels */
    int is_db_data_valid;                       /**< If true, @ref input_db and @ref output_db contain valid data. */
    int show_audio_vu_meters;                   /**< If true, Audio VU meters should be shown. */
    const char * input_label[4];                /**< Labels to use for input channels */
    const char * output_label[6];               /**< Labels to use for output channels */
    vu_meter_source_t vu_meter_source;          /**< Current display mode for vu meter (same as RCP_PARAM_AUDIO_VU_METER_SOURCE) */
    const char * no_audio_vu_info[2];           /**< If show_audio_vu_meters is false, these lines should be displayed instead of the VU meter. */
    int input_state[4];                         /**< If true, audio channel is enabled. */
    int bwf_valid;                              /**< If true, a broadcast wave file will be created during recording. */
} rcp_cur_audio_vu_cb_data_t;

typedef enum
{
    CLIP_LIST_LOADING,                  /**< API is loading current clip list */
    CLIP_LIST_DONE,                     /**< clip list is valid */
    CLIP_LIST_BLOCKED                   /**< clip list is unavailable at the moment; camera is busy (i.e. recording) */
} rcp_clip_list_status_t;

typedef struct
{
    rcp_camera_connection_t * con;              /**< Camera connection. */
    rcp_clip_info_list_t * clip_list;           /**< linked list of clips */
    rcp_clip_list_status_t clip_list_status;    /**< status of @ref clip_list */
} rcp_cur_clip_list_cb_data_t;

typedef struct
{
    rcp_camera_connection_t * con;      /**< Camera connection. */
    rcp_param_t id;                     /**< ID of parameter being updated. */
    tag_info_t tag_info;                /**< info on tag */
} rcp_cur_tag_info_cb_data_t;

typedef int rcp_menu_node_id_t;
#define RCP_MENU_NODE_ID_NULL ((rcp_menu_node_id_t) -1)
#define RCP_MENU_NODE_ID_ROOT ((rcp_menu_node_id_t) 0)

typedef struct
{
    /* common for all node types: */
    rcp_menu_node_type_t type;          /**< Type of node. */
    rcp_menu_node_filter_t filter;      /**< Filter for which camera modes this node is available. */
    rcp_menu_node_id_t id;              /**< ID of this node. */
    rcp_menu_node_id_t parent_id;       /**< ID of parent node.  */
    char * title;                       /**< Title of menu node. */
    int is_enabled;                     /**< If true, the node is enabled. */
    int is_enabled_valid;               /**< If true, @ref is_enabled contains valid data. */
    int is_supported;                   /**< If true, the node is supported by the camera hardware. */
    int is_supported_valid;             /**< If true, @ref is_supported contains valid data. */

    /* the following are only valid for leaf nodes: */
    rcp_param_t param_id;               /**< Parameter ID of node  */
    c_list_t * arg_c_list;              /**< Optional argument list */

    /* the following are only valid for RCP_MENU_NODE_TYPE_ACTION_LEAF
     * leaf nodes. */
    int has_payload;                    /**< Optional action has payload */
    int payload;                        /**< Optional action payload */

    /* the following are only valid for RCP_MENU_NODE_TYPE_KEY_MAPPING_LEAF */
    int key_code;

    /* the following are only valid for RCP_MENU_NODE_TYPE_NUMBER_LEAF
     * and RCP_MENU_NODE_TYPE_LIST_LEAF leaf nodes. */
    int send_int;                       /**< If true, send back integer value in set command. */
    int send_uint;                      /**< If true, send back unsigned integer value in set command. */
    int send_str;                       /**< If true, send back string value in set command. */
} rcp_menu_node_info_t;

typedef struct rcp_menu_node_list
{
    rcp_menu_node_info_t * info;
    struct rcp_menu_node_list * next;
} rcp_menu_node_list_t;

typedef struct
{
    rcp_camera_connection_t * con;        /**< Camera connection. */
    rcp_menu_node_id_t id;                /**< ID of current node. */
    rcp_menu_node_list_t * children_list; /**< List of all children of node ID. */
    rcp_menu_node_list_t * ancestor_list; /**< List of all ancestors of node ID.  The first entry is the current node, the next is its parent, etc. */
} rcp_cur_menu_cb_data_t;

typedef struct
{
    rcp_camera_connection_t * con;        /**< Camera connection. */
    rcp_menu_node_id_t id;                /**< ID of current node. */
    int is_enabled;                       /**< If true, the node is enabled. */
    int is_enabled_valid;                 /**< If true, @ref is_enabled contains valid data. */
    int is_supported;                     /**< If true, the node is supported by the camera hardware. */
    int is_supported_valid;               /**< If true, @ref is_supported contains valid data. */
} rcp_cur_menu_node_status_cb_data_t;

/** This structure is passed into the current status callback. */
typedef struct
{
    rcp_camera_connection_t * con;          /**< Camera connection. */
    rcp_param_t id;                         /**< ID of parameter being updated. */
    int is_enabled;                         /**< If true, parameter @ref id should be enabled in any user displays. */
    int is_enabled_valid;                   /**< If true, @ref is_enabled contains valid data. */
    int is_supported;                       /**< If true, parameter @ref id is supported by the camera hardware. */
    int is_supported_valid;                 /**< If true, @ref is_supported contains valid data. */
} rcp_cur_status_cb_data_t;

typedef struct
{
    uint8_t data[16];
    char str[25];
} rcp_uuid_t;

typedef struct
{
    rcp_camera_connection_t * con;              /**< Camera connection. */
    rcp_uuid_t uuid;
    rftp_error_t error;                         /**< Error status. */
    rftp_type_t rftp_type;                      /**< Type of operation (store, retrieve, abort, delete, list). */
    uint8_t * data;                             /**< Pointer to data being sent/retrieved. */
    int64_t data_size;                          /**< Size of @ref data. */
    int is_compressed;                          /**< If true, @ref data contains compressed data. */
    int32_t percent_complete;                   /**< Transfer completion percentage. */
    const char * directory_list_string;         /**< Raw string representation of the directory listing for a specific directory (needs to be converted to a cList or equivalent). */
    const char * md5sum;                        /**< MD5 hex string of file being retrieved from the camera. Only applicable on tethered retrieve transfers. */
    int is_paused;                              /**< If true, data flow is paused for this transfer. */
} rcp_cur_rftp_status_cb_data_t;

typedef struct
{
    rcp_camera_connection_t * con;              /**< Camera connection. */
    const char * id;                            /**< User ID. */
    const char * value;                         /**< User Value (NULL if none). */
} rcp_handle_user_cb_data_t;

typedef struct
{
    rcp_camera_connection_t * con;              /**< Camera connection. */
    const char * id;                            /**< User ID. */
    int is_registered;                          /**< If true, the ID specified is registered with the camera. */
    uint32_t max_len;                           /**< Amount of space reserved for this ID.  Note: this may be smaller than the amount requested. */
} rcp_handle_user_metadata_cb_data_t;

typedef struct
{
    rcp_camera_connection_t * con;              /**< Camera connection. */
    const c_list_t * action_c_list;             /**< List of mappable actions. */
} rcp_cur_action_list_cb_data_t;

typedef struct
{
    rcp_camera_connection_t * con;              /**< Camera connection. */
    const c_list_t * action_c_list;             /**< List of mappable actions. */
    int key_code;                               /**< Key code */
    key_action_t key_action;                    /**< Action assigned to key_code */
    const char * key_action_param;              /**< Parameter portion of key_action (only applicable for certain key_actions, e.g.: KEY_ACTION_APPLY_PRESET */
} rcp_cur_key_mapping_cb_data_t;

/** Error codes for RCP_API functions. It is good practice to always
 * check the error codes for every call into the RCP API. For future
 * compatibility it is safer to check that the return value is !=
 * RCP_SUCCESS rather than checking for specific errors. The specific
 * error can be used for debugging or informational purposes. */
typedef enum
{
    RCP_SUCCESS,                                    /**< Success. */
    RCP_ERROR_BAD_PARAM,                            /**< One of the parameters passed in to the function was bad. */
    RCP_ERROR_NO_GET,                               /**< An RCP GET command was attempted for a parameter without a GET command. */
    RCP_ERROR_NO_GET_LIST,                          /**< An RCP GET_LIST command was attempted for a parameter without a GET_LIST command.*/
    RCP_ERROR_NO_GET_PERIODIC,                      /**< An RCP GET_PERIODIC command was attempted for a parameter without a GET_PERIODIC command.*/
    RCP_ERROR_NO_GET_DEFAULT,                       /**< An RCP GET DEFAULT command was attempted for a parameter without a GET DEFAULT command. */
    RCP_ERROR_NO_SET,                               /**< An RCP SET command was attempted for a parameter without a SET command. */
    RCP_ERROR_SET_WRONG_TYPE,                       /**< An RCP SET command was attempted for a parameter with the incorrect payload type. */
    RCP_ERROR_SEND_DATA_TO_CAM_FAILED,              /**< To be returned by send_data_to_camera_cb callback if there was an error sending data out to the camera. */
    RCP_ERROR_TETHERED_RFTP_TRANSFER_IN_PROGRESS,   /**< To be returned by _rcp_rftp_retr if a tethered file retrieval was requested while one was already in progress. */
    RCP_ERROR_NOT_SUPPORTED,                        /**< This feature is not supported by the connected camera. */
    RCP_ERROR_INTERNAL                              /**< An internal RCP API error occurred. */
} rcp_error_t;

typedef rcp_error_t (* rcp_send_data_to_camera_cb_t) (const char * data, size_t len, void * user_data);
typedef void (* rcp_cur_int_cb_t) (const rcp_cur_int_cb_data_t * data, void * user_data);
typedef void (* rcp_cur_uint_cb_t) (const rcp_cur_uint_cb_data_t * data, void * user_data);
typedef void (* rcp_cur_list_cb_t) (const rcp_cur_list_cb_data_t * data, void * user_data);
typedef void (* rcp_cur_hist_cb_t) (const rcp_cur_hist_cb_data_t * data, void * user_data);
typedef void (* rcp_cur_str_cb_t) (const rcp_cur_str_cb_data_t * data, void * user_data);
typedef void (* rcp_clip_list_cb_t) (const rcp_cur_clip_list_cb_data_t * data, void * user_data);
typedef void (* rcp_cur_tag_cb_t) (const rcp_cur_tag_info_cb_data_t * data, void * user_data);
typedef void (* rcp_cur_status_cb_t) (const rcp_cur_status_cb_data_t * data, void * user_data);
typedef void (* rcp_notification_cb_t) (const rcp_notification_cb_data_t * data, void * user_data);
typedef void (* rcp_cur_audio_vu_cb_t) (const rcp_cur_audio_vu_cb_data_t * data, void * user_data);
typedef void (* rcp_cur_menu_cb_t) (const rcp_cur_menu_cb_data_t * data, void * user_data);
typedef void (* rcp_cur_menu_node_status_cb_t) (const rcp_cur_menu_node_status_cb_data_t * data, void * user_data);
typedef void (* rcp_state_cb_t) (const rcp_state_data_t * data, void * user_data);
typedef void (* rcp_broadcast_data_to_cameras_cb_t) (const char * data, size_t len, void * user_data);
typedef void (* rcp_rftp_status_cb_t) (const rcp_cur_rftp_status_cb_data_t * data, void * user_data);
typedef void (* rcp_handle_user_cb_t) (const rcp_handle_user_cb_data_t * data, void * user_data);
typedef void (* rcp_handle_user_metadata_cb_t) (const rcp_handle_user_metadata_cb_data_t * data, void * user_data);
typedef void (* rcp_cur_default_int_cb_t) (const rcp_cur_default_int_cb_data_t * data, void * user_data);
typedef void (* rcp_cur_default_uint_cb_t) (const rcp_cur_default_uint_cb_data_t * data, void * user_data);
typedef void (* rcp_cur_action_list_cb_t) (const rcp_cur_action_list_cb_data_t * data, void * user_data);
typedef void (* rcp_cur_key_mapping_cb_t) (const rcp_cur_key_mapping_cb_data_t * data, void * user_data);

typedef struct
{
    const char * client_name;                               /**< Name of application (to be shown to user in camera) e.g.: "Test Application"  */
    const char * client_version;                            /**< Version of application (to be shown to user in camera) e.g.: "1.2.3"  */
    const char * client_user;                               /**< Application specific user data (to be shown to user in camera). can be used to show user logged in, device type, etc. */

    rcp_send_data_to_camera_cb_t send_data_to_camera_cb;    /**< Callback for sending data to camera. */
    void * send_data_to_camera_cb_user_data;                /**< User data to be sent back with call to @ref send_data_to_camera_cb. */

    rcp_cur_int_cb_t cur_int_cb;                            /**< Callback for CURRENT messages with integer payload. */
    void * cur_int_cb_user_data;                            /**< User data to be sent back with call to @ref cur_int_cb. */

    rcp_cur_uint_cb_t cur_uint_cb;                          /**< Callback for CURRENT messages with unsigned integer payload. */
    void * cur_uint_cb_user_data;                           /**< User data to be sent back with call to @ref cur_uint_cb. */

    rcp_cur_list_cb_t cur_list_cb;                          /**< Callback for CURRENT_LIST messages with list payload. */
    void * cur_list_cb_user_data;                           /**< User data to be sent back with call to @ref cur_list_cb. */

    rcp_cur_hist_cb_t cur_hist_cb;                          /**< Callback for CURRENT messages with histogram payload. */
    void * cur_hist_cb_user_data;                           /**< User data to be sent back with call to @ref cur_hist_cb. */

    rcp_cur_str_cb_t cur_str_cb;                            /**< Callback for CURRENT messages with string payload. */
    void * cur_str_cb_user_data;                            /**< User data to be sent back with call to @ref cur_str_cb. */

    rcp_clip_list_cb_t clip_list_cb;                        /**< Callback for updates to media list. */
    void * clip_list_cb_user_data;                          /**< User data to be send back with call to @ref clip_list_cb. */

    rcp_cur_tag_cb_t cur_tag_cb;                            /**< Callback for CURRENT messages with tag info payload. */
    void * cur_tag_cb_user_data;                            /**< User data to be sent back with call to @ref cur_tag_cb. */

    rcp_cur_status_cb_t cur_status_cb;                      /**< Callback for status changes to a parameter. */
    void * cur_status_cb_user_data;                         /**< User data to be sent back with call to @ref cur_status_cb. */

    rcp_notification_cb_t notification_cb;                  /**< Callback for notifications. */
    void * notification_cb_user_data;                       /**< User data to be sent back with call to @ref notification_cb. */

    rcp_cur_audio_vu_cb_t cur_audio_vu_cb;                  /**< Callback for CURRENT message with audio vu payload. */
    void * cur_audio_vu_cb_user_data;                       /**< User data to be sent back with call to @ref cur_audio_vu_cb. */

    rcp_cur_menu_cb_t cur_menu_cb;                          /**< Callback for menu tree. */
    void * cur_menu_cb_user_data;                           /**< User data to be sent back with call to @ref cur_menu_cb. */

    rcp_cur_menu_node_status_cb_t cur_menu_node_status_cb;  /**< Callback for menu tree node status. */
    void * cur_menu_node_status_cb_user_data;               /**< User data to be sent back with call to @ref cur_menu_node_status_cb. */

    rcp_rftp_status_cb_t rftp_status_cb;                    /**< Callback for rftp status. */
    void * rftp_status_cb_user_data;                        /**< User data to be sent back with call to @ref rftp_status_cb. */

    rcp_handle_user_cb_t handle_user_set_cb;                /**< Callback for handling SET USER messages. */
    void * handle_user_set_cb_user_data;                    /**< User data to be sent back with call to @ref handle_user_set_cb. */

    rcp_handle_user_cb_t handle_user_get_cb;                /**< Callback for handling GET USER messages. */
    void * handle_user_get_cb_user_data;                    /**< User data to be sent back with call to @ref handle_user_get_cb. */

    rcp_handle_user_cb_t handle_user_current_cb;            /**< Callback for handling CURRENT USER messages. */
    void * handle_user_current_cb_user_data;                /**< User data to be sent back with call to @ref handle_user_current_cb. */

    rcp_handle_user_metadata_cb_t handle_user_metadata_cb;  /**< Callback for handling USER METADATA registration ack/nak */
    void * handle_user_metadata_cb_user_data;               /**< User data to be sent back with call to @ref handle_user_metadata_cb. */

    rcp_cur_default_int_cb_t cur_default_int_cb;            /**< Callback for handling CURRENT DEFAULT messages with integer payload. */
    void * cur_default_int_cb_user_data;                    /**< User data to be sent back with call to @ref cur_default_int_cb. */

    rcp_cur_default_uint_cb_t cur_default_uint_cb;          /**< Callback for handling CURRENT DEFAULT messages with unsigned integer payload. */
    void * cur_default_uint_cb_user_data;                   /**< User data to be sent back with call to @ref cur_default_uint_cb. */

    rcp_cur_action_list_cb_t cur_action_list_cb;            /**< Callback for key mapping action list. */
    void * cur_action_list_cb_user_data;                    /**< User data to be sent back with call to @ref cur_action_list_cb. */

    rcp_cur_key_mapping_cb_t cur_key_mapping_cb;            /**< Callback for current key mapping. */
    void * cur_key_mapping_cb_user_data;                    /**< User data to be send back with call to @ref cur_key_mapping_cb. */

    rcp_state_cb_t state_cb;                                /**< Callback for changes in connection state. */
    void * state_cb_user_data;                              /**< User data to be sent back with call to @ref state_cb. */
} rcp_camera_connection_info_t;

/** @brief Get version of RCP API
 *
 * @returns version of RCP API (in string form, e.g. "1.2.3")
 * */
const char * rcp_api_get_version(void);

/** @brief Process incoming camera data.
 *
 * Must be called from the client code with any data received by an
 * open camera connection.
 *
 * @param[in] con   the camera connection
 * @param[in] data  data received (from TCP port, serial port, etc)
 * @param[in] len   number of bytes pointed to by data
 * */
void rcp_process_data(rcp_camera_connection_t * con, const char * data, size_t len);

/** @brief Get name of RCP parameter.
 *
 * @param[in] con   the camera connection
 * @param[in] id    the RCP parameter
 * @returns the name of the RCP parameter identified by id.
 * */
const char * rcp_get_name(const rcp_camera_connection_t * con, rcp_param_t id);

/** @brief Get label for RCP parameter.
 *
 * @param[in] con   the camera connection
 * @param[in] id    the RCP parameter
 * @returns the label of the RCP parameter identified by id.
 * */
const char * rcp_get_label(rcp_camera_connection_t * con, rcp_param_t id);

/** @brief Get ID for RCP parameter by name
 *
 * @param[in] con   the camera connection
 * @param[in] name  name of the RCP parameter
 * @returns the id of the RCP parameter identified by name, or
 * RCP_PARAM_COUNT if the name is not found.
 * */
rcp_param_t rcp_get_id(const rcp_camera_connection_t * con, const char * name);

/** @brief Get update_list_only_on_close property of RCP parameter.
 *
 * @deprecated use the update_list_only_on_close flag in the cur_list
 * callback or update_list_only_on_close flag in @ref
 * rcp_param_properties_t (@ref rcp_get_is_supported) instead.
 *
 * Most RCP parameters should live update as their values are selected
 * in the list presented to the user. However, there are a few
 * parameters that take a significant amount of time to take effect -
 * in these cases the new value should only be sent to the camera after
 * the value has been selected and the list has been dismissed.
 *
 * @param[in] con   the camera connection
 * @param[in] id    the RCP parameter
 *
 * @retval 0    this RCP parameter should be updated as the list is modified.
 * @retval 1    this RCP parameter should only be updated after the list is closed.
 * */
int rcp_get_update_list_only_on_close(rcp_camera_connection_t * con, rcp_param_t id);

/** @brief Check if parameter is supported by connected camera.
 *
 * Check if the given parameter is supported by the connected camera.
 * This function uses the camera's RCP Parameter Set Version to
 * determine if a parameter is available.  This should be used to
 * conditionally show newer commands to the user when connecting to
 * older camera builds.
 *
 * @param[in] con           the camera connection
 * @param[in] id            the RCP parameter
 * @param[out] properties   properties of the parameter (pass in NULL
 * if not required)
 *
 * @retval 0    this RCP parameter is not supported by the connected camera.
 * @retval 1    this RCP parameter is supported by the connected camera.
 * */
int rcp_get_is_supported(rcp_camera_connection_t * con, rcp_param_t id, rcp_param_properties_t * properties);

/** @brief Request RCP parameter data from the camera.
 *
 * This will send an RCP GET message to the camera for the given RCP
 * parameter.  Note: if the data is cacheable and cached a message may
 * not be sent to the camera, instead the cached data will be sent
 * directly to the application via the appropriate current callback
 * function.
 *
 * The data requested with this call will be returned in one of the
 * callbacks: cur_int_cb, cur_uint_cbm cur_str_cb, etc.
 *
 * A simple transaction is shown below:
 *
 * @msc
 *  cam,app,api;
 *  |||;
 *  app=>api [label="rcp_get()", url="@ref rcp_get"];
 *  --- [label="if data is not cached"];
 *  api=>>app [label="send_data_to_camera_cb()"];
 *  app->cam [label="RCP G:PARAM:"];
 *  ...;
 *  cam->app [label="RCP C:PARAM:"];
 *  app=>api [label="rcp_process_data()", url="@ref rcp_process_data"];
 *  --- [label="endif"];
 *  api=>>app [label="cur_<type>_cb"];
 * @endmsc
 *
 * @param[in] con   the camera connection
 * @param[in] id    the RCP parameter
 *
 * @returns RCP_SUCCESS on success.
 * */
rcp_error_t rcp_get(rcp_camera_connection_t * con, rcp_param_t id);

/** @brief Request RCP parameter list from the camera.
 *
 * This will send an RCP GET_LIST message to the camera for the given RCP
 * parameter.
 *
 * The list requested with this call will be returned in the
 * callback: cur_list_cb.
 *
 * @param[in] con   the camera connection
 * @param[in] id    the RCP parameter
 *
 * @returns RCP_SUCCESS on success.
 * */
rcp_error_t rcp_get_list(rcp_camera_connection_t * con, rcp_param_t id);

/** @brief Request RCP parameter status from the camera.
 *
 * The status requested with this call will be returned in the
 * callback: cur_status_cb.
 *
 * @param[in] con   the camera connection
 * @param[in] id    the RCP parameter
 *
 * @returns RCP_SUCCESS on success.
 * */
rcp_error_t rcp_get_status(rcp_camera_connection_t * con, rcp_param_t id);

/** @brief Request RCP parameter default value from the camera.
 *
 * The default value requested with this call will be returned in one of the callbacks:
 * cur_default_int_cb, cur_default_uint_cb
 *
 * @note Not all parameters will have a default value.
 *
 * @note Cameras running firmware with an RCP Parameter Set version
 * less than 6.50 will not support default values for any parameter.
 *
 * If called with a parameter that does not have a default value the
 * function will either return with RCP_ERROR_NO_GET_DEFAULT, or the
 * callback will be called with default_val_valid set to 0.
 *
 * @param[in] con   the camera connection
 * @param[in] id    the RCP parameter
 *
 * @returns RCP_SUCCESS on success.
 * */
rcp_error_t rcp_get_default(rcp_camera_connection_t * con, rcp_param_t id);

/** @brief Request RCP parameter status from the camera.
 *
 * The clip list requested with this call will be returned in the
 * callback: cur_clip_list_cb.
 *
 * @param[in] con   the camera connection
 *
 * @returns RCP_SUCCESS on success.
 * */
rcp_error_t rcp_get_clip_list(rcp_camera_connection_t * con);

/** @brief Send RCP parameter to camera
 *
 * This is used to send a parameter to the camera that does not take
 * any arguments.
 *
 * @param[in] con   the camera connection
 * @param[in] id    the RCP parameter
 *
 * @returns RCP_SUCCESS on success.
 * */
rcp_error_t rcp_send(rcp_camera_connection_t * con, rcp_param_t id);

/** @brief Set integer value for RCP parameter.
 *
 * This is used to set a value on the camera. This value usually comes
 * from a list provided by the camera or an enum found in
 * rcp_types_public.h rather than directly given by the user or
 * hard-coded in the client application.
 *
 * @note Do not assume the set will be honored by the camera. Always
 * rely on CURRENT messages from the camera to display data to the
 * user. For example, to toggle record on the camera you can call @code
 * rcp_set_int(con, RCP_PARAM_RECORD_STATE, SET_RECORD_STATE_TOGGLE);
 * @endcode
 * However, record should not be indicated on the client application
 * until an incoming CURRENT for RCP_PARAM_RECORD_STATE with the value
 * of RECORD_STATE_RECORDING has been received.
 *
 * @param[in] con   the camera connection
 * @param[in] id    the RCP parameter
 * @param[in] val   value to set
 *
 * @returns RCP_SUCCESS on success.
 * */
rcp_error_t rcp_set_int(rcp_camera_connection_t * con, rcp_param_t id, int32_t val);

/** @brief Set integer value for RCP parameter given an offset.
 *
 * Similar to @ref rcp_set_int except instead of providing the absolute
 * parameter value, an offset to the current value is used to calculate
 * the new value.
 *
 * @param[in] con       the camera connection
 * @param[in] id        the RCP parameter
 * @param[in] offset    offset to the current value
 *
 * @returns RCP_SUCCESS on success.
 * */
rcp_error_t rcp_set_int_relative(rcp_camera_connection_t * con, rcp_param_t id, int32_t offset);

/** @brief Set unsigned integer value for RCP parameter.
 *
 * This is used to set a value on the camera. This value usually comes
 * from a list provided by the camera or an enum found in
 * rcp_types_public.h rather than directly given by the user or
 * hard-coded in the client application.
 *
 * @note Do not assume the set will be honored by the camera. Always
 * rely on CURRENT messages from the camera to display data to the
 * user.
 *
 * @param[in] con   the camera connection
 * @param[in] id    the RCP parameter
 * @param[in] val   value to set
 *
 * @returns RCP_SUCCESS on success.
 * */
rcp_error_t rcp_set_uint(rcp_camera_connection_t * con, rcp_param_t id, uint32_t val);

/** @brief Set unsigned integer value for RCP parameter given an offset.
 *
 * Similar to @ref rcp_set_uint except instead of providing the absolute
 * parameter value, an offset to the current value is used to calculate
 * the new value.
 *
 * @param[in] con       the camera connection
 * @param[in] id        the RCP parameter
 * @param[in] offset    offset to the current value
 *
 * @returns RCP_SUCCESS on success.
 * */
rcp_error_t rcp_set_uint_relative(rcp_camera_connection_t * con, rcp_param_t id, int32_t offset);

/** @brief Set string value for RCP parameter.
 *
 * This is used to set a value on the camera.
 *
 * @note Do not assume the set will be honored by the camera. Always
 * rely on CURRENT messages from the camera to display data to the
 * user.
 *
 * @param[in] con   the camera connection
 * @param[in] id    the RCP parameter
 * @param[in] val   value to set
 *
 * @returns RCP_SUCCESS on success.
 * */
rcp_error_t rcp_set_str(rcp_camera_connection_t * con, rcp_param_t id, const char * val);

/** @brief Set list value for RCP parameter.
 *
 * This is used to set a list value on the camera.
 *
 * @note Do not assume the set will be honored by the camera. Always
 * rely on CURRENT messages from the camera to display data to the
 * user.
 *
 * @param[in] con   the camera connection
 * @param[in] id    the RCP parameter
 * @param[in] val   stringified c_list to set
 *
 * @returns RCP_SUCCESS on success.
 * */
rcp_error_t rcp_set_list(rcp_camera_connection_t * con, rcp_param_t id, const char * val);

/** @brief Set list (by value) with relative offset.
 *
 * This is not like @ref rcp_set_list which changes the entire list,
 * instead this is like calling @ref rcp_set_int, @ref rcp_set_uint, or
 * @ref rcp_set_str on a parameter based on the relative entry in its
 * list.
 *
 * For example, to set the ISO to the next (higher value) in the list
 * call:
 * @code
 * rcp_set_list_relative(con, RCP_PARAM_ISO, 1);
 * @endcode
 * to set the ISO to the previous (lower value) in the list call:
 * @code
 * rcp_set_list_relative(con, RCP_PARAM_ISO, -1);
 * @endcode
 *
 * @param[in] con       the camera connection
 * @param[in] id        the RCP parameter
 * @param[in] offset    offset to the current index of the list
 *
 * @returns RCP_SUCCESS on success.
 * */
rcp_error_t rcp_set_list_relative(rcp_camera_connection_t * con, rcp_param_t id, int32_t offset);

/** @brief Check if the get_periodic feature is supported by connected camera.
 *
 * Check if the get_periodic feature is supported by the connected camera.
 * This function uses the camera's RCP Parameter Set Version to
 * determine if is is available.  This should be used to conditionally
 * before calling rcp_get_periodic_on/off
 *
 * @param[in] con   the camera connection
 *
 * @retval 0    get_periodic is not supported by the connected camera.
 * @retval 1    get_periodic is supported by the connected camera.
 * */
int rcp_get_periodic_is_supported(rcp_camera_connection_t * con);

/** @brief Enable periodic RCP parameter data from the camera.
 *
 * This will send an RCP GET_PERIODIC message to the camera for the
 * given RCP parameter, with a value of 1 to enable the periodic data
 * to be sent.
 *
 * @param[in] con   the camera connection
 * @param[in] id    the RCP parameter
 *
 * @returns RCP_SUCCESS on success.
 * */
rcp_error_t rcp_get_periodic_on(rcp_camera_connection_t * con, rcp_param_t id);

/** @brief Disable periodic RCP parameter data from the camera.
 *
 * This will send an RCP GET_PERIODIC message to the camera for the
 * given RCP parameter, with a value of 0 to disable the periodic data
 * to be sent.
 *
 * @param[in] con   the camera connection
 * @param[in] id    the RCP parameter
 *
 * @returns RCP_SUCCESS on success.
 * */
rcp_error_t rcp_get_periodic_off(rcp_camera_connection_t * con, rcp_param_t id);

/** @brief Get current notification.
 *
 * This function will cause the notification callback to be re-called with
 * the current notification to be displayed (if there is one).
 *
 * Note: this function doesn't usually need to be called.  Only call
 * it, if for some reason, your application ignores notification
 * callbacks until some specific time during execution.  Once your
 * application is ready to handle the notification callbacks, call this
 * function one time.
 *
 * @param[in] con   the camera connection
 *
 * @return RCP_SUCCESS on success. */
rcp_error_t rcp_notification_get(rcp_camera_connection_t * con);

/** @brief Current notification has timed out.
 *
 * This function should be called to notify the API that the timeout
 * associated with the current notification has expired and that the
 * notification should be closed.
 *
 * Note: this can also be called if the user dismisses a timeout based
 * notification by tapping on it (or other application specific
 * appropriate action)
 *
 * Note: the client code should wait until the API issues a CLOSE
 * action on the current notification before actually closing it
 *
 * @param[in] con   the camera connection
 * @param[in] id    the notification ID
 *
 * @return RCP_SUCCESS on success. */
rcp_error_t rcp_notification_timeout(rcp_camera_connection_t * con, const char * id);

/** @brief Send response for current notification.
 *
 * This function should be called when a user responds to a
 * notification by selecting one of the response options.
 *
 * @param[in] con        the camera connection
 * @param[in] id         the notification ID
 * @param[in] response   value of response selected
 *
 * @return RCP_SUCCESS on success. */
rcp_error_t rcp_notification_response(rcp_camera_connection_t * con, const char * id, int32_t response);

/** @brief Check if menu tree is supported by connected camera.
 *
 * Check if the menu tree is supported by the connected camera.
 * This function uses the camera's RCP Parameter Set Version to
 * determine if is is available.  This should be used to conditionally
 * allow the user to pull up a menu tree.
 *
 * @param[in] con   the camera connection
 *
 * @retval 0    The menu tree is not supported by the connected camera.
 * @retval 1    The menu tree is supported by the connected camera.
 * */
int rcp_menu_is_supported(const rcp_camera_connection_t * con);

/** @brief Request menu tree children for given parent node.
 *
 * After requesting the children of a node, the response will be sent
 * back in the cur_menu_cb callback.  The payload includes a
 * linked-list of children and ancestors.
 *
 * Note: the root node ID is RCP_MENU_NODE_ID_ROOT.
 *
 * @param[in] con       the camera connection
 * @param[in] id        id of the parent node
 *
 * @return RCP_SUCCESS on success
 * */
rcp_error_t rcp_menu_get_children(rcp_camera_connection_t * con, rcp_menu_node_id_t id);

/** @brief Check if menu node status is supported by connected camera.
 *
 * @param[in] con   the camera connection
 *
 * @retval 0    Menu node status is not supported by the connected camera.
 * @retval 1    Menu node status is supported by the connected camera.
 * */
int rcp_menu_node_status_is_supported(const rcp_camera_connection_t * con);

/** @brief Request menu tree status for given node.
 *
 * @param[in] con       the camera connection
 * @param[in] id        id of the node
 *
 * @return RCP_SUCCESS on success
 * */
rcp_error_t rcp_menu_get_node_status(rcp_camera_connection_t * con, rcp_menu_node_id_t id);

/** @brief Convert user-defined int32 value in arg_c_list for multi
 * action list leaf into flags.
 *
 * @param[in] con       the camera connection
 * @param[in] data data from user_defined.int32 field of clist
 *
 * @return flags as a bitfield
 *  */
uint32_t rcp_menu_get_multi_action_list_leaf_flags(const rcp_camera_connection_t * con, int32_t data);

/** @brief Create camera connection to the RCP API.
 *
 * Before this function is called a physical connection must already
 * be established with a camera. For example, this can be a TCP socket
 * or Serial port connection.
 *
 * The RCP API will attempt to establish a connection to the camera and
 * verify the version to ensure proper communication can be made
 * using this version of the RCP API. Once this has been completed the
 * connection state will change to @ref RCP_CONNECTION_STATE_CONNECTED.
 *
 * No calls to @ref rcp_get, @ref rcp_get_list, @ref rcp_set_int, @ref
 * rcp_set_uint, or @ref rcp_set_str should be made
 * until the RCP_CONNECTION_STATE_CONNECTED state has been reached.
 *
 * It is up to the client code to terminate the connection (by calling
 * @ref rcp_delete_camera_connection) if the
 * RCP_CONNECTION_STATE_CONNECTED state has not been reached after an
 * appropriate timeout or one of the error states has been reached.
 *
 * @param[in] info  structure containing all the required callback
 * information.
 *
 * @returns pointer to camera connection or NULL if there was an error.
 * */
rcp_camera_connection_t * rcp_create_camera_connection(const rcp_camera_connection_info_t * info);

/** @brief Close and cleanup camera connection.
 *
 * This function should be called when a connection with a camera has
 * been lost or the user wants to disconnect from the camera. It will
 * free up any allocated memory.
 *
 * @param[in] con   camera connection to terminate.
 * */
void rcp_delete_camera_connection(rcp_camera_connection_t * con);

/** @brief Get stats regarding camera connection
 *
 * Get stats about connection, such as number of packets/bytes sent and
 * received.
 *
 * @param[in] con       camera connection
 * @param[out] stats    stats for given connection
 *
 * @return RCP_SUCCESS on success */
rcp_error_t rcp_camera_connection_stats(const rcp_camera_connection_t * con, rcp_camera_connection_stats_t * stats);

/** @brief Start camera discovery process.
 *
 * This function is used to start the camera discovery processes. For
 * GigE or wireless networks, this process is performed via broadcast
 * UDP packets on port 1112.
 *
 * @msc
 *  camA,camB,camC,app,api;
 *  |||;
 *  app=>api [label="rcp_discovery_start()", url="@ref rcp_discovery_start"];
 *  app box app [label="start RCP_DISCOVERY_STEP_SLEEP_MS delay"];
 *  api=>>app [label="cb()"];
 *  app->camA [label="broadcast UDP"], app->camB, app->camC;
 *  camA->app [label="udp packet"];
 *  app=>api [label="rcp_discovery_process_data", url = "@ref rcp_discovery_process_data"];
 *  camB->app [label="udp packet"];
 *  app=>api [label="rcp_discovery_process_data", url = "@ref rcp_discovery_process_data"];
 *  camC->app [label="udp packet"];
 *  app=>api [label="rcp_discovery_process_data", url = "@ref rcp_discovery_process_data"];
 *  ...;
 *  app box app [label="end RCP_DISCOVERY_STEP_SLEEP_MS delay"];
 *  --- [label="begin loop RCP_DISCOVERY_STEP_LOOP_COUNT times"];
 *  app=>api [label="rcp_discovery_step()", url="@ref rcp_discovery_step"];
 *  app box app [label="start RCP_DISCOVERY_STEP_SLEEP_MS delay"];
 *  api=>>app [label="cb()"];
 *  app->camA [label="broadcast UDP"], app->camB, app->camC;
 *  camA->app [label="udp packet"];
 *  app=>api [label="rcp_discovery_process_data", url = "@ref rcp_discovery_process_data"];
 *  camB->app [label="udp packet"];
 *  app=>api [label="rcp_discovery_process_data", url = "@ref rcp_discovery_process_data"];
 *  camC->app [label="udp packet"];
 *  app=>api [label="rcp_discovery_process_data", url = "@ref rcp_discovery_process_data"];
 *  ...;
 *  app box app [label="end RCP_DISCOVERY_STEP_SLEEP_MS delay"];
 *  --- [label="end loop RCP_DISCOVERY_STEP_LOOP_COUNT times"];
 *  app=>api [label="rcp_discovery_get_list()", url="@ref rcp_discovery_get_list"];
 *  app=>app [label="copy list"];
 *  app=>api [label="rcp_discovery_free_list()", url="@ref rcp_discovery_free_list"];
 *  app=>api [label="rcp_discovery_end()", url="@ref rcp_discovery_end"];
 * @endmsc
 *
 *
 * After this call is made @ref rcp_discovery_step must be called @ref
 * RCP_DISCOVERY_STEP_LOOP_COUNT times, with a delay of @ref
 * RCP_DISCOVERY_STEP_SLEEP_MS after the call to @ref
 * rcp_discovery_start and after each call to @ref rcp_discovery_step.
 * The list of cameras discovered can be retrieved with a call to @ref
 * rcp_discovery_get_list. Once the data in the camera list has been
 * copied, a call to @ref rcp_discovery_free_list should be made to
 * free the memory. Finally, a call to @ref rcp_discovery_end should be
 * made to clear all memory used internally by the discovery process.
 *
 * During the discovery process all incoming data must be fed into the
 * RCP API using @ref rcp_discovery_process_data.  It is recommended to
 * have a helper thread listening for incoming UDP packets on port 1112
 * and relaying all data via this call.
 *
 * @param[in] cb    callback used for broadcasting data to all cameras.
 * WHen this callback is called, the data should be sent as a broadcast
 * UDP packet out port 1112.
 * @param[in] cb_user_data  additional user data passed into the
 * callback.  If not required, use NULL.
 * */
void rcp_discovery_start(rcp_broadcast_data_to_cameras_cb_t cb, void * cb_user_data);

/** @brief Continue camera discovery process.
 *
 * @note See the description of @ref rcp_discovery_start for details on the
 * camera discovery process. */
void rcp_discovery_step(void);

/** @brief Get list of discovered cameras.
 *
 * @note See the description of @ref rcp_discovery_start for details on the
 * camera discovery process.
 *
 * @returns linked list of cameras discovered. To free memory
 * associated with this list a call to @ref rcp_discovery_free_list
 * must be made after its contents are no longer required.
 * rcp_discovery_clear_list is made.*/
rcp_discovery_cam_info_list_t * rcp_discovery_get_list(void);

/** @brief Clears list of discovered cameras.
 *
 * Clears list by freeing all memory associated with link list. Do not
 * try to reference the list pointer after this function has been
 * called.
 *
 * @note See the description of @ref rcp_discovery_start for details on the
 * camera discovery process.
 *
 * @param[in] list  list to free
 * */
void rcp_discovery_free_list(rcp_discovery_cam_info_list_t * list);

/** @brief Process incoming discovery camera data.
 *
 * Must be called from the client code with any data received on the
 * camera discovery channel (UDP port 1112).
 *
 * @param[in] data      data from UDP packet
 * @param[in] len       length of data in UDP packet
 * @param[in] from_ipv4 Source IPv4 address of UDP packet
 * (NULL-terminates string in dotted-decimal notation. e.g.:
 * "192.168.0.1")
 *
 * @note See the description of @ref rcp_discovery_start for details on the
 * camera discovery process.
 * */
void rcp_discovery_process_data(const char * data, size_t len, const char * from_ipv4);

/** @brief End the camera discovery process.
 *
 * Clears all memory allocated internally for the camera discovery
 * process.
 *
 * @note See the description of @ref rcp_discovery_start for details on the
 * camera discovery process.
 * */
void rcp_discovery_end(void);

/** @brief Check if rftp operations are supported by connected camera.
 *
 * Check if the rftp operations are supported by the connected camera.
 * This function uses the camera's RCP Parameter Set Version to
 * determine if is is available.
 *
 * @param[in] con   the camera connection
 *
 * @retval 0    The rftp operations are not supported by the connected camera.
 * @retval 1    The rftp operations are supported by the connected camera.
 * */
int rcp_rftp_is_supported(const rcp_camera_connection_t * con);

/** @brief Check if rftp tethered file retrieval is supported by connected camera.
 *
 * Check if rftp tethered file retrieval is supported by the connected camera.
 * This function uses the camera's RCP Parameter Set Version to
 * determine if is is available.
 *
 * @param[in] con   the camera connection
 *
 * @retval 0    The rftp tethered file retrieval is not supported by the connected camera.
 * @retval 1    The rftp tethered file retrieval is supported by the connected camera.
 * */
int rcp_rftp_tethered_is_supported(const rcp_camera_connection_t * con);

/** @brief Send file to camera
 *
 * Sends a file to the camera.  This can be a preset file, overlay
 * file, upgrade image, etc.
 *
 *
 * @param[in] con                   the camera connection
 * @param[in] path                  destination path of the file on the camera
 * @param[in] data                  data of the file to be sent
 * @param[in] uncompressed_len      uncompressed length of @p data
 * @param[in] compressed_len        compressed length of @p data
 * @param[in] file_is_compressed    if true, @p data contains compressed data
 * @param[out] uuid                 UUID object to use in subsequent api calls
 *
 * @returns RCP_SUCCESS if successful.
 * */
rcp_error_t rcp_rftp_send_file(rcp_camera_connection_t * con, const char * path, uint8_t * data, int64_t uncompressed_len, int64_t compressed_len, int file_is_compressed, rcp_uuid_t * uuid);

/** @brief Send file to camera
 *
 * Sends a file to the camera.  This can be a preset file, overlay
 * file, upgrade image, etc.
 *
 *
 * @param[in] con                   the camera connection
 * @param[in] path                  destination path of the file on the camera
 * @param[in] data                  data of the file to be sent
 * @param[in] uncompressed_len      uncompressed length of @p data
 * @param[in] compressed_len        compressed length of @p data
 * @param[in] file_is_compressed    if true, @p data contains compressed data
 * @param[in] fragment_size         number of base64-encoded bytes of data sent per fragment
 * @param[out] uuid                 UUID object to use in subsequent api calls
 *
 * @returns RCP_SUCCESS if successful.
 * */
rcp_error_t rcp_rftp_send_file_v2(rcp_camera_connection_t * con, const char * path, uint8_t * data, int64_t uncompressed_len, int64_t compressed_len, int file_is_compressed, int fragment_size, rcp_uuid_t * uuid);

/** @brief Retrieve file from camera
 *
 * Retrieves a file from the camera.  This can be a preset file, overlay
 * file, look file, etc.
 *
 *
 * @param[in] con                   the camera connection
 * @param[in] path                  destination path of the file on the camera
 * @param[in] max_file_size         maximum acceptable file size
 * @param[in] compression_allowed   if true, the file data can be compressed
 * @param[out] uuid                 UUID object to use in subsequent api calls
 *
 * @returns RCP_SUCCESS if successful.
 * */
rcp_error_t rcp_rftp_retrieve_file(rcp_camera_connection_t * con, const char * path, int64_t max_file_size, int compression_allowed, rcp_uuid_t * uuid);

/** @brief Retrieve file from camera using the RED streaming protocol (for internal RED use only)
 *
 * Retrieves a file from the camera.  This can be a preset file, overlay
 * file, look file, etc.
 *
 * @note Only one tethered transfer is allowed at a time.  This call
 * will fail if a previous tethered transfer is still in progress.
 *
 * @param[in] con                   the camera connection
 * @param[in] path                  destination path of the file on the camera
 * @param[in] max_file_size         maximum acceptable file size
 * @param[in] compression_allowed   if true, the file data can be compressed
 * @param[out] uuid                 UUID object to use in subsequent api calls
 *
 * @returns RCP_SUCCESS if successful.
 * */
rcp_error_t rcp_rftp_retrieve_file_tethered(rcp_camera_connection_t * con, const char * path, int64_t max_file_size, int compression_allowed, rcp_uuid_t * uuid);

/** @brief Abort store or retrieve file transfer
 *
 * Halts a file transfer, whether a file is being sent to the camera or
 * being retrieved from the camera.
 *
 * @param[in] con              the camera connection
 * @param[in] uuid             UUID object of transfer to abort
 *
 * @returns RCP_SUCCESS if successful.
 * */
rcp_error_t rcp_rftp_abort_transfer(rcp_camera_connection_t * con, rcp_uuid_t * uuid);

/** @brief Delete file from camera
 *
 * Deletes a file from the camera.  This can be a preset file, overlay
 * file, upgrade image, etc.
 *
 * @param[in] con               the camera connection
 * @param[in] path              destination path of the file on the camera
 * @param[out] uuid             UUID object to use in subsequent api calls
 *
 * @returns RCP_SUCCESS if successful.
 * */
rcp_error_t rcp_rftp_delete_file(rcp_camera_connection_t * con, const char * path, rcp_uuid_t * uuid);

/** @brief Get virtual directory listing from camera
 *
 * Gets a directory listing for a virtual path from the camera.
 *
 * @param[in] con       the camera connection
 * @param[in] path      virtual path on the camera
 * @param[out] uuid     UUID object to use in subsequent api calls
 *
 * @returns RCP_SUCCESS if successful.
 * */
rcp_error_t rcp_rftp_directory_listing(rcp_camera_connection_t * con, const char * path, rcp_uuid_t * uuid);

/** @brief Check if user pass through messages are supported by connected camera.
 *
 * Check if user pass through messages are supported by connected camera.
 * This function uses the camera's RCP Parameter Set Version to
 * determine if is is available.
 *
 * @param[in] con   the camera connection
 *
 * @retval 0    The user pass through messages are not supported by the connected camera.
 * @retval 1    The user pass through messages are supported by the connected camera.
 * */
int rcp_user_is_supported(const rcp_camera_connection_t * con);

/** @brief Send "Set USER" RCP Message.
 *
 * The USER RCP message allows for USER messages to be sent to all
 * attached devices/peripherals of the camera.  The camera does not
 * interpret the USER messages, it simply forwards them out every other
 * port.  It is intended to be used by third parties for controlling
 * third party modules/software.  The USER message contains a string id
 * and string value.  There are three variants of the USER message:
 * SET, GET, and CURRENT.
 *
 * @note It is important to choose a unique id so that it does not
 * collide with other third party applications.  One possible solution
 * would be to use reverse domain name notation.  e.g.:
 * "com.red.dsmc.iso"
 *
 * @param[in] con       the camera connection
 * @param[in] id        the user assigned ID
 * @param[in] val       the value to send (NULL if no value required)
 *
 * @returns RCP_SUCCESS on success.
 * */
rcp_error_t rcp_user_send_set(rcp_camera_connection_t * con, const char * id, const char * val);

/** @brief Send "Get USER" RCP Message.
 *
 * The USER RCP message allows for USER messages to be sent to all
 * attached devices/peripherals of the camera.  The camera does not
 * interpret the USER messages, it simply forwards them out every other
 * port.  It is intended to be used by third parties for controlling
 * third party modules/software.  The USER message contains a string id
 * and string value.  There are three variants of the USER message:
 * SET, GET, and CURRENT.
 *
 * @note It is important to choose a unique id so that it does not
 * collide with other third party applications.  One possible solution
 * would be to use reverse domain name notation.  e.g.:
 * "com.red.dsmc.iso"
 *
 * @param[in] con       the camera connection
 * @param[in] id        the user assigned ID
 * @param[in] val       the value to send (NULL if no value required)
 *
 * @returns RCP_SUCCESS on success.
 * */
rcp_error_t rcp_user_send_get(rcp_camera_connection_t * con, const char * id, const char * val);

/** @brief Send "Current USER" RCP Message.
 *
 * The USER RCP message allows for USER messages to be sent to all
 * attached devices/peripherals of the camera.  The camera does not
 * interpret the USER messages, it simply forwards them out every other
 * port.  It is intended to be used by third parties for controlling
 * third party modules/software.  The USER message contains a string id
 * and string value.  There are three variants of the USER message:
 * SET, GET, and CURRENT.
 *
 * @note It is important to choose a unique id so that it does not
 * collide with other third party applications.  One possible solution
 * would be to use reverse domain name notation.  e.g.:
 * "com.red.dsmc.iso"
 *
 * @param[in] con       the camera connection
 * @param[in] id        the user assigned ID
 * @param[in] val       the value to send (NULL if no value required)
 *
 * @returns RCP_SUCCESS on success.
 * */
rcp_error_t rcp_user_send_current(rcp_camera_connection_t * con, const char * id, const char * val);

/** @brief Check if user metadata messages are supported by connected camera.
 *
 * Check if user metadata messages are supported by connected camera.
 * This function uses the camera's RCP Parameter Set Version to
 * determine if is is available.
 *
 * @param[in] con   the camera connection
 *
 * @retval 0    The user pass through messages are not supported by the connected camera.
 * @retval 1    The user pass through messages are supported by the connected camera.
 * */
int rcp_user_metadata_is_supported(const rcp_camera_connection_t * con);

/** @brief Register user metadata id with camera.
 *
 * Before sending user metadata to the camera, the id must first be
 * registered.  You will receive confirmation of the registration.
 *
 * @param[in] con       the camera connection
 * @param[in] id        the user assigned ID
 * @param[in] max_len   max length of data associated with id
 *
 * @note It is important to choose a unique id so that it does not
 * collide with other third party applications.  One possible solution
 * would be to use reverse domain name notation.  e.g.:
 * "com.red.dsmc.iso"
 *
 * @returns RCP_SUCCESS on success.
 * */
rcp_error_t rcp_user_metadata_register(rcp_camera_connection_t * con, const char * id, uint32_t max_len);

/** @brief Unregister user metadata id with camera.
 *
 * Unregistering a user id will remove the item from the current set of
 * user metadata as well as free up space for other third party
 * metadata.
 *
 * @param[in] con       the camera connection
 * @param[in] id        the user assigned ID
 *
 * @returns RCP_SUCCESS on success.
 * */
rcp_error_t rcp_user_metadata_unregister(rcp_camera_connection_t * con, const char * id);

/** @brief Send user metadata to camera.
 *
 * Send updated user metadata.  Before user metadata can be sent it
 * must first be registered with the camera.
 *
 * @param[in] con       the camera connection
 * @param[in] id        the user assigned ID
 * @param[in] val       the value of the user metadata item (should be human-readable)
 *
 * @returns RCP_SUCCESS on success.
 * */
rcp_error_t rcp_user_metadata_send(rcp_camera_connection_t * con, const char * id, const char * val);

/** @brief Check if key mapping is supported by connected camera.
 * Check if key mapping is supported via RCP by connected camera.
 * This function uses the camera's RCP Parameter Set Version to
 * determine if is is available.
 *
 * @param[in] con   the camera connection
 *
 * @retval 0    Key mapping is not supported by the connected camera.
 * @retval 1    Key mapping is supported by the connected camera.
 * */
int rcp_key_mapping_is_supported(const rcp_camera_connection_t * con);

/** @brief Request list of mappable actions from the camera.
 *
 * The list will be returned in the callback: cur_action_list_cb
 *
 * @param[in] con   the camera connection
 *
 * @return RCP_SUCCESS on success.
 * */
rcp_error_t rcp_key_mapping_get_action_list(rcp_camera_connection_t * con);

/** @brief Request current key-mapping for given keycode.
 *
 * The current mapping (and list) will be return in the callback:
 * cur_key_mapping_cb
 *
 * @param[in] con       the camera connection
 * @param[in] keycode   the key code requested (see @ref MAKEKEYCODE
 * macro)
 *
 * @return RCP_SUCCESS on success.
 * */
rcp_error_t rcp_key_mapping_get_mapping(rcp_camera_connection_t * con, int keycode);

/** @brief Set key-mapping for given keycode.
 *
 * Set the key mapping for keycode to action and param.
 *
 * @param[in] con       the camera connection
 * @param[in] keycode   key code to map
 * @param[in] action    action to map key code to (use num portion of list
 * action_c_list in cur_key_mapping_cb)
 * @param[in] param     parameter for action to map to key code (use
 * str portion of list action_c_list in cur_key_mapping_cb)
 *
 * @return RCP_SUCCESS on success.
 * */
rcp_error_t rcp_key_mapping_set_mapping(rcp_camera_connection_t * con, int keycode, key_action_t action, const char * param);

/** @brief Wrapper for memory allocations required by RCP API.
 *
 * This function must be implemented by the client code. In most
 * cases this can simply be implemented as such:
 * @code
 * void * rcp_malloc(size_t NBYTES)
 * {
 *     return malloc(NBYTES);
 * }
 * @endcode
 * */
void * rcp_malloc(size_t NBYTES);

/** @brief Wrapper for freeing memory allocations required by RCP API.
 *
 * This function must be implemented by the client code. In most
 * cases this can simply be implemented as such:
 * @code
 * void rcp_free(void * APTR)
 * {
 *     free(APTR);
 * }
 * @endcode
 * */
void rcp_free(void * APTR);

/** @brief Wrapper for mutex lock required by the RCP API.
 *
 * This function must be implemented by the client code. The client
 * must provide @ref RCP_MUTEX_COUNT mutexes for the RCP API.
 *
 * The mutex provided must be recursive.  That is, it must allow the
 * same thread to lock the mutex more than once without creating a
 * deadlock.
 *
 * @param[in] id    id of the mutex to lock
 * */
void rcp_mutex_lock(rcp_mutex_t id);

/** @brief Wrapper for mutex unlock required by the RCP API.
 *
 * This function must be implemented by the client code. The client
 * must provide @ref RCP_MUTEX_COUNT mutexes for the RCP API.
 *
 * @param[in] id    id of the mutex to unlock
 * */
void rcp_mutex_unlock(rcp_mutex_t id);

/** @brief Wrapper for logging messages from the RCP API.
 *
 * This function must be implemented by the client code.  It is up to
 * the client code on what to do with this log data.
 *
 * @param[in] severity  severity of log message
 * @param[in] con       camera connection associated with message (or
 * NULL if none or unknown)
 * @param[in] msg       message contents
 * */
void rcp_log(rcp_log_t severity, const rcp_camera_connection_t * con, const char * msg);

/** @brief Wrapper for getting pseudo-random integer required by the
 * RCP API.
 *
 * This function must be implemented by the client code.
 *
 * The client code is responsible for seeding the pseudo-random
 * generator.
 *
 * One possible implementation could be:
 * @code
 * int rcp_rand(void)
 * {
 *     static int seed = 1;
 *     if (seed)
 *     {
 *         srand(time(NULL));
 *         seed = 0;
 *     }
 *     return rand();
 * }
 * @endcode
 * */
int rcp_rand(void);

/** @brief Wrapper for getting system time stamp in milliseconds.
 *
 * This function must be implemented by the client code.  It is a
 * running time in milliseconds.  The starting point of the timer is
 * irrelevant.
 * */
uint32_t rcp_timestamp(void);

#ifdef __cplusplus
}
#endif

#endif
/********** End file: rcp_api.h *************************************************/

