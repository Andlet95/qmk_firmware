// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H
#include <keymap_norwegian.h>

enum sofle_layers {
    /* _M_XYZ = Mac Os, _W_XYZ = Win/Linux */
    _COLEMAK,
    _QWERTY,

    _LOWER,
    _RAISE,
    _ADJUST,
};

enum custom_keycodes { NO_QWERTY, NO_COLEMAK = QK_USER, KC_PRVWD, KC_NXTWD, KC_LSTRT, KC_LEND };

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * COLEMAK
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  |   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  å   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   F  |   P  |   B  |                    |   J  |   L  |   U  |   Y  |   ;  |  æ   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   A  |   R  |   S  |   T  |   G  |-------.    ,-------|   M  |   N  |   E  |   I  |   O  |  æ   |
 * |------+------+------+------+------+------|  MUTE |    |  Mply |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   D  |   V  |-------|    |-------|   K  |   H  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | Bspc | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `-----------------------------------'           '------''---------------------------'
 */

[_COLEMAK] = LAYOUT(
  NO_PIPE,    NO_1,    NO_2,    NO_3,    NO_4,    NO_5,                         NO_6,    NO_7,    NO_8,    NO_9,    NO_0, NO_ARNG,
   KC_ESC,    NO_Q,    NO_W,    NO_F,    NO_P,    NO_B,                         NO_J,    NO_L,    NO_U,    NO_Y, NO_SCLN, NO_OSTR,
   KC_TAB,    NO_A,    NO_R,    NO_S,    NO_T,    NO_G,                         NO_M,    NO_N,    NO_E,    NO_I,    NO_O,   NO_AE,
  KC_LSFT,    NO_Z,    NO_X,    NO_C,    NO_D,    NO_V, KC_MUTE,    KC_MPLY,    NO_K,    NO_H, NO_COMM,  NO_DOT, NO_SLSH, KC_RSFT,
                KC_LGUI, KC_LALT, KC_LCTL, TL_LOWR,  KC_SPC,            KC_ENT, TL_UPPR, KC_BSPC, KC_RALT, KC_RGUI
),
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  |   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  å   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ø  |  æ   |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | Bspc | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `-----------------------------------'           '------''---------------------------'
 */

[_QWERTY] = LAYOUT(
  _______,    NO_1,    NO_2,    NO_3,    NO_4,    NO_5,                          NO_6,    NO_7,    NO_8,    NO_9,    NO_0, KC_BSPC,
  _______,    NO_Q,    NO_W,    NO_E,    NO_R,    NO_T,                          NO_Y,    NO_U,    NO_I,    NO_O,    NO_P, NO_ARNG,
  _______,    NO_A,    NO_S,    NO_D,    NO_F,    NO_G,                          NO_H,    NO_J,    NO_K,    NO_L, NO_OSTR,   NO_AE,
  _______,    NO_Z,    NO_X,    NO_C,    NO_V,    NO_B, _______,     _______,    NO_N,    NO_M, _______, _______, _______, _______,
                _______, _______, _______, _______, _______,             _______,  _______, _______, _______, _______
),
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  |   |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  `   |   ¨  |      |   ;  |   !  |      |                    |      |   @  |   :  |      |      | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   &  |   <  |   {  |   {  |   (  |   "  |-------.    ,-------|   '  |   )  |   }  |   ]  |   >  |   |  |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * | Shift|      |   ?  |   +  |   =  |   ~  |-------|    |-------|   ^  |   *  |   -  |   _  |   \  | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `-----------------------------------'           '------''---------------------------'
 */
[_LOWER] = LAYOUT(
  _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                         KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
  NO_GRV,  NO_DIAE, XXXXXXX, NO_SCLN, NO_EXLM, XXXXXXX,                       XXXXXXX,   NO_AT, NO_COLN, XXXXXXX, XXXXXXX,  KC_F12,
  NO_AMPR, NO_LABK, NO_LBRC, NO_LCBR, NO_LPRN,NO_DQUOT,                       NO_QUOT, NO_RPRN, NO_RCBR, NO_RBRC, NO_RABK, NO_PIPE,
  _______, XXXXXXX, NO_QUES, NO_PLUS,  NO_EQL, NO_TILD, _______,     _______, NO_CIRC, NO_ASTR, NO_MINS, NO_UNDS, NO_BSLS, _______,
                _______, _______, _______, _______, _______,             _______, _______, _______, _______, _______
),
/* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  | Ins  | Pscr | Menu |      |      |                    |      | PWrd |  Up  | NWrd | DLine| Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  | LAt  | LCtl |LShift|      | Caps |-------.    ,-------|      | Left | Down | Rigth|  Del | Bspc |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |Shift | Undo |  Cut | Copy | Paste|      |-------|    |-------|      | LStr |      | LEnd |      | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `-----------------------------------'           '------''---------------------------'
 */
[_RAISE] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                       _______, _______ , _______, _______,  _______ , _______,
  _______,  KC_INS, KC_PSCR,  KC_APP, XXXXXXX, XXXXXXX,                       KC_PGUP, KC_PRVWD,   KC_UP,KC_NXTWD,C(KC_BSPC), KC_BSPC,
  _______, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, KC_CAPS,                       KC_PGDN,  KC_LEFT, KC_DOWN, KC_RGHT,    KC_DEL, KC_BSPC,
  _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), XXXXXXX, _______,     _______, XXXXXXX, KC_LSTRT, XXXXXXX, KC_LEND,   XXXXXXX, _______,
                _______, _______, _______, _______, _______,             _______, _______, _______, _______, _______
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | QK_BOOT|    |QWERTY| CLMK |      |      |                    |   ,  |   7  |   8  |   9  |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |MACWIN|      |      |      |-------.    ,-------|   .  |   4  |   5  |   6  |      |      |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|   0  |   1  |   2  |   3  |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `-----------------------------------'           '------''---------------------------'
 */
  [_ADJUST] = LAYOUT(
  XXXXXXX, XXXXXXX,  XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  QK_BOOT, XXXXXXX,NO_QWERTY,NO_COLEMAK, CG_TOGG, XXXXXXX,                       NO_DOT,    NO_7,    NO_8,    NO_9, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX,  CG_TOGG,   XXXXXXX, XXXXXXX, XXXXXXX,                      NO_COMM,    NO_4,    NO_5,    NO_6, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX,  XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX,    NO_0,    NO_1,    NO_2,    NO_3, XXXXXXX, XXXXXXX,
                   _______, _______, _______, _______, _______,            _______, _______, _______, _______, _______
  )
};
// clang-format on

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case NO_QWERTY:
            if (record->event.pressed) {
                layer_on(_QWERTY);
            }
            return false;
        case NO_COLEMAK:
            if (record->event.pressed) {
                layer_off(_QWERTY);
            }
            return false;
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
    oled_write_P(PSTR("\n\n"), false);
    switch (get_highest_layer(layer_state)) {
        case _COLEMAK:
            oled_write_ln_P(PSTR("Qlmk"), false);
            break;
        case _QWERTY:
            oled_write_ln_P(PSTR("Qwrt"), false);
            break;
        default:
            oled_write_P(PSTR("Mod\n"), false);
            break;
    }
    oled_write_P(PSTR("\n\n"), false);
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _COLEMAK:
        case _QWERTY:
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
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);

    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln(led_usb_state.caps_lock ? PSTR("CPSLK") : PSTR("     "), true);

    return false;
}
#endif
#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    bool ticks[] = {false, false};
    if (!encoder_update_user(index, clockwise)) {
        return false;
    }
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
    return true;
}
#endif
