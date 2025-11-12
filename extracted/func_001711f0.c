void func_001711f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a0) + 0x1b30);                            // 0x001711f0: lw $v1, 0x1b30($a0)
    v0 = *(int32_t*)((v1) + 0x9d8);                             // 0x001711f4: lw $v0, 0x9d8($v1)
    return;                                                     // 0x001711f8: jr $ra
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x001711fc: sltu $v0, $zero, $v0
}