void func_0013b760() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0013b760: addiu $sp, $sp, -0x40
    if (s0 != 0) goto label_0x13b7b8;                           // 0x0013b784: bnez $s0, 0x13b7b8
    a1 = 0x22 << 16;                                            // 0x0013b78c: lui $a1, 0x22
    a1 = &str_00225990;  // "HTCI: htCiStopTr timeout.\r\n"     // 0x0013b798: addiu $a1, $a1, 0x5990
    return func_0013acb8();  // Tail call                        // 0x0013b7b0: j 0x13ac88
    sp = sp + 0x40;                                             // 0x0013b7b4: addiu $sp, $sp, 0x40
label_0x13b7b8:
    v0 = *(uint8_t*)((s0) + 2);                                 // 0x0013b7b8: lbu $v0, 2($s0)
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x0013b7bc: sltiu $v0, $v0, 2
    /* bnezl $v0, 0x13b848 */                                   // 0x0013b7c0: bnezl $v0, 0x13b848
    a0 = *(int32_t*)((s0) + 0x2c);                              // 0x0013b7c8: lw $a0, 0x2c($s0)
    if (a0 == 0) goto label_0x13b7dc;                           // 0x0013b7cc: beqz $a0, 0x13b7dc
    s1 = 0x63 << 16;                                            // 0x0013b7d0: lui $s1, 0x63
    func_00137590();  // 0x137528                                // 0x0013b7d4: jal 0x137528
    /* nop */                                                   // 0x0013b7d8: nop 
label_0x13b7dc:
    s3 = 2;                                                     // 0x0013b7dc: addiu $s3, $zero, 2
    s1 = s1 | 0xfff6;                                           // 0x0013b7e0: ori $s1, $s1, 0xfff6
    s4 = 0x20 << 16;                                            // 0x0013b7e4: lui $s4, 0x20
    goto label_0x13b7f8;                                        // 0x0013b7e8: b 0x13b7f8
    s5 = 0x22 << 16;                                            // 0x0013b7ec: lui $s5, 0x22
label_0x13b7f0:
    func_0013ac88();  // 0x13ac58                                // 0x0013b7f0: jal 0x13ac58
    /* nop */                                                   // 0x0013b7f4: nop 
label_0x13b7f8:
    func_00137b50();  // 0x137a40                                // 0x0013b7f8: jal 0x137a40
    /* nop */                                                   // 0x0013b7fc: nop 
    func_0013af28();  // 0x13ae98                                // 0x0013b800: jal 0x13ae98
    /* nop */                                                   // 0x0013b804: nop 
    func_0013b8a8();  // 0x13b868                                // 0x0013b808: jal 0x13b868
    v1 = *(int8_t*)((s0) + 2);                                  // 0x0013b810: lb $v1, 2($s0)
    if (v1 != s3) goto label_0x13b840;                          // 0x0013b814: bnel $v1, $s3, 0x13b840
    *(uint32_t*)((s0) + 0x28) = 0;                              // 0x0013b818: sw $zero, 0x28($s0)
    s2 = s2 + 1;                                                // 0x0013b81c: addiu $s2, $s2, 1
    v0 = (s1 < s2) ? 1 : 0;                                     // 0x0013b820: slt $v0, $s1, $s2
    if (v0 == 0) goto label_0x13b7f0;                           // 0x0013b824: beqz $v0, 0x13b7f0
    v0 = g_002044a4;  // Global at 0x002044a4                   // 0x0013b828: lw $v0, 0x44a4($s4)
    if (v0 == v1) goto label_0x13b840;                          // 0x0013b82c: beql $v0, $v1, 0x13b840
    *(uint32_t*)((s0) + 0x28) = 0;                              // 0x0013b830: sw $zero, 0x28($s0)
    func_00116598();  // 0x116508                                // 0x0013b834: jal 0x116508
    a0 = &str_002259a8;  // "HTCI: \\"                          // 0x0013b838: addiu $a0, $s5, 0x59a8
    *(uint32_t*)((s0) + 0x28) = 0;                              // 0x0013b83c: sw $zero, 0x28($s0)
label_0x13b840:
    *(uint8_t*)((s0) + 2) = 0;                                  // 0x0013b840: sb $zero, 2($s0)
    return;                                                     // 0x0013b860: jr $ra
    sp = sp + 0x40;                                             // 0x0013b864: addiu $sp, $sp, 0x40
}