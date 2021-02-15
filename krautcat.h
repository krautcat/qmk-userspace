#include QMK_KEYBOARD_H

enum layers {
    _KRAUTCAT_BASE = 0,
    _KRAUTCAT_RIGHTED,
    _KRAUTCAT_LEFTED,
    _KRAUTCAT_WM,
    _KRAUTCAT_MEDIA,
};

enum krautcat_common_keycodes {
    LGUI_TAB = LGUI_T(KC_TAB),      // Tap is Tab, hold is Left GUI.
    RGUI_DEL = RGUI_T(KC_DEL),      // Tap is Delete, hold is Right GUI.
    RGUI_ENT = RGUI_T(KC_ENT),      // Tap is Enter, hold is Right GUI.

    LCTL_TAB = LCTL_T(KC_TAB),	    // Tab is tap, hold is Left Control.
    LCTL_ENT = LCTL_T(KC_ENT),      // Tap is Enter, hoid is Left Control.
    RCTL_ENT = RCTL_T(KC_ENT),      // Enter is tap, hold is Right Control.

    LALT_ESC = LALT_T(KC_ESC),      // Esc is tap, hold is Left Alt.
    LALT_TAB = LALT_T(KC_TAB),      // Tap is Tab, hold is Left Alt.
    RALT_GRV = RALT_T(KC_GRV),      // Grave is tap, hold is Right Alt.

    LSFT_SPC = LSFT_T(KC_SPC),      // Space is tap, hold is Left Shift.
    RSFT_BSPC = RSFT_T(KC_BSPC),    // Backspace is tap, hold is Right Shift.
};
