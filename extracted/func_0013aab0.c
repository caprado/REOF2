void func_0013aab0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x20 << 16;                                            // 0x0013aab0: lui $v0, 0x20
    v1 = 0x20 << 16;                                            // 0x0013aab4: lui $v1, 0x20
    v0 = v0 + 0x3ee0;                                           // 0x0013aab8: addiu $v0, $v0, 0x3ee0
    g_00203ee4 = a3;  // Global at 0x00203ee4                   // 0x0013aabc: sw $a3, 0x3ee4($v1)
    g_00203ee2 = a2;  // Global at 0x00203ee2                   // 0x0013aac0: sb $a2, 2($v0)
    g_00203ee0 = a0;  // Global at 0x00203ee0                   // 0x0013aac4: sb $a0, 0($v0)
    return;                                                     // 0x0013aac8: jr $ra
    g_00203ee1 = a1;  // Global at 0x00203ee1                   // 0x0013aacc: sb $a1, 1($v0)
}