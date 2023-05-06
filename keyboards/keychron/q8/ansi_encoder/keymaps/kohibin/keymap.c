/* Copyright 2021 @ Keychron (https://www.keychron.com)
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

#include QMK_KEYBOARD_H

// clang-format off
#include QMK_KEYBOARD_H
#include "kohibin.h"

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
     for (uint8_t i = led_min; i < led_max; i++) {
        switch(get_highest_layer(layer_state|default_layer_state)) {
            case 5:
                rgb_matrix_set_color(i, 0x00, 0xff, 0xbb);
            /*    rgb_matrix_set_color(7, 0x00, 0xff, 0xbb);
                rgb_matrix_set_color(8, 0x00, 0xff, 0xbb);
                rgb_matrix_set_color(9, 0x00, 0xff, 0xbb);
                rgb_matrix_set_color(10, 0x00, 0xff, 0xbb);
                rgb_matrix_set_color(11, 0x00, 0xff, 0xbb);
                rgb_matrix_set_color(4, 0x00, 0xff, 0xbb);
                rgb_matrix_set_color(5, 0x00, 0xff, 0xbb);
                rgb_matrix_set_color(6, 0x00, 0xff, 0xbb); */
                break;
            case 4:
                rgb_matrix_set_color(i, RGB_BLACK);
                break;
            case 3:
                rgb_matrix_set_color(i, RGB_BLACK);
                break;
            case 2:
                rgb_matrix_set_color(i, RGB_BLACK);
                break;
            case 1:
                rgb_matrix_set_color(i, RGB_BLACK);
                break;
            case 0:
                rgb_matrix_set_color(i, RGB_BLACK);
                break;
            default:
                rgb_matrix_set_color(i, RGB_BLACK);
                break;
        }
    }
    /*
    if(layer_state_is(5)) {
        RGB_MATRIX_INDICATOR_SET_COLOR(1, 20, 20, 20)
    } else {
        RGB_MATRIX_INDICATOR_SET_COLOR(1, 0, 0, 0)
    }
*/
    return false;
    
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BL] = LAYOUT_ansi_69_wrapper(
     _______________Ansi69__Row__0_______________,
     _______________Ansi69__Row__1_______________,
     _______________Ansi69__Row__2_______________,
     _______________Ansi69__Row__3_______________,
     _______________Ansi69__Row__4_______________),

[_NUM] = LAYOUT_ansi_69_wrapper(
     _______________Ansi69__Row__NUM0____________,
     _______________Ansi69__Row__NUM1____________,
     _______________Ansi69__Row__NUM2____________,
     _______________Ansi69__Row__NUM3____________,
     _______________Ansi69__Row__NUM4____________),

[_NAV] = LAYOUT_ansi_69_wrapper(
     _______________Ansi69__Row__NAV0____________,
     _______________Ansi69__Row__NAV1____________,
     _______________Ansi69__Row__NAV2____________,
     _______________Ansi69__Row__NAV3____________,
     _______________Ansi69__Row__NAV4____________),

[_MISC] = LAYOUT_ansi_69_wrapper(
     _______________Ansi69__Row__MSC0____________,
     _______________Ansi69__Row__MSC1____________,
     _______________Ansi69__Row__MSC2____________,
     _______________Ansi69__Row__MSC3____________,
     _______________Ansi69__Row__MSC4____________),

[_GBF] = LAYOUT_ansi_69_wrapper(
     _______________Ansi69__Row__GBF0____________,
     _______________Ansi69__Row__GBF1____________,
     _______________Ansi69__Row__GBF2____________,
     _______________Ansi69__Row__GBF3____________,
     _______________Ansi69__Row__GBF4____________),

};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_BL] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [_NUM] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [_NAV]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [_MISC]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [_GBF]   = {ENCODER_CCW_CW(_______, _______)}
};
#endif // ENCODER_MAP_ENABLE
