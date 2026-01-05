void func_001c92e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c92e0: addiu $sp, $sp, -0x10
    func_001c7b00();  // 1c7b00                                // 0x001c92ec: jal 0x1c7b00
    func_001c8c80();  // 1c8c80                                // 0x001c92f8: jal 0x1c8c80
    return;                                                     // 0x001c9304: jr $ra
    sp = sp + 0x10;                                             // 0x001c9308: addiu $sp, $sp, 0x10
}