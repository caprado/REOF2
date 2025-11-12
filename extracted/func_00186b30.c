void func_00186b30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00186b30: addiu $sp, $sp, -0x10
    func_00187a78();  // 0x1878a0                                // 0x00186b38: jal 0x1878a0
    /* nop */                                                   // 0x00186b3c: nop 
    return;                                                     // 0x00186b44: jr $ra
    sp = sp + 0x10;                                             // 0x00186b48: addiu $sp, $sp, 0x10
}