void func_001b6140() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)((a0) + 0x8c);                              // 0x001b6140: lw $v0, 0x8c($a0)
    return;                                                     // 0x001b6144: jr $ra
    v0 = ((unsigned)a1 < (unsigned)v0) ? 1 : 0;                 // 0x001b6148: sltu $v0, $a1, $v0
}