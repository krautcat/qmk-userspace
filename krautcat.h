#pragma once

#define KEYCAPS_CHERRY 1
#define KEYCAPS_KAT 11
#define KEYCAPS_SA 21
#define KEYCAPS_MT3 22

enum layers {
    _KRAUTCAT_BASE = 0,
    _KRAUTCAT_RIGHTED,
    _KRAUTCAT_LEFTED,
    _KRAUTCAT_WM,
    _KRAUTCAT_MEDIA,
};

enum layers_alt {
    _KRAUTCAT_DIGITS = 1,
    _KRAUTCAT_F,
    _KRAUTCAT_MISC,
};

enum layers_alt_2 {
    _KRAUTCAT_NAV = 2,
};

enum krautcat_common_keycodes {
    LGUI_TAB = LGUI_T(KC_TAB),      // Tap is Tab, hold is Left GUI.
    LGUI_LBRC = LGUI_T(KC_LBRC),    // Tap is Left Bracket, hOld is Left GUI.
    LGUI_F1 = LGUI_T(KC_F1),        // Tap is F1, hold is Left GUI.
   
    RGUI_DEL = RGUI_T(KC_DEL),      // Tap is Delete, hold is Right GUI.
    RGUI_ENT = RGUI_T(KC_ENT),      // Tap is Enter, hold is Right GUI.
    RGUI_RBRC = RGUI_T(KC_RBRC),    // Tap is Right Bracket, hold if Right GUI.
    RGUI_F12 = RGUI_T(KC_F12),      // Tap is F12, hold is Right GUI. 

    
    LCTL_TAB = LCTL_T(KC_TAB),      // Tab is tap, hold is Left Control.
    LCTL_ENT = LCTL_T(KC_ENT),      // Tap is Enter, hoid is Left Control.
    LCTL_GRV = LCTL_T(KC_GRV),      // Tapi is Grave, hold is Left Control.
    LCTL_PLUS = RCTL_T(KC_PLUS),    // Tap is Plus sign, hold is Left Control.
    
    RCTL_ENT = RCTL_T(KC_ENT),      // Enter is tap, hold is Right Control.
    RCTL_QTE = RCTL_T(KC_QUOTE),    // Tap is Quotation Signs, hold is Right Control.
    RCTL_UNDS = RCTL_T(KC_UNDS),    // Tap is Underscore, hold is Right Control.
   

    LALT_GRV = LALT_T(KC_GRV),      // Tap is Grave, hold is Left Alt.
    LALT_ESC = LALT_T(KC_ESC),      // Esc is tap, hold is Left Alt.
    LALT_TAB = LALT_T(KC_TAB),      // Tap is Tab, hold is Left Alt.
    LALT_BSLS = LALT_T(KC_BSLS),    // Tap is Backslash, hold is Left Alt.
    LALT_EQL = LALT_T(KC_EQL),      // Gap is Equal, hold is Left Alt.

    RALT_GRV = RALT_T(KC_GRV),      // Grave is tap, hold is Right Alt.
    RALT_MNS = RALT_T(KC_MINUS),    // Tap is Minus, hold is Right Alt.
    RALT_RBRC = RALT_T(KC_RBRC),    // Tap is Right Bracket, hold is Left Alt.
    RALT_F12 = RALT_T(KC_F12),      // Tap is F12, hold is Right Alt.


    LSFT_SPC = LSFT_T(KC_SPC),      // Space is tap, hold is Left Shift.
    LSFT_BSLS = LSFT_T(KC_BSLS),
    
    RSFT_BSPC = RSFT_T(KC_BSPC),    // Backspace is tap, hold is Right Shift.
    RSFT_MNS = RSFT_T(KC_MINUS),    // Tap is Minus, hold is Right Shift.
};

enum krautcat_layer_keycodes {
    LDIG_TAB = LT(_KRAUTCAT_DIGITS, KC_TAB),
    LDIG_DEL = LT(_KRAUTCAT_DIGITS, KC_DEL),

    LNAV_ENT = LT(_KRAUTCAT_NAV, KC_ENT),
    LNAV_ESC = LT(_KRAUTCAT_NAV, KC_ESC),
};
