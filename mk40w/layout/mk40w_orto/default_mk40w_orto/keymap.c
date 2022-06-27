#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌────┬───┬───┬───┐
     * │ VU │ 7 │ 8 │ 9 │
     * ├────├───├───├───┤
     * │ VD │ 4 │ 5 │ 6 │
     * ├────├───├───├───┤
     * │ MT │ 1 │ 2 │ 3 │
     * ├────├───├───├───┤
     * │ EN │ 0 │ + │ - │
     * └────┴───┴───┴───┘

     */
     [0] = LAYOUT_mk40w_orto(
       KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, XXXXXXX,
       XXXXXXX, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, XXXXXXX, XXXXXXX, KC_MUTE, XXXXXXX, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, XXXXXXX,
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_SPACE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
   ),

 };
