void func_00127d30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = 0x1f << 16;                                            // 0x00127d30: lui $a0, 0x1f
    sp = sp + -0x10;                                            // 0x00127d34: addiu $sp, $sp, -0x10
    a0 = a0 + 0x2db8;                                           // 0x00127d3c: addiu $a0, $a0, 0x2db8
    func_00107c70();  // 107c70                                // 0x00127d44: jal 0x107c70
    a2 = 0x100;                                                 // 0x00127d48: addiu $a2, $zero, 0x100
    v1 = 0x1f << 16;                                            // 0x00127d4c: lui $v1, 0x1f
    v0 = 0x1f << 16;                                            // 0x00127d54: lui $v0, 0x1f
    g_001f2db0 = 0;  // Global at 0x001f2db0                    // 0x00127d58: sw $zero, 0x2db0($v1)
    g_001f2db4 = 0;  // Global at 0x001f2db4                    // 0x00127d5c: sw $zero, 0x2db4($v0)
    return;                                                     // 0x00127d60: jr $ra
    sp = sp + 0x10;                                             // 0x00127d64: addiu $sp, $sp, 0x10
}