#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "../lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_BATTERY_32PX
#define LV_ATTRIBUTE_IMG_BATTERY_32PX
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BATTERY_32PX uint8_t battery_32px_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Blue: 2 bit, Green: 3 bit, Red: 3 bit, Alpha 8 bit */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x97, 0xe8, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xf0, 0x97, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x97, 0xfc, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x97, 0x28, 0x97, 0x4f, 0x97, 0x4f, 0x97, 0xfc, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0x5f, 0x97, 0x4f, 0x97, 0x30, 0xff, 0x00, 
  0x97, 0x74, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0x90, 
  0x77, 0xec, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xfc, 
  0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 
  0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 
  0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 
  0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xfb, 0x97, 0x90, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 
  0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0x8c, 0x97, 0x94, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 
  0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xd7, 0xbb, 0x14, 0x97, 0xf3, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 
  0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xfb, 0x97, 0x38, 0x97, 0x64, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 
  0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0x88, 0xff, 0x00, 0x97, 0xcf, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 
  0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xd3, 0xbb, 0x07, 0x97, 0x37, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 
  0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xfb, 0x97, 0x34, 0x00, 0x00, 0x97, 0x9c, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 
  0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0x84, 0x00, 0x00, 0xbb, 0x13, 0x97, 0xf4, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 
  0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xd0, 0xbf, 0x07, 0x00, 0x00, 0xff, 0x00, 0xdf, 0x0f, 0xbb, 0x1f, 0x97, 0x2b, 0x97, 0x38, 0x97, 0x4c, 0x97, 0x58, 0x97, 0xf3, 0x97, 0xff, 0x97, 0xff, 
  0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x97, 0x84, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 
  0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xfb, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xc4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x97, 0x6b, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 
  0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0x47, 0x00, 0x00, 0x00, 0x00, 0x97, 0x4f, 0x97, 0xfc, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 
  0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xc4, 0xff, 0x00, 0x00, 0x00, 0x97, 0x38, 0x97, 0xf7, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 
  0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0x40, 0x00, 0x00, 0x97, 0x28, 0x97, 0xec, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 
  0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xc0, 0x00, 0x00, 0x97, 0x18, 0x97, 0xdf, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 
  0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0x3c, 0xbb, 0x0c, 0x97, 0xcc, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 
  0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xbc, 0xbb, 0x07, 0x97, 0xb8, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 
  0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0x3b, 0x97, 0x9f, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 
  0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x73, 0xd4, 0x4e, 0x88, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 
  0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 
  0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 
  0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 
  0x97, 0xe0, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xf4, 
  0x97, 0x4f, 0x97, 0xf0, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xff, 0x97, 0xf7, 0x97, 0x68, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Blue: 5 bit, Green: 6 bit, Red: 5 bit, Alpha 8 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x1a, 0x75, 0xe8, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xf0, 0x3b, 0x85, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfa, 0x74, 0xfc, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x7b, 0x95, 0x28, 0x1a, 0x75, 0x4f, 0x1a, 0x75, 0x4f, 0x1a, 0x75, 0xfc, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0x5f, 0x1a, 0x75, 0x4f, 0x9b, 0x8d, 0x30, 0xff, 0xff, 0x00, 
  0x5a, 0x85, 0x74, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x3a, 0x85, 0x90, 
  0xb8, 0x74, 0xec, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0xfa, 0x74, 0xfc, 
  0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 
  0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 
  0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 
  0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xfb, 0x3a, 0x7d, 0x90, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 
  0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x3a, 0x7d, 0x8c, 0x3a, 0x7d, 0x94, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 
  0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x7d, 0xd7, 0x1d, 0xa6, 0x14, 0x1a, 0x75, 0xf3, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 
  0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xfb, 0x7b, 0x85, 0x38, 0x3a, 0x7d, 0x64, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 
  0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x3a, 0x7d, 0x88, 0xff, 0xff, 0x00, 0x3a, 0x7d, 0xcf, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 
  0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x7d, 0xd3, 0xbb, 0x95, 0x07, 0x7b, 0x85, 0x37, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 
  0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xfb, 0x5a, 0x85, 0x34, 0x00, 0x00, 0x00, 0x3a, 0x7d, 0x9c, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 
  0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x3a, 0x7d, 0x84, 0x00, 0x00, 0x00, 0xda, 0x9d, 0x13, 0x1a, 0x7d, 0xf4, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 
  0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x7d, 0xd0, 0xba, 0xae, 0x07, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0xfe, 0xce, 0x0f, 0xbc, 0x95, 0x1f, 0x3a, 0x7d, 0x2b, 0x7b, 0x8d, 0x38, 0x5a, 0x85, 0x4c, 0x1a, 0x75, 0x58, 0x1a, 0x75, 0xf3, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 
  0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x7b, 0x85, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5a, 0x85, 0x84, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 
  0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xfb, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x7d, 0xc4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x85, 0x6b, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 
  0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x5a, 0x85, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5b, 0x85, 0x4f, 0x1a, 0x75, 0xfc, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 
  0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x7d, 0xc4, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x5b, 0x8d, 0x38, 0x1a, 0x75, 0xf7, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 
  0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x5a, 0x85, 0x40, 0x00, 0x00, 0x00, 0x7b, 0x8d, 0x28, 0x1a, 0x75, 0xec, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 
  0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x7d, 0xc0, 0x00, 0x00, 0x00, 0x7b, 0x85, 0x18, 0x1a, 0x7d, 0xdf, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 
  0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x5a, 0x85, 0x3c, 0x3d, 0x9e, 0x0c, 0x1a, 0x7d, 0xcc, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 
  0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x7d, 0xbc, 0xbb, 0x95, 0x07, 0x3a, 0x7d, 0xb8, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 
  0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x5a, 0x85, 0x3b, 0x3a, 0x7d, 0x9f, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 
  0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x56, 0x64, 0xd4, 0xce, 0x42, 0x88, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 
  0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 
  0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 
  0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 
  0x1a, 0x7d, 0xe0, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xf4, 
  0x7b, 0x85, 0x4f, 0x1a, 0x75, 0xf0, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xff, 0x1a, 0x75, 0xf7, 0x3a, 0x85, 0x68, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format:  Blue: 5 bit Green: 6 bit, Red: 5 bit, Alpha 8 bit  BUT the 2  color bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x75, 0x1a, 0xe8, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xf0, 0x85, 0x3b, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x74, 0xfa, 0xfc, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x95, 0x7b, 0x28, 0x75, 0x1a, 0x4f, 0x75, 0x1a, 0x4f, 0x75, 0x1a, 0xfc, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0x5f, 0x75, 0x1a, 0x4f, 0x8d, 0x9b, 0x30, 0xff, 0xff, 0x00, 
  0x85, 0x5a, 0x74, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x85, 0x3a, 0x90, 
  0x74, 0xb8, 0xec, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x74, 0xfa, 0xfc, 
  0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 
  0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 
  0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 
  0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xfb, 0x7d, 0x3a, 0x90, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 
  0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x7d, 0x3a, 0x8c, 0x7d, 0x3a, 0x94, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 
  0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x7d, 0x1a, 0xd7, 0xa6, 0x1d, 0x14, 0x75, 0x1a, 0xf3, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 
  0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xfb, 0x85, 0x7b, 0x38, 0x7d, 0x3a, 0x64, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 
  0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x7d, 0x3a, 0x88, 0xff, 0xff, 0x00, 0x7d, 0x3a, 0xcf, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 
  0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x7d, 0x1a, 0xd3, 0x95, 0xbb, 0x07, 0x85, 0x7b, 0x37, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 
  0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xfb, 0x85, 0x5a, 0x34, 0x00, 0x00, 0x00, 0x7d, 0x3a, 0x9c, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 
  0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x7d, 0x3a, 0x84, 0x00, 0x00, 0x00, 0x9d, 0xda, 0x13, 0x7d, 0x1a, 0xf4, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 
  0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x7d, 0x1a, 0xd0, 0xae, 0xba, 0x07, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0xce, 0xfe, 0x0f, 0x95, 0xbc, 0x1f, 0x7d, 0x3a, 0x2b, 0x8d, 0x7b, 0x38, 0x85, 0x5a, 0x4c, 0x75, 0x1a, 0x58, 0x75, 0x1a, 0xf3, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 
  0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x85, 0x7b, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x85, 0x5a, 0x84, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 
  0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xfb, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x7d, 0x1a, 0xc4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x85, 0x3a, 0x6b, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 
  0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x85, 0x5a, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x85, 0x5b, 0x4f, 0x75, 0x1a, 0xfc, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 
  0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x7d, 0x1a, 0xc4, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x8d, 0x5b, 0x38, 0x75, 0x1a, 0xf7, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 
  0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x85, 0x5a, 0x40, 0x00, 0x00, 0x00, 0x8d, 0x7b, 0x28, 0x75, 0x1a, 0xec, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 
  0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x7d, 0x1a, 0xc0, 0x00, 0x00, 0x00, 0x85, 0x7b, 0x18, 0x7d, 0x1a, 0xdf, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 
  0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x85, 0x5a, 0x3c, 0x9e, 0x3d, 0x0c, 0x7d, 0x1a, 0xcc, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 
  0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x7d, 0x1a, 0xbc, 0x95, 0xbb, 0x07, 0x7d, 0x3a, 0xb8, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 
  0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x85, 0x5a, 0x3b, 0x7d, 0x3a, 0x9f, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 
  0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x64, 0x56, 0xd4, 0x42, 0xce, 0x88, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 
  0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 
  0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 
  0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 
  0x7d, 0x1a, 0xe0, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xf4, 
  0x85, 0x7b, 0x4f, 0x75, 0x1a, 0xf0, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xff, 0x75, 0x1a, 0xf7, 0x85, 0x3a, 0x68, 
#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format:  Blue: 8 bit, Green: 8 bit, Red: 8 bit, Alpha: 8 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xcf, 0xa1, 0x74, 0xe8, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0xa0, 0x73, 0xf0, 0xda, 0xa3, 0x7f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcf, 0x9e, 0x72, 0xfc, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xd4, 0x9f, 0x74, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xd9, 0xae, 0x8f, 0x28, 0xcd, 0xa0, 0x72, 0x4f, 0xcd, 0xa0, 0x72, 0x4f, 0xce, 0x9f, 0x71, 0xfc, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xd0, 0xa0, 0x71, 0x5f, 0xcd, 0xa0, 0x72, 0x4f, 0xd5, 0xb0, 0x87, 0x30, 0xff, 0xff, 0xff, 0x00, 
  0xd3, 0xa7, 0x7d, 0x74, 0xce, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xd2, 0xa6, 0x7d, 0x90, 
  0xc1, 0x96, 0x6d, 0xec, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcd, 0x9e, 0x72, 0xfc, 
  0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 
  0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 
  0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 
  0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xfb, 0xd2, 0xa6, 0x7b, 0x90, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 
  0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xd3, 0xa6, 0x7a, 0x8c, 0xd0, 0xa3, 0x7a, 0x94, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 
  0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xd0, 0xa1, 0x75, 0xd7, 0xe6, 0xc2, 0x9d, 0x14, 0xcf, 0xa1, 0x74, 0xf3, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 
  0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0xa0, 0x73, 0xfb, 0xd6, 0xad, 0x84, 0x38, 0xd3, 0xa5, 0x7c, 0x64, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 
  0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xd2, 0xa5, 0x7c, 0x88, 0xff, 0xff, 0xff, 0x00, 0xd1, 0xa3, 0x78, 0xcf, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 
  0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xd1, 0xa1, 0x76, 0xd3, 0xda, 0xb6, 0x91, 0x07, 0xd9, 0xae, 0x84, 0x37, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 
  0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x73, 0xfb, 0xd3, 0xa8, 0x81, 0x34, 0x00, 0x00, 0x00, 0x00, 0xd1, 0xa4, 0x79, 0x9c, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 
  0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xd2, 0xa4, 0x7a, 0x84, 0x00, 0x00, 0x00, 0x00, 0xd4, 0xb8, 0x9b, 0x13, 0xd0, 0xa1, 0x75, 0xf4, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 
  0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xd0, 0xa1, 0x76, 0xd0, 0xd4, 0xd4, 0xaa, 0x07, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0xee, 0xdd, 0xcc, 0x0f, 0xde, 0xb4, 0x94, 0x1f, 0xcf, 0xa6, 0x76, 0x2b, 0xd6, 0xae, 0x8a, 0x38, 0xd3, 0xa7, 0x7f, 0x4c, 0xd0, 0xa2, 0x73, 0x58, 0xcf, 0x9f, 0x73, 0xf3, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 
  0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xd6, 0xad, 0x84, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd4, 0xa8, 0x7d, 0x84, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 
  0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xd0, 0xa0, 0x73, 0xfb, 0xce, 0x9f, 0x72, 0xff, 0xce, 0x9f, 0x72, 0xff, 0xce, 0x9f, 0x72, 0xff, 0xd0, 0xa1, 0x76, 0xc4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd1, 0xa5, 0x7d, 0x6b, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 
  0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xd3, 0xa7, 0x7f, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd5, 0xa7, 0x7d, 0x4f, 0xcf, 0x9f, 0x72, 0xfc, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 
  0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xd0, 0xa2, 0x76, 0xc4, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd6, 0xa9, 0x86, 0x38, 0xcf, 0xa0, 0x73, 0xf7, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 
  0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xd3, 0xa8, 0x81, 0x40, 0x00, 0x00, 0x00, 0x00, 0xd8, 0xac, 0x85, 0x28, 0xd0, 0xa0, 0x74, 0xec, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 
  0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xd0, 0xa2, 0x77, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xd6, 0xad, 0x84, 0x18, 0xcf, 0xa1, 0x76, 0xdf, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 
  0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xd1, 0xa7, 0x81, 0x3c, 0xeb, 0xc4, 0x9c, 0x0c, 0xd0, 0xa2, 0x77, 0xcc, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 
  0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0xa1, 0x76, 0xbc, 0xda, 0xb6, 0x91, 0x07, 0xd1, 0xa3, 0x77, 0xb8, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 
  0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xce, 0x9f, 0x72, 0xff, 0xd3, 0xa8, 0x81, 0x3b, 0xd0, 0xa3, 0x79, 0x9f, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 
  0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xae, 0x87, 0x63, 0xd4, 0x71, 0x59, 0x43, 0x88, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 
  0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 
  0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 
  0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 
  0xd0, 0xa2, 0x77, 0xe0, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0xa0, 0x74, 0xf4, 
  0xd5, 0xab, 0x81, 0x4f, 0xcf, 0x9f, 0x73, 0xf0, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xcf, 0x9f, 0x72, 0xff, 0xd0, 0xa0, 0x74, 0xf7, 0xd2, 0xa6, 0x7d, 0x68, 
#endif
};

const lv_img_dsc_t battery_32px = {
  .header.always_zero = 0,
  .header.w = 16,
  .header.h = 32,
  .data_size = 512 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .data = battery_32px_map,
};

