void func_001aebe0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001aebe0: addiu $sp, $sp, -0x10
    func_001d3430();  // 1d3430                                // 0x001aebe8: jal 0x1d3430
    /* nop */                                                   // 0x001aebec: nop 
    func_001b1620();  // 1b1620                                // 0x001aebf0: jal 0x1b1620
    /* nop */                                                   // 0x001aebf4: nop 
    func_001b1df0();  // 1b1df0                                // 0x001aebf8: jal 0x1b1df0
    /* nop */                                                   // 0x001aebfc: nop 
    func_001b16a0();  // 1b16a0                                // 0x001aec00: jal 0x1b16a0
    /* nop */                                                   // 0x001aec04: nop 
    return;                                                     // 0x001aec0c: jr $ra
    sp = sp + 0x10;                                             // 0x001aec10: addiu $sp, $sp, 0x10
}