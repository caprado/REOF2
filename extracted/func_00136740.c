void func_00136740() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (a0 != 0) return;  // Branch to 0x136758                 // 0x00136740: bnez $a0, 0x136758
    v0 = 0x20 << 16;                                            // 0x00136744: lui $v0, 0x20
    v1 = 0x20 << 16;                                            // 0x00136748: lui $v1, 0x20
    g_0020217c = 0;  // Global at 0x0020217c                    // 0x0013674c: sw $zero, 0x217c($v0)
    return;                                                     // 0x00136750: jr $ra
    g_00202180 = 0;  // Global at 0x00202180                    // 0x00136754: sw $zero, 0x2180($v1)
}