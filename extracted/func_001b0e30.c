void func_001b0e30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a3 = 0x54 << 16;                                            // 0x001b0e30: lui $a3, 0x54
    a3 = a3 + -0x350;                                           // 0x001b0e38: addiu $a3, $a3, -0x350
    goto label_0x1b0e60;                                        // 0x001b0e3c: b 0x1b0e60
    a1 = -1;                                                    // 0x001b0e40: addiu $a1, $zero, -1
label_0x1b0e44:
    v1 = g_0053fcb0;  // Global at 0x0053fcb0                   // 0x001b0e44: lw $v1, 0($a3)
    if (v1 != a1) goto label_0x1b0e58;                          // 0x001b0e48: bne $v1, $a1, 0x1b0e58
    /* nop */                                                   // 0x001b0e4c: nop 
    goto label_0x1b0e6c;                                        // 0x001b0e50: b 0x1b0e6c
    g_0053fcb0 = a0;  // Global at 0x0053fcb0                   // 0x001b0e54: sw $a0, 0($a3)
label_0x1b0e58:
    a2 = a2 + 1;                                                // 0x001b0e58: addiu $a2, $a2, 1
    a3 = a3 + 4;                                                // 0x001b0e5c: addiu $a3, $a3, 4
label_0x1b0e60:
    v1 = (a2 < 0x40) ? 1 : 0;                                   // 0x001b0e60: slti $v1, $a2, 0x40
    if (v1 != 0) goto label_0x1b0e44;                           // 0x001b0e64: bnez $v1, 0x1b0e44
    /* nop */                                                   // 0x001b0e68: nop 
label_0x1b0e6c:
    return;                                                     // 0x001b0e6c: jr $ra
    /* nop */                                                   // 0x001b0e70: nop 
}