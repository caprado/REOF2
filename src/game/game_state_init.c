#include "game_state_init.h"
#include "game_data.h"
#include <string.h>

// Static data table at 0x0021bf00 - searched for first 0xff byte
static const uint8_t s_gameStateLookupTable[] = {
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
    0x08, 0x09, 0x0a, 0x0b, 0xff
};

// Static data table at 0x0021c000 - source for bitmask1 (0x1f = 31 bytes)
static const uint8_t s_bitmaskSource1[] = {
    0x00, 0x02, 0x04, 0x06, 0x08, 0x0a, 0x0c, 0x0e,
    0x10, 0x12, 0x14, 0x16, 0x18, 0x19, 0x1a, 0x1b,
    0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x22, 0x24, 0x26,
    0x28, 0x2a, 0x2c, 0x2e, 0x37, 0x38, 0x39
};

// Static data table at 0x0021c0b0 - source for bitmask3 (0x2d = 45 bytes)
static const uint8_t s_bitmaskSource3[] = {
    0x00, 0x01, 0x04, 0x05, 0x08, 0x09, 0x0c, 0x0d,
    0x10, 0x11, 0x14, 0x15, 0x18, 0x19, 0x1a, 0x1b,
    0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b,
    0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33,
    0x34, 0x35, 0x36, 0x37, 0x3a, 0x3b, 0x3c, 0x3d,
    0x3e, 0x3f, 0x40, 0x41, 0x42
};

/**
 * @category game/init
 * @status complete
 * @original func_001afe50
 * @address 0x001afe50
 */
void setBitmaskFromData(const uint8_t* source, uint32_t* dest, int32_t count) {
    int32_t i = 0;
    while (i < count) {
        uint8_t byte = source[i];
        i++;
        int32_t bitPos = byte & 0x1f;
        uint32_t bitMask = 1 << bitPos;
        int32_t wordIndex = byte >> 5;
        dest[wordIndex] |= bitMask;
    }
}

/**
 * @category game/init
 * @status complete
 * @original func_001aff00
 * @address 0x001aff00
 */
void initializeBitmasks(void) {
    setBitmaskFromData(s_bitmaskSource1, g_game.bitmask1, 0x1f);
    setBitmaskFromData(g_game.bitmaskSource, g_game.bitmask2, 1);
    setBitmaskFromData(s_bitmaskSource3, g_game.bitmask3, 0x2d);
}

/**
 * @category game/init
 * @status complete
 * @original func_001ae830
 * @address 0x001ae830
 */
void initializeGameState(void) {
    // Original: a0 = 0x311d30, a1 = 0 (move $a1, $zero), a2 = 0x1474
    // jal 0x107c70 (memset)
    memset(g_game.gameStateBuffer, 0, 0x1474);

    // Original: v0 = 0x1f; sw $v0, 0x30bc($at) where at = 0x310000
    g_game.gameStateValue1 = 0x1f;

    // Original: v1 = 0x1e; sw $v1, 0x2758($at)
    g_game.gameStateValue2 = 0x1e;

    // Original: v0 = 1; sb $v0, 0x1d51($at)
    g_game.gameStateFlag1 = 1;

    // Original: lbu $v0, 0x1d55($at); ori $v0, $v0, 3; sb $v0, 0x1d55($at)
    g_game.gameStateFlags |= 3;

    // Original: jal 0x1aff00
    initializeBitmasks();

    // Original: Search for first 0xff in table at 0x21bf00
    // a1 = 0x21bf00, a2 = 0 (move $a2, $zero), v1 = 0xff
    // Loop increments a2 until byte at (a1 + a2) == 0xff
    uint8_t searchIndex = 0;
    while (s_gameStateLookupTable[searchIndex] != 0xff) {
        searchIndex++;
    }

    // Original: sb $a2, 0x1d54($at)
    g_game.gameStateSearchResult = searchIndex;
}
