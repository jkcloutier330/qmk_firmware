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
#define MATRIX_ROW_PINS { LINE_PIN33, LINE_PIN34, LINE_PIN35, LINE_PIN36, LINE_PIN37, LINE_PIN38 }
#define MATRIX_COL_PINS { LINE_PIN39, LINE_PIN40, LINE_PIN41, LINE_PIN14, LINE_PIN15, LINE_PIN16, LINE_PIN17, LINE_PIN18, LINE_PIN19, LINE_PIN20, LINE_PIN21, LINE_PIN22, LINE_PIN23, LINE_PIN0, LINE_PIN1, LINE_PIN2, LINE_PIN3, LINE_PIN4, LINE_PIN5, LINE_PIN6, LINE_PIN7, LINE_PIN8 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Encoders */

#define ENCODERS_PAD_A { LINE_PIN26, LINE_PIN29  }
#define ENCODERS_PAD_B { LINE_PIN27, LINE_PIN30  }
#define ENCODER_RESOLUTION 4




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






