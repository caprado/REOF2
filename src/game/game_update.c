#include <stdint.h>
#include <stdbool.h>
#include "game_data.h"  // For GameData structure

// Unclassified subsystem update functions
extern void func_001ae0b0(void);  // Subsystem update 1
extern void func_001b3440(void);  // Subsystem update 2
extern void func_001a18c0(void);  // Subsystem update 3
extern void func_001ba950(void);  // Subsystem update 4
extern void func_001ac9d0(void);  // Subsystem update 5
extern void func_001d3110(void);  // Subsystem update 6

/**
 * @category game/update
 * @status complete
 * @author caprado
 * @original func_001ba310
 * @address 0x001ba310
 * @description Main game update dispatcher called each frame during running state.
 *              Checks game state manager state and if active (non-zero), calls
 *              6 subsystem update functions in sequence.
 *
 *              ORIGINAL PS2 BEHAVIOR:
 *              - Used gp-0x6384 for game state manager state
 *
 *              WINDOWS REPLACEMENT:
 *              - Uses g_game.gameStateManagerState from GameData structure
 *
 * @windows_compatibility high
 */
void updateGameSystems(void) {
    // Check if game state is active (now using GameData structure)
    if (g_game.gameStateManagerState == 0) {
        // Game not active - skip updates
        return;
    }

    // Update all game subsystems in sequence
    func_001ae0b0();  // Original: func_001ae0b0 at 0x1ade90
    func_001b3440();  // Original: func_001b3440 at 0x1b3430
    func_001a18c0();  // Original: func_001a18c0 at 0x1a17e0
    func_001ba950();  // Original: func_001ba950 at 0x1ba8f0
    func_001ac9d0();  // Original: func_001ac9d0 at 0x1ac9c0
    func_001d3110();  // Original: func_001d3110 at 0x1d30b0
}
