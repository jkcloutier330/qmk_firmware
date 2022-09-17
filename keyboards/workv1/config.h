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
#define MATRIX_COLS 20

/* key matrix pins */
#define MATRIX_ROW_PINS { PB4, PB5, PB6, PB7, PB8, PB9 }
#define MATRIX_COL_PINS { PA7, PA6, PA5, PA4, PA3, PA2, PA11, PA12, PA15, PB3 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION CUSTOM_MATRIX

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* RGB crap */
#define RGB_DI_PIN PB2
#define DRIVER_LED_TOTAL 5

/* LED Indicators */
#define LED_NUM_LOCK_PIN PB15
#define LED_CAPS_LOCK_PIN PB10

