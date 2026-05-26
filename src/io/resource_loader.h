#ifndef RESOURCE_LOADER_H
#define RESOURCE_LOADER_H

#include <stdint.h>

/**
 * @category io/filesystem
 * @status complete
 * @original func_001a8e70
 * @address 0x001a8e70
 * @description Resource loader. Loads game data from BIN/*.DAT files.
 *              Has a 10-entry jump table controlling slot state management,
 *              then loads the file via MWo3 container parser.
 *
 * Slot groups (3 state bytes):
 *   gp-0x7d40: slots 0-3 (submain, demo, game, network)
 *   gp-0x7d38: slots 4-6 (netdnas, nethttp, insdnas)
 *   gp-0x7d3c: slots 7-9 (single, netaq)
 *
 * @param slot File slot index (0-9)
 * @windows_compatibility high
 * @author caprado
 */
void loadResourceSlot(int32_t slot);

#endif // RESOURCE_LOADER_H
