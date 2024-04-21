/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

enum layers {
    _FIRST_EN,
    _SECOND_EN,
    _FIRST_RU,
    _SECOND_RU,
    _NUMS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_FIRST_EN] = LAYOUT_split_3x6_3(
  //,------------------------------------------------------------------------.     ,------------------------------------------------------------------------------.
     KC_NO,   KC_NO,        KC_U,         KC_F,         KC_NO,        KC_NO,        KC_NO,          KC_NO,        KC_G,         KC_Y,         KC_NO,        KC_NO,
  //|--------+-------------+-------------+-------------+-------------+-------|     |---------------+-------------+-------------+-------------+-------------+------|
     RGB_VAI, LSFT_T(KC_A), LGUI_T(KC_R), LALT_T(KC_S), LCTL_T(KC_T), RGB_HUI,      RGB_SAI,        RCTL_T(KC_N), RALT_T(KC_E), RGUI_T(KC_I), RSFT_T(KC_O), KC_NO,
  //|--------+-------------+-------------+-------------+-------------+-------|     |---------------+-------------+-------------+-------------+-------------+------|
     RGB_VAD, KC_P,         KC_M,         KC_C,         KC_D,         RGB_HUD,      RGB_SAD,        KC_H,         KC_L,         KC_W,         KC_B,         KC_NO,
  //|--------+-------------+-------------+-------------+-------------+-------|     |---------------+-------------+-------------+-------------+-------------+------|
                                          KC_NO,        KC_BSPC,      OSL(1),       LSFT_T(KC_SPC), LT(4,KC_ENT), KC_NO
                                       //`-----------------------------------'     `-------------------------------------------'
  ),

    [_SECOND_EN] = LAYOUT_split_3x6_3(
  //,---------------------------------------------------------------------.     ,-----------------------------------------------------------------------------------.
     KC_NO, KC_NO,        KC_TAB,       QK_GESC,      KC_NO,        KC_NO,       KC_NO,          KC_NO,        KC_EQL,          KC_MINS,        KC_NO,        KC_NO,
  //|------+-------------+-------------+-------------+-------------+------|     |---------------+-------------+----------------+---------------+-------------+------|
     KC_NO, LSFT_T(KC_Q), LGUI_T(KC_Z), LALT_T(KC_X), LCTL_T(KC_V), KC_NO,       KC_NO,          RCTL_T(KC_J), RALT_T(KC_COMM), RGUI_T(KC_DOT), RSFT_T(KC_K), KC_NO,
  //|------+-------------+-------------+-------------+-------------+------|     |---------------+-------------+----------------+---------------+-------------+------|
     KC_NO, KC_CAPS,      DF(2),        KC_SLSH,      KC_QUOT,      KC_NO,       KC_NO,          KC_SCLN,      KC_BSLS,         KC_LBRC,        KC_RBRC,      KC_NO,
  //|------+-------------+-------------+-------------+-------------+------|     |---------------+-------------+----------------+---------------+-------------+------|
                                        KC_NO,        KC_NO,        KC_NO,       LSFT_T(KC_SPC), LT(4,KC_ENT), KC_NO
                                     //`----------------------------------'     `----------------------------------------------'
  ),

    [_FIRST_RU] = LAYOUT_split_3x6_3(
  //,------------------------------------------------------------------------.     ,------------------------------------------------------------------------------.
     KC_NO,   KC_NO,        KC_S,         KC_R,         KC_NO,        KC_NO,        KC_NO,          KC_NO,        KC_V,         KC_M,         KC_NO,        KC_NO,
  //|--------+-------------+-------------+-------------+-------------+-------|     |---------------+-------------+-------------+-------------+-------------+------|
     RGB_VAI, LSFT_T(KC_F), LGUI_T(KC_B), LALT_T(KC_J), LCTL_T(KC_T), RGB_HUI,      RGB_SAI,        RCTL_T(KC_Y), RALT_T(KC_N), RGUI_T(KC_C), RSFT_T(KC_H), KC_NO,
  //|--------+-------------+-------------+-------------+-------------+-------|     |---------------+-------------+-------------+-------------+-------------+------|
     RGB_VAD, KC_G,         KC_U,         KC_E,         KC_D,         RGB_HUD,      RGB_SAD,        KC_K,         KC_Z,         KC_P,         KC_L,         KC_NO,
  //|--------+-------------+-------------+-------------+-------------+-------|     |---------------+-------------+-------------+-------------+-------------+------|
                                          KC_NO,        KC_BSPC,      OSL(3),       LSFT_T(KC_SPC), LT(4,KC_ENT), KC_NO
                                       //`-----------------------------------'     `-------------------------------------------'
  ),

    [_SECOND_RU] = LAYOUT_split_3x6_3(
  //,---------------------------------------------------------------------.     ,-----------------------------------------------------------------------------------.
     KC_NO, KC_NO,        KC_TAB,       QK_GESC,      KC_NO,        KC_NO,       KC_NO,          KC_NO,        KC_EQL,          KC_MINS,        KC_NO,        KC_NO,
  //|------+-------------+-------------+-------------+-------------+------|     |---------------+-------------+----------------+---------------+-------------+------|
     KC_NO, LSFT_T(KC_W), LGUI_T(KC_SCLN), LALT_T(KC_LBRC), LCTL_T(KC_X), KC_NO, KC_NO,          RCTL_T(KC_Q), LSFT(KC_SLSH),   RGUI_T(KC_SLSH), RSFT_T(KC_I), KC_NO,
  //|------+-------------+-------------+-------------+-------------+------|     |---------------+-------------+----------------+---------------+-------------+------|
     KC_NO, KC_CAPS,      DF(0),        KC_BSLS,      KC_QUOT,      KC_NO,       KC_NO,          KC_O,         KC_COMM,         KC_A,        KC_DOT,      KC_NO,
  //|------+-------------+-------------+-------------+-------------+------|     |---------------+-------------+----------------+---------------+-------------+------|
                                        KC_NO,        KC_NO,        KC_NO,       LSFT_T(KC_SPC), LT(4,KC_ENT), KC_NO
                                     //`----------------------------------'     `----------------------------------------------'
  ),

    [_NUMS] = LAYOUT_split_3x6_3(
  //,--------------------------------------------------------------------------------.     ,---------------------------------------------------------------------.
     KC_NO,   KC_NO,        KC_0,         KC_1,         KC_NO,        KC_NO,                KC_NO, KC_NO,        KC_VOLU,      KC_VOLD,      KC_NO,        KC_NO,
  //|--------+-------------+-------------+-------------+-------------+---------------|     |------+-------------+-------------+-------------+-------------+------|
     KC_NO,   LSFT_T(KC_2), LGUI_T(KC_3), LALT_T(KC_4), LCTL_T(KC_5), KC_NO,                KC_NO, KC_LEFT,      KC_UP,        KC_DOWN,      KC_RIGHT,     KC_NO,
  //|--------+-------------+-------------+-------------+-------------+---------------|     |------+-------------+-------------+-------------+-------------+------|
     KC_NO,   KC_6,         KC_7,         KC_8,         KC_9,         KC_NO,                KC_NO, KC_DEL,       KC_WH_D,      KC_WH_U,      KC_RBRC,      KC_NO,
  //|--------+-------------+-------------+-------------+-------------+---------------|     |------+-------------+-------------+-------------+-------------+------|
                                          KC_NO,        KC_BSPC,      LSFT_T(KC_SPC),       KC_NO, KC_NO,        KC_NO
                                       //`-------------------------------------------'     `----------------------------------'
  )

};

#ifdef OLED_ENABLE

// Rotate OLED
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
}

// Animation parameters
#define FRAME_DURATION 333 // How long each frame lasts in milliseconds

// Animation variables
uint32_t timer = 0;
uint8_t current_frame = 0;

// Render animation
static void render_animation(void) {
    // 'Frame 1', 32x128px
    static const char epd_bitmap_Frame_1 [] PROGMEM = {
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x0f, 0x07, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
    	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x07, 0x0f, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0x40, 0xfc, 0xfc, 0xf0, 0xe0,
    	0xf0, 0xf0, 0xe0, 0xa0, 0xe0, 0xe0, 0x40, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xfe, 0xf0, 0x00, 0x00, 0x00, 0x0f, 0x3e, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x1f, 0x00, 0x00, 0x80, 0xfe, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xf0, 0xf0, 0xf0, 0xe0, 0x81, 0x83, 0x03, 0x07,
    	0x07, 0x07, 0x83, 0xc3, 0xc1, 0xf1, 0x70, 0x00, 0x00, 0xc0, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0x0f, 0xf3, 0x6f, 0xbf, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xdd, 0xfd, 0xfd, 0xef, 0x7f, 0x7f,
    	0xff, 0x7f, 0x7f, 0xff, 0xdf, 0x9f, 0xfb, 0x70, 0x9e, 0xff, 0xff, 0xff, 0xf3, 0xf7, 0xef, 0x3f,
    	0xff, 0xfc, 0xf8, 0xf1, 0xe1, 0xc3, 0xc3, 0x83, 0x87, 0x85, 0x07, 0x05, 0x0b, 0x0f, 0x0f, 0x0e,
    	0x0b, 0x0e, 0x0f, 0x05, 0x03, 0x83, 0x84, 0x86, 0x87, 0xc3, 0xc7, 0xe2, 0xe1, 0xf1, 0xf8, 0xfe,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
    };
    // 'Frame 2', 32x128px
    static const char epd_bitmap_Frame_2 [] PROGMEM = {
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x1f, 0x0f, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
    	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x07, 0x0f, 0x3f, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0x1f, 0x07, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xf0, 0xfc, 0xfc, 0xe0,
    	0xe0, 0xf0, 0xe0, 0xa0, 0xe0, 0xe0, 0x60, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf7, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x0e, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x07, 0x00, 0x00, 0x80, 0xfe, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xf0, 0xf0, 0xf0, 0xa0, 0xa1, 0x83, 0x03, 0x07,
    	0x07, 0x87, 0x87, 0xc3, 0xc3, 0xf1, 0xf0, 0x30, 0x00, 0xc0, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0x8f, 0xff, 0x7d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xfd, 0xfc, 0xfd, 0xff, 0xff, 0x7f,
    	0x9f, 0xff, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xf0, 0xde, 0xdf, 0xff, 0xff, 0xeb, 0xc7, 0xaf, 0xff,
    	0xff, 0xfc, 0xf8, 0xf0, 0xe1, 0xc1, 0xc3, 0x83, 0x87, 0x84, 0x03, 0x05, 0x03, 0x0e, 0x0f, 0x0f,
    	0x0f, 0x0d, 0x0f, 0x0f, 0x0b, 0x8b, 0x86, 0x85, 0x83, 0xc3, 0xc0, 0xe0, 0xe3, 0xf1, 0xf0, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
    };
    // 'Frame 3', 32x128px
    static const char epd_bitmap_Frame_3 [] PROGMEM = {
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x0f, 0x07, 0x03, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
    	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x07, 0x0f, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x40, 0xdc, 0xfc, 0xf0, 0xe0,
    	0xe0, 0xf0, 0xe0, 0xa0, 0x60, 0xe0, 0x60, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xf0, 0xc0, 0x00, 0x00, 0x0e, 0x1f, 0x3e, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xf0, 0xf0, 0xf0, 0xe0, 0xa0, 0x81, 0x03, 0x07,
    	0x07, 0x07, 0x87, 0xc3, 0xc3, 0xf1, 0xf1, 0x70, 0x00, 0x80, 0xf8, 0xfe, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0x0f, 0x9f, 0x7d, 0x9f, 0x7f, 0xbf, 0xff, 0xff, 0xff, 0xfd, 0xfc, 0xfd, 0xff, 0xef, 0x6f,
    	0xdf, 0xef, 0x6f, 0xef, 0xff, 0xff, 0x7b, 0xf0, 0xfe, 0xff, 0xf7, 0x7f, 0xff, 0xd7, 0x4f, 0xff,
    	0xff, 0xfc, 0xf0, 0xf1, 0xe1, 0xc0, 0xc3, 0x87, 0x87, 0x85, 0x03, 0x04, 0x07, 0x0d, 0x0f, 0x0f,
    	0x03, 0x0e, 0x0f, 0x05, 0x03, 0x83, 0x86, 0x87, 0x87, 0xc3, 0xc1, 0xe3, 0xe1, 0xf0, 0xf8, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
    };
    // 'Frame 4', 32x128px
    static const char epd_bitmap_Frame_4 [] PROGMEM = {
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x0f, 0x07, 0x07, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
    	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x07, 0x0f, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0xfc, 0xfc, 0xf0, 0xe0,
    	0xf0, 0xe0, 0xe0, 0xa0, 0xe0, 0xe0, 0x40, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x0e, 0x3e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x1f, 0x00, 0x00, 0xc0, 0xfc, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xf0, 0xf0, 0xf0, 0xe0, 0x81, 0x83, 0x83, 0x07,
    	0x07, 0x07, 0x87, 0xc3, 0xc3, 0xf1, 0xf0, 0xe0, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0x1f, 0x0f, 0xfb, 0xdf, 0xff, 0xbf, 0xff, 0xff, 0x7f, 0xfd, 0xfd, 0xdd, 0x7d, 0x7f, 0xff,
    	0x9f, 0xef, 0xff, 0x7f, 0xfd, 0xff, 0x7f, 0xff, 0xb0, 0xbe, 0xff, 0xff, 0xf7, 0xdf, 0xe7, 0x1f,
    	0xff, 0xfc, 0xf0, 0xf0, 0xe1, 0xc3, 0xc3, 0x87, 0x87, 0x86, 0x83, 0x07, 0x0b, 0x0d, 0x0c, 0x0e,
    	0x03, 0x0e, 0x0f, 0x0f, 0x03, 0x83, 0x85, 0x85, 0x83, 0xc3, 0xc7, 0xe4, 0xe0, 0xf1, 0xf8, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
    };
    // 'Frame 6', 32x128px
    static const char epd_bitmap_Frame_6 [] PROGMEM = {
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x1f, 0x07, 0x07, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
    	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x07, 0x0f, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xd0, 0xfc, 0xfc, 0xf0, 0xe0,
    	0xf0, 0xf0, 0xe0, 0xe0, 0xe0, 0xe0, 0x40, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x0e, 0x7e, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x0f, 0x00, 0x00, 0xc0, 0xfc, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf8, 0xf0, 0xf0, 0xf0, 0xe1, 0xa1, 0x83, 0x03, 0x07,
    	0x07, 0x07, 0x83, 0xc3, 0xc1, 0xf1, 0xf0, 0x70, 0x00, 0xc0, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xcf, 0xd3, 0xf5, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x6c, 0xbd, 0xff, 0xff, 0x7f,
    	0xdf, 0x7f, 0x7f, 0x7f, 0x9f, 0x9f, 0xef, 0xf0, 0x9e, 0xbf, 0x7f, 0xef, 0xe7, 0xd7, 0xcf, 0xff,
    	0xff, 0xfc, 0xf8, 0xf0, 0xe1, 0xc1, 0xc3, 0x87, 0x87, 0x87, 0x03, 0x0f, 0x03, 0x0f, 0x0f, 0x0d,
    	0x03, 0x0f, 0x0d, 0x0c, 0x03, 0x83, 0x87, 0x86, 0x87, 0xc3, 0xc1, 0xe0, 0xe2, 0xf1, 0xf8, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
    };
    // 'Frame 5', 32x128px
    static const char epd_bitmap_Frame_5 [] PROGMEM = {
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x0f, 0x07, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
    	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x07, 0x0f, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xd0, 0xfc, 0xfc, 0xf0, 0xe0,
    	0xf0, 0xf0, 0xe0, 0xe0, 0xe0, 0xe0, 0x40, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xfe, 0xf0, 0x00, 0x00, 0x00, 0x0e, 0x3e, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x1f, 0x00, 0x00, 0x80, 0xfc, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xf0, 0xf0, 0xf0, 0xe0, 0x81, 0x83, 0x03, 0x07,
    	0x07, 0x87, 0x87, 0xc3, 0xc3, 0xf1, 0xf0, 0x08, 0x00, 0xc0, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0x5f, 0xb3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xbd, 0xed, 0xbd, 0xef, 0x7f, 0xff,
    	0x9f, 0xff, 0xef, 0x6d, 0xff, 0xfb, 0x7f, 0x70, 0xfe, 0xff, 0xff, 0xff, 0xfb, 0xe7, 0xef, 0x7f,
    	0xff, 0xfc, 0xf8, 0xe1, 0xe1, 0xe3, 0xc3, 0xc3, 0x87, 0x85, 0x83, 0x0f, 0x07, 0x0f, 0x0f, 0x0e,
    	0x0f, 0x0e, 0x0f, 0x0f, 0x0b, 0x03, 0x87, 0x87, 0x87, 0xc7, 0xc5, 0xe1, 0xe1, 0xf1, 0xf0, 0xfc,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
    };

    // Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 3168)
    const char* epd_bitmap_allArray[6] = {
    	epd_bitmap_Frame_1,
    	epd_bitmap_Frame_2,
    	epd_bitmap_Frame_3,
    	epd_bitmap_Frame_4,
    	epd_bitmap_Frame_5,
    	epd_bitmap_Frame_6
    };

    // Frame sizes array
    uint16_t frame_sizes[6] = {
        sizeof(epd_bitmap_Frame_1),
        sizeof(epd_bitmap_Frame_2),
        sizeof(epd_bitmap_Frame_3),
        sizeof(epd_bitmap_Frame_4),
        sizeof(epd_bitmap_Frame_5),
        sizeof(epd_bitmap_Frame_6)
    };

    // Run animation
    if (timer_elapsed(timer) > FRAME_DURATION) {
        // Set timer to updated time
        timer = timer_read();

        // Increment frame
        current_frame = (current_frame + 1) % (sizeof(epd_bitmap_allArray) / sizeof(epd_bitmap_allArray[0]));

        // Draw frame to OLED
        oled_write_raw_P(epd_bitmap_allArray[current_frame], frame_sizes[current_frame]);
    }
}

// Draw to OLED
bool oled_task_user() {
    // Run Animation
    render_animation();

    return false;
}
#endif
