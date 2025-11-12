void func_00107db0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00107db0: addiu $sp, $sp, -0x10
    v1 = 0x1f << 16;                                            // 0x00107db4: lui $v1, 0x1f
    v1 = v1 + 0x25c;                                            // 0x00107dbc: addiu $v1, $v1, 0x25c
    v0 = g_001f025c;  // Global at 0x001f025c                   // 0x00107dc0: lw $v0, 0($v1)
    v0 = v0 + -1;                                               // 0x00107dc4: addiu $v0, $v0, -1
    if (v0 != 0) goto label_0x107df0;                           // 0x00107dc8: bnez $v0, 0x107df0
    g_001f025c = v0;  // Global at 0x001f025c                   // 0x00107dcc: sw $v0, 0($v1)
    v0 = 0x1f << 16;                                            // 0x00107dd0: lui $v0, 0x1f
    a0 = g_001f0a70;  // Global at 0x001f0a70                   // 0x00107dd8: lw $a0, 0xa70($v0)
    a1 = 0x1f << 16;                                            // 0x00107ddc: lui $a1, 0x1f
    v1 = -1;                                                    // 0x00107de0: addiu $v1, $zero, -1
    g_001f0258 = v1;  // Global at 0x001f0258                   // 0x00107de4: sw $v1, 0x258($a1)
    return iSignalSema();  // Tail call                         // 0x00107de8: j 0x114300
    sp = sp + 0x10;                                             // 0x00107dec: addiu $sp, $sp, 0x10
label_0x107df0:
    return;                                                     // 0x00107df4: jr $ra
    sp = sp + 0x10;                                             // 0x00107df8: addiu $sp, $sp, 0x10
}