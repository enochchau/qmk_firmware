/* Copyright 2021 Enoch Chau
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#define _LYALPHA 0
#define _LYCONTROL 1
#define _LYMOD 2
#define _LYOPEN 3
#define _LYCLOSE 4

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_LYALPHA] = LAYOUT( \
        KC_ESC,  KC_1,   KC_2,    KC_3,    KC_4,   KC_5,             KC_6,    KC_7,    KC_8,    KC_9,   KC_0,    KC_BSPC, \
        KC_TAB,  KC_Q,   KC_W,    KC_E,    KC_R,   KC_T,             KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,    KC_DEL,  \
    MO(_LYCONTROL),KC_A, KC_S,    KC_D,    KC_F,   KC_G,             KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT, \
        KC_LSFT, KC_Z,   KC_X,    KC_C,    KC_V,   KC_B,             KC_N,    KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, \
                 KC_LALT,KC_LGUI, KC_LCTRL,MO(_LYMOD),KC_ENT,        KC_SPC,  MO(_LYMOD),KC_RCTRL,KC_RGUI,KC_RALT \
    ),
    [_LYCONTROL] = LAYOUT( \
        RESET, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,          KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_MINS, KC_EQL, \
        KC_F10,  KC_F11,  KC_F12,  KC_HOME, KC_PGUP, _______,        _______, _______, _______, KC_LBRC, KC_RBRC, KC_BSLS,\
        _______, _______, _______, KC_END,  KC_PGDN, _______,        KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,\
        _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, _______,        _______, _______, KC_VOLD, KC_VOLU, KC_MUTE, _______,\
                 _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______  \
    ),
    [_LYMOD] = LAYOUT( \
        _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______,\
        _______, KC_QUES, _______, KC_PEQL, KC_CIRC, KC_AT,          KC_TILD, KC_UNDS, KC_PIPE, MO(_LYOPEN),KC_PLUS,_______,\
        _______, KC_GRV,  KC_ASTR, KC_MINS, KC_SLSH, _______,        KC_HASH, _______, KC_BSLS, KC_DLR,  _______, _______,\
        _______, _______, _______, MO(_LYCLOSE),   _______, KC_EXLM,        KC_PERC, KC_AMPR, _______, _______, _______, _______,\
                 _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______  \
    ),
    [_LYOPEN] = LAYOUT( \
        _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______,\
        _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, KC_LPRN, _______,\
        _______, KC_LABK, KC_LBRC, _______, _______, _______,        _______, _______, _______, _______, _______, _______,\
        _______, _______, _______, KC_LCBR, _______, _______,        _______, _______, _______, _______, _______, _______,\
                 _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______  \
    ),
    [_LYCLOSE] = LAYOUT( \
        _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______,\
        _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, KC_RPRN, _______,\
        _______, KC_RABK, KC_RBRC, _______, _______, _______,        _______, _______, _______, _______, _______, _______,\
        _______, _______, _______, KC_RCBR, _______, _______,        _______, _______, _______, _______, _______, _______,\
                 _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______  \
    )
};

/*
! bang b KC_EXLM
@ at t KC_AT
# hash h KC_HASH
$ dollar l KC_DLR
% percent n KC_PERC
^ caret r KC_CIRC
& ampersand m KC_AMPR
* star s KC_ASTR
- dash d KC_MINS
_ underscore u KC_UNDS
= equal e KC_PEQL
+ plus p KC_PLUS
| pipe i KC_PIPE
\ backslash k KC_BSLS
/ forwardslash f KC_SLSH
? questions mark q KC_QUES
` backtick a KC_GRV
~ squily y KC_TILD
, comma o KC_COMM -> leave
. period e KC_DOT -> leave
; -> leave
: -> leave
" -> leave

( open paren op KC_LPRN
) close paren cp KC_RPRN
// () pair paren pp
[ open square os KC_LBRC
] close square cs KC_RBRC
// [] pair square ps
{ open curly oc KC_LCBR
} close curly cc KC_RCBR
// {} pair curly pc
< open arrow oa KC_LABK
> close arrow ca KC_RABK
// <> pair arrow pa */

/* [3] = LAYOUT( \
    _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______,\
    _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______,\
    _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______,\
    _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______,\
             _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______  \
), */
