void func_00129e38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00129e38: addiu $sp, $sp, -0x10
    func_00129e88();  // 0x129e68                                // 0x00129e40: jal 0x129e68
    func_00129ea8();  // 0x129e88                                // 0x00129e48: jal 0x129e88
    func_00129e38();  // 0x129e18                                // 0x00129e50: jal 0x129e18
    return;                                                     // 0x00129e60: jr $ra
    sp = sp + 0x10;                                             // 0x00129e64: addiu $sp, $sp, 0x10
}