void func_0010b538() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_18, local_20, local_30, local_34, local_38, local_3c, local_4;
    uint32_t local_40, local_44, local_48, local_8, local_c;
    
    sp = sp + -0xa0;                                            // 0x0010b538: addiu $sp, $sp, -0xa0
    local_8 = a2;                                               // 0x0010b560: sw $a2, 8($sp)
    local_c = 0;                                                // 0x0010b564: sw $zero, 0xc($sp)
label_0x10b580:
    v1 = *(int8_t*)(s6);                                        // 0x0010b580: lb $v1, 0($s6)
    v0 = ((unsigned)v1 < (unsigned)0x2e) ? 1 : 0;               // 0x0010b584: sltiu $v0, $v1, 0x2e
    if (v0 == 0) goto label_0x10b5d0;                           // 0x0010b588: beqz $v0, 0x10b5d0
    a0 = *(uint8_t*)(s6);                                       // 0x0010b58c: lbu $a0, 0($s6)
    v0 = v1 << 2;                                               // 0x0010b590: sll $v0, $v1, 2
    v1 = 0x22 << 16;                                            // 0x0010b594: lui $v1, 0x22
    v1 = v1 + v0;                                               // 0x0010b598: addu $v1, $v1, $v0
    v1 = g_002202d0;  // Global at 0x002202d0                   // 0x0010b59c: lw $v1, 0x2d0($v1)
    /* jump to address in v1 */                                 // 0x0010b5a0: jr $v1
    /* nop */                                                   // 0x0010b5a4: nop 
    v0 = 1;                                                     // 0x0010b5a8: addiu $v0, $zero, 1
    local_c = v0;                                               // 0x0010b5ac: sw $v0, 0xc($sp)
    s6 = s6 + 1;                                                // 0x0010b5b0: addiu $s6, $s6, 1
    v0 = *(int8_t*)(s6);                                        // 0x0010b5b4: lb $v0, 0($s6)
    if (v0 != 0) goto label_0x10b5d0;                           // 0x0010b5b8: bnez $v0, 0x10b5d0
    a0 = *(uint8_t*)(s6);                                       // 0x0010b5bc: lbu $a0, 0($s6)
    goto label_0x10c3f0;                                        // 0x0010b5c0: b 0x10c3f0
    goto label_0x10b580;                                        // 0x0010b5c8: b 0x10b580
    s6 = s6 + 1;                                                // 0x0010b5cc: addiu $s6, $s6, 1
label_0x10b5d0:
    v0 = a0 << 0x18;                                            // 0x0010b5d0: sll $v0, $a0, 0x18
    v1 = 0x30;                                                  // 0x0010b5d4: addiu $v1, $zero, 0x30
    v0 = v0 >> 0x18;                                            // 0x0010b5d8: sra $v0, $v0, 0x18
    if (v0 != v1) goto label_0x10b60c;                          // 0x0010b5dc: bne $v0, $v1, 0x10b60c
    v0 = a0 << 0x18;                                            // 0x0010b5e0: sll $v0, $a0, 0x18
    t2 = 1;                                                     // 0x0010b5e4: addiu $t2, $zero, 1
label_0x10b5e8:
    s6 = s6 + 1;                                                // 0x0010b5e8: addiu $s6, $s6, 1
    v0 = *(int8_t*)(s6);                                        // 0x0010b5ec: lb $v0, 0($s6)
    /* nop */                                                   // 0x0010b5f0: nop 
    /* nop */                                                   // 0x0010b5f4: nop 
    /* nop */                                                   // 0x0010b5f8: nop 
    if (v0 == v1) goto label_0x10b5e8;                          // 0x0010b5fc: beq $v0, $v1, 0x10b5e8
    a0 = *(uint8_t*)(s6);                                       // 0x0010b600: lbu $a0, 0($s6)
    if (v0 == 0) goto label_0x10c3f0;                           // 0x0010b604: beqz $v0, 0x10c3f0
    v0 = a0 << 0x18;                                            // 0x0010b608: sll $v0, $a0, 0x18
label_0x10b60c:
    local_18 = s6;                                              // 0x0010b60c: sw $s6, 0x18($sp)
    a0 = v0 >> 0x18;                                            // 0x0010b610: sra $a0, $v0, 0x18
    v0 = (a0 < 0x30) ? 1 : 0;                                   // 0x0010b618: slti $v0, $a0, 0x30
    local_20 = 0;                                               // 0x0010b61c: sw $zero, 0x20($sp)
    goto label_0x10b684;                                        // 0x0010b624: b 0x10b684
    /* nop */                                                   // 0x0010b62c: nop 
label_0x10b630:
    if (v0 == 0) goto label_0x10b658;                           // 0x0010b630: beqz $v0, 0x10b658
    v0 = (s2 < 0x10) ? 1 : 0;                                   // 0x0010b634: slti $v0, $s2, 0x10
    v1 = local_20;                                              // 0x0010b638: lw $v1, 0x20($sp)
    v0 = v1 << 2;                                               // 0x0010b63c: sll $v0, $v1, 2
    v0 = v0 + v1;                                               // 0x0010b640: addu $v0, $v0, $v1
    v0 = v0 << 1;                                               // 0x0010b644: sll $v0, $v0, 1
    v0 = v0 + a0;                                               // 0x0010b648: addu $v0, $v0, $a0
    v0 = v0 + -0x30;                                            // 0x0010b64c: addiu $v0, $v0, -0x30
    goto label_0x10b674;                                        // 0x0010b650: b 0x10b674
    local_20 = v0;                                              // 0x0010b654: sw $v0, 0x20($sp)
label_0x10b658:
    /* beqzl $v0, 0x10b678 */                                   // 0x0010b658: beqzl $v0, 0x10b678
    s6 = s6 + 1;                                                // 0x0010b65c: addiu $s6, $s6, 1
label_0x10b674:
    s6 = s6 + 1;                                                // 0x0010b674: addiu $s6, $s6, 1
    s2 = s2 + 1;                                                // 0x0010b678: addiu $s2, $s2, 1
    a0 = *(int8_t*)(s6);                                        // 0x0010b67c: lb $a0, 0($s6)
    v0 = (a0 < 0x30) ? 1 : 0;                                   // 0x0010b680: slti $v0, $a0, 0x30
label_0x10b684:
    if (v0 != 0) goto label_0x10b69c;                           // 0x0010b684: bnez $v0, 0x10b69c
    v0 = 0x2e;                                                  // 0x0010b688: addiu $v0, $zero, 0x2e
    v0 = (a0 < 0x3a) ? 1 : 0;                                   // 0x0010b68c: slti $v0, $a0, 0x3a
    if (v0 != 0) goto label_0x10b630;                           // 0x0010b690: bnez $v0, 0x10b630
    v0 = (s2 < 9) ? 1 : 0;                                      // 0x0010b694: slti $v0, $s2, 9
    v0 = 0x2e;                                                  // 0x0010b698: addiu $v0, $zero, 0x2e
label_0x10b69c:
    if (a0 != v0) goto label_0x10b7e4;                          // 0x0010b69c: bne $a0, $v0, 0x10b7e4
    s6 = s6 + 1;                                                // 0x0010b6a4: addiu $s6, $s6, 1
    if (s2 != 0) goto label_0x10b700;                           // 0x0010b6a8: bnez $s2, 0x10b700
    a0 = *(int8_t*)(s6);                                        // 0x0010b6ac: lb $a0, 0($s6)
    v0 = 0x30;                                                  // 0x0010b6b0: addiu $v0, $zero, 0x30
    if (a0 != v0) goto label_0x10b6e0;                          // 0x0010b6b4: bnel $a0, $v0, 0x10b6e0
    v0 = a0 + -0x31;                                            // 0x0010b6b8: addiu $v0, $a0, -0x31
    /* nop */                                                   // 0x0010b6bc: nop 
label_0x10b6c0:
    s6 = s6 + 1;                                                // 0x0010b6c0: addiu $s6, $s6, 1
    a0 = *(int8_t*)(s6);                                        // 0x0010b6c4: lb $a0, 0($s6)
    /* nop */                                                   // 0x0010b6c8: nop 
    /* nop */                                                   // 0x0010b6cc: nop 
    /* nop */                                                   // 0x0010b6d0: nop 
    if (a0 == v0) goto label_0x10b6c0;                          // 0x0010b6d4: beq $a0, $v0, 0x10b6c0
    a3 = a3 + 1;                                                // 0x0010b6d8: addiu $a3, $a3, 1
    v0 = a0 + -0x31;                                            // 0x0010b6dc: addiu $v0, $a0, -0x31
label_0x10b6e0:
    v0 = ((unsigned)v0 < (unsigned)9) ? 1 : 0;                  // 0x0010b6e0: sltiu $v0, $v0, 9
    if (v0 == 0) goto label_0x10b7e8;                           // 0x0010b6e4: beqz $v0, 0x10b7e8
    v0 = 0x65;                                                  // 0x0010b6e8: addiu $v0, $zero, 0x65
    a2 = a0 + -0x30;                                            // 0x0010b6f4: addiu $a2, $a0, -0x30
    goto label_0x10b710;                                        // 0x0010b6f8: b 0x10b710
    local_18 = s6;                                              // 0x0010b6fc: sw $s6, 0x18($sp)
label_0x10b700:
    a2 = a0 + -0x30;                                            // 0x0010b700: addiu $a2, $a0, -0x30
    v0 = ((unsigned)a2 < (unsigned)0xa) ? 1 : 0;                // 0x0010b704: sltiu $v0, $a2, 0xa
    if (v0 == 0) goto label_0x10b7e8;                           // 0x0010b708: beqz $v0, 0x10b7e8
    v0 = 0x65;                                                  // 0x0010b70c: addiu $v0, $zero, 0x65
label_0x10b710:
    if (a2 == 0) goto label_0x10b7c8;                           // 0x0010b710: beqz $a2, 0x10b7c8
    a3 = a3 + 1;                                                // 0x0010b714: addiu $a3, $a3, 1
    a0 = 1;                                                     // 0x0010b718: addiu $a0, $zero, 1
    v0 = (a0 < a3) ? 1 : 0;                                     // 0x0010b71c: slt $v0, $a0, $a3
    if (v0 == 0) goto label_0x10b77c;                           // 0x0010b720: beqz $v0, 0x10b77c
    t0 = t0 + a3;                                               // 0x0010b724: addu $t0, $t0, $a3
    a0 = a3 + -1;                                               // 0x0010b728: addiu $a0, $a3, -1
label_0x10b730:
    v0 = (v0 < 9) ? 1 : 0;                                      // 0x0010b730: slti $v0, $v0, 9
    if (v0 == 0) goto label_0x10b758;                           // 0x0010b734: beqz $v0, 0x10b758
    s2 = s2 + 1;                                                // 0x0010b738: addiu $s2, $s2, 1
    v1 = local_20;                                              // 0x0010b73c: lw $v1, 0x20($sp)
    v0 = v1 << 2;                                               // 0x0010b740: sll $v0, $v1, 2
    v0 = v0 + v1;                                               // 0x0010b744: addu $v0, $v0, $v1
    v0 = v0 << 1;                                               // 0x0010b748: sll $v0, $v0, 1
    goto label_0x10b770;                                        // 0x0010b74c: b 0x10b770
    local_20 = v0;                                              // 0x0010b750: sw $v0, 0x20($sp)
    /* nop */                                                   // 0x0010b754: nop 
label_0x10b758:
    v0 = (s2 < 0x11) ? 1 : 0;                                   // 0x0010b758: slti $v0, $s2, 0x11
    /* beqzl $v0, 0x10b774 */                                   // 0x0010b75c: beqzl $v0, 0x10b774
    a0 = a0 + -1;                                               // 0x0010b760: addiu $a0, $a0, -1
label_0x10b770:
    a0 = a0 + -1;                                               // 0x0010b770: addiu $a0, $a0, -1
    if (a0 != 0) goto label_0x10b730;                           // 0x0010b774: bnez $a0, 0x10b730
label_0x10b77c:
    v0 = (v0 < 9) ? 1 : 0;                                      // 0x0010b780: slti $v0, $v0, 9
    if (v0 == 0) goto label_0x10b7a8;                           // 0x0010b784: beqz $v0, 0x10b7a8
    s2 = s2 + 1;                                                // 0x0010b788: addiu $s2, $s2, 1
    a0 = local_20;                                              // 0x0010b78c: lw $a0, 0x20($sp)
    v0 = a0 << 2;                                               // 0x0010b790: sll $v0, $a0, 2
    v0 = v0 + a0;                                               // 0x0010b794: addu $v0, $v0, $a0
    v0 = v0 << 1;                                               // 0x0010b798: sll $v0, $v0, 1
    v0 = v0 + a2;                                               // 0x0010b79c: addu $v0, $v0, $a2
    goto label_0x10b7c4;                                        // 0x0010b7a0: b 0x10b7c4
    local_20 = v0;                                              // 0x0010b7a4: sw $v0, 0x20($sp)
label_0x10b7a8:
    v0 = (s2 < 0x11) ? 1 : 0;                                   // 0x0010b7a8: slti $v0, $s2, 0x11
    if (v0 == 0) goto label_0x10b7c8;                           // 0x0010b7ac: beqz $v0, 0x10b7c8
label_0x10b7c4:
label_0x10b7c8:
    s6 = s6 + 1;                                                // 0x0010b7c8: addiu $s6, $s6, 1
    a0 = *(int8_t*)(s6);                                        // 0x0010b7cc: lb $a0, 0($s6)
    v0 = a0 + -0x30;                                            // 0x0010b7d0: addiu $v0, $a0, -0x30
    v1 = ((unsigned)a2 < (unsigned)0xa) ? 1 : 0;                // 0x0010b7d8: sltiu $v1, $a2, 0xa
    if (v1 != 0) goto label_0x10b710;                           // 0x0010b7dc: bnez $v1, 0x10b710
    /* nop */                                                   // 0x0010b7e0: nop 
label_0x10b7e4:
    v0 = 0x65;                                                  // 0x0010b7e4: addiu $v0, $zero, 0x65
label_0x10b7e8:
    if (a0 == v0) goto label_0x10b7fc;                          // 0x0010b7e8: beq $a0, $v0, 0x10b7fc
    v0 = 0x45;                                                  // 0x0010b7f0: addiu $v0, $zero, 0x45
    if (a0 != v0) goto label_0x10b914;                          // 0x0010b7f4: bne $a0, $v0, 0x10b914
    /* nop */                                                   // 0x0010b7f8: nop 
label_0x10b7fc:
    /* bnezl $s2, 0x10b818 */                                   // 0x0010b7fc: bnezl $s2, 0x10b818
    /* bnezl $a3, 0x10b818 */                                   // 0x0010b804: bnezl $a3, 0x10b818
    /* beqzl $t2, 0x10c3f0 */                                   // 0x0010b80c: beqzl $t2, 0x10c3f0
    s6 = s6 + 1;                                                // 0x0010b818: addiu $s6, $s6, 1
    a0 = *(int8_t*)(s6);                                        // 0x0010b81c: lb $a0, 0($s6)
    v0 = 0x2b;                                                  // 0x0010b820: addiu $v0, $zero, 0x2b
    if (a0 == v0) goto label_0x10b83c;                          // 0x0010b824: beq $a0, $v0, 0x10b83c
    v0 = 0x2d;                                                  // 0x0010b82c: addiu $v0, $zero, 0x2d
    if (a0 != v0) goto label_0x10b848;                          // 0x0010b830: bne $a0, $v0, 0x10b848
    v0 = a0 + -0x30;                                            // 0x0010b834: addiu $v0, $a0, -0x30
    t1 = 1;                                                     // 0x0010b838: addiu $t1, $zero, 1
label_0x10b83c:
    s6 = s6 + 1;                                                // 0x0010b83c: addiu $s6, $s6, 1
    a0 = *(int8_t*)(s6);                                        // 0x0010b840: lb $a0, 0($s6)
    v0 = a0 + -0x30;                                            // 0x0010b844: addiu $v0, $a0, -0x30
label_0x10b848:
    v0 = ((unsigned)v0 < (unsigned)0xa) ? 1 : 0;                // 0x0010b848: sltiu $v0, $v0, 0xa
    /* beqzl $v0, 0x10b914 */                                   // 0x0010b84c: beqzl $v0, 0x10b914
    v0 = 0x30;                                                  // 0x0010b854: addiu $v0, $zero, 0x30
    if (a0 != v0) goto label_0x10b888;                          // 0x0010b858: bnel $a0, $v0, 0x10b888
    v0 = a0 + -0x31;                                            // 0x0010b85c: addiu $v0, $a0, -0x31
    s6 = s6 + 1;                                                // 0x0010b860: addiu $s6, $s6, 1
    /* nop */                                                   // 0x0010b864: nop 
label_0x10b868:
    a0 = *(int8_t*)(s6);                                        // 0x0010b868: lb $a0, 0($s6)
    /* nop */                                                   // 0x0010b86c: nop 
    /* nop */                                                   // 0x0010b870: nop 
    /* nop */                                                   // 0x0010b874: nop 
    /* nop */                                                   // 0x0010b878: nop 
    if (a0 == v0) goto label_0x10b868;                          // 0x0010b87c: beql $a0, $v0, 0x10b868
    s6 = s6 + 1;                                                // 0x0010b880: addiu $s6, $s6, 1
    v0 = a0 + -0x31;                                            // 0x0010b884: addiu $v0, $a0, -0x31
label_0x10b888:
    v0 = ((unsigned)v0 < (unsigned)9) ? 1 : 0;                  // 0x0010b888: sltiu $v0, $v0, 9
    /* beqzl $v0, 0x10b914 */                                   // 0x0010b88c: beqzl $v0, 0x10b914
    a0 = a0 + -0x30;                                            // 0x0010b894: addiu $a0, $a0, -0x30
    s6 = s6 + 1;                                                // 0x0010b8a0: addiu $s6, $s6, 1
    a0 = *(int8_t*)(s6);                                        // 0x0010b8a4: lb $a0, 0($s6)
    v0 = (a0 < 0x30) ? 1 : 0;                                   // 0x0010b8a8: slti $v0, $a0, 0x30
    /* bnezl $v0, 0x10b8f0 */                                   // 0x0010b8ac: bnezl $v0, 0x10b8f0
label_0x10b8b4:
    v0 = (a0 < 0x3a) ? 1 : 0;                                   // 0x0010b8b4: slti $v0, $a0, 0x3a
    /* beqzl $v0, 0x10b8f0 */                                   // 0x0010b8b8: beqzl $v0, 0x10b8f0
    s6 = s6 + 1;                                                // 0x0010b8c4: addiu $s6, $s6, 1
    a0 = *(int8_t*)(s6);                                        // 0x0010b8d8: lb $a0, 0($s6)
    v1 = (a0 < 0x30) ? 1 : 0;                                   // 0x0010b8e0: slti $v1, $a0, 0x30
    if (v1 == 0) goto label_0x10b8b4;                           // 0x0010b8e4: beqz $v1, 0x10b8b4
    v0 = s6 - a2;                                               // 0x0010b8f0: subu $v0, $s6, $a2
    v1 = 0x98 << 16;                                            // 0x0010b8f4: lui $v1, 0x98
    v1 = v1 | 0x967f;                                           // 0x0010b8f8: ori $v1, $v1, 0x967f
    v0 = (v0 < 9) ? 1 : 0;                                      // 0x0010b8fc: slti $v0, $v0, 9
    if (v0 == 0) a0 = v1;                                       // 0x0010b900: movz $a0, $v1, $v0
    if (t1 == 0) goto label_0x10b914;                           // 0x0010b904: beqz $t1, 0x10b914
label_0x10b914:
    if (s2 != 0) goto label_0x10b938;                           // 0x0010b914: bnez $s2, 0x10b938
    if (a3 != 0) goto label_0x10c3f4;                           // 0x0010b91c: bnez $a3, 0x10c3f4
    v1 = local_8;                                               // 0x0010b920: lw $v1, 8($sp)
    if (t2 != 0) goto label_0x10c3f4;                           // 0x0010b924: bnez $t2, 0x10c3f4
    /* nop */                                                   // 0x0010b928: nop 
    goto label_0x10c3f0;                                        // 0x0010b92c: b 0x10c3f0
    /* nop */                                                   // 0x0010b934: nop 
label_0x10b938:
    s4 = 0x10;                                                  // 0x0010b938: addiu $s4, $zero, 0x10
    a0 = local_20;                                              // 0x0010b93c: lw $a0, 0x20($sp)
    if (s7 == 0) s7 = s2;                                       // 0x0010b940: movz $s7, $s2, $s7
    v0 = (s2 < 0x11) ? 1 : 0;                                   // 0x0010b94c: slti $v0, $s2, 0x11
    if (v0 != 0) s4 = s2;                                       // 0x0010b950: movn $s4, $s2, $v0
    func_00111f90();  // 111f90                                // 0x0010b960: jal 0x111f90
    local_48 = v1;                                              // 0x0010b964: sw $v1, 0x48($sp)
    v0 = local_20;                                              // 0x0010b96c: lw $v0, 0x20($sp)
    if (v0 >= 0) goto label_0x10b98c;                           // 0x0010b970: bgez $v0, 0x10b98c
    s0 = local_48;                                              // 0x0010b974: lw $s0, 0x48($sp)
    a1 = 0 | 0x83e0;                                            // 0x0010b978: ori $a1, $zero, 0x83e0
    func_00111998();  // 111998                                // 0x0010b980: jal 0x111998
    /* nop */                                                   // 0x0010b984: nop 
label_0x10b98c:
    v0 = (s4 < 0xa) ? 1 : 0;                                    // 0x0010b98c: slti $v0, $s4, 0xa
    if (v0 != 0) goto label_0x10ba0c;                           // 0x0010b994: bnez $v0, 0x10ba0c
    v0 = s2 - s4;                                               // 0x0010b998: subu $v0, $s2, $s4
    v0 = s4 << 3;                                               // 0x0010b99c: sll $v0, $s4, 3
    a0 = 0x22 << 16;                                            // 0x0010b9a4: lui $a0, 0x22
    a0 = a0 + v0;                                               // 0x0010b9a8: addu $a0, $a0, $v0
    func_00111a58();  // 111a58                                // 0x0010b9b0: jal 0x111a58
    /* nop */                                                   // 0x0010b9b4: nop 
    if (s1 < 0) goto label_0x10b9d8;                            // 0x0010b9bc: bltzl $s1, 0x10b9d8
    func_00110fd0();  // 110fd0                                // 0x0010b9c4: jal 0x110fd0
    goto label_0x10b9f4;                                        // 0x0010b9cc: b 0x10b9f4
    /* nop */                                                   // 0x0010b9d0: nop 
    /* nop */                                                   // 0x0010b9d4: nop 
label_0x10b9d8:
    a0 = s1 & 1;                                                // 0x0010b9d8: andi $a0, $s1, 1
    func_00110fd0();  // 110fd0                                // 0x0010b9dc: jal 0x110fd0
    a0 = a0 | v0;                                               // 0x0010b9e0: or $a0, $a0, $v0
    func_00111998();  // 111998                                // 0x0010b9ec: jal 0x111998
    /* nop */                                                   // 0x0010b9f0: nop 
label_0x10b9f4:
    func_00111998();  // 111998                                // 0x0010b9fc: jal 0x111998
    /* nop */                                                   // 0x0010ba00: nop 
    v0 = s2 - s4;                                               // 0x0010ba08: subu $v0, $s2, $s4
label_0x10ba0c:
    s0 = s0 + v0;                                               // 0x0010ba0c: addu $s0, $s0, $v0
    if (s0 <= 0) goto label_0x10bb68;                           // 0x0010ba10: blez $s0, 0x10bb68
    local_38 = 0;                                               // 0x0010ba14: sw $zero, 0x38($sp)
    a0 = s0 & 0xf;                                              // 0x0010ba18: andi $a0, $s0, 0xf
    if (a0 == 0) goto label_0x10ba40;                           // 0x0010ba1c: beqz $a0, 0x10ba40
    v0 = a0 << 3;                                               // 0x0010ba20: sll $v0, $a0, 3
    a0 = 0x22 << 16;                                            // 0x0010ba28: lui $a0, 0x22
    a0 = a0 + v0;                                               // 0x0010ba2c: addu $a0, $a0, $v0
    func_00111a58();  // 111a58                                // 0x0010ba34: jal 0x111a58
    /* nop */                                                   // 0x0010ba38: nop 
label_0x10ba40:
    v0 = -0x10;                                                 // 0x0010ba40: addiu $v0, $zero, -0x10
    s0 = s0 & v0;                                               // 0x0010ba44: and $s0, $s0, $v0
    if (s0 == 0) goto label_0x10bcd0;                           // 0x0010ba48: beqz $s0, 0x10bcd0
    v0 = (s0 < 0x135) ? 1 : 0;                                  // 0x0010ba4c: slti $v0, $s0, 0x135
    /* bnezl $v0, 0x10ba80 */                                   // 0x0010ba50: bnezl $v0, 0x10ba80
    s0 = s0 >> 4;                                               // 0x0010ba54: sra $s0, $s0, 4
    v0 = 0x22;                                                  // 0x0010ba58: addiu $v0, $zero, 0x22
label_0x10ba5c:
    v1 = 0x22 << 16;                                            // 0x0010ba5c: lui $v1, 0x22
    *(uint32_t*)(fp) = v0;                                      // 0x0010ba60: sw $v0, 0($fp)
    v1 = local_38;                                              // 0x0010ba68: lw $v1, 0x38($sp)
    if (v1 == 0) goto label_0x10c3f4;                           // 0x0010ba6c: beqz $v1, 0x10c3f4
    v1 = local_8;                                               // 0x0010ba70: lw $v1, 8($sp)
    goto label_0x10c3b8;                                        // 0x0010ba74: b 0x10c3b8
    a1 = local_30;                                              // 0x0010ba78: lw $a1, 0x30($sp)
    /* nop */                                                   // 0x0010ba7c: nop 
    if (s0 == 0) goto label_0x10bcd0;                           // 0x0010ba80: beqz $s0, 0x10bcd0
    v0 = (s0 < 2) ? 1 : 0;                                      // 0x0010ba84: slti $v0, $s0, 2
    if (v0 != 0) goto label_0x10bad0;                           // 0x0010ba88: bnez $v0, 0x10bad0
    s5 = 0x22 << 16;                                            // 0x0010ba90: lui $s5, 0x22
    s1 = s5 + 0x270;                                            // 0x0010ba94: addiu $s1, $s5, 0x270
label_0x10ba98:
    v0 = s0 & 1;                                                // 0x0010ba98: andi $v0, $s0, 1
    if (v0 == 0) goto label_0x10bab8;                           // 0x0010ba9c: beqz $v0, 0x10bab8
    s0 = s0 >> 1;                                               // 0x0010baa0: sra $s0, $s0, 1
    func_00111a58();  // 111a58                                // 0x0010baac: jal 0x111a58
    /* nop */                                                   // 0x0010bab0: nop 
label_0x10bab8:
    s1 = s1 + 8;                                                // 0x0010bab8: addiu $s1, $s1, 8
    v0 = (s0 < 2) ? 1 : 0;                                      // 0x0010babc: slti $v0, $s0, 2
    if (v0 == 0) goto label_0x10ba98;                           // 0x0010bac0: beqz $v0, 0x10ba98
    s4 = s4 + 1;                                                // 0x0010bac4: addiu $s4, $s4, 1
    goto label_0x10bad8;                                        // 0x0010bac8: b 0x10bad8
    a0 = s5 + 0x270;                                            // 0x0010bacc: addiu $a0, $s5, 0x270
label_0x10bad0:
    s5 = 0x22 << 16;                                            // 0x0010bad0: lui $s5, 0x22
    a0 = s5 + 0x270;                                            // 0x0010bad4: addiu $a0, $s5, 0x270
label_0x10bad8:
    v0 = 0xfcb0 << 16;                                          // 0x0010badc: lui $v0, 0xfcb0
    v1 = s4 << 3;                                               // 0x0010bae0: sll $v1, $s4, 3
    v1 = v1 + a0;                                               // 0x0010bae4: addu $v1, $v1, $a0
    a1 = a1 + v0;                                               // 0x0010bae8: addu $a1, $a1, $v0
    s0 = 0xffff << 16;                                          // 0x0010baec: lui $s0, 0xffff
    s3 = s3 & s0;                                               // 0x0010baf8: and $s3, $s3, $s0
    func_00111a58();  // 111a58                                // 0x0010bb00: jal 0x111a58
    a1 = s3 | a1;                                               // 0x0010bb04: or $a1, $s3, $a1
    v1 = 0x7ff0 << 16;                                          // 0x0010bb08: lui $v1, 0x7ff0
    v0 = 0x7ca0 << 16;                                          // 0x0010bb10: lui $v0, 0x7ca0
    s1 = a0 & v1;                                               // 0x0010bb18: and $s1, $a0, $v1
    v0 = ((unsigned)v0 < (unsigned)s1) ? 1 : 0;                 // 0x0010bb1c: sltu $v0, $v0, $s1
    if (v0 != 0) goto label_0x10ba5c;                           // 0x0010bb20: bnez $v0, 0x10ba5c
    v0 = 0x22;                                                  // 0x0010bb24: addiu $v0, $zero, 0x22
    v0 = 0x7c90 << 16;                                          // 0x0010bb28: lui $v0, 0x7c90
    v0 = ((unsigned)v0 < (unsigned)s1) ? 1 : 0;                 // 0x0010bb2c: sltu $v0, $v0, $s1
    if (v0 == 0) goto label_0x10bb50;                           // 0x0010bb30: beqz $v0, 0x10bb50
    s3 = s3 & s0;                                               // 0x0010bb34: and $s3, $s3, $s0
    v0 = 0x7fef << 16;                                          // 0x0010bb38: lui $v0, 0x7fef
    v0 = v0 | 0xffff;                                           // 0x0010bb3c: ori $v0, $v0, 0xffff
    s3 = s3 | v0;                                               // 0x0010bb44: or $s3, $s3, $v0
    goto label_0x10bcd0;                                        // 0x0010bb48: b 0x10bcd0
    s3 = s3 | s0;                                               // 0x0010bb4c: or $s3, $s3, $s0
label_0x10bb50:
    v0 = 0x350 << 16;                                           // 0x0010bb50: lui $v0, 0x350
    v0 = v0 + a0;                                               // 0x0010bb54: addu $v0, $v0, $a0
    goto label_0x10bcd0;                                        // 0x0010bb5c: b 0x10bcd0
    s3 = s3 | v0;                                               // 0x0010bb60: or $s3, $s3, $v0
    /* nop */                                                   // 0x0010bb64: nop 
label_0x10bb68:
    if (s0 >= 0) goto label_0x10bcd4;                           // 0x0010bb68: bgez $s0, 0x10bcd4
    a1 = local_18;                                              // 0x0010bb6c: lw $a1, 0x18($sp)
    s0 = -s0;                                                   // 0x0010bb70: negu $s0, $s0
    a0 = s0 & 0xf;                                              // 0x0010bb74: andi $a0, $s0, 0xf
    if (a0 == 0) goto label_0x10bb9c;                           // 0x0010bb78: beqz $a0, 0x10bb9c
    v0 = a0 << 3;                                               // 0x0010bb7c: sll $v0, $a0, 3
    a1 = 0x22 << 16;                                            // 0x0010bb84: lui $a1, 0x22
    a1 = a1 + v0;                                               // 0x0010bb88: addu $a1, $a1, $v0
    func_00111ce0();  // 111ce0                                // 0x0010bb90: jal 0x111ce0
    /* nop */                                                   // 0x0010bb94: nop 
label_0x10bb9c:
    v0 = -0x10;                                                 // 0x0010bb9c: addiu $v0, $zero, -0x10
    s0 = s0 & v0;                                               // 0x0010bba0: and $s0, $s0, $v0
    if (s0 == 0) goto label_0x10bcd0;                           // 0x0010bba4: beqz $s0, 0x10bcd0
    s0 = s0 >> 4;                                               // 0x0010bba8: sra $s0, $s0, 4
    v0 = (s0 < 0x20) ? 1 : 0;                                   // 0x0010bbac: slti $v0, $s0, 0x20
    if (v0 == 0) goto label_0x10bc8c;                           // 0x0010bbb0: beqz $v0, 0x10bc8c
    v0 = 0x22;                                                  // 0x0010bbb4: addiu $v0, $zero, 0x22
    v0 = (s0 < 2) ? 1 : 0;                                      // 0x0010bbb8: slti $v0, $s0, 2
    if (v0 != 0) goto label_0x10bc08;                           // 0x0010bbbc: bnez $v0, 0x10bc08
    s5 = 0x22 << 16;                                            // 0x0010bbc4: lui $s5, 0x22
    s1 = s5 + 0x298;                                            // 0x0010bbc8: addiu $s1, $s5, 0x298
    /* nop */                                                   // 0x0010bbcc: nop 
label_0x10bbd0:
    v0 = s0 & 1;                                                // 0x0010bbd0: andi $v0, $s0, 1
    if (v0 == 0) goto label_0x10bbf0;                           // 0x0010bbd4: beqz $v0, 0x10bbf0
    s0 = s0 >> 1;                                               // 0x0010bbd8: sra $s0, $s0, 1
    func_00111a58();  // 111a58                                // 0x0010bbe4: jal 0x111a58
    /* nop */                                                   // 0x0010bbe8: nop 
label_0x10bbf0:
    s1 = s1 + 8;                                                // 0x0010bbf0: addiu $s1, $s1, 8
    v0 = (s0 < 2) ? 1 : 0;                                      // 0x0010bbf4: slti $v0, $s0, 2
    if (v0 == 0) goto label_0x10bbd0;                           // 0x0010bbf8: beqz $v0, 0x10bbd0
    s4 = s4 + 1;                                                // 0x0010bbfc: addiu $s4, $s4, 1
    goto label_0x10bc10;                                        // 0x0010bc00: b 0x10bc10
    v0 = s5 + 0x298;                                            // 0x0010bc04: addiu $v0, $s5, 0x298
label_0x10bc08:
    s5 = 0x22 << 16;                                            // 0x0010bc08: lui $s5, 0x22
    v0 = s5 + 0x298;                                            // 0x0010bc0c: addiu $v0, $s5, 0x298
label_0x10bc10:
    v1 = s4 << 3;                                               // 0x0010bc10: sll $v1, $s4, 3
    v1 = v1 + v0;                                               // 0x0010bc14: addu $v1, $v1, $v0
    func_00111a58();  // 111a58                                // 0x0010bc2c: jal 0x111a58
    /* nop */                                                   // 0x0010bc30: nop 
    func_00111f40();  // 111f40                                // 0x0010bc40: jal 0x111f40
    /* nop */                                                   // 0x0010bc44: nop 
    if (v0 != 0) goto label_0x10bcd4;                           // 0x0010bc48: bnez $v0, 0x10bcd4
    a1 = local_18;                                              // 0x0010bc4c: lw $a1, 0x18($sp)
    func_00111998();  // 111998                                // 0x0010bc58: jal 0x111998
    /* nop */                                                   // 0x0010bc5c: nop 
    func_00111a58();  // 111a58                                // 0x0010bc68: jal 0x111a58
    /* nop */                                                   // 0x0010bc6c: nop 
    func_00111f40();  // 111f40                                // 0x0010bc78: jal 0x111f40
    /* nop */                                                   // 0x0010bc7c: nop 
    if (v0 != 0) goto label_0x10bcd0;                           // 0x0010bc80: bnez $v0, 0x10bcd0
    s3 = 1;                                                     // 0x0010bc84: addiu $s3, $zero, 1
label_0x10bc88:
    v0 = 0x22;                                                  // 0x0010bc88: addiu $v0, $zero, 0x22
label_0x10bc8c:
    *(uint32_t*)(fp) = v0;                                      // 0x0010bc90: sw $v0, 0($fp)
    a0 = local_38;                                              // 0x0010bc94: lw $a0, 0x38($sp)
    if (a0 == 0) goto label_0x10c3f4;                           // 0x0010bc98: beqz $a0, 0x10c3f4
    v1 = local_8;                                               // 0x0010bc9c: lw $v1, 8($sp)
    goto label_0x10c3b8;                                        // 0x0010bca0: b 0x10c3b8
    a1 = local_30;                                              // 0x0010bca4: lw $a1, 0x30($sp)
label_0x10bca8:
    func_001088e8();  // 1088e8                                // 0x0010bcac: jal 0x1088e8
    /* nop */                                                   // 0x0010bcb0: nop 
    func_00111998();  // 111998                                // 0x0010bcbc: jal 0x111998
    /* nop */                                                   // 0x0010bcc0: nop 
    goto label_0x10c3b4;                                        // 0x0010bcc4: b 0x10c3b4
    /* nop */                                                   // 0x0010bccc: nop 
label_0x10bcd0:
    a1 = local_18;                                              // 0x0010bcd0: lw $a1, 0x18($sp)
label_0x10bcd4:
    t0 = local_20;                                              // 0x0010bcd8: lw $t0, 0x20($sp)
    func_00107fe0();  // 107fe0                                // 0x0010bce0: jal 0x107fe0
    local_38 = v0;                                              // 0x0010bce8: sw $v0, 0x38($sp)
    v0 = v0 + 0xc;                                              // 0x0010bcec: addiu $v0, $v0, 0xc
    goto label_0x10c1dc;                                        // 0x0010bcf0: b 0x10c1dc
    local_44 = v0;                                              // 0x0010bcf4: sw $v0, 0x44($sp)
label_0x10bcf8:
    func_00108598();  // 108598                                // 0x0010bcfc: jal 0x108598
    a2 = 1;                                                     // 0x0010bd00: addiu $a2, $zero, 1
    a1 = local_3c;                                              // 0x0010bd04: lw $a1, 0x3c($sp)
    func_001086f0();  // 1086f0                                // 0x0010bd0c: jal 0x1086f0
    local_40 = v0;                                              // 0x0010bd10: sw $v0, 0x40($sp)
    if (v0 <= 0) goto label_0x10c3b8;                           // 0x0010bd14: blez $v0, 0x10c3b8
    a1 = local_30;                                              // 0x0010bd18: lw $a1, 0x30($sp)
    goto label_0x10bd94;                                        // 0x0010bd1c: b 0x10bd94
    /* nop */                                                   // 0x0010bd20: nop 
    /* nop */                                                   // 0x0010bd24: nop 
label_0x10bd28:
    if (a0 != 0) goto label_0x10be38;                           // 0x0010bd28: bnez $a0, 0x10be38
    a1 = local_3c;                                              // 0x0010bd2c: lw $a1, 0x3c($sp)
    if (s5 == 0) goto label_0x10bd80;                           // 0x0010bd30: beqz $s5, 0x10bd80
    /* nop */                                                   // 0x0010bd34: nop 
    v1 = -1;                                                    // 0x0010bd38: addiu $v1, $zero, -1
    v0 = s3 & v1;                                               // 0x0010bd40: and $v0, $s3, $v1
    if (v0 != v1) goto label_0x10bdd8;                          // 0x0010bd44: bne $v0, $v1, 0x10bdd8
    v1 = 0x7ff0 << 16;                                          // 0x0010bd48: lui $v1, 0x7ff0
    v0 = v0 & v1;                                               // 0x0010bd50: and $v0, $v0, $v1
    v1 = 0xffff << 16;                                          // 0x0010bd54: lui $v1, 0xffff
    a0 = 0x10 << 16;                                            // 0x0010bd5c: lui $a0, 0x10
    s3 = s3 & v1;                                               // 0x0010bd60: and $s3, $s3, $v1
    v1 = -1;                                                    // 0x0010bd68: addiu $v1, $zero, -1
    s3 = s3 | v0;                                               // 0x0010bd74: or $s3, $s3, $v0
    goto label_0x10c3b4;                                        // 0x0010bd78: b 0x10c3b4
    s3 = s3 & v1;                                               // 0x0010bd7c: and $s3, $s3, $v1
label_0x10bd80:
    v0 = -1;                                                    // 0x0010bd80: addiu $v0, $zero, -1
    v0 = s3 & v0;                                               // 0x0010bd88: and $v0, $s3, $v0
    if (v0 != 0) goto label_0x10bdd8;                           // 0x0010bd8c: bnez $v0, 0x10bdd8
    /* nop */                                                   // 0x0010bd90: nop 
label_0x10bd94:
    v1 = 0x7ff0 << 16;                                          // 0x0010bd98: lui $v1, 0x7ff0
    v0 = v0 & v1;                                               // 0x0010bd9c: and $v0, $v0, $v1
    v1 = -1;                                                    // 0x0010bda0: addiu $v1, $zero, -1
    a0 = 0xfff0 << 16;                                          // 0x0010bdac: lui $a0, 0xfff0
    a1 = 0xffff << 16;                                          // 0x0010bdb0: lui $a1, 0xffff
    v0 = v0 + a0;                                               // 0x0010bdb8: addu $v0, $v0, $a0
    s3 = s3 & a1;                                               // 0x0010bdbc: and $s3, $s3, $a1
    v1 = v1 | v0;                                               // 0x0010bdc4: or $v1, $v1, $v0
    s3 = s3 | v1;                                               // 0x0010bdc8: or $s3, $s3, $v1
    goto label_0x10c3b4;                                        // 0x0010bdcc: b 0x10c3b4
    s3 = s3 | a1;                                               // 0x0010bdd0: or $s3, $s3, $a1
    /* nop */                                                   // 0x0010bdd4: nop 
label_0x10bdd8:
    v0 = v0 & 1;                                                // 0x0010bde0: andi $v0, $v0, 1
    if (v0 == 0) goto label_0x10c3b8;                           // 0x0010bde4: beqz $v0, 0x10c3b8
    a1 = local_30;                                              // 0x0010bde8: lw $a1, 0x30($sp)
    if (s5 != 0) goto label_0x10bca8;                           // 0x0010bdec: bnez $s5, 0x10bca8
    /* nop */                                                   // 0x0010bdf0: nop 
    func_001088e8();  // 1088e8                                // 0x0010bdf8: jal 0x1088e8
    /* nop */                                                   // 0x0010bdfc: nop 
    func_001119f0();  // 1119f0                                // 0x0010be08: jal 0x1119f0
    /* nop */                                                   // 0x0010be0c: nop 
    func_00111f40();  // 111f40                                // 0x0010be1c: jal 0x111f40
    /* nop */                                                   // 0x0010be20: nop 
    if (v0 == 0) goto label_0x10bc88;                           // 0x0010be24: beqz $v0, 0x10bc88
    a1 = local_30;                                              // 0x0010be28: lw $a1, 0x30($sp)
    goto label_0x10c3b8;                                        // 0x0010be2c: b 0x10c3b8
    /* nop */                                                   // 0x0010be30: nop 
    /* nop */                                                   // 0x0010be34: nop 
label_0x10be38:
    func_00108cd8();  // 108cd8                                // 0x0010be38: jal 0x108cd8
    a0 = local_40;                                              // 0x0010be3c: lw $a0, 0x40($sp)
    a1 = 0 | 0x8000;                                            // 0x0010be40: ori $a1, $zero, 0x8000
    func_00111f40();  // 111f40                                // 0x0010be50: jal 0x111f40
    /* nop */                                                   // 0x0010be54: nop 
    if (v0 > 0) goto label_0x10bf18;                            // 0x0010be58: bgtz $v0, 0x10bf18
    /* nop */                                                   // 0x0010be5c: nop 
    if (s5 == 0) goto label_0x10be80;                           // 0x0010be60: beqz $s5, 0x10be80
    /* nop */                                                   // 0x0010be64: nop 
    s0 = 0 | 0xffc0;                                            // 0x0010be68: ori $s0, $zero, 0xffc0
    goto label_0x10bf68;                                        // 0x0010be74: b 0x10bf68
    /* nop */                                                   // 0x0010be78: nop 
    /* nop */                                                   // 0x0010be7c: nop 
label_0x10be80:
    v0 = -1;                                                    // 0x0010be80: addiu $v0, $zero, -1
    v0 = s3 & v0;                                               // 0x0010be88: and $v0, $s3, $v0
    if (v0 == 0) goto label_0x10beb8;                           // 0x0010be8c: beqz $v0, 0x10beb8
    v0 = 1;                                                     // 0x0010be90: addiu $v0, $zero, 1
    if (s3 == v0) goto label_0x10bc8c;                          // 0x0010be94: beq $s3, $v0, 0x10bc8c
    v0 = 0x22;                                                  // 0x0010be98: addiu $v0, $zero, 0x22
    s0 = 0 | 0xffc0;                                            // 0x0010be9c: ori $s0, $zero, 0xffc0
    s1 = 0 | 0xbff0;                                            // 0x0010bea4: ori $s1, $zero, 0xbff0
    goto label_0x10bf68;                                        // 0x0010beac: b 0x10bf68
    /* nop */                                                   // 0x0010beb0: nop 
    /* nop */                                                   // 0x0010beb4: nop 
label_0x10beb8:
    a1 = 0 | 0xffc0;                                            // 0x0010beb8: ori $a1, $zero, 0xffc0
    func_00111f40();  // 111f40                                // 0x0010bec4: jal 0x111f40
    /* nop */                                                   // 0x0010bec8: nop 
    if (v0 >= 0) goto label_0x10bee8;                           // 0x0010becc: bgez $v0, 0x10bee8
    /* nop */                                                   // 0x0010bed0: nop 
    s0 = 0 | 0xff80;                                            // 0x0010bed4: ori $s0, $zero, 0xff80
    goto label_0x10bf00;                                        // 0x0010bedc: b 0x10bf00
    /* nop */                                                   // 0x0010bee0: nop 
    /* nop */                                                   // 0x0010bee4: nop 
label_0x10bee8:
    a1 = 0 | 0xff80;                                            // 0x0010bee8: ori $a1, $zero, 0xff80
    func_00111a58();  // 111a58                                // 0x0010bef4: jal 0x111a58
    /* nop */                                                   // 0x0010bef8: nop 
label_0x10bf00:
    func_001119f0();  // 1119f0                                // 0x0010bf08: jal 0x1119f0
    /* nop */                                                   // 0x0010bf0c: nop 
    goto label_0x10bf64;                                        // 0x0010bf10: b 0x10bf64
    /* nop */                                                   // 0x0010bf14: nop 
label_0x10bf18:
    s2 = 0 | 0xff80;                                            // 0x0010bf18: ori $s2, $zero, 0xff80
    func_00111a58();  // 111a58                                // 0x0010bf28: jal 0x111a58
    /* nop */                                                   // 0x0010bf2c: nop 
    if (s5 != 0) goto label_0x10bf54;                           // 0x0010bf38: bnez $s5, 0x10bf54
    /* nop */                                                   // 0x0010bf3c: nop 
    func_001119f0();  // 1119f0                                // 0x0010bf48: jal 0x1119f0
    /* nop */                                                   // 0x0010bf4c: nop 
label_0x10bf54:
    func_00111998();  // 111998                                // 0x0010bf5c: jal 0x111998
    /* nop */                                                   // 0x0010bf60: nop 
label_0x10bf64:
label_0x10bf68:
    s7 = 0x7ff0 << 16;                                          // 0x0010bf6c: lui $s7, 0x7ff0
    a0 = v1 & s7;                                               // 0x0010bf70: and $a0, $v1, $s7
    v0 = 0x7fe0 << 16;                                          // 0x0010bf74: lui $v0, 0x7fe0
    if (a0 != v0) goto label_0x10c040;                          // 0x0010bf78: bne $a0, $v0, 0x10c040
    local_20 = a0;                                              // 0x0010bf7c: sw $a0, 0x20($sp)
    v0 = 0xfcb0 << 16;                                          // 0x0010bf80: lui $v0, 0xfcb0
    s2 = 0xffff << 16;                                          // 0x0010bf84: lui $s2, 0xffff
    v0 = v1 + v0;                                               // 0x0010bf8c: addu $v0, $v1, $v0
    s3 = s3 & s2;                                               // 0x0010bf98: and $s3, $s3, $s2
    s3 = s3 | v0;                                               // 0x0010bf9c: or $s3, $s3, $v0
    func_001088e8();  // 1088e8                                // 0x0010bfa4: jal 0x1088e8
    /* nop */                                                   // 0x0010bfa8: nop 
    func_00111a58();  // 111a58                                // 0x0010bfb4: jal 0x111a58
    /* nop */                                                   // 0x0010bfb8: nop 
    func_00111998();  // 111998                                // 0x0010bfc4: jal 0x111998
    /* nop */                                                   // 0x0010bfc8: nop 
    v1 = 0x7c9f << 16;                                          // 0x0010bfcc: lui $v1, 0x7c9f
    v1 = v1 | 0xffff;                                           // 0x0010bfd4: ori $v1, $v1, 0xffff
    v0 = a0 & s7;                                               // 0x0010bfdc: and $v0, $a0, $s7
    v1 = ((unsigned)v1 < (unsigned)v0) ? 1 : 0;                 // 0x0010bfe0: sltu $v1, $v1, $v0
    if (v1 == 0) goto label_0x10c028;                           // 0x0010bfe4: beqz $v1, 0x10c028
    s3 = s3 & s2;                                               // 0x0010bfe8: and $s3, $s3, $s2
    v0 = 0x7fef << 16;                                          // 0x0010bfec: lui $v0, 0x7fef
    v0 = v0 | 0xffff;                                           // 0x0010bff0: ori $v0, $v0, 0xffff
    v0 = v0 | 0xffff;                                           // 0x0010bff8: ori $v0, $v0, 0xffff
    v0 = v0 | 0xffff;                                           // 0x0010c000: ori $v0, $v0, 0xffff
    if (s4 == v0) goto label_0x10ba5c;                          // 0x0010c004: beq $s4, $v0, 0x10ba5c
    v0 = 0x22;                                                  // 0x0010c008: addiu $v0, $zero, 0x22
    v0 = 0x7fef << 16;                                          // 0x0010c00c: lui $v0, 0x7fef
    v0 = v0 | 0xffff;                                           // 0x0010c010: ori $v0, $v0, 0xffff
    s3 = s3 | v0;                                               // 0x0010c018: or $s3, $s3, $v0
    goto label_0x10c1ac;                                        // 0x0010c01c: b 0x10c1ac
    s3 = s3 | s2;                                               // 0x0010c020: or $s3, $s3, $s2
    /* nop */                                                   // 0x0010c024: nop 
label_0x10c028:
    v0 = 0x350 << 16;                                           // 0x0010c028: lui $v0, 0x350
    v0 = v0 + a0;                                               // 0x0010c02c: addu $v0, $v0, $a0
    goto label_0x10c0e8;                                        // 0x0010c034: b 0x10c0e8
    s3 = s3 | v0;                                               // 0x0010c038: or $s3, $s3, $v0
    /* nop */                                                   // 0x0010c03c: nop 
label_0x10c040:
    v1 = local_20;                                              // 0x0010c040: lw $v1, 0x20($sp)
    v0 = 0x340 << 16;                                           // 0x0010c044: lui $v0, 0x340
    v0 = ((unsigned)v0 < (unsigned)v1) ? 1 : 0;                 // 0x0010c048: sltu $v0, $v0, $v1
    if (v0 != 0) goto label_0x10c0b8;                           // 0x0010c04c: bnez $v0, 0x10c0b8
    /* nop */                                                   // 0x0010c050: nop 
    a1 = 0 | 0xffc0;                                            // 0x0010c054: ori $a1, $zero, 0xffc0
    func_00111f40();  // 111f40                                // 0x0010c060: jal 0x111f40
    /* nop */                                                   // 0x0010c064: nop 
    if (v0 < 0) goto label_0x10c0b8;                            // 0x0010c068: bltz $v0, 0x10c0b8
    /* nop */                                                   // 0x0010c06c: nop 
    a1 = 0 | 0xff80;                                            // 0x0010c070: ori $a1, $zero, 0xff80
    func_00111998();  // 111998                                // 0x0010c07c: jal 0x111998
    /* nop */                                                   // 0x0010c080: nop 
    func_00112048();  // 112048                                // 0x0010c088: jal 0x112048
    /* nop */                                                   // 0x0010c08c: nop 
    func_00111f90();  // 111f90                                // 0x0010c090: jal 0x111f90
    if (s5 != 0) goto label_0x10c0b8;                           // 0x0010c09c: bnez $s5, 0x10c0b8
    /* nop */                                                   // 0x0010c0a0: nop 
    func_001119f0();  // 1119f0                                // 0x0010c0ac: jal 0x1119f0
    /* nop */                                                   // 0x0010c0b0: nop 
label_0x10c0b8:
    func_001088e8();  // 1088e8                                // 0x0010c0bc: jal 0x1088e8
    /* nop */                                                   // 0x0010c0c0: nop 
    func_00111a58();  // 111a58                                // 0x0010c0cc: jal 0x111a58
    /* nop */                                                   // 0x0010c0d0: nop 
    func_00111998();  // 111998                                // 0x0010c0dc: jal 0x111998
    /* nop */                                                   // 0x0010c0e0: nop 
label_0x10c0e8:
    a0 = local_20;                                              // 0x0010c0e8: lw $a0, 0x20($sp)
    v1 = 0x7ff0 << 16;                                          // 0x0010c0ec: lui $v1, 0x7ff0
    s1 = a0 & v1;                                               // 0x0010c0fc: and $s1, $a0, $v1
    if (v0 != s1) goto label_0x10c1b0;                          // 0x0010c100: bne $v0, $s1, 0x10c1b0
    a1 = local_30;                                              // 0x0010c104: lw $a1, 0x30($sp)
    func_00111278();  // 111278                                // 0x0010c10c: jal 0x111278
    /* nop */                                                   // 0x0010c110: nop 
    func_00110fd0();  // 110fd0                                // 0x0010c114: jal 0x110fd0
    func_001119f0();  // 1119f0                                // 0x0010c124: jal 0x1119f0
    /* nop */                                                   // 0x0010c128: nop 
    if (s5 != 0) goto label_0x10c14c;                           // 0x0010c130: bnez $s5, 0x10c14c
    /* nop */                                                   // 0x0010c134: nop 
    v0 = -1;                                                    // 0x0010c138: addiu $v0, $zero, -1
    v0 = s3 & v0;                                               // 0x0010c140: and $v0, $s3, $v0
    if (v0 == 0) goto label_0x10c190;                           // 0x0010c144: beqz $v0, 0x10c190
    /* nop */                                                   // 0x0010c148: nop 
label_0x10c14c:
    at = 0x22 << 16;                                            // 0x0010c14c: lui $at, 0x22
    func_00111f40();  // 111f40                                // 0x0010c158: jal 0x111f40
    /* nop */                                                   // 0x0010c15c: nop 
    if (v0 < 0) goto label_0x10c3b8;                            // 0x0010c160: bltz $v0, 0x10c3b8
    a1 = local_30;                                              // 0x0010c164: lw $a1, 0x30($sp)
    at = 0x22 << 16;                                            // 0x0010c168: lui $at, 0x22
    func_00111f40();  // 111f40                                // 0x0010c174: jal 0x111f40
    /* nop */                                                   // 0x0010c178: nop 
    if (v0 > 0) goto label_0x10c3b8;                            // 0x0010c17c: bgtz $v0, 0x10c3b8
    a1 = local_30;                                              // 0x0010c180: lw $a1, 0x30($sp)
    goto label_0x10c1b0;                                        // 0x0010c184: b 0x10c1b0
    /* nop */                                                   // 0x0010c188: nop 
    /* nop */                                                   // 0x0010c18c: nop 
label_0x10c190:
    at = 0x22 << 16;                                            // 0x0010c190: lui $at, 0x22
    func_00111f40();  // 111f40                                // 0x0010c19c: jal 0x111f40
    /* nop */                                                   // 0x0010c1a0: nop 
    if (v0 < 0) goto label_0x10c3b8;                            // 0x0010c1a4: bltz $v0, 0x10c3b8
    a1 = local_30;                                              // 0x0010c1a8: lw $a1, 0x30($sp)
label_0x10c1ac:
    a1 = local_30;                                              // 0x0010c1ac: lw $a1, 0x30($sp)
label_0x10c1b0:
    func_00107ea8();  // 107ea8                                // 0x0010c1b0: jal 0x107ea8
    func_00107ea8();  // 107ea8                                // 0x0010c1bc: jal 0x107ea8
    a1 = local_34;                                              // 0x0010c1c0: lw $a1, 0x34($sp)
    func_00107ea8();  // 107ea8                                // 0x0010c1c8: jal 0x107ea8
    a1 = local_3c;                                              // 0x0010c1cc: lw $a1, 0x3c($sp)
    func_00107ea8();  // 107ea8                                // 0x0010c1d4: jal 0x107ea8
    a1 = local_40;                                              // 0x0010c1d8: lw $a1, 0x40($sp)
label_0x10c1dc:
    v0 = local_38;                                              // 0x0010c1dc: lw $v0, 0x38($sp)
    func_00107e00();  // 107e00                                // 0x0010c1e4: jal 0x107e00
    a1 = g_03400004;  // Global at 0x03400004                   // 0x0010c1e8: lw $a1, 4($v0)
    local_34 = v0;                                              // 0x0010c1ec: sw $v0, 0x34($sp)
    a0 = v0 + 0xc;                                              // 0x0010c1f0: addiu $a0, $v0, 0xc
    v1 = local_38;                                              // 0x0010c1f4: lw $v1, 0x38($sp)
    a1 = local_44;                                              // 0x0010c1f8: lw $a1, 0x44($sp)
    a2 = g_7ff00010;  // Global at 0x7ff00010                   // 0x0010c1fc: lw $a2, 0x10($v1)
    a2 = a2 << 2;                                               // 0x0010c200: sll $a2, $a2, 2
    func_00107ab8();  // 107ab8                                // 0x0010c204: jal 0x107ab8
    a2 = a2 + 8;                                                // 0x0010c208: addiu $a2, $a2, 8
    func_00108b50();  // 108b50                                // 0x0010c218: jal 0x108b50
    a3 = sp + 4;                                                // 0x0010c21c: addiu $a3, $sp, 4
    a1 = 1;                                                     // 0x0010c224: addiu $a1, $zero, 1
    func_00108250();  // 108250                                // 0x0010c228: jal 0x108250
    local_30 = v0;                                              // 0x0010c22c: sw $v0, 0x30($sp)
    if (a0 < 0) goto label_0x10c250;                            // 0x0010c234: bltz $a0, 0x10c250
    local_3c = v0;                                              // 0x0010c238: sw $v0, 0x3c($sp)
    s1 = local_48;                                              // 0x0010c23c: lw $s1, 0x48($sp)
    goto label_0x10c264;                                        // 0x0010c248: b 0x10c264
label_0x10c250:
    v0 = local_48;                                              // 0x0010c250: lw $v0, 0x48($sp)
    s2 = -v0;                                                   // 0x0010c25c: negu $s2, $v0
label_0x10c264:
    v0 = local_0;                                               // 0x0010c264: lw $v0, 0($sp)
    if (v0 < 0) goto label_0x10c274;                            // 0x0010c268: bltzl $v0, 0x10c274
    s1 = s1 - v0;                                               // 0x0010c26c: subu $s1, $s1, $v0
    s2 = s2 + v0;                                               // 0x0010c270: addu $s2, $s2, $v0
label_0x10c274:
    a1 = local_4;                                               // 0x0010c274: lw $a1, 4($sp)
    s4 = v0 + 0x433;                                            // 0x0010c278: addiu $s4, $v0, 0x433
    v0 = v0 + a1;                                               // 0x0010c27c: addu $v0, $v0, $a1
    a0 = v0 + -1;                                               // 0x0010c280: addiu $a0, $v0, -1
    v1 = (a0 < -0x3fe) ? 1 : 0;                                 // 0x0010c284: slti $v1, $a0, -0x3fe
    if (v1 != 0) goto label_0x10c298;                           // 0x0010c288: bnez $v1, 0x10c298
    v0 = 0x36;                                                  // 0x0010c290: addiu $v0, $zero, 0x36
    s4 = v0 - a1;                                               // 0x0010c294: subu $s4, $v0, $a1
label_0x10c298:
    a0 = s1 + s4;                                               // 0x0010c298: addu $a0, $s1, $s4
    s2 = s2 + s4;                                               // 0x0010c29c: addu $s2, $s2, $s4
    v1 = (s2 < a0) ? 1 : 0;                                     // 0x0010c2a0: slt $v1, $s2, $a0
    if (v1 != 0) a0 = s2;                                       // 0x0010c2a8: movn $a0, $s2, $v1
    v0 = (s5 < a0) ? 1 : 0;                                     // 0x0010c2ac: slt $v0, $s5, $a0
    if (v0 != 0) a0 = s5;                                       // 0x0010c2b0: movn $a0, $s5, $v0
    if (a0 <= 0) goto label_0x10c2c8;                           // 0x0010c2b4: blez $a0, 0x10c2c8
    /* nop */                                                   // 0x0010c2b8: nop 
    s5 = s5 - a0;                                               // 0x0010c2bc: subu $s5, $s5, $a0
    s2 = s2 - a0;                                               // 0x0010c2c0: subu $s2, $s2, $a0
    s1 = s1 - a0;                                               // 0x0010c2c4: subu $s1, $s1, $a0
label_0x10c2c8:
    if (a2 <= 0) goto label_0x10c300;                           // 0x0010c2c8: blez $a2, 0x10c300
    a1 = local_3c;                                              // 0x0010c2cc: lw $a1, 0x3c($sp)
    func_00108498();  // 108498                                // 0x0010c2d0: jal 0x108498
    a2 = local_30;                                              // 0x0010c2dc: lw $a2, 0x30($sp)
    func_00108288();  // 108288                                // 0x0010c2e4: jal 0x108288
    local_3c = v0;                                              // 0x0010c2e8: sw $v0, 0x3c($sp)
    a1 = local_30;                                              // 0x0010c2f0: lw $a1, 0x30($sp)
    func_00107ea8();  // 107ea8                                // 0x0010c2f4: jal 0x107ea8
    local_30 = s0;                                              // 0x0010c2fc: sw $s0, 0x30($sp)
label_0x10c300:
    if (s2 <= 0) goto label_0x10c318;                           // 0x0010c300: blez $s2, 0x10c318
    a1 = local_30;                                              // 0x0010c304: lw $a1, 0x30($sp)
    func_00108598();  // 108598                                // 0x0010c30c: jal 0x108598
    local_30 = v0;                                              // 0x0010c314: sw $v0, 0x30($sp)
label_0x10c318:
    if (s7 <= 0) goto label_0x10c330;                           // 0x0010c318: blez $s7, 0x10c330
    a1 = local_34;                                              // 0x0010c31c: lw $a1, 0x34($sp)
    func_00108498();  // 108498                                // 0x0010c324: jal 0x108498
    local_34 = v0;                                              // 0x0010c32c: sw $v0, 0x34($sp)
label_0x10c330:
    if (s1 <= 0) goto label_0x10c348;                           // 0x0010c330: blez $s1, 0x10c348
    a1 = local_34;                                              // 0x0010c334: lw $a1, 0x34($sp)
    func_00108598();  // 108598                                // 0x0010c33c: jal 0x108598
    local_34 = v0;                                              // 0x0010c344: sw $v0, 0x34($sp)
label_0x10c348:
    if (s5 <= 0) goto label_0x10c368;                           // 0x0010c348: blez $s5, 0x10c368
    a1 = local_30;                                              // 0x0010c34c: lw $a1, 0x30($sp)
    a1 = local_3c;                                              // 0x0010c350: lw $a1, 0x3c($sp)
    func_00108598();  // 108598                                // 0x0010c358: jal 0x108598
    local_3c = v0;                                              // 0x0010c360: sw $v0, 0x3c($sp)
    a1 = local_30;                                              // 0x0010c364: lw $a1, 0x30($sp)
label_0x10c368:
    func_00108758();  // 108758                                // 0x0010c36c: jal 0x108758
    a2 = local_34;                                              // 0x0010c370: lw $a2, 0x34($sp)
    local_40 = v0;                                              // 0x0010c374: sw $v0, 0x40($sp)
    a1 = local_3c;                                              // 0x0010c37c: lw $a1, 0x3c($sp)
    s5 = g_0340000c;  // Global at 0x0340000c                   // 0x0010c380: lw $s5, 0xc($v0)
    func_001086f0();  // 1086f0                                // 0x0010c384: jal 0x1086f0
    g_0340000b = 0;  // Global at 0x0340000b                    // 0x0010c388: sw $zero, 0xc($a0)
    if (a0 >= 0) goto label_0x10bd28;                           // 0x0010c390: bgez $a0, 0x10bd28
    /* nop */                                                   // 0x0010c394: nop 
    if (s5 != 0) goto label_0x10c3b8;                           // 0x0010c398: bnez $s5, 0x10c3b8
    a1 = local_30;                                              // 0x0010c39c: lw $a1, 0x30($sp)
    v0 = -1;                                                    // 0x0010c3a0: addiu $v0, $zero, -1
    v0 = s3 & v0;                                               // 0x0010c3a8: and $v0, $s3, $v0
    if (v0 == 0) goto label_0x10bcf8;                           // 0x0010c3ac: beqz $v0, 0x10bcf8
    a1 = local_40;                                              // 0x0010c3b0: lw $a1, 0x40($sp)
label_0x10c3b4:
    a1 = local_30;                                              // 0x0010c3b4: lw $a1, 0x30($sp)
label_0x10c3b8:
    func_00107ea8();  // 107ea8                                // 0x0010c3b8: jal 0x107ea8
    func_00107ea8();  // 107ea8                                // 0x0010c3c4: jal 0x107ea8
    a1 = local_34;                                              // 0x0010c3c8: lw $a1, 0x34($sp)
    func_00107ea8();  // 107ea8                                // 0x0010c3d0: jal 0x107ea8
    a1 = local_3c;                                              // 0x0010c3d4: lw $a1, 0x3c($sp)
    func_00107ea8();  // 107ea8                                // 0x0010c3dc: jal 0x107ea8
    a1 = local_38;                                              // 0x0010c3e0: lw $a1, 0x38($sp)
    func_00107ea8();  // 107ea8                                // 0x0010c3e8: jal 0x107ea8
    a1 = local_40;                                              // 0x0010c3ec: lw $a1, 0x40($sp)
label_0x10c3f0:
    v1 = local_8;                                               // 0x0010c3f0: lw $v1, 8($sp)
label_0x10c3f4:
    /* bnezl $v1, 0x10c3fc */                                   // 0x0010c3f4: bnezl $v1, 0x10c3fc
    g_7ff00000 = s6;  // Global at 0x7ff00000                   // 0x0010c3f8: sw $s6, 0($v1)
    a0 = local_c;                                               // 0x0010c3fc: lw $a0, 0xc($sp)
    if (a0 == 0) goto label_0x10c420;                           // 0x0010c404: beqz $a0, 0x10c420
    func_001119f0();  // 1119f0                                // 0x0010c414: jal 0x1119f0
    /* nop */                                                   // 0x0010c418: nop 
label_0x10c420:
    return;                                                     // 0x0010c444: jr $ra
    sp = sp + 0xa0;                                             // 0x0010c448: addiu $sp, $sp, 0xa0
}