/*
 Copyright (C) 2021,2022 Geno <geno@live.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include "actionmap.h"
#include "action_code.h"
#include "actionmap_common.h"
#include "keyboard_fn.h"
#include "user_fn.h"

/* 
 * 定义需使用的FN按键
 */
#define AC_FN0    ACTION_LAYER_TAP(3, KC_UP)
#define AC_FN1    ACTION_LAYER_TAP(1, KC_SPC)
#define AC_FN2    ACTION_LAYER_TAP(2, KC_DEL)
#define AC_FN3    ACTION_MODS_TAP_KEY(MOD_RALT, KC_LEFT)
#define AC_FN4    ACTION_LAYER_TAP(3, KC_DOWN)
#define AC_FN5    ACTION_MODS_TAP_KEY(MOD_RCTL, KC_RGHT)
#define AC_FN6    ACTION_FUNCTION(7)

/* 
 * @brief 按键映射
 * 下面的按键映射与按键布局的第一组实际布局对应
 */
const action_t actionmaps[][MATRIX_ROWS][MATRIX_COLS] = { 
	[0] = ACTIONMAP_ROT(
        ESC, Q, W, E, R, T, Y, U, I, O, P, BSPC,
        CAPS, A, S, D, F, G, H, J, K, L, SCLN,
        LSFT, Z, X, C, V, B, N, M, N, N, N,
        LGUI, LALT, FN1, FN3, FN4, FN2 ),
		
	[1] = ACTIONMAP(
        TAB, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS),
};

