// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H
// #include "quantum_keycodes.h"
// #include "print.h"
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

typedef enum {
    CMB_CURL_OPEN,
    CMB_SQ_OPEN,
    CMB_SQ_CLOSE,
    CMB_CURL_CLOSE,
    CMB_DASH,
    CMB_EQL,
    CMB_UNDSC,
    CMB_OSL1,
    CMB_TO2,
    CMB_1,
    CMB_2,
    CMB_3,
    CMB_4,
    CMB_5,
    CMB_6,
    CMB_7,
    CMB_8,
    CMB_9,
    CMB_0,
    CMB_LEN,
} cantor_combo_t;

typedef enum {
    CMB_SH_1 = CMB_LEN,
    CMB_SH_2,
    CMB_SH_3,
    CMB_SH_4,
    CMB_SH_5,
    CMB_SH_6,
    CMB_SH_7,
    CMB_SH_8,
    CMB_SH_9,
    CMB_SH_0,
    CMB_SH_LEN,
} cantor_comboshift_t;

// clang-format off
const uint16_t PROGMEM combos3[CMB_LEN][3] = {
    [CMB_CURL_OPEN]  = {KC_SPC, KC_F, COMBO_END},
    [CMB_SQ_OPEN]    = {KC_SPC, KC_G, COMBO_END},
    [CMB_SQ_CLOSE]   = {KC_SPC, KC_H, COMBO_END},
    [CMB_CURL_CLOSE] = {KC_SPC, KC_J, COMBO_END},
    [CMB_DASH]       = {KC_SPC, KC_K, COMBO_END},
    [CMB_EQL]        = {KC_SPC, KC_L, COMBO_END},
    [CMB_UNDSC]      = {KC_SPC, KC_M, COMBO_END},
    [CMB_OSL1]        = {KC_SPC, KC_A, COMBO_END},
    [CMB_TO2]        = {KC_SPC, KC_S, COMBO_END},
    [CMB_1]        = {KC_SPC, KC_Q, COMBO_END},
    [CMB_2]        = {KC_SPC, KC_W, COMBO_END},
    [CMB_3]        = {KC_SPC, KC_E, COMBO_END},
    [CMB_4]        = {KC_SPC, KC_R, COMBO_END},
    [CMB_5]        = {KC_SPC, KC_T, COMBO_END},
    [CMB_6]        = {KC_SPC, KC_Y, COMBO_END},
    [CMB_7]        = {KC_SPC, KC_U, COMBO_END},
    [CMB_8]        = {KC_SPC, KC_I, COMBO_END},
    [CMB_9]        = {KC_SPC, KC_O, COMBO_END},
    [CMB_0]        = {KC_SPC, KC_P, COMBO_END},
};

const uint16_t PROGMEM combos4[CMB_SH_LEN][4] = {
    [CMB_SH_1]      = {KC_SPC, SC_LSPO, KC_Q, COMBO_END},
    [CMB_SH_2]      = {KC_SPC, SC_LSPO, KC_W, COMBO_END},
    [CMB_SH_3]      = {KC_SPC, SC_LSPO, KC_E, COMBO_END},
    [CMB_SH_4]      = {KC_SPC, SC_LSPO, KC_R, COMBO_END},
    [CMB_SH_5]      = {KC_SPC, SC_LSPO, KC_T, COMBO_END},
    [CMB_SH_6]      = {KC_SPC, SC_LSPO, KC_Y, COMBO_END},
    [CMB_SH_7]      = {KC_SPC, SC_LSPO, KC_U, COMBO_END},
    [CMB_SH_8]      = {KC_SPC, SC_LSPO, KC_I, COMBO_END},
    [CMB_SH_9]      = {KC_SPC, SC_LSPO, KC_O, COMBO_END},
    [CMB_SH_0]      = {KC_SPC, SC_LSPO, KC_P, COMBO_END},

};

combo_t key_combos[] = {
    [CMB_CURL_OPEN] = COMBO(combos3[CMB_CURL_OPEN], S(KC_LBRC)),
    [CMB_SQ_OPEN] = COMBO(combos3[CMB_SQ_OPEN], KC_LBRC),
    [CMB_SQ_CLOSE] = COMBO(combos3[CMB_SQ_CLOSE], KC_RBRC),
    [CMB_CURL_CLOSE] = COMBO(combos3[CMB_CURL_CLOSE], S(KC_RBRC)),
    [CMB_DASH] = COMBO(combos3[CMB_DASH], KC_MINS),
    [CMB_EQL] = COMBO(combos3[CMB_EQL], KC_EQL),
    [CMB_UNDSC] = COMBO(combos3[CMB_UNDSC], S(KC_MINS)),
    [CMB_OSL1] = COMBO(combos3[CMB_OSL1], OSL(1)),
    [CMB_TO2] = COMBO(combos3[CMB_TO2], TO(2)),
    [CMB_1] = COMBO(combos3[CMB_1], KC_1),
    [CMB_2] = COMBO(combos3[CMB_2], KC_2),
    [CMB_3] = COMBO(combos3[CMB_3], KC_3),
    [CMB_4] = COMBO(combos3[CMB_4], KC_4),
    [CMB_5] = COMBO(combos3[CMB_5], KC_5),
    [CMB_6] = COMBO(combos3[CMB_6], KC_6),
    [CMB_7] = COMBO(combos3[CMB_7], KC_7),
    [CMB_8] = COMBO(combos3[CMB_8], KC_8),
    [CMB_9] = COMBO(combos3[CMB_9], KC_9),
    [CMB_0] = COMBO(combos3[CMB_0], KC_0),
    [CMB_SH_1] = COMBO(combos4[CMB_SH_1], S(KC_1)),
    [CMB_SH_2] = COMBO(combos4[CMB_SH_2], S(KC_2)),
    [CMB_SH_3] = COMBO(combos4[CMB_SH_3], S(KC_3)),
    [CMB_SH_4] = COMBO(combos4[CMB_SH_4], S(KC_4)),
    [CMB_SH_5] = COMBO(combos4[CMB_SH_5], S(KC_5)),
    [CMB_SH_6] = COMBO(combos4[CMB_SH_6], S(KC_6)),
    [CMB_SH_7] = COMBO(combos4[CMB_SH_7], S(KC_7)),
    [CMB_SH_8] = COMBO(combos4[CMB_SH_8], S(KC_8)),
    [CMB_SH_9] = COMBO(combos4[CMB_SH_9], S(KC_9)),
    [CMB_SH_0] = COMBO(combos4[CMB_SH_0], S(KC_0)),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
     * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Del│
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │Alt│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
     * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
     *               ┌───┐                   ┌───┐
     *               │ESC├───┐           ┌───┤ \ │
     *               └───┤CTL├───┐   ┌───┤SPC├───┘
     *                   └───┤Bsp│   │Ent├───┘
     *                       └───┘   └───┘
     */
    [0] = LAYOUT_split_3x6_3(
    KC_TAB,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,            KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,    KC_DEL,
    KC_LALT,  KC_A,   KC_S,   KC_D,   KC_F,   KC_G,            KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN, KC_QUOT,
    SC_LSPO,  KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,            KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH, SC_RSPC,
                      KC_NO,   KC_ESC,  LCTL_T(KC_BSPC),      KC_SPC,    KC_ENT,   KC_BSLS
    ),

    /*
     * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │       │ 6 │ 7 │ 8 │ 9 │ 0 │Del│
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │   │TO1│TO2│   │ { │ [ │       │ ] │ } │ - │ = │ [ │ ] │
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │Sft│   │   │   │   │   │       │   │ _ │ , │ . │ / │Sft│
     * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
     *               ┌───┐                   ┌───┐
     *               │TO0├───┐           ┌───┤ \ │
     *               └───┤CTL├───┐   ┌───┤SPC├───┘
     *                   └───┤Bsp│   │Ent├───┘
     *                       └───┘   └───┘
     */
    [1] = LAYOUT_split_3x6_3(
    KC_GRV,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5,            KC_6,   KC_7,   KC_8,   KC_9,   KC_0,    KC_DEL,
    KC_NO,    TO(1),  TO(2),  KC_NO,  S(KC_LBRC),KC_LBRC,  KC_RBRC, S(KC_RBRC),KC_MINS,KC_EQL, KC_LBRC, KC_RBRC,
    KC_LSFT,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,           KC_NO,S(KC_MINS),KC_COMM,KC_DOT,KC_SLSH, KC_RSFT,
                                    KC_NO, TO(0), KC_BSPC, KC_SPC, KC_ENT, KC_BSLS
    ),

    [2] = LAYOUT_split_3x6_3(
    XXX,      XXX,    XXX,    XXX,    XXX,    XXX,             XXX,    XXX,    XXX,    XXX,    XXX,     XXX,
    XXX,      XXX,    XXX,    XXX,    XXX,    XXX,             KC_LEFT,KC_DOWN,KC_UP,KC_RIGHT, XXX,     XXX,
    KC_LSFT,  XXX,    XXX,    XXX,    XXX,    XXX,             XXX,  S(KC_MINS),KC_COMM,KC_DOT,KC_SLSH, KC_RSFT,
                              XXX,   TO(0),   XXX,             XXX, KC_SPC, TO(1)
    ),

};

#ifdef CONSOLE_ENABLE
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n",
            keycode, record->event.key.col, record->event.key.row, record->event.pressed,
            record->event.time, record->tap.interrupted, record->tap.count);
    return true;
}
#endif
