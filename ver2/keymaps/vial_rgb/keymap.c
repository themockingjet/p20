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

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_5x4(
        KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, 
        KC_P7,   KC_P8,   KC_P9,   KC_TAB, 
        KC_P4,   KC_P5,   KC_P6,   KC_PPLS, 
        KC_P1,   KC_P2,   KC_P3,   KC_DEL, 
        KC_P0,   KC_P0, KC_PDOT, KC_PENT)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case 1:
        rgblight_setrgb (180, 120, 0);
        break;
    case 2:
        rgblight_setrgb (0,  180, 0);
        break;
    case 3:
        rgblight_setrgb (0,  180, 180);
        break;
    case 4:
        rgblight_setrgb (0,  180, 0);
        break;
    case 5:
        rgblight_setrgb (180,  0, 180);
        break;
    default: //  for any other layers, or the default layer
        rgblight_setrgb (180,  0, 0);
        break;
    }
  return state;
}