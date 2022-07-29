#pragma once

#include "config_common.h"

#define VENDOR_ID    0x0167 //LogicPGS
#define PRODUCT_ID   0x185C
#define DEVICE_VER   0x0001
#define MANUFACTURER LogicPGS
#define PRODUCT      MK65

/* key matrix size */
// SPECIFY NUMBER OF ROWS AND COLUMNS
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

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
#define MATRIX_ROW_PINS { C7, C6, B6, D1, D0 }
#define MATRIX_COL_PINS { B1, B2, B3, B7, D4, D6, D7, B4, B5, F7, F6, F5, F4, F1, F0 }
//#define UNUSED_PINS

//LATENCY
#define DEBOUNCE 2

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define RGB_DI_PIN D3

#ifdef RGBLIGHT_ENABLE
#    define RGBLED_NUM 68 // Number of LEDs
#endif

#ifdef RGB_MATRIX_ENABLE
#    define RGBLED_NUM 68 // Number of LEDs
#    define DRIVER_LED_TOTAL RGBLED_NUM
#endif
