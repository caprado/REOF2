#include <stdint.h>
#include <stdbool.h>
#include "menu_sequence.h"
#include "game_data.h"   // For GameData structure

// Forward declaration to avoid circular include (menu_state.h includes menu_sequence.h)
void initMenuState(void);

/**
 * @category game/menu
 * @status complete
 * @author caprado
 * @original func_001ba0f0
 * @address 0x001ba0f0
 * @description Menu sequence processor that manages timed menu transitions
 *              and animations. Processes a sequence array with timers and
 *              callbacks.
 *
 *              ORIGINAL PS2 BEHAVIOR:
 *              - Used WAIT interrupt + thread yield mechanics (not recursion)
 *              - Used hardcoded memory addresses for all state
 *
 *              WINDOWS REPLACEMENT:
 *              - Uses GameData structure for all state
 *              - Calls real function pointers (no recursion on integer addresses)
 *              - Uses reentry guard to prevent infinite recursion (replaces PS2 thread yield)
 *
 * @windows_compatibility high
 */
void processMenuSequence(void) {
    // Prevent infinite recursion (replaces PS2 WAIT/thread yield behavior)
    // PS2 version yielded to scheduler, Windows version uses guard flag
    static bool reentryGuard = false;
    if (reentryGuard) {
        return;
    }

    // Check if sequence is active (now using GameData structure)
    if (g_game.sequenceActive == 0) {
        // No sequence active - call menu state initialization
        reentryGuard = true;
        initMenuState();  // Original: func_001ba060 at 0x1ba010
        reentryGuard = false;
        return;
    }

    // Check if sequence data exists (now using GameData structure)
    if (g_game.sequenceArray == NULL) {
        // No sequence data - call menu state initialization
        reentryGuard = true;
        initMenuState();  // Original: func_001ba060 at 0x1ba010
        reentryGuard = false;
        return;
    }

    // Get current timer value (now using GameData structure)
    int16_t timer = g_game.currentTimer;

    // Calculate decrement amount (1 << shift)
    uint8_t shift = g_game.timerShift;  // Original: g_003137ac
    int16_t decrement = 1 << shift;

    // Decrement timer
    timer -= decrement;
    g_game.currentTimer = timer;

    // Check if timer expired
    if (timer > 0) {
        reentryGuard = false;
        // Timer still running - done for this frame
        return;
    }

    // Timer expired - load next sequence entry (now using GameData structure)
    int16_t index = g_game.sequenceIndex;
    MenuSequenceEntry* sequence = g_game.sequenceArray;
    MenuSequenceEntry* entry = &sequence[index];

    // Load next timer value
    g_game.currentTimer = entry->duration;

    // Check if sequence ended (duration == 0)
    if (entry->duration == 0) {
        // Sequence complete - call menu state initialization
        reentryGuard = true;
        initMenuState();  // Original: func_001ba060 at 0x1ba010
        reentryGuard = false;
        return;
    }

    // Execute callback if provided (now using real function pointer)
    // PS2 version: recursive call with integer address
    // Windows version: direct function call (no recursion)
    if (entry->callback != NULL) {
        entry->callback();  // Call the actual function
    }

    // Advance sequence index (now using GameData structure)
    g_game.sequenceIndex++;

    // Bounds check: Prevent reading beyond array end
    // PS2 relied on null-terminated sequences (duration == 0), but we add bounds check for safety
    if (g_game.sequenceIndex >= g_game.sequenceCount) {
        // Reached end of sequence array without finding duration==0 terminator
        reentryGuard = true;
        initMenuState();
        reentryGuard = false;
    }
}
