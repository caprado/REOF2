void func_001ce720() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001ce720: addiu $sp, $sp, -0x20
    func_001cfd60();  // 0x1cfd50                                // 0x001ce72c: jal 0x1cfd50
    func_001cfd70();  // 0x1cfd60                                // 0x001ce734: jal 0x1cfd60
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ce740: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ce744: jr $ra
    sp = sp + 0x20;                                             // 0x001ce748: addiu $sp, $sp, 0x20
}