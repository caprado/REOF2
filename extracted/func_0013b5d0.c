void func_0013b5d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0013b5d0: addiu $sp, $sp, -0x40
    if (s1 != 0) goto label_0x13b610;                           // 0x0013b5f8: bnez $s1, 0x13b610
    a1 = 0x22 << 16;                                            // 0x0013b600: lui $a1, 0x22
    goto label_0x13b62c;                                        // 0x0013b604: b 0x13b62c
    a1 = &str_00225930;  // "E0092713:nsct < 0.(htCiReqRd)"     // 0x0013b608: addiu $a1, $a1, 0x5930
    /* nop */                                                   // 0x0013b60c: nop 
label_0x13b610:
    if (s2 >= 0) goto label_0x13b620;                           // 0x0013b610: bgez $s2, 0x13b620
    a1 = 0x22 << 16;                                            // 0x0013b614: lui $a1, 0x22
    goto label_0x13b62c;                                        // 0x0013b618: b 0x13b62c
    a1 = &str_00225948;  // "E0092714:buf is null.(htCiReqRd)"  // 0x0013b61c: addiu $a1, $a1, 0x5948
label_0x13b620:
    if (s3 != 0) goto label_0x13b640;                           // 0x0013b620: bnez $s3, 0x13b640
    a1 = 0x22 << 16;                                            // 0x0013b624: lui $a1, 0x22
    a1 = &str_00225968;  // "E0082401:handl is null."           // 0x0013b628: addiu $a1, $a1, 0x5968
label_0x13b62c:
    func_0013acb8();  // 0x13ac88                                // 0x0013b62c: jal 0x13ac88
    /* nop */                                                   // 0x0013b630: nop 
    goto label_0x13b73c;                                        // 0x0013b634: b 0x13b73c
    /* nop */                                                   // 0x0013b63c: nop 
label_0x13b640:
    func_0013ad08();  // 0x13acb8                                // 0x0013b640: jal 0x13acb8
    s4 = 1;                                                     // 0x0013b644: addiu $s4, $zero, 1
    if (v0 != s4) goto label_0x13b658;                          // 0x0013b648: bnel $v0, $s4, 0x13b658
    v1 = *(int8_t*)((s1) + 2);                                  // 0x0013b64c: lb $v1, 2($s1)
    goto label_0x13b73c;                                        // 0x0013b650: b 0x13b73c
label_0x13b658:
    s5 = 2;                                                     // 0x0013b658: addiu $s5, $zero, 2
    if (v1 == s5) goto label_0x13b73c;                          // 0x0013b65c: beq $v1, $s5, 0x13b73c
    if (s2 != 0) goto label_0x13b678;                           // 0x0013b664: bnez $s2, 0x13b678
    /* nop */                                                   // 0x0013b668: nop 
    goto label_0x13b73c;                                        // 0x0013b66c: b 0x13b73c
    *(uint8_t*)((s1) + 2) = s4;                                 // 0x0013b670: sb $s4, 2($s1)
    /* nop */                                                   // 0x0013b674: nop 
label_0x13b678:
    func_00137088();  // 0x137000                                // 0x0013b678: jal 0x137000
    /* nop */                                                   // 0x0013b67c: nop 
    if (v1 == 0) goto label_0x13b73c;                           // 0x0013b684: beqz $v1, 0x13b73c
    *(uint32_t*)((s1) + 0x2c) = v1;                             // 0x0013b688: sw $v1, 0x2c($s1)
    v1 = *(int32_t*)((s1) + 0x1c);                              // 0x0013b68c: lw $v1, 0x1c($s1)
    v0 = *(int32_t*)((s1) + 0x10);                              // 0x0013b694: lw $v0, 0x10($s1)
    s0 = s2 << 0xb;                                             // 0x0013b698: sll $s0, $s2, 0xb
    v0 = v0 - v1;                                               // 0x0013b6a0: subu $v0, $v0, $v1
    *(uint32_t*)((s1) + 0x20) = s3;                             // 0x0013b6a4: sw $s3, 0x20($s1)
    v1 = (s2 < v0) ? 1 : 0;                                     // 0x0013b6a8: slt $v1, $s2, $v0
    a2 = ((unsigned)a3 < (unsigned)s0) ? 1 : 0;                 // 0x0013b6ac: sltu $a2, $a3, $s0
    if (v1 == 0) a1 = v0;                                       // 0x0013b6b0: movz $a1, $v0, $v1
    *(uint32_t*)((s1) + 0x24) = a1;                             // 0x0013b6b8: sw $a1, 0x24($s1)
    func_0013add0();  // 0x13ad70                                // 0x0013b6bc: jal 0x13ad70
    if (a2 != 0) s0 = a3;                                       // 0x0013b6c0: movn $s0, $a3, $a2
    a0 = *(int32_t*)((s1) + 0x2c);                              // 0x0013b6c4: lw $a0, 0x2c($s1)
    a1 = *(int32_t*)((s1) + 0x18);                              // 0x0013b6c8: lw $a1, 0x18($s1)
    a2 = *(int32_t*)((s1) + 0x1c);                              // 0x0013b6d0: lw $a2, 0x1c($s1)
    func_001372c8();  // 0x137218                                // 0x0013b6d4: jal 0x137218
    if (v0 == 0) goto label_0x13b740;                           // 0x0013b6dc: beqz $v0, 0x13b740
    v0 = 0x20 << 16;                                            // 0x0013b6e4: lui $v0, 0x20
    s0 = g_002044a0;  // Global at 0x002044a0                   // 0x0013b6e8: lw $s0, 0x44a0($v0)
    if (s0 != s4) goto label_0x13b730;                          // 0x0013b6ec: bnel $s0, $s4, 0x13b730
    *(uint8_t*)((s1) + 2) = s5;                                 // 0x0013b6f0: sb $s5, 2($s1)
    func_00137bb8();  // 0x137b50                                // 0x0013b6f4: jal 0x137b50
    /* nop */                                                   // 0x0013b6f8: nop 
    func_00137b50();  // 0x137a40                                // 0x0013b6fc: jal 0x137a40
    /* nop */                                                   // 0x0013b700: nop 
    v0 = *(int32_t*)((s1) + 0x1c);                              // 0x0013b704: lw $v0, 0x1c($s1)
    v1 = *(int32_t*)((s1) + 0x24);                              // 0x0013b708: lw $v1, 0x24($s1)
    a0 = *(int32_t*)((s1) + 0x2c);                              // 0x0013b70c: lw $a0, 0x2c($s1)
    v0 = v0 + v1;                                               // 0x0013b710: addu $v0, $v0, $v1
    func_00137128();  // 0x137088                                // 0x0013b714: jal 0x137088
    *(uint32_t*)((s1) + 0x1c) = v0;                             // 0x0013b718: sw $v0, 0x1c($s1)
    *(uint32_t*)((s1) + 0x2c) = 0;                              // 0x0013b71c: sw $zero, 0x2c($s1)
    v0 = *(int32_t*)((s1) + 0x24);                              // 0x0013b720: lw $v0, 0x24($s1)
    *(uint8_t*)((s1) + 2) = s0;                                 // 0x0013b724: sb $s0, 2($s1)
    goto label_0x13b738;                                        // 0x0013b728: b 0x13b738
    *(uint32_t*)((s1) + 0x28) = v0;                             // 0x0013b72c: sw $v0, 0x28($s1)
label_0x13b730:
    *(uint32_t*)((s1) + 0x28) = 0;                              // 0x0013b730: sw $zero, 0x28($s1)
    v0 = *(int32_t*)((s1) + 0x24);                              // 0x0013b734: lw $v0, 0x24($s1)
label_0x13b738:
    *(uint32_t*)((s1) + 0x14) = 0;                              // 0x0013b738: sw $zero, 0x14($s1)
label_0x13b73c:
label_0x13b740:
    return;                                                     // 0x0013b758: jr $ra
    sp = sp + 0x40;                                             // 0x0013b75c: addiu $sp, $sp, 0x40
}