/* Copyright 2021 jkcloutier330
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

#define ___ KC_NO

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 *
#define LAYOUT( \
    k00, k01, k02, k03,    k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f, k10,                     k11, \
    k12, k13, k14, k15,    k16, k17, k18, k19, k1a, k1b, k1c, k1b, k1c, k1d, k1e, k1f, k20, k21,                k22, \
    k23, k24, k25, k26,    k27, k28, k29, k2a, k2b, k2c, k2d, k2e, k2f, k30, k31, k32, k33, k34,                k35, \
    k36, k37, k38, k39,    k3a,      k3b, k3c, k3d, k3e, k3f, k40, k41, k42, k43, k44,      k45,                k46, \
    k47, k48, k49, k4a,    k4b, k4c, k4d, k4e, k4f, k50, k51, k52, k53, k54, k55, k56,      k57,      k58,      k59, \
    k5a, k5b, k5c, k5d,    k5e, k5f, k60,                k61,                k62, k63, k64, k65, k66, k67, k68, k69  \
) {          *1   2    3    4       5    6    7    8    9    10   11   12   13   14   15   16   17   18   19   20   21   22 * \
  * R1 *  { k00, k01, k02, k03,    k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f, k10, ___, ___, ___, ___, k11 },  \
  * R2 *  { k12, k13, k14, k15,    k16, k17, k18, k19, k1a, k1b, k1c, k1b, k1c, k1d, k1e, k1f, k20, k21, ___, ___, ___, k22 },  \
  * R3 *  { k23, k24, k25, k26,    k27, k28, k29, k2a, k2b, k2c, k2d, k2e, k2f, k30, k31, k32, k33, k34, ___, ___, ___, k35 },  \
  * R4 *  { k36, k37, k38, k39,    k3a, ___, k3b, k3c, k3d, k3e, k3f, k40, k41, k42, k43, k44, ___, k45, ___, ___, ___, k46 },  \
  * R5 *  { k47, k48, k49, k4a,    k4b, k4c, k4d, k4e, k4f, k50, k51, k52, k53, k54, k55, k56, ___, k57, ___, k58, ___, k59 },  \
  * R6   { k5a, k5b, k5c, k5d,    k5e, k5f, k60, ___, ___, ___, k61, ___, ___, ___, k62, k63, k64, k65, k66, k67, k68, k69 }  \
}
*/

#define LAYOUT( \
	K000, K001, K002, K003,       K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, K016, K017,                                     K024, \
	K100, K101, K102, K103,       K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, K116, K117, K118,                               K124, \
	K200, K201, K202, K203,       K205, K206, K207, K208, K209, K210, K211, K212, K213, K214, K215, K216, K217, K218,                               K224, \
	K300, K301, K302, K303,       K305, K306, K307, K308, K309, K310, K311, K312, K313, K314, K315, K316,       K318,                               K324, \
	K400, K401, K402, K403,       K405,       K407, K408, K409, K410, K411, K412, K413, K414, K415, K416,       K418,             K421,             K424, \
	K500, K501, K502, K503,       K505, K506, K507,                   K511,                   K515, K516, K517, K518,       K520, K521, K522,       K524  \
) { \
	{ K000,  K001,  K002,  K003,   K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015,  K016,  K017,  KC_NO,  KC_NO, KC_NO, KC_NO,  K024 }, \
	{ K100,  K101,  K102,  K103,   K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115,  K116,  K117,  K118,   KC_NO, KC_NO, KC_NO,  K124 }, \
	{ K200,  K201,  K202,  K203,   K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  K213,  K214,  K215,  K216,  K217,  K218,   KC_NO, KC_NO, KC_NO,  K224 }, \
	{ K300,  K301,  K302,  K303,   K305,  K306,  K307,  K308,  K309,  K310,  K311,  K312,  K313,  K314,  K315,  K316,  KC_NO, K318,   KC_NO, KC_NO, KC_NO,  K324 }, \
	{ K400,  K401,  K402,  K403,   K405,  KC_NO, K407,  K408,  K409,  K410,  K411,  K412,  K413,  K414,  K415,  K416,  KC_NO, K418,   KC_NO, K421,  KC_NO,  K424 }, \
	{ K500,  K501,  K502,  K503,   K505,  K506,  K507,  KC_NO, KC_NO, KC_NO, K511,  KC_NO, KC_NO, KC_NO, K515,  K516,  K517,  K518,   K520,  K521,  K522,   K524 }  \
}
