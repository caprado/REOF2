void func_00118668() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x00118668: addiu $sp, $sp, -0x50
    v0 = 0x1f << 16;                                            // 0x0011866c: lui $v0, 0x1f
    v1 = 0x25 << 16;                                            // 0x00118674: lui $v1, 0x25
    s3 = v0 + 0x32c;                                            // 0x0011867c: addiu $s3, $v0, 0x32c
    s1 = v1 + -0x718;                                           // 0x00118684: addiu $s1, $v1, -0x718
    func_00107ab8();  // 0x107a20                                // 0x0011869c: jal 0x107a20
    a2 = 4;                                                     // 0x001186a0: addiu $a2, $zero, 4
    if (v0 == 0) goto label_0x1186d4;                           // 0x001186a4: beqz $v0, 0x1186d4
    s0 = 0x1f << 16;                                            // 0x001186a8: lui $s0, 0x1f
    a1 = g_001f03f0;  // Global at 0x001f03f0                   // 0x001186b0: lw $a1, 0x3f0($s0)
    func_00107ab8();  // 0x107a20                                // 0x001186b4: jal 0x107a20
    a2 = 4;                                                     // 0x001186b8: addiu $a2, $zero, 4
    if (v0 == 0) goto label_0x1186d4;                           // 0x001186bc: beqz $v0, 0x1186d4
    a1 = g_001f03f0;  // Global at 0x001f03f0                   // 0x001186c0: lw $a1, 0x3f0($s0)
    func_00107ab8();  // 0x107a20                                // 0x001186c8: jal 0x107a20
    a2 = 4;                                                     // 0x001186cc: addiu $a2, $zero, 4
    s2 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x001186d0: sltu $s2, $zero, $v0
label_0x1186d4:
    return;                                                     // 0x001186ec: jr $ra
    sp = sp + 0x50;                                             // 0x001186f0: addiu $sp, $sp, 0x50
}