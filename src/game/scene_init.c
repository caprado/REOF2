#include "scene_init.h"
#include "game_data.h"

// Scene loading function — loads scene data based on 3 config values
extern int32_t func_001dd9c0(int32_t a0, int32_t a1, int32_t a2);
// Scene post-init — called after scene handle is obtained
extern void func_001c69d0(void);

// Scene config values at 0x313890, 0x313894, 0x313898
// These get set by func_001c2a50 (scenario setup) — currently stubbed
// On Windows they default to 0
static int32_t s_sceneConfig0 = 0;  // 0x313890
static int32_t s_sceneConfig1 = 0;  // 0x313894
static int32_t s_sceneConfig2 = 0;  // 0x313898

/** @category game/state @status complete @original func_001bc1b0 @address 0x001bc1b0
 *
 * Original ASM:
 *   lw $v1, -0x6330($gp)         ; check scene handle
 *   bnez $v1, return             ; if already loaded, skip
 *   lw $a0, 0x3890($at)          ; load config 0
 *   lw $a1, 0x3894($at)          ; load config 1
 *   lw $a2, 0x3898($at)          ; load config 2
 *   jal 0x1dd9c0                 ; call scene loader
 *   sw $v0, -0x6330($gp)         ; store scene handle
 *   lw $v1, -0x6330($gp)         ; reload
 *   beqz $v1, return             ; if failed, skip
 *   jal 0x1c69d0                 ; post-init
 *
 * @windows_compatibility high
 * @author caprado
 */
void initializeScene(void) {
    // If scene already loaded, skip
    if (g_game.sceneHandle != 0) {
        return;
    }

    // Call scene loader with config values
    g_game.sceneHandle = func_001dd9c0(s_sceneConfig0, s_sceneConfig1, s_sceneConfig2);

    // If scene loaded successfully, call post-init
    if (g_game.sceneHandle != 0) {
        func_001c69d0();
    }
}
