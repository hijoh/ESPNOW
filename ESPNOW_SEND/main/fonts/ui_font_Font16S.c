/*******************************************************************************
 * Size: 16 px
 * Bpp: 4
 * Opts: --bpp 4 --size 16 --font C:\Users\Administrator\Desktop\wenjianbijiao\lvgl_demo\assets\有泽行书.TTF -o C:\Users\Administrator\Desktop\wenjianbijiao\lvgl_demo\assets\ui_font_Font16S.c --format lvgl -r 0x20-0x7f --symbols 灯已开关 --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_FONT16S
#define UI_FONT_FONT16S 1
#endif

#if UI_FONT_FONT16S

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x7, 0x50, 0xd9, 0xf, 0x90, 0xc8, 0xa, 0x70,
    0x96, 0x7, 0x40, 0x63, 0x4, 0x0, 0x0, 0x8,
    0x60, 0xd9,

    /* U+0022 "\"" */
    0x89, 0x83, 0x23,

    /* U+0023 "#" */
    0x0, 0x0, 0x53, 0x0, 0x0, 0x20, 0x4b, 0x0,
    0x0, 0x91, 0x4b, 0x0, 0x0, 0x96, 0x6e, 0xc0,
    0x0, 0xae, 0xfb, 0x10, 0x3, 0xca, 0x98, 0x0,
    0x0, 0x95, 0x58, 0x10, 0x0, 0xba, 0xbe, 0xf4,
    0x4f, 0xe7, 0x68, 0x0, 0x1, 0xb4, 0x68, 0x0,
    0x0, 0xc4, 0x79, 0x0, 0x0, 0xd4, 0x69, 0x0,
    0x0, 0x72, 0x17, 0x0,

    /* U+0024 "$" */
    0x0, 0x20, 0x0, 0x0, 0x69, 0x0, 0x0, 0xbe,
    0x50, 0x8, 0x8a, 0xe0, 0xd, 0x59, 0xa0, 0xc,
    0x69, 0x10, 0x6, 0xd7, 0x0, 0x0, 0x8d, 0x10,
    0x0, 0x3a, 0xc0, 0x5, 0x47, 0xb3, 0x1d, 0x48,
    0xa3, 0xe, 0x58, 0xd1, 0x6, 0xef, 0x80, 0x0,
    0x69, 0x0, 0x0, 0x13, 0x0,

    /* U+0025 "%" */
    0x0, 0x0, 0x6, 0x20, 0x0, 0x0, 0x9, 0x80,
    0x6, 0x83, 0xe, 0x30, 0x9, 0x29, 0x5b, 0x0,
    0xa, 0x74, 0xc3, 0x0, 0x0, 0x3, 0xa0, 0x0,
    0x0, 0xa, 0x30, 0x0, 0x0, 0x2b, 0x28, 0x60,
    0x0, 0xb4, 0xa0, 0xb0, 0x7, 0xd0, 0xa0, 0xd0,
    0xd, 0x60, 0x27, 0x40, 0xa, 0x0, 0x0, 0x0,

    /* U+0026 "&" */
    0x0, 0xb, 0x40, 0x0, 0x3, 0x79, 0x0, 0x0,
    0x56, 0xa0, 0x0, 0x5, 0xa7, 0x0, 0x0, 0x3f,
    0x10, 0x0, 0x6, 0xa0, 0x0, 0x1, 0xdc, 0x2,
    0x0, 0x86, 0xc0, 0xd2, 0xd, 0x9, 0x4e, 0x10,
    0xe0, 0x3e, 0x71, 0xf, 0x25, 0xf9, 0xb0, 0x5e,
    0xd4, 0xda,

    /* U+0027 "'" */
    0xb, 0x40, 0x81,

    /* U+0028 "(" */
    0x2, 0x20, 0x72, 0xa, 0x1, 0x90, 0x45, 0x6,
    0x30, 0x72, 0x7, 0x20, 0x62, 0x5, 0x40, 0x27,
    0x0, 0x90, 0x9, 0x0, 0x53, 0x0, 0x0,

    /* U+0029 ")" */
    0x22, 0x2, 0x70, 0x9, 0x0, 0x90, 0x6, 0x30,
    0x35, 0x2, 0x60, 0x26, 0x3, 0x60, 0x54, 0x7,
    0x10, 0x90, 0x9, 0x4, 0x50, 0x0, 0x0,

    /* U+002A "*" */
    0x0, 0x75, 0x0, 0x0, 0x75, 0x0, 0x50, 0x64,
    0x5, 0x79, 0x52, 0xb6, 0x5, 0xa8, 0x40, 0x0,
    0x97, 0x0, 0x1a, 0x66, 0x90, 0xa4, 0x43, 0x69,
    0x0, 0x65, 0x0, 0x0, 0x76, 0x0, 0x0, 0x75,
    0x0,

    /* U+002B "+" */
    0x0, 0x71, 0x0, 0x8, 0x20, 0x0, 0x82, 0x0,
    0x8, 0x20, 0x4a, 0xda, 0x80, 0x8, 0x20, 0x0,
    0x82, 0x0, 0x8, 0x20, 0x0, 0x82, 0x0,

    /* U+002C "," */
    0x4b, 0x18, 0x0,

    /* U+002D "-" */
    0x49, 0x99, 0x80,

    /* U+002E "." */
    0x12, 0x5a,

    /* U+002F "/" */
    0x0, 0x0, 0x0, 0x30, 0x0, 0x0, 0x36, 0x0,
    0x0, 0xa, 0x0, 0x0, 0x3, 0x70, 0x0, 0x0,
    0xa0, 0x0, 0x0, 0x28, 0x0, 0x0, 0x9, 0x10,
    0x0, 0x2, 0x80, 0x0, 0x0, 0x91, 0x0, 0x0,
    0x29, 0x0, 0x0, 0x9, 0x20, 0x0, 0x1, 0x90,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+0030 "0" */
    0x0, 0xae, 0x20, 0x6, 0xb7, 0x80, 0xb, 0x53,
    0x80, 0xf, 0x20, 0xb0, 0x2f, 0x0, 0xb2, 0x3f,
    0x0, 0xa3, 0x3f, 0x0, 0xb3, 0x3f, 0x10, 0xc2,
    0x1f, 0x20, 0xd0, 0xe, 0x51, 0xd0, 0x8, 0xca,
    0x80, 0x0, 0xcd, 0x10,

    /* U+0031 "1" */
    0x6, 0xe0, 0x1f, 0xf0, 0x16, 0xc0, 0x8, 0xa0,
    0x8, 0x90, 0x8, 0x90, 0x7, 0xa0, 0x7, 0xa0,
    0x7, 0xa0, 0xc, 0xb0, 0xa, 0xa0, 0x5, 0x60,

    /* U+0032 "2" */
    0x0, 0xbe, 0x40, 0x8, 0xa5, 0xd0, 0xd, 0x41,
    0xf0, 0xc, 0x32, 0xf0, 0x4, 0x5, 0xc0, 0x0,
    0x9, 0x70, 0x0, 0xe, 0x20, 0x0, 0x4b, 0x0,
    0x0, 0xa4, 0x0, 0x2, 0xd0, 0x10, 0x4f, 0xff,
    0xf3, 0x2d, 0x77, 0xb7,

    /* U+0033 "3" */
    0x5, 0xec, 0x20, 0xf, 0x48, 0xb0, 0x3f, 0x5,
    0xd0, 0x2c, 0x6, 0xb0, 0x1, 0xa, 0x60, 0x2,
    0xff, 0x10, 0x0, 0x98, 0x90, 0x0, 0x1, 0xe0,
    0x12, 0x1, 0xf0, 0x27, 0x3, 0xe0, 0xc, 0x8c,
    0x90, 0x2, 0xdc, 0x10,

    /* U+0034 "4" */
    0x0, 0x30, 0x0, 0x0, 0x75, 0x0, 0x0, 0x8b,
    0x0, 0x0, 0xbf, 0x10, 0x0, 0xef, 0x0, 0x2,
    0xae, 0x0, 0x6, 0x5d, 0x0, 0xc, 0x5e, 0x94,
    0x7f, 0xff, 0xfd, 0x68, 0x2e, 0x0, 0x0, 0x4e,
    0x0, 0x0, 0x4e, 0x0, 0x0, 0x1b, 0x0,

    /* U+0035 "5" */
    0x4, 0x0, 0x0, 0xb, 0x8a, 0x80, 0x9, 0xa8,
    0x60, 0x9, 0x50, 0x0, 0xa, 0x50, 0x0, 0xb,
    0xfe, 0x30, 0xf, 0x87, 0xd0, 0x8, 0x0, 0xf1,
    0x0, 0x0, 0xe2, 0x6, 0x1, 0xf0, 0xb, 0x5b,
    0xa0, 0x4, 0xec, 0x10,

    /* U+0036 "6" */
    0x0, 0xbe, 0x50, 0x6, 0x92, 0xe0, 0xb, 0x40,
    0xb0, 0xe, 0x10, 0x30, 0xf, 0x0, 0x0, 0x2f,
    0x8e, 0x50, 0x2f, 0xa3, 0xe0, 0x1f, 0x0, 0xf3,
    0xf, 0x0, 0xf3, 0xc, 0x21, 0xf1, 0x7, 0x77,
    0xc0, 0x0, 0xce, 0x30,

    /* U+0037 "7" */
    0x0, 0x0, 0x0, 0xa, 0x6d, 0xd2, 0xc, 0xea,
    0xf3, 0xe, 0x16, 0x80, 0xf, 0x9, 0x30, 0x7,
    0xd, 0x0, 0x0, 0xe, 0x0, 0x0, 0x1d, 0x0,
    0x0, 0x3c, 0x0, 0x0, 0x5b, 0x0, 0x0, 0x8b,
    0x0, 0x0, 0x9a, 0x0, 0x0, 0x46, 0x0,

    /* U+0038 "8" */
    0x3, 0xcd, 0x40, 0xd, 0x35, 0x80, 0x1e, 0x3,
    0xa0, 0x1f, 0x0, 0xc0, 0xb, 0x9a, 0x60, 0x1,
    0xfa, 0x0, 0x9, 0xdf, 0x60, 0x1f, 0x35, 0xe0,
    0x5e, 0x0, 0xf3, 0x5e, 0x0, 0xe3, 0x1f, 0x44,
    0xe0, 0x4, 0xed, 0x30,

    /* U+0039 "9" */
    0x1, 0xce, 0x50, 0x9, 0x74, 0xb0, 0xe, 0x5,
    0xe0, 0x2e, 0x4, 0xe0, 0x1f, 0x29, 0xa0, 0xb,
    0xfe, 0x60, 0x0, 0x1b, 0x40, 0x0, 0xd, 0x20,
    0x0, 0xf, 0x10, 0x0, 0x2f, 0x0, 0x0, 0x3f,
    0x0, 0x0, 0x9, 0x0,

    /* U+003A ":" */
    0x0, 0x0, 0xe1, 0x2, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xd2, 0x2, 0x0,

    /* U+003B ";" */
    0x0, 0x0, 0xe1, 0x2, 0x0, 0x0, 0x0, 0x0,
    0x10, 0xe, 0x30, 0x60,

    /* U+003C "<" */
    0x0, 0x0, 0x0, 0x0, 0x64, 0x0, 0x19, 0x0,
    0x9, 0x10, 0x4, 0x60, 0x0, 0xa0, 0x0, 0x28,
    0x0, 0x0, 0x82, 0x0, 0x0, 0xa0, 0x0, 0x5,
    0x60, 0x0, 0xa, 0x10, 0x0, 0x23,

    /* U+003D "=" */
    0x48, 0x88, 0x60, 0x0, 0x0, 0x0, 0x0, 0x4,
    0x88, 0x86,

    /* U+003E ">" */
    0x0, 0x0, 0x4, 0x60, 0x0, 0x9, 0x10, 0x0,
    0x19, 0x0, 0x0, 0x64, 0x0, 0x0, 0xa0, 0x0,
    0x8, 0x20, 0x2, 0x80, 0x0, 0xa0, 0x0, 0x65,
    0x0, 0x1a, 0x0, 0x3, 0x20, 0x0,

    /* U+003F "?" */
    0x0, 0xae, 0x50, 0x7, 0xa3, 0xe0, 0x2f, 0x40,
    0xf1, 0x6, 0x2, 0xf0, 0x0, 0x5, 0xa0, 0x0,
    0xa, 0x20, 0x0, 0xb, 0x0, 0x0, 0x18, 0x0,
    0x0, 0x7, 0x0, 0x0, 0x1, 0x0, 0x0, 0x19,
    0x0, 0x0, 0x3e, 0x10,

    /* U+0040 "@" */
    0x0, 0x2c, 0xc9, 0x0, 0x0, 0xb1, 0x6, 0x70,
    0x7, 0x45, 0xb1, 0xc0, 0xb, 0x1a, 0x65, 0x82,
    0x19, 0x65, 0x75, 0x64, 0x38, 0xa2, 0x63, 0x72,
    0x47, 0xb1, 0x92, 0x90, 0x37, 0x93, 0xd4, 0x90,
    0xa, 0x3f, 0x6f, 0x70, 0xa, 0x20, 0x0, 0x90,
    0x2, 0xc2, 0x8, 0x70, 0x0, 0x3c, 0xe9, 0x0,

    /* U+0041 "A" */
    0x0, 0x6a, 0x0, 0x0, 0xac, 0x0, 0x0, 0x9d,
    0x0, 0x0, 0xbe, 0x0, 0x0, 0xca, 0x30, 0x3,
    0xa7, 0x70, 0x7, 0x67, 0xb0, 0xb, 0xff, 0xf0,
    0x1f, 0x21, 0xc4, 0x9c, 0x0, 0xb8, 0xa8, 0x0,
    0xab, 0x73, 0x0, 0x2a,

    /* U+0042 "B" */
    0x1, 0x0, 0x0, 0x1c, 0x9e, 0x50, 0xf, 0x73,
    0xe0, 0xe, 0x0, 0xd2, 0xe, 0x0, 0xd1, 0xe,
    0x1, 0xe0, 0xd, 0x5b, 0x80, 0xd, 0xbd, 0xe0,
    0xd, 0x0, 0xc4, 0xe, 0x0, 0x97, 0x3e, 0x0,
    0xa7, 0x4e, 0x65, 0xf2, 0xa, 0x7e, 0x70,

    /* U+0043 "C" */
    0x1, 0xbf, 0x90, 0xb, 0x93, 0xf1, 0x2f, 0x0,
    0xd0, 0x7b, 0x0, 0x50, 0xa8, 0x0, 0x0, 0xb6,
    0x0, 0x0, 0xb7, 0x0, 0x0, 0xa8, 0x0, 0x1,
    0x7c, 0x0, 0x4, 0x3f, 0x10, 0x71, 0xe, 0xb7,
    0xb0, 0x4, 0xed, 0x20,

    /* U+0044 "D" */
    0x12, 0x0, 0x0, 0x1d, 0x9e, 0x70, 0xf, 0x83,
    0xe2, 0xd, 0x0, 0xa7, 0xd, 0x0, 0x8a, 0xd,
    0x0, 0x7a, 0xd, 0x0, 0x7a, 0xd, 0x0, 0x89,
    0xd, 0x0, 0xb7, 0x4d, 0x0, 0xf3, 0x5d, 0x47,
    0xe0, 0x19, 0x9f, 0x50,

    /* U+0045 "E" */
    0x21, 0x0, 0x0, 0x3b, 0x6b, 0xa0, 0x1f, 0xcc,
    0xb2, 0xf, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf,
    0x5, 0x30, 0xf, 0xff, 0xe0, 0x1f, 0x22, 0x0,
    0x2e, 0x0, 0x0, 0x5d, 0x0, 0x0, 0x8e, 0x8a,
    0xa0, 0x6d, 0x9d, 0xf8, 0x18, 0x0, 0x10,

    /* U+0046 "F" */
    0x23, 0x0, 0x0, 0x1e, 0x5a, 0xc1, 0xf, 0xdb,
    0xb4, 0xe, 0x20, 0x0, 0xe, 0x20, 0x0, 0xe,
    0xff, 0xa0, 0xe, 0x68, 0xb1, 0xe, 0x30, 0x0,
    0xf, 0x20, 0x0, 0x3f, 0x20, 0x0, 0x2f, 0x10,
    0x0, 0xb, 0x0, 0x0,

    /* U+0047 "G" */
    0x1, 0xbe, 0xa0, 0xb, 0x40, 0xf2, 0x3d, 0x0,
    0xc0, 0x89, 0x0, 0x60, 0xa7, 0x0, 0x0, 0xc6,
    0x2a, 0xd5, 0xc6, 0xd8, 0xb5, 0xb7, 0x30, 0xc2,
    0xa8, 0x1, 0xf2, 0x6c, 0x7, 0xf2, 0x2f, 0x9c,
    0xc3, 0x8, 0xe4, 0xc3,

    /* U+0048 "H" */
    0x0, 0x0, 0x0, 0x36, 0x0, 0xa9, 0x2f, 0x2,
    0xb8, 0x1f, 0x0, 0xa6, 0xe, 0x0, 0xb5, 0xe,
    0x1, 0xb4, 0xd, 0x5e, 0xf4, 0xd, 0x66, 0xc5,
    0xe, 0x0, 0x95, 0x2f, 0x0, 0x96, 0x5f, 0x1,
    0xe7, 0x3f, 0x0, 0xd7, 0xa, 0x0, 0x65,

    /* U+0049 "I" */
    0x0, 0x60, 0x3, 0xef, 0x40, 0xa, 0xa0, 0x0,
    0x98, 0x0, 0x9, 0x70, 0x0, 0x97, 0x0, 0x9,
    0x80, 0x0, 0x98, 0x0, 0x9, 0x80, 0x0, 0x97,
    0x0, 0x9, 0xd7, 0x8, 0xed, 0xd0,

    /* U+004A "J" */
    0x0, 0x67, 0x0, 0x8f, 0xb0, 0x0, 0xc9, 0x0,
    0xc, 0x60, 0x0, 0xb5, 0x0, 0xb, 0x40, 0x0,
    0xb4, 0x0, 0xb, 0x50, 0x0, 0xb5, 0x8, 0xd,
    0x40, 0xb8, 0xf1, 0x3, 0xe9, 0x0,

    /* U+004B "K" */
    0x22, 0x2, 0x40, 0x1e, 0x0, 0xf3, 0xf, 0x23,
    0xe1, 0xe, 0x19, 0x60, 0xe, 0x2b, 0x0, 0xd,
    0xb1, 0x0, 0xe, 0x89, 0x0, 0xd, 0xc, 0x40,
    0xe, 0x5, 0xc0, 0x1e, 0x0, 0xf2, 0x1e, 0x0,
    0xf6, 0x9, 0x0, 0x67,

    /* U+004C "L" */
    0x11, 0x0, 0x0, 0xe, 0x20, 0x0, 0xd, 0x70,
    0x0, 0xb, 0x60, 0x0, 0xa, 0x40, 0x0, 0x9,
    0x30, 0x0, 0x9, 0x30, 0x0, 0x9, 0x40, 0x0,
    0x9, 0x50, 0x0, 0xa, 0x60, 0x0, 0x5f, 0xff,
    0xe3, 0x2c, 0x44, 0xb8,

    /* U+004D "M" */
    0x1, 0xd0, 0x2d, 0x30, 0x3, 0xf2, 0xe, 0x40,
    0x0, 0xd5, 0xe, 0x50, 0x0, 0xd8, 0xf, 0x60,
    0x0, 0xfa, 0x3e, 0x70, 0x2, 0xdd, 0x59, 0x90,
    0x5, 0x9c, 0x94, 0xb0, 0x8, 0x79, 0xf0, 0xd0,
    0xc, 0x47, 0xe0, 0xe0, 0x4f, 0x18, 0xc1, 0xf3,
    0x3e, 0x5, 0xb0, 0xe5, 0x8, 0x0, 0x30, 0x73,

    /* U+004E "N" */
    0x5a, 0x2, 0xe6, 0x8f, 0x10, 0xd7, 0xe, 0x70,
    0xb5, 0xd, 0xc0, 0xb4, 0xb, 0xc1, 0xb3, 0xc,
    0x66, 0xb3, 0xd, 0x1b, 0xb3, 0xd, 0xb, 0xd4,
    0x1d, 0x6, 0xf5, 0x6c, 0x3, 0xf5, 0x4b, 0x1,
    0xf5, 0x17, 0x0, 0x93,

    /* U+004F "O" */
    0x1, 0xce, 0x50, 0xc, 0x53, 0xf1, 0x3d, 0x0,
    0xd0, 0x8a, 0x0, 0x76, 0xa8, 0x0, 0x3b, 0xb8,
    0x0, 0x3c, 0xb8, 0x0, 0x4b, 0xa9, 0x0, 0x6a,
    0x8a, 0x0, 0x97, 0x4e, 0x0, 0xd2, 0xe, 0x89,
    0xc0, 0x4, 0xed, 0x20,

    /* U+0050 "P" */
    0x13, 0x0, 0x0, 0xe, 0xae, 0x90, 0xd, 0xa3,
    0xc2, 0xd, 0x40, 0x77, 0xc, 0x30, 0x78, 0xc,
    0x20, 0x98, 0xc, 0x10, 0xc6, 0xc, 0x44, 0xf2,
    0xc, 0xaf, 0xb0, 0xc, 0x12, 0x0, 0x1e, 0x20,
    0x0, 0xf, 0x20, 0x0, 0xa, 0x0, 0x0,

    /* U+0051 "Q" */
    0x2, 0xcd, 0x40, 0xc, 0x22, 0xe0, 0x3b, 0x0,
    0xc4, 0x77, 0x0, 0x97, 0x96, 0x0, 0x88, 0xa6,
    0x0, 0x88, 0xa6, 0x0, 0x88, 0x97, 0x0, 0x96,
    0x8c, 0x98, 0xb4, 0x4f, 0x8b, 0xf1, 0xf, 0xbb,
    0xf7, 0x3, 0x9e, 0xb4,

    /* U+0052 "R" */
    0x44, 0x0, 0x0, 0x2e, 0xbd, 0x30, 0x1f, 0x46,
    0xc0, 0xe, 0x0, 0xf0, 0xd, 0x1, 0xf0, 0xc,
    0x5, 0xc0, 0xe, 0xae, 0x60, 0xe, 0xbe, 0x10,
    0x1e, 0x7, 0x80, 0x5e, 0x2, 0xe0, 0x5d, 0x0,
    0xf4, 0xa, 0x0, 0x86,

    /* U+0053 "S" */
    0x2, 0xce, 0x60, 0xb, 0x42, 0xe0, 0xe, 0x0,
    0xc0, 0xe, 0x0, 0x30, 0xb, 0x70, 0x0, 0x2,
    0xf9, 0x0, 0x0, 0x3f, 0xa0, 0x2, 0x4, 0xf3,
    0xe, 0x0, 0xd7, 0x1c, 0x0, 0xc6, 0xb, 0x32,
    0xf2, 0x2, 0xde, 0x50,

    /* U+0054 "T" */
    0x0, 0x0, 0x0, 0x0, 0x20, 0x14, 0xd8, 0xb,
    0xff, 0xfc, 0x70, 0x2, 0xb8, 0x0, 0x0, 0xa,
    0x70, 0x0, 0x0, 0xa5, 0x0, 0x0, 0x9, 0x40,
    0x0, 0x0, 0x85, 0x0, 0x0, 0x9, 0x50, 0x0,
    0x0, 0xb5, 0x0, 0x0, 0xf, 0x60, 0x0, 0x0,
    0xe5, 0x0, 0x0, 0x8, 0x30, 0x0,

    /* U+0055 "U" */
    0x32, 0x0, 0xb4, 0x4d, 0x3, 0xf4, 0x3f, 0x20,
    0xf3, 0x3f, 0x0, 0xe3, 0x3f, 0x0, 0xe3, 0x3e,
    0x0, 0xd3, 0x2e, 0x0, 0xd4, 0x1f, 0x0, 0xd3,
    0xf, 0x0, 0xf2, 0xe, 0x20, 0xf1, 0xa, 0x97,
    0xd0, 0x2, 0xdf, 0x50,

    /* U+0056 "V" */
    0xa6, 0x0, 0xb9, 0x4e, 0x0, 0xba, 0xf, 0x10,
    0xd5, 0xb, 0x30, 0xf0, 0x8, 0x63, 0xb0, 0x5,
    0x96, 0x70, 0x2, 0xc9, 0x40, 0x0, 0xed, 0x0,
    0x0, 0xee, 0x0, 0x0, 0xeb, 0x0, 0x0, 0xd9,
    0x0, 0x0, 0x66, 0x0,

    /* U+0057 "W" */
    0x67, 0x1, 0x40, 0xc9, 0x1f, 0x19, 0xd0, 0xf9,
    0xc, 0x46, 0xd0, 0xd6, 0x9, 0x67, 0xe0, 0xf2,
    0x6, 0x89, 0xd1, 0xf0, 0x3, 0x9b, 0x85, 0xc0,
    0x1, 0xbb, 0x5a, 0x90, 0x0, 0xe9, 0x2f, 0x70,
    0x0, 0xe7, 0xf, 0x50, 0x0, 0xf4, 0xf, 0x30,
    0x0, 0xf1, 0xf, 0x20, 0x0, 0x90, 0x9, 0x20,

    /* U+0058 "X" */
    0xa, 0xd0, 0xc, 0xa0, 0x4f, 0x30, 0xca, 0x0,
    0xa7, 0x2f, 0x20, 0x3, 0xc8, 0x80, 0x0, 0xd,
    0xd0, 0x0, 0x0, 0x8a, 0x0, 0x0, 0xb, 0xe0,
    0x0, 0x2, 0xca, 0x70, 0x0, 0xb6, 0x4d, 0x0,
    0x5f, 0x0, 0xe4, 0xa, 0x90, 0xd, 0x90, 0x92,
    0x0, 0x5a,

    /* U+0059 "Y" */
    0xa, 0xc0, 0xa, 0xc0, 0x3e, 0x30, 0xca, 0x0,
    0x68, 0x1f, 0x20, 0x0, 0xd8, 0x90, 0x0, 0xb,
    0xe1, 0x0, 0x0, 0x8a, 0x0, 0x0, 0x7, 0xa0,
    0x0, 0x0, 0x7a, 0x0, 0x0, 0x7, 0xa0, 0x0,
    0x0, 0xcb, 0x0, 0x0, 0xa, 0xa0, 0x0, 0x0,
    0x37, 0x0,

    /* U+005A "Z" */
    0x0, 0x0, 0x3d, 0x20, 0x0, 0x6e, 0xf7, 0x5,
    0xff, 0xfd, 0x0, 0x1, 0x2c, 0x40, 0x0, 0x1,
    0xd0, 0x0, 0x0, 0x77, 0x0, 0x0, 0xc, 0x10,
    0x0, 0x2, 0xa0, 0x0, 0x0, 0x85, 0x0, 0x0,
    0xd, 0x0, 0x20, 0x9, 0xff, 0xff, 0x20, 0xc7,
    0x36, 0xc6,

    /* U+005B "[" */
    0x67, 0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 0x71,
    0x71, 0x71, 0x71, 0x71, 0x71, 0x57,

    /* U+005C "\\" */
    0x1c, 0xd1, 0xd, 0xa0, 0x1f, 0x61, 0xf7, 0x0,
    0x8a, 0x77, 0x0, 0x1, 0xdc, 0x0, 0x0, 0xd,
    0xd5, 0x0, 0x8, 0xea, 0x20, 0x0, 0xb, 0x94,
    0x0, 0xa, 0xfe, 0x60, 0x0, 0x1c, 0x60, 0x0,
    0x0, 0xb6, 0x0, 0x0, 0xc, 0x60, 0x0, 0x0,
    0x85, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+005D "]" */
    0x65, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17,
    0x17, 0x17, 0x17, 0x17, 0x17, 0x66,

    /* U+005E "^" */
    0xa, 0x90, 0x32, 0x33,

    /* U+005F "_" */
    0x66, 0x66, 0x66, 0x66,

    /* U+0060 "`" */
    0x0, 0x0, 0x1c, 0x0, 0x3, 0x70,

    /* U+0061 "a" */
    0x2, 0xcf, 0x40, 0xb, 0x45, 0xd0, 0x2d, 0x2,
    0xd0, 0x5a, 0x0, 0xc0, 0x6a, 0x1, 0xc0, 0x4c,
    0x5, 0xd0, 0x1f, 0x7b, 0xf5, 0x6, 0xe6, 0xc1,

    /* U+0062 "b" */
    0x8, 0x0, 0x0, 0xb, 0x50, 0x0, 0xa, 0x50,
    0x0, 0xa, 0x40, 0x0, 0xa, 0x9f, 0x50, 0xa,
    0x74, 0xd0, 0xb, 0x30, 0xf1, 0xb, 0x30, 0xe2,
    0xc, 0x30, 0xf1, 0xe, 0x31, 0xe0, 0xf, 0x86,
    0xa0, 0xb, 0x6e, 0x20,

    /* U+0063 "c" */
    0x1, 0xce, 0x40, 0xa7, 0x7a, 0xe, 0x1, 0x62,
    0xd0, 0x0, 0x4d, 0x0, 0x2, 0xf0, 0x6, 0xe,
    0x95, 0x70, 0x3d, 0xc1,

    /* U+0064 "d" */
    0x0, 0x3, 0xe0, 0x0, 0x3, 0xf0, 0x0, 0x2,
    0xe0, 0x0, 0x2, 0xc0, 0x1, 0xce, 0xb0, 0x9,
    0x67, 0xa0, 0xe, 0x3, 0xa0, 0x1e, 0x3, 0xa0,
    0x2d, 0x3, 0xb0, 0x1f, 0x4, 0xd0, 0xd, 0x8b,
    0xf1, 0x3, 0xe7, 0xa0,

    /* U+0065 "e" */
    0xb, 0xe4, 0x7, 0xa4, 0xd0, 0xc3, 0xe, 0x1e,
    0x8d, 0xd0, 0xf5, 0x62, 0xd, 0x30, 0x80, 0x8b,
    0x5b, 0x1, 0xcd, 0x20,

    /* U+0066 "f" */
    0x0, 0x1d, 0x60, 0x0, 0x7a, 0x60, 0x0, 0x94,
    0x0, 0x0, 0xa4, 0x0, 0xa, 0xff, 0xd1, 0x15,
    0xa4, 0x70, 0x0, 0x95, 0x0, 0x0, 0x95, 0x0,
    0x0, 0x96, 0x0, 0x0, 0xd6, 0x0, 0x0, 0xd6,
    0x0, 0x0, 0x73, 0x0,

    /* U+0067 "g" */
    0xa, 0xf4, 0x9, 0x66, 0xb0, 0xe0, 0x1d, 0xd,
    0x68, 0xc0, 0x6f, 0xdc, 0x1, 0xac, 0xe2, 0xa5,
    0x1d, 0x4e, 0x13, 0xa0, 0xe6, 0x98, 0x4, 0xed,
    0x20,

    /* U+0068 "h" */
    0xa, 0x0, 0x0, 0xd, 0x40, 0x0, 0xc, 0x40,
    0x0, 0xb, 0x30, 0x0, 0xa, 0x8f, 0x60, 0xa,
    0xb6, 0xc0, 0xa, 0x52, 0xc0, 0xb, 0x32, 0xc0,
    0xc, 0x33, 0xc0, 0xe, 0x33, 0xd0, 0xf, 0x23,
    0xf2, 0xa, 0x0, 0xb0,

    /* U+0069 "i" */
    0x9, 0x60, 0x97, 0x1, 0x0, 0xd3, 0xb, 0x70,
    0xa5, 0xb, 0x30, 0xb2, 0xc, 0x30, 0xc7, 0xc,
    0x80, 0x75,

    /* U+006A "j" */
    0x2, 0xd0, 0x3, 0xe0, 0x0, 0x30, 0x6, 0xc0,
    0x2, 0xf3, 0x0, 0xf1, 0x0, 0xf0, 0x0, 0xe0,
    0x0, 0xe0, 0x40, 0xe0, 0x80, 0xf0, 0x7e, 0xe0,
    0x1d, 0x90,

    /* U+006B "k" */
    0x35, 0x0, 0x0, 0x2f, 0x10, 0x0, 0xf, 0x0,
    0x0, 0xe, 0x7, 0x80, 0xd, 0xb, 0xa0, 0xd,
    0x3d, 0x10, 0xd, 0xc6, 0x0, 0xd, 0x1d, 0x0,
    0xe, 0x19, 0x60, 0x1f, 0x25, 0xd2, 0x2f, 0x11,
    0xf4, 0xa, 0x0, 0xa1,

    /* U+006C "l" */
    0x71, 0xa, 0x90, 0x99, 0x8, 0x70, 0x77, 0x7,
    0x60, 0x76, 0x7, 0x60, 0x87, 0x8, 0xc2, 0x6f,
    0x3, 0x90,

    /* U+006D "m" */
    0x30, 0x0, 0x0, 0xaa, 0xe8, 0xe3, 0x8b, 0x9b,
    0x97, 0x76, 0x77, 0x68, 0x76, 0x77, 0x68, 0x75,
    0x87, 0x77, 0x96, 0x97, 0x79, 0xa6, 0x96, 0x8d,
    0x65, 0x45, 0x57,

    /* U+006E "n" */
    0x1, 0x0, 0x0, 0xe, 0x6e, 0x60, 0xc, 0xd8,
    0xc0, 0xb, 0x41, 0xe0, 0xb, 0x21, 0xf0, 0xb,
    0x31, 0xf0, 0xc, 0x32, 0xf1, 0xe, 0x41, 0xf2,
    0x9, 0x20, 0xb0,

    /* U+006F "o" */
    0x1, 0xce, 0x30, 0x97, 0x85, 0xe, 0x12, 0x90,
    0xf0, 0xa, 0x1f, 0x0, 0xc0, 0xf1, 0xc, 0xa,
    0x74, 0x80, 0x2d, 0xd1,

    /* U+0070 "p" */
    0x4, 0x0, 0x0, 0xe, 0x9e, 0x30, 0xd, 0x73,
    0xc0, 0xc, 0x20, 0xf0, 0xc, 0x0, 0xf0, 0xc,
    0x2, 0xe0, 0xc, 0x48, 0xa0, 0xd, 0xcf, 0x30,
    0xf, 0x21, 0x0, 0xf, 0x20, 0x0, 0xa, 0x10,
    0x0,

    /* U+0071 "q" */
    0x1, 0xdd, 0x20, 0xa4, 0x89, 0x1d, 0x4, 0xd3,
    0xc0, 0x2b, 0x3d, 0x3, 0xa0, 0xf2, 0x79, 0x7,
    0xfb, 0x90, 0x1, 0x3d, 0x0, 0x2, 0xf0, 0x0,
    0xa,

    /* U+0072 "r" */
    0x0, 0x0, 0x7, 0x83, 0x60, 0x3d, 0x9f, 0x22,
    0xc0, 0xd1, 0x2a, 0x0, 0x3, 0xb0, 0x0, 0x5b,
    0x0, 0x7, 0xb0, 0x0, 0x28, 0x0, 0x0,

    /* U+0073 "s" */
    0xb, 0xd6, 0x5a, 0x28, 0x6a, 0x2, 0x1d, 0x80,
    0x12, 0xaa, 0x78, 0x2f, 0x79, 0x4d, 0x1c, 0xe5,

    /* U+0074 "t" */
    0x0, 0x30, 0x0, 0x0, 0xa7, 0x0, 0x0, 0x98,
    0x0, 0x0, 0x96, 0x0, 0x1, 0xac, 0xc1, 0x7,
    0xfd, 0x70, 0x0, 0xb2, 0x0, 0x0, 0xb2, 0x0,
    0x0, 0xa2, 0x0, 0x0, 0x94, 0x60, 0x0, 0x8b,
    0xa0, 0x0, 0x3e, 0x70,

    /* U+0075 "u" */
    0x0, 0x0, 0xc, 0x22, 0xd0, 0xc7, 0x2f, 0xb,
    0x50, 0xe0, 0xb3, 0x1c, 0xb, 0x31, 0xb0, 0xa4,
    0x3d, 0x17, 0x99, 0xf2, 0x1d, 0x9b, 0x0,

    /* U+0076 "v" */
    0x5f, 0x22, 0xe1, 0xd, 0x52, 0xe0, 0x7, 0x75,
    0x90, 0x4, 0x98, 0x40, 0x0, 0xba, 0x0, 0x0,
    0xcb, 0x0, 0x0, 0xb9, 0x0, 0x0, 0x65, 0x0,

    /* U+0077 "w" */
    0x0, 0x0, 0x0, 0x0, 0xd, 0x37, 0x74, 0xf3,
    0x8, 0x8a, 0xa4, 0xf0, 0x5, 0x89, 0xa7, 0xa0,
    0x3, 0xa9, 0x9b, 0x40, 0x1, 0xd9, 0x8e, 0x0,
    0x0, 0xe8, 0x9c, 0x0, 0x0, 0xc6, 0x8a, 0x0,
    0x0, 0x74, 0x56, 0x0,

    /* U+0078 "x" */
    0x5f, 0x34, 0xf1, 0x8, 0x96, 0xc0, 0x0, 0xcc,
    0x30, 0x0, 0x89, 0x0, 0x0, 0xc8, 0x0, 0xb,
    0xac, 0x10, 0x4f, 0x37, 0xf1, 0x58, 0x1, 0xe1,

    /* U+0079 "y" */
    0xa2, 0xa, 0x99, 0x70, 0x88, 0x86, 0xc, 0x38,
    0x60, 0xe0, 0x69, 0x4b, 0x1, 0xdd, 0x70, 0x0,
    0xa2, 0x5, 0xc, 0x0, 0x97, 0x90, 0x5, 0xe2,
    0x0,

    /* U+007A "z" */
    0x0, 0x18, 0xd0, 0xe, 0xff, 0xe0, 0x1, 0x1c,
    0x50, 0x0, 0x1d, 0x0, 0x0, 0x66, 0x0, 0x0,
    0xc0, 0x0, 0x19, 0xff, 0xe1, 0x3e, 0x74, 0xc6,

    /* U+007B "{" */
    0x0, 0x20, 0x33, 0x6, 0x0, 0x70, 0x7, 0x0,
    0x70, 0x9, 0x0, 0x90, 0x9, 0x0, 0x80, 0x7,
    0x0, 0x70, 0x6, 0x0, 0x32, 0x0, 0x20,

    /* U+007C "|" */
    0x22, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44,
    0x44, 0x44, 0x44, 0x44,

    /* U+007D "}" */
    0x20, 0x3, 0x30, 0x16, 0x0, 0x70, 0x7, 0x0,
    0x70, 0x8, 0x0, 0x90, 0x9, 0x0, 0x80, 0x7,
    0x0, 0x70, 0x6, 0x2, 0x30, 0x20, 0x0,

    /* U+007E "~" */
    0x6, 0x50, 0x0, 0x30, 0x25, 0x4, 0x0, 0x2,
    0x71,

    /* U+5173 "关" */

    /* U+5DF2 "已" */
    0x0, 0x1, 0x56, 0x97, 0x0, 0x0, 0x8c, 0x93,
    0x1e, 0x90, 0x0, 0x1, 0x0, 0x1d, 0xb0, 0x0,
    0x1, 0xe1, 0x5d, 0xf4, 0x0, 0x0, 0xf, 0x8f,
    0xa7, 0x30, 0x0, 0x0, 0xf1, 0x0, 0x0, 0x0,
    0x0, 0xe, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc0,
    0x0, 0x0, 0x0, 0x60, 0xc, 0x20, 0x0, 0x0,
    0xc, 0x10, 0x3e, 0xb8, 0x77, 0x7a, 0xf7, 0x0,
    0x17, 0xbd, 0xdd, 0xb7, 0x10,

    /* U+5F00 "开" */

    /* U+706F "灯" */
    0x0, 0x3, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x6f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x4, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x4e, 0x10, 0x23, 0x69, 0xcf, 0xc1, 0x0, 0x45,
    0xec, 0xa6, 0x85, 0x55, 0x20, 0x0, 0x5e, 0x5b,
    0x0, 0x0, 0x55, 0x0, 0x0, 0x5, 0x87, 0xa0,
    0x0, 0x2, 0xf2, 0x0, 0x0, 0x0, 0x98, 0x0,
    0x0, 0xf, 0x20, 0x0, 0x0, 0xc, 0xd8, 0x0,
    0x0, 0xf2, 0x0, 0x0, 0x1, 0xf6, 0xf1, 0x0,
    0xf, 0x20, 0x0, 0x0, 0x6c, 0x3, 0x0, 0x0,
    0xf2, 0x0, 0x0, 0xd, 0x40, 0x0, 0x26, 0x3f,
    0x30, 0x0, 0x5, 0x40, 0x0, 0x0, 0x7f, 0xf3,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6e, 0x20,
    0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 128, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 128, .box_w = 3, .box_h = 12, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 18, .adv_w = 128, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 13},
    {.bitmap_index = 21, .adv_w = 128, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 73, .adv_w = 128, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 118, .adv_w = 128, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 166, .adv_w = 128, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 208, .adv_w = 128, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 13},
    {.bitmap_index = 211, .adv_w = 128, .box_w = 3, .box_h = 15, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 234, .adv_w = 128, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 257, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 290, .adv_w = 128, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 313, .adv_w = 128, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 316, .adv_w = 128, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 319, .adv_w = 128, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 321, .adv_w = 128, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 367, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 403, .adv_w = 128, .box_w = 4, .box_h = 12, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 427, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 463, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 499, .adv_w = 128, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 538, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 574, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 610, .adv_w = 128, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 649, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 685, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 721, .adv_w = 128, .box_w = 3, .box_h = 9, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 735, .adv_w = 128, .box_w = 3, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 747, .adv_w = 128, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 777, .adv_w = 128, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 787, .adv_w = 128, .box_w = 5, .box_h = 12, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 817, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 853, .adv_w = 128, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 901, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 937, .adv_w = 128, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 976, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1012, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1048, .adv_w = 128, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1087, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1123, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1159, .adv_w = 128, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1198, .adv_w = 128, .box_w = 5, .box_h = 12, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 1228, .adv_w = 128, .box_w = 5, .box_h = 12, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 1258, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1294, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1330, .adv_w = 128, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1378, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1414, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1450, .adv_w = 128, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1489, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1525, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1561, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1597, .adv_w = 128, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1643, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1679, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1715, .adv_w = 128, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1763, .adv_w = 128, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1805, .adv_w = 128, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1847, .adv_w = 128, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1889, .adv_w = 128, .box_w = 2, .box_h = 14, .ofs_x = 4, .ofs_y = 2},
    {.bitmap_index = 1903, .adv_w = 128, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 1949, .adv_w = 128, .box_w = 2, .box_h = 14, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 1963, .adv_w = 128, .box_w = 4, .box_h = 2, .ofs_x = 2, .ofs_y = 14},
    {.bitmap_index = 1967, .adv_w = 128, .box_w = 8, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1971, .adv_w = 128, .box_w = 4, .box_h = 3, .ofs_x = 2, .ofs_y = 14},
    {.bitmap_index = 1977, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 2001, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 2037, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 2057, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 2093, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 2113, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 2149, .adv_w = 128, .box_w = 5, .box_h = 10, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 2174, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 2210, .adv_w = 128, .box_w = 3, .box_h = 12, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 2228, .adv_w = 128, .box_w = 4, .box_h = 13, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 2254, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 2290, .adv_w = 128, .box_w = 3, .box_h = 12, .ofs_x = 3, .ofs_y = 3},
    {.bitmap_index = 2308, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 2335, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 2362, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 2382, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 2415, .adv_w = 128, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 2440, .adv_w = 128, .box_w = 5, .box_h = 9, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 2463, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 2479, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 2515, .adv_w = 128, .box_w = 5, .box_h = 9, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 2538, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 2562, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 2598, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 2622, .adv_w = 128, .box_w = 5, .box_h = 10, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 2647, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 2671, .adv_w = 128, .box_w = 3, .box_h = 15, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 2694, .adv_w = 128, .box_w = 2, .box_h = 12, .ofs_x = 3, .ofs_y = 3},
    {.bitmap_index = 2706, .adv_w = 128, .box_w = 3, .box_h = 15, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 2729, .adv_w = 128, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 13},
    {.bitmap_index = 2738, .adv_w = 256, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2738, .adv_w = 256, .box_w = 11, .box_h = 11, .ofs_x = 3, .ofs_y = 3},
    {.bitmap_index = 2799, .adv_w = 256, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2799, .adv_w = 256, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = 2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0xc7f, 0xd8d, 0x1efc
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 20851, .range_length = 7933, .glyph_id_start = 96,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 4, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 2,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_Font16S = {
#else
lv_font_t ui_font_Font16S = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_FONT16S*/

