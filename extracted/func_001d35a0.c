void func_001d35a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x33 << 16;                                            // 0x001d35a0: lui $v0, 0x33
    goto label_0x1d35e0;                                        // 0x001d35a8: b 0x1d35e0
    v0 = v0 + -0x1330;                                          // 0x001d35ac: addiu $v0, $v0, -0x1330
label_0x1d35b0:
    v1 = g_0032ecd0;  // Global at 0x0032ecd0                   // 0x001d35b0: lw $v1, 0($v0)
    if (v1 == 0) goto label_0x1d35d8;                           // 0x001d35b4: beqz $v1, 0x1d35d8
    /* nop */                                                   // 0x001d35b8: nop 
    v1 = g_0032ecd4;  // Global at 0x0032ecd4                   // 0x001d35bc: lw $v1, 4($v0)
    if (v1 != a0) goto label_0x1d35d8;                          // 0x001d35c0: bne $v1, $a0, 0x1d35d8
    /* nop */                                                   // 0x001d35c4: nop 
    v1 = g_0032ecde;  // Global at 0x0032ecde                   // 0x001d35c8: lh $v1, 0xe($v0)
    v1 = v1 + 1;                                                // 0x001d35cc: addiu $v1, $v1, 1
    goto label_0x1d35f0;                                        // 0x001d35d0: b 0x1d35f0
    g_0032ecde = v1;  // Global at 0x0032ecde                   // 0x001d35d4: sh $v1, 0xe($v0)
label_0x1d35d8:
    a1 = a1 + 1;                                                // 0x001d35d8: addiu $a1, $a1, 1
    v0 = v0 + 0x10;                                             // 0x001d35dc: addiu $v0, $v0, 0x10
label_0x1d35e0:
    v1 = (a1 < 0x100) ? 1 : 0;                                  // 0x001d35e0: slti $v1, $a1, 0x100
    if (v1 != 0) goto label_0x1d35b0;                           // 0x001d35e4: bnez $v1, 0x1d35b0
    /* nop */                                                   // 0x001d35e8: nop 
label_0x1d35f0:
    return;                                                     // 0x001d35f0: jr $ra
    /* nop */                                                   // 0x001d35f4: nop 
}