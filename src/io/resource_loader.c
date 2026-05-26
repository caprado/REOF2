#include "resource_loader.h"
#include "file_loader.h"
#include "../game/game_data.h"
#include <stdio.h>
#include <string.h>

// Slot state bytes — 3 groups controlling which overlays are loaded
// Original: gp-0x7d40, gp-0x7d3c, gp-0x7d38
static int8_t s_slotState0 = -1;  // gp-0x7d40: slots 0-3
static int8_t s_slotState1 = -1;  // gp-0x7d3c: slots 7-9
static int8_t s_slotState2 = -1;  // gp-0x7d38: slots 4-6

// Loaded file storage — keeps loaded data in memory
static LoadedFile s_loadedFiles[10];
static uint8_t s_fileLoaded[10];

// func_001dd810 — PS2 overlay patcher (MIPS relocation). Not needed on Windows.

/**
 * @category io/filesystem
 * @status complete
 * @original func_001a8e70
 * @address 0x001a8e70
 * @description Resource loader. Direct port from ASM with jump table logic.
 *
 * Original ASM flow:
 *   1. Bounds check: if slot >= 10, skip to load
 *   2. Jump table (10 entries at 0x22a7b0):
 *      Slot 0: clear all 3 state bytes to -1
 *      Slots 1-3: check s_slotState0, set s0=&s_slotState0
 *      Slots 4,6: check s_slotState0 for 3/1/-1, set s0=&s_slotState2
 *      Slot 5: check s_slotState0 for 3, set s0=&s_slotState2
 *      Slots 7-9: check s_slotState1, set s0=&s_slotState1
 *   3. Load file: sprintf path "BIN/%d.DAT", call ADXF loader
 *   4. Post-process: func_001a8d50 (checks magic, no-op for MWo3)
 *   5. Patch: func_001dd810(slot+1)
 *   6. If slot != 0 && lookupTable[slot] == 1: store slot to state byte
 *
 * @param slot File slot index (0-9)
 * @windows_compatibility high
 * @author caprado
 */
void loadResourceSlot(int32_t slot) {
    int8_t* statePtr = NULL;
    int32_t loadResult;

    // Bounds check: original sltiu $at, $s1, 0xa
    if ((uint32_t)slot >= 10) {
        goto do_load;
    }

    // Jump table dispatch — sets state bytes and statePtr
    switch (slot) {
        case 0:
            // 0x1a8eac: clear all 3 state bytes to -1
            s_slotState0 = -1;
            s_slotState1 = -1;
            s_slotState2 = -1;
            break;

        case 1:
        case 2:
        case 3:
            // 0x1a8ec0: check if already loaded in this group
            if (slot == s_slotState0) {
                return;  // Already loaded
            }
            statePtr = &s_slotState0;
            // Slot 2 special: also clear s_slotState2
            if (slot == 2) {
                s_slotState2 = -1;
            }
            break;

        case 4:
        case 6:
            // 0x1a8ee4: check s_slotState0 state
            statePtr = &s_slotState2;
            if (s_slotState0 == 3) {
                break;  // OK, proceed to load
            }
            if (s_slotState0 == 1) {
                break;  // OK, proceed to load
            }
            if (s_slotState0 != -1) {
                return;  // Not ready
            }
            break;

        case 5:
            // 0x1a8f14: check s_slotState0 for 3
            statePtr = &s_slotState2;
            if (s_slotState0 != 3) {
                return;  // Not ready
            }
            break;

        case 7:
        case 8:
        case 9:
            // 0x1a8f2c: check if already loaded in this group
            if (slot == s_slotState1) {
                return;  // Already loaded
            }
            statePtr = &s_slotState1;
            break;
    }

do_load:
    // Slot 0: submain.bin is PS2 overlay code, already compiled on Windows
    // Skip file load, but mark as loaded so boot state machine can proceed
    if (slot == 0) {
        fprintf(stderr, "[ResourceLoader] Slot 0 (submain.bin): PS2 overlay, already compiled\n");
        // Set entity data to indicate overlay is ready
        // On PS2: the overlay code at 0x343000 initializes entity data
        // On Windows: we set the expected state directly
        if (g_game.entityDataPtr != NULL) {
            uint8_t* entity = (uint8_t*)g_game.entityDataPtr;
            // entityData[1] = 0x73 (ready state identifier)
            // entityData[2..3] = 1 (status: loaded)
            entity[1] = 0x73;
            *(uint16_t*)(entity + 2) = 1;
        }
        return;
    }

    // Load file from disc
    if (s_fileLoaded[slot]) {
        freeLoadedFile(&s_loadedFiles[slot]);
        s_fileLoaded[slot] = 0;
    }

    loadResult = loadGameFile(slot, &s_loadedFiles[slot]);
    if (loadResult == 0) {
        printf("[ResourceLoader] Failed to load slot %d\n", slot);
        return;
    }

    s_fileLoaded[slot] = 1;

    // Original: func_001a8d50 checks for magic 0x006f574d (not MWo3)
    // For our MWo3 files this is a no-op

    // Original: func_001dd810(slot+1) — overlay patcher
    // On Windows: overlay code is compiled, patching not needed
    // For data-only slots (1+), the loaded data stays in s_loadedFiles[]

    // Original: if slot != 0 && lookupTable[slot] == 1, store slot to statePtr
    // lookupTable at 0x217740: slot 0 = 0x00343000 (not 1), so this only matters for other slots
    // For now: always store slot to state if statePtr is set
    if (statePtr != NULL) {
        *statePtr = (int8_t)slot;
    }
}
