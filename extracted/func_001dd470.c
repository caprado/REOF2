void func_001dd470() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001dd470: addiu $sp, $sp, -0x50
    v0 = 1;                                                     // 0x001dd474: addiu $v0, $zero, 1
    s1 = a1 & 0x22;                                             // 0x001dd480: andi $s1, $a1, 0x22
    s0 = a3 & 0xffff;                                           // 0x001dd498: andi $s0, $a3, 0xffff
    if (a0 == v0) goto label_0x1dd4e4;                          // 0x001dd49c: beq $a0, $v0, 0x1dd4e4
    s1 = ((unsigned)0 < (unsigned)s1) ? 1 : 0;                  // 0x001dd4a0: sltu $s1, $zero, $s1
    v0 = (a0 < 2) ? 1 : 0;                                      // 0x001dd4a4: slti $v0, $a0, 2
    /* beqzl $v0, 0x1dd4c0 */                                   // 0x001dd4a8: beqzl $v0, 0x1dd4c0
    v0 = 2;                                                     // 0x001dd4ac: addiu $v0, $zero, 2
    if (a0 == 0) goto label_0x1dd4d0;                           // 0x001dd4b0: beqz $a0, 0x1dd4d0
    a0 = 0x25 << 16;                                            // 0x001dd4b4: lui $a0, 0x25
    goto label_0x1dd50c;                                        // 0x001dd4b8: b 0x1dd50c
    /* nop */                                                   // 0x001dd4bc: nop 
    if (a0 == v0) goto label_0x1dd4f8;                          // 0x001dd4c0: beq $a0, $v0, 0x1dd4f8
    a0 = 0x25 << 16;                                            // 0x001dd4c4: lui $a0, 0x25
    goto label_0x1dd50c;                                        // 0x001dd4c8: b 0x1dd50c
    /* nop */                                                   // 0x001dd4cc: nop 
label_0x1dd4d0:
    v0 = 0x25 << 16;                                            // 0x001dd4d0: lui $v0, 0x25
    v1 = s1 << 9;                                               // 0x001dd4d4: sll $v1, $s1, 9
    v0 = v0 + -0x7c98;                                          // 0x001dd4d8: addiu $v0, $v0, -0x7c98
    goto label_0x1dd514;                                        // 0x001dd4dc: b 0x1dd514
    s2 = v1 + v0;                                               // 0x001dd4e0: addu $s2, $v1, $v0
label_0x1dd4e4:
    v0 = 0x25 << 16;                                            // 0x001dd4e4: lui $v0, 0x25
    v1 = s1 << 9;                                               // 0x001dd4e8: sll $v1, $s1, 9
    v0 = v0 + -0x7898;                                          // 0x001dd4ec: addiu $v0, $v0, -0x7898
    goto label_0x1dd514;                                        // 0x001dd4f0: b 0x1dd514
    s2 = v1 + v0;                                               // 0x001dd4f4: addu $s2, $v1, $v0
label_0x1dd4f8:
    v0 = 0x25 << 16;                                            // 0x001dd4f8: lui $v0, 0x25
    v1 = s1 << 9;                                               // 0x001dd4fc: sll $v1, $s1, 9
    v0 = v0 + -0x7498;                                          // 0x001dd500: addiu $v0, $v0, -0x7498
    goto label_0x1dd514;                                        // 0x001dd504: b 0x1dd514
    s2 = v1 + v0;                                               // 0x001dd508: addu $s2, $v1, $v0
label_0x1dd50c:
    func_00116598();  // 0x116508                                // 0x001dd50c: jal 0x116508
    a0 = &str_00248350;  // "BIO-VOL2"                          // 0x001dd510: addiu $a0, $a0, -0x7cb0
label_0x1dd514:
    if (s0 == 0) goto label_0x1dd5ac;                           // 0x001dd514: beqz $s0, 0x1dd5ac
    v0 = ((unsigned)s0 < (unsigned)0x100) ? 1 : 0;              // 0x001dd51c: sltiu $v0, $s0, 0x100
    if (v0 != 0) goto label_0x1dd530;                           // 0x001dd520: bnez $v0, 0x1dd530
    v0 = s0 << 1;                                               // 0x001dd524: sll $v0, $s0, 1
    goto label_0x1dd5ac;                                        // 0x001dd528: b 0x1dd5ac
label_0x1dd530:
    v1 = 0x4000;                                                // 0x001dd530: addiu $v1, $zero, 0x4000
    v0 = v0 + s2;                                               // 0x001dd534: addu $v0, $v0, $s2
    a1 = g_00248b68;  // Global at 0x00248b68                   // 0x001dd538: lhu $a1, 0($v0)
    if (a1 != v1) goto label_0x1dd558;                          // 0x001dd53c: bne $a1, $v1, 0x1dd558
    v0 = 0 | 0x8000;                                            // 0x001dd540: ori $v0, $zero, 0x8000
    a0 = s3 & 0xff;                                             // 0x001dd544: andi $a0, $s3, 0xff
    func_001dd638();  // 0x1dd5c8                                // 0x001dd548: jal 0x1dd5c8
    a1 = s0 & 0xff;                                             // 0x001dd54c: andi $a1, $s0, 0xff
    v0 = 0 | 0x8000;                                            // 0x001dd554: ori $v0, $zero, 0x8000
label_0x1dd558:
    if (a1 == v0) goto label_0x1dd560;                          // 0x001dd558: beql $a1, $v0, 0x1dd560
    a1 = s0 | 0x8000;                                           // 0x001dd55c: ori $a1, $s0, 0x8000
label_0x1dd560:
    v0 = a1 + -0x61;                                            // 0x001dd560: addiu $v0, $a1, -0x61
    v0 = v0 & 0xffff;                                           // 0x001dd564: andi $v0, $v0, 0xffff
    v0 = ((unsigned)v0 < (unsigned)0x1a) ? 1 : 0;               // 0x001dd568: sltiu $v0, $v0, 0x1a
    if (v0 == 0) goto label_0x1dd580;                           // 0x001dd56c: beqz $v0, 0x1dd580
    v0 = s3 & 2;                                                // 0x001dd570: andi $v0, $s3, 2
    if (v0 == 0) goto label_0x1dd580;                           // 0x001dd574: beqz $v0, 0x1dd580
    v0 = a1 + -0x20;                                            // 0x001dd578: addiu $v0, $a1, -0x20
    a1 = v0 & 0xffff;                                           // 0x001dd57c: andi $a1, $v0, 0xffff
label_0x1dd580:
    v0 = a1 + -0x41;                                            // 0x001dd580: addiu $v0, $a1, -0x41
    v0 = v0 & 0xffff;                                           // 0x001dd584: andi $v0, $v0, 0xffff
    v0 = ((unsigned)v0 < (unsigned)0x1a) ? 1 : 0;               // 0x001dd588: sltiu $v0, $v0, 0x1a
    if (v0 == 0) goto label_0x1dd5a8;                           // 0x001dd58c: beqz $v0, 0x1dd5a8
    v0 = s3 & 2;                                                // 0x001dd590: andi $v0, $s3, 2
    if (v0 == 0) goto label_0x1dd5ac;                           // 0x001dd594: beqz $v0, 0x1dd5ac
    if (s1 == 0) goto label_0x1dd5a8;                           // 0x001dd59c: beqz $s1, 0x1dd5a8
    v0 = a1 + 0x20;                                             // 0x001dd5a0: addiu $v0, $a1, 0x20
    a1 = v0 & 0xffff;                                           // 0x001dd5a4: andi $a1, $v0, 0xffff
label_0x1dd5a8:
label_0x1dd5ac:
    return;                                                     // 0x001dd5c0: jr $ra
    sp = sp + 0x50;                                             // 0x001dd5c4: addiu $sp, $sp, 0x50
}