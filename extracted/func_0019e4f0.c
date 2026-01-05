void func_0019e4f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_a0, local_b0, local_c0;
    
    sp = sp + -0x20d0;                                          // 0x0019e4f0: addiu $sp, $sp, -0x20d0
    a0 = a0 + -1;                                               // 0x0019e4f4: addiu $a0, $a0, -1
    v1 = a0 >> 7;                                               // 0x0019e4fc: sra $v1, $a0, 7
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x0019e504: dps.w.ph $ac0, $sp, $s7
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x0019e510: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0019e51c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019e524: addu.qb $zero, $sp, $s1
    if (a0 >= 0) goto label_0x19e538;                           // 0x0019e528: bgez $a0, 0x19e538
    v1 = a0 + 0x7f;                                             // 0x0019e530: addiu $v1, $a0, 0x7f
    v1 = v1 >> 7;                                               // 0x0019e534: sra $v1, $v1, 7
label_0x19e538:
    s2 = v1 + 1;                                                // 0x0019e538: addiu $s2, $v1, 1
    a0 = a1 + -1;                                               // 0x0019e53c: addiu $a0, $a1, -1
    if (a0 >= 0) goto label_0x19e550;                           // 0x0019e540: bgez $a0, 0x19e550
    v1 = a0 >> 6;                                               // 0x0019e544: sra $v1, $a0, 6
    v1 = a0 + 0x3f;                                             // 0x0019e548: addiu $v1, $a0, 0x3f
    v1 = v1 >> 6;                                               // 0x0019e54c: sra $v1, $v1, 6
label_0x19e550:
    fp = v1 + 1;                                                // 0x0019e550: addiu $fp, $v1, 1
    v1 = s2 << 7;                                               // 0x0019e558: sll $v1, $s2, 7
    goto label_0x19e5e8;                                        // 0x0019e55c: b 0x19e5e8
    local_c0 = v1;                                              // 0x0019e560: sw $v1, 0xc0($sp)
label_0x19e564:
    v1 = s6 + a0;                                               // 0x0019e56c: addu $v1, $s6, $a0
    local_b0 = v1;                                              // 0x0019e570: sw $v1, 0xb0($sp)
    v1 = s7 + a0;                                               // 0x0019e574: addu $v1, $s7, $a0
    goto label_0x19e5d8;                                        // 0x0019e578: b 0x19e5d8
    local_a0 = v1;                                              // 0x0019e57c: sw $v1, 0xa0($sp)
label_0x19e580:
    v0 = local_b0;                                              // 0x0019e580: lw $v0, 0xb0($sp)
    v1 = s4 << 7;                                               // 0x0019e584: sll $v1, $s4, 7
    s0 = sp + 0xd0;                                             // 0x0019e588: addiu $s0, $sp, 0xd0
    s1 = v0 + v1;                                               // 0x0019e590: addu $s1, $v0, $v1
label_0x19e594:
    func_00107ab8();  // 107ab8                                // 0x0019e59c: jal 0x107ab8
    a2 = 0x80;                                                  // 0x0019e5a0: addiu $a2, $zero, 0x80
    v0 = local_c0;                                              // 0x0019e5a4: lw $v0, 0xc0($sp)
    s3 = s3 + 1;                                                // 0x0019e5a8: addiu $s3, $s3, 1
    s1 = s1 + v0;                                               // 0x0019e5ac: addu $s1, $s1, $v0
    v0 = (s3 < 0x40) ? 1 : 0;                                   // 0x0019e5b0: slti $v0, $s3, 0x40
    if (v0 != 0) goto label_0x19e594;                           // 0x0019e5b4: bnez $v0, 0x19e594
    s0 = s0 + 0x80;                                             // 0x0019e5b8: addiu $s0, $s0, 0x80
    v0 = local_a0;                                              // 0x0019e5bc: lw $v0, 0xa0($sp)
    v1 = s4 << 8;                                               // 0x0019e5c0: sll $v1, $s4, 8
    a0 = sp + 0xd0;                                             // 0x0019e5c4: addiu $a0, $sp, 0xd0
    func_0019e630();  // 19e630                                // 0x0019e5cc: jal 0x19e630
    a1 = v0 + v1;                                               // 0x0019e5d0: addu $a1, $v0, $v1
    s4 = s4 + 1;                                                // 0x0019e5d4: addiu $s4, $s4, 1
label_0x19e5d8:
    v1 = (s4 < s2) ? 1 : 0;                                     // 0x0019e5d8: slt $v1, $s4, $s2
    if (v1 != 0) goto label_0x19e580;                           // 0x0019e5dc: bnez $v1, 0x19e580
    /* nop */                                                   // 0x0019e5e0: nop 
    s5 = s5 + 1;                                                // 0x0019e5e4: addiu $s5, $s5, 1
label_0x19e5e8:
    v1 = (s5 < fp) ? 1 : 0;                                     // 0x0019e5e8: slt $v1, $s5, $fp
    if (v1 != 0) goto label_0x19e564;                           // 0x0019e5ec: bnez $v1, 0x19e564
    v1 = s5 << 0xd;                                             // 0x0019e5f0: sll $v1, $s5, 0xd
    /* FPU: xori.b $w2, $w0, 0xbe */                            // 0x0019e5f8: xori.b $w2, $w0, 0xbe
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x0019e600: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x0019e604: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x0019e608: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019e610: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019e614: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019e618: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019e61c: jr $ra
    sp = sp + 0x20d0;                                           // 0x0019e620: addiu $sp, $sp, 0x20d0
}