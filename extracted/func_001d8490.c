void func_001d8490() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_100, local_110, local_120, local_a0, local_b0, local_c0, local_d0, local_e0;
    uint32_t local_f0;
    
    sp = sp + -0x150;                                           // 0x001d8490: addiu $sp, $sp, -0x150
    v1 = t0 & 0xff;                                             // 0x001d8494: andi $v1, $t0, 0xff
    at = 0x31 << 16;                                            // 0x001d849c: lui $at, 0x31
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x001d84a4: dps.w.ph $ac0, $sp, $s7
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001d84b0: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d84bc: dpa.w.ph $ac0, $sp, $s3
    s3 = 5;                                                     // 0x001d84c8: addiu $s3, $zero, 5
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d84cc: addu.qb $zero, $sp, $s1
    local_c0 = v1;                                              // 0x001d84d4: sw $v1, 0xc0($sp)
    local_120 = a0;                                             // 0x001d84d8: sw $a0, 0x120($sp)
    v1 = 1;                                                     // 0x001d84dc: addiu $v1, $zero, 1
    *(uint8_t*)((a1) + 2) = v1;                                 // 0x001d84e0: sb $v1, 2($a1)
    v1 = *(int32_t*)((a2) + 4);                                 // 0x001d84e4: lw $v1, 4($a2)
    a1 = -0x40;                                                 // 0x001d84e8: addiu $a1, $zero, -0x40
    a2 = g_003137fc;  // Global at 0x003137fc                   // 0x001d84ec: lw $a2, 0x37fc($at)
    v1 = v1 + a0;                                               // 0x001d84f0: addu $v1, $v1, $a0
    local_f0 = v1;                                              // 0x001d84f4: sw $v1, 0xf0($sp)
    v1 = a2 + a3;                                               // 0x001d84f8: addu $v1, $a2, $a3
    v1 = v1 + 0x3f;                                             // 0x001d84fc: addiu $v1, $v1, 0x3f
    v1 = v1 & a1;                                               // 0x001d8500: and $v1, $v1, $a1
    goto label_0x1d8720;                                        // 0x001d8504: b 0x1d8720
    local_d0 = v1;                                              // 0x001d8508: sw $v1, 0xd0($sp)
label_0x1d850c:
    v1 = local_f0;                                              // 0x001d850c: lw $v1, 0xf0($sp)
    at = ((unsigned)s4 < (unsigned)v1) ? 1 : 0;                 // 0x001d8510: sltu $at, $s4, $v1
    if (at == 0) goto label_0x1d8730;                           // 0x001d8514: beqz $at, 0x1d8730
    /* nop */                                                   // 0x001d8518: nop 
    v1 = *(int32_t*)(s4);                                       // 0x001d851c: lw $v1, 0($s4)
    local_110 = v1;                                             // 0x001d8520: sw $v1, 0x110($sp)
    v1 = local_110;                                             // 0x001d8524: lw $v1, 0x110($sp)
    if (v1 != 0) goto label_0x1d8538;                           // 0x001d8528: bnez $v1, 0x1d8538
    /* nop */                                                   // 0x001d852c: nop 
    goto label_0x1d8718;                                        // 0x001d8530: b 0x1d8718
    s4 = s4 + 8;                                                // 0x001d8534: addiu $s4, $s4, 8
label_0x1d8538:
    a1 = *(int32_t*)((s4) + 4);                                 // 0x001d8538: lw $a1, 4($s4)
    v1 = a0 << 2;                                               // 0x001d853c: sll $v1, $a0, 2
    a0 = v1 + a0;                                               // 0x001d8540: addu $a0, $v1, $a0
    v1 = a0 << 2;                                               // 0x001d8548: sll $v1, $a0, 2
    v1 = a0 + v1;                                               // 0x001d854c: addu $v1, $a0, $v1
    v1 = v1 << 2;                                               // 0x001d8550: sll $v1, $v1, 2
    local_b0 = v1;                                              // 0x001d8554: sw $v1, 0xb0($sp)
    v1 = local_120;                                             // 0x001d8558: lw $v1, 0x120($sp)
    v1 = a1 + v1;                                               // 0x001d855c: addu $v1, $a1, $v1
    goto label_0x1d8700;                                        // 0x001d8560: b 0x1d8700
    local_100 = v1;                                             // 0x001d8564: sw $v1, 0x100($sp)
label_0x1d8568:
    a2 = *(uint8_t*)((s5) + 1);                                 // 0x001d8568: lbu $a2, 1($s5)
    /* divide: s0 / a2 -> hi:lo */                              // 0x001d856c: div $zero, $s0, $a2
    /* nop */                                                   // 0x001d8570: nop 
    /* nop */                                                   // 0x001d8574: nop 
    /* mfhi $s2 */                                              // 0x001d8578
    if (s2 != 0) goto label_0x1d8588;                           // 0x001d857c: bnez $s2, 0x1d8588
    v1 = s6 & 0xffff;                                           // 0x001d8580: andi $v1, $s6, 0xffff
    local_e0 = 0;                                               // 0x001d8584: sb $zero, 0xe0($sp)
label_0x1d8588:
    a0 = -1;                                                    // 0x001d8588: addiu $a0, $zero, -1
    a1 = v1 << 2;                                               // 0x001d858c: sll $a1, $v1, 2
    v1 = local_100;                                             // 0x001d8590: lw $v1, 0x100($sp)
    v1 = v1 + a1;                                               // 0x001d8594: addu $v1, $v1, $a1
    a1 = *(int32_t*)(v1);                                       // 0x001d8598: lw $a1, 0($v1)
    if (a1 == a0) goto label_0x1d86d8;                          // 0x001d859c: beq $a1, $a0, 0x1d86d8
    /* nop */                                                   // 0x001d85a0: nop 
    if (s2 != 0) goto label_0x1d85d8;                           // 0x001d85a8: bnez $s2, 0x1d85d8
    local_e0 = v1;                                              // 0x001d85ac: sb $v1, 0xe0($sp)
    /* divide: s0 / a2 -> hi:lo */                              // 0x001d85b0: div $zero, $s0, $a2
    v1 = local_b0;                                              // 0x001d85b4: lw $v1, 0xb0($sp)
    /* nop */                                                   // 0x001d85b8: nop 
    /* mflo $a0 */                                              // 0x001d85bc
    v1 = v1 + a0;                                               // 0x001d85c0: addu $v1, $v1, $a0
    v1 = v1 << 1;                                               // 0x001d85c4: sll $v1, $v1, 1
    v1 = s5 + v1;                                               // 0x001d85c8: addu $v1, $s5, $v1
    v1 = *(uint16_t*)((v1) + 0xfa4);                            // 0x001d85cc: lhu $v1, 0xfa4($v1)
    if (v1 != 0) goto label_0x1d86d8;                           // 0x001d85d0: bnez $v1, 0x1d86d8
    /* nop */                                                   // 0x001d85d4: nop 
label_0x1d85d8:
    v1 = local_120;                                             // 0x001d85d8: lw $v1, 0x120($sp)
    s1 = v1 + a1;                                               // 0x001d85dc: addu $s1, $v1, $a1
    v1 = local_c0;                                              // 0x001d85e0: lw $v1, 0xc0($sp)
    if (v1 != 0) goto label_0x1d85f4;                           // 0x001d85e4: bnez $v1, 0x1d85f4
    v1 = 0x7d0;                                                 // 0x001d85e8: addiu $v1, $zero, 0x7d0
    goto label_0x1d85fc;                                        // 0x001d85ec: b 0x1d85fc
    s7 = s3 + s2;                                               // 0x001d85f0: addu $s7, $s3, $s2
label_0x1d85f4:
    v1 = v1 - s3;                                               // 0x001d85f4: subu $v1, $v1, $s3
    s7 = v1 + s2;                                               // 0x001d85f8: addu $s7, $v1, $s2
label_0x1d85fc:
    a0 = *(int32_t*)(s1);                                       // 0x001d85fc: lw $a0, 0($s1)
    v1 = -1;                                                    // 0x001d8600: addiu $v1, $zero, -1
    if (a0 != v1) goto label_0x1d8620;                          // 0x001d8604: bne $a0, $v1, 0x1d8620
    /* nop */                                                   // 0x001d8608: nop 
    a0 = *(int32_t*)((s1) + 4);                                 // 0x001d860c: lw $a0, 4($s1)
    v1 = s7 << 1;                                               // 0x001d8610: sll $v1, $s7, 1
    v1 = s5 + v1;                                               // 0x001d8614: addu $v1, $s5, $v1
    goto label_0x1d8674;                                        // 0x001d8618: b 0x1d8674
    *(uint16_t*)((v1) + 4) = a0;                                // 0x001d861c: sh $a0, 4($v1)
label_0x1d8620:
    a1 = local_d0;                                              // 0x001d8620: lw $a1, 0xd0($sp)
    a0 = sp + 0x130;                                            // 0x001d8624: addiu $a0, $sp, 0x130
    func_001da610();  // 1da610                                // 0x001d8628: jal 0x1da610
    func_001922b0();  // 1922b0                                // 0x001d8630: jal 0x1922b0
    a0 = sp + 0x130;                                            // 0x001d8634: addiu $a0, $sp, 0x130
    v1 = s7 << 1;                                               // 0x001d8638: sll $v1, $s7, 1
    a0 = s5 + v1;                                               // 0x001d863c: addu $a0, $s5, $v1
    v1 = a0 + 4;                                                // 0x001d8640: addiu $v1, $a0, 4
    local_a0 = v1;                                              // 0x001d8644: sw $v1, 0xa0($sp)
    v1 = *(uint16_t*)((a0) + 4);                                // 0x001d8648: lhu $v1, 4($a0)
    if (v1 == 0) goto label_0x1d865c;                           // 0x001d864c: beqz $v1, 0x1d865c
    s7 = v0 & 0xffff;                                           // 0x001d8650: andi $s7, $v0, 0xffff
    func_00192350();  // 192350                                // 0x001d8654: jal 0x192350
    a0 = v1 & 0xffff;                                           // 0x001d8658: andi $a0, $v1, 0xffff
label_0x1d865c:
    v1 = local_a0;                                              // 0x001d865c: lw $v1, 0xa0($sp)
    a0 = -1;                                                    // 0x001d8660: addiu $a0, $zero, -1
    *(uint16_t*)(v1) = s7;                                      // 0x001d8664: sh $s7, 0($v1)
    v1 = s7 & 0xffff;                                           // 0x001d8668: andi $v1, $s7, 0xffff
    *(uint32_t*)(s1) = a0;                                      // 0x001d866c: sw $a0, 0($s1)
    *(uint32_t*)((s1) + 4) = v1;                                // 0x001d8670: sw $v1, 4($s1)
label_0x1d8674:
    v1 = local_c0;                                              // 0x001d8674: lw $v1, 0xc0($sp)
    if (v1 != 0) goto label_0x1d86ac;                           // 0x001d8678: bnez $v1, 0x1d86ac
    /* nop */                                                   // 0x001d867c: nop 
    v1 = *(uint8_t*)((s5) + 1);                                 // 0x001d8680: lbu $v1, 1($s5)
    a1 = s3 | 0x8000;                                           // 0x001d8684: ori $a1, $s3, 0x8000
    /* divide: s0 / v1 -> hi:lo */                              // 0x001d8688: div $zero, $s0, $v1
    v1 = local_b0;                                              // 0x001d868c: lw $v1, 0xb0($sp)
    /* nop */                                                   // 0x001d8690: nop 
    /* mflo $a0 */                                              // 0x001d8694
    v1 = v1 + a0;                                               // 0x001d8698: addu $v1, $v1, $a0
    v1 = v1 << 1;                                               // 0x001d869c: sll $v1, $v1, 1
    v1 = s5 + v1;                                               // 0x001d86a0: addu $v1, $s5, $v1
    goto label_0x1d86d8;                                        // 0x001d86a4: b 0x1d86d8
    *(uint16_t*)((v1) + 0xfa4) = a1;                            // 0x001d86a8: sh $a1, 0xfa4($v1)
label_0x1d86ac:
    v1 = *(uint8_t*)((s5) + 1);                                 // 0x001d86ac: lbu $v1, 1($s5)
    a0 = 0x7d0;                                                 // 0x001d86b0: addiu $a0, $zero, 0x7d0
    a1 = a0 - s3;                                               // 0x001d86b4: subu $a1, $a0, $s3
    /* divide: s0 / v1 -> hi:lo */                              // 0x001d86b8: div $zero, $s0, $v1
    v1 = local_b0;                                              // 0x001d86bc: lw $v1, 0xb0($sp)
    /* nop */                                                   // 0x001d86c0: nop 
    /* mflo $a0 */                                              // 0x001d86c4
    v1 = v1 + a0;                                               // 0x001d86c8: addu $v1, $v1, $a0
    v1 = v1 << 1;                                               // 0x001d86cc: sll $v1, $v1, 1
    v1 = s5 + v1;                                               // 0x001d86d0: addu $v1, $s5, $v1
    *(uint16_t*)((v1) + 0xfa4) = a1;                            // 0x001d86d4: sh $a1, 0xfa4($v1)
label_0x1d86d8:
    a0 = *(uint8_t*)((s5) + 1);                                 // 0x001d86d8: lbu $a0, 1($s5)
    v1 = a0 + -1;                                               // 0x001d86dc: addiu $v1, $a0, -1
    if (s2 != v1) goto label_0x1d86fc;                          // 0x001d86e0: bne $s2, $v1, 0x1d86fc
    v1 = s6 + 1;                                                // 0x001d86e4: addiu $v1, $s6, 1
    v1 = local_e0;                                              // 0x001d86e8: lbu $v1, 0xe0($sp)
    if (v1 == 0) goto label_0x1d86f8;                           // 0x001d86ec: beqz $v1, 0x1d86f8
    /* nop */                                                   // 0x001d86f0: nop 
    s3 = s3 + a0;                                               // 0x001d86f4: addu $s3, $s3, $a0
label_0x1d86f8:
    v1 = s6 + 1;                                                // 0x001d86f8: addiu $v1, $s6, 1
label_0x1d86fc:
    s6 = v1 & 0xffff;                                           // 0x001d86fc: andi $s6, $v1, 0xffff
label_0x1d8700:
    v1 = local_110;                                             // 0x001d8700: lw $v1, 0x110($sp)
    s0 = s6 & 0xffff;                                           // 0x001d8704: andi $s0, $s6, 0xffff
    v1 = ((unsigned)s0 < (unsigned)v1) ? 1 : 0;                 // 0x001d8708: sltu $v1, $s0, $v1
    if (v1 != 0) goto label_0x1d8568;                           // 0x001d870c: bnez $v1, 0x1d8568
    /* nop */                                                   // 0x001d8710: nop 
    s4 = s4 + 8;                                                // 0x001d8714: addiu $s4, $s4, 8
label_0x1d8718:
    v1 = fp + 1;                                                // 0x001d8718: addiu $v1, $fp, 1
    fp = v1 & 0xffff;                                           // 0x001d871c: andi $fp, $v1, 0xffff
label_0x1d8720:
    a0 = fp & 0xffff;                                           // 0x001d8720: andi $a0, $fp, 0xffff
    v1 = (a0 < 0x14) ? 1 : 0;                                   // 0x001d8724: slti $v1, $a0, 0x14
    if (v1 != 0) goto label_0x1d850c;                           // 0x001d8728: bnez $v1, 0x1d850c
    /* nop */                                                   // 0x001d872c: nop 
label_0x1d8730:
    v1 = local_c0;                                              // 0x001d8730: lw $v1, 0xc0($sp)
    if (v1 != 0) goto label_0x1d8748;                           // 0x001d8734: bnez $v1, 0x1d8748
    v1 = s3 + -5;                                               // 0x001d8738: addiu $v1, $s3, -5
    v1 = s3 + -5;                                               // 0x001d873c: addiu $v1, $s3, -5
    goto label_0x1d874c;                                        // 0x001d8740: b 0x1d874c
    *(uint16_t*)((s5) + 0x1f44) = v1;                           // 0x001d8744: sh $v1, 0x1f44($s5)
label_0x1d8748:
    *(uint16_t*)((s5) + 0x1f46) = v1;                           // 0x001d8748: sh $v1, 0x1f46($s5)
label_0x1d874c:
    /* FPU: xori.b $w2, $w0, 0xbe */                            // 0x001d8750: xori.b $w2, $w0, 0xbe
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001d8758: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001d875c: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001d8760: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d8768: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d876c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d8770: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d8774: jr $ra
    sp = sp + 0x150;                                            // 0x001d8778: addiu $sp, $sp, 0x150
}