// Copyright 2024 nolva (@x51ming)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT


#define MATRIX_ROWS 6
#define MATRIX_COLS 17

#define MATRIX_ROW_PINS { B0, B1, B2, B3, D0, D1}
#define MATRIX_COL_PINS { F0, F1, F4, F5, F6, F7, C6, B6, B5, B4, D7, D6, D4, E6, D2, D3, D5 }

#define WS2812_DI_PIN C7
// #define WS2812_LED_COUNT 86
#define RGBLED_NUM 86
#define RGBLIGHT_SLEEP
#define RGBLIGHT_DEFAULT_ON true

#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
#define RGBLIGHT_LIMIT_VAL 255
#define RGBLIGHT_DEFAULT_HUE 60
#define RGBLIGHT_DEFAULT_SAT 255
#define RGBLIGHT_DEFAULT_VAL RGBLIGHT_LIMIT_VAL
#define RGBLIGHT_DEFAULT_SPD 1

#define DRIVER_LED_TOTAL RGBLED_NUM