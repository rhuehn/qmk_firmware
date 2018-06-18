#include "dz60.h"

#define _______ KC_TRNS
#define ___X___ KC_NO
#define MO2_ESC LT(MO(2),KC_ESC)
#define MO2_ENT LT(MO(2),KC_ENT)
#define SFT_SPC S(KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// 0 QWERTY
KEYMAP(
    KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL , ___X___, KC_DEL ,
    KC_TAB ,          KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC, KC_BSLS,
    MO2_ESC,          KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,          KC_ENT ,
    KC_LSFT, ___X___, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,          ___X___,
    KC_LCTL,          KC_LGUI, KC_LALT, KC_BSPC,          MO2_ENT,          KC_SPC , MO(3)  , KC_RALT, ___X___, KC_APP ,          KC_RCTL),

// 1 Colemak
KEYMAP(
    KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL , ___X___, KC_DEL ,
    KC_TAB ,          KC_Q   , KC_W   , KC_F   , KC_P   , KC_G   , KC_J   , KC_L   , KC_U   , KC_Y   , KC_SCLN, KC_LBRC, KC_RBRC, KC_BSLS,
    MO2_ESC,          KC_A   , KC_R   , KC_S   , KC_T   , KC_D   , KC_H   , KC_N   , KC_E   , KC_I   , KC_O,    KC_QUOT,          KC_ENT ,
    KC_LSFT, ___X___, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_K   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,          ___X___,
    KC_LCTL,          KC_LGUI, KC_LALT, KC_BSPC,          MO2_ENT,          KC_SPC , MO(3)  , KC_RALT, ___X___, KC_APP ,          KC_RCTL),

// 2 Fn1
KEYMAP(
    ___X___, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , ___X___, KC_INS ,
    ___X___,          ___X___, KC_HOME, KC_UP  , KC_END , KC_PGUP, KC_PGUP, KC_HOME, KC_UP  , KC_END , ___X___, ___X___, ___X___, ___X___,
    KC_CAPS,          ___X___, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, ___X___, ___X___,          ___X___,
    _______, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, _______,          ___X___,
    _______,          _______, _______, KC_DEL ,          _______,          SFT_SPC, TG(3)  , KC_RGUI, ___X___, _______,          _______),

// 3 Fn2
KEYMAP(
    ___X___, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLD, KC_VOLU, KC_MUTE, KC_PSCR, KC_SLCK, KC_PAUS, ___X___, ___X___, ___X___, ___X___, RESET  , 
    _______,          RGB_TOG, ___X___, ___X___, ___X___, ___X___, ___X___, KC_KP_7, KC_KP_8, KC_KP_9, KC_PMNS, KC_PSLS, ___X___, ___X___, 
    _______,          ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, KC_KP_4, KC_KP_5, KC_KP_6, KC_PPLS, KC_PAST,          KC_PENT, 
    _______, ___X___, DF(0),   DF(1),   ___X___, ___X___, ___X___, KC_KP_0, KC_KP_1, KC_KP_2, KC_KP_3, KC_PDOT, _______,          ___X___, 
    _______,          _______, _______, _______,          _______,          _______, _______, _______, ___X___, _______,          _______),
};

