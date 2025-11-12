void func_0012b2d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x1f << 16;                                            // 0x0012b2d0: lui $v1, 0x1f
    v0 = g_001f6a54;  // Global at 0x001f6a54                   // 0x0012b2d4: lw $v0, 0x6a54($v1)
    return;                                                     // 0x0012b2d8: jr $ra
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x0012b2dc: sltu $v0, $zero, $v0
}