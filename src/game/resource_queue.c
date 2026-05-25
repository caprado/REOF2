#include "resource_queue.h"
#include "game_data.h"
#include "game_state_manager.h"
#include "demo_overlay.h"
#include <stdio.h>

/** @category io/filesystem @status complete @original func_001b78b0 @address 0x001b78b0 @description Queue resource slot for disc loading from NETBIO00.DAT
 *
 * Original ASM:
 *   lbu $v1, 0x37d8($at)        ; v1 = state37d8 (last loaded slot 1)
 *   beq $a2, $v1, skip1         ; if source already loaded, skip
 *   lb $v1, -0x7cd4($gp)        ; v1 = pendingResourceSlot1
 *   beq $v1, $a2, skip1         ; if source already pending, skip
 *   sb $a0, -0x7cd4($gp)        ; queue source to pending slot 1
 * skip1:
 *   beq $a0, -1, return         ; if slot == -1, return
 *   lbu $v1, 0x37d9($at)        ; v1 = state37d9 (last loaded slot 2)
 *   beq $a0, $v1, return        ; if slot already loaded, return
 *   lb $v1, -0x7cd0($gp)        ; v1 = pendingResourceSlot2
 *   beq $v1, $a0, return        ; if slot already pending, return
 *   sb $a1, -0x7cd0($gp)        ; queue target to pending slot 2
 *
 * @windows_compatibility high
 * @author caprado
 */
void queueResourceLoad(int32_t slot, int32_t target, int32_t source) {
    if (source != (int32_t)g_game.state37d8 && source != (int32_t)g_game.pendingResourceSlot1) {
        g_game.pendingResourceSlot1 = (int8_t)slot;
    }

    // Second: check if target (a1) should be queued to pendingResourceSlot2
    // Guard: skip if slot == -1, or slot already loaded (state37d9), or already pending (pendingSlot2)
    if (slot == -1) {
        return;
    }
    if (slot != (int32_t)g_game.state37d9 && slot != (int32_t)g_game.pendingResourceSlot2) {
        g_game.pendingResourceSlot2 = (int8_t)target;
    }
}

/** @category game/state @status complete @original func_001b7940 @address 0x001b7940 @description Register demo overlay callback and queue resource slot 1 for loading
 *
 * Original ASM:
 *   lui $a0, 0x54
 *   addiu $a0, 0x3080           ; a0 = 0x543080 (PS2 logo callback address)
 *   jal 0x1b76c0               ; initializeFrameEntry(0x543080, 4)
 *   addiu $a1, $zero, 4         ; a1 = 4 (slot index, delay slot)
 *   addiu $a0, $zero, 1         ; a0 = 1 (resource slot)
 *   jal 0x1b78b0               ; queueResourceLoad(1, -1, ?)
 *   addiu $a1, $zero, -1        ; a1 = -1 (target, delay slot)
 *
 * @windows_compatibility high
 * @author caprado
 */
void loadCompanyLogos(void) {
    // Register demo overlay callback at frame entry slot 4
    // Original: 0x543080 is PS2 overlay code from demo.bin
    // On Windows: demoOverlayCallback replaces it
    // Only register once — on PS2 this also runs every frame from state 10
    // but the entry transition 0xc→8 takes 2 frames, and re-registering resets it
    static int s_registered = 0;
    if (!s_registered) {
        initializeFrameEntry((uintptr_t)demoOverlayCallback, 4);
        s_registered = 1;
    }

    // Queue resource slot 1 (demo.bin) for loading
    // Original: jal 0x1b78b0 with a0=1 (slot), a1=-1 (target)
    // a2 is the register carry from prior function calls in the boot state
    // The guard checks: if source == state37d8 OR source == pendingSlot1, skip
    // We set pendingResourceSlot1 directly, bypassing the guard for the first call
    // Subsequent calls: state37d8 will be 1, matching the slot, so the entry
    // won't be re-cleared in finalizeFrame
    if (g_game.pendingResourceSlot1 == -1 && g_game.state37d8 != 1) {
        g_game.pendingResourceSlot1 = 1;
    }
}
