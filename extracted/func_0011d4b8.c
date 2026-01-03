/** @category ps2-kernel-not-needed @status complete @author caprado */
void func_0011d4b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x0011d4b8: addiu $sp, $sp, -0x80
    v0 = 0x1f << 16;                                            // 0x0011d4bc: lui $v0, 0x1f
    s5 = 0x12 << 16;                                            // 0x0011d4c8: lui $s5, 0x12
    s4 = 0x12 << 16;                                            // 0x0011d4d0: lui $s4, 0x12
    s0 = v0 + 0xa60;                                            // 0x0011d4e4: addiu $s0, $v0, 0xa60
    a0 = g_001f0a60;  // Global at 0x001f0a60                   // 0x0011d4ec: lw $a0, 0xa60($v0)
    func_0011d5b8();  // 11d5b8                                // 0x0011d4f0: jal 0x11d5b8
    a1 = g_001f0a64;  // Global at 0x001f0a64                   // 0x0011d4f4: lw $a1, 4($s0)
    a1 = g_001f0a6c;  // Global at 0x001f0a6c                   // 0x0011d4f8: lw $a1, 0xc($s0)
    func_0011d5b8();  // 11d5b8                                // 0x0011d4fc: jal 0x11d5b8
    a0 = g_001f0a68;  // Global at 0x001f0a68                   // 0x0011d500: lw $a0, 8($s0)
    a0 = 0x8000 << 16;                                          // 0x0011d504: lui $a0, 0x8000
    a1 = 0x8008 << 16;                                          // 0x0011d508: lui $a1, 0x8008
    func_0011d470();  // 11d470                                // 0x0011d50c: jal 0x11d470
    a2 = s5 + -0x2bd0;                                          // 0x0011d510: addiu $a2, $s5, -0x2bd0
    a0 = 0x8000 << 16;                                          // 0x0011d518: lui $a0, 0x8000
    a1 = 0x8008 << 16;                                          // 0x0011d51c: lui $a1, 0x8008
    func_0011d470();  // 11d470                                // 0x0011d520: jal 0x11d470
    a2 = s4 + -0x2c08;                                          // 0x0011d524: addiu $a2, $s4, -0x2c08
    s1 = s3 + -0x20c;                                           // 0x0011d528: addiu $s1, $s3, -0x20c
    s0 = s2 + -0x168;                                           // 0x0011d530: addiu $s0, $s2, -0x168
    if (s1 == s0) goto label_0x11d588;                          // 0x0011d534: beq $s1, $s0, 0x11d588
    s6 = 0x1f << 16;                                            // 0x0011d538: lui $s6, 0x1f
    v0 = ((unsigned)s1 < (unsigned)s0) ? 1 : 0;                 // 0x0011d53c: sltu $v0, $s1, $s0
label_0x11d540:
    if (v0 == 0) goto label_0x11d560;                           // 0x0011d540: beqz $v0, 0x11d560
    a0 = s3 + 4;                                                // 0x0011d544: addiu $a0, $s3, 4
    a1 = 0x8008 << 16;                                          // 0x0011d548: lui $a1, 0x8008
    func_0011d470();  // 11d470                                // 0x0011d54c: jal 0x11d470
    a2 = s5 + -0x2bd0;                                          // 0x0011d550: addiu $a2, $s5, -0x2bd0
    goto label_0x11d578;                                        // 0x0011d558: b 0x11d578
    s1 = s3 + -0x20c;                                           // 0x0011d55c: addiu $s1, $s3, -0x20c
label_0x11d560:
    a0 = s2 + 4;                                                // 0x0011d560: addiu $a0, $s2, 4
    a1 = 0x8008 << 16;                                          // 0x0011d564: lui $a1, 0x8008
    func_0011d470();  // 11d470                                // 0x0011d568: jal 0x11d470
    a2 = s4 + -0x2c08;                                          // 0x0011d56c: addiu $a2, $s4, -0x2c08
    s0 = s2 + -0x168;                                           // 0x0011d574: addiu $s0, $s2, -0x168
label_0x11d578:
    if (s1 != s0) goto label_0x11d540;                          // 0x0011d578: bne $s1, $s0, 0x11d540
    v0 = ((unsigned)s1 < (unsigned)s0) ? 1 : 0;                 // 0x0011d57c: sltu $v0, $s1, $s0
    goto label_0x11d58c;                                        // 0x0011d580: b 0x11d58c
    g_001f0a58 = s1;  // Global at 0x001f0a58                   // 0x0011d584: sw $s1, 0xa58($s6)
label_0x11d588:
    g_001f0a58 = s1;  // Global at 0x001f0a58                   // 0x0011d588: sw $s1, 0xa58($s6)
label_0x11d58c:
    return;                                                     // 0x0011d5ac: jr $ra
    sp = sp + 0x80;                                             // 0x0011d5b0: addiu $sp, $sp, 0x80
}