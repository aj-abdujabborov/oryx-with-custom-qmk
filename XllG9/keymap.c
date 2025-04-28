#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  MAC_SIRI,
  MAC_LOCK,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TO(1),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           TG(2),          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_A,           KC_R,           KC_S,           KC_T,           KC_G,                                           KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    LT(8,KC_SPACE), MO(6),                                          MO(3),          KC_LEFT_SHIFT
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TO(0),          
    KC_TRANSPARENT, KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,                                           KC_T,           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           
    KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,                                           KC_G,           KC_H,           KC_J,           KC_K,           KC_L,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    MT(MOD_LALT, KC_Z),KC_X,           KC_C,           KC_V,                                           KC_B,           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       
                                                    KC_SPACE,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          TO(0),          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_MS_UP,       KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_MS_WH_UP,    KC_NO,          KC_TRANSPARENT, KC_NO,          
    KC_NO,          KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,                                          KC_NO,          KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_RIGHT, KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_MS_BTN1,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_BTN2
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_TILD,        KC_7,           KC_8,           KC_9,           KC_EXLM,                                        KC_SCLN,        KC_COLN,        KC_QUOTE,       KC_DQUO,        KC_UNDS,        KC_NO,          
    KC_NO,          KC_0,           KC_4,           KC_5,           KC_6,           KC_PERC,                                        KC_HASH,        MO(4),          OSM(MOD_LGUI),  OSM(MOD_LALT),  MO(5),          KC_NO,          
    KC_NO,          KC_QUES,        KC_1,           KC_2,           KC_3,           KC_AMPR,                                        KC_AT,          KC_BSPC,        KC_COMMA,       KC_DOT,         OSM(MOD_LCTL),  KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_LCBR,        KC_RCBR,        KC_LABK,        KC_RABK,        KC_EQUAL,                                       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_MINUS,       KC_PLUS,        KC_SLASH,       KC_ASTR,        KC_CIRC,                                        KC_NO,          KC_TRANSPARENT, OSM(MOD_LGUI),  OSM(MOD_RALT),  KC_NO,          KC_NO,          
    KC_NO,          KC_LPRN,        KC_RPRN,        KC_LBRC,        KC_RBRC,        KC_PIPE,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          OSM(MOD_RCTL),  KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_DLR,                                         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_BSLS,                                        LALT(LGUI(LCTL(LSFT(KC_M)))),KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          
    KC_NO,          KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_NO
  ),
  [6] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          LGUI(KC_BSPC),  LGUI(LSFT(KC_SPACE)),LGUI(KC_SPACE), KC_ENTER,       KC_ESCAPE,                                      CW_TOGG,        KC_ENTER,       KC_UP,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          MO(7),          OSM(MOD_LALT),  OSM(MOD_LGUI),  OSM(MOD_LSFT),  QK_LOCK,                                          LGUI(LCTL(KC_SPACE)),KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_RIGHT_GUI,   KC_NO,          
    KC_NO,          OSM(MOD_LCTL),  KC_TAB,         KC_F11,         KC_GRAVE,       KC_NO,                                          KC_CAPS,        KC_BSPC,        KC_NO,          LSFT(KC_TAB),   LALT(LGUI(LCTL(LSFT(KC_U)))),KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_UP,          KC_NO,          KC_TAB,                                         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       LGUI(LSFT(KC_4)),                                KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          LGUI(KC_0),     LGUI(KC_MINUS), LGUI(KC_EQUAL), LGUI(LSFT(KC_5)),                                KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_BOOT,        
    KC_NO,          KC_NO,          KC_NO,          KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_NO,                                          KC_NO,          RGB_SLD,        RGB_MODE_FORWARD,KC_NO,          QK_LLCK,        KC_NO,          
    KC_NO,          KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,MAC_LOCK,                                       KC_NO,          RGB_VAD,        RGB_VAI,        RGB_SPD,        RGB_SPI,        KC_NO,          
    KC_NO,          MAC_SIRI,       KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_NO,                                          KC_NO,          RGB_TOG,        TOGGLE_LAYER_COLOR,KC_NO,          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_NO
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {135,7,247}, {135,7,247}, {135,7,247}, {135,7,247}, {135,7,247}, {0,0,0}, {135,7,247}, {135,7,247}, {135,7,247}, {135,7,247}, {135,7,247}, {0,0,0}, {135,7,247}, {135,7,247}, {135,7,247}, {135,7,247}, {135,7,247}, {88,190,235}, {162,179,236}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {135,7,247}, {135,7,247}, {135,7,247}, {135,7,247}, {162,179,236}, {0,0,0}, {135,7,247}, {135,7,247}, {135,7,247}, {135,7,247}, {135,7,247}, {0,0,0}, {135,7,247}, {135,7,247}, {135,7,247}, {135,7,247}, {162,179,236}, {0,0,0}, {162,179,236}, {162,179,236} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {88,190,235}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {88,190,235}, {88,190,235}, {88,190,235}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {88,190,235}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {88,190,235}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {88,190,235}, {88,190,235}, {88,190,235}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {88,190,235} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {135,7,247}, {27,236,238}, {27,236,238}, {27,236,238}, {135,7,247}, {0,0,0}, {27,236,238}, {27,236,238}, {27,236,238}, {27,236,238}, {135,7,247}, {0,0,0}, {135,7,247}, {27,236,238}, {27,236,238}, {27,236,238}, {135,7,247}, {135,7,247}, {162,179,236}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {135,7,247}, {135,7,247}, {135,7,247}, {135,7,247}, {135,7,247}, {0,0,0}, {135,7,247}, {162,179,236}, {162,179,236}, {162,179,236}, {162,179,236}, {0,0,0}, {135,7,247}, {2,209,198}, {135,7,247}, {135,7,247}, {162,179,236}, {0,0,0}, {162,179,236}, {162,179,236} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {135,7,247}, {135,7,247}, {135,7,247}, {135,7,247}, {135,7,247}, {0,0,0}, {135,7,247}, {135,7,247}, {135,7,247}, {135,7,247}, {135,7,247}, {0,0,0}, {135,7,247}, {135,7,247}, {135,7,247}, {135,7,247}, {135,7,247}, {135,7,247}, {162,179,236}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {162,179,236}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {162,179,236}, {162,179,236} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {135,7,247}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {135,7,247}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {135,7,247}, {162,179,236}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {2,209,198}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {162,179,236}, {162,179,236} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {2,209,198}, {2,209,198}, {2,209,198}, {88,190,235}, {2,209,198}, {0,0,0}, {162,179,236}, {162,179,236}, {162,179,236}, {162,179,236}, {0,0,0}, {0,0,0}, {162,179,236}, {88,190,235}, {2,209,198}, {135,7,247}, {0,0,0}, {88,190,235}, {162,179,236}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {162,179,236}, {88,190,235}, {88,190,235}, {0,0,0}, {0,0,0}, {0,0,0}, {135,7,247}, {88,190,235}, {88,190,235}, {88,190,235}, {162,179,236}, {0,0,0}, {162,179,236}, {2,209,198}, {0,0,0}, {88,190,235}, {2,209,198}, {0,0,0}, {162,179,236}, {162,179,236} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {88,190,235}, {0,0,0}, {2,209,198}, {0,0,0}, {0,0,0}, {88,190,235}, {88,190,235}, {88,190,235}, {2,209,198}, {0,0,0}, {0,0,0}, {2,209,198}, {2,209,198}, {2,209,198}, {2,209,198}, {135,7,247}, {162,179,236}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {162,179,236}, {162,179,236} },

    [8] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {2,209,198}, {2,209,198}, {0,0,0}, {0,0,0}, {2,209,198}, {2,209,198}, {2,209,198}, {2,209,198}, {2,209,198}, {0,0,0}, {2,209,198}, {2,209,198}, {2,209,198}, {2,209,198}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {2,125,255}, {0,0,0}, {2,125,255}, {2,125,255}, {0,0,0}, {162,179,236}, {0,0,0}, {0,0,0}, {2,125,255}, {2,125,255}, {2,125,255}, {2,125,255}, {0,0,0}, {0,0,0}, {2,125,255}, {2,125,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case MAC_SIRI:
      HCS(0xCF);
    case MAC_LOCK:
      HCS(0x19E);

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}



