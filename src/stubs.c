#include <stdint.h>

/**
 * @file stubs.c
 * @description Stub implementations for func_* that are called in source code
 *              but not yet ported to Windows. These satisfy the linker until
 *              each function is properly refactored or determined unnecessary.
 *              Remove stubs as they get ported — tag the extracted func_* file instead.
 */

// ============================================================================
// Boot state machine — called from game_frame_callback.c
// ============================================================================
void func_001bef00(void) {}       // gated init
void func_001b3830(void) {}       // gated init
void func_001dac50(void) {}       // gated init
void func_001bbf40(void) {}       // PS2 graphics init
void func_001bbf70(void) {}       // PS2 font init
void func_001b7790(void) {}       // PS2 display setup
void func_001bbab0(void) {}       // PS2 perspective matrix
void func_001bc1a0(void) {}       // PS2 scene display init
void func_001af280(uintptr_t a0) { (void)a0; }   // register callback by PS2 address
void func_001b76c0(uintptr_t callback, int32_t index) { (void)callback; (void)index; }  // frame entry with PS2 address
void func_001af2f0(uintptr_t a0) { (void)a0; }   // cleanup callback by PS2 address
void func_001ba3c0(void) {}       // game state init from config
void func_001c2a50(void) {}       // scenario config setup
int32_t func_001c2e20(void) { return 0; }   // scenario config check (0=done)
int32_t func_001dbdc0(void) { return 0; }   // completion check (0=done)
int32_t func_001dd9c0(int32_t a0, int32_t a1, int32_t a2) { (void)a0; (void)a1; (void)a2; return 1; }  // scene loader (1=loaded)
void func_001c69d0(void) {}       // scene post-init

// ============================================================================
// Conditional — called from frame_update.c / game_state_manager.c
// ============================================================================
void func_0034d600(void) {}       // gated by state37b5 == 1
void func_001aed20(void) {}       // dead code on Windows

// ============================================================================
// Utility — called from array.c, not a PS2 function
// ============================================================================
void initializeMemoryPool(void* base, uint32_t size, uint32_t blockSize) {
    (void)base; (void)size; (void)blockSize;
}
