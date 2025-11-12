void func_001876a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001876a8: addiu $sp, $sp, -0x30
    v0 = 0x28 << 16;                                            // 0x001876ac: lui $v0, 0x28
    a0 = g_0027d040;  // Global at 0x0027d040                   // 0x001876b4: lw $a0, -0x2fc0($v0)
    s0 = 0x28 << 16;                                            // 0x001876b8: lui $s0, 0x28
    PollSema();  // 0x114320                                    // 0x001876c4: jal 0x114320
    s1 = s0 + -0xec0;                                           // 0x001876c8: addiu $s1, $s0, -0xec0
    func_00114c70();  // 0x114bd8                                // 0x001876d0: jal 0x114bd8
    a1 = s1 + 0x7f;                                             // 0x001876d4: addiu $a1, $s1, 0x7f
    v0 = g_0027f140;  // Global at 0x0027f140                   // 0x001876d8: lw $v0, -0xec0($s0)
    if (v0 <= 0) goto label_0x1876e4;                           // 0x001876dc: blezl $v0, 0x1876e4
    g_0027f148 = 0;  // Global at 0x0027f148                    // 0x001876e0: sw $zero, 8($s1)
label_0x1876e4:
    return;                                                     // 0x001876f4: jr $ra
    sp = sp + 0x30;                                             // 0x001876f8: addiu $sp, $sp, 0x30
}