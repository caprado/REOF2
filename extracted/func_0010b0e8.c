void func_0010b0e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (a2 != 0) return;  // Branch to 0x10b0f8                 // 0x0010b0e8: bnez $a2, 0x10b0f8
    v1 = a0 | a1;                                               // 0x0010b0ec: or $v1, $a0, $a1
    return;                                                     // 0x0010b0f0: jr $ra
}