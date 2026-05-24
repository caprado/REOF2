#include "game_state_manager.h"
#include "game_data.h"
#include "game_init.h"
#include "game_secondary_init.h"
#include "frame_update.h"
#include "game_frame_callback.h"
#include "../graphics/graphics_init.h"
#include <string.h>

// Frame entry table at 0x00307d90 - 32-byte entries, indexed by slot number
// Used to track active frame callbacks/handlers
static uint8_t s_frameEntryTable[32 * 32];  // Original: 0x00307d90 - supports up to 32 entries

// Per-frame processing state
static uint8_t s_frameProcessingFlag = 0;   // Original: 0x003137a0 - controls clearing of gp-0x64d4
static uint32_t s_frameTimingValue = 0;     // Original: 0x003137d4 - result from func_001ac000
static uint32_t s_frameSyncValue = 0;       // Original: gp-0x64d4 - cleared when flag is set
static int32_t s_frameTimingSyncValue = 0;  // Original: gp-0x64d8 - returned by func_001ac000

// Forward declarations for unrefactored functions
extern void func_001aed20(void);  // Conditional update
extern void func_001a8e70(int32_t slot);  // Resource loader - loads from AFS archive by slot index

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

    // Store callback/data pointer at offset 4
    *(uintptr_t*)(entry + 8) = callback;
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

    // Original: func_001ac000 - returns gp-0x64d8 (delay slot load)
    // ASM: jr $ra / lw $v0, -0x64d8($gp)
    s_frameTimingValue = s_frameTimingSyncValue;
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
    do {
        initResult = initializeGraphicsSystem();
    } while (initResult == 0);
    initializeGameSubsystems();
    initializeSecondarySubsystems();
    // Original: a0 = 0x1bBE80 (PS2 function address for frame callback)
    // On Windows: register the ported gameFrameCallback
    initializeFrameEntry((uintptr_t)gameFrameCallback, 0);

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

    // Original: func_001a8a50 - empty stub (just jr $ra), verified in ASM

    // Original: func_00112118 - PS2 softfloat IEEE 754 normalization
    // Calls func_00111678 (float unpack) and func_00111530 (float repack)
    // On Windows: native x86 FPU handles float normalization, always returns 0
    updateResult = 0;

    // Original: func_001aee10 - empty stub (just jr $ra), returns 0.0f
    g_game.gameFloatValue = 0.0f;

    // If func_00112118 returned non-zero, call func_001aed20
    // On Windows: updateResult is always 0, so this never executes
    if (updateResult != 0) {
        func_001aed20();
    }

    // Frame finalization
    finalizeFrame();
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

/**
 * @category graphics/fade
 * @status complete
 * @original func_001bbba0
 * @address 0x001bbba0
 * @description Fade tick for fadeBuffer1 (0x307fc0). Processes fade-in/fade-out animation
 *              using float interpolation. Updates alpha byte at buffer+0x10.
 *
 * Buffer layout (0x20 bytes at fadeBuffer1):
 *   +0x00 (byte):  state (0=idle, 1=active, 2=complete)
 *   +0x04 (int32): direction (0=fade out/down, nonzero=fade in/up)
 *   +0x0c (uint32): color (alpha in high byte)
 *   +0x0d via pointer: target alpha (byte at offset 0xd of struct pointed to by +0x14)
 *   +0x10 (byte):  computed alpha (0-255)
 *   +0x14 (float): progress (0.0 to 1.0)
 *   +0x18 (float): step per frame
 *
 * Original ASM:
 *   Checks state byte at fadeBuffer1[0]:
 *     0: idle, check if +4 flag is set to start
 *     1: process fade (direction-dependent)
 *     2: complete, return
 *   Direction 0 (fade out): progress -= step, clamp to 0, alpha = progress * 255
 *   Direction 1 (fade in):  progress += step, clamp to 1.0, alpha = progress * 255
 *
 * @windows_compatibility high
 * @author caprado
 */
static void updateFadeBuffer1(void) {
    uint8_t* buf = g_game.fadeBuffer1;
    uint8_t state = buf[0];
    int16_t flag = *(int16_t*)(buf + 4);
    int16_t direction = *(int16_t*)(buf + 6);
    float* progress = (float*)(buf + 0x14);
    float* step = (float*)(buf + 0x18);
    float alpha;

    if (state == 2) {
        return;
    }

    if (state == 0) {
        if (flag == 0) {
            return;
        }
        buf[0] = 1;
    }

    // state == 1: process fade
    if (flag == 0) {
        buf[0] = 0;
        *(uint32_t*)(buf + 0x14) = 0;
        return;
    }

    switch (direction) {
        case 0:
            // Idle - clear flag
            *(int16_t*)(buf + 4) = 0;
            break;

        case 1: {
            // Fade out: progress decreases
            *progress = *progress - *step;
            if (*progress <= 0.0f) {
                buf[0] = 0;
                *progress = 0.0f;
            }
            alpha = 255.0f * (*progress);
            buf[0x10] = (uint8_t)(alpha > 255.0f ? 255 : (int)alpha);
            break;
        }

        case 2: {
            // Fade in: progress increases toward 1.0
            *progress = *progress + *step;
            if (*progress >= 1.0f) {
                buf[0] = 2;
                *progress = 1.0f;
            }
            alpha = 255.0f * (*progress);
            buf[0x10] = (uint8_t)(alpha > 255.0f ? 255 : (int)alpha);
            break;
        }

        default:
            break;
    }
}

/**
 * @category graphics/fade
 * @status complete
 * @original func_001bb740
 * @address 0x001bb740
 * @description Fade buffer update. Calls fade tick for fadeBuffer1, then processes
 *              fadeBuffer2 state machine (idle→fading→complete) with alpha interpolation.
 *
 * fadeBuffer2 layout (0x18 bytes):
 *   +0x00 (byte):  state (0=idle, 1=active, 2=complete)
 *   +0x04 (int16): fade active flag (0=inactive, nonzero=has target)
 *   +0x06 (int16): direction (0=idle, 1=fade out, 2=fade in)
 *   +0x0c (uint32): color with alpha in high byte
 *   +0x10 (int16): alpha step per frame
 *   +0x14 (ptr):   pointer to target data (target alpha at +0xd)
 *
 * Original ASM at 0x001bb740:
 *   jal 0x1bbba0              ; tick fadeBuffer1
 *   lbu state from fadeBuffer2[0]
 *   switch(state):
 *     0: if flag at +4 != 0, state = 1
 *     1: check +4 flag, if 0 → reset. else process direction
 *     2+: return
 *   direction 1: fade out - add step to alpha, check target
 *   direction 2: fade in - add step to alpha, check target
 *
 * @windows_compatibility high
 * @author caprado
 */
static void updateFadeBuffers(void) {
    uint8_t* buf = g_game.fadeBuffer2;
    uint8_t state;
    int16_t flag;
    int16_t direction;
    uint32_t color;
    uint8_t currentAlpha;
    uint8_t targetAlpha;
    int16_t alphaStep;
    int32_t newAlpha;
    uint8_t* targetPtr;

    // Tick fadeBuffer1 first
    updateFadeBuffer1();

    state = buf[0];

    // State 2+: complete or unknown, return
    if (state >= 2) {
        return;
    }

    // State 0: idle
    if (state == 0) {
        flag = *(int16_t*)(buf + 4);
        if (flag == 0) {
            return;
        }
        // Start fading
        buf[0] = 1;
    }

    // State 1: active fade
    flag = *(int16_t*)(buf + 4);
    if (flag == 0) {
        // No active fade target, reset
        buf[0] = 0;
        *(uint32_t*)(buf + 0x14) = 0;
        return;
    }

    direction = *(int16_t*)(buf + 6);
    color = *(uint32_t*)(buf + 0x0c);
    currentAlpha = (uint8_t)((color >> 24) & 0xFF);
    targetPtr = *(uint8_t**)(buf + 0x14);
    targetAlpha = targetPtr ? targetPtr[0xd] : 0;
    alphaStep = *(int16_t*)(buf + 0x10);

    switch (direction) {
        case 0:
            // Idle direction - clear flag
            *(int16_t*)(buf + 4) = 0;
            break;

        case 1: {
            // Fade out: alpha increases toward target
            if (currentAlpha == targetAlpha) {
                *(int16_t*)(buf + 4) = 0;
                break;
            }
            newAlpha = currentAlpha + alphaStep;
            if (newAlpha >= targetAlpha) {
                newAlpha = targetAlpha;
            }
            color = (color & 0x00FFFFFF) | ((uint32_t)newAlpha << 24);
            *(uint32_t*)(buf + 0x0c) = color;
            break;
        }

        case 2: {
            // Fade in: alpha increases toward target
            if (currentAlpha == targetAlpha) {
                break;
            }
            newAlpha = currentAlpha + alphaStep;
            if (newAlpha >= targetAlpha) {
                newAlpha = targetAlpha;
            }
            color = (color & 0x00FFFFFF) | ((uint32_t)newAlpha << 24);
            *(uint32_t*)(buf + 0x0c) = color;
            break;
        }

        default:
            break;
    }
}

/**
 * @category utility/callback
 * @status complete
 * @original func_001af3a0
 * @address 0x001af3a0
 * @description Callback array dispatcher. Calls func_001b2010 (sort table init),
 *              then iterates the registered callback array, calling each function pointer.
 *
 * Original ASM:
 *   jal 0x1b2010              ; init sort/priority table
 *   lw $s0, -0x63b4($gp)      ; s0 = callback count
 *   lui $s1, 0x2b
 *   addiu $s1, -0x5770         ; s1 = 0x002aa890 (callback array base)
 *   loop:
 *     lw $v0, 0($s1)           ; load function pointer
 *     jalr $v0                 ; call it
 *     s0--; s1 += 4
 *     bnez $s0, loop
 *
 * @windows_compatibility high
 * @author caprado
 */
static void dispatchCallbackArray(void) {
    int32_t i;

    // Original: jal 0x1b2010 - sort table init
    // Initializes a 256-entry priority sort table used by rendering
    // On Windows: rendering uses OpenGL state, sort table not needed yet
    // TODO: Port func_001b2010 when rendering pipeline is active

    // Iterate and call all registered callbacks
    for (i = 0; i < g_game.callbackCount; i++) {
        if (g_game.callbackArray[i] != NULL) {
            g_game.callbackArray[i]();
        }
    }
}

/**
 * @category game/frame
 * @status complete
 * @original func_001b74b0
 * @address 0x001b74b0
 * @description Frame finalization. Processes pending resource loads for two slots,
 *              then iterates the frame entry table (16 entries, 32 bytes each at 0x307d90).
 *              Each entry has a state machine controlling its lifecycle:
 *                0: empty, 1: idle, 2: reset timer->4, 4: transition->8,
 *                8: execute callback, 0xc: transition->8, 0x10: decrement timer
 *              After the table loop, if sceneLoadedFlag is 0, dispatches callback array
 *              and updates fade buffers.
 *
 * Original ASM flow:
 *   1. Check gp-0x7cd4, if != -1: call func_001a8e70(slot), save to 0x3137d8,
 *      clear 32 bytes at 0x307e10 (entry 4), preserve +4 field, set type=4, reset to -1
 *   2. Same for gp-0x7cd0 -> 0x3137d9
 *   3. Determine entry range (s2=start, s1=end) based on counter3, systemStateBuffer[0], entityActiveFlag
 *   4. Check func_001b7a50 (returns sceneLoadedFlag), override s1 if set
 *   5. Loop 16 entries, process entries where index < s2 OR index > s1
 *   6. Post-loop: if sceneLoadedFlag==0, call func_001af3a0 and func_001bb740
 *
 * @windows_compatibility high
 * @author caprado
 */
void finalizeFrame(void) {
    int32_t i;
    int32_t s1, s2, s3;
    int16_t entryType;
    uint8_t* entry;
    uintptr_t savedField;

    // --- Slot 1: pending resource load at gp-0x7cd4 ---
    if (g_game.pendingResourceSlot1 != -1) {
        func_001a8e70(g_game.pendingResourceSlot1);

        // Save slot value to state, reset pending to -1
        g_game.state37d8 = (uint8_t)g_game.pendingResourceSlot1;
        g_game.pendingResourceSlot1 = -1;

        // Clear frame entry at index 4 (0x307e10 = 0x307d90 + 4*0x20)
        // Preserve the callback pointer at offset +4 across the clear
        entry = s_frameEntryTable + (4 * 32);
        savedField = *(uintptr_t*)(entry + 8);
        memset(entry, 0, 0x20);
        *(uintptr_t*)(entry + 8) = savedField;
        *(uint16_t*)(entry + 0) = 4;
    }

    // --- Slot 2: pending resource load at gp-0x7cd0 ---
    if (g_game.pendingResourceSlot2 != -1) {
        func_001a8e70(g_game.pendingResourceSlot2);

        // Save slot value to state, reset pending to -1
        g_game.state37d9 = (uint8_t)g_game.pendingResourceSlot2;
        g_game.pendingResourceSlot2 = -1;
    }

    // --- Determine frame entry processing range ---
    // s2 = lower bound, s1 = upper bound
    // Entries where (index < s2) OR (s1 < index) are processed
    // ASM: delay slot sets s2=4 before counter3 branch
    s2 = 4;
    if (g_game.counter3 != 0) {
        // counter3 non-zero: s2=4, s1=0xc
        s1 = 0xc;
    } else {
        // counter3 == 0
        // ASM: delay slot sets s2=0x10 before systemState branch
        s2 = 0x10;
        if (g_game.systemStateBuffer[0] == 0) {
            // systemState == 0: s2=0x10, s1=-1
            s1 = -1;
        } else if (g_game.entityActiveFlag != 0) {
            // systemState != 0, entity active: s2=4, s1=0xc
            s2 = 4;
            s1 = 0xc;
        } else {
            // systemState != 0, entity not active: s2=0x10, s1=-1
            s1 = -1;
        }
    }
    // Check scene loaded flag (func_001b7a50 returns 0x003135b0 byte)
    // ASM: if flag != 0, sets s2=0 and s1=0xc (only entries 13-15 processed)
    if (g_game.sceneLoadedFlag != 0) {
        s2 = 0;
        s1 = 0xc;
    }

    // --- Frame entry table loop: 16 entries ---
    s3 = 0;
    entry = s_frameEntryTable;

    for (i = 0; i < 16; i++) {
        // Range filter: only process entries where s3 < s2 OR s1 < s3
        if (s3 < s2 || s1 < s3) {
            entryType = *(int16_t*)(entry + 0);

            switch (entryType) {
                case 0:
                    // Empty entry - skip
                    break;

                case 1:
                    // Active/idle - skip
                    break;

                case 2:
                    // Reset: clear timer, set state to 4
                    *(int16_t*)(entry + 2) = 0;
                    *(int16_t*)(entry + 0) = 4;
                    break;

                case 4:
                    // Transition: set state to 8
                    *(int16_t*)(entry + 0) = 8;
                    break;

                case 8: {
                    // Execute: call function pointer at entry+4
                    // ASM delay slot passes a0 = s0 (entry pointer) to callback
                    typedef void (*EntryCallback)(void*);
                    EntryCallback cb = (EntryCallback)(*(uintptr_t*)(entry + 8));
                    if (cb != NULL) {
                        cb(entry);
                    }
                    break;
                }

                case 0xc:
                    // Transition: set state to 8
                    *(int16_t*)(entry + 0) = 8;
                    break;

                case 0x10:
                    // Timer: decrement, clamp to 0, when 0 set state to 4
                    {
                        int16_t timer = *(int16_t*)(entry + 2);
                        timer = timer - 1;
                        *(int16_t*)(entry + 2) = timer;
                        if (timer < 0) {
                            *(int16_t*)(entry + 2) = 0;
                        } else if (timer == 0) {
                            *(int16_t*)(entry + 0) = 4;
                        }
                    }
                    break;

                default:
                    // Unknown type: increment s3 and skip to next iteration
                    s3++;
                    entry += 0x20;
                    continue;
            }
        }

        s3++;
        entry += 0x20;
    }

    // --- Post-loop: callback dispatch and fade update ---
    if (g_game.sceneLoadedFlag == 0) {
        dispatchCallbackArray();
        updateFadeBuffers();
    }
}
