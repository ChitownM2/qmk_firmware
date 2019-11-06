#include QMK_KEYBOARD_H


/*
-------------------------------------------------------------------------------------------
|GvEsc|  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  | Backspace |
-------------------------------------------------------------------------------------------
|  Tab   |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |   \    |
-------------------------------------------------------------------------------------------
|   Fn2   |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
-------------------------------------------------------------------------------------------
|    Shift    |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  Shift |  Up  | Del |
-------------------------------------------------------------------------------------------
| Ctrl  |  GUI  |  Alt  |   Enter    |  Fn1  |   Space    | Alt | Ctrl| Left | Down |Right|
-------------------------------------------------------------------------------------------
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_base(
    KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, \
    KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC, KC_BSLS, \
    LT(2,KC_CAPS),   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,   KC_QUOT, KC_ENT, \
    KC_LSFT,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  RSFT_T(KC_SLSH),  KC_UP, KC_DEL, \
    KC_LCTL,  KC_LGUI,  KC_LALT, KC_ENT,      TT(1),      KC_SPC,  KC_RALT, KC_RCTL,  KC_LEFT, KC_DOWN, KC_RIGHT
  ),

/*
-------------------------------------------------------------------------------------------
|Flash | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12 |          |
-------------------------------------------------------------------------------------------
|        |     |     |     |     |     |     |     |Br Hm|     |     |Volup|VolDn|  Mute  |
-------------------------------------------------------------------------------------------
|         |MPrv | MPly |MNxt |     |     |     |     |     |     | INS|PrtSc|             |
-------------------------------------------------------------------------------------------
|             |     |     | calc|     |     |     |Media|     |     |        | Pg Up|     |
-------------------------------------------------------------------------------------------
|       |       |       |            | TRNS  |            |     | Menu| Home | Pg Dn| End |
-------------------------------------------------------------------------------------------
*/

  [1] = LAYOUT_base( 
    RESET, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,  _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, KC_WHOM, _______, _______, _______, _______, _______, \
    _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______, _______, _______, KC_INS, KC_PSCR, _______, \
    _______, _______, _______, KC_CALC, _______, _______, _______, KC_MSEL, _______, _______, _______, KC_PGUP, _______, \
    _______, _______, _______,          _______, _______, _______,          _______, KC_APP, KC_HOME, KC_PGDN, KC_END \
  ),
/*
-------------------------------------------------------------------------------------------
|     |     |     |     |     |     |     |     |     |     |     |     |     |           |
-------------------------------------------------------------------------------------------
|        |     |     |     |     |     |     |     |     |     |     |     |     |        |
-------------------------------------------------------------------------------------------
|  TRANS  |     |     |     |     |     |     |     |     |     |     |     |             |
-------------------------------------------------------------------------------------------
|             |     |     |     |     |     |     |     |     |     |        | M Up |     |
-------------------------------------------------------------------------------------------
|       |       |       |   DelWL    |       |   DelWR    |MBut1|MBut2| M Lt | M Dn | M Rt|
-------------------------------------------------------------------------------------------
*/
[2] = LAYOUT_base( 
    _______, _______,  _______,  _______,  _______,  _______, _______,  _______,  _______, _______, _______, _______, _______,  _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    KC_TRNS, _______, _______, _______, _______, _______, _______, _______,      _______,         _______, _______, _______, _______, \
    _______,          _______, _______, _______, _______,_______, _______, _______,  _______, _______, _______, KC_MS_U, _______, \
    _______, _______, _______,          LCTL(KC_BSPC), _______,LCTL(KC_DEL),                KC_BTN1,       KC_BTN2, KC_MS_L, KC_MS_D, KC_MS_R \
),
};