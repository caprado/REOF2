#ifndef TEXTURE_MANAGER_H
#define TEXTURE_MANAGER_H

#include <stdint.h>
#include <stdbool.h>

// Texture format types
typedef enum {
    TEXTURE_FORMAT_RGBA32 = 0,  // 32-bit RGBA
    TEXTURE_FORMAT_RGBA16 = 1,  // 16-bit RGBA (5551)
    TEXTURE_FORMAT_INDEX8 = 2,  // 8-bit paletted
    TEXTURE_FORMAT_INDEX4 = 3,  // 4-bit paletted
    TEXTURE_FORMAT_DXT = 4      // DXT compressed
} TextureFormat;

// Texture descriptor
typedef struct {
    uint32_t textureId;         // OpenGL texture ID
    uint16_t width;
    uint16_t height;
    uint8_t mipmapLevels;
    TextureFormat format;
    bool loaded;
    char filepath[256];         // Path to texture file for loading
} TextureDescriptor;

// Texture manager functions
void initializeTextureManager(void);
void shutdownTextureManager(void);

// Load texture from file (PNG, TGA, BMP, etc.)
bool loadTexture(int textureIndex, const char* filepath);

// Get texture descriptor by index
TextureDescriptor* getTexture(int textureIndex);

// Bind texture for rendering
void bindTexture(int textureIndex);

// Unload texture
void unloadTexture(int textureIndex);

#endif // TEXTURE_MANAGER_H
