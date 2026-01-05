void func_0016fd90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0016fd90: addiu $sp, $sp, -0x30
    func_00169b88();  // 169b88                                // 0x0016fda8: jal 0x169b88
    func_0016fde0();  // 16fde0                                // 0x0016fdb4: jal 0x16fde0
    func_00169ba0();  // 169ba0                                // 0x0016fdc0: jal 0x169ba0
    return;                                                     // 0x0016fdd8: jr $ra
    sp = sp + 0x30;                                             // 0x0016fddc: addiu $sp, $sp, 0x30
}