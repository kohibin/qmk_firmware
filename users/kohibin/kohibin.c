/*
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
#include "kohibin.h"
#include "my_tapdances.h"
#include "process_keycode/process_tap_dance.h"
#include "keymap_combo.h"
// #include "my_leads.h"
// #include "my_overrides.h"


__attribute__ ((weak))
void matrix_init_keymap(void) {}

__attribute__ ((weak))
void matrix_scan_keymap(void) {}

__attribute__ ((weak))
uint32_t layer_state_set_keymap (uint32_t state) {
  return state;
}
__attribute__((weak)) bool process_record_keymap(uint16_t keycode, keyrecord_t *record) { return true; }

__attribute__ ((weak))
void led_set_keymap(uint8_t usb_led) {}



//Per key tapping terms for simple tap/hold tap dances to prevent accidental activations on alphas/get hold values faster etc
/*
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TD(CT_K_APOS):
            return TAPPING_TERM - 25;
        default:
            return TAPPING_TERM;
    }
}
*/

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  //
  //Macro keys
  //
  switch (keycode) { // This will do most of the grunt work with the keycodes.
    /*
    case PASTECLICK: //copies url of current web page 
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_MS_BTN1) SS_LCTL("a") SS_TAP(X_DEL) SS_LCTL("v"));
      } else {

      }
      break;
    */
    case SALL: //copies url of current web page 
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LCTL) SS_TAP(X_END) SS_DOWN(X_LSFT) SS_TAP(X_HOME) SS_UP(X_LSFT) SS_UP(X_LCTL));
      } else {

      }
      break;
    case GRABURL: //copies url of current web page 
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_F6) SS_LCTL("x") SS_TAP(X_F6) SS_TAP(X_F6) SS_TAP(X_F6));
      } else {

      }
      break;
    case REFRESH: //moves to address bar and pastes clipboard+hits enter
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_F6) SS_LCTL("V") SS_TAP(X_ENTER));
      } else {

      }
      break;
    case BOOKMARK1: //"clicks" the first(second/third/etc) item on the bookmark bar
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_F6) SS_DELAY(8) SS_TAP(X_F6) SS_DELAY(8) SS_TAP(X_F6) SS_DELAY(5) SS_TAP(X_ENTER));
      } else {

      }
      break;
    case BOOKMARK2:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_F6) SS_DELAY(8) SS_TAP(X_F6) SS_DELAY(8) SS_TAP(X_F6) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_ENTER));
      } else {

      }
      break;
    case BOOKMARK3:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_F6) SS_DELAY(8) SS_TAP(X_F6) SS_DELAY(8) SS_TAP(X_F6) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_ENTER));
      } else {

      }
      break;
    case BOOKMARK4:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_F6) SS_DELAY(8) SS_TAP(X_F6) SS_DELAY(8) SS_TAP(X_F6) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_ENTER));
      } else {

      }
      break;  
    case BOOKMARK5:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_F6) SS_DELAY(8) SS_TAP(X_F6) SS_DELAY(8) SS_TAP(X_F6) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_ENTER));
      } else {

      }
      break;  
    case BOOKMARK6:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_F6) SS_DELAY(8) SS_TAP(X_F6) SS_DELAY(8) SS_TAP(X_F6) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_ENTER));
      } else {

      }
      break;  
      /*
    case BOOKMARK7:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_F6) SS_DELAY(8) SS_TAP(X_F6) SS_DELAY(8) SS_TAP(X_F6) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_ENTER));
      } else {

      }
      break;  
    case BOOKMARK8:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_F6) SS_DELAY(8) SS_TAP(X_F6) SS_DELAY(8) SS_TAP(X_F6) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_ENTER));
      } else {

      }
      break;  
    case BOOKMARK9:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_F6) SS_DELAY(8) SS_TAP(X_F6) SS_DELAY(8) SS_TAP(X_F6) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT)  SS_TAP(X_ENTER));
      } else {

      }
      break;  
    case BOOKMARK10:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_F6) SS_DELAY(8) SS_TAP(X_F6) SS_DELAY(8) SS_TAP(X_F6) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_RGHT) SS_DELAY(5) SS_TAP(X_ENTER));
      } else {

      }
      break;
*/

  return true;


//
// Defining simple tap/hold tap dances
//

tap_dance_action_t *action;

    case TD(CT_RBRC_END):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;  
    case TD(CT_LBRC_HOME):  // list all tap dance keycodes with tap-hold configurations
        action = &tap_dance_actions[TD_INDEX(keycode)];
        if (!record->event.pressed && action->state.count && !action->state.finished) {
            tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
            tap_code16(tap_hold->tap);
         }
         break;  
    case TD(CT_Q_HOME):  // list all tap dance keycodes with tap-hold configurations
        action = &tap_dance_actions[TD_INDEX(keycode)];
        if (!record->event.pressed && action->state.count && !action->state.finished) {
            tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
            tap_code16(tap_hold->tap);
        }
        break;  
    case TD(CT_W_END):  // list all tap dance keycodes with tap-hold configurations
        action = &tap_dance_actions[TD_INDEX(keycode)];
        if (!record->event.pressed && action->state.count && !action->state.finished) {
            tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
            tap_code16(tap_hold->tap);
        }       
        break;      
    case TD(CT_B_UNDER):  // list all tap dance keycodes with tap-hold configurations
        action = &tap_dance_actions[TD_INDEX(keycode)];
        if (!record->event.pressed && action->state.count && !action->state.finished) {
            tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
            tap_code16(tap_hold->tap);
        }       
        break;      
    case TD(CT_K_APOS):  // list all tap dance keycodes with tap-hold configurations
        action = &tap_dance_actions[TD_INDEX(keycode)];
        if (!record->event.pressed && action->state.count && !action->state.finished) {
            tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
            tap_code16(tap_hold->tap);
        }       
        break;   
    case TD(CT_X_CUT):  // list all tap dance keycodes with tap-hold configurations
        action = &tap_dance_actions[TD_INDEX(keycode)];
        if (!record->event.pressed && action->state.count && !action->state.finished) {
            tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
            tap_code16(tap_hold->tap);
        }       
        break;
    case TD(CT_C_COPY):  // list all tap dance keycodes with tap-hold configurations
        action = &tap_dance_actions[TD_INDEX(keycode)];
        if (!record->event.pressed && action->state.count && !action->state.finished) {
            tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
            tap_code16(tap_hold->tap);
        }       
        break;           
    case TD(CT_V_PASTE):  // list all tap dance keycodes with tap-hold configurations
        action = &tap_dance_actions[TD_INDEX(keycode)];
        if (!record->event.pressed && action->state.count && !action->state.finished) {
            tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
            tap_code16(tap_hold->tap);
        }       
        break;
    case TD(CT_M_UNDER):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;
/*
    case TD(CT_I_BACK):  // list all tap dance keycodes with tap-hold configurations
        action = &tap_dance_actions[TD_INDEX(keycode)];
        if (!record->event.pressed && action->state.count && !action->state.finished) {
            tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
            tap_code16(tap_hold->tap);
        }       
        break;
    case TD(CT_N_PIPE):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;
    case TD(CT_TAB_GRV):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;          
    case TD(CT_A_ALL):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;
    case TD(CT_T_AMP):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;          
    case TD(CT_U_AST):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;
    case TD(CT_Y_RED):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;
    case TD(CT_O_TILD):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;
    case TD(CT_P_MIN):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;
    case TD(CT_S_SLF):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;
    case TD(CT_D_SRG):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;
          
    case TD(CT_TAB):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;
    case TD(CT_H):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;    

    case TD(CT_G):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;

*/

    case TD(CT_F1):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;
    case TD(CT_F2):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;
    case TD(CT_F3):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;
    case TD(CT_F4):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;
    case TD(CT_F5):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;
    case TD(CT_F6):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;
    case TD(CT_F7):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;
    case TD(CT_F8):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;

    case TD(CT_F9):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;
    case TD(CT_F10):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;
    case TD(CT_F11):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;
    case TD(CT_F12):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;
    case TD(CT_AT):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;
    case TD(CT_PGUP):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;
    case TD(CT_PGDN):  // list all tap dance keycodes with tap-hold configurations
          action = &tap_dance_actions[TD_INDEX(keycode)];
          if (!record->event.pressed && action->state.count && !action->state.finished) {
              tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
              tap_code16(tap_hold->tap);
          }
          break;


  };
  return true;
}