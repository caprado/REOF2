void func_0015de30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0015de30: addiu $sp, $sp, -0x20
    func_0016baf8();  // 16baf8                                // 0x0015de40: jal 0x16baf8
    func_0015dfd8();  // 15dfd8                                // 0x0015de4c: jal 0x15dfd8
    return;                                                     // 0x0015de5c: jr $ra
    sp = sp + 0x20;                                             // 0x0015de60: addiu $sp, $sp, 0x20
}