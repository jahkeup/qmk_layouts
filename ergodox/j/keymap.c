#include "ergodox_ez.h"
#include "action_layer.h"
#include "version.h"
#include "config.h"

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EPRM,
  VRSN,
  RGB_SLD,
};

#define L_BASE  0
#define L_CHAR  1
#define L_MEDIA 2
#define L_WM    3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [L_BASE] = LAYOUT_ergodox(
               KC_EQUAL, KC_1, KC_2, KC_3, KC_4, KC_5, TT(2),
               CTL_T(KC_TAB), KC_Q, KC_W, KC_E, KC_R, KC_T, TT(L_CHAR),
               KC_BSPACE, KC_A, KC_S, KC_D, CTL_T(KC_F), KC_G,
               KC_LSHIFT, CTL_T(KC_Z), KC_X, KC_C, KC_V, GUI_T(KC_B), SCMD_T(KC_LBRACKET),
               KC_GRAVE, KC_QUOTE, TT(L_MEDIA), KC_LEFT, ALT_T(KC_RIGHT),

               ALT_T(KC_APPLICATION),KC_LGUI,KC_HOME,
               KC_SPACE,KC_LCTL,KC_END,

               OSL(2),KC_6,KC_7,KC_8,KC_9,KC_0,KC_MINUS,
               OSL(1),KC_Y,KC_U,KC_I,KC_O,KC_P,KC_BSLASH,
               KC_H,CTL_T(KC_J),KC_K,LT(L_MEDIA,KC_L),KC_SCOLON,GUI_T(KC_QUOTE),
               SCMD_T(KC_RBRACKET),GUI_T(KC_N),KC_M,KC_COMMA,KC_DOT,RCTL_T(KC_SLASH),KC_RSHIFT,
               ALT_T(KC_UP),KC_DOWN,KC_LBRACKET,KC_RBRACKET,MO(L_BASE),

               KC_LALT,CTL_T(KC_ESCAPE),KC_PGUP,KC_PGDOWN,
               KC_RCTL,KC_ENTER),

  [L_CHAR] = LAYOUT_ergodox(
               KC_ESCAPE,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,LGUI(KC_GRAVE),
               KC_GRAVE,KC_EXLM,KC_AT,KC_LCBR,KC_RCBR,KC_PIPE,KC_TRNS,
               KC_TRNS,KC_HASH,KC_DLR,KC_LPRN,KC_RPRN,KC_GRAVE,
               KC_TRNS,KC_PERC,KC_CIRC,KC_LBRACKET,KC_RBRACKET,KC_TILD,KC_TRNS,
               KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,

               KC_TRNS,KC_TRNS,KC_TRNS,
               KC_TRNS,KC_TRNS,KC_TRNS,


               KC_TRNS,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,
               KC_TRNS,KC_UP,KC_7,KC_8,KC_9,KC_ASTR,KC_F12,
               KC_DOWN,KC_4,KC_5,KC_6,KC_PLUS,RCTL_T(KC_NO),
               KC_TRNS,KC_AMPR,KC_1,KC_2,KC_3,KC_BSLASH,KC_KP_ENTER,
               KC_TRNS,KC_DOT,KC_0,KC_EQUAL,KC_TRNS,

               KC_TRNS,KC_TRNS,KC_TRNS,
               KC_TRNS,KC_TRNS,KC_TRNS),

  [L_MEDIA] = LAYOUT_ergodox(
               KC_ESCAPE,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_TRNS,
               KC_TRNS,KC_TRNS,KC_WWW_BACK,KC_MS_UP,KC_WWW_FORWARD,KC_TRNS,KC_TRNS,
               KC_TRNS,KC_TRNS,KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,KC_MS_WH_UP,
               KC_TRNS,KC_TRNS,KC_MS_WH_LEFT,KC_TRNS,KC_MS_WH_RIGHT,KC_MS_WH_DOWN,KC_TRNS,
               KC_TRNS,KC_TRNS,KC_TRNS,KC_MS_BTN3,KC_MS_BTN1,

               KC_TRNS,KC_TRNS,KC_TRNS,
               KC_MS_BTN2,KC_TRNS,KC_TRNS,

               KC_TRNS,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,
               KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_F12,
               KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_MEDIA_PLAY_PAUSE,
               KC_TRNS,KC_TRNS,KC_TRNS,KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRNS,KC_TRNS,
               KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,KC_TRNS,KC_TRNS,

               KC_TRNS,KC_TRNS,KC_TRNS,
               KC_TRNS,KC_TRNS,KC_TRNS),

    [L_WM] = LAYOUT_ergodox(
               KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
               KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
               KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
               KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
               KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,

               KC_TRNS,KC_TRNS,KC_TRNS,
               KC_TRNS,KC_TRNS,KC_TRNS,

               KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
               KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
               KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
               KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
               KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,

               KC_TRNS,KC_TRNS,KC_TRNS,
               KC_TRNS,KC_TRNS,KC_TRNS),

};

const uint16_t PROGMEM fn_actions[] = {
  [1] = ACTION_LAYER_TAP_TOGGLE(1)
};

void matrix_init_user(void) {
#ifdef RGBLIGHT_COLOR_LAYER_0
  rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // dynamically generate these.
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
      break;
    case VRSN:
      if (record->event.pressed) {
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
      }
      return false;
      break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
      break;

  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

    uint8_t layer = biton32(state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      case 0:
        #ifdef RGBLIGHT_COLOR_LAYER_0
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
        #endif
        break;
      case 1:
        ergodox_right_led_1_on();
        #ifdef RGBLIGHT_COLOR_LAYER_1
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_1);
        #endif
        break;
      case 2:
        ergodox_right_led_2_on();
        #ifdef RGBLIGHT_COLOR_LAYER_2
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_2);
        #endif
        break;
      case 3:
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_3
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_3);
        #endif
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        #ifdef RGBLIGHT_COLOR_LAYER_4
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_4);
        #endif
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_5
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_5);
        #endif
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_6
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_6);
        #endif
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_7
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_6);
        #endif
        break;
      default:
        break;
    }
    return state;

};
