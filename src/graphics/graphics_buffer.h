#ifndef GRAPHICS_BUFFER_H
#define GRAPHICS_BUFFER_H

#include <stdint.h>

/**
 * @file graphics_buffer.h
 * @brief Graphics buffer selection and management system
 * @description Manages double-buffered graphics memory for rendering.
 *              On PS2, this managed VRAM buffer pages. On Windows,
 *              this abstracts the concept for OpenGL framebuffers.
 */

// Buffer size constant (512KB per buffer on PS2)
#define GRAPHICS_BUFFER_SIZE 0x80000

// Maximum number of graphics buffers
#define MAX_GRAPHICS_BUFFERS 2

/**
 * @brief Graphics buffer context structure
 * @description Replaces PS2 globals at 0x00290370-0x00290384
 */
typedef struct GraphicsBufferContext {
    uint32_t renderState;            // Original: 0x00290370 - Render state (0, 1, 2 valid)
    uint32_t bufferIndex;            // Original: 0x00290374 - Current buffer index
    void* currentBuffer;             // Original: 0x00290378 - Selected buffer pointer
    void* bufferEnd;                 // Original: 0x0029037c - Buffer end pointer (base + size)
    void* bufferBase;                // Original: 0x00290380 - Buffer base pointer
    void* buffers[MAX_GRAPHICS_BUFFERS]; // Original: 0x00290384 - Buffer array
} GraphicsBufferContext;

/**
 * @brief Global graphics buffer context
 */
extern GraphicsBufferContext g_graphicsBuffer;

/**
 * @brief Initialize a graphics buffer page
 * @original func_0018db00 (thunk to 0x1a0a10)
 * @param buffer Pointer to the buffer to initialize
 * @description On PS2, this configured VRAM page parameters.
 *              On Windows, validates the buffer (no VRAM setup needed).
 */
void initializeGraphicsBufferPage(void* buffer);

/**
 * @brief Select graphics buffer based on current render state
 * @original func_0018dba0 at 0x0018dba0
 * @description Checks render state and selects the appropriate graphics buffer.
 *              Only processes if render state is 0, 1, or 2.
 *              Calls buffer initialization function and sets up memory pointers.
 */
void selectGraphicsBuffer(void);

/**
 * @brief Initialize graphics buffer context
 * @description Allocates buffers and initializes context for Windows
 */
void initGraphicsBufferContext(void);

/**
 * @brief Shutdown graphics buffer context
 * @description Frees allocated buffers
 */
void shutdownGraphicsBufferContext(void);

#endif // GRAPHICS_BUFFER_H
