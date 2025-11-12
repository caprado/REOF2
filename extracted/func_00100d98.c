void func_00100d98() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00100d98: addiu $sp, $sp, -0x30
    if (a0 != 0) goto label_0x100dfc;                           // 0x00100da4: bnez $a0, 0x100dfc
    v0 = 0x1f << 16;                                            // 0x00100dac: lui $v0, 0x1f
    v1 = g_001edf10;  // Global at 0x001edf10                   // 0x00100db0: lw $v1, -0x20f0($v0)
    if (v1 <= 0) goto label_0x100dc4;                           // 0x00100db4: blez $v1, 0x100dc4
    a0 = 0x22 << 16;                                            // 0x00100db8: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x00100dbc: jal 0x116508
    a0 = &str_0021fdd8;  // "S cmd wait\n"                      // 0x00100dc0: addiu $a0, $a0, -0x228
label_0x100dc4:
    s1 = 0x1f << 16;                                            // 0x00100dc4: lui $s1, 0x1f
    goto label_0x100dd8;                                        // 0x00100dc8: b 0x100dd8
    s0 = 0x1f << 16;                                            // 0x00100dcc: lui $s0, 0x1f
label_0x100dd0:
    func_00115408();  // 0x115340                                // 0x00100dd0: jal 0x115340
    a0 = 0xfa0;                                                 // 0x00100dd4: addiu $a0, $zero, 0xfa0
label_0x100dd8:
    v0 = g_001edf34;  // Global at 0x001edf34                   // 0x00100dd8: lw $v0, -0x20cc($s1)
    if (v0 != 0) goto label_0x100dd0;                           // 0x00100ddc: bnez $v0, 0x100dd0
    /* nop */                                                   // 0x00100de0: nop 
    func_001178e0();  // 0x1178a0                                // 0x00100de4: jal 0x1178a0
    a0 = s0 + -0xf30;                                           // 0x00100de8: addiu $a0, $s0, -0xf30
    if (v0 != 0) goto label_0x100dd0;                           // 0x00100dec: bnez $v0, 0x100dd0
    goto label_0x100e28;                                        // 0x00100df4: b 0x100e28
label_0x100dfc:
    v0 = 0x1f << 16;                                            // 0x00100dfc: lui $v0, 0x1f
    v1 = g_001edf34;  // Global at 0x001edf34                   // 0x00100e00: lw $v1, -0x20cc($v0)
    if (v1 != 0) goto label_0x100e24;                           // 0x00100e04: bnez $v1, 0x100e24
    v0 = 1;                                                     // 0x00100e08: addiu $v0, $zero, 1
    a0 = 0x1f << 16;                                            // 0x00100e0c: lui $a0, 0x1f
    func_001178e0();  // 0x1178a0                                // 0x00100e10: jal 0x1178a0
    a0 = a0 + -0xf30;                                           // 0x00100e14: addiu $a0, $a0, -0xf30
    if (v0 != 0) goto label_0x100e24;                           // 0x00100e18: bnez $v0, 0x100e24
    v0 = 1;                                                     // 0x00100e1c: addiu $v0, $zero, 1
label_0x100e24:
label_0x100e28:
    return;                                                     // 0x00100e30: jr $ra
    sp = sp + 0x30;                                             // 0x00100e34: addiu $sp, $sp, 0x30
}