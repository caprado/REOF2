void func_001b5020() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((gp) + -0x7cd8);                           // 0x001b5020: lw $v1, -0x7cd8($gp)
    return;                                                     // 0x001b5024: jr $ra
    *(uint32_t*)((v1) + 0xa0) = a0;                             // 0x001b5028: sw $a0, 0xa0($v1)
}