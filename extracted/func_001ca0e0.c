void func_001ca0e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001ca0e0: addiu $sp, $sp, -0x10
    func_001c85d0();  // 0x1c8520                                // 0x001ca0e8: jal 0x1c8520
    a2 = a1 + 4;                                                // 0x001ca0ec: addiu $a2, $a1, 4
    return;                                                     // 0x001ca0fc: jr $ra
    sp = sp + 0x10;                                             // 0x001ca100: addiu $sp, $sp, 0x10
}