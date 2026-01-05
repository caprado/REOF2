void func_0018bc20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_a0, local_a8, local_b0, local_b8, local_c0;
    
    sp = sp + -0xa0;                                            // 0x0018bc20: addiu $sp, $sp, -0xa0
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x0018bc2c: dps.w.ph $ac0, $sp, $s7
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x0018bc34: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0018bc44: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0018bc54: addu.qb $zero, $sp, $s1
    s7 = local_a0;                                              // 0x0018bc64: lw $s7, 0xa0($sp)
    fp = local_c0;                                              // 0x0018bc68: lw $fp, 0xc0($sp)
    if (a0 == 0) goto label_0x18bcb0;                           // 0x0018bc6c: beqz $a0, 0x18bcb0
    func_00198330();  // 198330                                // 0x0018bc74: jal 0x198330
    t3 = *(int32_t*)((gp) + -0x645c);                           // 0x0018bc78: lw $t3, -0x645c($gp)
    a0 = 0x3b;                                                  // 0x0018bc7c: addiu $a0, $zero, 0x3b
    v1 = 0x14;                                                  // 0x0018bc80: addiu $v1, $zero, 0x14
    a0 = 6;                                                     // 0x0018bc8c: addiu $a0, $zero, 6
    v1 = 8;                                                     // 0x0018bc94: addiu $v1, $zero, 8
    a0 = 0x34;                                                  // 0x0018bc9c: addiu $a0, $zero, 0x34
    v1 = 0x36;                                                  // 0x0018bca0: addiu $v1, $zero, 0x36
    goto label_0x18bcf8;                                        // 0x0018bca8: b 0x18bcf8
label_0x18bcb0:
    v1 = 0x3b;                                                  // 0x0018bcb4: addiu $v1, $zero, 0x3b
    a0 = 0x14;                                                  // 0x0018bcbc: addiu $a0, $zero, 0x14
    v1 = 6;                                                     // 0x0018bcc4: addiu $v1, $zero, 6
    a1 = 8;                                                     // 0x0018bccc: addiu $a1, $zero, 8
    a0 = 0x34;                                                  // 0x0018bcd4: addiu $a0, $zero, 0x34
    v1 = 0x36;                                                  // 0x0018bce0: addiu $v1, $zero, 0x36
label_0x18bcf8:
    if (s6 == 0) goto label_0x18bd64;                           // 0x0018bcf8: beqz $s6, 0x18bd64
    /* nop */                                                   // 0x0018bcfc: nop 
    a3 = local_a8;                                              // 0x0018bd00: lw $a3, 0xa8($sp)
    t0 = local_b0;                                              // 0x0018bd08: lw $t0, 0xb0($sp)
    t1 = local_b8;                                              // 0x0018bd10: lw $t1, 0xb8($sp)
    t3 = *(int32_t*)((gp) + -0x645c);                           // 0x0018bd18: lw $t3, -0x645c($gp)
    func_00198330();  // 198330                                // 0x0018bd1c: jal 0x198330
    a0 = 0x3b;                                                  // 0x0018bd24: addiu $a0, $zero, 0x3b
    v1 = 0x15;                                                  // 0x0018bd28: addiu $v1, $zero, 0x15
    a1 = 7;                                                     // 0x0018bd30: addiu $a1, $zero, 7
    a0 = 9;                                                     // 0x0018bd38: addiu $a0, $zero, 9
    v1 = local_a8;                                              // 0x0018bd3c: lw $v1, 0xa8($sp)
    v1 = local_b0;                                              // 0x0018bd44: lw $v1, 0xb0($sp)
    a1 = 0x34;                                                  // 0x0018bd48: addiu $a1, $zero, 0x34
    v1 = local_b8;                                              // 0x0018bd50: lw $v1, 0xb8($sp)
    a0 = 0x36;                                                  // 0x0018bd54: addiu $a0, $zero, 0x36
    goto label_0x18bdc4;                                        // 0x0018bd5c: b 0x18bdc4
label_0x18bd64:
    v1 = 0x3b;                                                  // 0x0018bd68: addiu $v1, $zero, 0x3b
    a0 = 7;                                                     // 0x0018bd70: addiu $a0, $zero, 7
    v1 = 0x15;                                                  // 0x0018bd74: addiu $v1, $zero, 0x15
    a2 = 9;                                                     // 0x0018bd80: addiu $a2, $zero, 9
    v1 = local_a8;                                              // 0x0018bd84: lw $v1, 0xa8($sp)
    a1 = 0x35;                                                  // 0x0018bd88: addiu $a1, $zero, 0x35
    v1 = local_a8;                                              // 0x0018bd90: lw $v1, 0xa8($sp)
    v1 = local_b0;                                              // 0x0018bd98: lw $v1, 0xb0($sp)
    a0 = 0x37;                                                  // 0x0018bd9c: addiu $a0, $zero, 0x37
    v1 = local_b0;                                              // 0x0018bda4: lw $v1, 0xb0($sp)
    v1 = local_b8;                                              // 0x0018bdac: lw $v1, 0xb8($sp)
    v1 = local_b8;                                              // 0x0018bdb4: lw $v1, 0xb8($sp)
label_0x18bdc4:
    /* FPU: xori.b $w2, $w0, 0xbe */                            // 0x0018bdc8: xori.b $w2, $w0, 0xbe
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x0018bdd0: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x0018bdd4: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x0018bdd8: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0018bde0: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0018bde4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018bde8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018bdec: jr $ra
    sp = sp + 0xa0;                                             // 0x0018bdf0: addiu $sp, $sp, 0xa0
}