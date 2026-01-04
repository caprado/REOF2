/**
 * @file main_windows.c
 * @category platform/windows
 * @status in_progress
 * @author caprado
 * @description Clean Windows entry point for REOF2 port
 *
 * ARCHITECTURE:
 * Windows Entry (main)
 *   → OpenGL Initialization (window, context, textures)
 *     → Engine Initialization (engine_startup.c)
 *       → GameData Structure Init (g_game global)
 *         → Main Loop (each frame):
 *           1. updateGameStateManager() - State management & init (func_001ba1d0)
 *           2. func_001ba310() - Update all subsystems
 *           3. func_001ba360() - Render all subsystems
 *           4. processMenuController() - Menu state machine (func_001b9e60)
 *
 * KEY CHANGES FROM PS2:
 * - Removed all PS2-specific initialization (hardware registers, VSync, DMA, etc.)
 * - Replaced hardcoded memory addresses with g_game global struct
 * - Unified initialization via engine_startup.c
 * - Uses pure OpenGL + Windows APIs
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <windows.h>
#include "platform/windows/opengl_renderer.h"
#include "game/texture_manager.h"
#include "graphics/texture_slot.h"
#include "game/game_data.h"
#include "game/engine_startup.h"
#include "game/menu_controller.h"
#include "game/game_state_manager.h"

// Forward declarations for unrefactored functions
extern void func_001ba310(void);  // Update game subsystems
extern void func_001ba360(void);  // Render game frame

// Menu controller context - passed to processMenuController each frame
static MenuControllerContext g_menuContext;

static bool g_isRunning = false;

/**
 * @brief Initialize OpenGL subsystems
 * @return true on success, false on failure
 */
bool initializeOpenGL(void) {
    printf("[INIT] Initializing OpenGL subsystems...\n");
    fflush(stdout);

    // Create OpenGL window
    printf("[INIT] Creating window...\n");
    fflush(stdout);
    if (!opengl_create_window("REOF2 - Resident Evil Outbreak File #2", 640, 480)) {
        fprintf(stderr, "[ERROR] Failed to create OpenGL window\n");
        fflush(stderr);
        return false;
    }
    printf("[INIT]   ✓ Window created (640x480)\n");
    fflush(stdout);

    // Initialize OpenGL context
    printf("[INIT] Initializing OpenGL context...\n");
    fflush(stdout);
    if (!opengl_init_gl()) {
        fprintf(stderr, "[ERROR] Failed to initialize OpenGL context\n");
        fflush(stderr);
        opengl_destroy_window();
        return false;
    }
    printf("[INIT]   ✓ OpenGL context initialized\n");
    fflush(stdout);

    // Initialize texture slot system (replaces PS2 VRAM management)
    printf("[INIT] Initializing texture slot system...\n");
    fflush(stdout);
    if (!initTextureSlotSystem()) {
        fprintf(stderr, "[ERROR] Failed to initialize texture slot system\n");
        fflush(stderr);
        opengl_shutdown_gl();
        opengl_destroy_window();
        return false;
    }
    printf("[INIT]   ✓ Texture slot system initialized\n");
    fflush(stdout);

    printf("[INIT] OpenGL subsystems ready\n");
    fflush(stdout);
    return true;
}

/**
 * @brief Initialize game engine systems
 * @description Uses unified engine initialization from engine_startup.c
 *              This replaces the old pointer-based allocation with the
 *              new g_game global struct system.
 * @return true on success, false on failure
 */
bool initializeGameEngine(void) {
    printf("[INIT] Initializing game engine...\n");

    // Initialize engine using unified system
    // This calls initializeGameData() which initializes the g_game global struct
    if (!initializeEngine()) {
        fprintf(stderr, "[ERROR] Failed to initialize game engine\n");
        return false;
    }
    printf("[INIT]   ✓ Game engine initialized (g_game struct ready)\n");

    printf("[INIT] Game engine ready\n");
    printf("[INIT] Entry point: processMenuController (menu_controller.c)\n");
    return true;
}

/**
 * @brief Main game loop - processes one frame
 * @return true to continue, false to exit
 */
bool mainGameLoop(void) {
    // Process window events (ESC to quit)
    if (!opengl_process_events()) {
        return false;
    }

    // === GAME LOOP - Call all four core functions each frame ===

    // 1. Game state management (func_001ba1d0 -> updateGameStateManager)
    updateGameStateManager();

    // 2. Update all game subsystems (func_001ba310)
    func_001ba310();

    // 3. Render game frame (func_001ba360)
    func_001ba360();

    // 4. Menu controller state machine (func_001b9e60)
    processMenuController(&g_menuContext);

    // === END GAME LOOP ===

    // Clear screen to dark blue (to show window is working)
    opengl_clear(0.1f, 0.1f, 0.3f, 1.0f);

    // Swap buffers
    opengl_swap_buffers();

    return true;
}

/**
 * @brief Shutdown and cleanup all systems
 */
void shutdownSystems(void) {
    printf("[SHUTDOWN] Cleaning up systems...\n");

    // Shutdown game engine (uses unified system)
    shutdownEngine();
    printf("[SHUTDOWN]   ✓ Game engine shutdown (g_game freed)\n");

    // Shutdown texture system
    shutdownTextureSlotSystem();
    printf("[SHUTDOWN]   ✓ Texture system shutdown\n");

    // Shutdown OpenGL
    opengl_shutdown_gl();
    printf("[SHUTDOWN]   ✓ OpenGL context destroyed\n");

    // Destroy window
    opengl_destroy_window();
    printf("[SHUTDOWN]   ✓ Window destroyed\n");

    printf("[SHUTDOWN] All systems shutdown\n");
}

/**
 * @brief Windows application entry point
 *
 * Clean flow:
 * 1. Initialize OpenGL (window, context, textures)
 * 2. Initialize game engine (unified g_game struct via engine_startup.c)
 * 3. Run demo mode state machine loop
 * 4. Shutdown and cleanup (unified shutdown via engine_startup.c)
 *
 * Architecture:
 * - Uses g_game global struct (NOT g_gameData pointer)
 * - All PS2 memory addresses replaced with GameData fields
 * - No malloc/free for game data (static global)
 *
 * @return 0 on success, 1 on failure
 */
int main(int argc, char* argv[]) {
    (void)argc;  // Unused parameter
    (void)argv;  // Unused parameter

    printf("================================================\n");
    printf("  REOF2 - Windows Port\n");
    printf("  Resident Evil Outbreak File #2\n");
    printf("  PS2 to Windows OpenGL Port\n");
    printf("  (Demo/Attract Mode)\n");
    printf("================================================\n\n");

    printf("[DEBUG] Starting initialization...\n");
    fflush(stdout);

    // Step 1: Initialize OpenGL subsystems
    if (!initializeOpenGL()) {
        fprintf(stderr, "[ERROR] OpenGL initialization failed\n");
        fprintf(stderr, "[ERROR] Press Enter to exit...\n");
        getchar();
        return 1;
    }

    printf("[DEBUG] OpenGL initialized successfully\n");
    fflush(stdout);

    // Step 2: Initialize game engine
    if (!initializeGameEngine()) {
        fprintf(stderr, "[ERROR] Game engine initialization failed\n");
        fprintf(stderr, "[ERROR] Press Enter to exit...\n");
        getchar();
        shutdownSystems();
        return 1;
    }

    printf("[DEBUG] Game engine initialized successfully\n");
    fflush(stdout);

    // Step 3: Initialize menu controller context
    memset(&g_menuContext, 0, sizeof(g_menuContext));
    printf("[INIT] Menu context initialized (state=0)\n");

    // Step 4: Main menu loop
    printf("\n================================================\n");
    printf("ENTERING MAIN MENU\n");
    printf("Press ESC to exit\n");
    printf("================================================\n\n");

    g_isRunning = true;
    int frameCount = 0;

    while (g_isRunning) {
        if (!mainGameLoop()) {
            g_isRunning = false;
        }

        frameCount++;

        // Print status every 60 frames (~1 second)
        if (frameCount % 60 == 0) {
            printf("[MENU] Frame %d\n", frameCount);
        }

        // Frame timing: ~60fps
        Sleep(16);
    }

    // Step 5: Cleanup
    printf("\n================================================\n");
    printf("MAIN MENU ENDED\n");
    printf("Total frames: %d\n", frameCount);
    printf("================================================\n\n");

    shutdownSystems();

    printf("================================================\n");
    printf("Exit Status: SUCCESS\n");
    printf("Press Enter to exit...\n");
    printf("================================================\n");
    getchar();

    return 0;
}
