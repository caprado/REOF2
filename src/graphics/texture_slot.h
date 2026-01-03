#ifndef TEXTURE_SLOT_H
#define TEXTURE_SLOT_H

#include <stdint.h>
#include <stdbool.h>

/**
 * @file texture_slot.h
 * @brief OpenGL texture slot allocation abstraction
 *
 * Replaces PS2 VRAM page scanning with modern OpenGL texture management.
 * This module provides texture allocation that abstracts away the PS2's
 * hardware-specific VRAM layout (0x28xxxx/0x29xxxx regions).
 */

// Texture slot allocation result codes
#define TEXTURE_SLOT_SUCCESS      1   // Successfully allocated
#define TEXTURE_SLOT_RETRY       -1   // Allocation failed, retry with defragmentation
#define TEXTURE_SLOT_ERROR        0   // Allocation error

/**
 * @category graphics/texture
 * @status complete
 * @original func_0019ee10
 * @address 0x0019ee10
 * @description Allocates an OpenGL texture slot for the given texture dimensions.
 *              Replaces PS2 VRAM page scanning (0x288c80, 0x285480 regions) with
 *              modern OpenGL texture object creation. Returns allocation status.
 * @windows_compatibility high
 * @author caprado
 */
int allocateTextureSlot(int16_t width, int16_t height);

/**
 * @brief Initialize the texture slot management system
 * @return true if initialization succeeded, false otherwise
 */
bool initTextureSlotSystem(void);

/**
 * @brief Shutdown and cleanup texture slot management
 */
void shutdownTextureSlotSystem(void);

/**
 * @brief Attempt to defragment texture memory (triggers before retry)
 * @return true if defragmentation succeeded, false otherwise
 */
bool defragmentTextureSlots(void);

/**
 * @category graphics/texture
 * @original func_0019f080
 * @address 0x0019f080
 * @description Reset texture system and free unused textures
 */
bool resetTextureSystem(void);

#endif // TEXTURE_SLOT_H
