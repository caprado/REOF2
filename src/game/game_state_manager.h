#ifndef GAME_STATE_MANAGER_H
#define GAME_STATE_MANAGER_H

#include <stdint.h>

/**
 * @category game/frame
 * @status complete
 * @original func_001b76c0
 * @address 0x001b76c0
 * @description Initializes a frame entry in the frame table at 0x307d90.
 *              Clears 32 bytes at the entry, sets type ID to 0xc (12),
 *              and stores the callback/data pointer.
 * @param callback Callback pointer or data to store in the entry
 * @param index Frame entry slot index (0-31)
 * @windows_compatibility high
 * @author caprado
 */
void initializeFrameEntry(uintptr_t callback, int32_t index);

/**
 * @category game/state
 * @status complete
 * @original func_001ba2a0
 * @address 0x001ba2a0
 * @description Per-frame update loop. Processes N iterations, calling the frame
 *              update function each time. Optionally clears a sync value if a
 *              flag is set. After the loop, calls a timing function and stores result.
 * @param count Number of frame updates to process
 * @windows_compatibility high
 * @author caprado
 */
void processFrameUpdates(int32_t count);

/**
 * @category game/state
 * @status complete
 * @original func_001ba1d0
 * @address 0x001ba1d0
 * @description Main game state manager update - handles initialization sequence and per-frame updates.
 *              State 0: Initialization - sets up screen, calls init functions
 *              State 1: Running - updates counters and calls per-frame processing functions
 * @windows_compatibility high
 * @author caprado
 */
void updateGameStateManager(void);

/**
 * @category game/state
 * @status complete
 * @original func_001ba0f0
 * @address 0x001ba0f0
 * @description Processes game state sequence timer. Decrements timer and advances sequence.
 * @windows_compatibility high
 * @author caprado
 */
void processGameStateManager(void);

/**
 * @category game/state
 * @status complete
 * @original func_001ba010
 * @address 0x001ba010
 * @description Resets game state manager. Clears timer, index, and sequence pointer.
 * @windows_compatibility high
 * @author caprado
 */
void resetGameStateManager(void);

#endif // GAME_STATE_MANAGER_H
