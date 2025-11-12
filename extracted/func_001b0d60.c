void func_001b0d60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a3 = 0x54 << 16;                                            // 0x001b0d60: lui $a3, 0x54
    a3 = a3 + -0x250;                                           // 0x001b0d68: addiu $a3, $a3, -0x250
    goto label_0x1b0d90;                                        // 0x001b0d6c: b 0x1b0d90
    a1 = -1;                                                    // 0x001b0d70: addiu $a1, $zero, -1
label_0x1b0d74:
    v1 = g_0053fdb0;  // Global at 0x0053fdb0                   // 0x001b0d74: lw $v1, 0($a3)
    if (v1 != a1) goto label_0x1b0d88;                          // 0x001b0d78: bne $v1, $a1, 0x1b0d88
    /* nop */                                                   // 0x001b0d7c: nop 
    goto label_0x1b0d9c;                                        // 0x001b0d80: b 0x1b0d9c
    g_0053fdb0 = a0;  // Global at 0x0053fdb0                   // 0x001b0d84: sw $a0, 0($a3)
label_0x1b0d88:
    a2 = a2 + 1;                                                // 0x001b0d88: addiu $a2, $a2, 1
    a3 = a3 + 4;                                                // 0x001b0d8c: addiu $a3, $a3, 4
label_0x1b0d90:
    v1 = (a2 < 0x2bc) ? 1 : 0;                                  // 0x001b0d90: slti $v1, $a2, 0x2bc
    if (v1 != 0) goto label_0x1b0d74;                           // 0x001b0d94: bnez $v1, 0x1b0d74
    /* nop */                                                   // 0x001b0d98: nop 
label_0x1b0d9c:
    return;                                                     // 0x001b0d9c: jr $ra
    /* nop */                                                   // 0x001b0da0: nop 
}