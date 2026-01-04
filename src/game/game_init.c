#include "game_init.h"
#include "game_data.h"
#include "game_state_init.h"
#include "../memory/memory_region.h"
#include <stdlib.h>
#include <string.h>


/**
 * @category game/init
 * @status complete
 * @original func_001ba660
 * @address 0x001ba660
 * @description Main game initialization function. Allocates memory buffers for various
 *              game subsystems (textures, models, audio, etc.) and initializes them.
 *              Called during game state manager initialization (state 0).
 *
 * Memory allocations performed:
 *   - 0x5c0000 (5.75 MB): Main game buffer
 *   - 0x3c000 (240 KB): Secondary buffer (split into two regions)
 *   - 0xc000 (48 KB): Auxiliary buffers (x2)
 *   - 0x18000 (96 KB): Work buffer
 *   - 0x20000 (128 KB): Additional buffer
 *   - 0x10000 (64 KB): Multiple small buffers
 *   - 0x80000 (512 KB): Large auxiliary buffer
 *   - 0x90000 (576 KB): Large work buffer
 *   - 0x4000 (16 KB): Small buffer
 *   - 0x5400 (21 KB): Final buffer
 *   - 0x20000 (128 KB): Resource buffer
 *
 * @windows_compatibility medium - Memory allocation patterns need Windows heap
 * @author caprado
 */
void initializeGameSubsystems(void) {
    // Initialize init flags to 0xff (original: func_001b07d0 -> memset(gp-0x63b0, 0xff, 8))
    memset(g_game.initFlags, 0xff, 8);

    // Clear GP-relative counter (original: sh $zero, -0x633c($gp))
    g_game.counter1 = 0;

    // Initialize system state (original: func_001ae540 -> memset + func_001ae570)
    memset(g_game.systemStateBuffer, 0, 256);  // Original: 0x003137a0
    // func_001ae570 inlined:
    memset(g_game.allocStateBuffer, 0, 64);    // Original: 0x002aa8c0
    g_game.allocState1 = 0;                    // Original: gp-0x63c8
    g_game.allocState2 = 0;                    // Original: gp-0x63c4

    g_game.counter4 = 0;                       // Original: gp-0x634c

    // func_001af180 was empty stub, removed

    // func_001aefe0 inlined (calls func_001a0980 which stores to 0x0028ffc8, then stores to 0x003137ac)
    // Called with a0=1 (set in delay slot)
    g_game.timerInitValue = 1;       // Original: func_001a0980 -> 0x0028ffc8
    g_game.timerShift = 1;           // Original: 0x003137ac

    // Register game data in memory tracking table (original: func_001af020 with a0 = gp + -0x6380)
    registerMemoryRegion(&g_game);

    // Reserve memory for main buffer (original: func_001aef60 with a0=0x5c0000 from delay slot)
    reserveRegionMemory(0x5c0000);

    // Allocate main game buffer (0x5c0000 = 6,029,312 bytes)
    g_game.mainBuffer = allocateMemory(0x5c0000);

    // Clear the main buffer
    memset(g_game.mainBuffer, 0, 0x5c0000);  // Original: func_00107c70

    // Set up buffer pointers:
    // mainBufferBase points to start
    g_game.mainBufferBase = g_game.mainBuffer;

    // secondaryBuffer is offset by 0x240000 from mainBuffer
    g_game.secondaryBuffer = (uint8_t*)g_game.mainBuffer + 0x240000;

    // Post-allocation init on mainBufferBase
    // Initialize bump allocator with mainBufferBase and capacity 0x240000
    // Original: func_001af190 called with a0=mainBufferBase, a1=0x240000
    initializeBumpAllocator(g_game.mainBufferBase, 0x240000);

    // Allocate large work buffer (0x3c000 = 245,760 bytes)
    g_game.largeWorkBuffer = allocateMemory(0x3c000);

    // Initialize the large work buffer
    // func_001a0990 inlined: stores buffer pointer to gp-0x64c0
    g_game.workBufferPtr = g_game.largeWorkBuffer;

    // Allocate auxiliary buffer 1 (0xc000 = 49,152 bytes)
    g_game.auxBuffer1 = allocateMemory(0xc000);

    // Allocate auxiliary buffer 2 (0xc000 = 49,152 bytes)
    g_game.auxBuffer2 = allocateMemory(0xc000);

    // Allocate work buffer (0x18000 = 98,304 bytes)
    g_game.workBuffer1 = allocateMemory(0x18000);

    // Allocate additional buffer (0x20000 = 131,072 bytes)
    g_game.additionalBuffer = allocateMemory(0x20000);

    // Allocate model buffer (0x10000 = 65,536 bytes)
    g_game.modelBuffer = allocateMemory(0x10000);

    // Allocate texture buffer (0x10000 = 65,536 bytes)
    g_game.textureBuffer = allocateMemory(0x10000);

    // Allocate large auxiliary buffer (0x80000 = 524,288 bytes)
    g_game.largeAuxBuffer = allocateMemory(0x80000);

    // Allocate entity buffer (0x18000 = 98,304 bytes)
    g_game.entityBuffer = allocateMemory(0x18000);
    // entityBufferEnd points to same location initially
    g_game.entityBufferEnd = g_game.entityBuffer;

    // Allocate animation buffer (0x90000 = 589,824 bytes)
    g_game.animationBuffer = allocateMemory(0x90000);

    // Allocate small buffer (0x4000 = 16,384 bytes)
    g_game.smallBuffer = allocateMemory(0x4000);

    // Allocate audio buffer (0xc000 = 49,152 bytes)
    g_game.audioBuffer = allocateMemory(0xc000);

    // Allocate script buffer (0x5400 = 21,504 bytes)
    g_game.scriptBuffer = allocateMemory(0x5400);
    // scriptBufferEnd points to same location initially
    g_game.scriptBufferEnd = g_game.scriptBuffer;

    // Set resource buffer size (0x20000 = 131,072)
    g_game.resourceBufferSize = 0x20000;

    // Allocate resource buffer
    g_game.resourceBuffer = allocateMemory(g_game.resourceBufferSize);

    // Store resourceBuffer to alt location (original: sw $a2, 0x388c at 0x1ba840)
    g_game.resourceBufferAlt = g_game.resourceBuffer;

    // Store renderBuffer = secondaryBuffer (original: sw $v0, 0x3810 at 0x1ba848)
    g_game.renderBuffer = g_game.secondaryBuffer;

    // Calculate workPointer = workBuffer1 + 0x8000 (original: sw $v0, 0x3824 at 0x1ba854)
    g_game.workPointer = (uint8_t*)g_game.workBuffer1 + 0x8000;

    // Calculate finalBuffer = renderBuffer + 0x180000 (original: sw $v0, 0x3820 at 0x1ba86c)
    g_game.finalBuffer = (uint8_t*)g_game.renderBuffer + 0x180000;

    // Allocate 0x11003f bytes from heap (original: func_00106ee8 with a0=0x11003f)
    // func_00106ee8 is PS2 heap allocator wrapper - on Windows use malloc
    void* heapAlloc = malloc(0x11003f);

    // Align result to 64 bytes and store (original: (v0+0x3f) & ~0x3f -> 0x313850)
    g_game.alignedBuffer = (void*)(((uintptr_t)heapAlloc + 0x3f) & ~(uintptr_t)0x3f);

    // Final initialization calls
    initializeGameState();  // Original: func_001ae830
    // func_001baa30 removed - PS2 network bios init, not needed for Windows
    // func_001dd790 removed - PS2 network subsystem init, not needed for Windows
    // func_001ac0c0 removed - empty stub
}
