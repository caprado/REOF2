#ifndef GAME_DATA_H
#define GAME_DATA_H

#include <stdint.h>

/**
 * @file game_data.h
 * @brief Central game data structure replacing PS2 global memory addresses
 * @description This structure replaces all hardcoded PS2 memory addresses with
 *              a proper Windows-compatible data structure. All game systems
 *              access this single global instance instead of GP-relative pointers.
 *
 * Original PS2 Memory Layout:
 * GP-relative globals (menu/game state):
 * - gp-0x638c: menuFlag1
 * - gp-0x6390: menuFlag2
 * - gp-0x6384: gameStateManagerState
 * - gp-0x633c: counter1
 * - gp-0x6338: counter2
 * - gp-0x6334: counter3
 * - gp-0x6388: gameFloatValue
 *
 * Absolute addresses:
 * - 0x00307f91: gameStateFlag
 * - 0x00313884: systemState
 * - 0x003136e0: controllerState
 * - 0x0021CC10: textArray base
 */

// Forward declarations
struct MenuSequenceEntry;

/**
 * @brief Menu sequence callback function pointer type
 * @description Function pointer for menu sequence callbacks.
 *              On PS2, these were stored as integer addresses in the sequence array.
 *              On Windows, these must be real function pointers.
 */
typedef void (*MenuCallback)(void);

/**
 * @brief Menu sequence entry structure
 * @description Defines a timed sequence step with duration and callback.
 *              PS2 version stored callback as int32_t address.
 *              Windows version uses proper function pointer.
 */
typedef struct MenuSequenceEntry {
    int16_t duration;        // Duration in frames (0 = end of sequence)
    MenuCallback callback;   // Function to call when sequence activates (NULL = no callback)
} MenuSequenceEntry;

/**
 * @brief Central game data structure
 * @description Replaces all PS2 GP-relative globals with a unified structure.
 *              This enables proper Windows compilation and eliminates hardcoded
 *              memory addresses.
 */
typedef struct GameData {
    // --- Menu controller state ---
    uint32_t menuFlag1;              // Original: gp-0x638c
    uint32_t menuFlag2;              // Original: gp-0x6390
    uint8_t gameStateFlag;           // Original: 0x00307f91 - triggers game state manager

    // --- Menu state ---
    uint16_t menuState1;             // Original: 0x00307f9c
    uint16_t menuState2;             // Original: 0x00307f9e
    uint32_t menuState3;             // Original: 0x00307fa0

    // --- Menu sequence system ---
    uint8_t sequenceActive;          // Original: 0x00307f90 - 1 if sequence is running, 0 otherwise
    int16_t currentTimer;            // Original: 0x00307f9c - Current frame timer for active sequence
    int16_t sequenceIndex;           // Original: 0x00307f9e - Current index in sequence array
    MenuSequenceEntry* sequenceArray; // Pointer to active sequence array
    int16_t sequenceCount;           // Number of entries in sequence array (for bounds checking)
    uint8_t systemStateBuffer[256];  // Original: 0x003137a0 - System state buffer (cleared on init)

    // --- Settings buffer (from func_001ae690) ---
    uint8_t settingsBuffer[0x10];    // Original: 0x003135a0 - Settings buffer (16 bytes)

    // --- Game state flags (from func_001ba3c0) ---
    uint8_t state37a1;               // Original: 0x003137a1
    uint8_t state37a2;               // Original: 0x003137a2
    uint8_t state37a3;               // Original: 0x003137a3
    uint8_t state37a4;               // Original: 0x003137a4
    uint8_t stereoMode;              // Original: 0x003137a5 - Sound: 0=stereo, 1=mono (boolean)
    uint8_t state37a6;               // Original: 0x003137a6
    uint8_t state37a7;               // Original: 0x003137a7
    uint8_t state37a8;               // Original: 0x003137a8
    uint8_t bgmVolume;               // Original: 0x003137a9
    uint8_t seVolume;                // Original: 0x003137aa
    uint8_t state37ab;               // Original: 0x003137ab
    uint8_t timerShift;              // Original: 0x003137ac
    uint8_t state37af;               // Original: 0x003137af
    uint16_t state37ba;              // Original: 0x003137ba
    uint8_t state37b8;               // Original: 0x003137b8
    uint8_t state37b9;               // Original: 0x003137b9
    uint16_t state37bc;              // Original: 0x003137bc
    uint16_t state37be;              // Original: 0x003137be
    uint16_t state37c0;              // Original: 0x003137c0
    uint16_t state37c2;              // Original: 0x003137c2
    uint16_t state37c4;              // Original: 0x003137c4
    uint16_t state37c6;              // Original: 0x003137c6
    uint8_t state37c8;               // Original: 0x003137c8
    uint8_t state37c9;               // Original: 0x003137c9
    uint8_t state37ca;               // Original: 0x003137ca
    uint8_t controllerLayout;        // Original: 0x003137cc - Controller layout type (0-5: a,b,c,d,e,f)
    uint8_t screenOffsetX;           // Original: 0x003137cd - Screen X position adjustment (-10 to +10)
    uint8_t screenOffsetY;           // Original: 0x003137ce - Screen Y position adjustment (-10 to +10)
    uint8_t vibrationEnabled;        // Original: 0x003137cf - Controller vibration on/off (boolean)
    uint8_t brightness;              // Original: 0x003137d0 - Display brightness (0x38-0xa4, default 0x80)
    uint8_t state37d2;               // Original: 0x003137d2
    uint8_t state37da;               // Original: 0x003137da
    uint8_t state37db;               // Original: 0x003137db
    uint8_t state37dd;               // Original: 0x003137dd
    uint8_t state3865;               // Original: 0x00313865

    // --- Game state manager ---
    uint8_t initFlags[8];            // Original: gp-0x63b0 - Init flags (filled with 0xff)
    uint8_t allocStateBuffer[64];    // Original: 0x002aa8c0 - Allocation state buffer (cleared on init)
    uint32_t allocState1;            // Original: gp-0x63c8 - Allocation state var 1
    uint32_t allocState2;            // Original: gp-0x63c4 - Allocation state var 2
    uint16_t counter4;               // Original: gp-0x634c - Counter (cleared on init)
    uint32_t gameStateManagerState;  // Original: gp-0x6384 - State machine state (0=init, 1=running)
    uint16_t counter1;               // Original: gp-0x633c - Game counter
    uint16_t counter2;               // Original: gp-0x6338 - Previous counter value
    uint16_t counter3;               // Original: gp-0x6334 - Source counter (resource entry index)
    float    gameFloatValue;         // Original: gp-0x6388 - Game float value
    uintptr_t frameCallback;         // Frame completion callback pointer
    int32_t  initCounter;            // Original: gp-0x7cc0 - Initialization counter

    // --- Resource system ---
    void* resourceEntryBase;         // Base pointer for resource entry system
    void* workBufferPtr;             // Original: gp-0x64c0 - Work buffer pointer (set by func_001a0990)

    // --- Game state init (from func_001ae830) ---
    uint8_t gameStateBuffer[0x1474]; // Original: 0x00311d30 - Game state buffer
    uint8_t gameStateFlag1;          // Original: 0x00311d51 - Set to 1
    uint8_t gameStateSearchResult;   // Original: 0x00311d54 - Result of 0xff search
    uint8_t gameStateFlags;          // Original: 0x00311d55 - OR'd with 3
    uint32_t gameStateValue1;        // Original: 0x003130bc - Set to 0x1f
    uint32_t gameStateValue2;        // Original: 0x00312758 - Set to 0x1e
    uint32_t bitmask1[8];            // Original: 0x003130ec - Bitmask array (32 bytes)
    uint32_t bitmask2[8];            // Original: 0x00313100 - Bitmask array (32 bytes)
    uint32_t bitmask3[8];            // Original: 0x003130d8 - Bitmask array (32 bytes)
    uint8_t bitmaskSource[1];        // Original: gp-0x63bc - Single byte source for bitmask2

    // --- System state (legacy fields) ---
    uint16_t systemState;            // Original: 0x00313884 - Game system state flags
    uint32_t controllerState;        // Original: 0x003136e0 - Button press flags
    uint32_t gameCompleteFlag;       // Game completion status
    uint16_t gameSystemFlag;         // Various system flags

    // --- Text rendering data ---
    char** textArray;                // Original: 0x0021CC10 - Array of text string pointers
    uint32_t textArraySize;          // Number of text entries
    uint32_t textArrayCapacity;      // Allocated capacity

    // --- Display/Graphics settings (from func_0019f4e0) ---
    // Critical globals used by coordinate calculation in rendering
    int32_t screenWidth;             // Original: gp-0x6448 - Screen width (640)
    int32_t screenHeight;            // Original: gp-0x644c - Screen height (448 or 480)
    int32_t displayWidth;            // Original: 0x0028ff7c - Display width
    int32_t displayHeight;           // Original: 0x0028ff80 - Active display height
    int32_t screenCenterX;           // Original: 0x00290314 - Screen center X (0x800 - width/2)
    int32_t screenCenterY;           // Original: 0x00290318 - Screen center Y (0x800 - height/2)
    float   displayScale;            // Original: 0x0028ffb4 (-0x4c) - Float scaling factor
    int32_t displayBrightness;       // Brightness level (0-256), calculated from settings

    // Display configuration
    int32_t displayMode;             // Original: 0x0028ff70 - Display mode setting
    int32_t interlaceMode;           // Original: 0x0028ff74 - Interlace mode (0=non-interlaced)
    int32_t pixelFormat;             // Original: 0x0028ff84 - Pixel format (3 or 4)
    int32_t colorDepth;              // Original: 0x0028ff88 - Color depth setting
    int32_t interlaceType;           // Original: 0x0028ff8c - Interlace type
    int32_t horizontalOffset;        // Original: 0x0028ff90 - Horizontal display offset (0x40)
    int32_t verticalOffset;          // Original: 0x0028ff94 - Vertical display offset (0x20 or 0x40)
    int32_t framebufferWidth;        // Original: 0x0028ff98 - Framebuffer width
    int32_t framebufferHeight;       // Original: 0x0028ff9c - Framebuffer height
    int32_t colorFormat;             // Original: 0x0028ffa0 - Color format
    int32_t displayTiming;           // Original: 0x0028ffa4 - Display timing value
    int32_t blockWidth;              // Original: 0x0028ffa8 - Block width (0x40)
    int32_t blockHeight;             // Original: 0x0028ffac - Block height (0x20 or 0x40)
    int32_t bufferAddress;           // Original: 0x0028ffb0 - Buffer address/offset
    int32_t graphicsReady;           // Original: 0x0028ffbc - Graphics ready flag (1=ready)
    int32_t graphicsInitFlag;        // Original: 0x0028ffc0 - Graphics init state
    int32_t timerInitValue;          // Original: 0x0028ffc8 - Timer init value (set to 1)
    int32_t timingValue1;            // Original: 0x00290324 - Timing value
    int32_t timingValue2;            // Original: 0x00290328 - Timing value
    int32_t bufferOffset1;           // Original: 0x0029032c - Buffer offset
    int32_t bufferOffset2;           // Original: 0x00290330 - Buffer offset
    int32_t displayState1;           // Original: 0x0029031c - Display state
    int32_t displayState2;           // Original: 0x00290320 - Display state
    int32_t storedWidth;             // Original: 0x00290404 - Stored screen width
    int32_t storedHeight;            // Original: 0x00290408 - Stored screen height
    int32_t centerReference;         // Original: 0x0029040c - Center reference (0x800)
    int32_t displayStateFlag;        // Original: 0x00290410 - Display state flag
    int32_t storedColorDepth;        // Original: 0x00290414 - Stored color depth

    // Color bit configuration (0x00290418-0x00290444)
    int32_t colorBitConfig[12];      // Original: 0x00290418-0x00290444 - Color bit masks

    // --- Memory buffers (from func_001ba660 / initializeGameSubsystems) ---
    // These replace PS2 globals at 0x00313800+ region
    int16_t resourceHandle;          // Original: 0x00313804 - Resource allocation handle
    void* mainBuffer;                // Original: 0x00313800 - Main game buffer (5.75 MB)
    void* mainBufferBase;            // Original: 0x003137f8 - Base pointer to mainBuffer
    void* secondaryBuffer;           // Original: 0x003137fc - mainBuffer + 0x240000
    void* largeWorkBuffer;           // Original: 0x00313844 - Large work buffer (240 KB)
    void* auxBuffer1;                // Original: 0x00313834 - Auxiliary buffer 1 (48 KB)
    void* auxBuffer2;                // Original: 0x00313838 - Auxiliary buffer 2 (48 KB)
    void* workBuffer1;               // Original: 0x00313814 - Work buffer (96 KB)
    void* additionalBuffer;          // Original: 0x0031381c - Additional buffer (128 KB)
    void* modelBuffer;               // Original: 0x0031384c - Model data buffer (64 KB)
    void* textureBuffer;             // Original: 0x0031385c - Texture data buffer (64 KB)
    void* largeAuxBuffer;            // Original: 0x0031382c - Large auxiliary buffer (512 KB)
    void* entityBuffer;              // Original: 0x00313818 - Entity buffer (96 KB)
    void* entityBufferEnd;           // Original: 0x00313830 - Entity buffer end pointer
    void* animationBuffer;           // Original: 0x00313860 - Animation buffer (576 KB)
    void* smallBuffer;               // Original: 0x00313828 - Small buffer (16 KB)
    void* audioBuffer;               // Original: 0x00313848 - Audio buffer (48 KB)
    void* scriptBuffer;              // Original: 0x00313854 - Script buffer (21 KB)
    void* scriptBufferEnd;           // Original: 0x00313858 - Script buffer end pointer
    uint32_t resourceBufferSize;     // Original: 0x00313840 - Resource buffer size
    void* resourceBuffer;            // Original: 0x0031383c - Resource buffer
    void* renderBuffer;              // Original: 0x00313810 - Render buffer
    void* workPointer;               // Original: 0x00313824 - Work pointer (aligned)
    void* finalBuffer;               // Original: 0x00313820 - Final buffer
    void* alignedBuffer;             // Original: 0x00313850 - 64-byte aligned buffer
    void* resourceBufferAlt;         // Original: 0x0031388c - Copy of resourceBuffer
    void* heapBlock;                 // Allocated heap block from func_00106ee8 (0x11003f bytes)

    // --- State buffer pointers (from func_001d33e0 / initializeStateBuffer) ---
    uint8_t stateData[0x1000];       // Original: 0x0032ecd0 - 4KB state data cleared on init
    uint8_t* stateBufferStart;       // Original: gp-0x6230 - Points to secondaryBuffer
    uint8_t* stateBufferEnd;         // Original: gp-0x6234 - secondaryBuffer + 0x10000
    int32_t stateBufferIndex;        // Original: gp-0x7ae4 - State buffer index (-1 on init)

    // --- Timer sync state (from func_001ae5a0 / initializeTimerSync) ---
    uint8_t timerSourceValue;        // Original: gp-0x6357 - Source timer value (read-only in init)
    uint8_t timerSyncFlag;           // Original: gp-0x63c0 - Timer sync flag (cleared on init)
    uint16_t timerValue1;            // Original: gp-0x6340 - Timer value copy 1
    uint16_t timerValue2;            // Original: gp-0x6344 - Timer value copy 2

    // --- Resource pool allocator (from func_0019c640 / allocateResourceSlot) ---
    int32_t resourcePoolCount;       // Original: gp-0x6488 - Number of active allocations (max 6)
    uint32_t resourcePoolOffset;     // Original: 0x0028ffb8 - Current allocation offset

    // --- Fade control buffers (from func_001bb710 / clearFadeBuffers) ---
    uint8_t fadeBuffer1[0x20];       // Original: 0x00307fc0 - Fade state buffer 1 (32 bytes)
    uint8_t fadeBuffer2[0x18];       // Original: 0x00307fe0 - Fade state buffer 2 (24 bytes)
} GameData;

/**
 * @brief Global game data instance
 * @description Single global instance accessed by all game systems
 */
extern GameData g_game;

/**
 * @brief Initialize game data structure
 * @description Sets all fields to safe initial values
 */
void initializeGameData(void);

/**
 * @brief Shutdown game data and free resources
 * @description Cleans up any dynamically allocated resources
 */
void shutdownGameData(void);

// Compatibility macros for gradual migration from old code
// These allow existing code to work while transitioning to the new structure
#define g_menuFlag1              (&g_game.menuFlag1)
#define g_menuFlag2              (&g_game.menuFlag2)
#define g_gameStateFlag          (&g_game.gameStateFlag)
#define g_menuState1             (&g_game.menuState1)
#define g_menuState2             (&g_game.menuState2)
#define g_menuState3             (&g_game.menuState3)
#define g_sequenceActive         (&g_game.sequenceActive)
#define g_currentTimer           (&g_game.currentTimer)
#define g_sequenceIndex          (&g_game.sequenceIndex)
#define g_sequenceData           (&g_game.sequenceArray)
#define g_timerShift             (&g_game.timerShift)
#define g_gameStateManagerState  (&g_game.gameStateManagerState)
#define g_gameCounter1           (&g_game.counter1)
#define g_gameCounter2           (&g_game.counter2)
#define g_gameCounter3           (&g_game.counter3)
#define g_gameFloatValue         (&g_game.gameFloatValue)
#define g_frameCallback          (&g_game.frameCallback)
#define g_resourceEntryBase      (&g_game.resourceEntryBase)

#endif // GAME_DATA_H
