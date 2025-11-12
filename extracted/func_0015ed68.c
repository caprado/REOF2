void func_0015ed68() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    *(uint32_t*)((a0) + 0x80) = 0;                              // 0x0015ed68: sw $zero, 0x80($a0)
    return;                                                     // 0x0015ed6c: jr $ra
    *(uint32_t*)((a0) + 0x7c) = 0;                              // 0x0015ed70: sw $zero, 0x7c($a0)
}