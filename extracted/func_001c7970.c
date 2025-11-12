void func_001c7970() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001c7970: addiu $sp, $sp, -0x60
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001c797c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c798c: addu.qb $zero, $sp, $s1
    func_001c7780();  // 0x1c7770                                // 0x001c7998: jal 0x1c7770
    s0 = 0x31 << 16;                                            // 0x001c79a0: lui $s0, 0x31
    a1 = 0x126;                                                 // 0x001c79a4: addiu $a1, $zero, 0x126
    s0 = s0 + 0x669c;                                           // 0x001c79a8: addiu $s0, $s0, 0x669c
    a0 = 4;                                                     // 0x001c79ac: addiu $a0, $zero, 4
    g_0031669c = s4;  // Global at 0x0031669c                   // 0x001c79b0: sh $s4, 0($s0)
    g_0031669e = s1;  // Global at 0x0031669e                   // 0x001c79b8: sh $s1, 2($s0)
    func_001c7670();  // 0x1c75b0                                // 0x001c79bc: jal 0x1c75b0
    g_003166a0 = s3;  // Global at 0x003166a0                   // 0x001c79c0: sh $s3, 4($s0)
    if (s1 >= 0) goto label_0x1c79e8;                           // 0x001c79cc: bgez $s1, 0x1c79e8
    /* nop */                                                   // 0x001c79d0: nop 
    func_001c7790();  // 0x1c7780                                // 0x001c79d4: jal 0x1c7780
    /* nop */                                                   // 0x001c79d8: nop 
    goto label_0x1c7a18;                                        // 0x001c79dc: b 0x1c7a18
    /* nop */                                                   // 0x001c79e4: nop 
label_0x1c79e8:
    at = (v0 < s1) ? 1 : 0;                                     // 0x001c79f0: slt $at, $v0, $s1
    if (at != 0) goto label_0x1c7a08;                           // 0x001c79f4: bnez $at, 0x1c7a08
    a1 = s0 + 6;                                                // 0x001c79fc: addiu $a1, $s0, 6
    func_00107b68();  // 0x107ab8                                // 0x001c7a00: jal 0x107ab8
label_0x1c7a08:
    func_001c7790();  // 0x1c7780                                // 0x001c7a08: jal 0x1c7780
    /* nop */                                                   // 0x001c7a0c: nop 
    /* nop */                                                   // 0x001c7a14: nop 
label_0x1c7a18:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001c7a1c: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c7a24: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c7a28: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c7a2c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c7a30: jr $ra
    sp = sp + 0x60;                                             // 0x001c7a34: addiu $sp, $sp, 0x60
}