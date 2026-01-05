void func_00180e58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00180e58: addiu $sp, $sp, -0x40
    v0 = 0x21 << 16;                                            // 0x00180e5c: lui $v0, 0x21
    v1 = g_00216010;  // Global at 0x00216010                   // 0x00180e6c: lw $v1, 0x6010($v0)
    if (v1 != 0) goto label_0x180e8c;                           // 0x00180e78: bnez $v1, 0x180e8c
    v0 = 0x8101 << 16;                                          // 0x00180e80: lui $v0, 0x8101
    goto label_0x180f00;                                        // 0x00180e84: b 0x180f00
    v0 = v0 | 0x8001;                                           // 0x00180e88: ori $v0, $v0, 0x8001
label_0x180e8c:
    func_00188758();  // 188758                                // 0x00180e8c: jal 0x188758
    if (s0 >= 0) goto label_0x180eac;                           // 0x00180e98: bgez $s0, 0x180eac
    s1 = 0x27 << 16;                                            // 0x00180e9c: lui $s1, 0x27
    v0 = 0x8101 << 16;                                          // 0x00180ea0: lui $v0, 0x8101
    goto label_0x180f00;                                        // 0x00180ea4: b 0x180f00
    v0 = v0 | 0x8002;                                           // 0x00180ea8: ori $v0, $v0, 0x8002
label_0x180eac:
    PollSema();  // 0x114320                                    // 0x00180eac: jal 0x114320
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00180eb0: lw $a0, -0x4e54($s1)
    a2 = 0x27 << 16;                                            // 0x00180eb4: lui $a2, 0x27
    a1 = a2 + -0x5380;                                          // 0x00180eb8: addiu $a1, $a2, -0x5380
    v0 = g_0026ac84;  // Global at 0x0026ac84                   // 0x00180ebc: lw $v0, 4($a1)
    /* beqzl $v0, 0x180edc */                                   // 0x00180ec0: beqzl $v0, 0x180edc
    v0 = 0x27 << 16;                                            // 0x00180ec4: lui $v0, 0x27
    iSignalSema();  // 0x114300                                 // 0x00180ec8: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00180ecc: lw $a0, -0x4e54($s1)
    v0 = 0x8101 << 16;                                          // 0x00180ed0: lui $v0, 0x8101
    goto label_0x180f00;                                        // 0x00180ed4: b 0x180f00
    v0 = v0 | 0x10;                                             // 0x00180ed8: ori $v0, $v0, 0x10
    g_0026ac80 = s0;  // Global at 0x0026ac80                   // 0x00180edc: sw $s0, -0x5380($a2)
    a0 = g_8100b1a4;  // Global at 0x8100b1a4                   // 0x00180ee0: lw $a0, -0x4e5c($v0)
    v1 = 2;                                                     // 0x00180ee4: addiu $v1, $zero, 2
    g_0026ac8c = s2;  // Global at 0x0026ac8c                   // 0x00180ee8: sw $s2, 0xc($a1)
    iSignalSema();  // 0x114300                                 // 0x00180eec: jal 0x114300
    g_0026ac84 = v1;  // Global at 0x0026ac84                   // 0x00180ef0: sw $v1, 4($a1)
    iSignalSema();  // 0x114300                                 // 0x00180ef4: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00180ef8: lw $a0, -0x4e54($s1)
label_0x180f00:
    return;                                                     // 0x00180f10: jr $ra
    sp = sp + 0x40;                                             // 0x00180f14: addiu $sp, $sp, 0x40
}