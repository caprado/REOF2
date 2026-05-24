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

// func_001a8e70 — ported as loadResourceSlot() in io/resource_loader.c
void func_001dd810(int32_t fileId) { (void)fileId; }  // Overlay patcher (not needed on Windows)

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
// func_001b0720 — ported as checkEntityLoadStatus() in entity_check.c
void func_001a19f0(int32_t a0) { (void)a0; }  // Input processing trampoline
void func_001af280(uintptr_t a0) { (void)a0; }  // Register callback
void func_001bbf40(void) {}
void func_001bbf70(void) {}
// func_001bc750 — ported as waitForBootLoad() in boot_load_wait.c
void func_001b5010(int32_t a0) { (void)a0; }
void func_001b4fd0(int32_t a0) { (void)a0; }
void func_001b5040(void) {}
// func_001bd070 — ported as checkBootLoadState() in boot_load_check.c
void func_001bdc10(void) {}
void func_001c19e0(int32_t a0) { (void)a0; }
void func_001c2620(int32_t a0, int32_t a1, int32_t a2) { (void)a0; (void)a1; (void)a2; }
void func_001c2a50(void) {}  // Graphics/scenario setup
int32_t func_001c2e20(void) { return 0; }  // Scenario config check, 0=done
int32_t func_001dbdc0(void) { return 0; }  // Completion check, 0=done
void func_001bc1a0(void) {}  // Scene display init
// func_001bc1b0 — ported as initializeScene() in scene_init.c
int32_t func_001dd9c0(int32_t a0, int32_t a1, int32_t a2) { (void)a0; (void)a1; (void)a2; return 1; }  // Scene loader — return 1 (loaded) for boot
void func_001c69d0(void) {}  // Scene post-init
void func_001af2f0(uintptr_t a0) { (void)a0; }  // Cleanup callback
void func_001ba3c0(void) {}  // Game state init from config
void func_001bbab0(void) {}  // Perspective matrix setup
// func_001b7940 — ported as loadCompanyLogos() in resource_queue.c
// func_001b78b0 — ported as queueResourceLoad() in resource_queue.c

// Demo overlay audio functions
void func_001addd0(void) {}  // Audio transition
void func_001adb80(void) {}  // Audio stop/transition
void func_001adbe0(void) {}  // Audio cleanup
void func_001b8000(void) {}  // Scene transition
void func_001b7790(void) {}  // Display setup
// func_001b0ce0 — ported as isEntityDataReady() in entity_ready_check.c
