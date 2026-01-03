#ifndef GRAPHICS_MEMORY_H
#define GRAPHICS_MEMORY_H

#include <stdint.h>

/**
 * @file graphics_memory.h
 * @brief Graphics memory allocation and readiness checking
 */

/**
 * @brief Check if graphics memory buffer is ready
 * @param width Buffer width in pixels (0x280 = 640)
 * @param height Buffer height in pixels (0x1c0 = 448)
 * @return 1 if memory is ready and initialized, 0 if not ready
 * @description Checks if graphics memory buffer of specified size is available.
 *              If available, initializes graphics subsystems and returns 1.
 *              If not available, returns 0 (caller should retry).
 * @original func_0019f080 at 0x0019f080
 */
int32_t checkGraphicsMemoryReady(int32_t width, int32_t height);

#endif // GRAPHICS_MEMORY_H
