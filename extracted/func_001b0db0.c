void func_001b0db0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a3 = 0x54 << 16;                                            // 0x001b0db0: lui $a3, 0x54
    a3 = a3 + -0x250;                                           // 0x001b0db8: addiu $a3, $a3, -0x250
    a1 = -1;                                                    // 0x001b0dbc: addiu $a1, $zero, -1
label_0x1b0dc0:
    v1 = g_0053fdb0;  // Global at 0x0053fdb0                   // 0x001b0dc0: lw $v1, 0($a3)
    if (v1 != a0) goto label_0x1b0dd0;                          // 0x001b0dc4: bne $v1, $a0, 0x1b0dd0
    /* nop */                                                   // 0x001b0dc8: nop 
    g_0053fdb0 = a1;  // Global at 0x0053fdb0                   // 0x001b0dcc: sw $a1, 0($a3)
label_0x1b0dd0:
    a2 = a2 + 1;                                                // 0x001b0dd0: addiu $a2, $a2, 1
    v1 = (a2 < 0x2bc) ? 1 : 0;                                  // 0x001b0dd4: slti $v1, $a2, 0x2bc
    if (v1 != 0) goto label_0x1b0dc0;                           // 0x001b0dd8: bnez $v1, 0x1b0dc0
    a3 = a3 + 4;                                                // 0x001b0ddc: addiu $a3, $a3, 4
    return;                                                     // 0x001b0de0: jr $ra
    /* nop */                                                   // 0x001b0de4: nop 
}