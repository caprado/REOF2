#ifndef RENDER_STATE_MANAGER_H
#define RENDER_STATE_MANAGER_H

#include <stdint.h>
#include <stdbool.h>

/**
 * @file render_state_manager.h
 * @brief OpenGL rendering state management
 *
 * Replaces PS2 Graphics Synthesizer (GS) state configuration with OpenGL equivalents.
 * The PS2 version wrote state values to VRAM addresses (0x290310, 0x28ffc8, 0x3137ac).
 * This implementation uses OpenGL state management instead.
 */

// Named state constants (reverse-engineered from usage patterns)
// These replace the magic numbers seen in the original code
typedef enum RenderStateMode {
    RENDER_STATE_INIT       = 0x0d,  // 13 - Initial render state
    RENDER_STATE_BLEND_1    = 0x5f,  // 95 - First blend configuration
    RENDER_STATE_BLEND_2    = 0x60,  // 96 - Second blend configuration
    RENDER_STATE_TEXTURE    = 0x63,  // 99 - Texture mode configuration
    RENDER_STATE_FINAL      = 0x6c,  // 108 - Final render state
} RenderStateMode;

/**
 * @category graphics/render
 * @status complete
 * @original func_001aefd0
 * @address 0x001aefd0
 * @description Applies OpenGL rendering state based on PS2 state ID.
 *              Replaces PS2 VRAM writes (0x290310, 0x28ffc8, 0x3137ac) with
 *              appropriate OpenGL glEnable/glDisable and glBlendFunc calls.
 * @windows_compatibility high
 * @author caprado
 */
void applyRenderState(uint8_t stateId);

/**
 * @brief Initialize the render state manager and set default OpenGL state
 * @return true if initialization succeeded, false otherwise
 */
bool initRenderStateManager(void);

/**
 * @brief Reset all render state to defaults
 */
void resetRenderState(void);

/**
 * @brief Get current blend mode enabled status (for debugging)
 */
bool isBlendingEnabled(void);

/**
 * @brief Get current texture 2D enabled status (for debugging)
 */
bool isTexturingEnabled(void);

#endif // RENDER_STATE_MANAGER_H
