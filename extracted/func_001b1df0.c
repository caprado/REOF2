void func_001b1df0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b1df0: addiu $sp, $sp, -0x10
    func_001b1ae0();  // 0x1b1a60                                // 0x001b1df8: jal 0x1b1a60
    /* nop */                                                   // 0x001b1dfc: nop 
    func_001b1c20();  // 0x1b1bd0                                // 0x001b1e00: jal 0x1b1bd0
    /* nop */                                                   // 0x001b1e04: nop 
    func_001b1d30();  // 0x1b1c20                                // 0x001b1e08: jal 0x1b1c20
    /* nop */                                                   // 0x001b1e0c: nop 
    func_001b1df0();  // 0x1b1d30                                // 0x001b1e10: jal 0x1b1d30
    /* nop */                                                   // 0x001b1e14: nop 
    return;                                                     // 0x001b1e1c: jr $ra
    sp = sp + 0x10;                                             // 0x001b1e20: addiu $sp, $sp, 0x10
}