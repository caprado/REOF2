void func_001bbab0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x30 << 16;                                            // 0x001bbab0: lui $at, 0x30
    g_00307fe0 = 0;  // Global at 0x00307fe0                    // 0x001bbab4: sb $zero, 0x7fe0($at)
    at = 0x30 << 16;                                            // 0x001bbab8: lui $at, 0x30
    g_00307fe4 = 0;  // Global at 0x00307fe4                    // 0x001bbabc: sh $zero, 0x7fe4($at)
    at = 0x30 << 16;                                            // 0x001bbac0: lui $at, 0x30
    g_00307fe6 = 0;  // Global at 0x00307fe6                    // 0x001bbac4: sh $zero, 0x7fe6($at)
    at = 0x30 << 16;                                            // 0x001bbac8: lui $at, 0x30
    g_00307ff4 = 0;  // Global at 0x00307ff4                    // 0x001bbacc: sw $zero, 0x7ff4($at)
    at = 0x30 << 16;                                            // 0x001bbad0: lui $at, 0x30
    return func_001bbba0();  // Tail call                        // 0x001bbad4: j 0x1bbb80
    g_00307ff2 = 0;  // Global at 0x00307ff2                    // 0x001bbad8: sh $zero, 0x7ff2($at)
    /* nop */                                                   // 0x001bbadc: nop 
    t0 = 0x30 << 16;                                            // 0x001bbae0: lui $t0, 0x30
    if (a0 != 0) goto label_0x1bbb38;                           // 0x001bbae4: bnez $a0, 0x1bbb38
    t0 = t0 + 0x7fc0;                                           // 0x001bbae8: addiu $t0, $t0, 0x7fc0
    a3 = 1;                                                     // 0x001bbaec: addiu $a3, $zero, 1
    v1 = a2 + 1;                                                // 0x001bbaf0: addiu $v1, $a2, 1
    /* move to FPU: $a2, $f0 */                                 // 0x001bbaf4: mtc1 $a2, $f0
    g_00307fc0 = a3;  // Global at 0x00307fc0                   // 0x001bbaf8: sb $a3, 0($t0)
    g_00307fc4 = a0;  // Global at 0x00307fc4                   // 0x001bbafc: sw $a0, 4($t0)
    g_00307fcc = a1;  // Global at 0x00307fcc                   // 0x001bbb00: sw $a1, 0xc($t0)
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001bbb04: cvt.s.w $f0, $f0
    g_00307fc8 = v1;  // Global at 0x00307fc8                   // 0x001bbb08: sw $v1, 8($t0)
    a0 = 0xff;                                                  // 0x001bbb0c: addiu $a0, $zero, 0xff
    v1 = 0x3f80 << 16;                                          // 0x001bbb10: lui $v1, 0x3f80
    g_00307fd0 = a0;  // Global at 0x00307fd0                   // 0x001bbb14: sb $a0, 0x10($t0)
    g_00307fd4 = v1;  // Global at 0x00307fd4                   // 0x001bbb18: sw $v1, 0x14($t0)
    /* move to FPU: $v1, $f1 */                                 // 0x001bbb1c: mtc1 $v1, $f1
    /* nop */                                                   // 0x001bbb20: nop 
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x001bbb24: div.s $f0, $f1, $f0
    /* nop */                                                   // 0x001bbb28: nop 
    /* nop */                                                   // 0x001bbb2c: nop 
    goto label_0x1bbb74;                                        // 0x001bbb30: b 0x1bbb74
    *(float*)((t0) + 0x18) = FPU_F0;  // Store float            // 0x001bbb34: swc1 $f0, 0x18($t0)
label_0x1bbb38:
    /* move to FPU: $a2, $f0 */                                 // 0x001bbb38: mtc1 $a2, $f0
    v1 = 1;                                                     // 0x001bbb3c: addiu $v1, $zero, 1
    g_00307fc0 = v1;  // Global at 0x00307fc0                   // 0x001bbb40: sb $v1, 0($t0)
    a3 = a2 + 1;                                                // 0x001bbb44: addiu $a3, $a2, 1
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001bbb48: cvt.s.w $f0, $f0
    v1 = 0x3f80 << 16;                                          // 0x001bbb4c: lui $v1, 0x3f80
    g_00307fc4 = a0;  // Global at 0x00307fc4                   // 0x001bbb50: sw $a0, 4($t0)
    g_00307fcc = a1;  // Global at 0x00307fcc                   // 0x001bbb54: sw $a1, 0xc($t0)
    g_00307fc8 = a3;  // Global at 0x00307fc8                   // 0x001bbb58: sw $a3, 8($t0)
    g_00307fd0 = 0;  // Global at 0x00307fd0                    // 0x001bbb5c: sb $zero, 0x10($t0)
    g_00307fd4 = 0;  // Global at 0x00307fd4                    // 0x001bbb60: sw $zero, 0x14($t0)
    /* move to FPU: $v1, $f1 */                                 // 0x001bbb64: mtc1 $v1, $f1
    /* nop */                                                   // 0x001bbb68: nop 
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x001bbb6c: div.s $f0, $f1, $f0
    *(float*)((t0) + 0x18) = FPU_F0;  // Store float            // 0x001bbb70: swc1 $f0, 0x18($t0)
label_0x1bbb74:
    return;                                                     // 0x001bbb74: jr $ra
    /* nop */                                                   // 0x001bbb78: nop 
}