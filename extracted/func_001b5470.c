void func_001b5470() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x70;                                            // 0x001b5470: addiu $sp, $sp, -0x70
    at = 0x2b << 16;                                            // 0x001b5474: lui $at, 0x2b
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001b547c: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001b5488: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b5490: addu.qb $zero, $sp, $s1
    s2 = 0x2b << 16;                                            // 0x001b5494: lui $s2, 0x2b
    v1 = g_002ac590;  // Global at 0x002ac590                   // 0x001b549c: lw $v1, -0x3a70($at)
    v1 = ((unsigned)v1 < (unsigned)0x170) ? 1 : 0;              // 0x001b54a0: sltiu $v1, $v1, 0x170
    if (v1 != 0) goto label_0x1b560c;                           // 0x001b54a4: bnez $v1, 0x1b560c
    s2 = s2 + -0x3ac0;                                          // 0x001b54a8: addiu $s2, $s2, -0x3ac0
    s0 = g_002ac58c;  // Global at 0x002ac58c                   // 0x001b54ac: lw $s0, 0x4c($s2)
    a1 = g_002ac54c;  // Global at 0x002ac54c                   // 0x001b54b0: lw $a1, 0xc($s2)
    func_001b6720();  // 1b6720                                // 0x001b54b4: jal 0x1b6720
    func_001b69e0();  // 1b69e0                                // 0x001b54c0: jal 0x1b69e0
    func_001b6d60();  // 1b6d60                                // 0x001b54cc: jal 0x1b6d60
    v1 = g_002ac590;  // Global at 0x002ac590                   // 0x001b54d4: lw $v1, 0x50($s2)
    v1 = v1 + -0x170;                                           // 0x001b54e0: addiu $v1, $v1, -0x170
    g_002ac590 = v1;  // Global at 0x002ac590                   // 0x001b54e4: sw $v1, 0x50($s2)
    s4 = g_002ac5b0;  // Global at 0x002ac5b0                   // 0x001b54e8: lw $s4, 0x70($s2)
label_0x1b54ec:
    v1 = g_002ac590;  // Global at 0x002ac590                   // 0x001b54ec: lw $v1, 0x50($s2)
    v1 = ((unsigned)v1 < (unsigned)0x130) ? 1 : 0;              // 0x001b54f0: sltiu $v1, $v1, 0x130
    if (v1 != 0) goto label_0x1b560c;                           // 0x001b54f4: bnez $v1, 0x1b560c
    /* nop */                                                   // 0x001b54f8: nop 
    a0 = *(uint8_t*)(s5);                                       // 0x001b54fc: lbu $a0, 0($s5)
    if (a0 == 0) goto label_0x1b55f0;                           // 0x001b5500: beqz $a0, 0x1b55f0
    s5 = s5 + 1;                                                // 0x001b5504: addiu $s5, $s5, 1
    v1 = 0xa;                                                   // 0x001b5508: addiu $v1, $zero, 0xa
    if (a0 != v1) goto label_0x1b552c;                          // 0x001b550c: bne $a0, $v1, 0x1b552c
    /* nop */                                                   // 0x001b5510: nop 
    g_002ac5b0 = s4;  // Global at 0x002ac5b0                   // 0x001b5514: sw $s4, 0x70($s2)
    a0 = g_002ac5ac;  // Global at 0x002ac5ac                   // 0x001b5518: lw $a0, 0x6c($s2)
    v1 = g_002ac5b4;  // Global at 0x002ac5b4                   // 0x001b551c: lw $v1, 0x74($s2)
    v1 = v1 + a0;                                               // 0x001b5520: addu $v1, $v1, $a0
    goto label_0x1b54ec;                                        // 0x001b5524: b 0x1b54ec
    g_002ac5b4 = v1;  // Global at 0x002ac5b4                   // 0x001b5528: sw $v1, 0x74($s2)
label_0x1b552c:
    v0 = ((unsigned)a0 < (unsigned)0x80) ? 1 : 0;               // 0x001b552c: sltiu $v0, $a0, 0x80
    if (v0 != 0) goto label_0x1b5544;                           // 0x001b5530: bnez $v0, 0x1b5544
    v0 = ((unsigned)a0 < (unsigned)0xe0) ? 1 : 0;               // 0x001b5534: sltiu $v0, $a0, 0xe0
    at = ((unsigned)a0 < (unsigned)0xa0) ? 1 : 0;               // 0x001b5538: sltiu $at, $a0, 0xa0
    if (at != 0) goto label_0x1b5554;                           // 0x001b553c: bnez $at, 0x1b5554
    /* nop */                                                   // 0x001b5540: nop 
label_0x1b5544:
    if (v0 != 0) goto label_0x1b5570;                           // 0x001b5544: bnez $v0, 0x1b5570
    at = ((unsigned)a0 < (unsigned)0x100) ? 1 : 0;              // 0x001b5548: sltiu $at, $a0, 0x100
    if (at == 0) goto label_0x1b5570;                           // 0x001b554c: beqz $at, 0x1b5570
    /* nop */                                                   // 0x001b5550: nop 
label_0x1b5554:
    v1 = *(uint8_t*)(s5);                                       // 0x001b5554: lbu $v1, 0($s5)
    if (v1 == 0) goto label_0x1b55f0;                           // 0x001b5558: beqz $v1, 0x1b55f0
    s5 = s5 + 1;                                                // 0x001b555c: addiu $s5, $s5, 1
    v0 = a0 << 8;                                               // 0x001b5560: sll $v0, $a0, 8
    goto label_0x1b5580;                                        // 0x001b5568: b 0x1b5580
    v0 = v0 | v1;                                               // 0x001b556c: or $v0, $v0, $v1
label_0x1b5570:
    a1 = g_002ac548;  // Global at 0x002ac548                   // 0x001b5570: lw $a1, 8($s2)
    func_001b5e60();  // 1b5e60                                // 0x001b5574: jal 0x1b5e60
    a0 = a0 & 0xff;                                             // 0x001b5578: andi $a0, $a0, 0xff
    s3 = 1;                                                     // 0x001b557c: addiu $s3, $zero, 1
label_0x1b5580:
    a1 = g_002ac548;  // Global at 0x002ac548                   // 0x001b5580: lw $a1, 8($s2)
    func_001b5dd0();  // 1b5dd0                                // 0x001b5584: jal 0x1b5dd0
    v1 = g_002ac55c;  // Global at 0x002ac55c                   // 0x001b558c: lw $v1, 0x1c($s2)
    at = ((unsigned)a1 < (unsigned)v1) ? 1 : 0;                 // 0x001b5594: sltu $at, $a1, $v1
    if (at == 0) goto label_0x1b55d8;                           // 0x001b5598: beqz $at, 0x1b55d8
    func_001b5630();  // 1b5630                                // 0x001b55a0: jal 0x1b5630
    /* nop */                                                   // 0x001b55a4: nop 
    func_001b6a60();  // 1b6a60                                // 0x001b55b4: jal 0x1b6a60
    v1 = g_002ac590;  // Global at 0x002ac590                   // 0x001b55bc: lw $v1, 0x50($s2)
    v1 = v1 + -0x120;                                           // 0x001b55c4: addiu $v1, $v1, -0x120
    g_002ac590 = v1;  // Global at 0x002ac590                   // 0x001b55c8: sw $v1, 0x50($s2)
    v1 = g_002ac5a4;  // Global at 0x002ac5a4                   // 0x001b55cc: lw $v1, 0x64($s2)
    v1 = v1 + 1;                                                // 0x001b55d0: addiu $v1, $v1, 1
    g_002ac5a4 = v1;  // Global at 0x002ac5a4                   // 0x001b55d4: sw $v1, 0x64($s2)
label_0x1b55d8:
    a0 = g_002ac5ac;  // Global at 0x002ac5ac                   // 0x001b55d8: lw $a0, 0x6c($s2)
    v1 = g_002ac5b0;  // Global at 0x002ac5b0                   // 0x001b55dc: lw $v1, 0x70($s2)
    a0 = (unsigned)a0 >> s3;                                    // 0x001b55e0: srlv $a0, $a0, $s3
    v1 = v1 + a0;                                               // 0x001b55e4: addu $v1, $v1, $a0
    goto label_0x1b54ec;                                        // 0x001b55e8: b 0x1b54ec
    g_002ac5b0 = v1;  // Global at 0x002ac5b0                   // 0x001b55ec: sw $v1, 0x70($s2)
label_0x1b55f0:
    func_001b6d60();  // 1b6d60                                // 0x001b55f4: jal 0x1b6d60
    v1 = g_002ac590;  // Global at 0x002ac590                   // 0x001b55fc: lw $v1, 0x50($s2)
    v1 = v1 + -0x10;                                            // 0x001b5600: addiu $v1, $v1, -0x10
    g_002ac590 = v1;  // Global at 0x002ac590                   // 0x001b5604: sw $v1, 0x50($s2)
    g_002ac58c = v0;  // Global at 0x002ac58c                   // 0x001b5608: sw $v0, 0x4c($s2)
label_0x1b560c:
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001b5610: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001b5614: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b561c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b5620: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b5624: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b5628: jr $ra
    sp = sp + 0x70;                                             // 0x001b562c: addiu $sp, $sp, 0x70
}