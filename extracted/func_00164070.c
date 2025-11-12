void func_00164070() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00164070: addiu $sp, $sp, -0x10
    func_0015f750();  // 0x15f738                                // 0x0016407c: jal 0x15f738
    func_00164028();  // 0x163fe8                                // 0x00164088: jal 0x163fe8
    a1 = 1;                                                     // 0x0016408c: addiu $a1, $zero, 1
    func_001634c0();  // 0x1634a8                                // 0x00164090: jal 0x1634a8
    /* nop */                                                   // 0x00164094: nop 
    func_00164028();  // 0x163fe8                                // 0x0016409c: jal 0x163fe8
    func_0015f768();  // 0x15f750                                // 0x001640a4: jal 0x15f750
    /* nop */                                                   // 0x001640a8: nop 
    return func_00163540();  // Tail call                        // 0x001640b8: j 0x163518
    sp = sp + 0x10;                                             // 0x001640bc: addiu $sp, $sp, 0x10
    return;                                                     // 0x001640c0: jr $ra
}