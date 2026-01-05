void func_001c78e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001c78e0: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001c78e8: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c78f4: addu.qb $zero, $sp, $s1
    func_001c7770();  // 1c7770                                // 0x001c7904: jal 0x1c7770
    v0 = 0x31 << 16;                                            // 0x001c790c: lui $v0, 0x31
    v0 = v0 + 0x669c;                                           // 0x001c7914: addiu $v0, $v0, 0x669c
    g_0031669c = s3;  // Global at 0x0031669c                   // 0x001c791c: sh $s3, 0($v0)
    g_0031669e = s2;  // Global at 0x0031669e                   // 0x001c7924: sh $s2, 2($v0)
    a0 = v0 + 6;                                                // 0x001c7928: addiu $a0, $v0, 6
    func_00107ab8();  // 107ab8                                // 0x001c792c: jal 0x107ab8
    g_003166a0 = s1;  // Global at 0x003166a0                   // 0x001c7930: sh $s1, 4($v0)
    a0 = 3;                                                     // 0x001c7934: addiu $a0, $zero, 3
    a1 = 0x126;                                                 // 0x001c7938: addiu $a1, $zero, 0x126
    func_001c75b0();  // 1c75b0                                // 0x001c793c: jal 0x1c75b0
    a2 = 0x20;                                                  // 0x001c7940: addiu $a2, $zero, 0x20
    func_001c7780();  // 1c7780                                // 0x001c7948: jal 0x1c7780
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c795c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c7960: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c7964: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c7968: jr $ra
    sp = sp + 0x50;                                             // 0x001c796c: addiu $sp, $sp, 0x50
}