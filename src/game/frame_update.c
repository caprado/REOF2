#include "frame_update.h"
#include "game_data.h"
#include "../audio/audio_channel_fade.h"

// Frame counter - incremented each frame update
static uint32_t s_frameCounter = 0;  // Original: gp-0x6450

// Frame state variables
static uint32_t s_frameStateA = 0;   // Original: 0x0028ffcc
static uint32_t s_frameStateB = 0;   // Original: 0x00290360
static int32_t s_frameStateC = 0;    // Original: 0x0029035c

// Render frame reference counter - Original: gp-0x6360
// Accessed by func_001ae8d0 (increment) and func_001ae910 (decrement)
static uint32_t s_renderFrameCounter = 0;

// Render frame state - Original: 0x00290370
// Values: 0 = inactive, 1 = active, 2 = processing
static uint32_t s_renderFrameState = 0;

// Forward declarations for subsystem functions that need further investigation/porting
extern void func_001a17e0(void);  // Camera/view update - copies camera data, updates matrices
extern void func_001ba8f0(void);  // System update - updates 4 systems at 0x3136e0/3710/3740/3770
extern void func_001d30b0(void);  // Conditional update - calls 0x34d600 if flag 0x3137b5 == 1

// Sync counter - Original: gp-0x64d4
// Used by func_001a8960 to control sync loop iterations
static uint32_t s_syncCounter = 0;

// Sync pending flag - Original: 0x0028ffd0
// Set to 1 to request sync, loop continues while non-zero
static uint32_t s_syncPending = 0;

// Frame comparison values - Original: 0x0028ffc4, 0x0028ffcc
static uint32_t s_frameCompareA = 0;  // 0x0028ffc4
static uint32_t s_frameCompareB = 0;  // 0x0028ffcc

// Streaming active flag - Original: gp-0x63f4
// When set, calls streaming update instead of VSync
static uint32_t s_streamingActive = 0;

/**
 * @category game/frame
 * @status complete
 * @original func_00195e90
 * @address 0x00195e90
 * @description Sets render frame state to active (1).
 *              Called by beginRenderFrame when render frame counter transitions from 0.
 * @windows_compatibility high
 * @author caprado
 */
static void setRenderFrameActive(void) {
    s_renderFrameState = 1;
}

/**
 * @category game/frame
 * @status complete
 * @original func_00195ea0
 * @address 0x00195ea0
 * @description Sets render frame state to processing (2).
 *              Called by endRenderFrame while render frame counter is active.
 * @windows_compatibility high
 * @author caprado
 */
static void setRenderFrameProcessing(void) {
    s_renderFrameState = 2;
}

/**
 * @category game/frame
 * @status complete
 * @original func_001ae8d0
 * @address 0x001ae8d0
 * @description Checks render frame counter. If 0, calls setRenderFrameActive and increments.
 *              Part of begin/end pair with endRenderFrame.
 *
 * Original ASM:
 *   lw $v1, -0x6360($gp)      ; load counter
 *   bnez $v1, return          ; if non-zero, skip
 *   jal 0x195e90              ; call setup function
 *   lw $v1, -0x6360($gp)      ; reload counter
 *   addiu $v1, 1              ; increment
 *   sw $v1, -0x6360($gp)      ; store counter
 *
 * @windows_compatibility high
 * @author caprado
 */
static void beginRenderFrame(void) {
    if (s_renderFrameCounter == 0) {
        setRenderFrameActive();
        s_renderFrameCounter = s_renderFrameCounter + 1;
    }
}

/**
 * @category game/frame
 * @status complete
 * @original func_001ae910
 * @address 0x001ae910
 * @description Checks render frame counter. If non-zero, calls setRenderFrameProcessing and decrements.
 *              Part of begin/end pair with beginRenderFrame.
 *
 * Original ASM:
 *   lw $v1, -0x6360($gp)      ; load counter
 *   beqz $v1, return          ; if zero, skip
 *   jal 0x195ea0              ; call cleanup function
 *   lw $v1, -0x6360($gp)      ; reload counter
 *   addiu $v1, -1             ; decrement
 *   sw $v1, -0x6360($gp)      ; store counter
 *
 * @windows_compatibility high
 * @author caprado
 */
static void endRenderFrame(void) {
    if (s_renderFrameCounter != 0) {
        setRenderFrameProcessing();
        s_renderFrameCounter = s_renderFrameCounter - 1;
    }
}

/**
 * @category game/frame
 * @status complete
 * @original func_001ba360
 * @address 0x001ba360
 * @description Render update dispatcher. Only executes when gameStateManagerState is non-zero.
 *              Calls beginRenderFrame, graphics functions, scene compositor, and endRenderFrame.
 *              Note: func_001ba950, func_001b3450, func_001ac0e0 are empty stubs (just jr $ra).
 *
 * Original ASM:
 *   lw $v1, -0x6384($gp)      ; load gameStateManagerState
 *   beqz $v1, return          ; if 0, return immediately
 *   jal 0x1ae8d0              ; beginRenderFrame
 *   jal 0x1ba950              ; empty stub
 *   jal 0x1b5920              ; graphics buffer/DMA management
 *   jal 0x1b3450              ; empty stub
 *   jal 0x1bb890              ; scene compositor
 *   jal 0x1ae910              ; endRenderFrame
 *   jal 0x1ac0e0              ; empty stub
 *
 * @windows_compatibility medium
 * @author caprado
 */
void updateRenderState(void) {
    if (g_game.gameStateManagerState == 0) {
        return;
    }

    beginRenderFrame();

    // Original: func_001ba950 - empty stub (just jr $ra)

    // Original: func_001b5920 - PS2 DMA buffer management
    // Waits for DMA completion (polls 0x1000a000), calls iFlushCache,
    // kicks DMA transfer via func_001033b0, toggles double buffer index.
    // On Windows: OpenGL handles buffer management via SwapBuffers in main loop.

    // Original: func_001b3450 - empty stub (just jr $ra)

    // Original: func_001bb890 - PS2 scene compositor
    // Sets gp-0x6378 flag, calls memory/state functions, handles fade overlay,
    // calls func_001ab530 for screen rendering which submits GS packets.
    // On Windows: OpenGL rendering is handled separately. Fade overlay needs porting.

    endRenderFrame();

    // Original: func_001ac0e0 - empty stub (just jr $ra)
}

/**
 * @category game/frame
 * @status complete
 * @original func_0019f390
 * @address 0x0019f390
 * @description Per-frame update dispatcher. Executes the main frame update sequence:
 *              rendering, graphics sync, input processing, buffer management, and game logic.
 *              On PS2, this also managed timer registers - on Windows these are abstracted.
 *
 * Original ASM:
 *   jal 0x1ba360             ; render update
 *   jal 0x18d4c0             ; graphics sync
 *   jal 0x1a8990             ; input processing
 *   lui $at, 0x1000
 *   addiu $v0, $zero, 0x83
 *   sw $v0, 0x10($at)        ; Timer control = 0x83
 *   sw $zero, 0($at)         ; Timer count = 0
 *   sw $zero, -0x34($at)     ; clear 0x28ffcc
 *   lw $v0, -0x6450($gp)     ; load frame counter
 *   addiu $v0, 1             ; increment
 *   sw $v0, -0x6450($gp)     ; store frame counter
 *   jal 0x18d2f0             ; graphics buffer swap
 *   jal 0x18dba0             ; graphics buffer select
 *   jal 0x1a05c0             ; display update
 *   sw $zero, 0x360($at)     ; clear 0x290360
 *   addiu $v0, -1
 *   sw $v0, 0x35c($at)       ; set 0x29035c = -1
 *   jal 0x1ba310             ; game update
 *   addiu $v0, 1             ; return 1
 *
 * @return Always returns 1 to indicate success
 * @windows_compatibility medium
 * @author caprado
 */
int32_t executeFrameUpdate(void) {
    // Call render update function
    updateRenderState();

    // Original: func_0018d4c0 - PS2 VBlank/DMA sync
    // Polls hardware register at 0x1000a000 in loop waiting for DMA completion,
    // then calls func_00103650 for additional sync.
    // On Windows: Frame timing handled by Sleep(16) in main loop.

    // Call frame sync (input/interrupt processing)
    // Original: func_001a8990
    processFrameSync();

    // Original PS2 timer register writes:
    // *(uint32_t*)0x10000010 = 0x83;  // Timer control register
    // *(uint32_t*)0x10000000 = 0;     // Timer count register
    // On Windows: Timer management handled by OS/framework

    // Clear frame state
    s_frameStateA = 0;  // Original: sw $zero, -0x34($at) -> 0x0028ffcc

    // Increment frame counter
    s_frameCounter = s_frameCounter + 1;  // Original: lw/addiu/sw at gp-0x6450

    // Original: func_0018d2f0 - PS2 DMA buffer swap
    // Toggles buffer index (g_00290374 ^= 1), calls iFlushCache,
    // initiates DMA transfer via func_001033b0.
    // On Windows: OpenGL handles buffer swap via SwapBuffers in main loop.

    // Original: func_0018dba0 - PS2 graphics buffer selection
    // Reads s_renderFrameState (0x00290370), if state is 0/1/2 sets buffer pointers
    // at 0x00290378, 0x0029037c, 0x00290380 based on current buffer index.
    // On Windows: OpenGL manages its own buffer state.

    // Original: func_001a05c0 - PS2 GS display setup
    // Configures GS display registers, calculates screen coordinates,
    // calls func_0018dc30, func_001899f8, func_0018ce40 for GS packet setup.
    // On Windows: OpenGL projection set up in opengl_init_gl().

    // Clear/set frame state values
    s_frameStateB = 0;   // Original: sw $zero, 0x360($at) -> 0x00290360
    s_frameStateC = -1;  // Original: sw $v0, 0x35c($at) -> 0x0029035c

    // Call game update function
    // Original: func_001ba310
    updateGameSubsystems();

    // Return success
    return 1;
}

/**
 * @brief Get the current render frame state
 * @return 0 = inactive, 1 = active, 2 = processing
 */
uint32_t getRenderFrameState(void) {
    return s_renderFrameState;
}

/**
 * @category game/frame
 * @status complete
 * @original func_001a8960
 * @address 0x001a8960
 * @description Sync counter management. If counter (gp-0x64d4) is 0, sets sync pending flag.
 *              Otherwise decrements the counter.
 *
 * Original ASM:
 *   lw $v1, -0x64d4($gp)      ; load sync counter
 *   bnez $v1, decrement       ; if non-zero, go to decrement
 *   addiu $v1, $zero, 1       ; v1 = 1
 *   sw $v1, -0x30($at)        ; set sync pending = 1 (0x0028ffd0)
 *   jr $ra
 * decrement:
 *   addiu $v1, $v1, -1        ; counter--
 *   sw $v1, -0x64d4($gp)      ; store counter
 *
 * @windows_compatibility high
 * @author caprado
 */
static void updateSyncCounter(void) {
    if (s_syncCounter != 0) {
        // Decrement counter
        s_syncCounter = s_syncCounter - 1;
    } else {
        // Counter is 0, set sync pending
        s_syncPending = 1;
    }
}

/**
 * @category game/frame
 * @status complete
 * @original func_001a8990
 * @address 0x001a8990
 * @description Frame synchronization and input processing.
 *              On PS2: Polls IOP for controller input, then loops waiting for
 *              either streaming data or VSync completion.
 *              On Windows: Input is handled by opengl_process_events() in main loop,
 *              and frame timing is handled by Sleep(16). This function now just
 *              manages the sync state variables to maintain game logic compatibility.
 *
 * Original flow:
 *   1. Call func_001ac140(1) - IOP controller polling
 *   2. Compare frame counters (0x0028ffc4 vs 0x0028ffcc)
 *   3. Call func_001a8960() - sync counter management
 *   4. Loop while sync pending (0x0028ffd0 != 0):
 *      - If streaming flag set: call func_0015f710 (streaming update)
 *      - Else: call func_00113098 (VSync wait)
 *
 * On Windows:
 *   - Controller input handled by opengl_process_events() each frame
 *   - VSync/frame timing handled by Sleep(16) in main loop
 *   - Streaming will need separate implementation when video playback is added
 *
 * @windows_compatibility high
 * @author caprado
 */
void processFrameSync(void) {
    // Original: thunk_func_001ac140(1) - IOP controller polling
    // On Windows: Input is already processed by opengl_process_events() in main loop
    // No action needed here - input state is updated before this is called

    // Compare frame counters to determine sync path
    // Original: slt $at, $v0, $v1 (0x0028ffc4 < 0x0028ffcc)
    if (s_frameCompareA < s_frameCompareB) {
        // Path when frameA < frameB
        updateSyncCounter();

        // Original: Check streaming flag and call appropriate sync function
        // On Windows: Frame timing handled by main loop, streaming not yet implemented
        if (s_streamingActive != 0) {
            // Original: func_0015f710() - streaming/video update
            // TODO: Implement video streaming when needed
        } else {
            // Original: func_00113098() - VSync/graphics sync
            // On Windows: OpenGL SwapBuffers handles this in main loop
        }
    } else {
        // Path when frameA >= frameB
        // Original: Store (frameA & 1) to 0x0028ffbc before calling sync
        // This tracks odd/even frame for double buffering

        updateSyncCounter();

        // Original: Loop while s_syncPending != 0
        // On Windows: We process one sync per frame, no busy-wait loop needed
        // The sync state is cleared after processing

        if (s_streamingActive != 0) {
            // Original: func_0015f710() - streaming/video update
            // TODO: Implement video streaming when needed
        } else {
            // Original: func_00113098() - VSync/graphics sync
            // On Windows: OpenGL SwapBuffers handles this in main loop
        }
    }

    // Clear sync pending - on PS2 this happened when the loop exited
    // On Windows we just process one iteration per frame
    s_syncPending = 0;
}

/**
 * @brief Set the streaming active flag
 * @param active 1 to enable streaming mode, 0 for normal VSync mode
 */
void setStreamingActive(uint32_t active) {
    s_streamingActive = active;
}

/**
 * @brief Get current streaming active state
 * @return Current streaming flag value
 */
uint32_t getStreamingActive(void) {
    return s_streamingActive;
}

/**
 * @category game/update
 * @status complete
 * @original func_001ba310
 * @address 0x001ba310
 * @description Main game subsystem update dispatcher. Only executes when gameStateManagerState
 *              is non-zero. Calls 6 subsystem update functions in sequence:
 *              1. Audio fade/volume control
 *              2. Empty stub (func_001b3430 - just returns)
 *              3. Camera/view matrix update
 *              4. System state updates (4 subsystems)
 *              5. Streaming/IO update (func_001ac9c0 - not found, likely streaming)
 *              6. Conditional subsystem update
 *
 * Original ASM:
 *   lw $v1, -0x6384($gp)      ; load gameStateManagerState
 *   beqz $v1, return          ; if 0, return immediately
 *   jal 0x1ade90              ; audio fade update
 *   jal 0x1b3430              ; empty stub
 *   jal 0x1a17e0              ; camera update
 *   jal 0x1ba8f0              ; system updates
 *   jal 0x1ac9c0              ; streaming update (file not found)
 *   jal 0x1d30b0              ; conditional update
 *
 * @windows_compatibility medium - subsystem functions need individual porting
 * @author caprado
 */
void updateGameSubsystems(void) {
    // Only update when game state manager is active
    if (g_game.gameStateManagerState == 0) {
        return;
    }

    // 1. Audio fade/volume control
    // Original: func_001ade90
    // Iterates 3 audio channels, manages fade timing, calls func_00132478 for volume
    updateAudioChannelFade();

    // 2. Empty stub - Original: func_001b3430
    // Just returns immediately, no operation needed

    // 3. Camera/view update
    // Original: func_001a17e0
    // Copies camera data from 0x2a0f40 to gp-0x6430 pointer, updates view matrices
    func_001a17e0();

    // 4. System state updates
    // Original: func_001ba8f0
    // Calls func_001b0430, then func_001b06a0 for 4 systems at:
    // 0x3136e0, 0x313710, 0x313740, 0x313770, then func_001b0ae0
    func_001ba8f0();

    // 5. Streaming/IO update
    // Original: func_001ac9c0 -> trampoline to func_001ad1b0
    // I/O state machine - handles async model/data loading
    // Contains PS2-specific async I/O (func_001a7910, func_001a7a60)
    // TODO: Implement Windows async file loading equivalent

    // 6. Conditional subsystem update
    // Original: func_001d30b0
    // If flag at 0x3137b5 == 1, calls func_0034d600
    func_001d30b0();
}
