void func_00186b70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00186b70: addiu $sp, $sp, -0x10
    func_00187c50();  // 187c50                                // 0x00186b78: jal 0x187c50
    /* nop */                                                   // 0x00186b7c: nop 
    return;                                                     // 0x00186b84: jr $ra
    sp = sp + 0x10;                                             // 0x00186b88: addiu $sp, $sp, 0x10
}