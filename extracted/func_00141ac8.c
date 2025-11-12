void func_00141ac8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x25 << 16;                                            // 0x00141ac8: lui $v0, 0x25
    v0 = v0 + 0x6168;                                           // 0x00141acc: addiu $v0, $v0, 0x6168
    g_0025616c = a1;  // Global at 0x0025616c                   // 0x00141ad0: sw $a1, 4($v0)
    return;                                                     // 0x00141ad4: jr $ra
    g_00256168 = a0;  // Global at 0x00256168                   // 0x00141ad8: sw $a0, 0($v0)
}