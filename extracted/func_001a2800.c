void func_001a2800() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001a2800: addiu $sp, $sp, -0x20
    func_001a2800();  // 0x1a27b0                                // 0x001a280c: jal 0x1a27b0
    func_001a2850();  // 0x1a2830                                // 0x001a2818: jal 0x1a2830
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a2824: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a2828: jr $ra
    sp = sp + 0x20;                                             // 0x001a282c: addiu $sp, $sp, 0x20
}