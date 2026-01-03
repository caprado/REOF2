#include "texture_manager.h"
#include <stdio.h>
#include <string.h>

// OpenGL headers (platform-specific)
#ifdef _WIN32
#include <windows.h>
#include <GL/gl.h>
#else
#include <GL/gl.h>
#endif

// Maximum number of textures the game can have loaded
#define MAX_TEXTURES 256

// Texture table - matches PS2 texture structure layout
static TextureDescriptor g_textureTable[MAX_TEXTURES];
static bool g_textureManagerInitialized = false;

/**
 * @description Initializes the texture manager system
 * @windows_compatibility high
 */
void initializeTextureManager(void) {
    if (g_textureManagerInitialized) {
        return;
    }

    // Clear texture table
    memset(g_textureTable, 0, sizeof(g_textureTable));

    // Initialize all textures as unloaded
    for (int i = 0; i < MAX_TEXTURES; i++) {
        g_textureTable[i].textureId = 0;
        g_textureTable[i].width = 0;
        g_textureTable[i].height = 0;
        g_textureTable[i].mipmapLevels = 1;
        g_textureTable[i].format = TEXTURE_FORMAT_RGBA32;
        g_textureTable[i].loaded = false;
        g_textureTable[i].filepath[0] = '\0';
    }

    g_textureManagerInitialized = true;
    printf("[TextureManager] Initialized (max %d textures)\n", MAX_TEXTURES);
}

/**
 * @description Shuts down texture manager and frees resources
 * @windows_compatibility high
 */
void shutdownTextureManager(void) {
    if (!g_textureManagerInitialized) {
        return;
    }

    // Unload all textures
    for (int i = 0; i < MAX_TEXTURES; i++) {
        if (g_textureTable[i].loaded) {
            unloadTexture(i);
        }
    }

    g_textureManagerInitialized = false;
    printf("[TextureManager] Shutdown complete\n");
}

/**
 * @description Loads a texture from a file
 * @param textureIndex Index in texture table (0-255)
 * @param filepath Path to texture file (PNG, TGA, BMP, etc.)
 * @return true if texture loaded successfully, false otherwise
 * @windows_compatibility high
 */
bool loadTexture(int textureIndex, const char* filepath) {
    if (textureIndex < 0 || textureIndex >= MAX_TEXTURES) {
        printf("[TextureManager] ERROR: Invalid texture index %d\n", textureIndex);
        return false;
    }

    if (!g_textureManagerInitialized) {
        printf("[TextureManager] ERROR: Manager not initialized\n");
        return false;
    }

    TextureDescriptor* tex = &g_textureTable[textureIndex];

    // If already loaded, unload first
    if (tex->loaded) {
        unloadTexture(textureIndex);
    }

    // Store filepath
    strncpy(tex->filepath, filepath, sizeof(tex->filepath) - 1);
    tex->filepath[sizeof(tex->filepath) - 1] = '\0';

    // TODO: Implement actual texture loading using stb_image or similar
    // For now, create a stub texture
    printf("[TextureManager] Loading texture %d from '%s'\n", textureIndex, filepath);

    // Stub: Set up placeholder values
    tex->textureId = textureIndex + 1;  // Fake OpenGL texture ID
    tex->width = 256;
    tex->height = 256;
    tex->mipmapLevels = 1;
    tex->format = TEXTURE_FORMAT_RGBA32;
    tex->loaded = true;

    // When implementing OpenGL version:
    // 1. Load image data using stb_image: stbi_load(filepath, &width, &height, &channels, 4)
    // 2. Generate OpenGL texture: glGenTextures(1, &tex->textureId)
    // 3. Bind texture: glBindTexture(GL_TEXTURE_2D, tex->textureId)
    // 4. Set parameters: glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR)
    // 5. Upload data: glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, data)
    // 6. Generate mipmaps: glGenerateMipmap(GL_TEXTURE_2D)
    // 7. Free image data: stbi_image_free(data)

    printf("[TextureManager] Texture %d loaded: %dx%d, format=%d\n",
           textureIndex, tex->width, tex->height, tex->format);

    return true;
}

/**
 * @description Gets texture descriptor by index
 * @param textureIndex Index in texture table (0-255)
 * @return Pointer to texture descriptor, or NULL if invalid
 * @windows_compatibility high
 */
TextureDescriptor* getTexture(int textureIndex) {
    if (textureIndex < 0 || textureIndex >= MAX_TEXTURES) {
        return NULL;
    }

    if (!g_textureManagerInitialized) {
        return NULL;
    }

    return &g_textureTable[textureIndex];
}

/**
 * @description Binds texture for rendering
 * @param textureIndex Index in texture table (0-255)
 * @windows_compatibility high
 */
void bindTexture(int textureIndex) {
    TextureDescriptor* tex = getTexture(textureIndex);
    if (!tex || !tex->loaded) {
        // Unbind texture
        glBindTexture(GL_TEXTURE_2D, 0);
        return;
    }

    // Bind OpenGL texture for rendering
    glBindTexture(GL_TEXTURE_2D, tex->textureId);
}

/**
 * @description Unloads a texture and frees GPU memory
 * @param textureIndex Index in texture table (0-255)
 * @windows_compatibility high
 */
void unloadTexture(int textureIndex) {
    TextureDescriptor* tex = getTexture(textureIndex);
    if (!tex || !tex->loaded) {
        return;
    }

    printf("[TextureManager] Unloading texture %d\n", textureIndex);

    // Delete OpenGL texture object
    if (tex->textureId != 0) {
        glDeleteTextures(1, &tex->textureId);
    }

    tex->textureId = 0;
    tex->width = 0;
    tex->height = 0;
    tex->loaded = false;
    tex->filepath[0] = '\0';
}
