#ifndef SCENE_INIT_H
#define SCENE_INIT_H

#include <stdint.h>

/**
 * @category game/state
 * @status complete
 * @original func_001bc1b0
 * @address 0x001bc1b0
 * @description Initializes scene by calling func_001dd9c0 with 3 parameters
 *              from globals 0x313890/94/98. Stores result to gp-0x6330 (scene handle).
 *              If scene loaded successfully, calls func_001c69d0.
 * @windows_compatibility high
 * @author caprado
 */
void initializeScene(void);

#endif // SCENE_INIT_H
