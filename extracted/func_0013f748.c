void func_0013f748() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0013f748: addiu $sp, $sp, -0x30
    func_0013ef18();  // 13ef18                                // 0x0013f76c: jal 0x13ef18
    if (s2 != 0) goto label_0x13f7f8;                           // 0x0013f774: bnez $s2, 0x13f7f8
    v0 = 1;                                                     // 0x0013f778: addiu $v0, $zero, 1
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x0013f77c: lw $v1, 0x14($s0)
    v0 = *(int32_t*)((s0) + 0x20);                              // 0x0013f780: lw $v0, 0x20($s0)
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x0013f784: lw $a0, 0x24($s0)
    a1 = *(int32_t*)((s0) + 0x10);                              // 0x0013f788: lw $a1, 0x10($s0)
    v0 = v0 - v1;                                               // 0x0013f78c: subu $v0, $v0, $v1
    v0 = v0 + a0;                                               // 0x0013f790: addu $v0, $v0, $a0
    a2 = *(int32_t*)((s0) + 0x1c);                              // 0x0013f794: lw $a2, 0x1c($s0)
    v1 = (a1 < v0) ? 1 : 0;                                     // 0x0013f798: slt $v1, $a1, $v0
    if (v1 != 0) v0 = a1;                                       // 0x0013f79c: movn $v0, $a1, $v1
    a0 = (v0 < s3) ? 1 : 0;                                     // 0x0013f7a0: slt $a0, $v0, $s3
    if (a0 == 0) v0 = s3;                                       // 0x0013f7a4: movz $v0, $s3, $a0
    *(uint32_t*)((s1) + 4) = v0;                                // 0x0013f7a8: sw $v0, 4($s1)
    a0 = *(int32_t*)((s0) + 0x14);                              // 0x0013f7ac: lw $a0, 0x14($s0)
    v1 = *(int32_t*)((s0) + 0x20);                              // 0x0013f7b0: lw $v1, 0x20($s0)
    v0 = a0 + v0;                                               // 0x0013f7b4: addu $v0, $a0, $v0
    a2 = a2 + a0;                                               // 0x0013f7b8: addu $a2, $a2, $a0
    /* divide: v0 / v1 -> hi:lo */                              // 0x0013f7bc: div $zero, $v0, $v1
    *(uint32_t*)(s1) = a2;                                      // 0x0013f7c0: sw $a2, 0($s1)
    /* beqzl $v1, 0x13f7cc */                                   // 0x0013f7c4: beqzl $v1, 0x13f7cc
    /* break (trap) */                                          // 0x0013f7c8: break 0, 7
    a0 = *(int32_t*)((s0) + 0x10);                              // 0x0013f7cc: lw $a0, 0x10($s0)
    v1 = *(int32_t*)((s0) + 0x28);                              // 0x0013f7d0: lw $v1, 0x28($s0)
    /* mfhi $a1 */                                              // 0x0013f7d4
    *(uint32_t*)((s0) + 0x14) = a1;                             // 0x0013f7d8: sw $a1, 0x14($s0)
    v0 = *(int32_t*)((s1) + 4);                                 // 0x0013f7dc: lw $v0, 4($s1)
    a0 = a0 - v0;                                               // 0x0013f7e0: subu $a0, $a0, $v0
    *(uint32_t*)((s0) + 0x10) = a0;                             // 0x0013f7e4: sw $a0, 0x10($s0)
    v0 = *(int32_t*)((s1) + 4);                                 // 0x0013f7e8: lw $v0, 4($s1)
    v1 = v1 + v0;                                               // 0x0013f7ec: addu $v1, $v1, $v0
    goto label_0x13f898;                                        // 0x0013f7f0: b 0x13f898
    *(uint32_t*)((s0) + 0x28) = v1;                             // 0x0013f7f4: sw $v1, 0x28($s0)
label_0x13f7f8:
    if (s2 != v0) goto label_0x13f880;                          // 0x0013f7f8: bnel $s2, $v0, 0x13f880
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x0013f7fc: lw $v0, 0x38($s0)
    v1 = *(int32_t*)((s0) + 0x18);                              // 0x0013f800: lw $v1, 0x18($s0)
    v0 = *(int32_t*)((s0) + 0x20);                              // 0x0013f804: lw $v0, 0x20($s0)
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x0013f808: lw $a0, 0x24($s0)
    a1 = *(int32_t*)((s0) + 0xc);                               // 0x0013f80c: lw $a1, 0xc($s0)
    v0 = v0 - v1;                                               // 0x0013f810: subu $v0, $v0, $v1
    v0 = v0 + a0;                                               // 0x0013f814: addu $v0, $v0, $a0
    a2 = *(int32_t*)((s0) + 0x1c);                              // 0x0013f818: lw $a2, 0x1c($s0)
    v1 = (a1 < v0) ? 1 : 0;                                     // 0x0013f81c: slt $v1, $a1, $v0
    if (v1 != 0) v0 = a1;                                       // 0x0013f820: movn $v0, $a1, $v1
    a0 = (v0 < s3) ? 1 : 0;                                     // 0x0013f824: slt $a0, $v0, $s3
    if (a0 == 0) v0 = s3;                                       // 0x0013f828: movz $v0, $s3, $a0
    *(uint32_t*)((s1) + 4) = v0;                                // 0x0013f82c: sw $v0, 4($s1)
    a0 = *(int32_t*)((s0) + 0x18);                              // 0x0013f830: lw $a0, 0x18($s0)
    v1 = *(int32_t*)((s0) + 0x20);                              // 0x0013f834: lw $v1, 0x20($s0)
    v0 = a0 + v0;                                               // 0x0013f838: addu $v0, $a0, $v0
    a2 = a2 + a0;                                               // 0x0013f83c: addu $a2, $a2, $a0
    /* divide: v0 / v1 -> hi:lo */                              // 0x0013f840: div $zero, $v0, $v1
    *(uint32_t*)(s1) = a2;                                      // 0x0013f844: sw $a2, 0($s1)
    /* beqzl $v1, 0x13f850 */                                   // 0x0013f848: beqzl $v1, 0x13f850
    /* break (trap) */                                          // 0x0013f84c: break 0, 7
    a0 = *(int32_t*)((s0) + 0xc);                               // 0x0013f850: lw $a0, 0xc($s0)
    v1 = *(int32_t*)((s0) + 0x30);                              // 0x0013f854: lw $v1, 0x30($s0)
    /* mfhi $a1 */                                              // 0x0013f858
    *(uint32_t*)((s0) + 0x18) = a1;                             // 0x0013f85c: sw $a1, 0x18($s0)
    v0 = *(int32_t*)((s1) + 4);                                 // 0x0013f860: lw $v0, 4($s1)
    a0 = a0 - v0;                                               // 0x0013f864: subu $a0, $a0, $v0
    *(uint32_t*)((s0) + 0xc) = a0;                              // 0x0013f868: sw $a0, 0xc($s0)
    v0 = *(int32_t*)((s1) + 4);                                 // 0x0013f86c: lw $v0, 4($s1)
    v1 = v1 + v0;                                               // 0x0013f870: addu $v1, $v1, $v0
    goto label_0x13f898;                                        // 0x0013f874: b 0x13f898
    *(uint32_t*)((s0) + 0x30) = v1;                             // 0x0013f878: sw $v1, 0x30($s0)
    /* nop */                                                   // 0x0013f87c: nop 
label_0x13f880:
    *(uint32_t*)(s1) = 0;                                       // 0x0013f880: sw $zero, 0($s1)
    if (v0 == 0) goto label_0x13f898;                           // 0x0013f884: beqz $v0, 0x13f898
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x0013f888: sw $zero, 4($s1)
    a0 = *(int32_t*)((s0) + 0x3c);                              // 0x0013f88c: lw $a0, 0x3c($s0)
    /* call function at address in v0 */                        // 0x0013f890: jalr $v0
    a1 = -3;                                                    // 0x0013f894: addiu $a1, $zero, -3
label_0x13f898:
    return func_0013ef80();  // Tail call                        // 0x0013f8ac: j 0x13ef30
    sp = sp + 0x30;                                             // 0x0013f8b0: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x0013f8b4: nop 
    sp = sp + -0x20;                                            // 0x0013f8b8: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((s1) + 4);                                 // 0x0013f8d4: lw $v0, 4($s1)
    if (v0 <= 0) goto label_0x13fa00;                           // 0x0013f8d8: blez $v0, 0x13fa00
    v0 = *(int32_t*)(s1);                                       // 0x0013f8e0: lw $v0, 0($s1)
    /* beqzl $v0, 0x13fa04 */                                   // 0x0013f8e4: beqzl $v0, 0x13fa04
    func_0013ef18();  // 13ef18                                // 0x0013f8ec: jal 0x13ef18
    /* nop */                                                   // 0x0013f8f0: nop 
    v0 = 1;                                                     // 0x0013f8f4: addiu $v0, $zero, 1
    if (s2 != v0) goto label_0x13f9a0;                          // 0x0013f8f8: bne $s2, $v0, 0x13f9a0
    /* nop */                                                   // 0x0013f8fc: nop 
    a1 = *(int32_t*)(s1);                                       // 0x0013f900: lw $a1, 0($s1)
    t1 = *(int32_t*)((s0) + 0x1c);                              // 0x0013f904: lw $t1, 0x1c($s0)
    v0 = *(int32_t*)((s0) + 0xc);                               // 0x0013f908: lw $v0, 0xc($s0)
    a0 = *(int32_t*)((s1) + 4);                                 // 0x0013f90c: lw $a0, 4($s1)
    a3 = a1 - t1;                                               // 0x0013f910: subu $a3, $a1, $t1
    a2 = *(int32_t*)((s0) + 0x24);                              // 0x0013f914: lw $a2, 0x24($s0)
    v0 = v0 + a0;                                               // 0x0013f918: addu $v0, $v0, $a0
    v1 = (a3 < a2) ? 1 : 0;                                     // 0x0013f91c: slt $v1, $a3, $a2
    if (v1 == 0) goto label_0x13f950;                           // 0x0013f920: beqz $v1, 0x13f950
    *(uint32_t*)((s0) + 0xc) = v0;                              // 0x0013f924: sw $v0, 0xc($s0)
    v1 = *(int32_t*)((s1) + 4);                                 // 0x0013f928: lw $v1, 4($s1)
    a2 = a2 - a3;                                               // 0x0013f92c: subu $a2, $a2, $a3
    a0 = *(int32_t*)((s0) + 0x20);                              // 0x0013f930: lw $a0, 0x20($s0)
    v0 = (v1 < a2) ? 1 : 0;                                     // 0x0013f934: slt $v0, $v1, $a2
    a0 = a0 + a3;                                               // 0x0013f938: addu $a0, $a0, $a3
    if (v0 != 0) a2 = v1;                                       // 0x0013f93c: movn $a2, $v1, $v0
    func_00107ab8();  // 107ab8                                // 0x0013f940: jal 0x107ab8
    a0 = t1 + a0;                                               // 0x0013f944: addu $a0, $t1, $a0
    a1 = *(int32_t*)(s1);                                       // 0x0013f948: lw $a1, 0($s1)
    t1 = *(int32_t*)((s0) + 0x1c);                              // 0x0013f94c: lw $t1, 0x1c($s0)
label_0x13f950:
    t0 = *(int32_t*)((s1) + 4);                                 // 0x0013f950: lw $t0, 4($s1)
    v1 = a1 - t1;                                               // 0x0013f954: subu $v1, $a1, $t1
    a0 = *(int32_t*)((s0) + 0x20);                              // 0x0013f958: lw $a0, 0x20($s0)
    a3 = v1 + t0;                                               // 0x0013f95c: addu $a3, $v1, $t0
    v0 = (a0 < a3) ? 1 : 0;                                     // 0x0013f960: slt $v0, $a0, $a3
    /* beqzl $v0, 0x13f990 */                                   // 0x0013f964: beqzl $v0, 0x13f990
    v0 = *(int32_t*)((s0) + 0x34);                              // 0x0013f968: lw $v0, 0x34($s0)
    a2 = a3 - a0;                                               // 0x0013f96c: subu $a2, $a3, $a0
    v0 = (t0 < a2) ? 1 : 0;                                     // 0x0013f974: slt $v0, $t0, $a2
    if (v0 != 0) a2 = t0;                                       // 0x0013f978: movn $a2, $t0, $v0
    a1 = a3 - a2;                                               // 0x0013f97c: subu $a1, $a3, $a2
    func_00107ab8();  // 107ab8                                // 0x0013f980: jal 0x107ab8
    a1 = a0 + a1;                                               // 0x0013f984: addu $a1, $a0, $a1
    t0 = *(int32_t*)((s1) + 4);                                 // 0x0013f988: lw $t0, 4($s1)
    v0 = *(int32_t*)((s0) + 0x34);                              // 0x0013f98c: lw $v0, 0x34($s0)
    v0 = v0 + t0;                                               // 0x0013f990: addu $v0, $v0, $t0
    goto label_0x13f9e8;                                        // 0x0013f994: b 0x13f9e8
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x0013f998: sw $v0, 0x34($s0)
    /* nop */                                                   // 0x0013f99c: nop 
label_0x13f9a0:
    /* bnezl $s2, 0x13f9d0 */                                   // 0x0013f9a0: bnezl $s2, 0x13f9d0
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x0013f9a4: lw $v0, 0x38($s0)
    v1 = *(int32_t*)((s1) + 4);                                 // 0x0013f9a8: lw $v1, 4($s1)
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x0013f9ac: lw $v0, 0x10($s0)
    a0 = *(int32_t*)((s0) + 0x2c);                              // 0x0013f9b0: lw $a0, 0x2c($s0)
    v0 = v0 + v1;                                               // 0x0013f9b4: addu $v0, $v0, $v1
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x0013f9b8: sw $v0, 0x10($s0)
    v1 = *(int32_t*)((s1) + 4);                                 // 0x0013f9bc: lw $v1, 4($s1)
    a0 = a0 + v1;                                               // 0x0013f9c0: addu $a0, $a0, $v1
    goto label_0x13f9e8;                                        // 0x0013f9c4: b 0x13f9e8
    *(uint32_t*)((s0) + 0x2c) = a0;                             // 0x0013f9c8: sw $a0, 0x2c($s0)
    /* nop */                                                   // 0x0013f9cc: nop 
    *(uint32_t*)(s1) = 0;                                       // 0x0013f9d0: sw $zero, 0($s1)
    if (v0 == 0) goto label_0x13f9e8;                           // 0x0013f9d4: beqz $v0, 0x13f9e8
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x0013f9d8: sw $zero, 4($s1)
    a0 = *(int32_t*)((s0) + 0x3c);                              // 0x0013f9dc: lw $a0, 0x3c($s0)
    /* call function at address in v0 */                        // 0x0013f9e0: jalr $v0
    a1 = -3;                                                    // 0x0013f9e4: addiu $a1, $zero, -3
label_0x13f9e8:
    return func_0013ef80();  // Tail call                        // 0x0013f9f8: j 0x13ef30
    sp = sp + 0x20;                                             // 0x0013f9fc: addiu $sp, $sp, 0x20
label_0x13fa00:
    return;                                                     // 0x0013fa10: jr $ra
    sp = sp + 0x20;                                             // 0x0013fa14: addiu $sp, $sp, 0x20
}