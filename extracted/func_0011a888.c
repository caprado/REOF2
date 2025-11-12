void func_0011a888() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0011a888: addiu $sp, $sp, -0x10
    func_00119990();  // 0x1197e8                                // 0x0011a890: jal 0x1197e8
    a1 = 0x12;                                                  // 0x0011a894: addiu $a1, $zero, 0x12
    return;                                                     // 0x0011a89c: jr $ra
    sp = sp + 0x10;                                             // 0x0011a8a0: addiu $sp, $sp, 0x10
}