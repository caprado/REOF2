void func_001877c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x28 << 16;                                            // 0x001877c0: lui $v0, 0x28
    sp = sp + -0x30;                                            // 0x001877c4: addiu $sp, $sp, -0x30
    a0 = g_0027d040;  // Global at 0x0027d040                   // 0x001877c8: lw $a0, -0x2fc0($v0)
    if (a0 < 0) goto label_0x1877e4;                            // 0x001877d4: bltz $a0, 0x1877e4
    SignalSema();  // 0x1142f0                                  // 0x001877dc: jal 0x1142f0
    /* nop */                                                   // 0x001877e0: nop 
label_0x1877e4:
    v0 = 0x28 << 16;                                            // 0x001877e4: lui $v0, 0x28
    s0 = v0 + -0x2fb8;                                          // 0x001877e8: addiu $s0, $v0, -0x2fb8
    s1 = s0 + 0x48;                                             // 0x001877ec: addiu $s1, $s0, 0x48
    v0 = g_0027d048;  // Global at 0x0027d048                   // 0x001877f0: lw $v0, 0($s0)
    /* nop */                                                   // 0x001877f4: nop 
    /* beqzl $v0, 0x187810 */                                   // 0x001877f8: beqzl $v0, 0x187810
    s0 = s0 + 0x24;                                             // 0x001877fc: addiu $s0, $s0, 0x24
    func_00188c80();  // 0x188bf8                                // 0x00187800: jal 0x188bf8
    a0 = g_0027d070;  // Global at 0x0027d070                   // 0x00187804: lw $a0, 4($s0)
    g_0027d06c = 0;  // Global at 0x0027d06c                    // 0x00187808: sw $zero, 0($s0)
    s0 = s0 + 0x24;                                             // 0x0018780c: addiu $s0, $s0, 0x24
    v0 = (s0 < s1) ? 1 : 0;                                     // 0x00187810: slt $v0, $s0, $s1
    /* bnezl $v0, 0x1877f8 */                                   // 0x00187814: bnezl $v0, 0x1877f8
    v0 = g_0027d090;  // Global at 0x0027d090                   // 0x00187818: lw $v0, 0($s0)
    v0 = 1;                                                     // 0x00187820: addiu $v0, $zero, 1
    return;                                                     // 0x0018782c: jr $ra
    sp = sp + 0x30;                                             // 0x00187830: addiu $sp, $sp, 0x30
}