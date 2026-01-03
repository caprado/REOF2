void func_00130358() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00130358: addiu $sp, $sp, -0x20
    func_001261a0();  // 1261a0                                // 0x0013036c: jal 0x1261a0
    func_001302e0();  // 1302e0                                // 0x00130374: jal 0x1302e0
    func_001261b8();  // 1261b8                                // 0x0013037c: jal 0x1261b8
    *(uint32_t*)((s0) + 0x58) = s1;                             // 0x00130380: sw $s1, 0x58($s0)
    v0 = 1;                                                     // 0x00130384: addiu $v0, $zero, 1
    return;                                                     // 0x00130394: jr $ra
    sp = sp + 0x20;                                             // 0x00130398: addiu $sp, $sp, 0x20
}