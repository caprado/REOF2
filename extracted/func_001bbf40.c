void func_001bbf40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001bbf40: addiu $sp, $sp, -0x10
    func_001bc6d0();  // 1bc6d0                                // 0x001bbf48: jal 0x1bc6d0
    /* nop */                                                   // 0x001bbf4c: nop 
    func_001d9040();  // 1d9040                                // 0x001bbf50: jal 0x1d9040
    /* nop */                                                   // 0x001bbf54: nop 
    return;                                                     // 0x001bbf5c: jr $ra
    sp = sp + 0x10;                                             // 0x001bbf60: addiu $sp, $sp, 0x10
}