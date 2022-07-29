/* Copyright 2021 peepeetee
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

 /*
 { k00, k01, k02, k03,   k04,   k05, k06,   k07,   k08,   k09, k0A, k0B, k0C,   k0D,   k0E}, \
 { k10, k11, k12, k13,   k14,   k15, k16,   k17,   k18,   k19, k1A, k1B, k1C,   k1D,   k1E}, \
 { k20, k21, k22, k23,   k24,   k25, k26,   k27,   k28,   k29, k2A, k2B, k2C,   KC_NO, k2E}, \
 { k30, k31, k32, k33,   k34,   k35, k36,   k37,   k38,   k39, k3A, k3B, KC_NO, k3D,   k3E}, \
 { k40, k41, k42, KC_NO, KC_NO, k45, KC_NO, KC_NO, KC_NO, k49, k4A, k4B, k4C,   k4D,   k4E}, \
 */

#include "mk65rgb.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
    // Key Matrix to LED Index
    { 0, 9, 10, 18,     19, 27,     28,     35,     36, 44,     45, 54, 55,     62,     63},
    { 1, 8, 11, 17,     20, 26,     29,     34,     37, 43,     46, 53, 56,     61,     64},
    { 2, 7, 12, 16,     21, 25,     30,     33,     38, 42,     47, 52, 57,     NO_LED, 65},
    { 3, 6, 13, 15,     22, 24,     31,     32,     39, 41,     48, 51, NO_LED, 60,     66},
    { 4, 5, 14, NO_LED, 23, NO_LED, NO_LED, NO_LED, 40, NO_LED, 49, 50, 58,     59,     67}
}, {
    // LED Index to Physical Position
    { 0, 0 }, { 0, 16 }, { 0, 32 }, { 0, 48 }, { 0, 64 },
    { 16, 64 }, { 16, 48 }, { 16, 32 }, { 16, 16 }, { 16, 0 },
    { 32, 0 }, { 32, 16 }, { 32, 32 }, { 32, 48 }, { 32, 64 },
    { 48, 48 }, { 48, 32 }, { 48, 16 }, { 48, 0 },
    { 64, 0 }, { 64, 16 }, { 64, 32 }, { 64, 48 },
    { 80, 64 }, { 80, 48 }, { 80, 32 }, { 80, 16 }, { 80, 0 },
    { 96, 0 }, { 96, 16 }, { 96, 32 }, { 96, 48 },
    { 112, 48 }, { 112, 32 }, { 112, 16 }, { 112, 0 },
    { 128, 0 }, { 128, 16 }, { 128, 32 }, { 128, 48 },
    { 144, 64 }, { 144, 48 }, { 144, 32 }, { 144, 16 }, { 144, 0 },
    { 160, 0 }, { 160, 16 }, { 160, 32 }, { 160, 48 }, { 160, 64 },
    { 176, 64 }, { 176, 48 }, { 176, 32 }, { 176, 16 }, { 176, 0 },
    { 192, 0 }, { 192, 16 }, { 192, 32 }, { 192, 64 },
    { 208, 64 }, { 224, 48 }, { 206, 16 }, { 208, 0 },
    { 224, 0 }, { 224, 16 }, { 224, 32 }, { 224, 48 }, { 224, 64 }
}, {
    4, 4, 4, 4, 4,
    4, 4, 4, 4, 4,
    4, 4, 4, 4, 4,
    4, 4, 4, 4,
    4, 4, 4, 4,
    4, 4, 4, 4, 4,
    4, 4, 4, 4,
    4, 4, 4, 4,
    4, 4, 4, 4,
    4, 4, 4, 4, 4,
    4, 4, 4, 4, 4,
    4, 4, 4, 4, 4,
    4, 4, 4, 4,
    4, 4, 4, 4,
    4, 4, 4, 4, 4
} };
#endif
