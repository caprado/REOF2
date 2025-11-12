void func_0011acb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0011acb0: addiu $sp, $sp, -0x10
    func_00119990();  // 0x1197e8                                // 0x0011acb8: jal 0x1197e8
    a1 = 0x15;                                                  // 0x0011acbc: addiu $a1, $zero, 0x15
    return;                                                     // 0x0011acc4: jr $ra
    sp = sp + 0x10;                                             // 0x0011acc8: addiu $sp, $sp, 0x10
}