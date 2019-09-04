/* Copyright 2017 od_1969
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
#include QMK_KEYBOARD_H

enum TP_layers {
    _QWERTY = 0,
    _FN,
};

enum TP_keycodes {
  QWERTY = SAFE_RANGE,
  FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_QWERTY] = KEYMAP(
		KC_A,	KC_S,	KC_D,	KC_F,	KC_NO, \
		KC_Z,	KC_X,	KC_C,	KC_V,	FN  \
	),
	
	[_FN] = KEYMAP(
		RESET,	KC_NO,	KC_NO,	KC_NO,	KC_NO, \
		KC_NO,	KC_NO,	KC_NO,	KC_NO,	KC_NO  \
	),
};

const uint16_t PROGMEM fn_actions[] = {

};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case FN:
      if (record->event.pressed) {
        layer_on(_FN);
      } else {
        layer_off(_FN);
      }
      return false;
      break;
  }
  return true;
}

void led_set_user(uint8_t usb_led) {

}
