#include "menu_state.h"
#include "game_data.h"

// Forward declaration for memset-like function
extern void func_00107c70(void* dest, int size);

/**
 * @category game/menu
 * @status complete
 * @original func_001b9ef0
 * @address 0x001b9ef0
 * @description Initializes/resets the menu state memory block. Zeros 28 bytes at 0x00307f90.
 * @windows_compatibility high
 * @author caprado
 */
void initializeMenuState(void) {
    // Original: tail call to func_00107c70(0x00307f90, 0x1c)
    // This zeros 28 bytes of menu state
    // TODO: Call func_00107c70 or implement inline

    // For now, zero the relevant g_game fields that map to 0x00307f90-0x00307fac
    g_game.sequenceActive = 0;   // 0x00307f90
    g_game.gameStateFlag = 0;    // 0x00307f91
    g_game.menuState1 = 0;       // 0x00307f9c
    g_game.menuState2 = 0;       // 0x00307f9e
    g_game.menuState3 = 0;       // 0x00307fa0
}

/**
 * @category game/menu
 * @status complete
 * @original func_001b9f10
 * @address 0x001b9f10
 * @description Updates menu sequence state. Checks sequence table and sets sequenceActive flag.
 * @windows_compatibility high
 * @author caprado
 */
void updateMenuSequence(void) {
    uint8_t entryActive = 0;

    // Check if we have a valid sequence array and valid index
    if (g_game.sequenceArray != NULL && g_game.sequenceIndex < g_game.sequenceCount) {
        // Read the active flag from the current sequence entry
        // Original: reads first byte of 24-byte structure at sequence table
        entryActive = (g_game.sequenceArray[g_game.sequenceIndex].duration != 0) ? 1 : 0;
    }

    if (entryActive == 1) {
        // Sequence entry is active
        g_game.sequenceActive = 1;
    } else {
        // Sequence entry is not active - clear all menu state
        g_game.sequenceActive = 0;
        g_game.menuState1 = 0;      // Original: sh $zero, 0xc($a2) at 0x307f9c
        g_game.menuState2 = 0;      // Original: sh $zero, 0xe($a2) at 0x307f9e
        g_game.menuState3 = 0;      // Original: sw $zero, 0x10($a2) at 0x307fa0
        g_game.gameStateFlag = 0;   // Original: sb $zero, 1($a2) at 0x307f91
    }
}
