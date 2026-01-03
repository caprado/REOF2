#include "texture_slot.h"
#include "../game/texture_manager.h"
#include <stdlib.h>
#include <string.h>

// OpenGL headers (platform-specific)
#ifdef _WIN32
#include <windows.h>
#include <GL/gl.h>
#else
#include <GL/gl.h>
#endif

/**
 * @category graphics/texture
 * @status complete
 * @original func_0019ee10
 * @address 0x0019ee10
 * @description Allocates an OpenGL texture slot, replacing PS2 VRAM page scanning.
 *
 * ORIGINAL PS2 BEHAVIOR:
 * The PS2 version scanned VRAM pages at addresses 0x288c80 (texture buffer)
 * and 0x285480 (texture table) to find available slots using a complex linked
 * list traversal with dimension-based offset calculations ((dim-1)*7)*8.
 * It checked for slot conflicts, validated position alignment, and supported
 * retry with defragmentation.
 *
 * OPENGL REPLACEMENT:
 * Replaces VRAM page scanning with OpenGL texture object creation. Instead of
 * managing fixed VRAM slots, we create texture objects on-demand and let the
 * GPU driver handle memory management. The 16KB VRAM limit (0x4000) is removed.
 *
 * @param width Texture width in pixels
 * @param height Texture height in pixels
 * @return TEXTURE_SLOT_SUCCESS (1) if allocated, TEXTURE_SLOT_RETRY (-1) if needs defrag
 * @windows_compatibility high
 * @author caprado
 */
int allocateTextureSlot(int16_t width, int16_t height) {
    // Validate texture dimensions
    if (width <= 0 || height <= 0) {
        return TEXTURE_SLOT_ERROR;
    }

    // Check if dimensions are within reasonable limits
    // PS2 limited textures to < 256 in original code (lines 83, 88 in ASM)
    if (width >= 256 || height >= 256) {
        return TEXTURE_SLOT_ERROR;
    }

    // Find first free slot in texture manager table
    int slotIndex = -1;
    for (int i = 0; i < 256; i++) {  // MAX_TEXTURES = 256
        TextureDescriptor* tex = getTexture(i);
        if (tex != NULL && !tex->loaded) {
            slotIndex = i;
            break;
        }
    }

    if (slotIndex == -1) {
        // No free slots - need defragmentation
        return TEXTURE_SLOT_RETRY;
    }

    // Generate OpenGL texture object
    // This replaces the PS2's VRAM page allocation at 0x288c80/0x285480
    GLuint textureID;
    glGenTextures(1, &textureID);

    if (textureID == 0) {
        // Allocation failed - might need to free some textures
        return TEXTURE_SLOT_RETRY;
    }

    // Bind the texture to configure it
    glBindTexture(GL_TEXTURE_2D, textureID);

    // Set default texture parameters
    // (Replace PS2's swizzled VRAM layout with standard 2D texture)
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);

    // Allocate texture storage (no data uploaded yet)
    // PS2 used indexed color (CLUT), we'll use RGBA8
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, width, height, 0,
                 GL_RGBA, GL_UNSIGNED_BYTE, NULL);

    // Check for OpenGL errors
    GLenum error = glGetError();
    if (error != GL_NO_ERROR) {
        glDeleteTextures(1, &textureID);
        return TEXTURE_SLOT_RETRY;
    }

    // Store texture in texture manager table
    TextureDescriptor* tex = getTexture(slotIndex);
    tex->textureId = textureID;
    tex->width = width;
    tex->height = height;
    tex->mipmapLevels = 1;
    tex->format = TEXTURE_FORMAT_RGBA32;
    tex->loaded = true;
    tex->filepath[0] = '\0';  // No file source

    return TEXTURE_SLOT_SUCCESS;
}

/**
 * @brief Initialize the texture slot management system
 *
 * Replaces initialization of PS2 VRAM texture list at gp-0x647c.
 * Sets up OpenGL context and prepares for texture allocation.
 *
 * @return true if initialization succeeded, false otherwise
 */
bool initTextureSlotSystem(void) {
    // Check if OpenGL is available
    const GLubyte* version = glGetString(GL_VERSION);
    if (version == NULL) {
        return false;
    }

    // Initialize texture manager (replaces PS2's linked list at gp-0x647c)
    initializeTextureManager();

    return true;
}

/**
 * @brief Shutdown and cleanup texture slot management
 *
 * Frees all allocated texture objects and cleans up resources.
 */
void shutdownTextureSlotSystem(void) {
    // Shutdown texture manager (deletes all allocated textures)
    shutdownTextureManager();
}

/**
 * @brief Attempt to defragment texture memory
 *
 * Called when allocateTextureSlot returns TEXTURE_SLOT_RETRY.
 * In OpenGL, this might involve deleting unused textures or
 * reorganizing texture atlases.
 *
 * @return true if defragmentation succeeded, false otherwise
 */
bool defragmentTextureSlots(void) {
    // Free unused textures to make room for new allocations
    int freedCount = 0;

    for (int i = 0; i < 256; i++) {  // MAX_TEXTURES = 256
        TextureDescriptor* tex = getTexture(i);
        if (tex != NULL && tex->loaded && tex->filepath[0] == '\0') {
            // Texture was allocated but has no file source - likely temporary
            // Safe to unload
            unloadTexture(i);
            freedCount++;
        }
    }

    // Flush OpenGL commands to ensure textures are freed
    glFlush();

    return freedCount > 0;
}

/**
 * @category graphics/texture
 * @status complete
 * @original func_0019f080
 * @address 0x0019f080
 * @description Reset texture system and free unused textures.
 *
 * ORIGINAL PS2 BEHAVIOR:
 * - Checked if reset possible (func_0019f2e0)
 * - Zeroed VRAM (0x0028ffc4, c8, cc)
 * - Called init sequence
 * - Busy-waited for DMA completion
 * - Set hardware registers (0x10000810, 800)
 *
 * OPENGL REPLACEMENT:
 * - Delete unused texture objects
 * - Reset texture slot state
 * - Flush GPU commands (non-blocking)
 *
 * @windows_compatibility high
 * @author caprado
 */
bool resetTextureSystem(void) {
    // Check for OpenGL errors first
    GLenum error = glGetError();
    if (error != GL_NO_ERROR) {
        return false;  // Can't reset if errors present
    }

    // Delete unused texture objects
    int freedCount = 0;
    for (int i = 0; i < 256; i++) {  // MAX_TEXTURES = 256
        TextureDescriptor* tex = getTexture(i);
        if (tex != NULL && tex->loaded && tex->filepath[0] == '\0') {
            // Unload temporary textures (allocated but not loaded from file)
            unloadTexture(i);
            freedCount++;
        }
    }

    // Flush pending OpenGL commands
    // Non-blocking, driver handles async completion
    glFlush();

    return true;
}
