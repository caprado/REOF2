#include <stdint.h>
#include <stdbool.h>
#include "game_subsystems.h"  // For initializeGameSubsystems
#include "graphics_memory.h"  // For checkGraphicsMemoryReady
#include "game_init_counter.h"  // For decrementAndInitialize
#include "resource_entry.h"  // For initializeResourceEntry
#include "game_update.h"  // For updateGameSystems
#include "game_stub.h"  // For stubReturnOne
#include "game_stub_noop.h"  // For stubNoOp
#include "frame_finalize.h"  // For finalizeFrame
#include "../system/system_timing.h"  // For checkSystemTiming
#include "game_data.h"  // For GameData structure

/**
 * @category game/state
 * @status complete
 * @author caprado
 * @original func_001ba1d0
 * @address 0x001ba1d0
 * @description Game state manager that handles game initialization and
 *              per-frame updates. Two-state machine:
 *              - State 0: Wait for memory allocation and initialize game systems
 *              - State 1: Process game logic each frame
 * @windows_compatibility high
 */
void processGameStateManager(void) {
    uint32_t state = g_game.gameStateManagerState;  // Now using GameData structure

    switch (state) {
        case 0:  // Initialization state
        {
            // Wait for memory allocation (640x448 buffer)
            int32_t memoryReady;
            do {
                memoryReady = checkGraphicsMemoryReady(0x280, 0x1c0);  // Original: func_0019f130 at 0x19f080
            } while (memoryReady == 0);

            // Initialize game systems
            decrementAndInitialize();  // Original: func_001ba8b0 at 0x1ba660
            initializeGameSubsystems();  // Original: func_001ba9c0 at 0x1ba960

            // Initialize resource entry with data pointer
            // PS2: 0x001cbe80 points to game data loaded from CD-ROM
            // Windows: Use resourceEntryBase from GameData (must be allocated before this)
            // For now, pass the base address itself (will need proper resource loading later)
            initializeResourceEntry((uintptr_t)g_game.resourceEntryBase, 0);  // Original: func_001b7720 at 0x1b76c0

            // Advance to running state (now using GameData structure)
            g_game.gameStateManagerState = 1;
            break;
        }

        case 1:  // Running state
        {
            // Update game state
            updateGameSystems();  // Original: func_001ba310 at 0x1ba2a0

            // Update game counters (now using GameData structure)
            uint16_t counter1 = g_game.counter1;
            uint16_t counter3 = g_game.counter3;

            g_game.counter2 = counter3;  // Store previous value
            g_game.counter1 = counter1 + 1;  // Increment counter

            // Update game subsystems (stub function)
            stubReturnOne();  // Original: func_001a8a60 at 0x1a8a50

            // System timing check (cached to avoid duplicate call with microsecond delta)
            // PS2 called this twice: once ignoring result, once using result
            // Windows: Cache result to avoid timing drift between calls
            int32_t timingResult = checkSystemTiming();  // Original: func_00112170 at 0x112118

            // Stub function (disabled feature)
            stubNoOp();  // Original: func_001aee10 at 0x1aee10

            // Conditional processing based on system timing (using cached result)
            if (timingResult != 0) {
                stubNoOp();  // Original: func_001aee10 at 0x1aed20 (called again conditionally)
            }

            // Finalize frame with resource entry index and callback (now using GameData structure)
            // PS2: v1 = counter3 (resource entry index), s1 = frame callback
            uint32_t entryIndex = g_game.counter3;
            uintptr_t callback = g_game.frameCallback;
            finalizeFrame(entryIndex, callback);  // Original: func_001b76c0 at 0x1b74b0
            break;
        }

        default:
            // Unknown state - do nothing
            break;
    }
}
