#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

/* key matrix pins for beccas board*/
#define MATRIX_ROW_PINS { B7, D0, D1, D2, D3 }
#define MATRIX_COL_PINS { B6, B5, B4, D7, D6, D4, C6, C7, F7, F6, F5, F4, F1, F0 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
#define VIAL_KEYBOARD_UID {0xDA, 0x7F, 0xD1, 0x7D, 0x32, 0x7B, 0x6F, 0x7E}
