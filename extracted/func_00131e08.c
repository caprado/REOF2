void func_00131e08() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x20 << 16;                                            // 0x00131e08: lui $v1, 0x20
    v1 = v1 + 0x1d5c;                                           // 0x00131e0c: addiu $v1, $v1, 0x1d5c
    v0 = g_00201d5c;  // Global at 0x00201d5c                   // 0x00131e10: lw $v0, 0($v1)
    v0 = v0 + 1;                                                // 0x00131e14: addiu $v0, $v0, 1
    return;                                                     // 0x00131e18: jr $ra
    g_00201d5c = v0;  // Global at 0x00201d5c                   // 0x00131e1c: sw $v0, 0($v1)
}