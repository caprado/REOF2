void func_0011b6d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0011b6d8: addiu $sp, $sp, -0x10
    func_0011b6d8();  // 0x11b660                                // 0x0011b6e0: jal 0x11b660
    /* nop */                                                   // 0x0011b6e4: nop 
    return;                                                     // 0x0011b6ec: jr $ra
    sp = sp + 0x10;                                             // 0x0011b6f0: addiu $sp, $sp, 0x10
}