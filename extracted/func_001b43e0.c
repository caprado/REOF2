void func_001b43e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001b43e0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b43e8: addu.qb $zero, $sp, $s1
    s1 = 0x30 << 16;                                            // 0x001b43f0: lui $s1, 0x30
    s1 = s1 + 0x6c10;                                           // 0x001b43f4: addiu $s1, $s1, 0x6c10
label_0x1b43fc:
    v1 = g_00306c10;  // Global at 0x00306c10                   // 0x001b43fc: lh $v1, 0($s1)
    if (v1 == 0) goto label_0x1b4428;                           // 0x001b4400: beqz $v1, 0x1b4428
    /* nop */                                                   // 0x001b4404: nop 
    v1 = g_00306c16;  // Global at 0x00306c16                   // 0x001b4408: lh $v1, 6($s1)
    if (v1 == 0) goto label_0x1b4428;                           // 0x001b440c: beqz $v1, 0x1b4428
    /* nop */                                                   // 0x001b4410: nop 
    v1 = g_00306c1b;  // Global at 0x00306c1b                   // 0x001b4414: lbu $v1, 0xb($s1)
    if (v1 == 0) goto label_0x1b4428;                           // 0x001b4418: beqz $v1, 0x1b4428
    a0 = s1 + 0xc;                                              // 0x001b441c: addiu $a0, $s1, 0xc
    func_001b4450();  // 1b4450                                // 0x001b4420: jal 0x1b4450
    /* nop */                                                   // 0x001b4424: nop 
label_0x1b4428:
    s0 = s0 + 1;                                                // 0x001b4428: addiu $s0, $s0, 1
    v1 = (s0 < 0x20) ? 1 : 0;                                   // 0x001b442c: slti $v1, $s0, 0x20
    if (v1 != 0) goto label_0x1b43fc;                           // 0x001b4430: bnez $v1, 0x1b43fc
    s1 = s1 + 0x8c;                                             // 0x001b4434: addiu $s1, $s1, 0x8c
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b443c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b4440: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b4444: jr $ra
    sp = sp + 0x30;                                             // 0x001b4448: addiu $sp, $sp, 0x30
}