void func_001304c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_10, local_14;
    
    sp = sp + -0x50;                                            // 0x001304c0: addiu $sp, $sp, -0x50
    s1 = 1;                                                     // 0x001304cc: addiu $s1, $zero, 1
    a0 = *(int32_t*)((s3) + 8);                                 // 0x001304e4: lw $a0, 8($s3)
    func_00135c10();  // 135c10                                // 0x001304e8: jal 0x135c10
    s4 = *(int32_t*)((s3) + 4);                                 // 0x001304ec: lw $s4, 4($s3)
    func_00141390();  // 141390                                // 0x001304f0: jal 0x141390
    v0 = *(int8_t*)((s3) + 2);                                  // 0x001304f8: lb $v0, 2($s3)
    if (v0 != s1) goto label_0x130668;                          // 0x001304fc: bnel $v0, $s1, 0x130668
    *(uint8_t*)((s3) + 2) = s1;                                 // 0x00130500: sb $s1, 2($s3)
    if (s0 != s1) goto label_0x130620;                          // 0x00130504: bnel $s0, $s1, 0x130620
    v0 = 3;                                                     // 0x00130508: addiu $v0, $zero, 3
    *(uint8_t*)((s3) + 2) = 0;                                  // 0x0013050c: sb $zero, 2($s3)
    func_001413a8();  // 1413a8                                // 0x00130510: jal 0x1413a8
    s2 = s3 + 0x20;                                             // 0x00130514: addiu $s2, $s3, 0x20
    s0 = *(int32_t*)((s3) + 0x1c);                              // 0x00130518: lw $s0, 0x1c($s3)
    s1 = sp + 0x10;                                             // 0x0013051c: addiu $s1, $sp, 0x10
    s0 = s0 << 0xb;                                             // 0x00130524: sll $s0, $s0, 0xb
    func_001404a0();  // 1404a0                                // 0x00130530: jal 0x1404a0
    v1 = *(int32_t*)(s4);                                       // 0x00130538: lw $v1, 0($s4)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x00130544: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x00130548: jalr $v0
    a1 = 1;                                                     // 0x0013054c: addiu $a1, $zero, 1
    v1 = *(int32_t*)(s4);                                       // 0x00130550: lw $v1, 0($s4)
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x0013055c: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x00130560: jalr $v0
    a2 = *(int32_t*)((s3) + 0x54);                              // 0x00130568: lw $a2, 0x54($s3)
    v0 = *(int32_t*)((s3) + 0x10);                              // 0x0013056c: lw $v0, 0x10($s3)
    a1 = *(int32_t*)((s3) + 0x30);                              // 0x00130570: lw $a1, 0x30($s3)
    a0 = (v0 < 0) ? 1 : 0;                                      // 0x00130574: slti $a0, $v0, 0
    a3 = v0 + 0x7ff;                                            // 0x00130578: addiu $a3, $v0, 0x7ff
    t0 = *(int32_t*)((s3) + 0x1c);                              // 0x00130580: lw $t0, 0x1c($s3)
    if (a0 != 0) v1 = a3;                                       // 0x00130584: movn $v1, $a3, $a0
    t1 = *(int32_t*)((s3) + 0x2c);                              // 0x00130588: lw $t1, 0x2c($s3)
    v1 = v1 >> 0xb;                                             // 0x0013058c: sra $v1, $v1, 0xb
    a1 = a1 + s0;                                               // 0x00130590: addu $a1, $a1, $s0
    a0 = v1 << 0xb;                                             // 0x00130594: sll $a0, $v1, 0xb
    a2 = a2 + t0;                                               // 0x00130598: addu $a2, $a2, $t0
    v0 = v0 - a0;                                               // 0x0013059c: subu $v0, $v0, $a0
    *(uint32_t*)((s3) + 0x30) = a1;                             // 0x001305a0: sw $a1, 0x30($s3)
    v0 = (0 < v0) ? 1 : 0;                                      // 0x001305a4: slt $v0, $zero, $v0
    *(uint32_t*)(s2) = 0;                                       // 0x001305a8: sw $zero, 0($s2)
    s0 = v1 + v0;                                               // 0x001305ac: addu $s0, $v1, $v0
    *(uint32_t*)((s3) + 0x54) = a2;                             // 0x001305b0: sw $a2, 0x54($s3)
    if (a2 != t1) goto label_0x1305d0;                          // 0x001305b4: bne $a2, $t1, 0x1305d0
    *(uint32_t*)((s3) + 0x24) = 0;                              // 0x001305b8: sw $zero, 0x24($s3)
    v0 = *(int32_t*)((s3) + 0x34);                              // 0x001305bc: lw $v0, 0x34($s3)
    /* beqzl $v0, 0x1305d4 */                                   // 0x001305c0: beqzl $v0, 0x1305d4
    v0 = *(int32_t*)((s3) + 0x54);                              // 0x001305c4: lw $v0, 0x54($s3)
    /* call function at address in v0 */                        // 0x001305c8: jalr $v0
    a0 = *(int32_t*)((s3) + 0x38);                              // 0x001305cc: lw $a0, 0x38($s3)
label_0x1305d0:
    v0 = *(int32_t*)((s3) + 0x54);                              // 0x001305d0: lw $v0, 0x54($s3)
    v0 = (v0 < s0) ? 1 : 0;                                     // 0x001305d4: slt $v0, $v0, $s0
    if (v0 == 0) goto label_0x130610;                           // 0x001305d8: beqz $v0, 0x130610
    v0 = 3;                                                     // 0x001305dc: addiu $v0, $zero, 3
    v0 = *(int32_t*)((s3) + 0x30);                              // 0x001305e0: lw $v0, 0x30($s3)
    v1 = *(int32_t*)((s3) + 0x58);                              // 0x001305e4: lw $v1, 0x58($s3)
    v0 = (unsigned)v0 >> 0xb;                                   // 0x001305e8: srl $v0, $v0, 0xb
    v0 = ((unsigned)v0 < (unsigned)v1) ? 1 : 0;                 // 0x001305ec: sltu $v0, $v0, $v1
    /* bnezl $v0, 0x130818 */                                   // 0x001305f0: bnezl $v0, 0x130818
    *(uint8_t*)((s3) + 3) = 0;                                  // 0x001305f4: sb $zero, 3($s3)
    v0 = 0xf << 16;                                             // 0x001305f8: lui $v0, 0xf
    v0 = v0 | 0xfffe;                                           // 0x001305fc: ori $v0, $v0, 0xfffe
    v0 = ((unsigned)v0 < (unsigned)v1) ? 1 : 0;                 // 0x00130600: sltu $v0, $v0, $v1
    /* bnezl $v0, 0x130818 */                                   // 0x00130604: bnezl $v0, 0x130818
    *(uint8_t*)((s3) + 3) = 0;                                  // 0x00130608: sb $zero, 3($s3)
    v0 = 3;                                                     // 0x0013060c: addiu $v0, $zero, 3
label_0x130610:
    *(uint8_t*)((s3) + 1) = v0;                                 // 0x00130610: sb $v0, 1($s3)
    goto label_0x130818;                                        // 0x00130614: b 0x130818
    *(uint8_t*)((s3) + 3) = 0;                                  // 0x00130618: sb $zero, 3($s3)
    /* nop */                                                   // 0x0013061c: nop 
label_0x130620:
    if (s0 != v0) goto label_0x130658;                          // 0x00130620: bne $s0, $v0, 0x130658
    /* nop */                                                   // 0x00130624: nop 
    *(uint8_t*)((s3) + 2) = 0;                                  // 0x00130628: sb $zero, 2($s3)
    func_001413a8();  // 1413a8                                // 0x0013062c: jal 0x1413a8
    s0 = s3 + 0x20;                                             // 0x00130630: addiu $s0, $s3, 0x20
    v1 = *(int32_t*)(s4);                                       // 0x00130634: lw $v1, 0($s4)
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x00130640: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x00130644: jalr $v0
    *(uint32_t*)(s0) = 0;                                       // 0x0013064c: sw $zero, 0($s0)
    goto label_0x1307e4;                                        // 0x00130650: b 0x1307e4
    *(uint32_t*)((s3) + 0x24) = 0;                              // 0x00130654: sw $zero, 0x24($s3)
label_0x130658:
    func_001413a8();  // 1413a8                                // 0x00130658: jal 0x1413a8
    /* nop */                                                   // 0x0013065c: nop 
    goto label_0x13081c;                                        // 0x00130660: b 0x13081c
label_0x130668:
    *(uint32_t*)((s3) + 0x20) = 0;                              // 0x00130668: sw $zero, 0x20($s3)
    func_001413a8();  // 1413a8                                // 0x0013066c: jal 0x1413a8
    *(uint32_t*)((s3) + 0x24) = 0;                              // 0x00130670: sw $zero, 0x24($s3)
    v0 = *(int8_t*)((s3) + 0x40);                               // 0x00130674: lb $v0, 0x40($s3)
    if (v0 == s1) goto label_0x130818;                          // 0x00130678: beql $v0, $s1, 0x130818
    *(uint8_t*)((s3) + 2) = 0;                                  // 0x0013067c: sb $zero, 2($s3)
    v0 = *(int8_t*)((s3) + 0x44);                               // 0x00130680: lb $v0, 0x44($s3)
    if (v0 == s1) goto label_0x130818;                          // 0x00130684: beql $v0, $s1, 0x130818
    *(uint8_t*)((s3) + 2) = 0;                                  // 0x00130688: sb $zero, 2($s3)
    v0 = *(int32_t*)((s3) + 0x10);                              // 0x0013068c: lw $v0, 0x10($s3)
    if (v0 != 0) goto label_0x1306a8;                           // 0x00130690: bnez $v0, 0x1306a8
    v0 = 3;                                                     // 0x00130694: addiu $v0, $zero, 3
    *(uint8_t*)((s3) + 2) = 0;                                  // 0x00130698: sb $zero, 2($s3)
    *(uint8_t*)((s3) + 1) = v0;                                 // 0x0013069c: sb $v0, 1($s3)
    goto label_0x130818;                                        // 0x001306a0: b 0x130818
    *(uint32_t*)((s3) + 0x1c) = 0;                              // 0x001306a4: sw $zero, 0x1c($s3)
label_0x1306a8:
    if (s4 == 0) goto label_0x1306bc;                           // 0x001306a8: beqz $s4, 0x1306bc
    /* nop */                                                   // 0x001306ac: nop 
    v0 = *(int32_t*)(s4);                                       // 0x001306b0: lw $v0, 0($s4)
    /* bnezl $v0, 0x1306d0 */                                   // 0x001306b4: bnezl $v0, 0x1306d0
    v0 = g_000f0024;  // Global at 0x000f0024                   // 0x001306b8: lw $v0, 0x24($v0)
label_0x1306bc:
    func_001304a8();  // 1304a8                                // 0x001306bc: jal 0x1304a8
    *(uint8_t*)((s3) + 2) = 0;                                  // 0x001306c0: sb $zero, 2($s3)
    goto label_0x13081c;                                        // 0x001306c4: b 0x13081c
    /* nop */                                                   // 0x001306cc: nop 
    /* call function at address in v0 */                        // 0x001306d4: jalr $v0
    v1 = *(int32_t*)((s3) + 0x3c);                              // 0x001306dc: lw $v1, 0x3c($s3)
    a0 = *(int32_t*)((s3) + 0x18);                              // 0x001306e0: lw $a0, 0x18($s3)
    v1 = v1 - v0;                                               // 0x001306e4: subu $v1, $v1, $v0
    v1 = (v1 < a0) ? 1 : 0;                                     // 0x001306e8: slt $v1, $v1, $a0
    /* bnezl $v1, 0x130700 */                                   // 0x001306ec: bnezl $v1, 0x130700
    v1 = *(int32_t*)(s4);                                       // 0x001306f0: lw $v1, 0($s4)
    goto label_0x130818;                                        // 0x001306f4: b 0x130818
    *(uint8_t*)((s3) + 2) = 0;                                  // 0x001306f8: sb $zero, 2($s3)
    /* nop */                                                   // 0x001306fc: nop 
    a3 = sp + 0x10;                                             // 0x00130700: addiu $a3, $sp, 0x10
    a2 = *(int32_t*)((s3) + 0x14);                              // 0x00130704: lw $a2, 0x14($s3)
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x0013070c: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x00130710: jalr $v0
    a3 = *(int32_t*)((s3) + 0x2c);                              // 0x00130718: lw $a3, 0x2c($s3)
    a0 = local_14;                                              // 0x0013071c: lw $a0, 0x14($sp)
    v0 = *(int32_t*)((s3) + 0x10);                              // 0x00130724: lw $v0, 0x10($s3)
    t2 = *(int32_t*)((s3) + 0x54);                              // 0x00130728: lw $t2, 0x54($s3)
    t0 = a0 + 0x7ff;                                            // 0x0013072c: addiu $t0, $a0, 0x7ff
    a1 = (a0 < 0) ? 1 : 0;                                      // 0x00130730: slti $a1, $a0, 0
    t1 = v0 + 0x7ff;                                            // 0x00130734: addiu $t1, $v0, 0x7ff
    if (a1 != 0) a0 = t0;                                       // 0x00130738: movn $a0, $t0, $a1
    a1 = *(int32_t*)((s3) + 0xc);                               // 0x0013073c: lw $a1, 0xc($s3)
    v1 = (v0 < 0) ? 1 : 0;                                      // 0x00130740: slti $v1, $v0, 0
    a3 = a3 - t2;                                               // 0x00130744: subu $a3, $a3, $t2
    if (v1 != 0) v0 = t1;                                       // 0x00130748: movn $v0, $t1, $v1
    a0 = a0 >> 0xb;                                             // 0x0013074c: sra $a0, $a0, 0xb
    v1 = (a0 < a3) ? 1 : 0;                                     // 0x00130750: slt $v1, $a0, $a3
    v0 = v0 >> 0xb;                                             // 0x00130754: sra $v0, $v0, 0xb
    if (v1 != 0) a3 = a0;                                       // 0x00130758: movn $a3, $a0, $v1
    a0 = *(int32_t*)((s3) + 8);                                 // 0x0013075c: lw $a0, 8($s3)
    v0 = v0 - t2;                                               // 0x00130760: subu $v0, $v0, $t2
    s0 = *(int32_t*)((s3) + 0x28);                              // 0x00130764: lw $s0, 0x28($s3)
    v1 = (a3 < v0) ? 1 : 0;                                     // 0x00130768: slt $v1, $a3, $v0
    a1 = a1 + t2;                                               // 0x0013076c: addu $a1, $a1, $t2
    if (v1 != 0) v0 = a3;                                       // 0x00130770: movn $v0, $a3, $v1
    v1 = (v0 < s0) ? 1 : 0;                                     // 0x00130774: slt $v1, $v0, $s0
    func_00135a20();  // 135a20                                // 0x00130778: jal 0x135a20
    if (v1 != 0) s0 = v0;                                       // 0x0013077c: movn $s0, $v0, $v1
    a2 = local_10;                                              // 0x00130780: lw $a2, 0x10($sp)
    func_00135a88();  // 135a88                                // 0x00130788: jal 0x135a88
    a0 = *(int32_t*)((s3) + 8);                                 // 0x0013078c: lw $a0, 8($s3)
    a0 = local_14;                                              // 0x00130790: lw $a0, 0x14($sp)
    v1 = local_10;                                              // 0x00130794: lw $v1, 0x10($sp)
    *(uint32_t*)((s3) + 0x24) = a0;                             // 0x00130798: sw $a0, 0x24($s3)
    *(uint32_t*)((s3) + 0x20) = v1;                             // 0x0013079c: sw $v1, 0x20($s3)
    if (v0 > 0) goto label_0x130818;                            // 0x001307a0: bgtz $v0, 0x130818
    *(uint32_t*)((s3) + 0x1c) = v0;                             // 0x001307a4: sw $v0, 0x1c($s3)
    v1 = *(int32_t*)(s4);                                       // 0x001307a8: lw $v1, 0($s4)
    s0 = s3 + 0x20;                                             // 0x001307ac: addiu $s0, $s3, 0x20
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x001307b8: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x001307bc: jalr $v0
    *(uint32_t*)(s0) = 0;                                       // 0x001307c4: sw $zero, 0($s0)
    *(uint32_t*)((s3) + 0x24) = 0;                              // 0x001307c8: sw $zero, 0x24($s3)
    *(uint8_t*)((s3) + 2) = 0;                                  // 0x001307cc: sb $zero, 2($s3)
    func_00135c10();  // 135c10                                // 0x001307d0: jal 0x135c10
    a0 = *(int32_t*)((s3) + 8);                                 // 0x001307d4: lw $a0, 8($s3)
    v1 = 3;                                                     // 0x001307d8: addiu $v1, $zero, 3
    if (v0 != v1) goto label_0x13081c;                          // 0x001307dc: bne $v0, $v1, 0x13081c
label_0x1307e4:
    v0 = 0x20 << 16;                                            // 0x001307e4: lui $v0, 0x20
    v1 = g_00200eb4;  // Global at 0x00200eb4                   // 0x001307e8: lw $v1, 0xeb4($v0)
    if (v1 < 0) goto label_0x13081c;                            // 0x001307ec: bltz $v1, 0x13081c
    v0 = *(int8_t*)((s3) + 3);                                  // 0x001307f4: lb $v0, 3($s3)
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x001307f8: slt $v0, $v0, $v1
    if (v0 != 0) goto label_0x130810;                           // 0x001307fc: bnez $v0, 0x130810
    a0 = *(uint8_t*)((s3) + 3);                                 // 0x00130800: lbu $a0, 3($s3)
    v0 = 4;                                                     // 0x00130804: addiu $v0, $zero, 4
    goto label_0x13081c;                                        // 0x00130808: b 0x13081c
    *(uint8_t*)((s3) + 1) = v0;                                 // 0x0013080c: sb $v0, 1($s3)
label_0x130810:
    v0 = a0 + 1;                                                // 0x00130810: addiu $v0, $a0, 1
    *(uint8_t*)((s3) + 3) = v0;                                 // 0x00130814: sb $v0, 3($s3)
label_0x130818:
label_0x13081c:
    return;                                                     // 0x00130830: jr $ra
    sp = sp + 0x50;                                             // 0x00130834: addiu $sp, $sp, 0x50
}