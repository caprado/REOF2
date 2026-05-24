#include "entity_check.h"
#include "game_data.h"

// Trampoline to input processing (0x1a19f0 → j 0x1a5a90)
extern void func_001a19f0(int32_t a0);

/**
 * @category game/entity
 * @status complete
 * @original func_001b0720
 * @address 0x001b0720
 * @description Checks entity data array for loading status.
 *
 * Original ASM:
 *   a2 = 0 (move $a2, $zero)
 *   a1 = *(gp-0x6430)         ; entity data pointer
 *   v1 = 2                    ; loading state constant
 *   loop:
 *     v0 = a2 & 0xff
 *     if v0 <= 0 → enter inner loop
 *       inner: v0 = a0*120; v0 = a1[v0] (first byte)
 *       if v0 == 2: return -1 (still loading)
 *       else: a2 = (a2+1) & 0xff, continue
 *     jal 0x1a19f0(1)          ; process input
 *     v1 = *(uint16_t*)(a0+2)  ; status field
 *     if v1 == 0: return -2    ; error
 *     if v1 == 1 && *(uint8_t*)(a0+1) == 0x73:
 *       jal 0x1a1990           ; returns gp-0x643c byte
 *       return result
 *     else: return -2
 *
 * @return >=0 success, -1 loading, -2 error
 * @windows_compatibility high
 * @author caprado
 */
int32_t checkEntityLoadStatus(void) {
    uint8_t* entityBase = (uint8_t*)g_game.entityDataPtr;
    uint8_t a2 = 0;
    uint8_t entityState;
    uint16_t statusField;

    // If entity data pointer is NULL, no entities to check
    if (entityBase == NULL) {
        return -2;
    }

    // Loop: scan entities (120 bytes each) for state == 2
    // Original: a2 starts at 0, loop while (a2 & 0xff) <= 0
    // This means: check entity at index 0 first
    while (1) {
        if ((a2 & 0xff) > 0) {
            break;  // Exit loop when a2 > 0
        }

        // Calculate entity offset: index * 120 (a0*16 - a0) * 8 = a0 * 120
        uint32_t offset = (uint32_t)a2 * 120;
        entityState = entityBase[offset];

        if (entityState == 2) {
            // Entity is in loading state
            return -1;
        }

        // Advance to next entity
        a2 = (a2 + 1) & 0xff;
    }

    // Call input processing with a0=1
    // Original: jal 0x1a19f0 with a0=1 in delay slot
    func_001a19f0(1);

    // Read status field at entityDataPtr + 2
    // Original: lw $a0, -0x6430($gp); lhu $v1, 2($a0)
    statusField = *(uint16_t*)(entityBase + 2);

    if (statusField == 0) {
        // Status is 0: error
        return -2;
    }

    if (statusField == 1) {
        // Status is 1: check byte at offset 1
        if (entityBase[1] == 0x73) {
            // Valid state: return gp-0x643c byte
            // Original: jal 0x1a1990 which is just: jr $ra / lbu $v0, -0x643c($gp)
            return (int32_t)g_game.cameraUpdateFlag;
        }
    }

    // All other cases: error
    return -2;
}
