void func_0019e2f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x0019e2f0: addiu $sp, $sp, -0x80
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x0019e2fc: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0019e30c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019e31c: addu.qb $zero, $sp, $s1
    s1 = 0x21 << 16;                                            // 0x0019e320: lui $s1, 0x21
    s1 = s1 + 0x6e80;                                           // 0x0019e328: addiu $s1, $s1, 0x6e80
label_0x19e32c:
    v0 = s3 << 0xa;                                             // 0x0019e32c: sll $v0, $s3, 0xa
    s0 = s6 + v0;                                               // 0x0019e334: addu $s0, $s6, $v0
label_0x19e338:
    a1 = g_00216e80;  // Global at 0x00216e80                   // 0x0019e338: lw $a1, 0($s1)
    v1 = 0x21 << 16;                                            // 0x0019e33c: lui $v1, 0x21
    v0 = s2 << 4;                                               // 0x0019e340: sll $v0, $s2, 4
    v1 = v1 + 0x6e00;                                           // 0x0019e344: addiu $v1, $v1, 0x6e00
    a0 = s0 + v0;                                               // 0x0019e348: addu $a0, $s0, $v0
    v0 = 0x21 << 16;                                            // 0x0019e350: lui $v0, 0x21
    v0 = v0 + 0x6d80;                                           // 0x0019e354: addiu $v0, $v0, 0x6d80
    a1 = a1 << 2;                                               // 0x0019e358: sll $a1, $a1, 2
    s1 = s1 + 4;                                                // 0x0019e35c: addiu $s1, $s1, 4
    v1 = v1 + a1;                                               // 0x0019e360: addu $v1, $v1, $a1
    v0 = v0 + a1;                                               // 0x0019e364: addu $v0, $v0, $a1
    v1 = g_00216e00;  // Global at 0x00216e00                   // 0x0019e368: lw $v1, 0($v1)
    v0 = g_00216d80;  // Global at 0x00216d80                   // 0x0019e36c: lw $v0, 0($v0)
    v1 = v1 << 0xb;                                             // 0x0019e370: sll $v1, $v1, 0xb
    /* multiply: s4 * v1 -> hi:lo */                            // 0x0019e374: mult $ac3, $s4, $v1
    v0 = v0 << 5;                                               // 0x0019e378: sll $v0, $v0, 5
    v1 = s5 + v1;                                               // 0x0019e37c: addu $v1, $s5, $v1
    func_0019e3d0();  // 19e3d0                                // 0x0019e380: jal 0x19e3d0
    a1 = v1 + v0;                                               // 0x0019e384: addu $a1, $v1, $v0
    s2 = s2 + 1;                                                // 0x0019e388: addiu $s2, $s2, 1
    v1 = (s2 < 4) ? 1 : 0;                                      // 0x0019e38c: slti $v1, $s2, 4
    if (v1 != 0) goto label_0x19e338;                           // 0x0019e390: bnez $v1, 0x19e338
    /* nop */                                                   // 0x0019e394: nop 
    s3 = s3 + 1;                                                // 0x0019e398: addiu $s3, $s3, 1
    v1 = (s3 < 8) ? 1 : 0;                                      // 0x0019e39c: slti $v1, $s3, 8
    if (v1 != 0) goto label_0x19e32c;                           // 0x0019e3a0: bnez $v1, 0x19e32c
    /* nop */                                                   // 0x0019e3a4: nop 
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x0019e3ac: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x0019e3b0: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x0019e3b4: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019e3bc: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019e3c0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019e3c4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019e3c8: jr $ra
    sp = sp + 0x80;                                             // 0x0019e3cc: addiu $sp, $sp, 0x80
}