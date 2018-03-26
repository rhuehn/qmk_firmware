#include "dz60.h"

#undef _______
#define _______ KC_NO
#define ___X___ KC_NO

#define MO_ESC LT(MO(1),KC_ESC)
#define KP_MINU KC_KP_MINUS
#define KP_PLUS KC_KP_PLUS
#define KP_SLAS KC_KP_SLASH
#define KP_ASTE KC_KP_ASTERISK
#define KP_ENTE KC_KP_ENTER
#define KP_DOT KC_KP_DOT

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
KEYMAP(
	KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL , ___X___, KC_BSPC,
	KC_TAB ,          KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC, KC_BSLS,
	MO_ESC , 	  KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,          KC_ENT ,
	KC_LSFT, ___X___, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,          ___X___,
	KC_LCTL,          KC_LGUI, KC_LALT, KC_BSPC,          MO(1)  ,          KC_SPC , KC_RALT, KC_RGUI, ___X___, MO(2)  ,          KC_RCTL),

KEYMAP(
	_______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , _______, KC_DEL ,
	_______,          KC_HOME, KC_UP  , KC_END , KC_PGUP, _______, KC_PGUP, KC_HOME, KC_UP  , KC_END , _______, _______, _______, _______,
	KC_CAPS,          KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, _______, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,          _______,
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
	_______,          _______, _______, KC_DEL ,          _______,          KC_INS , _______, _______, _______, _______,          _______),

KEYMAP(
	_______, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLD, KC_VOLU, KC_MUTE, KC_PSCR, KC_SLCK, KC_PAUSE,_______, _______, _______, _______, RESET  , 
	_______, 	  RGB_TOG, _______, _______, _______, _______, _______, KC_KP_7, KC_KP_8, KC_KP_9, KP_MINU, KP_SLAS, _______, _______, 
	_______, 	  _______, _______, _______, _______, _______, _______, KC_KP_4, KC_KP_5, KC_KP_6, KP_PLUS, KP_ASTE, _______, 
	_______, _______, BL_TOGG, _______, _______, _______, _______, KC_KP_0, KC_KP_1, KC_KP_2, KC_KP_3, KP_ENTE, _______,	      _______, 
	_______, 	  _______, _______, _______,          _______,          KP_DOT , _______, _______, _______, _______,	      _______),
};

