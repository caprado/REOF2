void func_001d5a60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x33 << 16;                                            // 0x001d5a60: lui $v0, 0x33
    goto label_0x1d5a8c;                                        // 0x001d5a68: b 0x1d5a8c
    v0 = v0 + -0x1530;                                          // 0x001d5a6c: addiu $v0, $v0, -0x1530
label_0x1d5a70:
    v1 = g_0032ead0;  // Global at 0x0032ead0                   // 0x001d5a70: lbu $v1, 0($v0)
    if (v1 != 0) goto label_0x1d5a84;                           // 0x001d5a74: bnez $v1, 0x1d5a84
    /* nop */                                                   // 0x001d5a78: nop 
    goto label_0x1d5a9c;                                        // 0x001d5a7c: b 0x1d5a9c
    /* nop */                                                   // 0x001d5a80: nop 
label_0x1d5a84:
    a0 = a0 + 1;                                                // 0x001d5a84: addiu $a0, $a0, 1
    v0 = v0 + 0xc;                                              // 0x001d5a88: addiu $v0, $v0, 0xc
label_0x1d5a8c:
    v1 = (a0 < 0x10) ? 1 : 0;                                   // 0x001d5a8c: slti $v1, $a0, 0x10
    if (v1 != 0) goto label_0x1d5a70;                           // 0x001d5a90: bnez $v1, 0x1d5a70
    /* nop */                                                   // 0x001d5a94: nop 
label_0x1d5a9c:
    return;                                                     // 0x001d5a9c: jr $ra
    /* nop */                                                   // 0x001d5aa0: nop 
}