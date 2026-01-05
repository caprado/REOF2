#ifndef GAME_STATE_INIT_H
#define GAME_STATE_INIT_H

#include <stdint.h>

/**
 * @category game/init
 * @status complete
 * @original func_001ae830
 * @address 0x001ae830
 * @description Initializes game state buffer and related globals.
 *              Clears 0x1474 bytes at game state buffer, sets various
 *              global values, calls initializeBitmasks, and finds first 0xff
 *              in lookup table.
 * @windows_compatibility high
 * @author caprado
 */
void initializeGameState(void);

/**
 * @category game/init
 * @status complete
 * @original func_001aff00
 * @address 0x001aff00
 * @description Initializes three bitmask arrays by calling setBitmaskFromData three times
 *              with different source data tables and destination bitmask arrays.
 * @windows_compatibility high
 * @author caprado
 */
void initializeBitmasks(void);

/**
 * @category game/init
 * @status complete
 * @original func_001afe50
 * @address 0x001afe50
 * @description Sets bits in a bitmask array based on source byte data.
 *              Each source byte encodes: bits[4:0] = bit position, bits[7:5] = word index.
 * @param source Pointer to source byte array
 * @param dest Pointer to destination bitmask array (array of uint32_t)
 * @param count Number of source bytes to process
 * @windows_compatibility high
 * @author caprado
 */
void setBitmaskFromData(const uint8_t* source, uint32_t* dest, int32_t count);

#endif // GAME_STATE_INIT_H
