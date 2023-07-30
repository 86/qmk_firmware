// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define L1_SPC LT(1, KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐           ┌───┬───┬───┬───┬───┬───┐
     * │Tab│ Q │ W │ E │ R │ T │           │ Y │ U │ I │ O │ P │ - │
     * ├───┼───┼───┼───┼───┼───┤           ├───┼───┼───┼───┼───┼───┤
     * │Ctl│ A │ S │ D │ F │ G │           │ H │ J │ K │ L │ ; │ ' │
     * ├───┼───┼───┼───┼───┼───┼───┐   ┌───┼───┼───┼───┼───┼───┼───┤
     * │Sft│ Z │ X │ C │ V │ B │   │   │Del│ N │ M │ , │ . │ / │Sft│
     * └───┴───┴───┼───┼───┼───┼───┤   ├───┼───┼───┼───┼───┴───┴───┘
     *             │Alt│GUI│S/L│Esc│   │Ent│S/L│GUI│Alt│
     *             └───┴───┴───┴───┘   └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_TAB,  KC_Q, KC_W,  KC_E,     KC_R,    KC_T,                       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
        KC_LCTL, KC_A, KC_S,  KC_D,     KC_F,    KC_G,                       KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z, KC_X,  KC_C,     KC_V,    KC_B,   _______,   KC_BSPC, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                              KC_LALT,  KC_LGUI, L1_SPC,  KC_ESC,   KC_ENT,  L1_SPC,  KC_RGUI, KC_RALT
    ),
        /*
     * ┌───┬───┬───┬───┬───┬───┐           ┌───┬───┬───┬───┬───┬───┐
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │           │ 6 │ 7 │ 8 │ 9 │ 0 │ = │
     * ├───┼───┼───┼───┼───┼───┤           ├───┼───┼───┼───┼───┼───┤
     * │Ctl│F01│F02│F03│F04│F05│           │Lft│Dwn│Up │Rgt│ [ │ ] │
     * ├───┼───┼───┼───┼───┼───┼───┐   ┌───┼───┼───┼───┼───┼───┼───┤
     * │Sft│F06│F07│F08│F09│F10│F11│   │F12│   │   │   │   │ \ │Sft│
     * └───┴───┴───┼───┼───┼───┼───┤   ├───┼───┼───┼───┼───┴───┴───┘
     *             │Alt│GUI│   │Esc│   │Ent│   │GUI│Alt│
     *             └───┴───┴───┴───┘   └───┴───┴───┴───┘
     */
    [1] = LAYOUT(
        KC_GRV,  KC_1,  KC_2,  KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQL,
        KC_LCTL, KC_F1, KC_F2, KC_F3,   KC_F4,   KC_F5,                      KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_LBRC, KC_RBRC,
        KC_LSFT, KC_F6, KC_F7, KC_F8,   KC_F9,   KC_F10,  KC_F11,   KC_F12,  _______, _______, _______, _______, KC_BSLS, KC_RSFT,
                               KC_LALT, KC_LGUI, _______, KC_ESC,   KC_ENT,  _______, KC_RGUI, KC_RALT
    )
};
