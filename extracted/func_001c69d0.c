void func_001c69d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x33 << 16;                                            // 0x001c69d0: lui $v1, 0x33
    at = 0x31 << 16;                                            // 0x001c69d4: lui $at, 0x31
    v1 = v1 + 0x1c80;                                           // 0x001c69d8: addiu $v1, $v1, 0x1c80
    g_00313890 = v1;  // Global at 0x00313890                   // 0x001c69dc: sw $v1, 0x3890($at)
    v1 = 0x34 << 16;                                            // 0x001c69e0: lui $v1, 0x34
    at = 0x31 << 16;                                            // 0x001c69e4: lui $at, 0x31
    v1 = v1 + -0x6380;                                          // 0x001c69e8: addiu $v1, $v1, -0x6380
    g_00313894 = v1;  // Global at 0x00313894                   // 0x001c69ec: sw $v1, 0x3894($at)
    v1 = 0x34 << 16;                                            // 0x001c69f0: lui $v1, 0x34
    at = 0x31 << 16;                                            // 0x001c69f4: lui $at, 0x31
    v1 = v1 + 0x1c80;                                           // 0x001c69f8: addiu $v1, $v1, 0x1c80
    return;                                                     // 0x001c69fc: jr $ra
    g_00313898 = v1;  // Global at 0x00313898                   // 0x001c6a00: sw $v1, 0x3898($at)
}