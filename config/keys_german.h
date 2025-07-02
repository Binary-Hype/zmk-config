// Copyright 2025 ZMK
// SPDX-License-Identifier: MIT

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
      888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
      888     888  888 888      X88      888    888 888 Y8b.          888      X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
                                                        888                 888
                                                        888                 888
                                                        888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

#pragma once
#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>
// clang-format off

#define ZMK_GERMAN_KEYCODES_VERSION "0.0.1"
#define ZMK_GERMAN_KEYCODES_VERSION_BCD 0x00000001
#define ZMK_GERMAN_KEYCODES_VERSION_MAJOR 0
#define ZMK_GERMAN_KEYCODES_VERSION_MINOR 0
#define ZMK_GERMAN_KEYCODES_VERSION_PATCH 1

// Aliases - Basic keys (German layout)
#define DE_CIRC GRAVE   // ^ (dead)
#define DE_1    N1      // 1
#define DE_2    N2      // 2
#define DE_3    N3      // 3
#define DE_4    N4      // 4
#define DE_5    N5      // 5
#define DE_6    N6      // 6
#define DE_7    N7      // 7
#define DE_8    N8      // 8
#define DE_9    N9      // 9
#define DE_0    N0      // 0
#define DE_SS   MINUS   // ß
#define DE_ACUT EQUAL   // ´ (dead)
#define DE_Q    Q       // Q
#define DE_W    W       // W
#define DE_E    E       // E
#define DE_R    R       // R
#define DE_T    T       // T
#define DE_Z    Y       // Z (German Y is on English Y position)
#define DE_U    U       // U
#define DE_I    I       // I
#define DE_O    O       // O
#define DE_P    P       // P
#define DE_UDIA LBKT    // Ü
#define DE_PLUS RBKT    // +
#define DE_A    A       // A
#define DE_S    S       // S
#define DE_D    D       // D
#define DE_F    F       // F
#define DE_G    G       // G
#define DE_H    H       // H
#define DE_J    J       // J
#define DE_K    K       // K
#define DE_L    L       // L
#define DE_ODIA SEMI    // Ö
#define DE_ADIA SQT     // Ä
#define DE_HASH NON_US_HASH // #
#define DE_LABK NON_US_BSLH // <
#define DE_Y    Z       // Y (German Y is on English Z position)
#define DE_X    X       // X
#define DE_C    C       // C
#define DE_V    V       // V
#define DE_B    B       // B
#define DE_N    N       // N
#define DE_M    M       // M
#define DE_COMM COMMA   // ,
#define DE_DOT  DOT     // .
#define DE_MINS FSLH    // -

// Shifted keys
#define DE_DEG  LS(DE_CIRC) // °
#define DE_EXLM LS(DE_1)    // !
#define DE_DQUO LS(DE_2)    // "
#define DE_SECT LS(DE_3)    // §
#define DE_DLR  LS(DE_4)    // $
#define DE_PERC LS(DE_5)    // %
#define DE_AMPR LS(DE_6)    // &
#define DE_SLSH LS(DE_7)    // /
#define DE_LPRN LS(DE_8)    // (
#define DE_RPRN LS(DE_9)    // )
#define DE_EQL  LS(DE_0)    // =
#define DE_QUES LS(DE_SS)   // ?
#define DE_GRV  LS(DE_ACUT) // ` (dead)
#define DE_ASTR LS(DE_PLUS) // *
#define DE_QUOT LS(DE_HASH) // '
#define DE_RABK LS(DE_LABK) // >
#define DE_SCLN LS(DE_COMM) // ;
#define DE_COLN LS(DE_DOT)  // :
#define DE_UNDS LS(DE_MINS) // _

// AltGr keys (using Right Alt)
#define DE_DLQU RA(DE_CIRC) // „
#define DE_IEXL RA(DE_1)    // ¡
#define DE_LDQU RA(DE_2)    // "
#define DE_PILC RA(DE_3)    // ¶
#define DE_CENT RA(DE_4)    // ¢
#define DE_LBRC RA(DE_5)    // [
#define DE_RBRC RA(DE_6)    // ]
#define DE_PIPE RA(DE_7)    // |
#define DE_LCBR RA(DE_8)    // {
#define DE_RCBR RA(DE_9)    // }
#define DE_NEQL RA(DE_0)    // ≠
#define DE_IQUE RA(DE_SS)   // ¿
#define DE_LDAQ RA(DE_Q)    // «
#define DE_NARS RA(DE_W)    // ∑
#define DE_EURO RA(DE_E)    // €
#define DE_REGD RA(DE_R)    // ®
#define DE_DAGG RA(DE_T)    // †
#define DE_OMEG RA(DE_Z)    // Ω
#define DE_DIAE RA(DE_U)    // ¨ (dead)
#define DE_FRSL RA(DE_I)    // ⁄
#define DE_OSTR RA(DE_O)    // Ø
#define DE_PI   RA(DE_P)    // π
#define DE_BULT RA(DE_UDIA) // •
#define DE_PLMN RA(DE_PLUS) // ±
#define DE_ARNG RA(DE_A)    // Å
#define DE_SLQU RA(DE_S)    // ‚
#define DE_PDIF RA(DE_D)    // ∂
#define DE_FHK  RA(DE_F)    // ƒ
#define DE_COPY RA(DE_G)    // ©
#define DE_FORD RA(DE_H)    // ª
#define DE_MORD RA(DE_J)    // º
#define DE_INCR RA(DE_K)    // ∆
#define DE_AT   RA(DE_L)    // @
#define DE_OE   RA(DE_ODIA) // Œ
#define DE_AE   RA(DE_ADIA) // Æ
#define DE_LSQU RA(DE_HASH) // '
#define DE_LTEQ RA(DE_LABK) // ≤
#define DE_YEN  RA(DE_Y)    // ¥
#define DE_AEQL RA(DE_X)    // ≈
#define DE_CCCE RA(DE_C)    // Ç
#define DE_SQRT RA(DE_V)    // √
#define DE_INTG RA(DE_B)    // ∫
#define DE_TILD RA(DE_N)    // ~ (dead)
#define DE_MICR RA(DE_M)    // µ
#define DE_INFN RA(DE_COMM) // ∞
#define DE_ELLP RA(DE_DOT)  // …
#define DE_NDSH RA(DE_MINS) // –

// Shift + AltGr keys
#define DE_NOT  LS(RA(DE_1))    // ¬
#define DE_RDQU LS(RA(DE_2))    // "
#define DE_PND  LS(RA(DE_4))    // £
#define DE_FI   LS(RA(DE_5))    // ﬁ
#define DE_BSLS LS(RA(DE_7))    // (backslash)
#define DE_STIL LS(RA(DE_8))    // ˜
#define DE_MDDT LS(RA(DE_9))    // ·
#define DE_MACR LS(RA(DE_0))    // ¯
#define DE_DOTA LS(RA(DE_SS))   // ˙
#define DE_RNGA LS(RA(DE_ACUT)) // ˚
#define DE_RDAQ LS(RA(DE_Q))    // »
#define DE_PERM LS(RA(DE_E))    // ‰
#define DE_CEDL LS(RA(DE_R))    // ¸
#define DE_DACU LS(RA(DE_T))    // ˝
#define DE_CARN LS(RA(DE_Z))    // ˇ
#define DE_AACU LS(RA(DE_U))    // Á
#define DE_UCIR LS(RA(DE_I))    // Û
#define DE_NARP LS(RA(DE_P))    // ∏
#define DE_APPL LS(RA(DE_PLUS)) //  (Apple logo)
#define DE_IACU LS(RA(DE_S))    // Í
#define DE_TM   LS(RA(DE_D))    // ™
#define DE_IDIA LS(RA(DE_F))    // Ï
#define DE_IGRV LS(RA(DE_G))    // Ì
#define DE_OACU LS(RA(DE_H))    // Ó
#define DE_DLSI LS(RA(DE_J))    // ı
#define DE_FL   LS(RA(DE_L))    // ﬂ
#define DE_GTEQ LS(RA(DE_LABK)) // ≥
#define DE_DDAG LS(RA(DE_Y))    // ‡
#define DE_UGRV LS(RA(DE_X))    // Ù
#define DE_LOZN LS(RA(DE_V))    // ◊
#define DE_LSAQ LS(RA(DE_B))    // ‹
#define DE_RSAQ LS(RA(DE_N))    // ›
#define DE_BREV LS(RA(DE_M))    // ˘
#define DE_OGON LS(RA(DE_COMM)) // ˛
#define DE_DIV  LS(RA(DE_DOT))  // ÷
#define DE_MDSH LS(RA(DE_MINS)) // —