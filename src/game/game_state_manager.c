#include "game_state_manager.h"
#include "game_data.h"
#include "game_init.h"
#include "game_secondary_init.h"
#include "frame_update.h"
#include "../graphics/graphics_init.h"
#include <string.h>

// Frame entry table at 0x00307d90 - 32-byte entries, indexed by slot number
// Used to track active frame callbacks/handlers
static uint8_t s_frameEntryTable[32 * 32];  // Original: 0x00307d90 - supports up to 32 entries

// Per-frame processing state
static uint8_t s_frameProcessingFlag = 0;   // Original: 0x003137a0 - controls clearing of gp-0x64d4
static uint32_t s_frameTimingValue = 0;     // Original: 0x003137d4 - result from func_001ac000
static uint32_t s_frameSyncValue = 0;       // Original: gp-0x64d4 - cleared when flag is set

// Forward declarations for unrefactored functions
extern int32_t func_001ac000(void);  // Returns timing/sync value
extern void func_001a8a50(void);  // Update function
extern int32_t func_00112118(void);  // Update function, returns status
extern float func_001aee10(void);  // Returns float value
extern void func_001aed20(void);  // Conditional update
extern void func_001b74b0(void);  // Frame finalization

/**
 * @category game/frame
 * @status complete
 * @original func_001b76c0
 * @address 0x001b76c0
 * @description Initializes a frame entry in the frame table at 0x307d90.
 *              Clears 32 bytes at the entry, sets type ID to 0xc (12),
 *              and stores the callback/data pointer.
 *
 * Original ASM:
 *   lui $v0, 0x30; addiu $v0, 0x7d90  ; v0 = 0x307d90 (table base)
 *   sll $v1, $v1, 5                    ; v1 = index * 32 (entry size)
 *   addu $s0, $v0, $v1                 ; s0 = &table[index]
 *   jal 0x107c70                       ; memset(s0, 0, 32)
 *   sh $v1, 0($s0)                     ; entry.type = 0xc
 *   sw $s1, 4($s0)                     ; entry.callback = a0
 *
 * @param callback Callback pointer or data to store in the entry
 * @param index Frame entry slot index (0-31)
 * @windows_compatibility high
 * @author caprado
 */
void initializeFrameEntry(uintptr_t callback, int32_t index) {
    // Calculate entry address: base + (index * 32)
    uint8_t* entry = s_frameEntryTable + (index * 32);

    // Clear the entry (32 bytes)
    memset(entry, 0, 0x20);

    // Set type ID at offset 0 (halfword) = 0xc (12)
    *(uint16_t*)(entry + 0) = 0xc;

    // Store callback/data pointer at offset 4 (word)
    *(uint32_t*)(entry + 4) = (uint32_t)callback;
}

/**
 * @category game/state
 * @status complete
 * @original func_001ba2a0
 * @address 0x001ba2a0
 * @description Per-frame update loop. Processes N iterations, calling the frame
 *              update function each time. Optionally clears a sync value if a
 *              flag is set. After the loop, calls a timing function and stores result.
 *
 * Original ASM:
 *   move $s1, $a0              ; s1 = count (loop limit)
 *   move $s0, $zero            ; s0 = 0 (loop counter)
 *   loop:
 *     lbu $v0, 0x37a0($at)     ; check flag at 0x3137a0
 *     beqz skip                ; if flag == 0, skip clear
 *     sw $zero, -0x64d4($gp)   ; clear sync value
 *   skip:
 *     jal 0x19f390             ; call frame update
 *     addiu $s0, 1             ; s0++
 *     slt (s0 < s1) -> loop
 *   jal 0x1ac000               ; call timing function
 *   sw $v0, 0x37d4($at)        ; store result
 *
 * @param count Number of frame updates to process
 * @windows_compatibility high
 * @author caprado
 */
void processFrameUpdates(int32_t count) {
    int32_t i;

    // Loop 'count' times
    for (i = 0; i < count; i++) {
        // Check flag at 0x3137a0 - if set, clear sync value
        if (s_frameProcessingFlag != 0) {
            s_frameSyncValue = 0;  // Original: sw $zero, -0x64d4($gp)
        }

        // Call frame update function
        executeFrameUpdate();
    }

    // Call timing function and store result
    s_frameTimingValue = func_001ac000();  // Original: sw $v0, 0x37d4($at)
}

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
void updateGameStateManager(void) {
    int32_t initResult;
    int32_t updateResult;
    float floatResult;

    // Check current state
    if (g_game.gameStateManagerState == 1) {
        // State 1: Per-frame processing
        goto state_running;
    } else if (g_game.gameStateManagerState == 0) {
        // State 0: Initialization
        goto state_init;
    } else {
        // Other states: Return immediately
        return;
    }

state_init:
    // Original: func_0019f080() - graphics system init (no params, 0x280/0x1c0 were unused)
    // Loop until initialization succeeds
    do {
        initResult = initializeGraphicsSystem();
    } while (initResult == 0);

    // Call initialization functions
    initializeGameSubsystems();       // Original: func_001ba660
    initializeSecondarySubsystems();  // Original: func_001ba960

    // Original: a0 = (0x1c << 16) + (-0x4180) = 0x1c0000 - 0x4180 = 0x1bBE80
    // Original: a1 = 0 (from delay slot, $a1 was set from $zero before call)
    initializeFrameEntry(0x1bBE80, 0);

    // Advance to running state
    g_game.gameStateManagerState = g_game.gameStateManagerState + 1;
    return;

state_running:
    // Per-frame processing - process 1 frame update
    // Original: a0 = 1 was set at start of function for state comparison,
    // and that value is still in $a0 when this call happens
    processFrameUpdates(1);

    // Update counters
    // counter2 = counter3 (copy previous value)
    g_game.counter2 = g_game.counter3;

    // counter1 increments each frame
    g_game.counter1 = g_game.counter1 + 1;

    // Call update functions
    func_001a8a50();

    // Call func_00112118 and store result
    updateResult = func_00112118();

    // Call func_001aee10 which returns a float, store to gameFloatValue
    floatResult = func_001aee10();
    g_game.gameFloatValue = floatResult;

    // If func_00112118 returned non-zero, call func_001aed20
    if (updateResult != 0) {
        func_001aed20();
    }

    // Frame finalization
    func_001b74b0();
}

/**
 * @category game/state
 * @status complete
 * @original func_001ba0f0
 * @address 0x001ba0f0
 * @description Processes game state sequence timer. Decrements timer and advances sequence.
 * @windows_compatibility high
 * @author caprado
 */
void processGameStateManager(void) {
    // Check if sequence is active
    if (g_game.sequenceActive == 0) {
        resetGameStateManager();
        return;
    }

    // Check if sequence array pointer is valid
    if (g_game.sequenceArray == NULL) {
        resetGameStateManager();
        return;
    }

    // Decrement timer by (1 << timerShift)
    int16_t decrement = 1 << g_game.timerShift;
    g_game.currentTimer = g_game.currentTimer - decrement;

    // If timer still positive, keep waiting
    if (g_game.currentTimer > 0) {
        return;
    }

    // Timer expired - load next sequence entry
    int16_t index = g_game.sequenceIndex;
    int16_t nextDuration = g_game.sequenceArray[index].duration;

    // Store as new timer value
    g_game.currentTimer = nextDuration;

    // If duration is 0, sequence has ended
    if (nextDuration == 0) {
        resetGameStateManager();
        return;
    }

    // Call the callback function for this sequence entry
    MenuCallback callback = g_game.sequenceArray[index].callback;
    if (callback != NULL) {
        callback();
    }

    // Advance to next sequence entry
    g_game.sequenceIndex = g_game.sequenceIndex + 1;
}

/**
 * @category game/state
 * @status complete
 * @original func_001ba010
 * @address 0x001ba010
 * @description Resets game state manager. Clears timer, index, and sequence pointer.
 * @windows_compatibility high
 * @author caprado
 */
void resetGameStateManager(void) {
    // Clear all game state manager variables
    g_game.currentTimer = 0;      // Original: sh $zero, 0x7f9c($at)
    g_game.sequenceIndex = 0;     // Original: sh $zero, 0x7f9e($at)
    g_game.sequenceArray = NULL;  // Original: sw $zero, 0x7fa0($at) - clearing pointer
    g_game.gameStateFlag = 0;     // Original: sb $zero, 0x7f91($at)
}
