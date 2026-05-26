#include "opengl_renderer.h"
#include <stdio.h>
#include <windows.h>
#include <gl/gl.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

// Window globals
static HWND g_hwnd = NULL;
static HDC g_hdc = NULL;
static HGLRC g_hglrc = NULL;
static bool g_running = true;

// Timer ID for keeping game loop alive during window drag/resize
#define DRAG_TIMER_ID 1
#define DRAG_TIMER_MS 16  // ~60fps

// External game loop function — called from timer during drag
typedef bool (*GameLoopFunc)(void);
static GameLoopFunc g_gameLoopFunc = NULL;

// Simple texture storage (for now - will integrate with texture_manager later)
#define MAX_TEXTURES 256
static GLuint g_textures[MAX_TEXTURES] = {0};

/**
 * @description Window procedure for handling Windows messages
 */
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_CLOSE:
            g_running = false;
            return 0;

        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;

        case WM_KEYDOWN:
            if (wParam == VK_ESCAPE) {
                g_running = false;
            }
            return 0;

        case WM_ENTERSIZEMOVE:
            // Window drag/resize started — start a timer to keep game loop alive
            SetTimer(hwnd, DRAG_TIMER_ID, DRAG_TIMER_MS, NULL);
            return 0;

        case WM_EXITSIZEMOVE:
            // Window drag/resize ended — stop the timer
            KillTimer(hwnd, DRAG_TIMER_ID);
            return 0;

        case WM_TIMER:
            if (wParam == DRAG_TIMER_ID && g_gameLoopFunc) {
                // Run one game loop iteration during drag
                g_gameLoopFunc();
            }
            return 0;

        case WM_SIZE: {
            int width = LOWORD(lParam);
            int height = HIWORD(lParam);
            if (width > 0 && height > 0) {
                // Maintain 4:3 aspect ratio (640:480), letterbox if needed
                float targetAspect = 640.0f / 480.0f;
                float windowAspect = (float)width / (float)height;
                int vpX, vpY, vpW, vpH;
                if (windowAspect > targetAspect) {
                    vpH = height;
                    vpW = (int)(height * targetAspect);
                    vpX = (width - vpW) / 2;
                    vpY = 0;
                } else {
                    vpW = width;
                    vpH = (int)(width / targetAspect);
                    vpX = 0;
                    vpY = (height - vpH) / 2;
                }
                glViewport(vpX, vpY, vpW, vpH);
            }
            return 0;
        }

        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
}

/**
 * @description Creates OpenGL window
 */
bool opengl_create_window(const char* title, int width, int height) {
    printf("[OpenGL] Creating window: %dx%d\n", width, height);

    // Register window class
    WNDCLASSEX wc = {0};
    wc.cbSize = sizeof(WNDCLASSEX);
    wc.style = CS_HREDRAW | CS_VREDRAW | CS_OWNDC;
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = GetModuleHandle(NULL);
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.lpszClassName = "REOF2Window";

    if (!RegisterClassEx(&wc)) {
        fprintf(stderr, "[OpenGL] ERROR: Failed to register window class\n");
        return false;
    }

    // Create window — check for --fullscreen argument
    DWORD style;
    int screenW, screenH, winX, winY, winW, winH;
    int fullscreen = 0;

    // Check command line for --fullscreen
    {
        LPSTR cmdLine = GetCommandLineA();
        if (strstr(cmdLine, "--fullscreen")) fullscreen = 1;
    }

    if (fullscreen) {
        // Borderless windowed fullscreen (not exclusive — allows GDI screen capture)
        style = WS_POPUP | WS_VISIBLE;
        screenW = GetSystemMetrics(SM_CXSCREEN);
        screenH = GetSystemMetrics(SM_CYSCREEN);
        winX = 0;
        winY = 0;
        winW = screenW;
        winH = screenH;
    } else {
        style = WS_OVERLAPPEDWINDOW;
        RECT rect = {0, 0, width, height};
        AdjustWindowRect(&rect, style, FALSE);
        winX = CW_USEDEFAULT;
        winY = CW_USEDEFAULT;
        winW = rect.right - rect.left;
        winH = rect.bottom - rect.top;
    }

    g_hwnd = CreateWindowEx(
        0,
        "REOF2Window",
        title,
        style,
        winX, winY, winW, winH,
        NULL, NULL,
        GetModuleHandle(NULL),
        NULL
    );

    if (!g_hwnd) {
        fprintf(stderr, "[OpenGL] ERROR: Failed to create window\n");
        return false;
    }

    // Get device context
    g_hdc = GetDC(g_hwnd);
    if (!g_hdc) {
        fprintf(stderr, "[OpenGL] ERROR: Failed to get device context\n");
        return false;
    }

    // Set pixel format
    PIXELFORMATDESCRIPTOR pfd = {0};
    pfd.nSize = sizeof(PIXELFORMATDESCRIPTOR);
    pfd.nVersion = 1;
    pfd.dwFlags = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
    pfd.iPixelType = PFD_TYPE_RGBA;
    pfd.cColorBits = 32;
    pfd.cDepthBits = 24;
    pfd.cStencilBits = 8;
    pfd.iLayerType = PFD_MAIN_PLANE;

    int pixelFormat = ChoosePixelFormat(g_hdc, &pfd);
    if (!pixelFormat) {
        fprintf(stderr, "[OpenGL] ERROR: Failed to choose pixel format\n");
        return false;
    }

    if (!SetPixelFormat(g_hdc, pixelFormat, &pfd)) {
        fprintf(stderr, "[OpenGL] ERROR: Failed to set pixel format\n");
        return false;
    }

    // Create OpenGL context
    g_hglrc = wglCreateContext(g_hdc);
    if (!g_hglrc) {
        fprintf(stderr, "[OpenGL] ERROR: Failed to create OpenGL context\n");
        return false;
    }

    if (!wglMakeCurrent(g_hdc, g_hglrc)) {
        fprintf(stderr, "[OpenGL] ERROR: Failed to make context current\n");
        return false;
    }

    // Show window
    ShowWindow(g_hwnd, SW_SHOW);
    UpdateWindow(g_hwnd);

    printf("[OpenGL] Window created successfully\n");
    printf("[OpenGL] OpenGL version: %s\n", glGetString(GL_VERSION));
    printf("[OpenGL] OpenGL vendor: %s\n", glGetString(GL_VENDOR));
    printf("[OpenGL] OpenGL renderer: %s\n", glGetString(GL_RENDERER));

    return true;
}

/**
 * @description Initializes OpenGL state
 */
bool opengl_init_gl(void) {
    printf("[OpenGL] Initializing OpenGL state...\n");

    // Set up OpenGL state
    glEnable(GL_TEXTURE_2D);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    // Set viewport to actual window size with 4:3 aspect ratio
    {
        RECT clientRect;
        GetClientRect(g_hwnd, &clientRect);
        int w = clientRect.right - clientRect.left;
        int h = clientRect.bottom - clientRect.top;
        float targetAspect = 640.0f / 480.0f;
        float windowAspect = (float)w / (float)h;
        int vpX, vpY, vpW, vpH;
        if (windowAspect > targetAspect) {
            vpH = h;
            vpW = (int)(h * targetAspect);
            vpX = (w - vpW) / 2;
            vpY = 0;
        } else {
            vpW = w;
            vpH = (int)(w / targetAspect);
            vpX = 0;
            vpY = (h - vpH) / 2;
        }
        glViewport(vpX, vpY, vpW, vpH);
    }

    // Set up orthographic projection for 2D rendering
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 640.0, 480.0, 0.0, -1.0, 1.0);  // 640x480 screen, top-left origin

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    printf("[OpenGL] OpenGL state initialized\n");
    return true;
}

/**
 * @description Processes Windows messages
 */
bool opengl_process_events(void) {
    MSG msg;
    while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) {
        if (msg.message == WM_QUIT) {
            g_running = false;
        }
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return g_running;
}

/**
 * @description Swaps front/back buffers
 */
void opengl_swap_buffers(void) {
    SwapBuffers(g_hdc);
}

/**
 * @description Clears the screen with specified color
 */
void opengl_clear(float r, float g, float b, float a) {
    glClearColor(r, g, b, a);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

// Store texture dimensions for centered rendering
typedef struct {
    int width;
    int height;
} TextureInfo;

static TextureInfo g_textureInfo[MAX_TEXTURES] = {{0}};

/**
 * @description Loads texture from PNG/JPG/BMP file using stb_image
 */
bool opengl_load_texture_from_file(int textureIndex, const char* filepath) {
    if (textureIndex < 0 || textureIndex >= MAX_TEXTURES) {
        fprintf(stderr, "[OpenGL] ERROR: Invalid texture index %d\n", textureIndex);
        return false;
    }

    printf("[OpenGL] Loading texture %d from: %s\n", textureIndex, filepath);

    // Load image file using stb_image
    int width, height, channels;
    stbi_set_flip_vertically_on_load(0);  // Don't flip - we'll handle orientation in rendering
    unsigned char* data = stbi_load(filepath, &width, &height, &channels, 4);  // Force RGBA

    if (!data) {
        fprintf(stderr, "[OpenGL] ERROR: Failed to load image: %s\n", stbi_failure_reason());
        fprintf(stderr, "[OpenGL] Creating placeholder texture instead\n");

        // Create placeholder on failure
        width = 256;
        height = 256;
        data = (unsigned char*)malloc(width * height * 4);
        for (int i = 0; i < width * height; i++) {
            int x = i % width;
            int y = i / width;
            data[i * 4 + 0] = x;        // R
            data[i * 4 + 1] = y;        // G
            data[i * 4 + 2] = 128;      // B
            data[i * 4 + 3] = 255;      // A
        }
    } else {
        printf("[OpenGL] Image loaded: %dx%d, %d channels\n", width, height, channels);
    }

    // Store texture dimensions for centered rendering
    g_textureInfo[textureIndex].width = width;
    g_textureInfo[textureIndex].height = height;

    // Generate OpenGL texture
    glGenTextures(1, &g_textures[textureIndex]);
    glBindTexture(GL_TEXTURE_2D, g_textures[textureIndex]);

    // Set texture parameters
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);

    // Upload texture data to GPU
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, data);

    // Free image data
    stbi_image_free(data);

    printf("[OpenGL] Texture %d loaded successfully (%dx%d)\n", textureIndex, width, height);
    return true;
}

/**
 * @description Binds texture for rendering
 */
void opengl_bind_texture(int textureIndex) {
    if (textureIndex >= 0 && textureIndex < MAX_TEXTURES && g_textures[textureIndex] != 0) {
        glBindTexture(GL_TEXTURE_2D, g_textures[textureIndex]);
    }
}

/**
 * @description Renders a centered splash screen texture at its actual size
 */
void opengl_render_splash_screen(int textureIndex) {
    if (textureIndex < 0 || textureIndex >= MAX_TEXTURES) {
        return;
    }

    opengl_bind_texture(textureIndex);

    // Get texture dimensions
    float texWidth = (float)g_textureInfo[textureIndex].width;
    float texHeight = (float)g_textureInfo[textureIndex].height;

    // Calculate centered position (640x480 window)
    float centerX = (640.0f - texWidth) / 2.0f;
    float centerY = (480.0f - texHeight) / 2.0f;

    // Render centered textured quad at actual texture size
    glBegin(GL_QUADS);
        glTexCoord2f(0.0f, 0.0f); glVertex2f(centerX, centerY);                      // Top-left
        glTexCoord2f(1.0f, 0.0f); glVertex2f(centerX + texWidth, centerY);           // Top-right
        glTexCoord2f(1.0f, 1.0f); glVertex2f(centerX + texWidth, centerY + texHeight); // Bottom-right
        glTexCoord2f(0.0f, 1.0f); glVertex2f(centerX, centerY + texHeight);          // Bottom-left
    glEnd();
}

/**
 * @description Shuts down OpenGL
 */
void opengl_set_game_loop(OpenGLGameLoopFunc func) {
    g_gameLoopFunc = (GameLoopFunc)func;
}

void opengl_shutdown_gl(void) {
    printf("[OpenGL] Shutting down...\n");

    // Delete textures
    for (int i = 0; i < MAX_TEXTURES; i++) {
        if (g_textures[i] != 0) {
            glDeleteTextures(1, &g_textures[i]);
            g_textures[i] = 0;
        }
    }

    printf("[OpenGL] Shutdown complete\n");
}

/**
 * @description Destroys window and cleans up
 */
void opengl_destroy_window(void) {
    printf("[OpenGL] Destroying window...\n");

    if (g_hglrc) {
        wglMakeCurrent(NULL, NULL);
        wglDeleteContext(g_hglrc);
        g_hglrc = NULL;
    }

    if (g_hdc) {
        ReleaseDC(g_hwnd, g_hdc);
        g_hdc = NULL;
    }

    if (g_hwnd) {
        DestroyWindow(g_hwnd);
        g_hwnd = NULL;
    }

    UnregisterClass("REOF2Window", GetModuleHandle(NULL));

    printf("[OpenGL] Window destroyed\n");
}
