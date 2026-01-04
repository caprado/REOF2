#include "game_secondary_init.h"
#include "game_state_sequence.h"
#include "game_data.h"
#include "../memory/resource_pool.h"
#include "../graphics/fade_control.h"
#include <string.h>

// Static pointer table at 0x0021c950
static const uint32_t s_pointerTableAddr = 0x0021c950;

// Buffer at 0x002a5240 - cleared during I/O init
static uint8_t s_ioStateBuffer[0x1c8];

// Pointer derived from secondaryBuffer (0x002a5248)
static void* s_ioBufferPointer = NULL;

// I/O system initialized flag (gp-0x63dc)
static uint32_t s_ioSystemInitialized = 0;

// Buffer at 0x32e0f0 (gp-0x6240) - resource state buffer
static uint8_t s_resourceStateBuffer[0x98];

// Resource subsystems ready flag (0x3137b7)
static uint8_t s_resourceSubsystemsReady = 0;

/**
 * @category game/init
 * @status complete
 * @original func_001acfe0
 * @address 0x001acfe0
 * @description Clears I/O state buffer and sets up I/O buffer pointer from secondaryBuffer.
 * @windows_compatibility high
 * @author caprado
 */
static void initializeIOBuffers(void) {
    // Original: memset(0x2a5240, 0, 0x1c8)
    memset(s_ioStateBuffer, 0, 0x1c8);

    // Original: if secondaryBuffer != 0, store secondaryBuffer + 0x80000 to 0x2a5248
    if (g_game.secondaryBuffer != NULL) {
        s_ioBufferPointer = (uint8_t*)g_game.secondaryBuffer + 0x80000;
    }
}

/**
 * @category game/init
 * @status complete
 * @original func_001ac100
 * @address 0x001ac100
 * @description Initializes I/O subsystem. On PS2, creates semaphores and I/O threads.
 *              On Windows, only the buffer initialization is needed.
 * @windows_compatibility high
 * @author caprado
 */
static void initializeIOSubsystem(void) {
    // Original: func_001a6d80 - PS2 semaphore/IOP init - not needed on Windows
    // Original: func_001a7970(0x10) - PS2 thread/DMA setup - not needed on Windows

    // Original: func_001acfe0 - buffer init - portable
    initializeIOBuffers();

    // Original: sw $zero, -0x63dc($gp)
    s_ioSystemInitialized = 0;

    // Original returns 1, but we don't use the return value
}

/**
 * @category game/init
 * @status complete
 * @original func_001d3110
 * @address 0x001d3110
 * @description Initializes resource state buffer. On PS2, also calls func_0015e360 which
 *              initializes the PS2 EE subsystem, GSC (Graphics Synthesizer Controller),
 *              and CRI Middleware (Sofdec/ADX). For Windows, only buffer init is needed.
 *              Graphics/audio init will be handled separately with Windows APIs.
 * @windows_compatibility high
 * @author caprado
 */
static void initializeResourceStateBuffer(void) {
    // Original: v0 = 0x33 << 16 + -0x1f10 = 0x32e0f0
    // Original: sw v0, -0x6240($gp) - store buffer pointer
    // Clear the resource state buffer (0x98 bytes)
    memset(s_resourceStateBuffer, 0, 0x98);

    // Original: jal 0x15e360 - PS2 main subsystem initializer
    // Removed for Windows - func_0015e360 initializes:
    //   - PS2 Emotion Engine (EE) subsystems
    //   - GSC (Graphics Synthesizer Controller)
    //   - CRI Middleware (mwPly - Sofdec video, ADX audio)
    //   - PS2 threading for rendering and I/O
    // Windows equivalent: OpenGL/DirectX context, OpenAL audio, etc.
    // Will be implemented in dedicated graphics/audio init modules.
}

/**
 * @category game/init
 * @status complete
 * @original func_001ac020
 * @address 0x001ac020
 * @description Initializes resource subsystems. On PS2, this sets up DVD filesystem,
 *              threading, and loads initial files. On Windows, only buffer initialization
 *              and the ready flag are needed.
 * @windows_compatibility low
 * @author caprado
 */
static void initializeResourceSubsystems(void) {
    // Original: jal 0x1a82b0 - DVD filesystem setup ("Setup DVD file system.\n")
    // PS2-specific, removed for Windows

    // Original: jal 0x1d3110 - buffer initialization
    initializeResourceStateBuffer();

    // Original: jal 0x129ea8 - PS2 threading init with ReferThreadStatus
    // PS2-specific, removed for Windows

    // Original: jal 0x12b2e0 - PS2 thread/rendering init
    // PS2-specific, removed for Windows

    // Original: sb $v0, 0x37b7($at) where v0 = 1
    // Set subsystem ready flag
    s_resourceSubsystemsReady = 1;

    // Original: jal 0x1a8600 - loads "0flist.dir" from "cdrom0:"
    // PS2 filesystem, removed for Windows

    // Original: jal 0x1a90e0 - loads "netbio01.dat" and "romdata.afs"
    // Network/PS2 file loading, removed for Windows

    // Original: jal 0x1aaee0 - empty stub, removed
}

/**
 * @category game/init
 * @status complete
 * @original func_001b7f80
 * @address 0x001b7f80
 * @description Stores pointer table address to resource entry base.
 * @windows_compatibility high
 * @author caprado
 */
static void initializePointerTable(void) {
    // Original: v1 = 0x220000 + -0x36b0 = 0x21c950
    // Stores pointer to gp-0x6398
    g_game.resourceEntryBase = (void*)s_pointerTableAddr;
}

/**
 * @category game/init
 * @status complete
 * @original func_001ba960
 * @address 0x001ba960
 * @description Initializes secondary game subsystems including I/O, resources, and state.
 * @windows_compatibility high
 * @author caprado
 */
void initializeSecondarySubsystems(void) {
    // Original: jal 0x1ac150 -> jumps to 0x1ac100
    initializeIOSubsystem();

    // Original: jal 0x1ac020
    initializeResourceSubsystems();

    // Original: jal 0x1b7f80 - store pointer table address
    initializePointerTable();

    // Original: jal 0x1ba9c0 - game state initialization sequence
    // Initializes: audio channels, display settings, game state flags, timers, state machine
    initializeGameStateSequence();

    // Original: jal 0x1b4570 - allocates 0x2000 bytes, stores handle to 0x313804
    g_game.resourceHandle = allocateResourceSlot(0x2000);

    // Original: jal 0x1b3440 - empty stub, removed
    // Original: jal 0x1b3430 - empty stub, removed

    // Original: jal 0x1bb710 - buffer clear and init
    clearFadeBuffers();
}
