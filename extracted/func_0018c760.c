void func_0018c760() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_100, local_108, local_110, local_a0, local_b0, local_cc, local_f0;
    
    sp = sp + -0x100;                                           // 0x0018c760: addiu $sp, $sp, -0x100
    v1 = 7 << 16;                                               // 0x0018c764: lui $v1, 7
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x0018c770: dps.w.ph $ac0, $sp, $s7
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x0018c77c: subu.qb $zero, $sp, $s5
    /* divide: s5 / v1 -> hi:lo */                              // 0x0018c788: divu $zero, $s5, $v1
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0018c78c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0018c794: addu.qb $zero, $sp, $s1
    v0 = local_108;                                             // 0x0018c79c: lh $v0, 0x108($sp)
    /* mflo $s3 */                                              // 0x0018c7a0
    /* divide: s5 / v1 -> hi:lo */                              // 0x0018c7a4: divu $zero, $s5, $v1
    /* nop */                                                   // 0x0018c7a8: nop 
    /* nop */                                                   // 0x0018c7ac: nop 
    /* mfhi $v1 */                                              // 0x0018c7b0
    if (v1 == 0) goto label_0x18c7c0;                           // 0x0018c7b4: beqz $v1, 0x18c7c0
    local_f0 = 0;                                               // 0x0018c7b8: sw $zero, 0xf0($sp)
    s3 = s3 + 1;                                                // 0x0018c7bc: addiu $s3, $s3, 1
label_0x18c7c0:
    a3 = 1;                                                     // 0x0018c7c0: addiu $a3, $zero, 1
    if (s3 != a3) goto label_0x18c7d4;                          // 0x0018c7c4: bne $s3, $a3, 0x18c7d4
    goto label_0x18c8c0;                                        // 0x0018c7cc: b 0x18c8c0
    s1 = local_110;                                             // 0x0018c7d0: lh $s1, 0x110($sp)
label_0x18c7d4:
    v1 = 0x14;                                                  // 0x0018c7d4: addiu $v1, $zero, 0x14
    if (a2 == v1) goto label_0x18c898;                          // 0x0018c7dc: beq $a2, $v1, 0x18c898
    v1 = 0x13;                                                  // 0x0018c7e0: addiu $v1, $zero, 0x13
    if (a2 == v1) goto label_0x18c870;                          // 0x0018c7e4: beq $a2, $v1, 0x18c870
    /* nop */                                                   // 0x0018c7e8: nop 
    v1 = 0xa;                                                   // 0x0018c7ec: addiu $v1, $zero, 0xa
    if (a2 == v1) goto label_0x18c844;                          // 0x0018c7f0: beq $a2, $v1, 0x18c844
    v1 = 2;                                                     // 0x0018c7f4: addiu $v1, $zero, 2
    if (a2 == v1) goto label_0x18c844;                          // 0x0018c7f8: beq $a2, $v1, 0x18c844
    /* nop */                                                   // 0x0018c7fc: nop 
    if (a2 == a3) goto label_0x18c818;                          // 0x0018c800: beq $a2, $a3, 0x18c818
    /* nop */                                                   // 0x0018c804: nop 
    if (a2 == 0) goto label_0x18c818;                           // 0x0018c808: beqz $a2, 0x18c818
    /* nop */                                                   // 0x0018c80c: nop 
    goto label_0x18c8c4;                                        // 0x0018c810: b 0x18c8c4
label_0x18c818:
    v1 = 7 << 16;                                               // 0x0018c81c: lui $v1, 7
    a2 = a2 << 2;                                               // 0x0018c824: sll $a2, $a2, 2
    /* divide: v1 / a2 -> hi:lo */                              // 0x0018c828: div $zero, $v1, $a2
    /* nop */                                                   // 0x0018c82c: nop 
    /* nop */                                                   // 0x0018c830: nop 
    /* mflo $v1 */                                              // 0x0018c834
    goto label_0x18c8c0;                                        // 0x0018c83c: b 0x18c8c0
label_0x18c844:
    v1 = 7 << 16;                                               // 0x0018c848: lui $v1, 7
    a2 = a2 << 1;                                               // 0x0018c850: sll $a2, $a2, 1
    /* divide: v1 / a2 -> hi:lo */                              // 0x0018c854: div $zero, $v1, $a2
    /* nop */                                                   // 0x0018c858: nop 
    /* nop */                                                   // 0x0018c85c: nop 
    /* mflo $v1 */                                              // 0x0018c860
    goto label_0x18c8c0;                                        // 0x0018c868: b 0x18c8c0
label_0x18c870:
    a2 = 7 << 16;                                               // 0x0018c874: lui $a2, 7
    /* divide: a2 / v1 -> hi:lo */                              // 0x0018c87c: div $zero, $a2, $v1
    /* nop */                                                   // 0x0018c880: nop 
    /* nop */                                                   // 0x0018c884: nop 
    /* mflo $v1 */                                              // 0x0018c888
    goto label_0x18c8c0;                                        // 0x0018c890: b 0x18c8c0
label_0x18c898:
    v1 = 7 << 16;                                               // 0x0018c89c: lui $v1, 7
    a2 = a2 >> 1;                                               // 0x0018c8a4: sra $a2, $a2, 1
    /* divide: v1 / a2 -> hi:lo */                              // 0x0018c8a8: div $zero, $v1, $a2
    /* nop */                                                   // 0x0018c8ac: nop 
    /* nop */                                                   // 0x0018c8b0: nop 
    /* mflo $v1 */                                              // 0x0018c8b4
label_0x18c8c0:
label_0x18c8c4:
    if (v1 != 0) goto label_0x18c8d4;                           // 0x0018c8c8: bnez $v1, 0x18c8d4
    t1 = 1;                                                     // 0x0018c8d0: addiu $t1, $zero, 1
label_0x18c8d4:
    local_cc = a1;                                              // 0x0018c8f4: sw $a1, 0xcc($sp)
    a0 = a0 | v1;                                               // 0x0018c908: or $a0, $a0, $v1
    v0 = local_110;                                             // 0x0018c91c: lh $v0, 0x110($sp)
    local_b0 = v0;                                              // 0x0018c920: sw $v0, 0xb0($sp)
    v0 = v1 | a0;                                               // 0x0018c924: or $v0, $v1, $a0
    goto label_0x18cb58;                                        // 0x0018c928: b 0x18cb58
label_0x18c930:
    if (s0 == v0) goto label_0x18c9a8;                          // 0x0018c930: beq $s0, $v0, 0x18c9a8
    v0 = 0x13;                                                  // 0x0018c938: addiu $v0, $zero, 0x13
    if (s0 == v0) goto label_0x18c99c;                          // 0x0018c93c: beq $s0, $v0, 0x18c99c
    v0 = 0xa;                                                   // 0x0018c944: addiu $v0, $zero, 0xa
    if (s0 == v0) goto label_0x18c98c;                          // 0x0018c948: beq $s0, $v0, 0x18c98c
    v0 = 2;                                                     // 0x0018c950: addiu $v0, $zero, 2
    if (s0 == v0) goto label_0x18c988;                          // 0x0018c954: beq $s0, $v0, 0x18c988
    v0 = 1;                                                     // 0x0018c958: addiu $v0, $zero, 1
    if (s0 == v0) goto label_0x18c974;                          // 0x0018c95c: beq $s0, $v0, 0x18c974
    /* nop */                                                   // 0x0018c960: nop 
    if (s0 == 0) goto label_0x18c978;                           // 0x0018c964: beqz $s0, 0x18c978
    goto label_0x18c9c4;                                        // 0x0018c96c: b 0x18c9c4
label_0x18c974:
label_0x18c978:
    /* multiply: s6 * v0 -> hi:lo */                            // 0x0018c97c: mult $ac2, $s6, $v0
    goto label_0x18c9c0;                                        // 0x0018c980: b 0x18c9c0
    s2 = v0 << 2;                                               // 0x0018c984: sll $s2, $v0, 2
label_0x18c988:
label_0x18c98c:
    /* multiply: s6 * v0 -> hi:lo */                            // 0x0018c990: mult $ac2, $s6, $v0
    goto label_0x18c9c0;                                        // 0x0018c994: b 0x18c9c0
    s2 = v0 << 1;                                               // 0x0018c998: sll $s2, $v0, 1
label_0x18c99c:
    goto label_0x18c9c0;                                        // 0x0018c9a0: b 0x18c9c0
label_0x18c9a8:
    /* multiply: s6 * v0 -> hi:lo */                            // 0x0018c9ac: mult $ac2, $s6, $v0
    if (v0 >= 0) goto label_0x18c9c0;                           // 0x0018c9b0: bgez $v0, 0x18c9c0
    s2 = v0 >> 1;                                               // 0x0018c9b4: sra $s2, $v0, 1
    v0 = v0 + 1;                                                // 0x0018c9b8: addiu $v0, $v0, 1
    s2 = v0 >> 1;                                               // 0x0018c9bc: sra $s2, $v0, 1
label_0x18c9c0:
label_0x18c9c4:
    a1 = 6;                                                     // 0x0018c9c4: addiu $a1, $zero, 6
    func_0018c490();  // 18c490                                // 0x0018c9cc: jal 0x18c490
    v1 = 0x1300 << 16;                                          // 0x0018c9d4: lui $v1, 0x1300
    v0 = 0x5100 << 16;                                          // 0x0018c9d8: lui $v0, 0x5100
    *(uint32_t*)((s4) + 8) = v1;                                // 0x0018c9dc: sw $v1, 8($s4)
    v0 = v0 | 6;                                                // 0x0018c9e0: ori $v0, $v0, 6
    *(uint32_t*)((s4) + 0xc) = v0;                              // 0x0018c9e4: sw $v0, 0xc($s4)
    a0 = 0x50;                                                  // 0x0018c9e8: addiu $a0, $zero, 0x50
    v0 = 0x1000 << 16;                                          // 0x0018c9ec: lui $v0, 0x1000
    v0 = 4;                                                     // 0x0018c9f4: addiu $v0, $zero, 4
    v1 = v0 | v1;                                               // 0x0018c9f8: or $v1, $v0, $v1
    v0 = 0xe;                                                   // 0x0018c9fc: addiu $v0, $zero, 0xe
    v0 = local_100;                                             // 0x0018ca08: lh $v0, 0x100($sp)
    a0 = 0x52;                                                  // 0x0018ca24: addiu $a0, $zero, 0x52
    v0 = v0 | v1;                                               // 0x0018ca28: or $v0, $v0, $v1
    v1 = 0x53;                                                  // 0x0018ca30: addiu $v1, $zero, 0x53
    v0 = 0x51;                                                  // 0x0018ca34: addiu $v0, $zero, 0x51
    v0 = s6 | v0;                                               // 0x0018ca48: or $v0, $s6, $v0
    v0 = s3 + -1;                                               // 0x0018ca50: addiu $v0, $s3, -1
    v0 = ((unsigned)fp < (unsigned)v0) ? 1 : 0;                 // 0x0018ca5c: sltu $v0, $fp, $v0
    if (v0 != 0) goto label_0x18cacc;                           // 0x0018ca60: bnez $v0, 0x18cacc
    v0 = (unsigned)s5 >> 4;                                     // 0x0018ca68: srl $v0, $s5, 4
    v1 = 0 | 0x8000;                                            // 0x0018ca6c: ori $v1, $zero, 0x8000
    local_a0 = v0;                                              // 0x0018ca70: sw $v0, 0xa0($sp)
    v0 = 0x800 << 16;                                           // 0x0018ca78: lui $v0, 0x800
    v0 = s4 + 0x70;                                             // 0x0018ca88: addiu $v0, $s4, 0x70
    local_f0 = v0;                                              // 0x0018ca8c: sw $v0, 0xf0($sp)
    v0 = v1 | a0;                                               // 0x0018ca90: or $v0, $v1, $a0
    v0 = a1 | v0;                                               // 0x0018ca94: or $v0, $a1, $v0
    a0 = local_f0;                                              // 0x0018ca98: lw $a0, 0xf0($sp)
    a1 = local_a0;                                              // 0x0018ca9c: lw $a1, 0xa0($sp)
    a3 = local_cc;                                              // 0x0018caa8: lw $a3, 0xcc($sp)
    func_0018c580();  // 18c580                                // 0x0018caac: jal 0x18c580
    *(uint32_t*)((s4) + 0x78) = 0;                              // 0x0018cab4: sw $zero, 0x78($s4)
    v1 = 0x5100 << 16;                                          // 0x0018cab8: lui $v1, 0x5100
    v0 = local_a0;                                              // 0x0018cabc: lw $v0, 0xa0($sp)
    v0 = v0 | v1;                                               // 0x0018cac0: or $v0, $v0, $v1
    goto label_0x18cb54;                                        // 0x0018cac4: b 0x18cb54
    *(uint32_t*)((s4) + 0x7c) = v0;                             // 0x0018cac8: sw $v0, 0x7c($s4)
label_0x18cacc:
    v1 = 0x800 << 16;                                           // 0x0018cacc: lui $v1, 0x800
    v0 = 0 | 0xf000;                                            // 0x0018cad0: ori $v0, $zero, 0xf000
    a0 = s4 + 0x70;                                             // 0x0018cad8: addiu $a0, $s4, 0x70
    v0 = v0 | v1;                                               // 0x0018cadc: or $v0, $v0, $v1
    a1 = 0x7000;                                                // 0x0018cae0: addiu $a1, $zero, 0x7000
    func_0018c520();  // 18c520                                // 0x0018caf4: jal 0x18c520
    v0 = 0x5100 << 16;                                          // 0x0018cafc: lui $v0, 0x5100
    *(uint32_t*)((s4) + 0x78) = 0;                              // 0x0018cb04: sw $zero, 0x78($s4)
    v0 = v0 | 0x7000;                                           // 0x0018cb08: ori $v0, $v0, 0x7000
    *(uint32_t*)((s4) + 0x7c) = v0;                             // 0x0018cb0c: sw $v0, 0x7c($s4)
    v0 = local_100;                                             // 0x0018cb14: lh $v0, 0x100($sp)
    s7 = s7 + s2;                                               // 0x0018cb18: addu $s7, $s7, $s2
    v0 = v0 + s1;                                               // 0x0018cb1c: addu $v0, $v0, $s1
    local_100 = v0;                                             // 0x0018cb20: sh $v0, 0x100($sp)
    v0 = local_100;                                             // 0x0018cb24: lh $v0, 0x100($sp)
    v1 = v0 + v1;                                               // 0x0018cb28: addu $v1, $v0, $v1
    v0 = local_b0;                                              // 0x0018cb2c: lw $v0, 0xb0($sp)
    at = (v0 < v1) ? 1 : 0;                                     // 0x0018cb30: slt $at, $v0, $v1
    if (at == 0) goto label_0x18cb50;                           // 0x0018cb34: beqz $at, 0x18cb50
    s4 = s4 + 0x80;                                             // 0x0018cb38: addiu $s4, $s4, 0x80
    v0 = local_100;                                             // 0x0018cb40: lh $v0, 0x100($sp)
    v0 = v1 - v0;                                               // 0x0018cb44: subu $v0, $v1, $v0
label_0x18cb50:
    s5 = s5 - s2;                                               // 0x0018cb50: subu $s5, $s5, $s2
label_0x18cb54:
    fp = fp + 1;                                                // 0x0018cb54: addiu $fp, $fp, 1
label_0x18cb58:
    v0 = ((unsigned)fp < (unsigned)s3) ? 1 : 0;                 // 0x0018cb58: sltu $v0, $fp, $s3
    if (v0 != 0) goto label_0x18c930;                           // 0x0018cb5c: bnez $v0, 0x18c930
    v0 = 0x14;                                                  // 0x0018cb60: addiu $v0, $zero, 0x14
    v0 = local_f0;                                              // 0x0018cb64: lw $v0, 0xf0($sp)
    /* FPU: xori.b $w2, $w0, 0xbe */                            // 0x0018cb6c: xori.b $w2, $w0, 0xbe
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x0018cb74: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x0018cb78: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x0018cb7c: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0018cb84: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0018cb88: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018cb8c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018cb90: jr $ra
    sp = sp + 0x100;                                            // 0x0018cb94: addiu $sp, $sp, 0x100
}