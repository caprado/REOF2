void func_00181710() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x00181710: addiu $sp, $sp, -0x60
    v0 = 0x21 << 16;                                            // 0x00181714: lui $v0, 0x21
    v1 = g_00216010;  // Global at 0x00216010                   // 0x0018172c: lw $v1, 0x6010($v0)
    if (v1 != 0) goto label_0x181750;                           // 0x0018173c: bnez $v1, 0x181750
    v0 = 0x8101 << 16;                                          // 0x00181744: lui $v0, 0x8101
    goto label_0x1817f0;                                        // 0x00181748: b 0x1817f0
    v0 = v0 | 0x8001;                                           // 0x0018174c: ori $v0, $v0, 0x8001
label_0x181750:
    func_00188758();  // 188758                                // 0x00181750: jal 0x188758
    if (s0 >= 0) goto label_0x181770;                           // 0x0018175c: bgez $s0, 0x181770
    /* nop */                                                   // 0x00181760: nop 
    v0 = 0x8101 << 16;                                          // 0x00181764: lui $v0, 0x8101
    goto label_0x1817f0;                                        // 0x00181768: b 0x1817f0
    v0 = v0 | 0x8002;                                           // 0x0018176c: ori $v0, $v0, 0x8002
label_0x181770:
    func_0010ae00();  // 10ae00                                // 0x00181770: jal 0x10ae00
    v0 = ((unsigned)v0 < (unsigned)0x80) ? 1 : 0;               // 0x00181778: sltiu $v0, $v0, 0x80
    if (v0 != 0) goto label_0x181790;                           // 0x0018177c: bnez $v0, 0x181790
    s2 = 0x27 << 16;                                            // 0x00181780: lui $s2, 0x27
    v0 = 0x8101 << 16;                                          // 0x00181784: lui $v0, 0x8101
    goto label_0x1817f0;                                        // 0x00181788: b 0x1817f0
    v0 = v0 | 0x5b;                                             // 0x0018178c: ori $v0, $v0, 0x5b
label_0x181790:
    PollSema();  // 0x114320                                    // 0x00181790: jal 0x114320
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00181794: lw $a0, -0x4e54($s2)
    v1 = 0x27 << 16;                                            // 0x00181798: lui $v1, 0x27
    s1 = v1 + -0x5380;                                          // 0x0018179c: addiu $s1, $v1, -0x5380
    v0 = g_0026ac84;  // Global at 0x0026ac84                   // 0x001817a0: lw $v0, 4($s1)
    /* beqzl $v0, 0x1817c0 */                                   // 0x001817a4: beqzl $v0, 0x1817c0
    v0 = 0xc;                                                   // 0x001817a8: addiu $v0, $zero, 0xc
    iSignalSema();  // 0x114300                                 // 0x001817ac: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x001817b0: lw $a0, -0x4e54($s2)
    v0 = 0x8101 << 16;                                          // 0x001817b4: lui $v0, 0x8101
    goto label_0x1817f0;                                        // 0x001817b8: b 0x1817f0
    v0 = v0 | 0x10;                                             // 0x001817bc: ori $v0, $v0, 0x10
    g_0026ac80 = s0;  // Global at 0x0026ac80                   // 0x001817c0: sw $s0, -0x5380($v1)
    g_0026ac84 = v0;  // Global at 0x0026ac84                   // 0x001817c4: sw $v0, 4($s1)
    func_0010ac68();  // 10ac68                                // 0x001817cc: jal 0x10ac68
    a0 = s1 + 0x41c;                                            // 0x001817d0: addiu $a0, $s1, 0x41c
    g_0026ac8c = s4;  // Global at 0x0026ac8c                   // 0x001817d4: sw $s4, 0xc($s1)
    v1 = 0x27 << 16;                                            // 0x001817d8: lui $v1, 0x27
    iSignalSema();  // 0x114300                                 // 0x001817dc: jal 0x114300
    a0 = g_0026b1a4;  // Global at 0x0026b1a4                   // 0x001817e0: lw $a0, -0x4e5c($v1)
    iSignalSema();  // 0x114300                                 // 0x001817e4: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x001817e8: lw $a0, -0x4e54($s2)
label_0x1817f0:
    return;                                                     // 0x00181808: jr $ra
    sp = sp + 0x60;                                             // 0x0018180c: addiu $sp, $sp, 0x60
}