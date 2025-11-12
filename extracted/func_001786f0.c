void func_001786f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001786f0: addiu $sp, $sp, -0x20
    func_001787b8();  // 0x178738                                // 0x00178700: jal 0x178738
    func_00178850();  // 0x178848                                // 0x00178708: jal 0x178848
    func_00178840();  // 0x1787c0                                // 0x00178714: jal 0x1787c0
    return;                                                     // 0x0017872c: jr $ra
    sp = sp + 0x20;                                             // 0x00178730: addiu $sp, $sp, 0x20
}