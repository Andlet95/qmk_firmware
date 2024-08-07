// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H
#include <keymap_norwegian.h>

enum sofle_layers {
    /* _M_XYZ = Mac Os, _W_XYZ = Win/Linux */
    _COLEMAK,
    //_QWERTY,

    _LOWER,
    _RAISE,
    _ADJUST,

    _GAMING
};

enum custom_keycodes { /*NO_QWERTY,*/ NO_COLEMAK = QK_USER, KC_PRVWD, KC_NXTWD, KC_LSTRT, KC_LEND };

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * COLEMAK
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  |   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  ;   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   F  |   P  |   B  |                    |   J  |   L  |   U  |   Y  |   å  |  æ   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   A  |   R  |   S  |   T  |   G  |-------.    ,-------|   M  |   N  |   E  |   I  |   O  |  ø   |
 * |------+------+------+------+------+------|  MUTE |    |  Mply |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   D  |   V  |-------|    |-------|   K  |   H  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Space  /       \Enter \  |RAISE | Bspc | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `-----------------------------------'           '------''---------------------------'
 */

[_COLEMAK] = LAYOUT(
  NO_PIPE,    NO_1,    NO_2,    NO_3,    NO_4,    NO_5,                         NO_6,    NO_7,    NO_8,    NO_9,    NO_0, NO_SCLN,
   KC_ESC,    NO_Q,    NO_W,    NO_F,    NO_P,    NO_B,                         NO_J,    NO_L,    NO_U,    NO_Y, NO_ARNG,   NO_AE,
   KC_TAB,    NO_A,    NO_R,    NO_S,    NO_T,    NO_G,                         NO_M,    NO_N,    NO_E,    NO_I,    NO_O, NO_OSTR,
  KC_LSFT,    NO_Z,    NO_X,    NO_C,    NO_D,    NO_V, KC_MUTE,    KC_MPLY,    NO_K,    NO_H, NO_COMM,  NO_DOT, NO_SLSH, KC_RSFT,
                KC_LGUI, KC_LALT, KC_LCTL, TL_LOWR,  KC_SPC,            KC_ENT, TL_UPPR, KC_BSPC, KC_RALT, KC_RGUI
),
///*
// * QWERTY
// * ,-----------------------------------------.                    ,-----------------------------------------.
// * |  |   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | Bspc |
// * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
// * | ESC  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  å   |
// * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
// * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ø  |  æ   |
// * |------+------+------+------+------+------|  MUTE |    |  Mply |------+------+------+------+------+------|
// * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
// * `-----------------------------------------/       /     \      \-----------------------------------------'
// *            | LGUI | LAlt | LCTR |LOWER | /Space  /       \Enter \  |RAISE | Bspc | RAlt | RGUI |
// *            |      |      |      |      |/       /         \      \ |      |      |      |      |
// *            `-----------------------------------'           '------''---------------------------'
// */
//
//[_QWERTY] = LAYOUT(
//  _______,    NO_1,    NO_2,    NO_3,    NO_4,    NO_5,                          NO_6,    NO_7,    NO_8,    NO_9,    NO_0, KC_BSPC,
//  _______,    NO_Q,    NO_W,    NO_E,    NO_R,    NO_T,                          NO_Y,    NO_U,    NO_I,    NO_O,    NO_P, NO_ARNG,
//  _______,    NO_A,    NO_S,    NO_D,    NO_F,    NO_G,                          NO_H,    NO_J,    NO_K,    NO_L, NO_OSTR,   NO_AE,
//  _______,    NO_Z,    NO_X,    NO_C,    NO_V,    NO_B, _______,     _______,    NO_N,    NO_M, _______, _______, _______, _______,
//                _______, _______, _______, _______, _______,             _______,  _______, _______, _______, _______
//),
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  |   |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   ¨  |   £  |   ;  |   !  |   `  |                    |   ´  |   ?  |   :  |   $  |   ^  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   &  |   <  |   {  |   {  |   (  |   "  |-------.    ,-------|   '  |   )  |   }  |   ]  |   >  |   |  |
 * |------+------+------+------+------+------|  MUTE |    |  Mply |------+------+------+------+------+------|
 * | Shift|   ~  |   @  |   +  |   =  |   #  |-------|    |-------|   %  |   *  |   -  |   _  |   \  | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Space  /       \Enter \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `-----------------------------------'           '------''---------------------------'
 */
[_LOWER] = LAYOUT(
  _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                         KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
  XXXXXXX,  NO_DIAE,  NO_PND, NO_SCLN, NO_EXLM,  NO_GRV,                       NO_ACUT, NO_QUES, NO_COLN,  NO_DLR, NO_CIRC,  KC_F12,
  NO_AMPR,  NO_LABK, NO_LBRC, NO_LCBR, NO_LPRN, NO_DQUO,                       NO_QUOT, NO_RPRN, NO_RCBR, NO_RBRC, NO_RABK, NO_PIPE,
  _______,  NO_TILD,   NO_AT, NO_PLUS,  NO_EQL, NO_HASH, _______,     _______, NO_PERC, NO_ASTR, NO_MINS, NO_UNDS, NO_BSLS, _______,
                _______, _______, _______, _______, _______,             _______, _______, _______, _______, _______
),
/* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  | Ins  | Pscr | Menu |      |      |                    |      | PWrd |  Up  | NWrd | DLine| Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  | LAt  | LCtl |LShift|      | Caps |-------.    ,-------|      | Left | Down | Rigth|  Del | Bspc |
 * |------+------+------+------+------+------|  MUTE |    |  Mply |------+------+------+------+------+------|
 * |Shift | Undo |  Cut | Copy | Paste|      |-------|    |-------|      | LStr |      | LEnd |      | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Space  /       \Enter \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `-----------------------------------'           '------''---------------------------'
 */
[_RAISE] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                       _______, _______ , _______, _______,  _______ , _______,
  _______,  KC_INS, KC_PSCR,  KC_APP, XXXXXXX, XXXXXXX,                       KC_PGUP, KC_PRVWD,   KC_UP,KC_NXTWD,C(KC_BSPC), KC_BSPC,
  _______, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, KC_CAPS,                       KC_PGDN,  KC_LEFT, KC_DOWN, KC_RGHT, C(KC_DEL),  KC_DEL,
  _______, C(NO_Z), C(NO_X), C(NO_C), C(NO_V), XXXXXXX, _______,     _______, XXXXXXX, KC_LSTRT, XXXXXXX, KC_LEND,   XXXXXXX, _______,
                _______, _______, _______, _______, _______,             _______, _______, _______, _______, _______
),
/* ADJUST
* ,-----------------------------------------.                    ,-----------------------------------------.
* |      |      |      |      |      |      |                    |      |      |      |      |      |      |
* |------+------+------+------+------+------|                    |------+------+------+------+------+------|
* | QK_BOOT|    |      | CLMK |MACWIN|      |                    |      |      |      |      |      |      |
* |------+------+------+------+------+------|                    |------+------+------+------+------+------|
* |      |   1  |   2  |   3  |   4  |   5  |-------.    ,-------|   6  |   7  |   8  |   9  |   0  |      |
* |------+------+------+------+------+------|  MUTE |    |  Mply |------+------+------+------+------+------|
* |      |      |      |      |   ,  |      |-------|    |-------|      |   .  |      |      |      |      |
* `-----------------------------------------/       /     \      \-----------------------------------------'
*            | LGUI | LAlt | LCTR |LOWER | /Space  /       \Enter \  |RAISE | RCTR | RAlt | RGUI |
*            |      |      |      |      |/       /         \      \ |      |      |      |      |
*            `-----------------------------------'           '------''---------------------------'
*/
[_ADJUST] = LAYOUT(
  XXXXXXX,XXXXXXX,XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
QK_BOOT,XXXXXXX,TG(_GAMING),NO_COLEMAK,CG_TOGG,XXXXXXX,                       XXXXXXX, XXXXXXX, KC_MPRV, KC_MNXT, XXXXXXX, XXXXXXX,
  XXXXXXX,   NO_1,   NO_2,      NO_3,    NO_4,    NO_5,                          NO_6,    NO_7,    NO_8,    NO_9,    NO_0, XXXXXXX,
  XXXXXXX,XXXXXXX,XXXXXXX,   XXXXXXX, NO_COMM, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX,  NO_DOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                _______, _______, _______, _______, _______,             _______, _______, _______, _______, _______
),
/* GAMING
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  ESC |   |  |   1  |   2  |   3  |   4  |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   T  |   Q  |   W  |   E  |   R  |                    |   ,  |   7  |   8  |   9  |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  TAB |   G  |   A  |   S  |   D  |   F  |-------.    ,-------|   .  |   4  |   5  |   6  |      |      |
 * |------+------+------+------+------+------|  MUTE |    |  Mply |------+------+------+------+------+------|
 * | SHFT |   <  |   Z  |   X  |   C  |   V  |-------|    |-------|   0  |   1  |   2  |   3  |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |   5  | /Space  /       \Enter \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `-----------------------------------'           '------''---------------------------'
 */
  [_GAMING] = LAYOUT(
   KC_ESC, NO_PIPE,    NO_1,    NO_2,    NO_3,    NO_4,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX,    NO_T,    NO_Q,    NO_W,    NO_E,    NO_R,                       XXXXXXX,    NO_U,    NO_I,    NO_O,    NO_P, XXXXXXX,
   KC_TAB,    NO_G,    NO_A,    NO_S,    NO_D,    NO_F,                       XXXXXXX,    NO_H,    NO_J,    NO_K,    NO_L, XXXXXXX,
  KC_LSFT, NO_LABK,    NO_Z,    NO_X,    NO_C,    NO_V, XXXXXXX,     XXXXXXX, XXXXXXX,    NO_B,    NO_N,    NO_M, XXXXXXX, XXXXXXX,
                _______, _______, _______,    NO_5, _______,         TG(_GAMING),   KC_UP, _______, _______, _______
)
};
// clang-format on

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_PRVWD:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_LEFT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                }
            }
            break;
        case KC_NXTWD:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_RIGHT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                }
            }
            break;
        case KC_LSTRT:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    // CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                } else {
                    register_code(KC_HOME);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_code(KC_HOME);
                }
            }
            break;
        case KC_LEND:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    // CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                } else {
                    register_code(KC_END);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_code(KC_END);
                }
            }
            break;
    }
    return true;
}
#ifdef OLED_ENABLE
bool oled_task_user(void) {
    oled_clear();
    oled_write_P(PSTR("\n\n"), false);
    switch (get_highest_layer(layer_state)) {
        case _COLEMAK:
            oled_write_ln_P(PSTR("Qlmk"), false);
            break;
        case _GAMING:
            char word[6] = "GMING";
            for (int i = 0; i < 2; i++) {
                oled_write_ln_P(PSTR(word), i % 2);
            }
            break;
        default:
            oled_write_P(PSTR("Mod\n"), false);
            break;
    }
    switch (get_highest_layer(layer_state)) {
        case _GAMING:
            break;
        default:
            oled_write_P(PSTR("\n\n"), false);
            oled_write_ln_P(PSTR("LAYER"), false);
            switch (get_highest_layer(layer_state)) {
                case _COLEMAK:
                    oled_write_P(PSTR("Base\n"), false);
                    break;
                case _RAISE:
                    oled_write_P(PSTR("Raise"), false);
                    break;
                case _LOWER:
                    oled_write_P(PSTR("Lower"), false);
                    break;
                case _ADJUST:
                    oled_write_P(PSTR("Adjst"), false);
                    break;
                case _GAMING:
                    break;
                default:
                    oled_write_ln_P(PSTR("Undef"), false);
            }
            oled_write_P(PSTR("\n\n"), false);

            led_t led_usb_state = host_keyboard_led_state();
            oled_write_ln(led_usb_state.caps_lock ? PSTR("CPSLK") : PSTR("     "), led_usb_state.caps_lock);
    }

    return false;
}
#endif
#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    static bool ticks[] = {false, false};
    if (!ticks[index]) {
        ticks[index] = true;
    } else if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
        ticks[index] = false;
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
        ticks[index] = false;
    }
    return false;
}
#endif
