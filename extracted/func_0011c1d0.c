void func_0011c1d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0011c1d0: addiu $sp, $sp, -0x20
    func_0011be08();  // 0x11bc00                                // 0x0011c1d8: jal 0x11bc00
    return;                                                     // 0x0011c1e4: jr $ra
    sp = sp + 0x20;                                             // 0x0011c1e8: addiu $sp, $sp, 0x20
}