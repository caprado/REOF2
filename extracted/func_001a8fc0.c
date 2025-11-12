void func_001a8fc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 2;                                                     // 0x001a8fc0: addiu $v0, $zero, 2
    if (a1 == v0) goto label_0x1a9010;                          // 0x001a8fc4: beq $a1, $v0, 0x1a9010
    at = 0x31 << 16;                                            // 0x001a8fc8: lui $at, 0x31
    v0 = 1;                                                     // 0x001a8fcc: addiu $v0, $zero, 1
    if (a1 == v0) goto label_0x1a8ffc;                          // 0x001a8fd0: beq $a1, $v0, 0x1a8ffc
    at = 0x31 << 16;                                            // 0x001a8fd4: lui $at, 0x31
    if (a1 == 0) goto label_0x1a8fe8;                           // 0x001a8fd8: beqz $a1, 0x1a8fe8
    at = 0x31 << 16;                                            // 0x001a8fdc: lui $at, 0x31
    goto label_0x1a9028;                                        // 0x001a8fe0: b 0x1a9028
label_0x1a8fe8:
    v1 = g_003137d8;  // Global at 0x003137d8                   // 0x001a8fe8: lbu $v1, 0x37d8($at)
    if (v1 != a0) goto label_0x1a9024;                          // 0x001a8fec: bne $v1, $a0, 0x1a9024
    /* nop */                                                   // 0x001a8ff0: nop 
    goto label_0x1a9028;                                        // 0x001a8ff4: b 0x1a9028
    /* nop */                                                   // 0x001a8ff8: nop 
label_0x1a8ffc:
    v1 = g_003137d9;  // Global at 0x003137d9                   // 0x001a8ffc: lbu $v1, 0x37d9($at)
    if (v1 != a0) goto label_0x1a9024;                          // 0x001a9000: bne $v1, $a0, 0x1a9024
    /* nop */                                                   // 0x001a9004: nop 
    goto label_0x1a9028;                                        // 0x001a9008: b 0x1a9028
    /* nop */                                                   // 0x001a900c: nop 
label_0x1a9010:
    v0 = g_0031387a;  // Global at 0x0031387a                   // 0x001a9010: lbu $v0, 0x387a($at)
    if (v0 != a0) goto label_0x1a9024;                          // 0x001a9014: bne $v0, $a0, 0x1a9024
    v0 = 1;                                                     // 0x001a9018: addiu $v0, $zero, 1
    goto label_0x1a9028;                                        // 0x001a901c: b 0x1a9028
    /* nop */                                                   // 0x001a9020: nop 
label_0x1a9024:
label_0x1a9028:
    return;                                                     // 0x001a9028: jr $ra
    /* nop */                                                   // 0x001a902c: nop 
}