#ifndef MENU_STATE_H
#define MENU_STATE_H

#include <stdint.h>

/**
 * @category game/menu
 * @status complete
 * @original func_001b9ef0
 * @address 0x001b9ef0
 * @description Initializes/resets the menu state memory block. Zeros 28 bytes at 0x00307f90.
 * @windows_compatibility high
 * @author caprado
 */
void initializeMenuState(void);

/**
 * @category game/menu
 * @status complete
 * @original func_001b9f10
 * @address 0x001b9f10
 * @description Updates menu sequence state based on sequence table entry.
 *              Takes an index, looks up the entry in the sequence table,
 *              and sets sequenceActive based on byte 0 of that entry.
 * @param index Index into the sequence table (0-31)
 * @windows_compatibility high
 * @author caprado
 */
void updateMenuSequence(int32_t index);

// Accessor functions for menu state data
uint8_t* getMenuStateBlock(void);
uint8_t* getSequenceTable(void);

#endif // MENU_STATE_H
