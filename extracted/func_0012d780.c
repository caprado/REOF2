void func_0012d780() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = 0x20 << 16;                                            // 0x0012d780: lui $a0, 0x20
    a0 = a0 + -0x12b8;                                          // 0x0012d788: addiu $a0, $a0, -0x12b8
    v1 = g_001fed48;  // Global at 0x001fed48                   // 0x0012d78c: lw $v1, 0($a0)
    v1 = v1 + 1;                                                // 0x0012d790: addiu $v1, $v1, 1
    return;                                                     // 0x0012d794: jr $ra
    g_001fed48 = v1;  // Global at 0x001fed48                   // 0x0012d798: sw $v1, 0($a0)
}