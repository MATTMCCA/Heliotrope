#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

/* key matrix pins for heliotrope */
#define MATRIX_ROW_PINS { B7, D0, D1, D2, D3 }
#define MATRIX_COL_PINS { B6, B5, B4, D7, D6, D4, C6, C7, F7, F6, F5, F4, F1, F0 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define RGB_DI_PIN D5

#ifdef RGB_DI_PIN
#    define RGBLED_NUM 61
#    define DRIVER_LED_TOTAL RGBLED_NUM
#    ifdef RGBLIGHT_ENABLE
#        define RGBLIGHT_HUE_STEP 8
#        define RGBLIGHT_SAT_STEP 8
#        define RGBLIGHT_VAL_STEP 8
#        define RGBLIGHT_LIMIT_VAL 200 /* The maximum brightness level */
#        define RGBLIGHT_SLEEP         /* If defined, the RGB lighting will be switched off when the host goes to sleep */
/*== all animations enable ==*/
//#        define RGBLIGHT_ANIMATIONS
/*== or choose animations ==*/
//   #define RGBLIGHT_EFFECT_BREATHING
//   #define RGBLIGHT_EFFECT_RAINBOW_MOOD
//   #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//   #define RGBLIGHT_EFFECT_SNAKE
//   #define RGBLIGHT_EFFECT_KNIGHT
//   #define RGBLIGHT_EFFECT_CHRISTMAS
//   #define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RGB_TEST
//   #define RGBLIGHT_EFFECT_ALTERNATING
#     endif
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
#define VIAL_KEYBOARD_UID {0xDA, 0x7F, 0xD1, 0x7D, 0x32, 0x7B, 0x6F, 0x7E}


/* Inverted Pinout for REF

	[F0] COL13 = ROW0 [B7]
	[F1] COL12 = ROW1 [D0]
	[F4] COL11 = ROW2 [D1]
	[F5] COL10 = ROW3 [D2]
	[F6] COL9  = ROW4 [D3]
	[F7] COL8  = RGB  [D5]
	[C7] COL7  = COL5 [D4]
	[C6] COL6  = COL4 [D6]
	[B6] COL0  = COL3 [D7]
	[B5] COL1  = COL2 [B4]
	
	#define RGB_DI_PIN F7
	#define MATRIX_ROW_PINS { F0, F1, F4, F5, F6 }
	#define MATRIX_COL_PINS { D7, B4, B5, B6, C6, C7, D6, D4, D5, D3, D2, D1, D0, B7 }
	
*/