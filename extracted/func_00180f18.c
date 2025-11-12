void func_00180f18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x260;                                           // 0x00180f18: addiu $sp, $sp, -0x260
    v0 = 0x21 << 16;                                            // 0x00180f1c: lui $v0, 0x21
    v1 = g_00216010;  // Global at 0x00216010                   // 0x00180f34: lw $v1, 0x6010($v0)
    if (v1 != 0) goto label_0x180f58;                           // 0x00180f44: bnez $v1, 0x180f58
    v0 = 0x8101 << 16;                                          // 0x00180f4c: lui $v0, 0x8101
    goto label_0x180ff8;                                        // 0x00180f50: b 0x180ff8
    v0 = v0 | 0x8001;                                           // 0x00180f54: ori $v0, $v0, 0x8001
label_0x180f58:
    func_001887a0();  // 0x188758                                // 0x00180f58: jal 0x188758
    if (s0 >= 0) goto label_0x180f78;                           // 0x00180f64: bgez $s0, 0x180f78
    /* nop */                                                   // 0x00180f68: nop 
    v0 = 0x8101 << 16;                                          // 0x00180f6c: lui $v0, 0x8101
    goto label_0x180ff8;                                        // 0x00180f70: b 0x180ff8
    v0 = v0 | 0x8002;                                           // 0x00180f74: ori $v0, $v0, 0x8002
label_0x180f78:
    func_0010af38();  // 0x10ae00                                // 0x00180f78: jal 0x10ae00
    v0 = ((unsigned)v0 < (unsigned)0x80) ? 1 : 0;               // 0x00180f80: sltiu $v0, $v0, 0x80
    if (v0 != 0) goto label_0x180f98;                           // 0x00180f84: bnez $v0, 0x180f98
    s2 = 0x27 << 16;                                            // 0x00180f88: lui $s2, 0x27
    v0 = 0x8101 << 16;                                          // 0x00180f8c: lui $v0, 0x8101
    goto label_0x180ff8;                                        // 0x00180f90: b 0x180ff8
    v0 = v0 | 0x5b;                                             // 0x00180f94: ori $v0, $v0, 0x5b
label_0x180f98:
    PollSema();  // 0x114320                                    // 0x00180f98: jal 0x114320
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00180f9c: lw $a0, -0x4e54($s2)
    v1 = 0x27 << 16;                                            // 0x00180fa0: lui $v1, 0x27
    s1 = v1 + -0x5380;                                          // 0x00180fa4: addiu $s1, $v1, -0x5380
    v0 = g_0026ac84;  // Global at 0x0026ac84                   // 0x00180fa8: lw $v0, 4($s1)
    /* beqzl $v0, 0x180fc8 */                                   // 0x00180fac: beqzl $v0, 0x180fc8
    v0 = 0xe;                                                   // 0x00180fb0: addiu $v0, $zero, 0xe
    iSignalSema();  // 0x114300                                 // 0x00180fb4: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00180fb8: lw $a0, -0x4e54($s2)
    v0 = 0x8101 << 16;                                          // 0x00180fbc: lui $v0, 0x8101
    goto label_0x180ff8;                                        // 0x00180fc0: b 0x180ff8
    v0 = v0 | 0x10;                                             // 0x00180fc4: ori $v0, $v0, 0x10
    g_0026ac80 = s0;  // Global at 0x0026ac80                   // 0x00180fc8: sw $s0, -0x5380($v1)
    g_0026ac84 = v0;  // Global at 0x0026ac84                   // 0x00180fcc: sw $v0, 4($s1)
    func_0010ae00();  // 0x10ac68                                // 0x00180fd4: jal 0x10ac68
    a0 = s1 + 0x41c;                                            // 0x00180fd8: addiu $a0, $s1, 0x41c
    g_0026ac8c = s4;  // Global at 0x0026ac8c                   // 0x00180fdc: sw $s4, 0xc($s1)
    v1 = 0x27 << 16;                                            // 0x00180fe0: lui $v1, 0x27
    iSignalSema();  // 0x114300                                 // 0x00180fe4: jal 0x114300
    a0 = g_0026b1a4;  // Global at 0x0026b1a4                   // 0x00180fe8: lw $a0, -0x4e5c($v1)
    iSignalSema();  // 0x114300                                 // 0x00180fec: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00180ff0: lw $a0, -0x4e54($s2)
label_0x180ff8:
    return;                                                     // 0x00181010: jr $ra
    sp = sp + 0x260;                                            // 0x00181014: addiu $sp, $sp, 0x260
}