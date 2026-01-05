void func_0016ac88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0016ac88: addiu $sp, $sp, -0x30
    s0 = s1 + 0x1ae4;                                           // 0x0016acac: addiu $s0, $s1, 0x1ae4
    func_001679a0();  // 1679a0                                // 0x0016acb4: jal 0x1679a0
    a1 = *(int32_t*)((s0) + 0x18);                              // 0x0016acb8: lw $a1, 0x18($s0)
    a1 = *(int32_t*)((s0) + 0x14);                              // 0x0016acc0: lw $a1, 0x14($s0)
    func_001679a0();  // 1679a0                                // 0x0016acc4: jal 0x1679a0
    a1 = *(int32_t*)((s0) + 0x1c);                              // 0x0016acd0: lw $a1, 0x1c($s0)
    func_001679a0();  // 1679a0                                // 0x0016acd4: jal 0x1679a0
    return func_00171858();  // Tail call                       // 0x0016acf8: j 0x171858
    sp = sp + 0x30;                                             // 0x0016acfc: addiu $sp, $sp, 0x30
    sp = sp + -0x30;                                            // 0x0016ad00: addiu $sp, $sp, -0x30
    s1 = s0 + 0x1ae4;                                           // 0x0016ad10: addiu $s1, $s0, 0x1ae4
    func_001679c0();  // 1679c0                                // 0x0016ad20: jal 0x1679c0
    a1 = *(int32_t*)((s1) + 0x18);                              // 0x0016ad24: lw $a1, 0x18($s1)
    a1 = *(int32_t*)((s1) + 0x14);                              // 0x0016ad2c: lw $a1, 0x14($s1)
    func_001679c0();  // 1679c0                                // 0x0016ad30: jal 0x1679c0
    a1 = *(int32_t*)((s1) + 0x1c);                              // 0x0016ad3c: lw $a1, 0x1c($s1)
    func_001679c0();  // 1679c0                                // 0x0016ad44: jal 0x1679c0
    s2 = s2 & s3;                                               // 0x0016ad48: and $s2, $s2, $s3
    v0 = s2 & v0;                                               // 0x0016ad4c: and $v0, $s2, $v0
    return;                                                     // 0x0016ad64: jr $ra
    sp = sp + 0x30;                                             // 0x0016ad68: addiu $sp, $sp, 0x30
}