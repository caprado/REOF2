void func_001b2b20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b2b20: addiu $sp, $sp, -0x10
    func_001b2b50();  // 1b2b50                                // 0x001b2b28: jal 0x1b2b50
    a0 = 1;                                                     // 0x001b2b2c: addiu $a0, $zero, 1
    func_001b2b50();  // 1b2b50                                // 0x001b2b30: jal 0x1b2b50
    a0 = 2;                                                     // 0x001b2b34: addiu $a0, $zero, 2
    func_001b2b50();  // 1b2b50                                // 0x001b2b38: jal 0x1b2b50
    a0 = 3;                                                     // 0x001b2b3c: addiu $a0, $zero, 3
    return;                                                     // 0x001b2b44: jr $ra
    sp = sp + 0x10;                                             // 0x001b2b48: addiu $sp, $sp, 0x10
}