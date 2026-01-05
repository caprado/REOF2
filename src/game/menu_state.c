#include "menu_state.h"
#include "game_data.h"
#include <string.h>

// Sequence table at 0x002a0f20 - 24-byte entries
// Each entry's byte 0 indicates if the sequence is active (1) or not
static uint8_t s_sequenceTable[32 * 24];  // Original: 0x002a0f20

// Menu state block at 0x00307f90 - 28 bytes
// Layout:
//   +0x00: sequenceActive (byte)
//   +0x01: gameStateFlag (byte)
//   +0x0c: menuState1 (halfword)
//   +0x0e: menuState2 (halfword)
//   +0x10: menuState3 (word)
static uint8_t s_menuStateBlock[0x1c];  // Original: 0x00307f90

/**
 * @category game/menu
 * @status complete
 * @original func_001b9ef0
 * @address 0x001b9ef0
 * @description Initializes/resets the menu state memory block. Zeros 28 bytes at 0x00307f90.
 * @windows_compatibility high
 * @author caprado
 */
void initializeMenuState(void) {
    // Original: tail call to func_00107c70(0x00307f90, 0x1c)
    // Zeros 28 bytes of menu state
    memset(s_menuStateBlock, 0, 0x1c);
}

/**
 * @category game/menu
 * @status complete
 * @original func_001b9f10
 * @address 0x001b9f10
 * @description Updates menu sequence state based on sequence table entry.
 *              Takes an index, looks up the entry in the sequence table at 0x002a0f20,
 *              and sets sequenceActive based on byte 0 of that entry.
 *
 * Original ASM:
 *   sll  $v1, $a0, 1       ; v1 = index * 2
 *   addu $a0, $v1, $a0     ; a0 = index * 3
 *   sll  $a0, $a0, 3       ; a0 = index * 24 (entry size)
 *   addiu $a1, $a1, 0xf20  ; a1 = 0x2a0f20 (table base)
 *   addu $a0, $a1, $a0     ; a0 = &table[index]
 *   lbu  $a0, 0($a0)       ; a0 = table[index].byte0
 *   beq  $a0, 1, set_active
 *
 * @param index Index into the sequence table (0-31)
 * @windows_compatibility high
 * @author caprado
 */
void updateMenuSequence(int32_t index) {
    // Calculate entry address: base + (index * 24)
    // Original: index * 3 * 8 = index * 24
    uint8_t* entry = s_sequenceTable + (index * 24);

    // Read byte 0 of the entry
    uint8_t entryActive = entry[0];

    // Menu state block base at 0x00307f90
    uint8_t* menuState = s_menuStateBlock;

    if (entryActive == 1) {
        // Sequence entry is active - set sequenceActive = 1
        // Original: sb $v1, 0($a2) where v1 = 1
        menuState[0x00] = 1;  // sequenceActive at offset 0
    } else {
        // Sequence entry is not active - clear all menu state
        // Original: sb $zero, 0($a2)
        menuState[0x00] = 0;  // sequenceActive

        // Original: sh $zero, 0xc($a2)
        *(uint16_t*)(menuState + 0x0c) = 0;  // menuState1

        // Original: sh $zero, 0xe($a2)
        *(uint16_t*)(menuState + 0x0e) = 0;  // menuState2

        // Original: sw $zero, 0x10($a2)
        *(uint32_t*)(menuState + 0x10) = 0;  // menuState3

        // Original: sb $zero, 1($a2) (in delay slot of branch)
        menuState[0x01] = 0;  // gameStateFlag
    }
}

// Accessor functions for menu state (for other modules)
uint8_t* getMenuStateBlock(void) {
    return s_menuStateBlock;
}

uint8_t* getSequenceTable(void) {
    return s_sequenceTable;
}
