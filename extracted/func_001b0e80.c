void func_001b0e80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a3 = 0x54 << 16;                                            // 0x001b0e80: lui $a3, 0x54
    a3 = a3 + -0x350;                                           // 0x001b0e88: addiu $a3, $a3, -0x350
    a1 = -1;                                                    // 0x001b0e8c: addiu $a1, $zero, -1
label_0x1b0e90:
    v1 = g_0053fcb0;  // Global at 0x0053fcb0                   // 0x001b0e90: lw $v1, 0($a3)
    if (v1 != a0) goto label_0x1b0ea0;                          // 0x001b0e94: bne $v1, $a0, 0x1b0ea0
    /* nop */                                                   // 0x001b0e98: nop 
    g_0053fcb0 = a1;  // Global at 0x0053fcb0                   // 0x001b0e9c: sw $a1, 0($a3)
label_0x1b0ea0:
    a2 = a2 + 1;                                                // 0x001b0ea0: addiu $a2, $a2, 1
    v1 = (a2 < 0x40) ? 1 : 0;                                   // 0x001b0ea4: slti $v1, $a2, 0x40
    if (v1 != 0) goto label_0x1b0e90;                           // 0x001b0ea8: bnez $v1, 0x1b0e90
    a3 = a3 + 4;                                                // 0x001b0eac: addiu $a3, $a3, 4
    return;                                                     // 0x001b0eb0: jr $ra
    /* nop */                                                   // 0x001b0eb4: nop 
}