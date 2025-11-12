void func_0019de50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xc0;                                            // 0x0019de50: addiu $sp, $sp, -0xc0
    t4 = 0x21 << 16;                                            // 0x0019de54: lui $t4, 0x21
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x0019de60: dps.w.ph $ac0, $sp, $s7
    t4 = t4 + 0x6d60;                                           // 0x0019de64: addiu $t4, $t4, 0x6d60
    t3 = 8;                                                     // 0x0019de6c: addiu $t3, $zero, 8
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x0019de70: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0019de7c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019de84: addu.qb $zero, $sp, $s1
    t8 = *(int32_t*)((a0) + 0x10);                              // 0x0019de8c: lw $t8, 0x10($a0)
    t7 = *(int32_t*)((a1) + 0x10);                              // 0x0019de90: lw $t7, 0x10($a1)
    goto label_0x19e11c;                                        // 0x0019de94: b 0x19e11c
label_0x19de9c:
    goto label_0x19e108;                                        // 0x0019de9c: b 0x19e108
label_0x19dea4:
    if (a3 != v1) goto label_0x19ded8;                          // 0x0019dea4: bne $a3, $v1, 0x19ded8
    /* nop */                                                   // 0x0019dea8: nop 
    if (a2 != v1) goto label_0x19ded8;                          // 0x0019deac: bne $a2, $v1, 0x19ded8
    /* nop */                                                   // 0x0019deb0: nop 
    v1 = s0 & 0x1f;                                             // 0x0019deb4: andi $v1, $s0, 0x1f
    t5 = *(int32_t*)((a0) + 0x14);                              // 0x0019deb8: lw $t5, 0x14($a0)
    t0 = t4 + v1;                                               // 0x0019debc: addu $t0, $t4, $v1
    t0 = *(uint8_t*)(t0);                                       // 0x0019dec0: lbu $t0, 0($t0)
    v1 = s0 & 0xe0;                                             // 0x0019dec4: andi $v1, $s0, 0xe0
    v1 = v1 + t0;                                               // 0x0019dec8: addu $v1, $v1, $t0
    /* multiply: t5 * v1 -> hi:lo */                            // 0x0019decc: mult $ac3, $t5, $v1
    goto label_0x19dee4;                                        // 0x0019ded0: b 0x19dee4
    t1 = t8 + v1;                                               // 0x0019ded4: addu $t1, $t8, $v1
label_0x19ded8:
    t5 = *(int32_t*)((a0) + 0x14);                              // 0x0019ded8: lw $t5, 0x14($a0)
    t1 = t8 + t9;                                               // 0x0019dedc: addu $t1, $t8, $t9
    t9 = t9 + t5;                                               // 0x0019dee0: addu $t9, $t9, $t5
label_0x19dee4:
    v1 = 4;                                                     // 0x0019dee4: addiu $v1, $zero, 4
    if (t5 == v1) goto label_0x19df34;                          // 0x0019dee8: beq $t5, $v1, 0x19df34
    v1 = 3;                                                     // 0x0019deec: addiu $v1, $zero, 3
    if (t5 == v1) goto label_0x19df14;                          // 0x0019def0: beq $t5, $v1, 0x19df14
    /* nop */                                                   // 0x0019def4: nop 
    v1 = 2;                                                     // 0x0019def8: addiu $v1, $zero, 2
    if (t5 == v1) goto label_0x19df0c;                          // 0x0019defc: beq $t5, $v1, 0x19df0c
    /* nop */                                                   // 0x0019df00: nop 
    goto label_0x19df3c;                                        // 0x0019df04: b 0x19df3c
    v1 = *(int32_t*)((a0) + 0x1c);                              // 0x0019df08: lw $v1, 0x1c($a0)
label_0x19df0c:
    goto label_0x19df38;                                        // 0x0019df0c: b 0x19df38
    v0 = *(uint16_t*)(t1);                                      // 0x0019df10: lhu $v0, 0($t1)
label_0x19df14:
    t0 = *(uint8_t*)((t1) + 2);                                 // 0x0019df14: lbu $t0, 2($t1)
    v1 = *(uint8_t*)((t1) + 1);                                 // 0x0019df18: lbu $v1, 1($t1)
    v0 = *(uint8_t*)(t1);                                       // 0x0019df1c: lbu $v0, 0($t1)
    t0 = t0 << 0x10;                                            // 0x0019df20: sll $t0, $t0, 0x10
    v1 = v1 << 8;                                               // 0x0019df24: sll $v1, $v1, 8
    v1 = t0 | v1;                                               // 0x0019df28: or $v1, $t0, $v1
    goto label_0x19df38;                                        // 0x0019df2c: b 0x19df38
    v0 = v0 | v1;                                               // 0x0019df30: or $v0, $v0, $v1
label_0x19df34:
    v0 = *(int32_t*)(t1);                                       // 0x0019df34: lw $v0, 0($t1)
label_0x19df38:
    v1 = *(int32_t*)((a0) + 0x1c);                              // 0x0019df38: lw $v1, 0x1c($a0)
label_0x19df3c:
    t2 = *(int32_t*)((a0) + 0x18);                              // 0x0019df3c: lw $t2, 0x18($a0)
    s3 = *(int32_t*)((a0) + 0x20);                              // 0x0019df40: lw $s3, 0x20($a0)
    t1 = *(int32_t*)((a0) + 0x28);                              // 0x0019df44: lw $t1, 0x28($a0)
    t0 = *(int32_t*)((a0) + 0x24);                              // 0x0019df48: lw $t0, 0x24($a0)
    s2 = *(int32_t*)((a0) + 0x2c);                              // 0x0019df4c: lw $s2, 0x2c($a0)
    t6 = (unsigned)v0 >> v1;                                    // 0x0019df50: srlv $t6, $v0, $v1
    s1 = *(int32_t*)((a0) + 0x38);                              // 0x0019df54: lw $s1, 0x38($a0)
    v1 = *(int32_t*)((a0) + 0x34);                              // 0x0019df58: lw $v1, 0x34($a0)
    t2 = t3 - t2;                                               // 0x0019df5c: subu $t2, $t3, $t2
    t6 = s3 & t6;                                               // 0x0019df60: and $t6, $s3, $t6
    s4 = t6 << t2;                                              // 0x0019df64: sllv $s4, $t6, $t2
    t6 = (unsigned)v0 >> t1;                                    // 0x0019df68: srlv $t6, $v0, $t1
    t0 = t3 - t0;                                               // 0x0019df6c: subu $t0, $t3, $t0
    t6 = s2 & t6;                                               // 0x0019df70: and $t6, $s2, $t6
    t2 = *(int32_t*)((a0) + 0x30);                              // 0x0019df74: lw $t2, 0x30($a0)
    s3 = t6 << t0;                                              // 0x0019df78: sllv $s3, $t6, $t0
    t1 = *(int32_t*)((a0) + 0x44);                              // 0x0019df7c: lw $t1, 0x44($a0)
    t6 = (unsigned)v0 >> v1;                                    // 0x0019df80: srlv $t6, $v0, $v1
    t0 = *(int32_t*)((a0) + 0x40);                              // 0x0019df84: lw $t0, 0x40($a0)
    v1 = *(int32_t*)((a0) + 0x3c);                              // 0x0019df88: lw $v1, 0x3c($a0)
    t6 = s1 & t6;                                               // 0x0019df8c: and $t6, $s1, $t6
    t2 = t3 - t2;                                               // 0x0019df90: subu $t2, $t3, $t2
    v0 = (unsigned)v0 >> t0;                                    // 0x0019df94: srlv $v0, $v0, $t0
    t0 = t1 & v0;                                               // 0x0019df98: and $t0, $t1, $v0
    v0 = t3 - v1;                                               // 0x0019df9c: subu $v0, $t3, $v1
    s1 = t0 << v0;                                              // 0x0019dfa0: sllv $s1, $t0, $v0
    v0 = 1;                                                     // 0x0019dfa4: addiu $v0, $zero, 1
    if (a3 != v0) goto label_0x19dfd8;                          // 0x0019dfa8: bne $a3, $v0, 0x19dfd8
    s2 = t6 << t2;                                              // 0x0019dfac: sllv $s2, $t6, $t2
    if (a2 != 0) goto label_0x19dfd8;                           // 0x0019dfb0: bnez $a2, 0x19dfd8
    v0 = s0 & 0x1f;                                             // 0x0019dfb4: andi $v0, $s0, 0x1f
    v1 = s0 & 0xe0;                                             // 0x0019dfb8: andi $v1, $s0, 0xe0
    t0 = t4 + v0;                                               // 0x0019dfbc: addu $t0, $t4, $v0
    t0 = *(uint8_t*)(t0);                                       // 0x0019dfc0: lbu $t0, 0($t0)
    v0 = *(int32_t*)((a1) + 0x14);                              // 0x0019dfc4: lw $v0, 0x14($a1)
    v1 = v1 + t0;                                               // 0x0019dfc8: addu $v1, $v1, $t0
    /* multiply: v0 * v1 -> hi:lo */                            // 0x0019dfcc: mult $ac2, $v0, $v1
    goto label_0x19dff0;                                        // 0x0019dfd0: b 0x19dff0
    t6 = t7 + v0;                                               // 0x0019dfd4: addu $t6, $t7, $v0
label_0x19dfd8:
    v1 = *(int32_t*)((a1) + 0xc);                               // 0x0019dfd8: lw $v1, 0xc($a1)
    v0 = *(int32_t*)((a1) + 0x14);                              // 0x0019dfdc: lw $v0, 0x14($a1)
    /* multiply: v1 * s5 -> hi:lo */                            // 0x0019dfe0: mult $ac3, $v1, $s5
    v1 = t7 + v1;                                               // 0x0019dfe8: addu $v1, $t7, $v1
    t6 = v1 + v0;                                               // 0x0019dfec: addu $t6, $v1, $v0
label_0x19dff0:
    if (a2 != 0) goto label_0x19e014;                           // 0x0019dff0: bnez $a2, 0x19e014
    v0 = 0x80;                                                  // 0x0019dff4: addiu $v0, $zero, 0x80
    v0 = 0xff;                                                  // 0x0019dff8: addiu $v0, $zero, 0xff
    if (s1 != v0) goto label_0x19e00c;                          // 0x0019dffc: bne $s1, $v0, 0x19e00c
    /* nop */                                                   // 0x0019e000: nop 
    goto label_0x19e028;                                        // 0x0019e004: b 0x19e028
    s1 = 0x80;                                                  // 0x0019e008: addiu $s1, $zero, 0x80
label_0x19e00c:
    goto label_0x19e028;                                        // 0x0019e00c: b 0x19e028
    s1 = (unsigned)s1 >> 1;                                     // 0x0019e010: srl $s1, $s1, 1
label_0x19e014:
    if (s1 != v0) goto label_0x19e024;                          // 0x0019e014: bne $s1, $v0, 0x19e024
    /* nop */                                                   // 0x0019e018: nop 
    goto label_0x19e028;                                        // 0x0019e01c: b 0x19e028
    s1 = 0xff;                                                  // 0x0019e020: addiu $s1, $zero, 0xff
label_0x19e024:
    s1 = s1 << 1;                                               // 0x0019e024: sll $s1, $s1, 1
label_0x19e028:
    v1 = *(int32_t*)((a1) + 0x24);                              // 0x0019e028: lw $v1, 0x24($a1)
    t2 = *(int32_t*)((a1) + 0x18);                              // 0x0019e02c: lw $t2, 0x18($a1)
    t1 = *(int32_t*)((a1) + 0x20);                              // 0x0019e030: lw $t1, 0x20($a1)
    t0 = *(int32_t*)((a1) + 0x1c);                              // 0x0019e034: lw $t0, 0x1c($a1)
    s7 = *(int32_t*)((a1) + 0x2c);                              // 0x0019e038: lw $s7, 0x2c($a1)
    v0 = *(int32_t*)((a1) + 0x28);                              // 0x0019e03c: lw $v0, 0x28($a1)
    v1 = t3 - v1;                                               // 0x0019e040: subu $v1, $t3, $v1
    v1 = (unsigned)s3 >> v1;                                    // 0x0019e044: srlv $v1, $s3, $v1
    v0 = t3 - t2;                                               // 0x0019e04c: subu $v0, $t3, $t2
    fp = *(int32_t*)((a1) + 0x30);                              // 0x0019e050: lw $fp, 0x30($a1)
    t2 = (unsigned)s4 >> v0;                                    // 0x0019e054: srlv $t2, $s4, $v0
    v0 = *(int32_t*)((a1) + 0x38);                              // 0x0019e058: lw $v0, 0x38($a1)
    t1 = t1 & t2;                                               // 0x0019e05c: and $t1, $t1, $t2
    t2 = s7 & v1;                                               // 0x0019e060: and $t2, $s7, $v1
    /* FPU: mulsa.w.ph $ac0, $sp, $v0 */                        // 0x0019e064: mulsa.w.ph $ac0, $sp, $v0
    v0 = *(int32_t*)((a1) + 0x34);                              // 0x0019e068: lw $v0, 0x34($a1)
    v0 = t1 << t0;                                              // 0x0019e070: sllv $v0, $t1, $t0
    v1 = *(int32_t*)((a1) + 0x44);                              // 0x0019e074: lw $v1, 0x44($a1)
    /* FPU: ld.b $w2, -0x57($zero) */                           // 0x0019e078: ld.b $w2, -0x57($zero)
    t0 = *(int32_t*)((a1) + 0x3c);                              // 0x0019e07c: lw $t0, 0x3c($a1)
    s7 = *(int32_t*)((a1) + 0x40);                              // 0x0019e080: lw $s7, 0x40($a1)
    t2 = t2 << t1;                                              // 0x0019e084: sllv $t2, $t2, $t1
    t2 = v0 | t2;                                               // 0x0019e088: or $t2, $v0, $t2
    t1 = t3 - fp;                                               // 0x0019e08c: subu $t1, $t3, $fp
    t1 = (unsigned)s2 >> t1;                                    // 0x0019e094: srlv $t1, $s2, $t1
    t0 = t3 - t0;                                               // 0x0019e098: subu $t0, $t3, $t0
    t0 = (unsigned)s1 >> t0;                                    // 0x0019e09c: srlv $t0, $s1, $t0
    v1 = v1 & t0;                                               // 0x0019e0a0: and $v1, $v1, $t0
    v1 = v1 << s7;                                              // 0x0019e0a4: sllv $v1, $v1, $s7
    t1 = v0 & t1;                                               // 0x0019e0a8: and $t1, $v0, $t1
    /* FPU: aver_u.h $w2, $w0, $w2 */                           // 0x0019e0ac: aver_u.h $w2, $w0, $w2
    v0 = t1 << v0;                                              // 0x0019e0b0: sllv $v0, $t1, $v0
    v0 = v0 | t2;                                               // 0x0019e0b4: or $v0, $v0, $t2
    v0 = v1 | v0;                                               // 0x0019e0b8: or $v0, $v1, $v0
    v1 = 4;                                                     // 0x0019e0bc: addiu $v1, $zero, 4
    if (t5 == v1) goto label_0x19e0fc;                          // 0x0019e0c0: beq $t5, $v1, 0x19e0fc
    v1 = 3;                                                     // 0x0019e0c4: addiu $v1, $zero, 3
    if (t5 == v1) goto label_0x19e0ec;                          // 0x0019e0c8: beq $t5, $v1, 0x19e0ec
    /* nop */                                                   // 0x0019e0cc: nop 
    v1 = 2;                                                     // 0x0019e0d0: addiu $v1, $zero, 2
    if (t5 == v1) goto label_0x19e0e4;                          // 0x0019e0d4: beq $t5, $v1, 0x19e0e4
    /* nop */                                                   // 0x0019e0d8: nop 
    goto label_0x19e104;                                        // 0x0019e0dc: b 0x19e104
    s0 = s0 + 1;                                                // 0x0019e0e0: addiu $s0, $s0, 1
label_0x19e0e4:
    goto label_0x19e100;                                        // 0x0019e0e4: b 0x19e100
    *(uint16_t*)(t6) = v0;                                      // 0x0019e0e8: sh $v0, 0($t6)
label_0x19e0ec:
    *(uint8_t*)(t6) = s4;                                       // 0x0019e0ec: sb $s4, 0($t6)
    *(uint8_t*)((t6) + 1) = s3;                                 // 0x0019e0f0: sb $s3, 1($t6)
    goto label_0x19e100;                                        // 0x0019e0f4: b 0x19e100
    *(uint8_t*)((t6) + 2) = s2;                                 // 0x0019e0f8: sb $s2, 2($t6)
label_0x19e0fc:
    *(uint32_t*)(t6) = v0;                                      // 0x0019e0fc: sw $v0, 0($t6)
label_0x19e100:
    s0 = s0 + 1;                                                // 0x0019e100: addiu $s0, $s0, 1
label_0x19e104:
    s6 = s6 + 1;                                                // 0x0019e104: addiu $s6, $s6, 1
label_0x19e108:
    v1 = *(int32_t*)((a1) + 4);                                 // 0x0019e108: lw $v1, 4($a1)
    v1 = (s6 < v1) ? 1 : 0;                                     // 0x0019e10c: slt $v1, $s6, $v1
    if (v1 != 0) goto label_0x19dea4;                           // 0x0019e110: bnez $v1, 0x19dea4
    v1 = 1;                                                     // 0x0019e114: addiu $v1, $zero, 1
    s5 = s5 + 1;                                                // 0x0019e118: addiu $s5, $s5, 1
label_0x19e11c:
    v1 = *(int32_t*)((a1) + 8);                                 // 0x0019e11c: lw $v1, 8($a1)
    v1 = (s5 < v1) ? 1 : 0;                                     // 0x0019e120: slt $v1, $s5, $v1
    if (v1 != 0) goto label_0x19de9c;                           // 0x0019e124: bnez $v1, 0x19de9c
    /* nop */                                                   // 0x0019e128: nop 
    /* FPU: xori.b $w2, $w0, 0xbe */                            // 0x0019e12c: xori.b $w2, $w0, 0xbe
    v0 = 1;                                                     // 0x0019e130: addiu $v0, $zero, 1
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x0019e138: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x0019e13c: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x0019e140: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019e148: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019e14c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019e150: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019e154: jr $ra
    sp = sp + 0xc0;                                             // 0x0019e158: addiu $sp, $sp, 0xc0
}