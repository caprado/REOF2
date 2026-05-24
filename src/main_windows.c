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
 *           2. updateGameSubsystems() - Update all subsystems (func_001ba310)
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
#include <stddef.h>
#include <windows.h>
#include "platform/windows/opengl_renderer.h"
#include "game/texture_manager.h"
#include "graphics/texture_slot.h"
#include "game/game_data.h"
#include "game/engine_startup.h"
#include "game/menu_controller.h"
#include "game/game_state_manager.h"
#include "game/frame_update.h"
#include "graphics/font.h"
#include "graphics/game_font.h"
#include "media/video_player.h"
#include "game/demo_overlay.h"
#include "audio/sound_bank.h"
#include "platform/windows/input.h"

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

    // Initialize font systems from disc assets
    if (!initFont()) {
        fprintf(stderr, "[WARN] Small font (FONT8_8) loading failed\n");
    }
    if (!initGameFont()) {
        fprintf(stderr, "[WARN] Game font (d20le04) loading failed\n");
    }

    // Initialize input system
    initInput();

    // Initialize video player (playback triggered by boot state machine)
    initVideoPlayer();

    // Initialize sound bank system and load title/menu SFX bank
    if (initSoundBankSystem()) {
        loadSoundBank(1334, 12);  // Bank "start" → category 12 (ASM: func_001daca0(0))
    }

    printf("[INIT] Game engine ready\n");
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

    // === GAME LOOP ===
    // Original PS2 main loop at 0x001a8cf4:
    //   loop:
    //     jal 0x1ba1d0   ; updateGameStateManager
    //     jal 0x1c8cd0   ; check if scene state == 3 (exit condition)
    //     if result == 0, loop
    //
    // updateGameStateManager internally calls:
    //   processFrameUpdates(1) → executeFrameUpdate() which calls:
    //     updateRenderState()     (func_001ba360)
    //     processFrameSync()
    //     updateGameSubsystems()  (func_001ba310)
    //   finalizeFrame()           (func_001b74b0)
    //
    // processMenuController is called from within the game state system,
    // not directly from the main loop. Calling it here for now until
    // the menu state entry point is fully traced.

    // Update input from keyboard/controller before game logic
    updateInput();

    // Clear screen at start of frame (before any rendering)
    opengl_clear(0.0f, 0.0f, 0.0f, 1.0f);

    // Core game state update - drives all subsystems internally
    // This calls updateRenderState() which draws the fade overlay
    updateGameStateManager();

    // Menu controller (called here temporarily until call site is verified)
    processMenuController(&g_menuContext);

    // === END GAME LOOP ===

    // Video playback — driven by demo overlay callback via boot state machine
    if (isVideoPlaying()) {
        if (updateVideo()) {
            renderVideoFrame();
        } else {
            stopVideo();
        }
    }

    // ASM-verified from overlay (BIN/1.DAT) 0x549e00-0x549ed0:
    //   func_001b5050(0x80000080) — text color
    //   func_001b5090 shadow: color & 0xFF000000 = alpha-only black, offset +2,+2
    if (shouldDrawPressStart()) {
        drawGameTextShadowEx("PRESS START BUTTON", 194, 320, 1.0f, 1.0f, 1.0f, 0.1f, 0.1f, 0.5f);
    }

    // Menu rendering — ASM-verified from func_0x543900:
    //   14px advance per char, Y=286 start, 24px spacing
    //   Selected: PS2 0x80008080 = yellow, Unselected: 0x80808080 = gray
    if (shouldDrawMenu()) {
        int sel = getMenuSelection();
        static const char* menuItems[] = {
            "SINGLE PLAY", "NETWORK PLAY", "COLLECTION",
            "CHARALOG", "OPTION", "HDD INSTALL"
        };
        for (int i = 0; i < 6; i++) {
            int charCount = (int)strlen(menuItems[i]);
            int x = (640 - charCount * 14) / 2;
            int y = 286 + i * 24;
            if (i == sel) {
                drawGameTextShadow(menuItems[i], x, y, 0.5f, 0.5f, 0.0f);
            } else {
                drawGameTextShadow(menuItems[i], x, y, 0.5f, 0.5f, 0.5f);
            }
        }
    }

    // Present frame
    opengl_swap_buffers();

    return true;
}

/**
 * @brief Shutdown and cleanup all systems
 */
void shutdownSystems(void) {
    printf("[SHUTDOWN] Cleaning up systems...\n");

    // Shutdown sound, video, and font
    shutdownSoundBankSystem();
    shutdownVideoPlayer();
    shutdownGameFont();
    shutdownFont();

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
 * 3. Run main menu loop
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
    fflush(stdout);

    // Step 4: Main menu loop
    printf("\n================================================\n");
    printf("ENTERING MAIN MENU\n");
    printf("Press ESC to exit\n");
    printf("================================================\n\n");

    g_isRunning = true;
    int frameCount = 0;

    // Register game loop for continuous updates during window drag/resize
    opengl_set_game_loop(mainGameLoop);

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
