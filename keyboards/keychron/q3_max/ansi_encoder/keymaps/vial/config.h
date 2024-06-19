/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x48, 0xB3, 0x3A, 0x21, 0xAD, 0xC2, 0x00, 0x47}

#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 1, 14 }

#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR
// #define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_TYPING_HEATMAP
#define RGB_MATRIX_DEFAULT_SPD 127 // Sets the default animation speed, if none has been set
#define RGB_MATRIX_DEFAULT_HUE 162 // (230° unint8) Sets the default hue value, if none has been set
#define RGB_MATRIX_DEFAULT_SAT 255 // (63% unint8)  Sets the default saturation value, if none has been set
#define RGB_MATRIX_DEFAULT_VAL 127 // (50% unint8)  Sets the default hue value, if none has been set
#define RGB_MATRIX_DEFAULT_ON true
// #define FORCE_NKRO

#define TAPPING_TERM 100
