#include <stdint.h>
#include <stdbool.h>
#include "../graphics/texture_slot.h"

// Global texture table (PS2 address: 0x00285480)
// This contains texture metadata entries
#define TEXTURE_TABLE_BASE 0x00285480
extern uint32_t* g_textureTable;  // Should point to TEXTURE_TABLE_BASE

// Texture entry structure (reverse-engineered from assembly)
typedef struct {
    uint16_t width;          // +0x00: Texture width (stored in upper 16 bits)
    uint16_t height;         // +0x00: Texture height (stored in lower 16 bits)
    uint16_t posX;           // +0x10: X position
    uint16_t posY;           // +0x12: Y position
    // ... more fields ...
    uint8_t flags;           // +0x35: Status flags
    // Total size appears to be 0x38 bytes or more
} TextureEntry;

/**
 * @category graphics/texture
 * @status complete
 * @author caprado
 * @original func_0019d440
 * @address 0x0019d440
 * @description Processes texture entries from the texture table. Iterates through
 *              texture entries based on index and count parameters, validates texture
 *              dimensions, loads texture data, and handles texture transfer operations.
 *              This is a critical function in the PS2's texture loading pipeline.
 * @windows_compatibility medium
 */
void processTextureEntries(int startIndex, int count) {
    // Local variables (reconstructed from register usage)
    int outerLoopIndex = 0;      // s4 - outer loop counter
    int innerLoopIndex;          // s3 - inner loop (0 or 1)
    int texturesProcessed = 0;   // s2 - count of processed textures
    uint16_t textureWidth;       // s0 - texture width from table
    uint16_t textureHeight;      // s1 - texture height from table
    TextureEntry* currentEntry;  // s5 - pointer to current texture entry
    uintptr_t textureDataPtr;    // fp - pointer to texture data buffer
    bool hasValidTextures = false; // v0 - result flag

    // Calculate base address for texture table access
    // Base texture table is at 0x00285480
    uintptr_t textureTableBase = TEXTURE_TABLE_BASE;

    // Buffer for texture data (PS2 address: 0x00288c80 = 0x290000 - 0x7380)
    uintptr_t textureBuffer = 0x00288c80;

    // Outer loop: iterate through 'count' texture entries starting from 'startIndex'
    for (outerLoopIndex = 0; outerLoopIndex < count; outerLoopIndex++) {
        // Calculate offset into texture table
        // Each entry appears to be accessed via: tableBase + (index * 4)
        // then dereferenced to get texture metadata
        int currentIndex = startIndex + outerLoopIndex;
        uintptr_t* tableEntry = (uintptr_t*)(textureTableBase + (currentIndex * 4));

        // Load texture dimensions from table entry
        // Format: upper 16 bits = width, lower 16 bits = height
        uint32_t dimensionData = *tableEntry;
        textureWidth = (dimensionData >> 16) & 0xFFFF;
        textureHeight = dimensionData & 0xFFFF;

        // Calculate texture entry pointer
        // Entry size calculation: ((width-1) * 7) * 8 for width offset
        //                        + ((height-1) * 7) * 8 for height offset
        int widthOffset = (textureWidth - 1);
        widthOffset = ((widthOffset << 3) - widthOffset) << 3;  // (w * 7) * 8

        int heightOffset = (textureHeight - 1);
        heightOffset = ((heightOffset << 3) - heightOffset) << 3;  // (h * 7) * 8

        currentEntry = (TextureEntry*)(textureTableBase + widthOffset);
        textureDataPtr = textureBuffer + heightOffset;

        // Inner loop: process 2 passes (pass 0 and pass 1)
        for (innerLoopIndex = 0; innerLoopIndex < 2; innerLoopIndex++) {
            // Validate texture dimensions based on pass
            bool isValid = false;

            if (innerLoopIndex == 0) {
                // Pass 0: Check height is valid (non-zero and < 256)
                if (textureHeight > 0 && textureHeight < 0x100) {
                    isValid = true;
                }
            } else {
                // Pass 1: Check width is valid (non-zero and < 256)
                if (textureWidth > 0 && textureWidth < 0x100) {
                    isValid = true;
                }
            }

            if (!isValid) {
                continue;  // Skip invalid textures
            }

            // Check if texture is already loaded (flags at offset +0x35)
            if (currentEntry->flags != 0) {
                continue;  // Already loaded, skip
            }

            // Allocate OpenGL texture slot for this texture
            // Original func_0019ee10 scanned PS2 VRAM pages (0x288c80/0x285480)
            // Now replaced with OpenGL texture allocation
            int loadResult = allocateTextureSlot(textureWidth, textureHeight);

            // Handle texture loading result
            if (loadResult == TEXTURE_SLOT_RETRY) {
                // First load attempt failed, reset texture system
                if (resetTextureSystem()) {
                    // Retry allocation after reset
                    loadResult = allocateTextureSlot(textureWidth, textureHeight);
                    if (loadResult == TEXTURE_SLOT_RETRY) {
                        continue;  // Still failed, skip
                    }
                    func_0019eb90();
                } else {
                    continue;  // Reset failed, skip
                }
            } else if (loadResult == TEXTURE_SLOT_SUCCESS) {
                // First load succeeded
                func_0019ea90();
            }

            // Finalize the texture load
            func_0019cd80();

            texturesProcessed++;
        }
    }

    // If any textures were processed, perform final texture transfer operations
    if (hasValidTextures) {
        func_0018c760();  // Original: func_0018c760 at 0x18c750

        // Process texture data with parameter 0x10
        func_0018dca0();  // Original: func_0018dca0 at 0x18dc30

        // Configure texture mode with parameter 1
        func_0018cc10();  // Original: func_0018cc10 at 0x18cba0

        // Commit texture settings
        // Uses address 0x0028fcb0 (0x290000 - 0x350)
        func_0018cff0();  // Original: func_0018cff0 at 0x18ce40
    }
}
