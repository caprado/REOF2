void func_00117e30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00117e30: addiu $sp, $sp, -0x30
    func_00117e30();  // 0x117dd0                                // 0x00117e40: jal 0x117dd0
    s1 = 0x1f << 16;                                            // 0x00117e44: lui $s1, 0x1f
    PollSema();  // 0x114320                                    // 0x00117e48: jal 0x114320
    a0 = g_001f03e8;  // Global at 0x001f03e8                   // 0x00117e4c: lw $a0, 0x3e8($s1)
    v1 = 0x25 << 16;                                            // 0x00117e50: lui $v1, 0x25
    s0 = v1 + -0x940;                                           // 0x00117e54: addiu $s0, $v1, -0x940
    v1 = s0 + 0x200;                                            // 0x00117e58: addiu $v1, $s0, 0x200
    v0 = ((unsigned)s0 < (unsigned)v1) ? 1 : 0;                 // 0x00117e5c: sltu $v0, $s0, $v1
    if (v0 == 0) goto label_0x117e98;                           // 0x00117e60: beqz $v0, 0x117e98
    a1 = 0x1000 << 16;                                          // 0x00117e64: lui $a1, 0x1000
    v0 = g_0024f6c4;  // Global at 0x0024f6c4                   // 0x00117e68: lw $v0, 4($s0)
    /* nop */                                                   // 0x00117e6c: nop 
    /* bnezl $v0, 0x117e8c */                                   // 0x00117e70: bnezl $v0, 0x117e8c
    s0 = s0 + 0x10;                                             // 0x00117e74: addiu $s0, $s0, 0x10
    a0 = g_001f03e8;  // Global at 0x001f03e8                   // 0x00117e78: lw $a0, 0x3e8($s1)
    iSignalSema();  // 0x114300                                 // 0x00117e7c: jal 0x114300
    g_0024f6d4 = a1;  // Global at 0x0024f6d4                   // 0x00117e80: sw $a1, 4($s0)
    goto label_0x117ea4;                                        // 0x00117e84: b 0x117ea4
    v0 = ((unsigned)s0 < (unsigned)v1) ? 1 : 0;                 // 0x00117e8c: sltu $v0, $s0, $v1
    /* bnezl $v0, 0x117e70 */                                   // 0x00117e90: bnezl $v0, 0x117e70
    v0 = g_0024f6d4;  // Global at 0x0024f6d4                   // 0x00117e94: lw $v0, 4($s0)
label_0x117e98:
    iSignalSema();  // 0x114300                                 // 0x00117e98: jal 0x114300
    a0 = g_001f03e8;  // Global at 0x001f03e8                   // 0x00117e9c: lw $a0, 0x3e8($s1)
label_0x117ea4:
    return;                                                     // 0x00117eb0: jr $ra
    sp = sp + 0x30;                                             // 0x00117eb4: addiu $sp, $sp, 0x30
}