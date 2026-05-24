#ifndef ENTITY_CHECK_H
#define ENTITY_CHECK_H

#include <stdint.h>

/**
 * @category game/entity
 * @status complete
 * @original func_001b0720
 * @address 0x001b0720
 * @description Checks entity array for loading state. Iterates entities in 120-byte
 *              structs, returns -1 if any entity is in state 2 (loading).
 *              After loop, validates entity data pointer status field.
 * @return 0+ on success (entity index), -1 if still loading, -2 on error
 * @windows_compatibility high
 * @author caprado
 */
int32_t checkEntityLoadStatus(void);

#endif // ENTITY_CHECK_H
