void func_00180da8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00180da8: addiu $sp, $sp, -0x30
    v1 = 0x21 << 16;                                            // 0x00180dac: lui $v1, 0x21
    v0 = g_00216010;  // Global at 0x00216010                   // 0x00180db4: lw $v0, 0x6010($v1)
    if (v0 != 0) goto label_0x180dd4;                           // 0x00180dc0: bnez $v0, 0x180dd4
    v0 = 0x8101 << 16;                                          // 0x00180dc8: lui $v0, 0x8101
    goto label_0x180e44;                                        // 0x00180dcc: b 0x180e44
    v0 = v0 | 0x8001;                                           // 0x00180dd0: ori $v0, $v0, 0x8001
label_0x180dd4:
    func_001887a0();  // 0x188758                                // 0x00180dd4: jal 0x188758
    if (s0 >= 0) goto label_0x180df4;                           // 0x00180de0: bgez $s0, 0x180df4
    s1 = 0x27 << 16;                                            // 0x00180de4: lui $s1, 0x27
    v0 = 0x8101 << 16;                                          // 0x00180de8: lui $v0, 0x8101
    goto label_0x180e44;                                        // 0x00180dec: b 0x180e44
    v0 = v0 | 0x8002;                                           // 0x00180df0: ori $v0, $v0, 0x8002
label_0x180df4:
    PollSema();  // 0x114320                                    // 0x00180df4: jal 0x114320
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00180df8: lw $a0, -0x4e54($s1)
    a2 = 0x27 << 16;                                            // 0x00180dfc: lui $a2, 0x27
    a1 = a2 + -0x5380;                                          // 0x00180e00: addiu $a1, $a2, -0x5380
    v0 = g_0026ac84;  // Global at 0x0026ac84                   // 0x00180e04: lw $v0, 4($a1)
    /* beqzl $v0, 0x180e24 */                                   // 0x00180e08: beqzl $v0, 0x180e24
    v0 = 0x27 << 16;                                            // 0x00180e0c: lui $v0, 0x27
    iSignalSema();  // 0x114300                                 // 0x00180e10: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00180e14: lw $a0, -0x4e54($s1)
    v0 = 0x8101 << 16;                                          // 0x00180e18: lui $v0, 0x8101
    goto label_0x180e44;                                        // 0x00180e1c: b 0x180e44
    v0 = v0 | 0x10;                                             // 0x00180e20: ori $v0, $v0, 0x10
    v1 = 4;                                                     // 0x00180e24: addiu $v1, $zero, 4
    a0 = g_8100b1a4;  // Global at 0x8100b1a4                   // 0x00180e28: lw $a0, -0x4e5c($v0)
    g_0026ac80 = s0;  // Global at 0x0026ac80                   // 0x00180e2c: sw $s0, -0x5380($a2)
    iSignalSema();  // 0x114300                                 // 0x00180e30: jal 0x114300
    g_0026ac84 = v1;  // Global at 0x0026ac84                   // 0x00180e34: sw $v1, 4($a1)
    iSignalSema();  // 0x114300                                 // 0x00180e38: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00180e3c: lw $a0, -0x4e54($s1)
label_0x180e44:
    return;                                                     // 0x00180e50: jr $ra
    sp = sp + 0x30;                                             // 0x00180e54: addiu $sp, $sp, 0x30
}