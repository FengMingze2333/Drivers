#ifndef __OLED_H
#define __OLED_H

#include "stm32f4xx_hal.h"

typedef enum
{
  LEFT = 0U,
  RIGHT = !LEFT
} FlushStatus;

//initialize OLED
void oled_init(void);
//enable pixel
void oled_set_pixel(int16_t x, int16_t y);
//disable pixel
void oled_reset_pixel(int16_t x, int16_t y);
//fill area
void oled_area_fill(int16_t x0, int16_t y0, int16_t w, int16_t h);
//clear area
void oled_area_clear(int16_t x0, int16_t y0, int16_t w, int16_t h);
//fully fill OLED
void oled_fill(void);
//fully clear OLED
void oled_clear(void);
//draw ASCII character
void oled_draw_ASCII(int16_t x, int16_t y, char ch[], FlagStatus mode, FlushStatus flush);

#endif
