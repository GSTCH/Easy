// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: RobiTheWinnerDisplay

#include "ui.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
    #define LV_ATTRIBUTE_MEM_ALIGN
#endif

// IMAGE DATA: assets/ArduinoEasy_LogoPrint.png
const LV_ATTRIBUTE_MEM_ALIGN uint8_t ui_img_arduinoeasy_logoprint_png_data[] = {
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3D,0xC7,0xFF,0xF8,0x75,0xFF,0x35,0x2D,0xFF,0x14,0x1D,0xFF,0x35,0x25,0xFF,0x76,0x45,0xFF,0x39,0x86,0xFF,0xBE,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0xEF,0xFF,0x39,0x86,0xFF,0xF4,0x1C,0xFF,0xBE,0xEF,0xFF,0xBE,0xE7,0xFF,0x15,0x2D,0xFF,0xF8,0x75,0xFF,0x3D,0xC7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x5D,0xD7,0xFF,0xF4,0x1C,0xFF,0x55,0x35,0xFF,0x55,0x35,0xFF,0x55,0x35,0xFF,0x55,0x35,0xFF,0x55,0x35,0xFF,0x14,0x25,0xFF,0xDB,0xAE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1C,0xBF,0xFF,0xF4,0x1C,0xFF,0x55,0x2D,0xFF,0x55,0x3D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7D,0xD7,0xFF,0xF4,0x1C,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xF4,0x14,0xFF,0x7D,0xDF,0xFF,
    0xFF,0xFF,0xFF,0xDF,0xF7,0xFF,0xB3,0x0C,0xFF,0x55,0x35,0xFF,0xF4,0x24,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBA,0xA6,0xFF,0x14,0x25,0xFF,0x35,0x2D,0xFF,0x18,0x7E,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF4,0x1C,0xFF,0x51,0x04,0xFF,0x92,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x93,0x04,0xFF,0x92,0x04,0xFF,0x31,0x04,0xFF,0x35,0x35,0xFF,0xDF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD7,0x5D,0xFF,0x31,0x04,0xFF,0x92,0x04,0xFF,0x31,0x04,0xFF,0xBE,0xEF,0xFF,0x9E,0xE7,0xFF,0x72,0x04,0xFF,0x92,0x04,0xFF,0x51,0x04,0xFF,0xB3,0x0C,0xFF,0x5D,0xCF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3D,0xCF,0xFF,0x31,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x52,0x04,0xFF,0x9A,0x96,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD7,0x55,0xFF,0x72,0x04,0xFF,0xB3,0x04,0xFF,
    0x72,0x04,0xFF,0xBE,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x31,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x11,0x04,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF4,0x24,0xFF,0x93,0x04,0xFF,0x52,0x04,0xFF,0xDB,0xAE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF4,0x1C,0xFF,0x93,0x04,0xFF,0x51,0x04,0xFF,0xFC,0xB6,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBF,0xEF,0xFF,0x31,0x04,0xFF,0x92,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x93,0x04,0xFF,0x31,0x04,0xFF,0x3C,0xC7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xB3,0x0C,0xFF,0x72,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x31,0x04,0xFF,0xBE,0xEF,0xFF,0x9E,0xE7,0xFF,0x92,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x31,0x04,0xFF,0x7A,0x96,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x5D,0xCF,0xFF,0x51,0x04,0xFF,0xB3,0x04,0xFF,
    0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x52,0x04,0xFF,0x9A,0x96,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x55,0x3D,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x72,0x04,0xFF,0xFC,0xB6,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x39,0x7E,0xFF,0x72,0x04,0xFF,0xB3,0x04,0xFF,0x31,0x04,0xFF,0x72,0x04,0xFF,0xB3,0x04,0xFF,0x72,0x04,0xFF,0x39,0x86,0xFF,0xFF,0xFF,0xFF,0x59,0x86,0xFF,0x72,0x04,0xFF,0x93,0x04,0xFF,0x96,0x4D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x10,0x04,0xFF,0xB3,0x04,0xFF,0x11,0x04,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x51,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x31,0x04,0xFF,0x1C,0xC7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x93,0x04,0xFF,0x92,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x31,0x04,0xFF,0xBE,0xEF,0xFF,0x9E,0xE7,0xFF,
    0x92,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x31,0x04,0xFF,0xBA,0x9E,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x5D,0xCF,0xFF,0x51,0x04,0xFF,0xB3,0x04,0xFF,0xD3,0x04,0xFF,0xF4,0x1C,0xFF,0xF4,0x14,0xFF,0xF4,0x14,0xFF,0xB3,0x04,0xFF,0x9A,0x9E,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF7,0xFF,0xB3,0x0C,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x72,0x04,0xFF,0x59,0x86,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x55,0x45,0xFF,0x93,0x04,0xFF,0x92,0x04,0xFF,0xFF,0xFF,0xFF,0xFB,0xAE,0xFF,0x51,0x04,0xFF,0xB3,0x04,0xFF,0x35,0x35,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x31,0x04,0xFF,0xB3,0x04,0xFF,0x31,0x04,0xFF,0xFF,0xFF,0xFF,0x9A,0x9E,0xFF,0x72,0x04,0xFF,0x93,0x04,0xFF,0x96,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x76,0x45,0xFF,0x92,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,
    0x51,0x04,0xFF,0x7E,0xD7,0xFF,0xFF,0xFF,0xFF,0xF4,0x24,0xFF,0x92,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x31,0x04,0xFF,0xBE,0xEF,0xFF,0x9E,0xE7,0xFF,0x92,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x52,0x04,0xFF,0x9E,0xE7,0xFF,0xFF,0xFF,0xFF,0x5D,0xCF,0xFF,0x51,0x04,0xFF,0x92,0x04,0xFF,0xD7,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x9E,0xE7,0xFF,0x31,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x93,0x04,0xFF,0x55,0x35,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF4,0x24,0xFF,0x93,0x04,0xFF,0xF4,0x14,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x72,0x04,0xFF,0x11,0x04,0xFF,0x31,0x04,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x55,0x45,0xFF,0xB3,0x04,0xFF,0x72,0x04,0xFF,0x3C,0xC7,0xFF,0x76,0x45,0xFF,0xB3,0x04,0xFF,0x51,0x04,0xFF,0x3C,0xC7,0xFF,0xFF,0xFF,0xFF,0xBE,0xEF,0xFF,0x31,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,
    0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xF4,0x1C,0xFF,0x39,0x7E,0xFF,0x72,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x31,0x04,0xFF,0xBE,0xEF,0xFF,0x9E,0xE7,0xFF,0x92,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x92,0x04,0xFF,0x96,0x4D,0xFF,0xFF,0xFF,0xFF,0x5D,0xCF,0xFF,0x51,0x04,0xFF,0x92,0x04,0xFF,0xD7,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDB,0xA6,0xFF,0x52,0x04,0xFF,0xF4,0x14,0xFF,0x55,0x35,0xFF,0x93,0x04,0xFF,0x93,0x0C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF4,0x1C,0xFF,0xB3,0x04,0xFF,0x92,0x04,0xFF,0xBA,0x9E,0xFF,0xFF,0xFF,0xFF,0xBE,0xEF,0xFF,0xBF,0xF7,0xFF,0xBE,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBB,0x9E,0xFF,
    0x52,0x04,0xFF,0x93,0x04,0xFF,0xF8,0x6D,0xFF,0x72,0x04,0xFF,0xB3,0x04,0xFF,0x52,0x04,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x18,0x7E,0xFF,0x72,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x93,0x04,0xFF,0xB3,0x04,0xFF,0x92,0x04,0xFF,0x72,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x31,0x04,0xFF,0xBE,0xEF,0xFF,0x9E,0xE7,0xFF,0x72,0x04,0xFF,0x93,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x93,0x04,0xFF,0x92,0x04,0xFF,0xFF,0xF7,0xFF,0x5D,0xD7,0xFF,0x51,0x04,0xFF,0x93,0x04,0xFF,0x55,0x3D,0xFF,0xFB,0xBE,0xFF,0xBB,0xA6,0xFF,0xBB,0xA6,0xFF,0xBA,0xA6,0xFF,0xDF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xB7,0x55,0xFF,0x92,0x04,0xFF,0xF4,0x24,0xFF,0x9A,0x96,0xFF,0x72,0x04,0xFF,0x92,0x04,0xFF,0x9E,0xE7,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0x55,0x45,0xFF,0x93,0x04,0xFF,0xB3,0x04,0xFF,0x72,0x04,0xFF,0xB3,0x0C,0xFF,0xBB,0xA6,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x51,0x04,0xFF,0xB3,0x04,0xFF,0x93,0x04,0xFF,0xB3,0x04,0xFF,0x92,0x04,0xFF,0xD7,0x65,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD7,0x65,0xFF,0x35,0x35,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0xD3,0x2C,0xFF,0xBE,0xF7,0xFF,0xBE,0xE7,0xFF,0x34,0x35,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0x35,0x3D,0xFF,0xF4,0x2C,0xFF,0x9E,0xE7,0xFF,0x5D,0xD7,0xFF,0x51,0x04,0xFF,0xB3,0x04,0xFF,0x93,0x04,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x52,0x04,0xFF,
    0x51,0x04,0xFF,0x9E,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x35,0x35,0xFF,0x92,0x04,0xFF,0x15,0x25,0xFF,0x7D,0xD7,0xFF,0x52,0x04,0xFF,0x72,0x04,0xFF,0xFB,0xB6,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x59,0x86,0xFF,0x52,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x51,0x04,0xFF,0x76,0x4D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x96,0x4D,0xFF,0x93,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x51,0x04,0xFF,0x7D,0xD7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x5D,0xCF,0xFF,0x51,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x92,0x04,0xFF,0x9E,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xF7,0xFF,0xB3,0x0C,0xFF,0x72,0x04,0xFF,0xD7,0x5D,0xFF,0xFF,0xFF,0xFF,0x31,0x04,0xFF,0x72,0x04,0xFF,0x79,0x96,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x92,0x04,0xFF,0x92,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x51,0x04,0xFF,0x9A,0x96,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3C,0xC7,0xFF,0x51,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x92,0x04,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x59,0x7E,0xFF,0x39,0x7E,0xFF,0x39,0x7E,0xFF,0x39,0x7E,0xFF,0x39,0x7E,0xFF,0x39,0x7E,0xFF,0x39,0x7E,0xFF,0x39,0x7E,0xFF,0x39,0x7E,0xFF,0x39,0x7E,0xFF,0x39,0x7E,0xFF,0x39,0x7E,0xFF,0x39,0x7E,0xFF,0x39,0x7E,0xFF,0x39,0x7E,0xFF,0x39,0x7E,0xFF,0x39,0x7E,0xFF,0x39,0x7E,0xFF,0x39,0x7E,0xFF,0x39,0x7E,0xFF,
    0x39,0x7E,0xFF,0x39,0x7E,0xFF,0x39,0x7E,0xFF,0x39,0x7E,0xFF,0x39,0x7E,0xFF,0xF8,0x6D,0xFF,0xDF,0xF7,0xFF,0xDF,0xEF,0xFF,0x38,0x76,0xFF,0x39,0x7E,0xFF,0x39,0x7E,0xFF,0x39,0x7E,0xFF,0x39,0x7E,0xFF,0x39,0x7E,0xFF,0x39,0x7E,0xFF,0xF8,0x6D,0xFF,0xBE,0xEF,0xFF,0x5D,0xD7,0xFF,0x51,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x93,0x04,0xFF,0x92,0x04,0xFF,0x9E,0xDF,0xFF,0xFF,0xFF,0xFF,0x9E,0xE7,0xFF,0x51,0x04,0xFF,0x72,0x04,0xFF,0x9A,0xA6,0xFF,0xFF,0xFF,0xFF,0xB3,0x04,0xFF,0x92,0x04,0xFF,0x76,0x3D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBE,0xEF,0xFF,0xD4,0x1C,0xFF,0x52,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x72,0x04,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x72,0x04,0xFF,0xB3,0x04,0xFF,0x72,0x04,0xFF,0x59,0x86,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF4,0x1C,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,
    0x72,0x04,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0xF0,0x03,0xFF,0xBE,0xEF,0xFF,0x9E,0xDF,0xFF,0x51,0x04,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x31,0x04,0xFF,0x9E,0xDF,0xFF,0x5D,0xD7,0xFF,0x51,0x04,0xFF,0x92,0x04,0xFF,0xB7,0x4D,0xFF,0xFF,0xFF,0xFF,0xBE,0xE7,0xFF,0xBE,0xE7,0xFF,0xBE,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDB,0xAE,0xFF,0x52,0x04,0xFF,0x72,0x04,0xFF,0x1C,0xBF,0xFF,0xFF,0xFF,0xFF,0x35,0x2D,0xFF,0x93,0x04,0xFF,0x93,0x04,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFB,0xAE,0xFF,0xB3,0x0C,0xFF,0x92,0x04,0xFF,0xB3,0x04,0xFF,0x52,0x04,0xFF,0xDF,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x96,0x4D,0xFF,0x93,0x04,0xFF,0x51,0x04,0xFF,
    0x9E,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x18,0x7E,0xFF,0x92,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x93,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x31,0x04,0xFF,0xBE,0xEF,0xFF,0x9E,0xE7,0xFF,0x92,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xF4,0x1C,0xFF,0xFF,0xFF,0xFF,0x5D,0xD7,0xFF,0x51,0x04,0xFF,0x92,0x04,0xFF,0xB7,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD7,0x5D,0xFF,0x92,0x04,0xFF,0x92,0x04,0xFF,0x9E,0xDF,0xFF,0xFF,0xFF,0xFF,0x76,0x4D,0xFF,0x92,0x04,0xFF,0x92,0x04,0xFF,0xBE,0xEF,0xFF,0xFF,0xFF,0xFF,0x9E,0xE7,0xFF,0xFC,0xB6,0xFF,0x5D,0xCF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD3,0x14,0xFF,0xB3,0x04,0xFF,0x72,0x04,0xFF,0x5D,0xC7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x96,0x4D,0xFF,0x93,0x04,0xFF,0x51,0x04,0xFF,0xBE,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x9E,0xDF,0xFF,0x31,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x72,0x04,0xFF,0xF8,0x6D,0xFF,0xDB,0xA6,0xFF,0x52,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x31,0x04,0xFF,0xBE,0xEF,0xFF,0x9E,0xE7,0xFF,0x92,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x52,0x04,0xFF,0x79,0x86,0xFF,0xFF,0xFF,0xFF,0x5D,0xCF,0xFF,0x51,0x04,0xFF,0x92,0x04,0xFF,0xD7,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x35,0x35,0xFF,
    0x93,0x04,0xFF,0xB3,0x0C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x38,0x6E,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x1C,0xB7,0xFF,0xDF,0xF7,0xFF,0xAF,0x03,0xFF,0x31,0x04,0xFF,0xB7,0x5D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD7,0x6D,0xFF,0x92,0x04,0xFF,0x72,0x04,0xFF,0x5D,0xCF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x96,0x4D,0xFF,0x93,0x04,0xFF,0x51,0x04,0xFF,0xBE,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x55,0x3D,0xFF,0x92,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x93,0x04,0xFF,0xD3,0x1C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x76,0x55,0xFF,0x72,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x31,0x04,0xFF,0xBE,0xEF,0xFF,0x9E,0xE7,0xFF,0x92,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xD3,0x14,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0x5D,0xCF,0xFF,0x51,0x04,0xFF,0x93,0x04,0xFF,0x76,0x3D,0xFF,0x1C,0xBF,0xFF,0xFB,0xAE,0xFF,0xFB,0xAE,0xFF,0xDB,0xAE,0xFF,0x5D,0xCF,0xFF,0xFF,0xFF,0xFF,0xB3,0x04,0xFF,0x93,0x04,0xFF,0xF4,0x1C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xB6,0xFF,0x52,0x04,0xFF,0x72,0x04,0xFF,0x79,0x96,0xFF,0xFF,0xFF,0xFF,0x52,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x0C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x76,0x4D,0xFF,0x93,0x04,0xFF,0x52,0x04,0xFF,0xDF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x96,0x4D,0xFF,0x93,0x04,0xFF,0x51,0x04,0xFF,0xBE,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x72,0x04,0xFF,0x93,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x72,0x04,0xFF,0xDF,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x14,0x35,0xFF,0x72,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,
    0xB3,0x04,0xFF,0x31,0x04,0xFF,0xBE,0xEF,0xFF,0x9E,0xE7,0xFF,0x92,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x52,0x04,0xFF,0x7D,0xD7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x5D,0xCF,0xFF,0x51,0x04,0xFF,0xB3,0x04,0xFF,0x92,0x04,0xFF,0x52,0x04,0xFF,0x52,0x04,0xFF,0x52,0x04,0xFF,0x31,0x04,0xFF,0xB7,0x55,0xFF,0xDF,0xF7,0xFF,0x51,0x04,0xFF,0x92,0x04,0xFF,0xB7,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBE,0xEF,0xFF,0x31,0x04,0xFF,0x93,0x04,0xFF,0x55,0x35,0xFF,0xFF,0xFF,0xFF,0x14,0x25,0xFF,0xB3,0x04,0xFF,0x92,0x04,0xFF,0x55,0x3D,0xFF,0xF8,0x6D,0xFF,0x72,0x04,0xFF,0xB3,0x04,0xFF,0x72,0x04,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x96,0x4D,0xFF,0x93,0x04,0xFF,0x51,0x04,0xFF,0xBE,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x93,0x0C,0xFF,0x72,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,
    0xB3,0x04,0xFF,0x92,0x04,0xFF,0x52,0x04,0xFF,0x9E,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x76,0x4D,0xFF,0x51,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x31,0x04,0xFF,0xBE,0xEF,0xFF,0x9E,0xE7,0xFF,0x92,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x93,0x04,0xFF,0x52,0x04,0xFF,0x1C,0xBF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x5D,0xCF,0xFF,0x51,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0xB3,0x04,0xFF,0x92,0x04,0xFF,0x18,0x66,0xFF,0xFC,0xB6,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0x7A,0x96,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0xF7,0xFF,0x72,0x04,0xFF,0xB3,0x04,0xFF,0x92,0x04,0xFF,0xFF,0xFF,0xFF,0x39,0x7E,0xFF,0x72,0x04,0xFF,0xB3,0x04,0xFF,0x93,0x04,0xFF,0x92,0x04,0xFF,0xB3,0x04,0xFF,0x72,0x04,0xFF,0x18,0x7E,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x96,0x4D,0xFF,0x93,0x04,0xFF,0x51,0x04,0xFF,0xBE,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x18,0x76,0xFF,0x31,0x04,0xFF,0x72,0x04,0xFF,0x92,0x04,0xFF,0x93,0x04,0xFF,0x93,0x04,0xFF,0x92,0x04,0xFF,0x72,0x04,0xFF,0x31,0x04,0xFF,0x76,0x45,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDB,0xAE,0xFF,0x72,0x04,0xFF,0x51,0x04,0xFF,0x10,0x04,0xFF,0xBE,0xEF,0xFF,0x9E,0xE7,0xFF,0x72,0x04,0xFF,0x92,0x04,0xFF,0x31,0x04,0xFF,0x14,0x2D,0xFF,0xDF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3C,0xCF,0xFF,0x31,0x04,0xFF,0x92,0x04,0xFF,0x92,0x04,0xFF,0x92,0x04,0xFF,0x92,0x04,0xFF,0x92,0x04,0xFF,0x52,0x04,0xFF,0xF8,0x65,0xFF,0xF8,0x5D,0xFF,0x72,0x04,0xFF,0x31,0x04,0xFF,0xFB,0xB6,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD3,0x14,0xFF,0x72,0x04,0xFF,0x72,0x04,0xFF,0xDF,0xF7,0xFF,0xFF,0xFF,0xFF,0x51,0x04,0xFF,0x92,0x04,0xFF,0x92,0x04,0xFF,0x93,0x04,0xFF,0x92,0x04,0xFF,0x51,0x04,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x76,0x45,0xFF,0x72,0x04,0xFF,0x31,0x04,0xFF,0x9E,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFB,0xAE,0xFF,0x39,0x86,0xFF,0xB7,0x5D,0xFF,0xB7,0x55,0xFF,0xF8,0x75,0xFF,0x7A,0x96,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3C,0xC7,0xFF,0xD7,0x65,0xFF,0xBF,0xF7,0xFF,0xBE,0xE7,0xFF,0x55,0x3D,0xFF,0x38,0x7E,0xFF,0x9E,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x9E,0xE7,0xFF,0xD7,0x65,0xFF,0x18,0x76,0xFF,0x18,0x76,0xFF,0x18,0x76,0xFF,0x18,0x76,0xFF,0x18,0x76,0xFF,0xF8,0x6D,0xFF,0xFB,0xAE,0xFF,0x7A,0x9E,0xFF,0xF8,0x6D,0xFF,0xF8,0x6D,0xFF,0xBE,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0x7A,0x96,0xFF,0xF8,0x6D,0xFF,0xD7,0x6D,0xFF,0x7D,0xD7,0xFF,0xFF,0xFF,0xFF,0xDF,0xEF,0xFF,0xD7,0x6D,0xFF,0xD7,0x65,0xFF,0xD7,0x65,0xFF,0xD7,0x6D,0xFF,0xDF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7A,0x9E,0xFF,0xF8,0x6D,0xFF,0xD7,0x65,0xFF,0xDF,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
};
const lv_img_dsc_t ui_img_arduinoeasy_logoprint_png = {
    .header.always_zero = 0,
    .header.w = 76,
    .header.h = 18,
    .data_size = sizeof(ui_img_arduinoeasy_logoprint_png_data),
    .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
    .data = ui_img_arduinoeasy_logoprint_png_data
};

