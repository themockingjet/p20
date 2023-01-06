/*
Copyright 2020 Pabile

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
#define VENDOR_ID       0x6666
#define PRODUCT_ID      0x6667
#define DEVICE_VER      0x0002
#define MANUFACTURER    Pabile
#define PRODUCT         P20 ver2

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 4

/* pin-out */
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { D1, D0, D4, B2 }
#define UNUSED_PINS
 
/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* encoders */
#define ENCODERS 2
#define ENCODERS_PAD_A { D2, B3 }
#define ENCODERS_PAD_B { D3, F6 }

#define BACKLIGHT_PIN B6

/* Increase Layer Count */
#define DYNAMIC_KEYMAP_LAYER_COUNT 6

/* Increase Macro Count */
// #define DYNAMIC_KEYMAP_MACRO_COUNT 20

/* Increase Combo Count */
#define VIAL_COMBO_ENTRIES 10

/* Increase Tap Dance Count */
#define VIAL_TAP_DANCE_ENTRIES 10