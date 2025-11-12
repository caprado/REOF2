void func_00126190() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x1f << 16;                                            // 0x00126190: lui $v0, 0x1f
    return;                                                     // 0x00126194: jr $ra
    g_001f2da0 = 0;  // Global at 0x001f2da0                    // 0x00126198: sw $zero, 0x2da0($v0)
}