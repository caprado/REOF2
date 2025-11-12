void func_001719d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001719d0: addiu $sp, $sp, -0x40
    func_00171200();  // 0x1711f0                                // 0x00171a04: jal 0x1711f0
    if (v0 != 0) goto label_0x171a48;                           // 0x00171a14: bnez $v0, 0x171a48
    return func_00158df0();  // Tail call                        // 0x00171a3c: j 0x158de8
    sp = sp + 0x40;                                             // 0x00171a40: addiu $sp, $sp, 0x40
    /* nop */                                                   // 0x00171a44: nop 
label_0x171a48:
    func_00158ea8();  // 0x158df0                                // 0x00171a48: jal 0x158df0
    s2 = *(int32_t*)((s5) + 0x1b30);                            // 0x00171a4c: lw $s2, 0x1b30($s5)
    s0 = s2 + 0xa48;                                            // 0x00171a54: addiu $s0, $s2, 0xa48
    s3 = s2 + 0x9d8;                                            // 0x00171a58: addiu $s3, $s2, 0x9d8
    func_00171138();  // 0x170e20                                // 0x00171a60: jal 0x170e20
    s1 = s2 + 4;                                                // 0x00171a64: addiu $s1, $s2, 4
    func_00170d20();  // 0x170b20                                // 0x00171a68: jal 0x170b20
    a0 = s2 + 0xa00;                                            // 0x00171a70: addiu $a0, $s2, 0xa00
    v0 = 1;                                                     // 0x00171a74: addiu $v0, $zero, 1
    t2 = *(int32_t*)((s5) + 0x38);                              // 0x00171a78: lw $t2, 0x38($s5)
    *(uint32_t*)((s3) + 0x14) = v0;                             // 0x00171a7c: sw $v0, 0x14($s3)
    t1 = 2;                                                     // 0x00171a80: addiu $t1, $zero, 2
    v1 = *(int32_t*)((s1) + 0xc);                               // 0x00171a84: lw $v1, 0xc($s1)
    v0 = *(int32_t*)((s1) + 8);                                 // 0x00171a88: lw $v0, 8($s1)
    t0 = v1 + 0xf;                                              // 0x00171a8c: addiu $t0, $v1, 0xf
    a3 = (v1 < 0) ? 1 : 0;                                      // 0x00171a90: slti $a3, $v1, 0
    a2 = v0 + 0xf;                                              // 0x00171a94: addiu $a2, $v0, 0xf
    a1 = (v0 < 0) ? 1 : 0;                                      // 0x00171a98: slti $a1, $v0, 0
    if (a1 != 0) v0 = a2;                                       // 0x00171a9c: movn $v0, $a2, $a1
    if (a3 != 0) v1 = t0;                                       // 0x00171aa0: movn $v1, $t0, $a3
    v0 = v0 >> 4;                                               // 0x00171aa4: sra $v0, $v0, 4
    v1 = v1 >> 4;                                               // 0x00171aa8: sra $v1, $v1, 4
    if (t2 != t1) goto label_0x171ac8;                          // 0x00171aac: bne $t2, $t1, 0x171ac8
    func_00147a38();  // 0x1479f0                                // 0x00171ab4: jal 0x1479f0
    a1 = *(int32_t*)((s4) + 0x20);                              // 0x00171ab8: lw $a1, 0x20($s4)
    goto label_0x171ad4;                                        // 0x00171abc: b 0x171ad4
    *(uint32_t*)((s3) + 0x14) = 0;                              // 0x00171ac0: sw $zero, 0x14($s3)
    /* nop */                                                   // 0x00171ac4: nop 
label_0x171ac8:
    func_00147a80();  // 0x147a38                                // 0x00171ac8: jal 0x147a38
    a1 = *(int32_t*)((s4) + 0x20);                              // 0x00171acc: lw $a1, 0x20($s4)
    *(uint32_t*)((s3) + 0x14) = 0;                              // 0x00171ad0: sw $zero, 0x14($s3)
label_0x171ad4:
    func_00170e20();  // 0x170d20                                // 0x00171ad4: jal 0x170d20
    a0 = s3 + 0x70;                                             // 0x00171ad8: addiu $a0, $s3, 0x70
    func_00171cd8();  // 0x171cc0                                // 0x00171adc: jal 0x171cc0
    v1 = *(int32_t*)((s3) + 0x18);                              // 0x00171ae4: lw $v1, 0x18($s3)
    v0 = -3;                                                    // 0x00171ae8: addiu $v0, $zero, -3
    if (v1 == 0) v0 = s6;                                       // 0x00171af0: movz $v0, $s6, $v1
    return;                                                     // 0x00171b10: jr $ra
    sp = sp + 0x40;                                             // 0x00171b14: addiu $sp, $sp, 0x40
}