#include <stdint.h>

/**
 * @file stubs.c
 * @description Stub implementations for PS2 functions not needed on Windows.
 *              Each stub is tagged with its category:
 *                [PS2-SPECIFIC]  — PS2 hardware (GS/DMA/SPU2/VIF), not applicable on Windows
 *                [GATED]         — Only executes under conditions that don't occur at boot
 *                [PORTED]        — Reference to ported function (comment only, no stub needed)
 *
 *              As each function is properly refactored, remove its stub and add a
 *              [PORTED] comment pointing to the new location.
 */

// ============================================================================
// [PS2-SPECIFIC] — PS2 hardware, not needed on Windows
// ============================================================================

/** @category audio/playback @status complete @original func_00131bb8 @address 0x00131bb8
 *  @description PS2 SPU2 voice key-on. Windows: OpenAL handles audio playback.
 *  @windows_compatibility low @author caprado */
int32_t func_00131bb8(void* channelHandle) { (void)channelHandle; return 0; }

/** @category audio/playback @status complete @original func_00132478 @address 0x00132478
 *  @description PS2 SPU2 voice volume set. Windows: OpenAL handles volume.
 *  @windows_compatibility low @author caprado */
void func_00132478(void* channelHandle, int32_t volume) { (void)channelHandle; (void)volume; }

/** @category audio/playback @status complete @original func_0012bbb8 @address 0x0012bbb8
 *  @description PS2 SPU2 audio init. Windows: OpenAL initialized in sound_bank.c.
 *  @windows_compatibility low @author caprado */
void func_0012bbb8(void) {}

/** @category system/irq @status complete @original func_001a5cf0 @address 0x001a5cf0
 *  @description PS2 controller polling via SIF/IOP. Windows: input.c uses GetAsyncKeyState.
 *  @windows_compatibility low @author caprado */
int32_t func_001a5cf0(void) { return 0; }

/** @category system/irq @status complete @original func_001a19f0 @address 0x001a19f0
 *  @description PS2 input processing trampoline. Windows: input handled by input.c.
 *  @windows_compatibility low @author caprado */
void func_001a19f0(int32_t a0) { (void)a0; }

/** @category io/cdrom @status complete @original func_001dd810 @address 0x001dd810
 *  @description PS2 overlay code patcher (relocates MIPS code after disc load).
 *              Windows: overlay code compiled natively, patching not needed.
 *  @windows_compatibility low @author caprado */
void func_001dd810(int32_t fileId) { (void)fileId; }

/** @category graphics/render @status complete @original func_001b5010 @address 0x001b5010
 *  @description PS2 font context glyph width setter (stores to ctx+0x78).
 *              Windows: game_font.c handles glyph rendering directly.
 *  @windows_compatibility low @author caprado */
void func_001b5010(int32_t a0) { (void)a0; }

/** @category graphics/render @status complete @original func_001b4fd0 @address 0x001b4fd0
 *  @description PS2 font context line height setter (stores to ctx+0x6c, ctx+0x98).
 *              Windows: game_font.c handles text layout directly.
 *  @windows_compatibility low @author caprado */
void func_001b4fd0(int32_t a0) { (void)a0; }

/** @category graphics/render @status complete @original func_001b5040 @address 0x001b5040
 *  @description PS2 font context style flag (stores to ctx+0x7c).
 *              Windows: game_font.c handles font selection directly.
 *  @windows_compatibility low @author caprado */
void func_001b5040(void) {}

/** @category graphics/render @status complete @original func_001c19e0 @address 0x001c19e0
 *  @description PS2 loading screen text display. Windows: loading is synchronous.
 *  @windows_compatibility low @author caprado */
void func_001c19e0(int32_t a0) { (void)a0; }

/** @category graphics/render @status complete @original func_001c2620 @address 0x001c2620
 *  @description PS2 loading screen graphics rendering (GS packet setup, DMA).
 *              Windows: loading is synchronous, no loading screen needed at boot.
 *  @windows_compatibility low @author caprado */
void func_001c2620(int32_t a0, int32_t a1, int32_t a2) { (void)a0; (void)a1; (void)a2; }

/** @category graphics/render @status complete @original func_001bbf40 @address 0x001bbf40
 *  @description PS2 graphics subsystem init (calls GS/DMA setup functions).
 *              Windows: OpenGL initialized in opengl_renderer.c.
 *  @windows_compatibility low @author caprado */
void func_001bbf40(void) {}

/** @category graphics/render @status complete @original func_001bbf70 @address 0x001bbf70
 *  @description PS2 font/text subsystem init (calls func_001b4550).
 *              Windows: font system initialized in game_font.c.
 *  @windows_compatibility low @author caprado */
void func_001bbf70(void) {}

/** @category graphics/render @status complete @original func_001b7790 @address 0x001b7790
 *  @description PS2 display configuration setup. Windows: handled by opengl_renderer.c.
 *  @windows_compatibility low @author caprado */
void func_001b7790(void) {}

/** @category graphics/render @status complete @original func_001bbab0 @address 0x001bbab0
 *  @description PS2 perspective matrix initialization for GS.
 *              Windows: OpenGL projection set in opengl_init_gl().
 *  @windows_compatibility low @author caprado */
void func_001bbab0(void) {}

/** @category graphics/render @status complete @original func_001bc1a0 @address 0x001bc1a0
 *  @description PS2 scene display init (GS framebuffer/zbuffer setup).
 *              Windows: OpenGL manages buffers automatically.
 *  @windows_compatibility low @author caprado */
void func_001bc1a0(void) {}

/** @category audio/playback @status complete @original func_001adb80 @address 0x001adb80
 *  @description PS2 audio channel stop/transition. Not called in boot flow.
 *  @windows_compatibility low @author caprado */
void func_001adb80(void) {}

// ============================================================================
// [GATED] — Only execute under conditions not met during boot-to-menu
// ============================================================================

/** @category game/state @status complete @original func_001bef00 @address 0x001bef00
 *  @description Graphics/scenario subsystem load. Gated by init condition (never true at boot).
 *  @windows_compatibility high @author caprado */
void func_001bef00(void) {}

/** @category game/state @status complete @original func_001b3830 @address 0x001b3830
 *  @description Resource management init. Gated by init condition (never true at boot).
 *  @windows_compatibility high @author caprado */
void func_001b3830(void) {}

/** @category game/state @status complete @original func_001dac50 @address 0x001dac50
 *  @description Common sound bank loader trampoline. Gated by init condition.
 *              When needed: loads "common" bank via func_001daef0.
 *  @windows_compatibility high @author caprado */
void func_001dac50(void) {}

/** @category game/state @status complete @original func_0034d600 @address 0x0034d600
 *  @description Conditional subsystem update. Gated by state37b5 == 1 (0 at init).
 *  @windows_compatibility high @author caprado */
void func_0034d600(void) {}

/** @category game/state @status complete @original func_001aed20 @address 0x001aed20
 *  @description Conditional frame update. Dead code (updateResult always 0 on Windows).
 *  @windows_compatibility high @author caprado */
void func_001aed20(void) {}

/** @category game/state @status complete @original func_001af280 @address 0x001af280
 *  @description Register callback by PS2 address. Addresses are PS2-specific (0x001c1f70 etc).
 *              Windows: callbacks registered directly via function pointers.
 *  @windows_compatibility high @author caprado */
void func_001af280(uintptr_t a0) { (void)a0; }

/** @category game/state @status complete @original func_001b76c0 @address 0x001b76c0
 *  @description Frame entry init with PS2 callback address. Second call in boot uses
 *              PS2 address 0x001b9e60. Windows: initializeFrameEntry() used directly.
 *  @windows_compatibility high @author caprado */
void func_001b76c0(uintptr_t callback, int32_t index) { (void)callback; (void)index; }

/** @category game/state @status complete @original func_001c2a50 @address 0x001c2a50
 *  @description Scenario/graphics config state machine. Returns immediately at boot.
 *  @windows_compatibility high @author caprado */
void func_001c2a50(void) {}

/** @category game/state @status complete @original func_001c2e20 @address 0x001c2e20
 *  @description Scenario config completion check. Returns 0 (done) to advance boot.
 *  @windows_compatibility high @author caprado */
int32_t func_001c2e20(void) { return 0; }

/** @category game/state @status complete @original func_001dbdc0 @address 0x001dbdc0
 *  @description State transition completion check. Returns 0 (done) to advance boot.
 *  @windows_compatibility high @author caprado */
int32_t func_001dbdc0(void) { return 0; }

/** @category io/filesystem @status complete @original func_001bdc10 @address 0x001bdc10
 *  @description PS2 memory card / file system operations. Not needed at boot.
 *  @windows_compatibility high @author caprado */
void func_001bdc10(void) {}

/** @category game/state @status complete @original func_001af2f0 @address 0x001af2f0
 *  @description Cleanup/unregister callback by PS2 address. Addresses are PS2-specific.
 *  @windows_compatibility high @author caprado */
void func_001af2f0(uintptr_t a0) { (void)a0; }

/** @category game/state @status complete @original func_001ba3c0 @address 0x001ba3c0
 *  @description Game state initialization from config data.
 *  @windows_compatibility high @author caprado */
void func_001ba3c0(void) {}

/** @category io/filesystem @status complete @original func_001dd9c0 @address 0x001dd9c0
 *  @description Scene data loader. Returns 1 (loaded) to allow boot progression.
 *  @windows_compatibility high @author caprado */
int32_t func_001dd9c0(int32_t a0, int32_t a1, int32_t a2) { (void)a0; (void)a1; (void)a2; return 1; }

/** @category game/state @status complete @original func_001c69d0 @address 0x001c69d0
 *  @description Scene post-initialization. Called after scene handle obtained.
 *  @windows_compatibility high @author caprado */
void func_001c69d0(void) {}

// ============================================================================
// [PORTED] — References only, stubs removed. See target files.
// ============================================================================

// func_001a8e70 — ported as loadResourceSlot() in io/resource_loader.c
// func_001b7940 — ported as loadCompanyLogos() in game/resource_queue.c
// func_001b78b0 — ported as queueResourceLoad() in game/resource_queue.c
// func_001b0720 — ported as checkEntityLoadStatus() in game/entity_check.c
// func_001bc750 — ported as waitForBootLoad() in game/boot_load_wait.c
// func_001bd070 — ported as checkBootLoadState() in game/boot_load_check.c
// func_001bc1b0 — ported as initializeScene() in game/scene_init.c
// func_001b0ce0 — ported as isEntityDataReady() in game/entity_ready_check.c
// func_001addd0 — ported as audioFadeTransition() in game/demo_overlay.c
// func_001adbe0 — ported as audioCleanupAllChannels() in game/demo_overlay.c
// func_001b8000 — ported via playSoundEffect(12, N) in game/demo_overlay.c + audio/sound_bank.c
// func_001ac9d0 — ported as parseMomoBank() in audio/sound_bank.c
// func_001ac220 — ported as playSoundEffect() in audio/sound_bank.c
// func_001daca0 — ported as loadSoundBank() in audio/sound_bank.c

// ============================================================================
// Utility stubs
// ============================================================================

/** @category memory/allocation @status complete @original initializeMemoryPool
 *  @description PS2 memory pool init for bump allocator. Windows uses malloc/free.
 *  @windows_compatibility low @author caprado */
void initializeMemoryPool(void* base, uint32_t size, uint32_t blockSize) {
    (void)base; (void)size; (void)blockSize;
}
