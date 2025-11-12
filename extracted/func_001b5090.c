void func_001b5090() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xa0;                                            // 0x001b5090: addiu $sp, $sp, -0xa0
    at = 0x31 << 16;                                            // 0x001b5094: lui $at, 0x31
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x001b50a0: dps.w.ph $ac0, $sp, $s7
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001b50a8: subu.qb $zero, $sp, $s5
    s5 = 0x2b << 16;                                            // 0x001b50b0: lui $s5, 0x2b
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001b50b4: dpa.w.ph $ac0, $sp, $s3
    s5 = s5 + -0x3ac0;                                          // 0x001b50b8: addiu $s5, $s5, -0x3ac0
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b50c0: addu.qb $zero, $sp, $s1
    v1 = g_003137b6;  // Global at 0x003137b6                   // 0x001b50c8: lbu $v1, 0x37b6($at)
    if (v1 != 0) goto label_0x1b50e4;                           // 0x001b50cc: bnez $v1, 0x1b50e4
    at = 0x31 << 16;                                            // 0x001b50d4: lui $at, 0x31
    v1 = g_003137ca;  // Global at 0x003137ca                   // 0x001b50d8: lbu $v1, 0x37ca($at)
    if (v1 == 0) goto label_0x1b5298;                           // 0x001b50dc: beqz $v1, 0x1b5298
    /* nop */                                                   // 0x001b50e0: nop 
label_0x1b50e4:
    s1 = g_002ac5b0;  // Global at 0x002ac5b0                   // 0x001b50e4: lw $s1, 0x70($s5)
    s4 = g_002ac58c;  // Global at 0x002ac58c                   // 0x001b50e8: lw $s4, 0x4c($s5)
label_0x1b50ec:
    a0 = g_002ac5a4;  // Global at 0x002ac5a4                   // 0x001b50ec: lw $a0, 0x64($s5)
    v1 = g_002ac5a0;  // Global at 0x002ac5a0                   // 0x001b50f0: lw $v1, 0x60($s5)
    at = ((unsigned)a0 < (unsigned)v1) ? 1 : 0;                 // 0x001b50f4: sltu $at, $a0, $v1
    if (at == 0) goto label_0x1b5294;                           // 0x001b50f8: beqz $at, 0x1b5294
    /* nop */                                                   // 0x001b50fc: nop 
    a0 = *(uint8_t*)(s2);                                       // 0x001b5100: lbu $a0, 0($s2)
    if (a0 == 0) goto label_0x1b5294;                           // 0x001b5104: beqz $a0, 0x1b5294
    s2 = s2 + 1;                                                // 0x001b5108: addiu $s2, $s2, 1
    v1 = 0xa;                                                   // 0x001b510c: addiu $v1, $zero, 0xa
    if (a0 != v1) goto label_0x1b5130;                          // 0x001b5110: bne $a0, $v1, 0x1b5130
    v1 = ((unsigned)a0 < (unsigned)0x80) ? 1 : 0;               // 0x001b5114: sltiu $v1, $a0, 0x80
    g_002ac5b0 = s1;  // Global at 0x002ac5b0                   // 0x001b5118: sw $s1, 0x70($s5)
    a0 = g_002ac5ac;  // Global at 0x002ac5ac                   // 0x001b511c: lw $a0, 0x6c($s5)
    v1 = g_002ac5b4;  // Global at 0x002ac5b4                   // 0x001b5120: lw $v1, 0x74($s5)
    v1 = v1 + a0;                                               // 0x001b5124: addu $v1, $v1, $a0
    goto label_0x1b50ec;                                        // 0x001b5128: b 0x1b50ec
    g_002ac5b4 = v1;  // Global at 0x002ac5b4                   // 0x001b512c: sw $v1, 0x74($s5)
label_0x1b5130:
    if (v1 != 0) goto label_0x1b5140;                           // 0x001b5130: bnez $v1, 0x1b5140
    at = ((unsigned)a0 < (unsigned)0xa0) ? 1 : 0;               // 0x001b5134: sltiu $at, $a0, 0xa0
    if (at != 0) goto label_0x1b5154;                           // 0x001b5138: bnez $at, 0x1b5154
    /* nop */                                                   // 0x001b513c: nop 
label_0x1b5140:
    v1 = ((unsigned)a0 < (unsigned)0xe0) ? 1 : 0;               // 0x001b5140: sltiu $v1, $a0, 0xe0
    if (v1 != 0) goto label_0x1b5170;                           // 0x001b5144: bnez $v1, 0x1b5170
    at = ((unsigned)a0 < (unsigned)0x100) ? 1 : 0;              // 0x001b5148: sltiu $at, $a0, 0x100
    if (at == 0) goto label_0x1b5170;                           // 0x001b514c: beqz $at, 0x1b5170
    /* nop */                                                   // 0x001b5150: nop 
label_0x1b5154:
    v1 = *(uint8_t*)(s2);                                       // 0x001b5154: lbu $v1, 0($s2)
    if (v1 == 0) goto label_0x1b5294;                           // 0x001b5158: beqz $v1, 0x1b5294
    s2 = s2 + 1;                                                // 0x001b515c: addiu $s2, $s2, 1
    v0 = a0 << 8;                                               // 0x001b5160: sll $v0, $a0, 8
    goto label_0x1b5180;                                        // 0x001b5168: b 0x1b5180
    v0 = v0 | v1;                                               // 0x001b516c: or $v0, $v0, $v1
label_0x1b5170:
    a1 = g_002ac548;  // Global at 0x002ac548                   // 0x001b5170: lw $a1, 8($s5)
    func_001b5e90();  // 0x1b5e60                                // 0x001b5174: jal 0x1b5e60
    a0 = a0 & 0xff;                                             // 0x001b5178: andi $a0, $a0, 0xff
    s6 = 1;                                                     // 0x001b517c: addiu $s6, $zero, 1
label_0x1b5180:
    a1 = g_002ac548;  // Global at 0x002ac548                   // 0x001b5180: lw $a1, 8($s5)
    func_001b5e60();  // 0x1b5dd0                                // 0x001b5184: jal 0x1b5dd0
    v1 = g_002ac55c;  // Global at 0x002ac55c                   // 0x001b518c: lw $v1, 0x1c($s5)
    at = ((unsigned)a1 < (unsigned)v1) ? 1 : 0;                 // 0x001b5194: sltu $at, $a1, $v1
    if (at == 0) goto label_0x1b527c;                           // 0x001b5198: beqz $at, 0x1b527c
    func_001b5730();  // 0x1b5630                                // 0x001b51a0: jal 0x1b5630
    /* nop */                                                   // 0x001b51a4: nop 
    v0 = g_002ac5e4;  // Global at 0x002ac5e4                   // 0x001b51ac: lw $v0, 0xa4($s5)
    if (v0 != 0) goto label_0x1b525c;                           // 0x001b51b0: bnez $v0, 0x1b525c
    at = 0x31 << 16;                                            // 0x001b51b8: lui $at, 0x31
    v0 = 3;                                                     // 0x001b51bc: addiu $v0, $zero, 3
    v1 = g_003137d2;  // Global at 0x003137d2                   // 0x001b51c0: lbu $v1, 0x37d2($at)
    if (v1 == v0) goto label_0x1b5258;                          // 0x001b51c4: beq $v1, $v0, 0x1b5258
    a0 = 0x50;                                                  // 0x001b51c8: addiu $a0, $zero, 0x50
    func_001b7a80();  // 0x1b7a70                                // 0x001b51cc: jal 0x1b7a70
    /* nop */                                                   // 0x001b51d0: nop 
    if (v0 != 0) goto label_0x1b5258;                           // 0x001b51d4: bnez $v0, 0x1b5258
    s3 = g_002ac5b0;  // Global at 0x002ac5b0                   // 0x001b51dc: lw $s3, 0x70($s5)
    s4 = g_002ac5c0;  // Global at 0x002ac5c0                   // 0x001b51e0: lw $s4, 0x80($s5)
    v0 = 0xff00 << 16;                                          // 0x001b51e4: lui $v0, 0xff00
    s7 = g_002ac5b4;  // Global at 0x002ac5b4                   // 0x001b51e8: lw $s7, 0x74($s5)
    fp = g_002ac5b8;  // Global at 0x002ac5b8                   // 0x001b51f0: lw $fp, 0x78($s5)
    v0 = s4 & v0;                                               // 0x001b51fc: and $v0, $s4, $v0
    g_002ac5c0 = v0;  // Global at 0x002ac5c0                   // 0x001b5200: sw $v0, 0x80($s5)
    v0 = g_002ac5b0;  // Global at 0x002ac5b0                   // 0x001b5204: lw $v0, 0x70($s5)
    v0 = v0 + 2;                                                // 0x001b5208: addiu $v0, $v0, 2
    g_002ac5b0 = v0;  // Global at 0x002ac5b0                   // 0x001b520c: sw $v0, 0x70($s5)
    v0 = g_002ac5b4;  // Global at 0x002ac5b4                   // 0x001b5210: lw $v0, 0x74($s5)
    v0 = v0 + 2;                                                // 0x001b5214: addiu $v0, $v0, 2
    g_002ac5b4 = v0;  // Global at 0x002ac5b4                   // 0x001b5218: sw $v0, 0x74($s5)
    v0 = g_002ac5b8;  // Global at 0x002ac5b8                   // 0x001b521c: lw $v0, 0x78($s5)
    v0 = v0 + -1;                                               // 0x001b5220: addiu $v0, $v0, -1
    func_001b6d60();  // 0x1b6a60                                // 0x001b5224: jal 0x1b6a60
    g_002ac5b8 = v0;  // Global at 0x002ac5b8                   // 0x001b5228: sw $v0, 0x78($s5)
    g_002ac5c0 = s4;  // Global at 0x002ac5c0                   // 0x001b522c: sw $s4, 0x80($s5)
    g_002ac5b0 = s3;  // Global at 0x002ac5b0                   // 0x001b5230: sw $s3, 0x70($s5)
    g_002ac5b4 = s7;  // Global at 0x002ac5b4                   // 0x001b5234: sw $s7, 0x74($s5)
    g_002ac5b8 = fp;  // Global at 0x002ac5b8                   // 0x001b5238: sw $fp, 0x78($s5)
    v1 = g_002ac5a4;  // Global at 0x002ac5a4                   // 0x001b523c: lw $v1, 0x64($s5)
    a0 = v1 + 1;                                                // 0x001b5240: addiu $a0, $v1, 1
    g_002ac5a4 = a0;  // Global at 0x002ac5a4                   // 0x001b5244: sw $a0, 0x64($s5)
    v1 = g_002ac5a0;  // Global at 0x002ac5a0                   // 0x001b5248: lw $v1, 0x60($s5)
    at = ((unsigned)a0 < (unsigned)v1) ? 1 : 0;                 // 0x001b524c: sltu $at, $a0, $v1
    if (at == 0) goto label_0x1b5294;                           // 0x001b5250: beqz $at, 0x1b5294
label_0x1b5258:
label_0x1b525c:
    func_001b6d60();  // 0x1b6a60                                // 0x001b5264: jal 0x1b6a60
    v1 = g_002ac5a4;  // Global at 0x002ac5a4                   // 0x001b526c: lw $v1, 0x64($s5)
    v1 = v1 + 1;                                                // 0x001b5274: addiu $v1, $v1, 1
    g_002ac5a4 = v1;  // Global at 0x002ac5a4                   // 0x001b5278: sw $v1, 0x64($s5)
label_0x1b527c:
    a0 = g_002ac5ac;  // Global at 0x002ac5ac                   // 0x001b527c: lw $a0, 0x6c($s5)
    v1 = g_002ac5b0;  // Global at 0x002ac5b0                   // 0x001b5280: lw $v1, 0x70($s5)
    a0 = (unsigned)a0 >> s6;                                    // 0x001b5284: srlv $a0, $a0, $s6
    v1 = v1 + a0;                                               // 0x001b5288: addu $v1, $v1, $a0
    goto label_0x1b50ec;                                        // 0x001b528c: b 0x1b50ec
    g_002ac5b0 = v1;  // Global at 0x002ac5b0                   // 0x001b5290: sw $v1, 0x70($s5)
label_0x1b5294:
    g_002ac58c = s4;  // Global at 0x002ac58c                   // 0x001b5294: sw $s4, 0x4c($s5)
label_0x1b5298:
    /* FPU: xori.b $w2, $w0, 0xbe */                            // 0x001b529c: xori.b $w2, $w0, 0xbe
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001b52a4: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001b52a8: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001b52ac: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b52b4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b52b8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b52bc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b52c0: jr $ra
    sp = sp + 0xa0;                                             // 0x001b52c4: addiu $sp, $sp, 0xa0
}