#include "render_state_manager.h"

// OpenGL headers (platform-specific)
#ifdef _WIN32
#include <windows.h>
#include <GL/gl.h>
#else
#include <GL/gl.h>
#endif

// Internal state tracking
static struct {
    bool initialized;
    bool blendingEnabled;
    bool texturingEnabled;
    GLenum currentBlendSrc;
    GLenum currentBlendDst;
} g_renderState = {0};

/**
 * @category graphics/render
 * @status complete
 * @original func_001aefd0
 * @address 0x001aefd0
 * @description Applies OpenGL rendering state based on PS2 state ID.
 *
 * ORIGINAL PS2 BEHAVIOR:
 * Wrote state values to three VRAM locations:
 * - 0x00290310 (render state 1)
 * - 0x0028ffc8 (render state 2)
 * - 0x003137ac (render flags)
 *
 * These addresses are in PS2 Graphics Synthesizer memory and controlled
 * blending modes, texture mapping, and other rendering pipeline states.
 *
 * OPENGL REPLACEMENT:
 * Maps state IDs to appropriate OpenGL state changes:
 * - 0x0d: Initialize rendering (enable depth, disable blend)
 * - 0x5f/0x60: Configure alpha blending
 * - 0x63: Enable texture mapping
 * - 0x6c: Final render state (full rendering enabled)
 *
 * @param stateId PS2 state identifier (0xd, 0x5f, 0x60, 0x63, 0x6c, or dynamic)
 * @windows_compatibility high
 * @author caprado
 */
void applyRenderState(uint8_t stateId) {
    if (!g_renderState.initialized) {
        // Auto-initialize if not done yet
        initRenderStateManager();
    }

    // Apply OpenGL state based on PS2 state ID
    switch (stateId) {
        case RENDER_STATE_INIT: // 0x0d = 13
            // Initial render state - prepare for rendering
            glDisable(GL_BLEND);
            glEnable(GL_DEPTH_TEST);
            glDepthFunc(GL_LEQUAL);

            g_renderState.blendingEnabled = false;
            break;

        case RENDER_STATE_BLEND_1: // 0x5f = 95
            // First blend configuration - alpha blending
            glEnable(GL_BLEND);
            glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

            g_renderState.blendingEnabled = true;
            g_renderState.currentBlendSrc = GL_SRC_ALPHA;
            g_renderState.currentBlendDst = GL_ONE_MINUS_SRC_ALPHA;
            break;

        case RENDER_STATE_BLEND_2: // 0x60 = 96
            // Second blend configuration - additive blending variant
            glEnable(GL_BLEND);
            glBlendFunc(GL_SRC_ALPHA, GL_ONE);  // Additive blending

            g_renderState.blendingEnabled = true;
            g_renderState.currentBlendSrc = GL_SRC_ALPHA;
            g_renderState.currentBlendDst = GL_ONE;
            break;

        case RENDER_STATE_TEXTURE: // 0x63 = 99
            // Enable texture mapping
            glEnable(GL_TEXTURE_2D);

            g_renderState.texturingEnabled = true;
            break;

        case RENDER_STATE_FINAL: // 0x6c = 108
            // Final render state - full rendering pipeline enabled
            glEnable(GL_BLEND);
            glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
            glEnable(GL_TEXTURE_2D);
            glEnable(GL_DEPTH_TEST);

            g_renderState.blendingEnabled = true;
            g_renderState.texturingEnabled = true;
            g_renderState.currentBlendSrc = GL_SRC_ALPHA;
            g_renderState.currentBlendDst = GL_ONE_MINUS_SRC_ALPHA;
            break;

        default:
            // Unknown state ID - log for debugging
            // TODO: For now, treat as a no-op
            // In PS2 version, this would still write the value to VRAM
            break;
    }

    // Check for OpenGL errors (debug builds)
    #ifdef _DEBUG
    GLenum error = glGetError();
    if (error != GL_NO_ERROR) {
        // Error occurred - could log here
        // For now, silently continue
    }
    #endif
}

/**
 * @brief Initialize the render state manager and set default OpenGL state
 */
bool initRenderStateManager(void) {
    if (g_renderState.initialized) {
        return true;  // Already initialized
    }

    // Set default OpenGL state
    glDisable(GL_BLEND);
    glDisable(GL_TEXTURE_2D);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);

    // Set clear color (dark blue, matching PS2 default)
    glClearColor(0.0f, 0.0f, 0.1f, 1.0f);

    // Initialize state tracking
    g_renderState.blendingEnabled = false;
    g_renderState.texturingEnabled = false;
    g_renderState.currentBlendSrc = GL_ONE;
    g_renderState.currentBlendDst = GL_ZERO;
    g_renderState.initialized = true;

    return true;
}

/**
 * @brief Reset all render state to defaults
 */
void resetRenderState(void) {
    glDisable(GL_BLEND);
    glDisable(GL_TEXTURE_2D);
    glEnable(GL_DEPTH_TEST);

    g_renderState.blendingEnabled = false;
    g_renderState.texturingEnabled = false;
    g_renderState.currentBlendSrc = GL_ONE;
    g_renderState.currentBlendDst = GL_ZERO;
}

/**
 * @brief Get current blend mode enabled status (for debugging)
 */
bool isBlendingEnabled(void) {
    return g_renderState.blendingEnabled;
}

/**
 * @brief Get current texture 2D enabled status (for debugging)
 */
bool isTexturingEnabled(void) {
    return g_renderState.texturingEnabled;
}
