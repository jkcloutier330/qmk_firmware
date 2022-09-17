// Copyright 2022 jkcloutier330 (@jkcloutier330)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    jkcloutier330
#define PRODUCT         workv1

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 10

/* key matrix pins */
#define MATRIX_ROW_PINS { A10, B5, B6, B7, B8, B9 }
#define MATRIX_COL_PINS { B1, B0, A7, A6, A5, A4, B12, B13, B14, B15 }

/* COL2ROW or ROW2COL */
//#define DIODE_DIRECTION CUSTOM_MATRIX

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* RGB crap */
#define RGB_DI_PIN B10
#define RGBLED_NUM 7

#define RGBLIGHT_LAYERS

#define RGBLIGHT_LIMIT_VAL 200 /* The maximum brightness level */
#define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */


