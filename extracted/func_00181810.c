void func_00181810() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x00181810: addiu $sp, $sp, -0x60
    v0 = 0x21 << 16;                                            // 0x00181814: lui $v0, 0x21
    s4 = a2 & 0xffff;                                           // 0x00181820: andi $s4, $a2, 0xffff
    v1 = g_00216010;  // Global at 0x00216010                   // 0x0018182c: lw $v1, 0x6010($v0)
    if (v1 != 0) goto label_0x181850;                           // 0x0018183c: bnez $v1, 0x181850
    v0 = 0x8101 << 16;                                          // 0x00181844: lui $v0, 0x8101
    goto label_0x1818f0;                                        // 0x00181848: b 0x1818f0
    v0 = v0 | 0x8001;                                           // 0x0018184c: ori $v0, $v0, 0x8001
label_0x181850:
    func_001887a0();  // 0x188758                                // 0x00181850: jal 0x188758
    if (s0 >= 0) goto label_0x181870;                           // 0x0018185c: bgez $s0, 0x181870
    /* nop */                                                   // 0x00181860: nop 
    v0 = 0x8101 << 16;                                          // 0x00181864: lui $v0, 0x8101
    goto label_0x1818f0;                                        // 0x00181868: b 0x1818f0
    v0 = v0 | 0x8002;                                           // 0x0018186c: ori $v0, $v0, 0x8002
label_0x181870:
    func_0010af38();  // 0x10ae00                                // 0x00181870: jal 0x10ae00
    v0 = ((unsigned)v0 < (unsigned)0x80) ? 1 : 0;               // 0x00181878: sltiu $v0, $v0, 0x80
    if (v0 != 0) goto label_0x181890;                           // 0x0018187c: bnez $v0, 0x181890
    s2 = 0x27 << 16;                                            // 0x00181880: lui $s2, 0x27
    v0 = 0x8101 << 16;                                          // 0x00181884: lui $v0, 0x8101
    goto label_0x1818f0;                                        // 0x00181888: b 0x1818f0
    v0 = v0 | 0x5b;                                             // 0x0018188c: ori $v0, $v0, 0x5b
label_0x181890:
    PollSema();  // 0x114320                                    // 0x00181890: jal 0x114320
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00181894: lw $a0, -0x4e54($s2)
    v1 = 0x27 << 16;                                            // 0x00181898: lui $v1, 0x27
    s1 = v1 + -0x5380;                                          // 0x0018189c: addiu $s1, $v1, -0x5380
    v0 = g_0026ac84;  // Global at 0x0026ac84                   // 0x001818a0: lw $v0, 4($s1)
    /* beqzl $v0, 0x1818c0 */                                   // 0x001818a4: beqzl $v0, 0x1818c0
    v0 = 0xd;                                                   // 0x001818a8: addiu $v0, $zero, 0xd
    iSignalSema();  // 0x114300                                 // 0x001818ac: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x001818b0: lw $a0, -0x4e54($s2)
    v0 = 0x8101 << 16;                                          // 0x001818b4: lui $v0, 0x8101
    goto label_0x1818f0;                                        // 0x001818b8: b 0x1818f0
    v0 = v0 | 0x10;                                             // 0x001818bc: ori $v0, $v0, 0x10
    g_0026ac80 = s0;  // Global at 0x0026ac80                   // 0x001818c0: sw $s0, -0x5380($v1)
    g_0026ac84 = v0;  // Global at 0x0026ac84                   // 0x001818c4: sw $v0, 4($s1)
    func_0010ae00();  // 0x10ac68                                // 0x001818cc: jal 0x10ac68
    a0 = s1 + 0x41c;                                            // 0x001818d0: addiu $a0, $s1, 0x41c
    g_0026ac8c = s4;  // Global at 0x0026ac8c                   // 0x001818d4: sw $s4, 0xc($s1)
    v1 = 0x27 << 16;                                            // 0x001818d8: lui $v1, 0x27
    iSignalSema();  // 0x114300                                 // 0x001818dc: jal 0x114300
    a0 = g_0026b1a4;  // Global at 0x0026b1a4                   // 0x001818e0: lw $a0, -0x4e5c($v1)
    iSignalSema();  // 0x114300                                 // 0x001818e4: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x001818e8: lw $a0, -0x4e54($s2)
label_0x1818f0:
    return;                                                     // 0x00181908: jr $ra
    sp = sp + 0x60;                                             // 0x0018190c: addiu $sp, $sp, 0x60
}