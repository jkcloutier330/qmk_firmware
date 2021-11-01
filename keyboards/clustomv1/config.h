/*
Copyright 2021 jkcloutier330

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x0000
#define DEVICE_VER   0x0001
#define MANUFACTURER jkcloutier330
#define PRODUCT      clustomv1

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 22

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { D33, D34, D35, D36, D37, D38 }
#define MATRIX_COL_PINS { D39, D40, D41, D14, D15, D16, D17, D18, D19, D20, D21, D22, D23, D0, D1, D2, D3, D4, D5, D6, D7, D8 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Encoders */
/*
#define ENCODERS_PAD_A {   }
#define ENCODERS_PAD_B {   }
#define ENCODER_RESOLUTION 4
*/



/* Well-worn Cherry MX key switches can bounce for up to 20ms, despite the
 * Cherry data sheet specifying 5ms. Because we use the sym_eager_pk debounce
 * algorithm, this debounce latency only affects key releases (not key
 * presses). */
#undef DEBOUNCE
#define DEBOUNCE 20

// Reduce input latency by lowering the USB polling interval
// from its 10ms default to the 125μs minimum that USB 2.x (High Speed) allows:
#define USB_POLLING_INTERVAL_MS 1

/* We use the i.MX RT1060 high-speed GPIOs (GPIO6-9) which are connected to the
 * AHB bus (AHB_CLK_ROOT), which runs at the same speed as the ARM Core Clock,
 * i.e. 600 MHz. See MIMXRT1062, page 949, 12.1 Chip-specific GPIO information.
 * No additional delay is necessary. */

// in clock cycles
#define GPIO_INPUT_PIN_DELAY 0






