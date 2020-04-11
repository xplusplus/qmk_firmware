/* Copyright 2019 Ryota Goto
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
#pragma once
#define XXX KC_NO
#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT_all( \
    K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K212, K014, \
    K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113,       K114, \
    K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211,       K213,       K214, \
    K300, K404, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, \
    K400, K401, K402,       K403,       K405,       K407,       K409, K410,       K411, K413, K414  \
) { \
    { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014 }, \
    { K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114 }, \
    { K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  K213,  K214 }, \
    { K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314 }, \
    { K400,  K401,  K402,  K403,  K404,  K405,  KC_NO, K407, KC_NO,  K409,  K410,  K411,  KC_NO, K413,  K414 }  \
}

// typical 65% layout: no split backspace, 6.25U spacebar
#define LAYOUT_65( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,      K2D, K2E, \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,      K3D, K3E, \
    K40, K41, K42,           K45,           K48,      K4A, K4B,      K4D, K4E  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, XXX, K2D, K2E }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, XXX, K3D, K3E }, \
    { K40, K41, K42, XXX, XXX, K45, XXX, XXX, K48, XXX, K4A, K4B, XXX, K4D, K4E }  \
}
