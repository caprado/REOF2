void func_001344c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001344c0: addiu $sp, $sp, -0x20
    func_001261b8();  // 0x1261a0                                // 0x001344d4: jal 0x1261a0
    a0 = *(int32_t*)((s1) + 0xc);                               // 0x001344dc: lw $a0, 0xc($s1)
    func_0012c3c0();  // 0x12c3a8                                // 0x001344e0: jal 0x12c3a8
    a0 = *(int32_t*)((s1) + 0xc);                               // 0x001344e8: lw $a0, 0xc($s1)
    func_0012c3d8();  // 0x12c3c0                                // 0x001344ec: jal 0x12c3c0
    func_0012c9a0();  // 0x12c970                                // 0x001344f4: jal 0x12c970
    a0 = *(int32_t*)((s1) + 4);                                 // 0x001344f8: lw $a0, 4($s1)
    func_001261d0();  // 0x1261b8                                // 0x001344fc: jal 0x1261b8
    /* nop */                                                   // 0x00134500: nop 
    a0 = *(int32_t*)((s1) + 8);                                 // 0x00134504: lw $a0, 8($s1)
    if (a0 == 0) goto label_0x13452c;                           // 0x00134508: beqz $a0, 0x13452c
    /* nop */                                                   // 0x0013450c: nop 
    func_00130458();  // 0x130408                                // 0x00134510: jal 0x130408
    /* nop */                                                   // 0x00134514: nop 
    a0 = *(int32_t*)((s1) + 0x14);                              // 0x00134518: lw $a0, 0x14($s1)
    v1 = *(int32_t*)(a0);                                       // 0x0013451c: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x14);                              // 0x00134520: lw $v0, 0x14($v1)
    /* call function at address in v0 */                        // 0x00134524: jalr $v0
    /* nop */                                                   // 0x00134528: nop 
label_0x13452c:
    func_001261b8();  // 0x1261a0                                // 0x0013452c: jal 0x1261a0
    v0 = *(int8_t*)((s1) + 3);                                  // 0x00134534: lb $v0, 3($s1)
    if (v0 <= 0) goto label_0x134570;                           // 0x00134538: blezl $v0, 0x134570
    a0 = *(int32_t*)((s1) + 8);                                 // 0x0013453c: lw $a0, 8($s1)
    s0 = s1 + 0x18;                                             // 0x00134540: addiu $s0, $s1, 0x18
    a0 = *(int32_t*)(s0);                                       // 0x00134544: lw $a0, 0($s0)
    s0 = s0 + 4;                                                // 0x00134548: addiu $s0, $s0, 4
    v0 = *(int32_t*)(a0);                                       // 0x0013454c: lw $v0, 0($a0)
    v1 = *(int32_t*)((v0) + 0x14);                              // 0x00134550: lw $v1, 0x14($v0)
    /* call function at address in v1 */                        // 0x00134554: jalr $v1
    s2 = s2 + 1;                                                // 0x00134558: addiu $s2, $s2, 1
    v0 = *(int8_t*)((s1) + 3);                                  // 0x0013455c: lb $v0, 3($s1)
    v0 = (s2 < v0) ? 1 : 0;                                     // 0x00134560: slt $v0, $s2, $v0
    /* bnezl $v0, 0x134548 */                                   // 0x00134564: bnezl $v0, 0x134548
    a0 = *(int32_t*)(s0);                                       // 0x00134568: lw $a0, 0($s0)
    a0 = *(int32_t*)((s1) + 8);                                 // 0x0013456c: lw $a0, 8($s1)
label_0x134570:
    /* beqzl $a0, 0x13458c */                                   // 0x00134570: beqzl $a0, 0x13458c
    func_001302c8();  // 0x130280                                // 0x00134578: jal 0x130280
    func_00130358();  // 0x130318                                // 0x00134580: jal 0x130318
    a0 = *(int32_t*)((s1) + 8);                                 // 0x00134584: lw $a0, 8($s1)
    func_00131910();  // 0x131820                                // 0x0013458c: jal 0x131820
    a1 = *(int32_t*)((a0) + 0x14);                              // 0x00134590: lw $a1, 0x14($a0)
    return func_001261d0();  // Tail call                        // 0x001345a4: j 0x1261b8
    sp = sp + 0x20;                                             // 0x001345a8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x001345ac: nop 
    sp = sp + -0x20;                                            // 0x001345b0: addiu $sp, $sp, -0x20
    v0 = 3;                                                     // 0x001345b4: addiu $v0, $zero, 3
    s1 = *(int8_t*)((s0) + 1);                                  // 0x001345c8: lb $s1, 1($s0)
    if (s1 != v0) goto label_0x134674;                          // 0x001345cc: bnel $s1, $v0, 0x134674
    *(uint16_t*)((s0) + 0x68) = 0;                              // 0x001345d0: sh $zero, 0x68($s0)
    v0 = *(int8_t*)((s0) + 0x72);                               // 0x001345d4: lb $v0, 0x72($s0)
    /* bnezl $v0, 0x134674 */                                   // 0x001345d8: bnezl $v0, 0x134674
    *(uint16_t*)((s0) + 0x68) = 0;                              // 0x001345dc: sh $zero, 0x68($s0)
    func_0012c880();  // 0x12c878                                // 0x001345e0: jal 0x12c878
    a0 = *(int32_t*)((s0) + 4);                                 // 0x001345e4: lw $a0, 4($s0)
    if (v0 == s1) goto label_0x134674;                          // 0x001345e8: beql $v0, $s1, 0x134674
    *(uint16_t*)((s0) + 0x68) = 0;                              // 0x001345ec: sh $zero, 0x68($s0)
    func_0012d3a8();  // 0x12d3a0                                // 0x001345f0: jal 0x12d3a0
    a0 = *(int32_t*)((s0) + 4);                                 // 0x001345f4: lw $a0, 4($s0)
    v0 = *(int32_t*)((s0) + 0x64);                              // 0x001345fc: lw $v0, 0x64($s0)
    if (v0 != a2) goto label_0x134638;                          // 0x00134600: bnel $v0, $a2, 0x134638
    *(uint16_t*)((s0) + 0x68) = 0;                              // 0x00134604: sh $zero, 0x68($s0)
    a0 = *(uint16_t*)((s0) + 0x68);                             // 0x00134608: lhu $a0, 0x68($s0)
    a1 = *(int32_t*)((s0) + 0x38);                              // 0x0013460c: lw $a1, 0x38($s0)
    a0 = a0 + 1;                                                // 0x00134610: addiu $a0, $a0, 1
    v1 = a0 << 0x10;                                            // 0x00134614: sll $v1, $a0, 0x10
    v0 = a1 << 2;                                               // 0x00134618: sll $v0, $a1, 2
    v0 = v0 + a1;                                               // 0x0013461c: addu $v0, $v0, $a1
    v1 = v1 >> 0x10;                                            // 0x00134620: sra $v1, $v1, 0x10
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x00134624: slt $v0, $v0, $v1
    if (v0 == 0) goto label_0x134638;                           // 0x00134628: beqz $v0, 0x134638
    *(uint16_t*)((s0) + 0x68) = a0;                             // 0x0013462c: sh $a0, 0x68($s0)
    v0 = -2;                                                    // 0x00134630: addiu $v0, $zero, -2
    *(uint16_t*)((s0) + 0x60) = v0;                             // 0x00134634: sh $v0, 0x60($s0)
label_0x134638:
    v0 = *(int16_t*)((s0) + 0x60);                              // 0x00134638: lh $v0, 0x60($s0)
    if (v0 == 0) goto label_0x134674;                           // 0x0013463c: beqz $v0, 0x134674
    *(uint32_t*)((s0) + 0x64) = a2;                             // 0x00134640: sw $a2, 0x64($s0)
    v1 = *(uint8_t*)((s0) + 0x6d);                              // 0x00134644: lbu $v1, 0x6d($s0)
    v0 = v1 + -1;                                               // 0x00134648: addiu $v0, $v1, -1
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x0013464c: sltiu $v0, $v0, 2
    if (v0 == 0) goto label_0x134664;                           // 0x00134650: beqz $v0, 0x134664
    /* nop */                                                   // 0x00134654: nop 
    func_00131bb8();  // 0x131af8                                // 0x00134658: jal 0x131af8
    v1 = *(uint8_t*)((s0) + 0x6d);                              // 0x00134660: lbu $v1, 0x6d($s0)
label_0x134664:
    if (v1 == 0) goto label_0x134678;                           // 0x00134664: beqz $v1, 0x134678
    v0 = s1 + -1;                                               // 0x00134668: addiu $v0, $s1, -1
    *(uint16_t*)((s0) + 0x60) = 0;                              // 0x0013466c: sh $zero, 0x60($s0)
    *(uint16_t*)((s0) + 0x68) = 0;                              // 0x00134670: sh $zero, 0x68($s0)
label_0x134674:
    v0 = s1 + -1;                                               // 0x00134674: addiu $v0, $s1, -1
label_0x134678:
    v0 = ((unsigned)v0 < (unsigned)3) ? 1 : 0;                  // 0x00134678: sltiu $v0, $v0, 3
    /* beqzl $v0, 0x134780 */                                   // 0x0013467c: beqzl $v0, 0x134780
    *(uint16_t*)((s0) + 0x6a) = 0;                              // 0x00134680: sh $zero, 0x6a($s0)
    v0 = *(int8_t*)((s0) + 0x72);                               // 0x00134684: lb $v0, 0x72($s0)
    /* bnezl $v0, 0x134780 */                                   // 0x00134688: bnezl $v0, 0x134780
    *(uint16_t*)((s0) + 0x6a) = 0;                              // 0x0013468c: sh $zero, 0x6a($s0)
    func_0012c880();  // 0x12c878                                // 0x00134690: jal 0x12c878
    a0 = *(int32_t*)((s0) + 4);                                 // 0x00134694: lw $a0, 4($s0)
    v1 = 3;                                                     // 0x00134698: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x134780;                          // 0x0013469c: beql $v0, $v1, 0x134780
    *(uint16_t*)((s0) + 0x6a) = 0;                              // 0x001346a0: sh $zero, 0x6a($s0)
    a0 = *(int32_t*)((s0) + 0x14);                              // 0x001346a4: lw $a0, 0x14($s0)
    if (a0 == 0) goto label_0x1346c8;                           // 0x001346a8: beqz $a0, 0x1346c8
    v1 = *(int32_t*)(a0);                                       // 0x001346b0: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x001346b4: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x001346b8: jalr $v0
    a1 = 1;                                                     // 0x001346bc: addiu $a1, $zero, 1
    goto label_0x1346cc;                                        // 0x001346c0: b 0x1346cc
    v0 = (v0 < 0x40) ? 1 : 0;                                   // 0x001346c4: slti $v0, $v0, 0x40
label_0x1346c8:
    v0 = (v0 < 0x40) ? 1 : 0;                                   // 0x001346c8: slti $v0, $v0, 0x40
label_0x1346cc:
    /* beqzl $v0, 0x134780 */                                   // 0x001346cc: beqzl $v0, 0x134780
    *(uint16_t*)((s0) + 0x6a) = 0;                              // 0x001346d0: sh $zero, 0x6a($s0)
    v0 = *(uint16_t*)((s0) + 0x6a);                             // 0x001346d4: lhu $v0, 0x6a($s0)
    v1 = 3;                                                     // 0x001346d8: addiu $v1, $zero, 3
    v0 = v0 + 1;                                                // 0x001346dc: addiu $v0, $v0, 1
    if (s1 != v1) goto label_0x134700;                          // 0x001346e0: bne $s1, $v1, 0x134700
    *(uint16_t*)((s0) + 0x6a) = v0;                             // 0x001346e4: sh $v0, 0x6a($s0)
    a0 = *(int32_t*)((s0) + 0x38);                              // 0x001346e8: lw $a0, 0x38($s0)
    v1 = v0 << 0x10;                                            // 0x001346ec: sll $v1, $v0, 0x10
    v1 = v1 >> 0x10;                                            // 0x001346f0: sra $v1, $v1, 0x10
    v0 = a0 << 2;                                               // 0x001346f4: sll $v0, $a0, 2
    goto label_0x134718;                                        // 0x001346f8: b 0x134718
    v0 = v0 + a0;                                               // 0x001346fc: addu $v0, $v0, $a0
label_0x134700:
    a0 = *(int32_t*)((s0) + 0x38);                              // 0x00134700: lw $a0, 0x38($s0)
    v1 = v0 << 0x10;                                            // 0x00134704: sll $v1, $v0, 0x10
    v1 = v1 >> 0x10;                                            // 0x00134708: sra $v1, $v1, 0x10
    v0 = a0 << 2;                                               // 0x0013470c: sll $v0, $a0, 2
    v0 = v0 + a0;                                               // 0x00134710: addu $v0, $v0, $a0
    v0 = v0 << 2;                                               // 0x00134714: sll $v0, $v0, 2
label_0x134718:
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x00134718: slt $v0, $v0, $v1
    /* beqzl $v0, 0x134730 */                                   // 0x0013471c: beqzl $v0, 0x134730
    v0 = *(int16_t*)((s0) + 0x60);                              // 0x00134720: lh $v0, 0x60($s0)
    v0 = -1;                                                    // 0x00134724: addiu $v0, $zero, -1
    *(uint16_t*)((s0) + 0x60) = v0;                             // 0x00134728: sh $v0, 0x60($s0)
    v0 = *(int16_t*)((s0) + 0x60);                              // 0x0013472c: lh $v0, 0x60($s0)
    if (v0 == 0) goto label_0x134780;                           // 0x00134730: beqz $v0, 0x134780
    v0 = 1;                                                     // 0x00134734: addiu $v0, $zero, 1
    a0 = *(int8_t*)((s0) + 0x6d);                               // 0x00134738: lb $a0, 0x6d($s0)
    if (a0 != v0) goto label_0x134758;                          // 0x0013473c: bne $a0, $v0, 0x134758
    v1 = *(uint8_t*)((s0) + 0x6d);                              // 0x00134740: lbu $v1, 0x6d($s0)
    func_00131bb8();  // 0x131af8                                // 0x00134744: jal 0x131af8
    goto label_0x134770;                                        // 0x0013474c: b 0x134770
    v1 = *(uint8_t*)((s0) + 0x6d);                              // 0x00134750: lbu $v1, 0x6d($s0)
    /* nop */                                                   // 0x00134754: nop 
label_0x134758:
    v0 = 2;                                                     // 0x00134758: addiu $v0, $zero, 2
    if (a0 != v0) goto label_0x134770;                          // 0x0013475c: bne $a0, $v0, 0x134770
    /* nop */                                                   // 0x00134760: nop 
    func_00134800();  // 0x1344c0                                // 0x00134764: jal 0x1344c0
    v1 = *(uint8_t*)((s0) + 0x6d);                              // 0x0013476c: lbu $v1, 0x6d($s0)
label_0x134770:
    /* beqzl $v1, 0x134784 */                                   // 0x00134770: beqzl $v1, 0x134784
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00134774: lw $a0, 8($s0)
    *(uint16_t*)((s0) + 0x60) = 0;                              // 0x00134778: sh $zero, 0x60($s0)
    *(uint16_t*)((s0) + 0x6a) = 0;                              // 0x0013477c: sh $zero, 0x6a($s0)
label_0x134780:
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00134780: lw $a0, 8($s0)
    /* beqzl $a0, 0x1347ec */                                   // 0x00134784: beqzl $a0, 0x1347ec
    func_00130280();  // 0x130278                                // 0x0013478c: jal 0x130278
    /* nop */                                                   // 0x00134790: nop 
    v1 = 4;                                                     // 0x00134794: addiu $v1, $zero, 4
    if (v0 != v1) goto label_0x1347ec;                          // 0x00134798: bnel $v0, $v1, 0x1347ec
    a0 = *(int8_t*)((s0) + 0x6d);                               // 0x001347a0: lb $a0, 0x6d($s0)
    v0 = 1;                                                     // 0x001347a4: addiu $v0, $zero, 1
    if (a0 != v0) goto label_0x1347c0;                          // 0x001347a8: bne $a0, $v0, 0x1347c0
    v1 = *(uint8_t*)((s0) + 0x6d);                              // 0x001347ac: lbu $v1, 0x6d($s0)
    func_00131bb8();  // 0x131af8                                // 0x001347b0: jal 0x131af8
    goto label_0x1347d8;                                        // 0x001347b8: b 0x1347d8
    v1 = *(uint8_t*)((s0) + 0x6d);                              // 0x001347bc: lbu $v1, 0x6d($s0)
label_0x1347c0:
    v0 = 2;                                                     // 0x001347c0: addiu $v0, $zero, 2
    if (a0 != v0) goto label_0x1347d8;                          // 0x001347c4: bne $a0, $v0, 0x1347d8
    /* nop */                                                   // 0x001347c8: nop 
    func_00134800();  // 0x1344c0                                // 0x001347cc: jal 0x1344c0
    v1 = *(uint8_t*)((s0) + 0x6d);                              // 0x001347d4: lbu $v1, 0x6d($s0)
label_0x1347d8:
    /* beqzl $v1, 0x1347ec */                                   // 0x001347d8: beqzl $v1, 0x1347ec
    *(uint16_t*)((s0) + 0x6a) = 0;                              // 0x001347e0: sh $zero, 0x6a($s0)
    *(uint16_t*)((s0) + 0x60) = 0;                              // 0x001347e4: sh $zero, 0x60($s0)
label_0x1347ec:
    return;                                                     // 0x001347f4: jr $ra
    sp = sp + 0x20;                                             // 0x001347f8: addiu $sp, $sp, 0x20
}