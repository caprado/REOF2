void func_0019e630() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x0019e630: addiu $sp, $sp, -0x80
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x0019e63c: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0019e64c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019e65c: addu.qb $zero, $sp, $s1
    s1 = 0x21 << 16;                                            // 0x0019e660: lui $s1, 0x21
    s1 = s1 + 0x6f00;                                           // 0x0019e668: addiu $s1, $s1, 0x6f00
label_0x19e66c:
    v0 = s3 << 0xb;                                             // 0x0019e66c: sll $v0, $s3, 0xb
    s0 = s6 + v0;                                               // 0x0019e674: addu $s0, $s6, $v0
label_0x19e678:
    a1 = g_00216f00;  // Global at 0x00216f00                   // 0x0019e678: lw $a1, 0($s1)
    v1 = 0x21 << 16;                                            // 0x0019e67c: lui $v1, 0x21
    v0 = s2 << 4;                                               // 0x0019e680: sll $v0, $s2, 4
    v1 = v1 + 0x6e00;                                           // 0x0019e684: addiu $v1, $v1, 0x6e00
    a0 = s0 + v0;                                               // 0x0019e688: addu $a0, $s0, $v0
    v0 = 0x21 << 16;                                            // 0x0019e690: lui $v0, 0x21
    v0 = v0 + 0x6d80;                                           // 0x0019e694: addiu $v0, $v0, 0x6d80
    a1 = a1 << 2;                                               // 0x0019e698: sll $a1, $a1, 2
    s1 = s1 + 4;                                                // 0x0019e69c: addiu $s1, $s1, 4
    v1 = v1 + a1;                                               // 0x0019e6a0: addu $v1, $v1, $a1
    v0 = v0 + a1;                                               // 0x0019e6a4: addu $v0, $v0, $a1
    v1 = g_00216e00;  // Global at 0x00216e00                   // 0x0019e6a8: lw $v1, 0($v1)
    v0 = g_00216d80;  // Global at 0x00216d80                   // 0x0019e6ac: lw $v0, 0($v0)
    v1 = v1 << 0xb;                                             // 0x0019e6b0: sll $v1, $v1, 0xb
    /* multiply: s4 * v1 -> hi:lo */                            // 0x0019e6b4: mult $ac3, $s4, $v1
    v0 = v0 << 5;                                               // 0x0019e6b8: sll $v0, $v0, 5
    v1 = s5 + v1;                                               // 0x0019e6bc: addu $v1, $s5, $v1
    func_0019e710();  // 19e710                                // 0x0019e6c0: jal 0x19e710
    a1 = v1 + v0;                                               // 0x0019e6c4: addu $a1, $v1, $v0
    s2 = s2 + 1;                                                // 0x0019e6c8: addiu $s2, $s2, 1
    v1 = (s2 < 8) ? 1 : 0;                                      // 0x0019e6cc: slti $v1, $s2, 8
    if (v1 != 0) goto label_0x19e678;                           // 0x0019e6d0: bnez $v1, 0x19e678
    /* nop */                                                   // 0x0019e6d4: nop 
    s3 = s3 + 1;                                                // 0x0019e6d8: addiu $s3, $s3, 1
    v1 = (s3 < 4) ? 1 : 0;                                      // 0x0019e6dc: slti $v1, $s3, 4
    if (v1 != 0) goto label_0x19e66c;                           // 0x0019e6e0: bnez $v1, 0x19e66c
    /* nop */                                                   // 0x0019e6e4: nop 
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x0019e6ec: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x0019e6f0: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x0019e6f4: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019e6fc: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019e700: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019e704: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019e708: jr $ra
    sp = sp + 0x80;                                             // 0x0019e70c: addiu $sp, $sp, 0x80
}