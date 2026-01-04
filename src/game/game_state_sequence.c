#include "game_state_sequence.h"
#include "game_data.h"
#include "settings_buffer.h"
#include "game_state_flags.h"
#include "state_buffer.h"
#include "../audio/audio_channel_init.h"
#include "../graphics/display_brightness.h"
#include "../core/utility/array.h"
#include <string.h>

/**
 * @category game/init
 * @status complete
 * @original func_001b7490
 * @address 0x001b7490
 * @description Clears the state machine entry buffer (16 entries × 32 bytes).
 *              Uses resourceEntryBase as the state machine buffer.
 * @windows_compatibility high
 * @author caprado
 */
static void clearStateMachineBuffer(void) {
    if (g_game.resourceEntryBase != NULL) {
        memset(g_game.resourceEntryBase, 0, 0x200);
    }
}

/**
 * @category game/init
 * @status complete
 * @original func_001ae5a0
 * @address 0x001ae5a0
 * @description Initializes timer sync values by copying source value to both
 *              timer registers and clearing the sync flag.
 * @windows_compatibility high
 * @author caprado
 */
static void initializeTimerSync(void) {
    uint8_t value = g_game.timerSourceValue;
    g_game.timerSyncFlag = 0;
    g_game.timerValue1 = value;
    g_game.timerValue2 = value;
}

// Game state initialization counter (gp-0x7cc0)
static uint32_t s_gameInitCounter = 0;

// Game state ready flag (gp-0x6360)
static uint32_t s_gameStateReady = 0;

/**
 * @category game/init
 * @status complete
 * @original func_001ba9c0
 * @address 0x001ba9c0
 * @description Master game state initialization sequence. Initializes all core
 *              game subsystems in the correct order: audio channels, display
 *              settings, game state flags, state buffers, timers, and state machine.
 * @windows_compatibility high
 * @author caprado
 */
void initializeGameStateSequence(void) {
    // Original: jal 0x1ad600
    initializeAudioChannels();

    // Original: jal 0x1b7ab0
    initializeDisplayBrightness();

    // Original: jal 0x1ae690
    initializeSettingsBuffer();

    // Original: jal 0x1ba3c0
    initializeGameStateFlags();

    // Original: jal 0x1aefc0
    // Was: jr $ra / nop

    // Original: jal 0x1d33e0
    initializeStateBuffer();

    // Original: jal 0x1af240
    clearPointerArray();

    // Original: v0 = 1; sw $v0, -0x7cc0($gp)
    s_gameInitCounter = 1;

    // Original: jal 0x1ba8b0 - PS2 CD/DVD clock sync timer (func_001ba8b0 -> func_00101d28)
    // Not needed on Windows - PS2 used sceCdReadClock for timing synchronization

    // Original: jal 0x1ae5a0
    initializeTimerSync();

    // Original: jal 0x1b7490
    clearStateMachineBuffer();

    // Original: sw $zero, -0x6360($gp)
    s_gameStateReady = 0;
}

/**
 * @brief Get the game initialization counter value
 * @return Current value of the init counter
 */
uint32_t getGameInitCounter(void) {
    return s_gameInitCounter;
}

/**
 * @brief Set the game initialization counter value
 * @param value New counter value
 */
void setGameInitCounter(uint32_t value) {
    s_gameInitCounter = value;
}

/**
 * @brief Check if game state is ready
 * @return 0 if ready, non-zero otherwise
 */
uint32_t getGameStateReady(void) {
    return s_gameStateReady;
}

/**
 * @brief Set game state ready flag
 * @param value New ready flag value
 */
void setGameStateReady(uint32_t value) {
    s_gameStateReady = value;
}

