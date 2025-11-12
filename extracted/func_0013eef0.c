void func_0013eef0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x21 << 16;                                            // 0x0013eef0: lui $v1, 0x21
    v1 = v1 + -0x52a8;                                          // 0x0013eef4: addiu $v1, $v1, -0x52a8
    v0 = g_0020ad58;  // Global at 0x0020ad58                   // 0x0013eef8: lw $v0, 0($v1)
    v0 = v0 + -1;                                               // 0x0013eefc: addiu $v0, $v0, -1
    return;                                                     // 0x0013ef00: jr $ra
    g_0020ad58 = v0;  // Global at 0x0020ad58                   // 0x0013ef04: sw $v0, 0($v1)
}