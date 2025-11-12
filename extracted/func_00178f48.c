void func_00178f48() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)(a0);                                       // 0x00178f48: lw $v0, 0($a0)
    return;                                                     // 0x00178f4c: jr $ra
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x00178f50: sltiu $v0, $v0, 1
}