#include <stdint.h>
#include <stdbool.h>

// Unclassified subsystem initialization functions
extern void func_001ac160(void);  // Subsystem init 1
extern void func_001ac0c0(void);  // Subsystem init 2
extern void func_001b8000(void);  // Subsystem init 3
extern void func_001baa30(void);  // Subsystem init 4
extern void func_001b45a0(void);  // Subsystem init 5
extern void func_001b3450(void);  // Subsystem init 6
extern void func_001b3440(void);  // Subsystem init 7
extern void func_001bb740(void);  // Subsystem init 8

/**
 * @category game/init
 * @status complete
 * @author caprado
 * @original func_001ba960
 * @address 0x001ba960
 * @description Initialize all game subsystems in the correct order.
 *              Called during game state manager initialization (state 0).
 *              Each function initializes a different game subsystem.
 * @windows_compatibility high
 */
void initializeGameSubsystems(void) {
    // Initialize subsystems in order
    func_001ac160();  // Original: func_001ac160 at 0x1ac150
    func_001ac0c0();  // Original: func_001ac0c0 at 0x1ac020
    func_001b8000();  // Original: func_001b8000 at 0x1b7f80
    func_001baa30();  // Original: func_001baa30 at 0x1ba9c0
    func_001b45a0();  // Original: func_001b45a0 at 0x1b4570
    func_001b3450();  // Original: func_001b3450 at 0x1b3440
    func_001b3440();  // Original: func_001b3440 at 0x1b3430
    func_001bb740();  // Original: func_001bb740 at 0x1bb710
}
