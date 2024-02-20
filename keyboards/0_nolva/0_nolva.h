#pragma once
#include "quantum.h"

#ifndef KC_SLCK
#define KC_SLCK KC_SCROLL_LOCK
#endif

#ifndef KC_RCTRL
#define KC_RCTRL KC_RIGHT_CTRL
#endif

#define XXX KC_NO
#define LAYOUT_all( \
     K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0a, K0b, K0c,      K0e, K0f, K0g , \
     K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1a, K1b, K1c, K1d, K1e, K1f, K1g , \
     K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2a, K2b, K2c, K2d, K2e, K2f, K2g , \
     K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3a, K3b,      K3d,                 \
     K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4a,      K4c,           K4f,       \
     K50,      K52,           K55,                     K5a,           K5d, K5e, K5f, K5g   \
) \
{ \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0a, K0b, K0c, XXX, K0e, K0f, K0g }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1a, K1b, K1c, K1d, K1e, K1f, K1g }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2a, K2b, K2c, K2d, K2e, K2f, K2g }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3a, K3b, XXX, K3d, XXX, XXX, XXX }, \
    { K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4a, XXX, K4c, XXX, XXX, K4f, XXX }, \
    { K50, XXX, K52, XXX, XXX, K55, XXX, XXX, XXX, XXX, K5a, XXX, XXX, K5d, K5e, K5f, K5g }  \
}
