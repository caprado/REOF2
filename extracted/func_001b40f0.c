void func_001b40f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001b40f0: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001b40f8: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b4104: addu.qb $zero, $sp, $s1
    s1 = 0x30 << 16;                                            // 0x001b4110: lui $s1, 0x30
    s1 = s1 + 0x6c10;                                           // 0x001b4114: addiu $s1, $s1, 0x6c10
    goto label_0x1b4158;                                        // 0x001b4118: b 0x1b4158
label_0x1b4120:
    v0 = g_00306c10;  // Global at 0x00306c10                   // 0x001b4120: lh $v0, 0($s1)
    if (v0 == 0) goto label_0x1b4150;                           // 0x001b4124: beqz $v0, 0x1b4150
    /* nop */                                                   // 0x001b4128: nop 
    v0 = g_00306c14;  // Global at 0x00306c14                   // 0x001b412c: lh $v0, 4($s1)
    if (v0 != s3) goto label_0x1b4150;                          // 0x001b4130: bne $v0, $s3, 0x1b4150
    a0 = s1 + 0xc;                                              // 0x001b4134: addiu $a0, $s1, 0xc
    func_0010ab20();  // 10ab20                                // 0x001b4138: jal 0x10ab20
    if (v0 != 0) goto label_0x1b4150;                           // 0x001b4140: bnez $v0, 0x1b4150
    /* nop */                                                   // 0x001b4144: nop 
    goto label_0x1b4164;                                        // 0x001b4148: b 0x1b4164
label_0x1b4150:
    s0 = s0 + 1;                                                // 0x001b4150: addiu $s0, $s0, 1
    s1 = s1 + 0x8c;                                             // 0x001b4154: addiu $s1, $s1, 0x8c
label_0x1b4158:
    v0 = (s0 < 0x20) ? 1 : 0;                                   // 0x001b4158: slti $v0, $s0, 0x20
    if (v0 != 0) goto label_0x1b4120;                           // 0x001b415c: bnez $v0, 0x1b4120
    v0 = 1;                                                     // 0x001b4160: addiu $v0, $zero, 1
label_0x1b4164:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b416c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b4170: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b4174: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b4178: jr $ra
    sp = sp + 0x50;                                             // 0x001b417c: addiu $sp, $sp, 0x50
}