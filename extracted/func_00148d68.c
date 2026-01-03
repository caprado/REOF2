void func_00148d68() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00148d68: addiu $sp, $sp, -0x20
    a1 = 3;                                                     // 0x00148d6c: addiu $a1, $zero, 3
    func_001456a8();  // 1456a8                                // 0x00148d78: jal 0x1456a8
    func_001456a8();  // 1456a8                                // 0x00148d84: jal 0x1456a8
    a1 = 1;                                                     // 0x00148d88: addiu $a1, $zero, 1
    if (v0 == 0) goto label_0x148db8;                           // 0x00148d8c: beqz $v0, 0x148db8
    func_001456a8();  // 1456a8                                // 0x00148d94: jal 0x1456a8
    a1 = 8;                                                     // 0x00148d98: addiu $a1, $zero, 8
    func_001456a8();  // 1456a8                                // 0x00148da0: jal 0x1456a8
    a1 = 8;                                                     // 0x00148da4: addiu $a1, $zero, 8
    func_001456a8();  // 1456a8                                // 0x00148dac: jal 0x1456a8
    a1 = 8;                                                     // 0x00148db0: addiu $a1, $zero, 8
    *(uint32_t*)((s0) + 0x15c) = v0;                            // 0x00148db4: sw $v0, 0x15c($s0)
label_0x148db8:
    func_001456a8();  // 1456a8                                // 0x00148dbc: jal 0x1456a8
    a1 = 0xe;                                                   // 0x00148dc0: addiu $a1, $zero, 0xe
    *(uint32_t*)((s0) + 0x160) = v0;                            // 0x00148dc4: sw $v0, 0x160($s0)
    func_001456a8();  // 1456a8                                // 0x00148dcc: jal 0x1456a8
    a1 = 1;                                                     // 0x00148dd0: addiu $a1, $zero, 1
    func_001456a8();  // 1456a8                                // 0x00148dd8: jal 0x1456a8
    a1 = 0xe;                                                   // 0x00148ddc: addiu $a1, $zero, 0xe
    *(uint32_t*)((s0) + 0x164) = v0;                            // 0x00148de0: sw $v0, 0x164($s0)
    return;                                                     // 0x00148dec: jr $ra
    sp = sp + 0x20;                                             // 0x00148df0: addiu $sp, $sp, 0x20
}