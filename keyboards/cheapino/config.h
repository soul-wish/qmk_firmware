// Copyright 2023 Thomas Haukland (@tompi)
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
#undef VENDOR_ID
#define VENDOR_ID 0x05AC
#undef PRODUCT_ID
#define PRODUCT_ID 0x0220
/*#define VENDOR_ID 0x05AC*/
/*#define PRODUCT_ID 0x0220*/
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define WS2812_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the WS2812 implementation uses the PIO0 peripheral
//#define WS2812_TRST_US 80
#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_RGB
#define RGB_MATRIX_DEFAULT_VAL 32


// Pick good defaults for enabling homerow modifiers
#define TAPPING_TERM 200


#define WS2812_DI_PIN GP16 // The pin connected to the data pin of the LEDs
#define RGBLIGHT_LED_COUNT 1                     // The number of LEDs connected
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL


#define MAX_DEFERRED_EXECUTORS 32
#define MOUSEKEY_WHEEL_DELTA 7
