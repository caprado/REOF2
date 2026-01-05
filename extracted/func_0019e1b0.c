void func_0019e1b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_a0, local_b0, local_c0;
    
    sp = sp + -0x20d0;                                          // 0x0019e1b0: addiu $sp, $sp, -0x20d0
    a0 = a0 + -1;                                               // 0x0019e1b4: addiu $a0, $a0, -1
    v1 = a0 >> 7;                                               // 0x0019e1bc: sra $v1, $a0, 7
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x0019e1c4: dps.w.ph $ac0, $sp, $s7
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x0019e1d0: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0019e1dc: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019e1e4: addu.qb $zero, $sp, $s1
    if (a0 >= 0) goto label_0x19e1f8;                           // 0x0019e1e8: bgez $a0, 0x19e1f8
    v1 = a0 + 0x7f;                                             // 0x0019e1f0: addiu $v1, $a0, 0x7f
    v1 = v1 >> 7;                                               // 0x0019e1f4: sra $v1, $v1, 7
label_0x19e1f8:
    s2 = v1 + 1;                                                // 0x0019e1f8: addiu $s2, $v1, 1
    a0 = a1 + -1;                                               // 0x0019e1fc: addiu $a0, $a1, -1
    if (a0 >= 0) goto label_0x19e210;                           // 0x0019e200: bgez $a0, 0x19e210
    v1 = a0 >> 7;                                               // 0x0019e204: sra $v1, $a0, 7
    v1 = a0 + 0x7f;                                             // 0x0019e208: addiu $v1, $a0, 0x7f
    v1 = v1 >> 7;                                               // 0x0019e20c: sra $v1, $v1, 7
label_0x19e210:
    fp = v1 + 1;                                                // 0x0019e210: addiu $fp, $v1, 1
    v1 = s2 << 6;                                               // 0x0019e218: sll $v1, $s2, 6
    goto label_0x19e2a8;                                        // 0x0019e21c: b 0x19e2a8
    local_c0 = v1;                                              // 0x0019e220: sw $v1, 0xc0($sp)
label_0x19e224:
    v1 = s6 + a0;                                               // 0x0019e22c: addu $v1, $s6, $a0
    local_b0 = v1;                                              // 0x0019e230: sw $v1, 0xb0($sp)
    v1 = s7 + a0;                                               // 0x0019e234: addu $v1, $s7, $a0
    goto label_0x19e298;                                        // 0x0019e238: b 0x19e298
    local_a0 = v1;                                              // 0x0019e23c: sw $v1, 0xa0($sp)
label_0x19e240:
    v0 = local_b0;                                              // 0x0019e240: lw $v0, 0xb0($sp)
    v1 = s4 << 6;                                               // 0x0019e244: sll $v1, $s4, 6
    s0 = sp + 0xd0;                                             // 0x0019e248: addiu $s0, $sp, 0xd0
    s1 = v0 + v1;                                               // 0x0019e250: addu $s1, $v0, $v1
label_0x19e254:
    func_00107ab8();  // 107ab8                                // 0x0019e25c: jal 0x107ab8
    a2 = 0x40;                                                  // 0x0019e260: addiu $a2, $zero, 0x40
    v0 = local_c0;                                              // 0x0019e264: lw $v0, 0xc0($sp)
    s3 = s3 + 1;                                                // 0x0019e268: addiu $s3, $s3, 1
    s1 = s1 + v0;                                               // 0x0019e26c: addu $s1, $s1, $v0
    v0 = (s3 < 0x80) ? 1 : 0;                                   // 0x0019e270: slti $v0, $s3, 0x80
    if (v0 != 0) goto label_0x19e254;                           // 0x0019e274: bnez $v0, 0x19e254
    s0 = s0 + 0x40;                                             // 0x0019e278: addiu $s0, $s0, 0x40
    v0 = local_a0;                                              // 0x0019e27c: lw $v0, 0xa0($sp)
    v1 = s4 << 8;                                               // 0x0019e280: sll $v1, $s4, 8
    a0 = sp + 0xd0;                                             // 0x0019e284: addiu $a0, $sp, 0xd0
    func_0019e2f0();  // 19e2f0                                // 0x0019e28c: jal 0x19e2f0
    a1 = v0 + v1;                                               // 0x0019e290: addu $a1, $v0, $v1
    s4 = s4 + 1;                                                // 0x0019e294: addiu $s4, $s4, 1
label_0x19e298:
    v1 = (s4 < s2) ? 1 : 0;                                     // 0x0019e298: slt $v1, $s4, $s2
    if (v1 != 0) goto label_0x19e240;                           // 0x0019e29c: bnez $v1, 0x19e240
    /* nop */                                                   // 0x0019e2a0: nop 
    s5 = s5 + 1;                                                // 0x0019e2a4: addiu $s5, $s5, 1
label_0x19e2a8:
    v1 = (s5 < fp) ? 1 : 0;                                     // 0x0019e2a8: slt $v1, $s5, $fp
    if (v1 != 0) goto label_0x19e224;                           // 0x0019e2ac: bnez $v1, 0x19e224
    v1 = s5 << 0xd;                                             // 0x0019e2b0: sll $v1, $s5, 0xd
    /* FPU: xori.b $w2, $w0, 0xbe */                            // 0x0019e2b8: xori.b $w2, $w0, 0xbe
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x0019e2c0: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x0019e2c4: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x0019e2c8: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019e2d0: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019e2d4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019e2d8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019e2dc: jr $ra
    sp = sp + 0x20d0;                                           // 0x0019e2e0: addiu $sp, $sp, 0x20d0
}