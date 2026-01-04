#ifndef GRAPHICS_INIT_H
#define GRAPHICS_INIT_H

#include <stdint.h>

/**
 * @category graphics/memory
 * @status complete
 * @original func_0019f080
 * @address 0x0019f080
 * @description Graphics system initialization - sets up graphics memory and related subsystems.
 *              Returns 1 on success, 0 on failure.
 * @windows_compatibility medium - PS2 interrupt registers abstracted away
 * @author caprado
 */
int32_t initializeGraphicsSystem(void);

#endif // GRAPHICS_INIT_H
