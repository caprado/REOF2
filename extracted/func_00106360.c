void func_00106360() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x00106360: addiu $sp, $sp, -0x50
    s2 = *(int32_t*)((s6) + 8);                                 // 0x00106390: lw $s2, 8($s6)
    if (s2 == 0) goto label_0x106714;                           // 0x00106394: beqz $s2, 0x106714
    v1 = *(uint16_t*)((s1) + 0xc);                              // 0x0010639c: lhu $v1, 0xc($s1)
    v0 = v1 & 8;                                                // 0x001063a0: andi $v0, $v1, 8
    if (v0 == 0) goto label_0x1063b8;                           // 0x001063a4: beqz $v0, 0x1063b8
    /* nop */                                                   // 0x001063a8: nop 
    v0 = *(int32_t*)((s1) + 0x10);                              // 0x001063ac: lw $v0, 0x10($s1)
    if (v0 != 0) goto label_0x1063d0;                           // 0x001063b0: bnez $v0, 0x1063d0
    v0 = v1 & 2;                                                // 0x001063b4: andi $v0, $v1, 2
label_0x1063b8:
    func_0010f748();  // 0x10f638                                // 0x001063b8: jal 0x10f638
    /* nop */                                                   // 0x001063bc: nop 
    if (v0 != 0) goto label_0x106714;                           // 0x001063c0: bnez $v0, 0x106714
    v0 = -1;                                                    // 0x001063c4: addiu $v0, $zero, -1
    v1 = *(uint16_t*)((s1) + 0xc);                              // 0x001063c8: lhu $v1, 0xc($s1)
    v0 = v1 & 2;                                                // 0x001063cc: andi $v0, $v1, 2
label_0x1063d0:
    s4 = *(int32_t*)(s6);                                       // 0x001063d0: lw $s4, 0($s6)
    if (v0 == 0) goto label_0x106450;                           // 0x001063d4: beqz $v0, 0x106450
    s5 = 0x400;                                                 // 0x001063dc: addiu $s5, $zero, 0x400
label_0x1063e0:
    /* bnezl $s2, 0x106408 */                                   // 0x001063e0: bnezl $s2, 0x106408
    v1 = ((unsigned)s2 < (unsigned)0x401) ? 1 : 0;              // 0x001063e4: sltiu $v1, $s2, 0x401
label_0x1063e8:
    s2 = *(int32_t*)((s4) + 4);                                 // 0x001063e8: lw $s2, 4($s4)
    s3 = *(int32_t*)(s4);                                       // 0x001063ec: lw $s3, 0($s4)
    /* nop */                                                   // 0x001063f0: nop 
    /* nop */                                                   // 0x001063f4: nop 
    /* nop */                                                   // 0x001063f8: nop 
    if (s2 == 0) goto label_0x1063e8;                           // 0x001063fc: beqz $s2, 0x1063e8
    s4 = s4 + 8;                                                // 0x00106400: addiu $s4, $s4, 8
    v1 = ((unsigned)s2 < (unsigned)0x401) ? 1 : 0;              // 0x00106404: sltiu $v1, $s2, 0x401
    v0 = *(int32_t*)((s1) + 0x24);                              // 0x00106408: lw $v0, 0x24($s1)
    a0 = *(int32_t*)((s1) + 0x1c);                              // 0x0010640c: lw $a0, 0x1c($s1)
    if (v1 != 0) a2 = s2;                                       // 0x00106414: movn $a2, $s2, $v1
    /* call function at address in v0 */                        // 0x00106418: jalr $v0
    if (s0 <= 0) goto label_0x106708;                           // 0x00106424: blezl $s0, 0x106708
    v1 = *(uint16_t*)((s1) + 0xc);                              // 0x00106428: lhu $v1, 0xc($s1)
    v0 = *(int32_t*)((s6) + 8);                                 // 0x0010642c: lw $v0, 8($s6)
    s3 = s3 + s0;                                               // 0x00106430: addu $s3, $s3, $s0
    s2 = s2 - s0;                                               // 0x00106434: subu $s2, $s2, $s0
    v0 = v0 - s0;                                               // 0x00106438: subu $v0, $v0, $s0
    if (v0 != 0) goto label_0x1063e0;                           // 0x0010643c: bnez $v0, 0x1063e0
    *(uint32_t*)((s6) + 8) = v0;                                // 0x00106440: sw $v0, 8($s6)
    goto label_0x106714;                                        // 0x00106444: b 0x106714
    /* nop */                                                   // 0x0010644c: nop 
label_0x106450:
    v0 = v1 & 1;                                                // 0x00106450: andi $v0, $v1, 1
    if (v0 != 0) goto label_0x1065a0;                           // 0x00106454: bnez $v0, 0x1065a0
    goto label_0x106470;                                        // 0x0010645c: b 0x106470
    /* nop */                                                   // 0x00106460: nop 
    /* nop */                                                   // 0x00106464: nop 
label_0x106468:
    v1 = *(uint16_t*)((s1) + 0xc);                              // 0x00106468: lhu $v1, 0xc($s1)
    /* nop */                                                   // 0x0010646c: nop 
label_0x106470:
    if (s2 != 0) goto label_0x106498;                           // 0x00106470: bnez $s2, 0x106498
    v0 = v1 & 0x200;                                            // 0x00106474: andi $v0, $v1, 0x200
label_0x106478:
    s2 = *(int32_t*)((s4) + 4);                                 // 0x00106478: lw $s2, 4($s4)
    s3 = *(int32_t*)(s4);                                       // 0x0010647c: lw $s3, 0($s4)
    /* nop */                                                   // 0x00106480: nop 
    /* nop */                                                   // 0x00106484: nop 
    /* nop */                                                   // 0x00106488: nop 
    if (s2 == 0) goto label_0x106478;                           // 0x0010648c: beqz $s2, 0x106478
    s4 = s4 + 8;                                                // 0x00106490: addiu $s4, $s4, 8
    v0 = v1 & 0x200;                                            // 0x00106494: andi $v0, $v1, 0x200
label_0x106498:
    if (v0 == 0) goto label_0x1064d0;                           // 0x00106498: beqz $v0, 0x1064d0
    s0 = *(int32_t*)((s1) + 8);                                 // 0x0010649c: lw $s0, 8($s1)
    v0 = ((unsigned)s2 < (unsigned)s0) ? 1 : 0;                 // 0x001064a0: sltu $v0, $s2, $s0
    a0 = *(int32_t*)(s1);                                       // 0x001064a4: lw $a0, 0($s1)
    if (v0 != 0) s0 = s2;                                       // 0x001064a8: movn $s0, $s2, $v0
    func_00107c70();  // 0x107b68                                // 0x001064b0: jal 0x107b68
    v1 = *(int32_t*)((s1) + 8);                                 // 0x001064b8: lw $v1, 8($s1)
    v0 = *(int32_t*)(s1);                                       // 0x001064bc: lw $v0, 0($s1)
    v1 = v1 - s0;                                               // 0x001064c0: subu $v1, $v1, $s0
    v0 = v0 + s0;                                               // 0x001064c4: addu $v0, $v0, $s0
    goto label_0x106574;                                        // 0x001064c8: b 0x106574
label_0x1064d0:
    a0 = *(int32_t*)(s1);                                       // 0x001064d0: lw $a0, 0($s1)
    v0 = *(int32_t*)((s1) + 0x10);                              // 0x001064d4: lw $v0, 0x10($s1)
    v0 = ((unsigned)v0 < (unsigned)a0) ? 1 : 0;                 // 0x001064d8: sltu $v0, $v0, $a0
    /* beqzl $v0, 0x106520 */                                   // 0x001064dc: beqzl $v0, 0x106520
    s0 = *(int32_t*)((s1) + 0x14);                              // 0x001064e0: lw $s0, 0x14($s1)
    v0 = ((unsigned)s0 < (unsigned)s2) ? 1 : 0;                 // 0x001064e4: sltu $v0, $s0, $s2
    /* beqzl $v0, 0x106520 */                                   // 0x001064e8: beqzl $v0, 0x106520
    s0 = *(int32_t*)((s1) + 0x14);                              // 0x001064ec: lw $s0, 0x14($s1)
    func_00107c70();  // 0x107b68                                // 0x001064f4: jal 0x107b68
    v1 = *(int32_t*)(s1);                                       // 0x001064fc: lw $v1, 0($s1)
    v1 = v1 + s0;                                               // 0x00106504: addu $v1, $v1, $s0
    func_001051d0();  // 0x1050b8                                // 0x00106508: jal 0x1050b8
    *(uint32_t*)(s1) = v1;                                      // 0x0010650c: sw $v1, 0($s1)
    /* beqzl $v0, 0x106580 */                                   // 0x00106510: beqzl $v0, 0x106580
    v0 = *(int32_t*)((s6) + 8);                                 // 0x00106514: lw $v0, 8($s6)
    goto label_0x106708;                                        // 0x00106518: b 0x106708
    v1 = *(uint16_t*)((s1) + 0xc);                              // 0x0010651c: lhu $v1, 0xc($s1)
    v0 = ((unsigned)s2 < (unsigned)s0) ? 1 : 0;                 // 0x00106520: sltu $v0, $s2, $s0
    /* bnezl $v0, 0x106558 */                                   // 0x00106524: bnezl $v0, 0x106558
    v0 = *(int32_t*)((s1) + 0x24);                              // 0x0010652c: lw $v0, 0x24($s1)
    a0 = *(int32_t*)((s1) + 0x1c);                              // 0x00106534: lw $a0, 0x1c($s1)
    /* call function at address in v0 */                        // 0x00106538: jalr $v0
    if (s0 > 0) goto label_0x106580;                            // 0x00106544: bgtzl $s0, 0x106580
    v0 = *(int32_t*)((s6) + 8);                                 // 0x00106548: lw $v0, 8($s6)
    goto label_0x106708;                                        // 0x0010654c: b 0x106708
    v1 = *(uint16_t*)((s1) + 0xc);                              // 0x00106550: lhu $v1, 0xc($s1)
    /* nop */                                                   // 0x00106554: nop 
    func_00107c70();  // 0x107b68                                // 0x0010655c: jal 0x107b68
    v1 = *(int32_t*)((s1) + 8);                                 // 0x00106564: lw $v1, 8($s1)
    v0 = *(int32_t*)(s1);                                       // 0x00106568: lw $v0, 0($s1)
    v1 = v1 - s0;                                               // 0x0010656c: subu $v1, $v1, $s0
    v0 = v0 + s0;                                               // 0x00106570: addu $v0, $v0, $s0
label_0x106574:
    *(uint32_t*)((s1) + 8) = v1;                                // 0x00106574: sw $v1, 8($s1)
    *(uint32_t*)(s1) = v0;                                      // 0x00106578: sw $v0, 0($s1)
    v0 = *(int32_t*)((s6) + 8);                                 // 0x0010657c: lw $v0, 8($s6)
label_0x106580:
    s3 = s3 + s0;                                               // 0x00106580: addu $s3, $s3, $s0
    s2 = s2 - s0;                                               // 0x00106584: subu $s2, $s2, $s0
    v0 = v0 - s0;                                               // 0x00106588: subu $v0, $v0, $s0
    if (v0 != 0) goto label_0x106468;                           // 0x0010658c: bnez $v0, 0x106468
    *(uint32_t*)((s6) + 8) = v0;                                // 0x00106590: sw $v0, 8($s6)
    goto label_0x106714;                                        // 0x00106594: b 0x106714
    /* nop */                                                   // 0x0010659c: nop 
label_0x1065a0:
    if (s2 != 0) goto label_0x1065cc;                           // 0x001065a0: bnez $s2, 0x1065cc
    /* nop */                                                   // 0x001065a4: nop 
    /* nop */                                                   // 0x001065ac: nop 
label_0x1065b0:
    s2 = *(int32_t*)((s4) + 4);                                 // 0x001065b0: lw $s2, 4($s4)
    s3 = *(int32_t*)(s4);                                       // 0x001065b4: lw $s3, 0($s4)
    /* nop */                                                   // 0x001065b8: nop 
    /* nop */                                                   // 0x001065bc: nop 
    /* nop */                                                   // 0x001065c0: nop 
    if (s2 == 0) goto label_0x1065b0;                           // 0x001065c4: beqz $s2, 0x1065b0
    s4 = s4 + 8;                                                // 0x001065c8: addiu $s4, $s4, 8
label_0x1065cc:
    /* bnezl $s7, 0x106604 */                                   // 0x001065cc: bnezl $s7, 0x106604
    t0 = *(int32_t*)(s1);                                       // 0x001065d0: lw $t0, 0($s1)
    a1 = 0xa;                                                   // 0x001065d8: addiu $a1, $zero, 0xa
    func_00107a20();  // 0x107940                                // 0x001065dc: jal 0x107940
    if (v0 == 0) goto label_0x1065f8;                           // 0x001065e4: beqz $v0, 0x1065f8
    v0 = v0 - s3;                                               // 0x001065e8: subu $v0, $v0, $s3
    goto label_0x1065fc;                                        // 0x001065ec: b 0x1065fc
    s5 = v0 + 1;                                                // 0x001065f0: addiu $s5, $v0, 1
    /* nop */                                                   // 0x001065f4: nop 
label_0x1065f8:
    s5 = s2 + 1;                                                // 0x001065f8: addiu $s5, $s2, 1
label_0x1065fc:
    s7 = 1;                                                     // 0x001065fc: addiu $s7, $zero, 1
    t0 = *(int32_t*)(s1);                                       // 0x00106600: lw $t0, 0($s1)
    v0 = ((unsigned)s2 < (unsigned)s5) ? 1 : 0;                 // 0x00106604: sltu $v0, $s2, $s5
    v1 = *(int32_t*)((s1) + 0x10);                              // 0x00106608: lw $v1, 0x10($s1)
    a0 = *(int32_t*)((s1) + 8);                                 // 0x00106610: lw $a0, 8($s1)
    if (v0 == 0) a1 = s5;                                       // 0x00106614: movz $a1, $s5, $v0
    a3 = *(int32_t*)((s1) + 0x14);                              // 0x00106618: lw $a3, 0x14($s1)
    v1 = ((unsigned)v1 < (unsigned)t0) ? 1 : 0;                 // 0x0010661c: sltu $v1, $v1, $t0
    if (v1 == 0) goto label_0x106668;                           // 0x00106620: beqz $v1, 0x106668
    s0 = a0 + a3;                                               // 0x00106624: addu $s0, $a0, $a3
    v0 = (s0 < a1) ? 1 : 0;                                     // 0x00106628: slt $v0, $s0, $a1
    /* beqzl $v0, 0x10666c */                                   // 0x0010662c: beqzl $v0, 0x10666c
    func_00107c70();  // 0x107b68                                // 0x0010663c: jal 0x107b68
    v1 = *(int32_t*)(s1);                                       // 0x00106644: lw $v1, 0($s1)
    v1 = v1 + s0;                                               // 0x0010664c: addu $v1, $v1, $s0
    func_001051d0();  // 0x1050b8                                // 0x00106650: jal 0x1050b8
    *(uint32_t*)(s1) = v1;                                      // 0x00106654: sw $v1, 0($s1)
    if (v0 == 0) goto label_0x1066cc;                           // 0x00106658: beqz $v0, 0x1066cc
    s5 = s5 - s0;                                               // 0x0010665c: subu $s5, $s5, $s0
    goto label_0x106708;                                        // 0x00106660: b 0x106708
    v1 = *(uint16_t*)((s1) + 0xc);                              // 0x00106664: lhu $v1, 0xc($s1)
label_0x106668:
    v0 = (a1 < s0) ? 1 : 0;                                     // 0x0010666c: slt $v0, $a1, $s0
    /* bnezl $v0, 0x1066a0 */                                   // 0x00106670: bnezl $v0, 0x1066a0
    v0 = *(int32_t*)((s1) + 0x24);                              // 0x00106678: lw $v0, 0x24($s1)
    a0 = *(int32_t*)((s1) + 0x1c);                              // 0x00106680: lw $a0, 0x1c($s1)
    /* call function at address in v0 */                        // 0x00106684: jalr $v0
    if (s0 > 0) goto label_0x1066cc;                            // 0x00106690: bgtz $s0, 0x1066cc
    s5 = s5 - s0;                                               // 0x00106694: subu $s5, $s5, $s0
    goto label_0x106708;                                        // 0x00106698: b 0x106708
    v1 = *(uint16_t*)((s1) + 0xc);                              // 0x0010669c: lhu $v1, 0xc($s1)
    func_00107c70();  // 0x107b68                                // 0x001066a8: jal 0x107b68
    v1 = *(int32_t*)((s1) + 8);                                 // 0x001066b0: lw $v1, 8($s1)
    v0 = *(int32_t*)(s1);                                       // 0x001066b4: lw $v0, 0($s1)
    v1 = v1 - s0;                                               // 0x001066b8: subu $v1, $v1, $s0
    v0 = v0 + s0;                                               // 0x001066bc: addu $v0, $v0, $s0
    *(uint32_t*)((s1) + 8) = v1;                                // 0x001066c0: sw $v1, 8($s1)
    *(uint32_t*)(s1) = v0;                                      // 0x001066c4: sw $v0, 0($s1)
    s5 = s5 - s0;                                               // 0x001066c8: subu $s5, $s5, $s0
label_0x1066cc:
    /* bnezl $s5, 0x1066ec */                                   // 0x001066cc: bnezl $s5, 0x1066ec
    v0 = *(int32_t*)((s6) + 8);                                 // 0x001066d0: lw $v0, 8($s6)
    func_001051d0();  // 0x1050b8                                // 0x001066d4: jal 0x1050b8
    /* bnezl $v0, 0x106708 */                                   // 0x001066dc: bnezl $v0, 0x106708
    v1 = *(uint16_t*)((s1) + 0xc);                              // 0x001066e0: lhu $v1, 0xc($s1)
    v0 = *(int32_t*)((s6) + 8);                                 // 0x001066e8: lw $v0, 8($s6)
    s3 = s3 + s0;                                               // 0x001066ec: addu $s3, $s3, $s0
    s2 = s2 - s0;                                               // 0x001066f0: subu $s2, $s2, $s0
    v0 = v0 - s0;                                               // 0x001066f4: subu $v0, $v0, $s0
    if (v0 != 0) goto label_0x1065a0;                           // 0x001066f8: bnez $v0, 0x1065a0
    *(uint32_t*)((s6) + 8) = v0;                                // 0x001066fc: sw $v0, 8($s6)
    goto label_0x106714;                                        // 0x00106700: b 0x106714
label_0x106708:
    v0 = -1;                                                    // 0x00106708: addiu $v0, $zero, -1
    v1 = v1 | 0x40;                                             // 0x0010670c: ori $v1, $v1, 0x40
    *(uint16_t*)((s1) + 0xc) = v1;                              // 0x00106710: sh $v1, 0xc($s1)
label_0x106714:
    return;                                                     // 0x00106738: jr $ra
    sp = sp + 0x50;                                             // 0x0010673c: addiu $sp, $sp, 0x50
}