void func_001b3830() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b3830: addiu $sp, $sp, -0x10
    func_001b4680();  // 0x1b45a0                                // 0x001b3838: jal 0x1b45a0
    a0 = 6;                                                     // 0x001b383c: addiu $a0, $zero, 6
    func_001b4500();  // 0x1b44c0                                // 0x001b3840: jal 0x1b44c0
    /* nop */                                                   // 0x001b3844: nop 
    return;                                                     // 0x001b384c: jr $ra
    sp = sp + 0x10;                                             // 0x001b3850: addiu $sp, $sp, 0x10
}