void func_00180cf8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00180cf8: addiu $sp, $sp, -0x30
    v1 = 0x21 << 16;                                            // 0x00180cfc: lui $v1, 0x21
    v0 = g_00216010;  // Global at 0x00216010                   // 0x00180d04: lw $v0, 0x6010($v1)
    if (v0 != 0) goto label_0x180d24;                           // 0x00180d10: bnez $v0, 0x180d24
    v0 = 0x8101 << 16;                                          // 0x00180d18: lui $v0, 0x8101
    goto label_0x180d94;                                        // 0x00180d1c: b 0x180d94
    v0 = v0 | 0x8001;                                           // 0x00180d20: ori $v0, $v0, 0x8001
label_0x180d24:
    func_001887a0();  // 0x188758                                // 0x00180d24: jal 0x188758
    if (s0 >= 0) goto label_0x180d44;                           // 0x00180d30: bgez $s0, 0x180d44
    s1 = 0x27 << 16;                                            // 0x00180d34: lui $s1, 0x27
    v0 = 0x8101 << 16;                                          // 0x00180d38: lui $v0, 0x8101
    goto label_0x180d94;                                        // 0x00180d3c: b 0x180d94
    v0 = v0 | 0x8002;                                           // 0x00180d40: ori $v0, $v0, 0x8002
label_0x180d44:
    PollSema();  // 0x114320                                    // 0x00180d44: jal 0x114320
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00180d48: lw $a0, -0x4e54($s1)
    a2 = 0x27 << 16;                                            // 0x00180d4c: lui $a2, 0x27
    a1 = a2 + -0x5380;                                          // 0x00180d50: addiu $a1, $a2, -0x5380
    v0 = g_0026ac84;  // Global at 0x0026ac84                   // 0x00180d54: lw $v0, 4($a1)
    /* beqzl $v0, 0x180d74 */                                   // 0x00180d58: beqzl $v0, 0x180d74
    v0 = 0x27 << 16;                                            // 0x00180d5c: lui $v0, 0x27
    iSignalSema();  // 0x114300                                 // 0x00180d60: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00180d64: lw $a0, -0x4e54($s1)
    v0 = 0x8101 << 16;                                          // 0x00180d68: lui $v0, 0x8101
    goto label_0x180d94;                                        // 0x00180d6c: b 0x180d94
    v0 = v0 | 0x10;                                             // 0x00180d70: ori $v0, $v0, 0x10
    v1 = 3;                                                     // 0x00180d74: addiu $v1, $zero, 3
    a0 = g_8100b1a4;  // Global at 0x8100b1a4                   // 0x00180d78: lw $a0, -0x4e5c($v0)
    g_0026ac80 = s0;  // Global at 0x0026ac80                   // 0x00180d7c: sw $s0, -0x5380($a2)
    iSignalSema();  // 0x114300                                 // 0x00180d80: jal 0x114300
    g_0026ac84 = v1;  // Global at 0x0026ac84                   // 0x00180d84: sw $v1, 4($a1)
    iSignalSema();  // 0x114300                                 // 0x00180d88: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00180d8c: lw $a0, -0x4e54($s1)
label_0x180d94:
    return;                                                     // 0x00180da0: jr $ra
    sp = sp + 0x30;                                             // 0x00180da4: addiu $sp, $sp, 0x30
}