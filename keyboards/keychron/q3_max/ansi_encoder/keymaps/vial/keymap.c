/* Copyright 2024 @ Keychron (https://www.keychron.com)
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
#include "keychron_common.h"

enum layers {
    ONE,
    TWO,
    THREE,
    FOUR,
};

// clang-format off
enum custom_keycodes {
    // VIA only support QK_KB_NN with custom labels. So use QK_KB_NN instead of QK_USER_NN
    // keychron uses QK_KB_0 to NEW_SAFE_RANGE for its predefined keys.
    // so we start at NEW_SAFE_RANGE. See keychron_common.h
    MY_SYSRQ = NEW_SAFE_RANGE,
    MY_PW,
    MC_PAREN,
    MC_CURLY,
    MC_BRACK,
    MC_QUOTE,
    MC_LALTL,
    MC_LALTR
};
// clang-format on

#define XXXXXXX KC_NO

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [ONE] = LAYOUT_tkl_ansi(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,        KC_MUTE,    KC_PSCR,  KC_CTANA, RGB_MOD,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,        KC_BSPC,    KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,       KC_BSLS,    KC_DEL,   KC_END,   KC_PGDN,
        MO(1),    KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,                 KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,                 KC_RSFT,              KC_UP,
        KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_RGUI,  LT(1,KC_APP),  KC_RCTL,    KC_LEFT,  KC_DOWN,  KC_RGHT
    ),


    [TWO] = LAYOUT_tkl_ansi(
        _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,    _______,    KC_P7,    KC_P8,    KC_P9,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_P7,    KC_P8,    KC_P9,    KC_PMNS,  KC_PPLS,    _______,    KC_P4,    KC_P5,    KC_P6,
        XXXXXXX,  KC_BTN4,  KC_BTN5,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_P4,    KC_P5,    KC_P6,    KC_PSLS,  KC_PAST,    XXXXXXX,    KC_P1,    KC_P2,    KC_P3,
        KC_CAPS,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,  KC_P1,    KC_P2,    KC_P3,    XXXXXXX,              _______,
        _______,            _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  BAT_LVL,  XXXXXXX,  XXXXXXX,  KC_P0,    KC_PDOT,  XXXXXXX,              MO(2),                MC_QUOTE,
        _______,  _______,  _______,                                _______,                                _______,  _______,  XXXXXXX,    KC_RCTL,    MC_PAREN, MC_CURLY, MC_BRACK
    ),


    [THREE] = LAYOUT_tkl_ansi(
        MY_SYSRQ,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,   RGB_TOG,    _______,  _______,  QK_BOOT,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  P2P4G,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,              QK_LOCK,
        _______,            _______,  _______,  _______,  _______,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,  MY_PW,                _______,              _______,
        _______,  GU_TOGG,  _______,                                _______,                                _______,  GU_TOGG,  XXXXXXX,    _______,    _______,  _______,  _______
    ),


    [FOUR] = LAYOUT_tkl_ansi(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,              _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,    _______,  _______,  _______
    ),

};

// clang-format on
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [ONE]   = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [TWO]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [THREE] = {ENCODER_CCW_CW(RGB_HUD, RGB_HUI)},
    [FOUR]  = {ENCODER_CCW_CW(_______, _______)},
};
#endif // ENCODER_MAP_ENABLE

// HAS_FLAGS(bits, flags) 	n/a 	Evaluates to true if bits has all flags set
// HAS_ANY_FLAGS(bits, flags) 	n/a 	Evaluates to true if bits has any flags set
// LED_FLAG_NONE 	    0x00 	If this LED has no flags
// LED_FLAG_ALL 	    0xFF 	If this LED has all flags
// LED_FLAG_MODIFIER 	0x01 	If the LED is on a modifier key
// LED_FLAG_UNDERGLOW 	0x02 	If the LED is for underglow
// LED_FLAG_KEYLIGHT 	0x04 	If the LED is for key backlight
// LED_FLAG_INDICATOR 	0x08 	If the LED is for keyboard state indication
// LED_FLAG_ALPHA_KEY   0x10    custom Alpha keys (for Caps Lock)
// LED_FLAG_LAYER_IND   0x20    custom Layer indicator

#define LED_FLAG_ALPHA_KEY 0x10 // Alpha keys (for Caps Lock)
#define LED_FLAG_LAYER_IND 0x20 // Layer indicator

// clang-format off
uint8_t new_led_flags[] = {

        // // RGB LED Index to Flag
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 4, 4, 4,
        1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 4, 4, 4,
        1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    1,
        1,    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    1,    4,
        1, 4, 1,          4,          1, 4, 1, 1, 4, 4, 4,
};
// clang-format on

void keyboard_post_init_user(void) {
    // set led flags
    memcpy(g_led_config.flags, new_led_flags, sizeof(new_led_flags));
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keychron_common(keycode, record)) {
        return false;
    }

    switch (keycode) {
        case MY_SYSRQ:
            if (record->event.pressed) {
                // Hold SysReq
                SEND_STRING(SS_DOWN(X_LALT) SS_DOWN(X_PSCR));

                // Type reisub
                SEND_STRING("r" SS_DELAY(500) "e" SS_DELAY(2000) "i" SS_DELAY(500) "s" SS_DELAY(5000) "u" SS_DELAY(2000) "b");

                // Release SysReq
                SEND_STRING(SS_UP(X_PSCR) SS_UP(X_LALT));
            }
            return false;
            break;
        case MY_PW:
            if (record->event.pressed) {
                SEND_STRING("S" SS_DELAY(50) "E" SS_DELAY(50) "C" SS_DELAY(50) "R" SS_DELAY(50) "E" SS_DELAY(50) "T" SS_DELAY(50) "P" SS_DELAY(50) "W");
            }
            return false;
            break;
        case MC_PAREN:
            if (record->event.pressed) {
                SEND_STRING("()" SS_TAP(X_LEFT));
            }
            return false;
            break;
        case MC_BRACK:
            if (record->event.pressed) {
                SEND_STRING("[]" SS_TAP(X_LEFT));
            }
            return false;
            break;
        case MC_CURLY:
            if (record->event.pressed) {
                SEND_STRING("{}" SS_TAP(X_LEFT));
            }
            return false;
            break;
        case MC_QUOTE:
            if (record->event.pressed) {
                SEND_STRING("\"\"" SS_TAP(X_LEFT));
            }
            return false;
            break;
        case MC_LALTL:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_DELAY(1) SS_TAP(X_LEFT)));
            }
            return false;
            break;
        case MC_LALTR:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_DELAY(1) SS_TAP(X_RIGHT)));
            }
            return false;
            break;
    }
    return true;
}

void setColor(uint8_t index, HSV hsvcolor) {
    RGB rgbcolor = {RGB_OFF};
    // hsvcolor.v   = rgb_matrix_get_val();
    // Set color
    rgbcolor = hsv_to_rgb(hsvcolor);
    rgb_matrix_set_color(index, rgbcolor.r, rgbcolor.g, rgbcolor.b);
}

bool set_layer_modifiers(uint8_t index) {
    // if (get_highest_layer(layer_state) > 0) {
    HSV color = rgb_matrix_config.hsv;

    if (g_led_config.flags[index] & LED_FLAG_MODIFIER) {
        switch (get_highest_layer(layer_state | default_layer_state)) {
            case 1:
                color.h += 128;
                break;
            case 2:
                color.h += 192;
                break;
            case 3:
                color.h += 255;
                break;
            default:
                // color.h += 192;
                return false;
                break;
        }
        color.v = rgb_matrix_get_val();
        setColor(index, color);

        return true;
    }
    // }
    return false;
}

// Function to handle RGB matrix indicators for layer 0
void handleLayerZeroIndicators(uint8_t index, int keycode) {
    HSV hsvcolor = rgb_matrix_config.hsv;

    switch (keycode) {
        case GU_TOGG:
        case KC_LGUI:
        case KC_RGUI:
            if (keymap_config.no_gui) {
                hsvcolor = (HSV){HSV_RED};
            }
            break;
        default:
    }

    if (rgb_matrix_config.hsv.h != hsvcolor.h || rgb_matrix_config.hsv.s != hsvcolor.s || rgb_matrix_config.hsv.v != hsvcolor.v) {
        if (hsvcolor.v > 0) {
            hsvcolor.v = rgb_matrix_get_val();
        }
        setColor(index, hsvcolor);
    }
}

// Function to handle RGB matrix indicators for layers > 0
void handleHigherLayerIndicators(uint8_t index, int keycode) {
    HSV hsvcolor = {HSV_OFF};

    if (keycode > KC_TRNS && (g_led_config.flags[index] & LED_FLAG_KEYLIGHT)) {
        // if (keycode > KC_TRNS) {
        hsvcolor = rgb_matrix_config.hsv;

        // layers specific
        switch (get_highest_layer(layer_state | default_layer_state)) {
            case 2:
                // hsvcolor = (HSV){HSV_MAGENTA};
                break;
            case 1:
                // hsvcolor = (HSV){HSV_TEAL};
                hsvcolor.h += 64;
                break;
            default:
                // Handle layer-specific cases if needed
                break;
        }

        // all layers > 1
        switch (keycode) {
            case NK_TOGG:
                if (keymap_config.nkro)
                    hsvcolor = (HSV){HSV_GREEN};
                else {
                    hsvcolor = (HSV){HSV_RED};
                }
                break;
            case BAT_LVL:
                hsvcolor = (HSV){HSV_GREEN};
                break;
            case MY_SYSRQ:
                hsvcolor = (HSV){HSV_RED};
                break;
            case GU_TOGG:
            case KC_LGUI:
            case KC_RGUI:
                if (keymap_config.no_gui) {
                    hsvcolor = (HSV){HSV_RED};
                } else {
                    hsvcolor = rgb_matrix_config.hsv;
                }
                break;
            default:
        }
        hsvcolor.s = rgb_matrix_get_sat();

        // Set color using the new function
        if (hsvcolor.v > 0) {
            hsvcolor.v = rgb_matrix_get_val();
        }
        setColor(index, hsvcolor);
    } else if ((g_led_config.flags[index] & LED_FLAG_KEYLIGHT)) { // keycode > KC_TRNS
        if (rgb_matrix_get_val() > 0) {
            // if (rgb_matrix_config.mode) {
            hsvcolor = rgb_matrix_config.hsv;
            // hsvcolor.v = (hsvcolor.v >> 3);
            hsvcolor.v = 0;
            setColor(index, hsvcolor);
        }
    }
}

// Main function to handle RGB matrix indicators for all layers
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    uint8_t layer   = get_highest_layer(layer_state);
    uint8_t index   = 0;
    int     keycode = 0;

    for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
        for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
            index = g_led_config.matrix_co[row][col];

            if (index >= led_min && index < led_max && index != NO_LED) {
                keycode = keymap_key_to_keycode(layer, (keypos_t){col, row});
                if (!set_layer_modifiers(index)) {
                    if (layer == 0) {
                        // Handle indicators for layer zero
                        handleLayerZeroIndicators(index, keycode);
                    } else {
                        // Handle indicators for layers greater than zero
                        handleHigherLayerIndicators(index, keycode);
                    }
                }
            }
        }
    }

    return false;
}
