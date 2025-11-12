void func_0010c588() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x60;                                            // 0x0010c588: addiu $sp, $sp, -0x60
    local_0 = a0;                                               // 0x0010c5a8: sw $a0, 0($sp)
    /* nop */                                                   // 0x0010c5cc: nop 
label_0x10c5d0:
    s1 = *(int8_t*)(s2);                                        // 0x0010c5d0: lb $s1, 0($s2)
    v0 = 0x22 << 16;                                            // 0x0010c5d4: lui $v0, 0x22
    v0 = v0 + s1;                                               // 0x0010c5d8: addu $v0, $v0, $s1
    v0 = g_0021ffe9;  // Global at 0x0021ffe9                   // 0x0010c5dc: lbu $v0, -0x17($v0)
    v0 = v0 & 8;                                                // 0x0010c5e0: andi $v0, $v0, 8
    /* nop */                                                   // 0x0010c5e4: nop 
    /* nop */                                                   // 0x0010c5e8: nop 
    if (v0 != 0) goto label_0x10c5d0;                           // 0x0010c5ec: bnez $v0, 0x10c5d0
    s2 = s2 + 1;                                                // 0x0010c5f0: addiu $s2, $s2, 1
    v0 = 0x2d;                                                  // 0x0010c5f4: addiu $v0, $zero, 0x2d
    if (s1 != v0) goto label_0x10c610;                          // 0x0010c5f8: bne $s1, $v0, 0x10c610
    v0 = 0x2b;                                                  // 0x0010c5fc: addiu $v0, $zero, 0x2b
    s1 = *(int8_t*)(s2);                                        // 0x0010c600: lb $s1, 0($s2)
    s2 = s2 + 1;                                                // 0x0010c604: addiu $s2, $s2, 1
    goto label_0x10c620;                                        // 0x0010c608: b 0x10c620
    s7 = 1;                                                     // 0x0010c60c: addiu $s7, $zero, 1
label_0x10c610:
    if (s1 != v0) goto label_0x10c620;                          // 0x0010c610: bne $s1, $v0, 0x10c620
    /* nop */                                                   // 0x0010c614: nop 
    s1 = *(int8_t*)(s2);                                        // 0x0010c618: lb $s1, 0($s2)
    s2 = s2 + 1;                                                // 0x0010c61c: addiu $s2, $s2, 1
label_0x10c620:
    if (s3 == 0) goto label_0x10c630;                           // 0x0010c620: beqz $s3, 0x10c630
    v0 = 0x10;                                                  // 0x0010c624: addiu $v0, $zero, 0x10
    if (s3 != v0) goto label_0x10c65c;                          // 0x0010c628: bne $s3, $v0, 0x10c65c
    /* nop */                                                   // 0x0010c62c: nop 
label_0x10c630:
    v0 = 0x30;                                                  // 0x0010c630: addiu $v0, $zero, 0x30
    if (s1 != v0) goto label_0x10c65c;                          // 0x0010c634: bne $s1, $v0, 0x10c65c
    v0 = 0x78;                                                  // 0x0010c638: addiu $v0, $zero, 0x78
    v1 = *(int8_t*)(s2);                                        // 0x0010c63c: lb $v1, 0($s2)
    if (v1 == v0) goto label_0x10c650;                          // 0x0010c640: beq $v1, $v0, 0x10c650
    v0 = 0x58;                                                  // 0x0010c644: addiu $v0, $zero, 0x58
    if (v1 != v0) goto label_0x10c65c;                          // 0x0010c648: bne $v1, $v0, 0x10c65c
    /* nop */                                                   // 0x0010c64c: nop 
label_0x10c650:
    s1 = *(int8_t*)((s2) + 1);                                  // 0x0010c650: lb $s1, 1($s2)
    s2 = s2 + 2;                                                // 0x0010c654: addiu $s2, $s2, 2
    s3 = 0x10;                                                  // 0x0010c658: addiu $s3, $zero, 0x10
label_0x10c65c:
    if (s3 != 0) goto label_0x10c670;                           // 0x0010c65c: bnez $s3, 0x10c670
    v1 = 0xa;                                                   // 0x0010c660: addiu $v1, $zero, 0xa
    s3 = 8;                                                     // 0x0010c664: addiu $s3, $zero, 8
    v0 = s1 ^ 0x30;                                             // 0x0010c668: xori $v0, $s1, 0x30
    if (v0 != 0) s3 = v1;                                       // 0x0010c66c: movn $s3, $v1, $v0
label_0x10c670:
    v0 = -1;                                                    // 0x0010c670: addiu $v0, $zero, -1
    s4 = 0 | 0x8000;                                            // 0x0010c678: ori $s4, $zero, 0x8000
    if (s7 == 0) s4 = v0;                                       // 0x0010c680: movz $s4, $v0, $s7
    func_00110fd0();  // 0x110a68                                // 0x0010c68c: jal 0x110a68
    func_00110a68();  // 0x1104e8                                // 0x0010c6a0: jal 0x1104e8
    goto label_0x10c708;                                        // 0x0010c6b0: b 0x10c708
label_0x10c6b8:
    v0 = (s1 < s3) ? 1 : 0;                                     // 0x0010c6b8: slt $v0, $s1, $s3
    if (v0 == 0) goto label_0x10c748;                           // 0x0010c6bc: beqz $v0, 0x10c748
    /* nop */                                                   // 0x0010c6c0: nop 
    if (a2 < 0) goto label_0x10c6e8;                            // 0x0010c6c4: bltz $a2, 0x10c6e8
    v0 = ((unsigned)s4 < (unsigned)a1) ? 1 : 0;                 // 0x0010c6c8: sltu $v0, $s4, $a1
    /* bnezl $v0, 0x10c700 */                                   // 0x0010c6cc: bnezl $v0, 0x10c700
    a2 = -1;                                                    // 0x0010c6d0: addiu $a2, $zero, -1
    if (a1 != s4) goto label_0x10c6f0;                          // 0x0010c6d4: bne $a1, $s4, 0x10c6f0
    v0 = (s6 < s1) ? 1 : 0;                                     // 0x0010c6dc: slt $v0, $s6, $s1
    if (v0 == 0) goto label_0x10c6f0;                           // 0x0010c6e0: beqz $v0, 0x10c6f0
    /* nop */                                                   // 0x0010c6e4: nop 
label_0x10c6e8:
    goto label_0x10c700;                                        // 0x0010c6e8: b 0x10c700
    a2 = -1;                                                    // 0x0010c6ec: addiu $a2, $zero, -1
label_0x10c6f0:
    func_0010f7c0();  // 0x10f748                                // 0x0010c6f0: jal 0x10f748
    a2 = 1;                                                     // 0x0010c6f8: addiu $a2, $zero, 1
label_0x10c700:
    s1 = *(int8_t*)(s2);                                        // 0x0010c700: lb $s1, 0($s2)
    s2 = s2 + 1;                                                // 0x0010c704: addiu $s2, $s2, 1
label_0x10c708:
    a0 = 0x22 << 16;                                            // 0x0010c708: lui $a0, 0x22
    a0 = a0 + s1;                                               // 0x0010c70c: addu $a0, $a0, $s1
    a0 = g_0021ffe9;  // Global at 0x0021ffe9                   // 0x0010c710: lbu $a0, -0x17($a0)
    v0 = a0 & 4;                                                // 0x0010c714: andi $v0, $a0, 4
    if (v0 == 0) goto label_0x10c728;                           // 0x0010c718: beqz $v0, 0x10c728
    v0 = a0 & 3;                                                // 0x0010c71c: andi $v0, $a0, 3
    goto label_0x10c6b8;                                        // 0x0010c720: b 0x10c6b8
    s1 = s1 + -0x30;                                            // 0x0010c724: addiu $s1, $s1, -0x30
label_0x10c728:
    if (v0 == 0) goto label_0x10c748;                           // 0x0010c728: beqz $v0, 0x10c748
    v0 = s1 + -0x37;                                            // 0x0010c72c: addiu $v0, $s1, -0x37
    v1 = s1 + -0x57;                                            // 0x0010c730: addiu $v1, $s1, -0x57
    a0 = a0 & 1;                                                // 0x0010c734: andi $a0, $a0, 1
    goto label_0x10c6b8;                                        // 0x0010c73c: b 0x10c6b8
    if (a0 == 0) s1 = v1;                                       // 0x0010c740: movz $s1, $v1, $a0
    /* nop */                                                   // 0x0010c744: nop 
label_0x10c748:
    if (a2 >= 0) goto label_0x10c778;                           // 0x0010c748: bgez $a2, 0x10c778
    v1 = -1;                                                    // 0x0010c750: addiu $v1, $zero, -1
    a1 = 0 | 0x8000;                                            // 0x0010c758: ori $a1, $zero, 0x8000
    if (s7 == 0) a1 = v1;                                       // 0x0010c760: movz $a1, $v1, $s7
    v1 = local_0;                                               // 0x0010c764: lw $v1, 0($sp)
    v0 = 0x22;                                                  // 0x0010c768: addiu $v0, $zero, 0x22
    goto label_0x10c77c;                                        // 0x0010c76c: b 0x10c77c
    *(uint32_t*)(v1) = v0;                                      // 0x0010c770: sw $v0, 0($v1)
    /* nop */                                                   // 0x0010c774: nop 
label_0x10c778:
    if (s7 != 0) a1 = v0;                                       // 0x0010c778: movn $a1, $v0, $s7
label_0x10c77c:
    if (fp == 0) goto label_0x10c78c;                           // 0x0010c77c: beqz $fp, 0x10c78c
    v0 = s2 + -1;                                               // 0x0010c780: addiu $v0, $s2, -1
    if (a2 != 0) s5 = v0;                                       // 0x0010c784: movn $s5, $v0, $a2
    *(uint32_t*)(fp) = s5;                                      // 0x0010c788: sw $s5, 0($fp)
label_0x10c78c:
    return;                                                     // 0x0010c7b8: jr $ra
    sp = sp + 0x60;                                             // 0x0010c7bc: addiu $sp, $sp, 0x60
}