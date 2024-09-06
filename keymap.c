#include QMK_KEYBOARD_H
#include "sendstring_french.h"

// Define a custom keycode for your macro
enum custom_keycodes {
    SHOW_LAYOUT = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layout 0: Base Layer
     * ,-----------------------------------------------------------------------------------.
     * | Esc  |   A  |   Z  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * | Tab  |   Q  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   M  | Enter|
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * | Shift|   W  |   X  |   C  |   V  |   B  |   N  |   ;  |   ,  |   .  |   /  |Layout|
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |BL_STP| Ctrl | Alt  | GUI  | MO(3)| Space| Space| MO(4)| Left | Down |  Up  |Right |
     * `-----------------------------------------------------------------------------------'
     */
	[0] = LAYOUT_ortho_4x12(
		KC_ESC,  KC_A,    KC_Z,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
		KC_TAB,  KC_Q,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_M,    KC_ENT,
		KC_LSFT, KC_W,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_SCLN, KC_COMM, KC_DOT,  KC_SLSH, SHOW_LAYOUT,
		BL_STEP, KC_LCTL, KC_LALT, KC_LGUI, MO(3),   KC_SPC,  KC_SPC,  MO(4),   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
	),
    /* Layout 3: Lower Layer
     * ,-----------------------------------------------------------------------------------.
     * | BriD | BriU | PCom | Hash | Hash | Play | Mute | Vol- | Vol+ |   7  |   8  |   9  |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |  &   |  `   |  @   |  :   |  $   |  %   |  ^   |  _   |  *   |   4  |   5  |   6  |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |  "   |  <   |  >   |  (   |  )   |  {   |  }   |  ?   |  !   |   1  |   2  |   3  |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |  |   |  \   |  /   |  |   |   ↓  | Space| Space|   ↓  |  .   |   0  |   =  |   +  |
     * `-----------------------------------------------------------------------------------'
     */
	[3] = LAYOUT_ortho_4x12(KC_BRID, KC_BRIU, KC_PCMM, KC_HASH, KC_HASH, KC_MPLY, KC_MUTE, KC_VOLD, KC_VOLU, KC_P7, KC_P8, KC_P9, KC_AMPR, KC_GRV, KC_AT, KC_COLN, KC_DLR, KC_PERC, KC_CIRC, KC_UNDS, KC_ASTR, KC_P4, KC_P5, KC_P6, KC_DQUO, KC_LT, KC_GT, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, KC_QUES, KC_EXLM, KC_P1, KC_P2, KC_P3, LSFT(KC_NUBS), LSFT(KC_NUHS), KC_PSLS, KC_PIPE, KC_TRNS, KC_SPC, KC_SPC, KC_TRNS, KC_PDOT, KC_P0, KC_PEQL, KC_PPLS),
    /* Layout 4: Raise Layer
     * ,-----------------------------------------------------------------------------------.
     * |  1   |  2   |  3   |  4   |  5   |  6   |  7   |  8   |  9   | F10  | F11  | F12  |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * | Del  | PgUp |  \   |  0   |  [   |  ]   |  \   |  -   |  =   |  F7  |  F8  |  F9  |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * | Bksp | PgDn | Play |   ↓  | Vol- | Vol+ |   ↓  |  #   |  `   |  F4  |  F5  |  F6  |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |   ↓  |   ↓  |   ↓  |   ↓  | MO(6)|   ↓  |   ↓  |   ↓  | Next |  F1  |  F2  |  F3  |
     * `-----------------------------------------------------------------------------------'
     */
	[4] = LAYOUT_ortho_4x12(KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_PGUP, KC_NUBS, KC_0, KC_LBRC, KC_RBRC, KC_BSLS, KC_MINS, KC_EQL, KC_F7, KC_F8, KC_F9, KC_BSPC, KC_PGDN, KC_MPLY, KC_TRNS, KC_VOLD, KC_VOLU, KC_TRNS, KC_NUHS, KC_GRV, KC_F4, KC_F5, KC_F6, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(6), KC_TRNS, KC_TRNS, KC_TRNS, KC_MNXT, KC_F1, KC_F2, KC_F3),
	[6] = LAYOUT_ortho_4x12(KC_TRNS, QK_BOOT, DB_TOGG, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_DEL, KC_TRNS, KC_TRNS, MU_NEXT, AU_ON, AU_OFF, AG_NORM, AG_SWAP, DF(0), DF(1), DF(2), TO(5), KC_TRNS, KC_TRNS, AU_PREV, AU_NEXT, MU_ON, MU_OFF, MI_ON, MI_OFF, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SHOW_LAYOUT:
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI("r"));  
                SEND_STRING("cmd" SS_TAP(X_ENTER));  
                SEND_STRING(
                    "echo Layout 0: Base Layer\n"
                    "echo ,----------------------------------------------------------------------------------.\n"
                    "echo | Esc  |   A  |   Z  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |\n"
                    "echo |------+------+------+------+------+------+------+------+------+------+------+------|\n"
                    "echo | Tab  |   Q  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   M  | Enter|\n"
                    "echo |------+------+------+------+------+------+------+------+------+------+------+------|\n"
                    "echo | Shift|   W  |   X  |   C  |   V  |   B  |   N  |   ;  |   ,  |   .  |   /  |Layout|\n"
                    "echo |------+------+------+------+------+------+------+------+------+------+------+------|\n"
                    "echo |BL_STP| Ctrl | Alt  | GUI  | MO(3)| Space| Space| MO(4)| Left | Down |  Up  |Right |\n"
                    "echo `-----------------------------------------------------------------------------------'\n"
                    "echo.\n"
                    "echo Layout 3: Lower Layer\n"
                    "echo ,----------------------------------------------------------------------------------.\n"
                    "echo | BriD | BriU | PCom | Hash | Hash | Play | Mute | Vol- | Vol+ |    7 |    8 |    9 |\n"
                    "echo |------+------+------+------+------+------+------+------+------+------+------+------|\n"
                    "echo |  &   |  `   |  @   |  :   |  $   |  %%  |  ^   |  _   |  *   |    4 |    5 |    6 |\n"
                    "echo |------+------+------+------+------+------+------+------+------+------+------+------|\n"
                    "echo |  \"   |  <   |  >   |  (   |  )   |  {   |  }   |  ?   |  !   |   1 |    2 |    3 |\n"
                    "echo |------+------+------+------+------+------+------+------+------+------+------+------|\n"
                    "echo |  |   |  \\   |  /   |  |   |   v  | Space| Space|   v  |  .   |   0 |    = |    + |\n"
                    "echo `-----------------------------------------------------------------------------------'\n"
                    "echo.\n"
                    "echo Layout 4: Raise Layer\n"
                    "echo ,----------------------------------------------------------------------------------.\n"
                    "echo |  1   |  2   |  3   |  4   |  5   |  6   |  7   |  8   |  9   | F10  | F11  | F12  |\n"
                    "echo |------+------+------+------+------+------+------+------+------+------+------+------|\n"
                    "echo | Del  | PgUp |  \\  |  0   |  [   |  ]   |  \\  |  -   |  =   |  F7  |  F8  |  F9  |\n"
                    "echo |------+------+------+------+------+------+------+------+------+------+------+------|\n"
                    "echo | Bksp | PgDn | Play |   v  | Vol- | Vol+ |   v  |  #   |  `   |  F4  |  F5  |  F6  |\n"
                    "echo |------+------+------+------+------+------+------+------+------+------+------+------|\n"
                    "echo |   v  |   v  |   v  |   v  | MO(6)|   v  |   v  |   v  | Next |  F1  |  F2  |  F3  |\n"
                    "echo `-----------------------------------------------------------------------------------'\n"
                );
            }
            return false;
        default:
            return true;
    }
}