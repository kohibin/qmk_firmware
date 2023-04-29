#pragma once

#include "quantum.h"


// Define layer names and order

enum userspace_layers {
  _BL = 0,
  _NAV,
  _NUM,
  _FN,
  _MISC,
  _GBF,
};

enum userspace_custom_keycodes {
  GRABURL = SAFE_RANGE,
  PASTECLICK,
  REFRESH,
  BOOKMARK1,
  BOOKMARK2,
  BOOKMARK3,
  BOOKMARK4,
  BOOKMARK5,
  BOOKMARK6,
  BOOKMARK7,
  BOOKMARK8,
  BOOKMARK9,
  BOOKMARK10,
  BOOKMARK11,
  BOOKMARK12,
  SG_A,
  SG_B,
  SG_C,
  SG_D,
  SG_E,
  SG_F,
  SG_G,
  SG_H,
  SG_I,
  SG_J,
  SG_K,
  SG_L,
  SG_M,
  SG_N,
  SG_O,
  SG_P,
  SG_Q,
  SG_R,
  SG_S,
  SG_T,
  SG_U,
  SG_V,
  SG_W,
  SG_X,
  SG_Y,
  SG_Z,
  SG_1,
  SG_2,
  SG_3,
  SG_4,
  SG_5,
  SG_6,
  SG_7,
  SG_8,
  SG_9,
  SG_0,
  SG_MINS,
  SG_TILD,
  SG_ESC,
  SG_PGUP,
  SG_PGDN,
  SG_COLN,
  SG_SEMI,
  SG_DOT,
  SG_COMM,
  SG_SLSH,
  SG_AT,
  SG_HOME,
  SG_END,
  SG_DEL,
  SG_BSPC,
  SG_BSLS,
  SG_ENT,
  SG_RSFT,
  SG_RCTL,
  SG_RALT,
  SG_RFN,
  SG_RWIN,
  SG_ESC,
  SG_TAB,
  SG_LCTRL,
  SG_LSFT,
  SG_LALT,
  SG_LWIN,
  SG_LFN,
  SG_CAPS,
  SG_SPC1,
  SG_SPC2,
  SG_UP,
  SG_DOWN,
  SG_LEFT,
  SG_RIGHT,
};

enum {
  SINGLE_TAP = 1,
  SINGLE_HOLD = 2,
  DOUBLE_TAP = 3,
  DOUBLE_HOLD = 4,
  DOUBLE_SINGLE_TAP = 5, //send two single taps
  TRIPLE_TAP = 6,
  TRIPLE_HOLD = 7,

  QUADRUPLE_TAP = 8,
  QUADRUPLE_HOLD = 9,

  QUINTUPLE_TAP = 10,
  QUINTUPLE_HOLD = 11,

  SEXTUPLE_TAP = 12,
  SEXTUPLE_HOLD = 13,

  SEPTUPLE_TAP = 14,
  SEPTUPLE_HOLD = 15,

  OCTUPLE_TAP = 16,
  OCTUPLE_HOLD = 17
};

enum tap_dance_codes {
  CT_RBRC_END,
  CT_LBRC_HOME,
  CT_Q_HOME,
  CT_W_END,
  CT_K_APOS,
  CT_X_CUT,
  CT_C_COPY,
  CT_V_PASTE,
  CT_B_UNDER,
  CT_I_BACK,
  CT_M_UNDER,
  CT_N_PIPE,
  CT_TAB_GRV,
  CT_A_ALL,
  CT_T_AMP,
  CT_Y_RED,
  CT_O_TILD,
  CT_P_MIN,
  CT_S_SLF,
  CT_D_SRG,
  CT_F1,
  CT_F2,
  CT_F3,
  CT_F4,
  CT_F5,
  CT_F6,
  CT_F7,
  CT_F8,
  CT_F9,
  CT_F10,
  CT_F11,
  CT_F12,
  CT_U_AST,
  CT_PGUP,
  CT_PGDN,
  CT_AT,
  QD_A,
  QD_SPC,
  QD_Z,
  CT_TAB,
  QD_SBRC,
  CT_H,
  CT_G,
  QD_RCTL,
  QD_1,
  QD_2,
};

#define SG_A KC_A
#define SG_B KC_B
#define SG_C KC_C
#define SG_D KC_D
#define SG_E KC_E
#define SG_F KC_F
#define SG_G KC_G
#define SG_H KC_H
#define SG_I KC_I
#define SG_J KC_J
#define SG_K KC_K
#define SG_L KC_L
#define SG_M KC_M
#define SG_N KC_N
#define SG_O KC_O
#define SG_P KC_P
#define SG_Q KC_Q
#define SG_R KC_R
#define SG_S KC_S
#define SG_T KC_T
#define SG_U KC_U
#define SG_V KC_V
#define SG_W KC_W
#define SG_X KC_X
#define SG_Y KC_Y
#define SG_Z KC_Z

#define SG_ESC KC_ESC
#define SG_TAB MEH(KC_TAB)

#define SG_HOME KC_HOME
#define SG_END KC_END
#define SG_PGUP KC_PGUP
#define SG_PGDN KC_PGDN

#define SG_QUOT KC_QUOT
#define SG_SCLN KC_SCLN
#define SG_DOT KC_DOT
#define SG_COMM KC_COMM
#define SG_SLSH KC_SLSH
#define SG_AT KC_LBRC

#define SG_DEL KC_DEL
#define SG_BSPC KC_BSPC
#define SG_BSLS KC_BSLS
#define SG_ENT KC_ENT

#define SG_RSFT MT(MOD_LSFT,KC_UP)
#define SG_RCTL MT(MOD_LSFT,KC_RIGHT)
#define SG_RALT MT(MOD_LSFT,KC_LEFT)
#define SG_RFN MT(MOD_LSFT,KC_DOWN)
#define SG_RWIN KC_RGUI

#define SG_LCTRL KC_LCTRL
#define SG_LSFT KC_LSFT
#define SG_LALT KC_LALT
#define SG_LGUI KC_LGUI
#define SG_LFN TG(_GBF)
#define SG_CAPS OSM(MOD_LCTRL)

#define SG_SPC1 LT(_NUM,KC_SPACE)

#define SG_UP KC_UP
#define SG_DOWN KC_DOWN
#define SG_LEFT KC_LEFT
#define SG_RIGHT KC_RIGHT

#define SG_1 TD(QD_1)
#define SG_2 TD(QD_2)
#define SG_3 TD(CT_F3)
#define SG_4 TD(CT_F4)
#define SG_5 TD(CT_F5)
#define SG_6 TD(CT_F6)
#define SG_7 TD(CT_F7)
#define SG_8 TD(CT_F8)
#define SG_9 TD(CT_F9)
#define SG_0 TD(CT_F10)
#define SG_MINS TD(CT_F11)
#define SG_TILD TD(CT_F12)

#if (!defined(LAYOUT) && defined(KEYMAP))
#define LAYOUT KEYMAP
#endif

#define KEYMAP_wrapper(...)                  LAYOUT(__VA_ARGS__)
#define LAYOUT_wrapper(...)                  LAYOUT(__VA_ARGS__)
#define LAYOUT_ansi_69_wrapper(...)          LAYOUT_ansi_69(__VA_ARGS__)
#define LAYOUT_ansi_68_wrapper(...)          LAYOUT_ansi_68(__VA_ARGS__)
#define LAYOUT_60_tsangan_hhkb_wrapper(...)          LAYOUT_60_tsangan_hhkb(__VA_ARGS__)




#define   _______________Ansi65__Row__0_______________    SG_ESC, SG_1, SG_2, SG_3, SG_4, SG_5, SG_6, SG_7, SG_8, SG_9, SG_0, SG_MINS,  SG_TILD,  SG_SALL   ,  SG_HOME
#define   _______________Ansi65__Row__1_______________    SG_TAB, SG_Q, SG_W, SG_E, SG_R, SG_T, SG_Y, SG_U, SG_I, SG_O, SG_P, SG_AT,  SG_DEL,  SG_BSPC,  SG_END
#define   _______________Ansi65__Row__2_______________    SG_CAPS,  SG_A, SG_S, SG_D, SG_F, SG_G, SG_H, SG_J, SG_K, SG_L, SG_SCLN,  SG_QUOT,  SG_ENT,   SG_PGUP
#define   _______________Ansi65__Row__3_______________    SG_LSFT,  SG_Z, SG_X, SG_C, SG_V, SG_B, SG_N, SG_M, SG_COMM,  SG_DOT, SG_SLSH,  SG_RSFT,    KC_UP,  SG_PGDN
#define   _______________Ansi65__Row__4_______________    TO(_GBF), SG_LGUI,  SG_LALT,     SG_SPC1,        SG_RALT,  LT(_MISC,KC_APP),  SG_RCTL, KC_LEFT,  KC_DOWN,  KC_RGHT
                                  
#define   _______________Ansi65__Row__NUM0____________    KC_ESC, KC_F12, KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_INT1,  _______
#define   _______________Ansi65__Row__NUM1____________    _______, C(S(KC_TAB)),  C(KC_TAB), KC_UP, KC_MS_BTN1, KC_MS_BTN@,  KC_NUM, KC_KP_7,  KC_KP_8,  KC_KP_9,  KC_KP_MINUS,  KC_KP_EQUAL,    _______, _______, _______
#define   _______________Ansi65__Row__NUM2____________    _______,  KC_MS_BTN2,  KC_LEFT, KC_DOWN, KC_RIGHT,  KC_BSPC,  KC_BSPC,  KC_KP_4,  KC_KP_5,  KC_KP_6,  KC_KP_PLUS, KC_PAST,  _______,    _______
#define   _______________Ansi65__Row__NUM3____________    _______,  KC_RBRC, KC_BSLS,  KC_MS_WH_UP,  KC_MS_WH_DOWN,  KC_GRV,  KC_KP_0,  KC_KP_1, KC_KP_2,  KC_KP_3,  KC_KP_DOT,  KC_MS_BTN1,   KC_MS_UP, KC_MS_BTN2
#define   _______________Ansi65__Row__NUM4____________    TO(_BL),  _______,  _______,      _______,        KC_APP,  KC_MS_WH_UP,  KC_MS_WH_DOWN,  KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT
                                  
#define   _______________Ansi65__Row__NAV0____________    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______
#define   _______________Ansi65__Row__NAV1____________    _______,  KC_HOME,  KC_END, KC_UP,  KC_MENU,  _______,  _______,  KC_HOME,  KC_UP,  KC_PGUP,  KC_MENU,  _______,  _______,  _______,  _______
#define   _______________Ansi65__Row__NAV2____________    _______,  C(KC_LSFT), KC_LEFT,  KC_DOWN,  KC_RGHT,  _______,  _______,  KC_LEFT,  KC_DOWN,  KC_RGHT,  _______,  _______,  _______,  _______
#define   _______________Ansi65__Row__NAV3____________    _______,  C(KC_Z),  C(KC_X),  C(KC_C),  C(KC_V),  _______,  _______,  KC_END, _______,  KC_PGDN,  _______,  _______,    _______,  _______
#define   _______________Ansi65__Row__NAV4____________    TO(_BL),  _______,  _______,      _______,        _______,  _______,  _______,  _______,  _______,  _______
                                  
#define   _______________Ansi65__Row__GBF0____________    _______, BOOKMARK1,  BOOKMARK2,  BOOKMARK3,  BOOKMARK4,  BOOKMARK5,  BOOKMARK6,  BOOKMARK7,  BOOKMARK8,  BOOKMARK9,  BOOKMARK10, GRABURL,  _______, REFRESH,  RGB_TOG
#define   _______________Ansi65__Row__GBF1____________    C(S(KC_TAB)),  C(KC_TAB),  KC_UP, KC_MS_BTN1, A(KC_LEFT), PASTECLICK,  KC_F5,  KC_HOME,  KC_UP,  KC_PGUP,  KC_APP,  _______,  _______,  _______,  _______
#define   _______________Ansi65__Row__GBF2____________    _______,  KC_LEFT, KC_DOWN, KC_RIGHT,  A(KC_RIGHT),  KC_MS_BTN1, _______,  KC_LEFT,  KC_DOWN,  KC_RGHT,  _______,  _______,  _______,  _______
#define   _______________Ansi65__Row__GBF3____________    _______,  _______,  _______,  _______,  _______, BOOKMARK1,  BOOKMARK2,  BOOKMARK3,  BOOKMARK4,  KC_PGDN,  _______,  KC_MS_BTN1,   KC_MS_UP, KC_MS_BTN2
#define   _______________Ansi65__Row__GBF4____________    TO(_BL),  _______,  _______,      KC_MS_BTN1,        _______,  KC_MS_WH_UP,  KC_MS_WH_DOWN,  KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT

#define   _______________Ansi65__Row__MSC0____________    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______
#define   _______________Ansi65__Row__MSC1____________    _______, S(KC_1),    S(KC_2),   S(KC_3),  S(KC_4),  S(KC_5),    S(KC_6),     S(KC_7),    KC_RBRC,    KC_BSLS,   KC_MINUS,    S(KC_MINS),  S(KC_EQL),  _______,  _______
#define   _______________Ansi65__Row__MSC2____________    _______, S(KC_1),    S(KC_2),   S(KC_3),  S(KC_4),  S(KC_5),    S(KC_6),  S(KC_7),   S(KC_8),    S(KC_9), KC_MINUS,    S(KC_MINS), _______, _______
#define   _______________Ansi65__Row__MSC3____________    _______,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______
#define   _______________Ansi65__Row__MSC4____________    TO(_BL),  _______,  _______,      _______,          BT_HST1, _______, BT_HST2,  _______,  _______,  _______
                                  
#define   _______________Ansi65__Row___FN0____________    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______
#define   _______________Ansi65__Row___FN1____________    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______
#define   _______________Ansi65__Row___FN2____________    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______
#define   _______________Ansi65__Row___FN3____________    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______
#define   _______________Ansi65__Row___FN4____________    TO(_BL),  _______,  _______,      _______,        _______,  _______,  _______,  _______,  _______,  _______

//
//
//
//
//
//
//

#define   _______________Ansi60__Row__0_______________    KC_ESC, SG_1, SG_2, SG_3, SG_4, SG_5, SG_6, SG_7, SG_8, SG_9, SG_0, SG_MINS,  SG_TILD, SG_PGUP,   SG_PGDN
#define   _______________Ansi60__Row__1_______________    SG_TAB, SG_Q, SG_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, Q_SBRC, SG_RBRC, KC_BSPC
#define   _______________Ansi60__Row__2_______________    SG_CAPS,  Q_A, SG_S, SG_D, SG_F, SG_G, SG_H, SG_J, SG_K, SG_L, SG_SCLN,  KC_QUOT,  KC_ENT
#define   _______________Ansi60__Row__3_______________    KC_LSFT,  Q_Z, SG_X, SG_C, SG_V, SG_B, KC_N, SG_M, KC_COMM,  KC_DOT, SG_SLSH,  KC_UP, SG_RSFT
#define   _______________Ansi60__Row__4_______________    Q_RCTL, KC_LGUI,  KC_LALT,     SG_SPC1,        KC_LEFT,  KC_DOWN,  KC_RGHT

#define   _______________Ansi60__Row__NUM0____________    KC_ESC, KC_F12, KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, _______,  _______
#define   _______________Ansi60__Row__NUM1____________    C(S(KC_TAB)),  C(KC_TAB),  KC_MS_BTN2, KC_MS_UP, KC_MS_BTN1, _______,  KC_NUM, KC_KP_7,  KC_KP_8,  KC_KP_9,  KC_KP_MINUS,  KC_KP_EQUAL,    _______, _______
#define   _______________Ansi60__Row__NUM2____________    _______,  _______,  KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT,  KC_BSPC,  KC_BSPC,  KC_KP_4,  KC_KP_5,  KC_KP_6,  KC_KP_PLUS, KC_PAST,  _______
#define   _______________Ansi60__Row__NUM3____________    _______,  _______,  _______,  KC_MS_WH_UP,  KC_MS_WH_DOWN,  _______,  KC_KP_0,  KC_KP_1, KC_KP_2,  KC_KP_3, KC_MS_BTN1,   KC_MS_UP, KC_MS_BTN2
#define   _______________Ansi60__Row__NUM4____________    TO(_BL),  _______,  _______,      _______,         KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT

#define   _______________Ansi60__Row__NAV0____________    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______
#define   _______________Ansi60__Row__NAV1____________    _______,  KC_HOME,  KC_END, KC_UP,  KC_MENU,  _______,  _______,  KC_HOME,  KC_UP,  KC_PGUP,  KC_MENU,  _______,  _______,   _______
#define   _______________Ansi60__Row__NAV2____________    _______,  C(KC_LSFT), KC_LEFT,  KC_DOWN,  KC_RGHT,  _______,  _______,  KC_LEFT,  KC_DOWN,  KC_RGHT,  _______,  _______,  _______
#define   _______________Ansi60__Row__NAV3____________    _______,  C(KC_Z),  C(KC_X),  C(KC_C),  C(KC_V),  _______,  _______,  KC_END, _______,  KC_PGDN,  _______,      _______,  _______
#define   _______________Ansi60__Row__NAV4____________    TO(_BL),  _______,  _______,      _______,         _______,  _______,  _______

#define   _______________Ansi60__Row__GBF0____________    GRABURL,  REFRESH,  BOOKMARK1,  BOOKMARK2,  BOOKMARK3,  BOOKMARK4,  BOOKMARK5,  BOOKMARK6,  BOOKMARK7,  BOOKMARK8,  BOOKMARK9,  BOOKMARK10, _______,  _______,  RGB_TOG
#define   _______________Ansi60__Row__GBF1____________    C(S(KC_TAB)),  C(KC_TAB),  KC_MS_UP, KC_MS_BTN1, A(KC_LEFT), _______,  _______,  KC_HOME,  KC_UP,  KC_PGUP,  KC_APP,  _______,    _______,  _______
#define   _______________Ansi60__Row__GBF2____________    _______,  KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT,  A(KC_RIGHT),  KC_MS_BTN1, _______,  KC_LEFT,  KC_DOWN,  KC_RGHT,  _______,  _______,  _______
#define   _______________Ansi60__Row__GBF3____________    _______,  BM_BAHA,  BM_PROHARD,  BM_PROMAG,  BM_EWIYAR,  BM_RA, BM_BROD,    KC_END, _______,  KC_PGDN,   KC_MS_BTN1,   KC_MS_UP, KC_MS_BTN2
#define   _______________Ansi60__Row__GBF4____________    TO(_BL),  _______,  BM_JDROPS,      _______,        KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT

#define   _______________Ansi60__Row__MSC0____________    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______
#define   _______________Ansi60__Row__MSC1____________    _______, S(KC_1),    S(KC_2),   S(KC_3),  S(KC_4),  S(KC_5),    S(KC_6),     S(KC_7),    KC_RBRC,    KC_BSLS,   KC_MINUS,    S(KC_MINS),  S(KC_EQL),  _______
#define   _______________Ansi60__Row__MSC2____________    _______, S(KC_1),    S(KC_2),   S(KC_3),  S(KC_4),  S(KC_5),    S(KC_6),  S(KC_7),   S(KC_8),    S(KC_9), KC_MINUS,    S(KC_MINS), _______
#define   _______________Ansi60__Row__MSC3____________    _______,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0,  _______,  _______,  _______,  _______,  _______,  _______,   _______
#define   _______________Ansi60__Row__MSC4____________    TO(_BL),  _______,  _______,      _______,        _______,  _______,  _______

#define   _______________Ansi60__Row___FN0____________    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______
#define   _______________Ansi60__Row___FN1____________    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______
#define   _______________Ansi60__Row___FN2____________    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______
#define   _______________Ansi60__Row___FN3____________    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______
#define   _______________Ansi60__Row___FN4____________    TO(_BL),  _______,  _______,      _______,       _______,  _______,  _______