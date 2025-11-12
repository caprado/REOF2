void func_001988b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x29 << 16;                                            // 0x001988b0: lui $at, 0x29
    v0 = g_0029031c;  // Global at 0x0029031c                   // 0x001988b4: lh $v0, 0x31c($at)
    v0 = a0 - v0;                                               // 0x001988b8: subu $v0, $a0, $v0
    return;                                                     // 0x001988c4: jr $ra
}