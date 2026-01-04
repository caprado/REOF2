#ifndef DISPLAY_BRIGHTNESS_H
#define DISPLAY_BRIGHTNESS_H

#include <stdint.h>

void initializeDisplayBrightness(void);

void setDisplayBrightness(int32_t brightness);

int32_t getDisplayBrightness(void);

void clearDisplayStateBuffer(void);

#endif
