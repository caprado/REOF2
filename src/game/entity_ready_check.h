#ifndef ENTITY_READY_CHECK_H
#define ENTITY_READY_CHECK_H

#include <stdint.h>

/**
 * @category game/entity
 * @status complete
 * @original func_001b0ce0
 * @address 0x001b0ce0
 * @description Checks if entity data is in ready state.
 *              Returns 1 if entityData status field == 1 and state byte == 0x73.
 *              Returns 0 otherwise.
 *
 * Original ASM:
 *   lw $a0, -0x6430($gp)      ; entity data pointer
 *   lhu $v1, 2($a0)           ; status field
 *   if v1 != 1 → return 0
 *   lbu $a0, 1($a0)           ; state byte
 *   if a0 != 0x73 → return 0
 *   return 1
 *
 * @return 1 if entity data ready, 0 otherwise
 * @windows_compatibility high
 * @author caprado
 */
int32_t isEntityDataReady(void);

#endif // ENTITY_READY_CHECK_H
