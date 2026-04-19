// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H
// #include "quantum_keycodes.h"
// #include "print.h"
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
     * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
     * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
     *               ┌───┐                   ┌───┐
     *               │GUI├───┐           ┌───┤Alt│
     *               └───┤   ├───┐   ┌───┤   ├───┘
     *                   └───┤Bsp│   │Ent├───┘
     *                       └───┘   └───┘
     */
    [0] = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_LALT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, SC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, SC_RSPC, KC_ESC, LCTL_T(KC_SPC), KC_BSPC, KC_ENT, KC_SPC, OSL(1)),

    [1] = LAYOUT_split_3x6_3(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSLS, KC_NO, KC_NO, KC_NO, KC_NO, S(KC_LBRC), KC_LBRC, KC_RBRC, S(KC_RBRC), KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_LSFT, KC_NO, KC_NO, KC_NO, TO(2), KC_NO, KC_NO, S(KC_MINS), KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, TO(0), LCTL_T(KC_SPC), KC_BSPC, KC_ENT, KC_SPC, TO(1)),

    [2] = LAYOUT_split_3x6_3(XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, XXX, XXX, KC_LSFT, XXX, XXX, XXX, XXX, XXX, XXX, S(KC_MINS), KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, TO(0), LCTL_T(KC_SPC), XXX, XXX, KC_SPC, TO(1)),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif
    return true;
}
