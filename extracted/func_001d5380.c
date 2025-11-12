void func_001d5380() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x33 << 16;                                            // 0x001d5380: lui $v0, 0x33
    goto label_0x1d53ac;                                        // 0x001d5388: b 0x1d53ac
    v0 = v0 + -0x1470;                                          // 0x001d538c: addiu $v0, $v0, -0x1470
label_0x1d5390:
    v1 = g_0032eb90;  // Global at 0x0032eb90                   // 0x001d5390: lbu $v1, 0($v0)
    if (v1 != 0) goto label_0x1d53a4;                           // 0x001d5394: bnez $v1, 0x1d53a4
    /* nop */                                                   // 0x001d5398: nop 
    goto label_0x1d53bc;                                        // 0x001d539c: b 0x1d53bc
    /* nop */                                                   // 0x001d53a0: nop 
label_0x1d53a4:
    a0 = a0 + 1;                                                // 0x001d53a4: addiu $a0, $a0, 1
    v0 = v0 + 0x14;                                             // 0x001d53a8: addiu $v0, $v0, 0x14
label_0x1d53ac:
    v1 = (a0 < 0x10) ? 1 : 0;                                   // 0x001d53ac: slti $v1, $a0, 0x10
    if (v1 != 0) goto label_0x1d5390;                           // 0x001d53b0: bnez $v1, 0x1d5390
    /* nop */                                                   // 0x001d53b4: nop 
label_0x1d53bc:
    return;                                                     // 0x001d53bc: jr $ra
    /* nop */                                                   // 0x001d53c0: nop 
}