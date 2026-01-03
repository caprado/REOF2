#ifndef RENDER_STATE_H
#define RENDER_STATE_H

#include <stdint.h>

/**
 * @category graphics/render
 * @description Rendering state management API
 */

// Main rendering state function
void setRenderingState(uint8_t stateValue);

// State query functions
uint32_t getRenderState1(void);
uint32_t getRenderState2(void);
uint8_t getRenderFlags(void);

#endif // RENDER_STATE_H
