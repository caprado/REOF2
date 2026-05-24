#include <stdint.h>

/**
 * @file stubs.c
 * @description Stub implementations for unrefactored extern functions.
 *              All functions here are gated by runtime conditions and will not
 *              execute during normal boot. They exist only to satisfy the linker.
 *              As each function is properly refactored, remove its stub from here.
 */

// Audio playback - PS2 SPU functions, no audio playing at boot
int32_t func_00131bb8(void* channelHandle) { (void)channelHandle; return 0; }
void func_00132478(void* channelHandle, int32_t volume) { (void)channelHandle; (void)volume; }
void func_0012bbb8(void) {}

// Controller polling - Windows input handled by opengl_process_events
int32_t func_001a5cf0(void) { return 0; }

// Conditional subsystem - gated by state37b5 == 1 (0 at init)
void func_0034d600(void) {}

// Conditional update - dead code (updateResult always 0)
void func_001aed20(void) {}

// Resource loader - gated by pendingResourceSlot != -1 (init'd to -1)
void func_001a8e70(int32_t slot) { (void)slot; }

// Memory pool init - called from array utility
void initializeMemoryPool(void* base, uint32_t size, uint32_t blockSize) {
    (void)base; (void)size; (void)blockSize;
}

// Game frame callback subfunctions - init
void func_001bef00(void) {}
void func_001b3830(void) {}
void func_001dac50(void) {}

// Boot state machine subfunctions
void func_001b76c0(uintptr_t callback, int32_t index) { (void)callback; (void)index; }  // initializeFrameEntry (PS2 addresses)
int32_t func_001b0720(void) { return 0; }  // Entity/resource check, 0=success
void func_001af280(uintptr_t a0) { (void)a0; }  // Register callback
void func_001bbf40(void) {}
void func_001bbf70(void) {}
int32_t func_001bc750(void) { return 0; }  // Wait for load, 0=done
void func_001c2a50(void) {}  // Graphics/scenario setup
int32_t func_001c2e20(void) { return 0; }  // Scenario config check, 0=done
int32_t func_001dbdc0(void) { return 0; }  // Completion check, 0=done
void func_001bc1a0(void) {}  // Scene display init
void func_001bc1b0(void) {}  // Scene unload/cleanup
void func_001af2f0(uintptr_t a0) { (void)a0; }  // Cleanup callback
void func_001ba3c0(void) {}  // Game state init from config
void func_001bbab0(void) {}  // Perspective matrix setup
void func_001b7940(void) {}  // Company logo load
void func_001b7790(void) {}  // Display setup
int32_t func_001b0ce0(void) { return 0; }  // Error state check
