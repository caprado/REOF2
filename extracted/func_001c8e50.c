void func_001c8e50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x31 << 16;                                            // 0x001c8e50: lui $at, 0x31
    return;                                                     // 0x001c8e54: jr $ra
    v0 = g_00316aa0;  // Global at 0x00316aa0                   // 0x001c8e58: lw $v0, 0x6aa0($at)
}