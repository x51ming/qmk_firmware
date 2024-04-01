#include QMK_KEYBOARD_H
// 16 17 17 13 13 8
#define __1 KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
		KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SCRL, KC_PAUS,

		KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_INS, KC_HOME, KC_PGUP,

		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL, KC_END, KC_PGDN,

		KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,

		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP,

		KC_LGUI, KC_LALT, KC_SPC, KC_RALT, MO(1), KC_LEFT, KC_DOWN, KC_RGHT),
	
	[1] = LAYOUT(
		__1,  __1,__1,__1,__1,__1,__1,__1,__1,__1,__1,__1,__1,	 __1,__1,__1,

		
		__1,KC_P1,KC_P2,KC_P3,KC_P4,KC_P5,KC_P6,KC_P7,KC_P8,KC_P9,KC_P0,__1,__1,  __1, 	    	__1,__1,__1,//1234

		__1,  __1,__1,__1,__1,__1,__1,__1,__1,__1,__1,__1,__1,__1,	__1,__1,__1,//QWER
		
		KC_LCAP,   __1,__1,__1,__1,__1,__1,__1,__1,__1,__1,__1,   __1,//ASDF
		
		__1,    __1,__1,__1,__1,__1,__1,__1,__1,__1,__1, __1, 	KC_VOLU,//ZXCV
		__1,    __1,        __1,  KC_APP,   __1, 	__1,KC_VOLD,__1
		
		)
};

