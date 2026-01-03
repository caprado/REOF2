#ifndef OPENGL_RENDERER_H
#define OPENGL_RENDERER_H

#include <stdint.h>
#include <stdbool.h>

/**
 * @description OpenGL rendering subsystem for Windows
 */

// Window management
bool opengl_create_window(const char* title, int width, int height);
void opengl_destroy_window(void);
bool opengl_process_events(void);
void opengl_swap_buffers(void);

// Rendering
void opengl_clear(float r, float g, float b, float a);
void opengl_render_splash_screen(int textureIndex);

// Texture loading (simple for now)
bool opengl_load_texture_from_file(int textureIndex, const char* filepath);
void opengl_bind_texture(int textureIndex);

// Initialization
bool opengl_init_gl(void);
void opengl_shutdown_gl(void);

#endif // OPENGL_RENDERER_H
