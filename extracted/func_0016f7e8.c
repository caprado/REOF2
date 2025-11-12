void func_0016f7e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = 0x26 << 16;                                            // 0x0016f7e8: lui $a1, 0x26
    v1 = a1 + 0x77e8;                                           // 0x0016f7ec: addiu $v1, $a1, 0x77e8
    v0 = g_00267804;  // Global at 0x00267804                   // 0x0016f7f0: lw $v0, 0x1c($v1)
    v0 = v0 + -1;                                               // 0x0016f7f4: addiu $v0, $v0, -1
    v0 = ((unsigned)v0 < (unsigned)0x10) ? 1 : 0;               // 0x0016f7f8: sltiu $v0, $v0, 0x10
    /* bnezl $v0, 0x16f810 */                                   // 0x0016f7fc: bnezl $v0, 0x16f810
    v0 = g_002677f8;  // Global at 0x002677f8                   // 0x0016f800: lw $v0, 0x10($v1)
    return;                                                     // 0x0016f804: jr $ra
    v0 = -1;                                                    // 0x0016f808: addiu $v0, $zero, -1
}