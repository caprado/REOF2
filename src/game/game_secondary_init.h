#ifndef GAME_SECONDARY_INIT_H
#define GAME_SECONDARY_INIT_H

/**
 * @category game/init
 * @status complete
 * @original func_001ba960
 * @address 0x001ba960
 * @description Secondary game initialization. Called after initializeGameSubsystems.
 *              Initializes various game subsystems including resources, rendering,
 *              and entity management.
 * @windows_compatibility medium
 * @author caprado
 */
void initializeSecondarySubsystems(void);

#endif // GAME_SECONDARY_INIT_H
