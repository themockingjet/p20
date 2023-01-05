#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6666
#define PRODUCT_ID      0x6667
#define DEVICE_VER      0x0002
#define MANUFACTURER    "Pabile"
#define PRODUCT         "P20 ver2"

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

#define ENCODERS 4
#define ENCODERS_PAD_A { D2, F7, B1, B3 }
#define ENCODERS_PAD_B { D3, F4, F5, F6 }

#define BACKLIGHT_PIN B6
