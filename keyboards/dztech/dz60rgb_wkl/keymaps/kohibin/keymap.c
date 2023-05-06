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
            case 3:
                rgb_matrix_set_color(i, RGB_CYAN);
                break;
            case 2:
                rgb_matrix_set_color(i, RGB_GREEN);
                break;
            case 1:
                rgb_matrix_set_color(i, RGB_RED);
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
    if(layer_state_is(4)) {
        RGB_MATRIX_INDICATOR_SET_COLOR(1, 20, 20, 20)
    } else {
        RGB_MATRIX_INDICATOR_SET_COLOR(1, 0, 0, 0)
    }

*/
    return false;
    
}


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BL] = LAYOUT_60_tsangan_hhkb_wrapper(
     _______________Ansi60__Row__0_______________,
     _______________Ansi60__Row__1_______________,
     _______________Ansi60__Row__2_______________,
     _______________Ansi60__Row__3_______________,
     _______________Ansi60__Row__4_______________),

[_NUM] = LAYOUT_60_tsangan_hhkb_wrapper(
     _______________Ansi60__Row__NUM0____________,
     _______________Ansi60__Row__NUM1____________,
     _______________Ansi60__Row__NUM2____________,
     _______________Ansi60__Row__NUM3____________,
     _______________Ansi60__Row__NUM4____________),

[_NAV] = LAYOUT_60_tsangan_hhkb_wrapper(
     _______________Ansi60__Row__NAV0____________,
     _______________Ansi60__Row__NAV1____________,
     _______________Ansi60__Row__NAV2____________,
     _______________Ansi60__Row__NAV3____________,
     _______________Ansi60__Row__NAV4____________),

[_GBF] = LAYOUT_60_tsangan_hhkb_wrapper(
     _______________Ansi60__Row__GBF0____________,
     _______________Ansi60__Row__GBF1____________,
     _______________Ansi60__Row__GBF2____________,
     _______________Ansi60__Row__GBF3____________,
     _______________Ansi60__Row__GBF4____________),

};


