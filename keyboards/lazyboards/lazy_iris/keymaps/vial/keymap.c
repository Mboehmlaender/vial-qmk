#include QMK_KEYBOARD_H

#define _CMK 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

enum custom_keycodes {
  CMK = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_CMK] = LAYOUT(
  //┌──────────┬──────────┬──────────┬──────────┬──────────┬──────────┐                          ┌──────────┬──────────┬──────────┬──────────┬──────────┬──────────┐
     KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,     KC_F6,                                KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_F12,
  //├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤                          ├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤
     KC_ESC,    KC_Q,      KC_W,      KC_F,      KC_P,      KC_B,                                 KC_J,      KC_L,      KC_U,      KC_Y,      LSFT(KC_COMMA),KC_BACKSPACE,
  //├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤                          ├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤
     KC_TAB,    KC_A,      KC_R,      KC_S,      KC_T,      KC_G,                                 KC_M,      KC_N,      KC_E,      KC_I,      KC_O,      KC_MINUS,
  //├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┼──────────┐    ┌──────────┼──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤
     KC_LCTL,  KC_Z,      KC_X,      KC_C,      KC_D,      KC_V,      KC_MUTE,         RGB_TOG,   KC_K,      KC_H,      KC_COMM,   KC_DOT,    KC_SLSH,   KC_RCTL,
  //└──────────┴──────────┴──────────┼──────────┼──────────┼──────────┼──────────┘    └──────────┼──────────┼──────────┼──────────┼──────────┴──────────┴──────────┘
                                      TO(RAISE), KC_LSFT,   KC_ENT,                               KC_SPC,    MO(LOWER),   KC_LALT
                                  // └──────────┴──────────┴──────────┘                          └──────────┴───────────┴─────────┘
  ),

  [_LOWER] = LAYOUT(
  //┌──────────┬──────────┬──────────┬──────────┬──────────┬──────────┐                          ┌──────────┬──────────┬──────────┬──────────┬──────────┬──────────┐
     _______,   _______,   _______,   _______,   _______,   _______,                              _______,   _______,   _______,   _______,   _______,   _______,
  //├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤                          ├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤
     _______,   KC_GRAVE,  _______,   RALT(KC_Q),RALT(KC_E),_______,                              KC_RBRC,   LSFT(KC_RBRC),KC_NONUS_HASH,LSFT(KC_NONUS_HASH),_______,_______,
  //├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤                          ├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤
     _______,   LSFT(KC_1),LSFT(KC_2),LSFT(KC_3),LSFT(KC_4),LSFT(KC_5),                           LSFT(KC_6),LSFT(KC_7),LSFT(KC_8),LSFT(KC_9),LSFT(KC_0),_______,
  //├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┼──────────┐    ┌──────────┼──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤
     _______,   _______,   _______,   _______,   _______,   _______,   _______,        _______,   _______,   _______,   _______,   _______,   _______,   _______,
  //└──────────┼──────────┼──────────┼──────────┼──────────┴──────────┴──────────┘    └──────────┼──────────┼──────────┼──────────┼──────────┴──────────┴──────────┘
                                      TO(RAISE), _______,   KC_ENT,                               KC_SPC,    _______,    _______
                                  // └──────────┴──────────┴──────────┘                          └──────────┴───────────┴─────────┘
  ),

  [_RAISE] = LAYOUT(
  //┌──────────┬──────────┬──────────┬──────────┬──────────┬──────────┐                          ┌──────────┬──────────┬──────────┬──────────┬──────────┬──────────┐
     _______,   _______,   _______,   _______,   _______,   _______,                              _______,   KC_KP_7,   KC_KP_8,   KC_KP_9,   _______,   _______,
  //├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤                          ├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤
     _______,   _______,   _______,   _______,   _______,   _______,                              _______,   KC_KP_4,   KC_KP_5,   KC_KP_6,   _______,   _______,
  //├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤                          ├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤
     _______,   _______,   _______,   _______,   _______,   _______,                              _______,   KC_KP_1,   KC_KP_2,   KC_KP_3,   _______,   _______,
  //├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┼──────────┐    ┌──────────┼──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤
     _______,   _______,   _______,   _______,   _______,   _______,   _______,        _______,   _______,   KC_KP_0,   KC_KP_DOT, KC_KP_ENTER,_______,  _______,
  //└──────────┴──────────┴──────────┼──────────┼──────────┼──────────┼──────────┘    └──────────┼──────────┼──────────┼──────────┼──────────┴──────────┴──────────┘
                                      TO(CMK),   _______,   KC_ENT,                               KC_SPC,    _______,   KC_LALT
                                  // └──────────┴──────────┴──────────┘                          └──────────┴───────────┴─────────┘
  ),

  [_ADJUST] = LAYOUT(
  //┌──────────┬──────────┬──────────┬──────────┬──────────┬──────────┐                          ┌──────────┬──────────┬──────────┬──────────┬──────────┬──────────┐
     _______,   _______,   _______,   _______,   _______,   _______,                              _______,   _______,   _______,   _______,   _______,   _______,
  //├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤                          ├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤
     _______,   _______,   _______,   _______,   _______,   _______,                              _______,   _______,   _______,   _______,   _______,   _______,
  //├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤                          ├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤
     _______,   _______,   _______,   _______,   _______,   _______,                              _______,   _______,   _______,   _______,   _______,   _______,
  //├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┼──────────┐    ┌──────────┼──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤
     _______,   _______,   _______,   _______,   _______,   _______,   _______,        _______,   _______,   _______,   _______,   _______,   _______,   _______,
  //└──────────┴──────────┴──────────┼──────────┼──────────┼──────────┼──────────┘    └──────────┼──────────┼──────────┼──────────┼──────────┴──────────┴──────────┘
                                      _______,   _______,   _______,                              _______,    _______,   _______
                                  // └──────────┴──────────┴──────────┘                          └──────────┴───────────┴─────────┘
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case CMK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_CMK);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
    return false;
}
