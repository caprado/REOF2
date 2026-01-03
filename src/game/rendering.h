#ifndef RENDERING_H
#define RENDERING_H

#include <stdint.h>

/**
 * @category game/rendering
 * @description Rendering system API
 */

// Initialization and shutdown
void initializeRendering(void);
void shutdownRendering(void);

// PS2 rendering functions (from decompiled code)
void setRenderMode(void);
void processTextureData(void);
int initializeRenderBuffer(void);
void initializeRenderingSystem(void);  // Entry point at 0x00195EC0
void processRenderingCounter(void);

#endif // RENDERING_H
