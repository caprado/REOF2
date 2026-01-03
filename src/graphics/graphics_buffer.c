#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "graphics_buffer.h"

// Global graphics buffer context instance
GraphicsBufferContext g_graphicsBuffer = {0};

/**
 * @category graphics/memory
 * @status complete
 * @original func_0018db00 (thunk to 0x1a0a10)
 * @address 0x0018db00
 * @description Initialize a graphics buffer page for rendering.
 *              On PS2, this configured VRAM page parameters via a chain:
 *              0x18db00 -> 0x1a0a10 (sets a0=0x2a0450, jumps to 0x1a0fd0)
 *              On Windows, this is a stub that validates the buffer.
 * @windows_compatibility high - PS2 VRAM setup not needed
 * @author caprado
 */
void initializeGraphicsBufferPage(void* buffer) {
    // On PS2, this thunk chain set up buffer page parameters
    // For Windows with OpenGL, we don't need VRAM page configuration
    // Just validate the buffer exists
    if (buffer == NULL) {
        fprintf(stderr, "[GraphicsBuffer] WARNING: NULL buffer passed to initializeGraphicsBufferPage\n");
        return;
    }

    // Buffer is valid - no PS2-specific setup needed on Windows
    // The actual rendering will use OpenGL framebuffers instead
}

/**
 * @category graphics/memory
 * @status complete
 * @original func_0018dba0
 * @address 0x0018dba0
 * @description Select graphics buffer based on current render state.
 *              Checks if render state is valid (0, 1, or 2), then selects
 *              the appropriate buffer from the buffer array using the
 *              current buffer index. Initializes the selected buffer and
 *              sets up base/end pointers for the 512KB buffer region.
 * @windows_compatibility medium - PS2 buffer management abstracted
 * @author caprado
 */
void selectGraphicsBuffer(void) {
    uint32_t state = g_graphicsBuffer.renderState;

    // Check if render state is valid (0, 1, or 2)
    // Original: beq $a0, 1 -> branch
    //           beq $a0, 2 -> branch
    //           beqz $a0 -> branch
    //           else -> return (goto 0x18dc24)
    if (state != 0 && state != 1 && state != 2) {
        // Invalid state - do nothing
        return;
    }

    // Get buffer index and select buffer from array
    // Original: v1 = g_00290374 (buffer index)
    //           v0 = 0x00290384 (buffer array base)
    //           v1 = v1 << 2 (multiply by 4 for pointer size)
    //           v0 = v0 + v1 (index into array)
    //           a0 = *(v0) (load buffer pointer)
    uint32_t index = g_graphicsBuffer.bufferIndex;
    void* selectedBuffer = g_graphicsBuffer.buffers[index];

    // Call buffer initialization function
    // Original: jal 0x18db00 (thunk to 0x1a0a10 - buffer page setup)
    // Note: In delay slot, a0 is loaded with the buffer pointer
    initializeGraphicsBufferPage(selectedBuffer);

    // The result (v0) from func_0018db10 is stored as current buffer
    // Original: sw $v0, 0x378($at) -> g_00290378 = v0
    // For Windows, we assume func_0018db10 returns the processed buffer
    // or we use the selected buffer directly
    g_graphicsBuffer.currentBuffer = selectedBuffer;

    // Set buffer base pointer (same as current buffer)
    // Original: lw $a0, 0x378($at) -> load current buffer
    //           sw $a0, 0x380($at) -> store as base
    g_graphicsBuffer.bufferBase = g_graphicsBuffer.currentBuffer;

    // Calculate and set buffer end pointer (base + 512KB)
    // Original: lui $v1, 8 -> v1 = 0x80000 (512KB)
    //           addu $v1, $a0, $v1 -> v1 = base + 512KB
    //           sw $v1, 0x37c($at) -> store as end
    g_graphicsBuffer.bufferEnd = (uint8_t*)g_graphicsBuffer.bufferBase + GRAPHICS_BUFFER_SIZE;
}

/**
 * @category graphics/memory
 * @status complete
 * @description Initialize graphics buffer context for Windows.
 *              Allocates two 512KB buffers to replace PS2 VRAM pages.
 * @windows_compatibility high
 * @author caprado
 */
void initGraphicsBufferContext(void) {
    printf("[GraphicsBuffer] Initializing graphics buffer context...\n");

    // Initialize state
    g_graphicsBuffer.renderState = 0;
    g_graphicsBuffer.bufferIndex = 0;
    g_graphicsBuffer.currentBuffer = NULL;
    g_graphicsBuffer.bufferEnd = NULL;
    g_graphicsBuffer.bufferBase = NULL;

    // Allocate buffers (512KB each, matching PS2 VRAM page size)
    for (int i = 0; i < MAX_GRAPHICS_BUFFERS; i++) {
        g_graphicsBuffer.buffers[i] = malloc(GRAPHICS_BUFFER_SIZE);
        if (g_graphicsBuffer.buffers[i] == NULL) {
            fprintf(stderr, "[GraphicsBuffer] ERROR: Failed to allocate buffer %d\n", i);
            // Clean up previously allocated buffers
            for (int j = 0; j < i; j++) {
                free(g_graphicsBuffer.buffers[j]);
                g_graphicsBuffer.buffers[j] = NULL;
            }
            return;
        }
        printf("[GraphicsBuffer]   Buffer %d allocated (512KB)\n", i);
    }

    printf("[GraphicsBuffer] Graphics buffer context initialized\n");
}

/**
 * @category graphics/memory
 * @status complete
 * @description Shutdown graphics buffer context and free allocated memory.
 * @windows_compatibility high
 * @author caprado
 */
void shutdownGraphicsBufferContext(void) {
    printf("[GraphicsBuffer] Shutting down graphics buffer context...\n");

    // Free allocated buffers
    for (int i = 0; i < MAX_GRAPHICS_BUFFERS; i++) {
        if (g_graphicsBuffer.buffers[i] != NULL) {
            free(g_graphicsBuffer.buffers[i]);
            g_graphicsBuffer.buffers[i] = NULL;
            printf("[GraphicsBuffer]   Buffer %d freed\n", i);
        }
    }

    // Clear pointers
    g_graphicsBuffer.currentBuffer = NULL;
    g_graphicsBuffer.bufferEnd = NULL;
    g_graphicsBuffer.bufferBase = NULL;

    printf("[GraphicsBuffer] Graphics buffer context shutdown complete\n");
}
