void func_001babf0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001babf0: addiu $sp, $sp, -0x10
    v1 = g_00308058;  // Global at 0x00308058                   // 0x001babf8: lbu $v1, 8($a0)
    if (v1 != 0) goto label_0x1bac4c;                           // 0x001babfc: bnez $v1, 0x1bac4c
    at = 0x31 << 16;                                            // 0x001bac00: lui $at, 0x31
    v0 = 1;                                                     // 0x001bac04: addiu $v0, $zero, 1
    g_00308058 = v0;  // Global at 0x00308058                   // 0x001bac0c: sb $v0, 8($a0)
    a2 = 0x20;                                                  // 0x001bac10: addiu $a2, $zero, 0x20
    a0 = 0x31 << 16;                                            // 0x001bac14: lui $a0, 0x31
    func_00107c70();  // 107c70                                // 0x001bac18: jal 0x107c70
    a0 = a0 + -0x7fb0;                                          // 0x001bac1c: addiu $a0, $a0, -0x7fb0
    at = 0x31 << 16;                                            // 0x001bac20: lui $at, 0x31
    v1 = 0x280;                                                 // 0x001bac24: addiu $v1, $zero, 0x280
    g_00308064 = 0;  // Global at 0x00308064                    // 0x001bac28: sh $zero, -0x7f9c($at)
    at = 0x31 << 16;                                            // 0x001bac2c: lui $at, 0x31
    g_00308068 = v1;  // Global at 0x00308068                   // 0x001bac30: sh $v1, -0x7f98($at)
    v1 = 0x1e0;                                                 // 0x001bac34: addiu $v1, $zero, 0x1e0
    at = 0x31 << 16;                                            // 0x001bac38: lui $at, 0x31
    g_0030806a = v1;  // Global at 0x0030806a                   // 0x001bac3c: sh $v1, -0x7f96($at)
    at = 0x31 << 16;                                            // 0x001bac40: lui $at, 0x31
    goto label_0x1bad18;                                        // 0x001bac44: b 0x1bad18
    g_00308066 = 0;  // Global at 0x00308066                    // 0x001bac48: sh $zero, -0x7f9a($at)
label_0x1bac4c:
    v1 = 2;                                                     // 0x001bac4c: addiu $v1, $zero, 2
    a0 = g_00308050;  // Global at 0x00308050                   // 0x001bac50: lbu $a0, -0x7fb0($at)
    if (a0 == v1) goto label_0x1bacbc;                          // 0x001bac54: beq $a0, $v1, 0x1bacbc
    v1 = 1;                                                     // 0x001bac58: addiu $v1, $zero, 1
    if (a0 == v1) goto label_0x1bac74;                          // 0x001bac5c: beq $a0, $v1, 0x1bac74
    at = 0x31 << 16;                                            // 0x001bac60: lui $at, 0x31
    if (a0 == 0) goto label_0x1bad18;                           // 0x001bac64: beqz $a0, 0x1bad18
    /* nop */                                                   // 0x001bac68: nop 
    goto label_0x1bad04;                                        // 0x001bac6c: b 0x1bad04
    at = 0x31 << 16;                                            // 0x001bac70: lui $at, 0x31
label_0x1bac74:
    v1 = 0x3f80 << 16;                                          // 0x001bac74: lui $v1, 0x3f80
    FPU_F2 = *(float*)((at) + -0x7fa4);  // Load float          // 0x001bac78: lwc1 $f2, -0x7fa4($at)
    /* move to FPU: $v1, $f0 */                                 // 0x001bac7c: mtc1 $v1, $f0
    at = 0x31 << 16;                                            // 0x001bac80: lui $at, 0x31
    FPU_F1 = *(float*)((at) + -0x7fa0);  // Load float          // 0x001bac84: lwc1 $f1, -0x7fa0($at)
    /* FPU: add.s $f1, $f2, $f1 */                              // 0x001bac88: add.s $f1, $f2, $f1
    at = 0x31 << 16;                                            // 0x001bac8c: lui $at, 0x31
    /* FPU: c.ole.s $f1, $f0 */                                 // 0x001bac90: c.ole.s $f1, $f0
    /* bc1t 0x1bad18 */                                         // 0x001bac94: bc1t 0x1bad18
    *(float*)((at) + -0x7fa4) = FPU_F1;  // Store float         // 0x001bac98: swc1 $f1, -0x7fa4($at)
    at = 0x31 << 16;                                            // 0x001bac9c: lui $at, 0x31
    v1 = 0x63;                                                  // 0x001baca0: addiu $v1, $zero, 0x63
    *(float*)((at) + -0x7fa4) = FPU_F0;  // Store float         // 0x001baca4: swc1 $f0, -0x7fa4($at)
    at = 0x31 << 16;                                            // 0x001baca8: lui $at, 0x31
    g_00308050 = v1;  // Global at 0x00308050                   // 0x001bacac: sb $v1, -0x7fb0($at)
    at = 0x31 << 16;                                            // 0x001bacb0: lui $at, 0x31
    goto label_0x1bad18;                                        // 0x001bacb4: b 0x1bad18
    g_00308054 = v1;  // Global at 0x00308054                   // 0x001bacb8: sw $v1, -0x7fac($at)
label_0x1bacbc:
    at = 0x31 << 16;                                            // 0x001bacbc: lui $at, 0x31
    FPU_F2 = *(float*)((at) + -0x7fa4);  // Load float          // 0x001bacc0: lwc1 $f2, -0x7fa4($at)
    /* move to FPU: $zero, $f0 */                               // 0x001bacc4: mtc1 $zero, $f0
    at = 0x31 << 16;                                            // 0x001bacc8: lui $at, 0x31
    FPU_F1 = *(float*)((at) + -0x7fa0);  // Load float          // 0x001baccc: lwc1 $f1, -0x7fa0($at)
    /* FPU: add.s $f1, $f2, $f1 */                              // 0x001bacd0: add.s $f1, $f2, $f1
    at = 0x31 << 16;                                            // 0x001bacd4: lui $at, 0x31
    /* FPU: c.olt.s $f1, $f0 */                                 // 0x001bacd8: c.olt.s $f1, $f0
    /* bc1f 0x1bad18 */                                         // 0x001bacdc: bc1f 0x1bad18
    *(float*)((at) + -0x7fa4) = FPU_F1;  // Store float         // 0x001bace0: swc1 $f1, -0x7fa4($at)
    at = 0x31 << 16;                                            // 0x001bace4: lui $at, 0x31
    v1 = 0x63;                                                  // 0x001bace8: addiu $v1, $zero, 0x63
    *(float*)((at) + -0x7fa4) = FPU_F0;  // Store float         // 0x001bacec: swc1 $f0, -0x7fa4($at)
    at = 0x31 << 16;                                            // 0x001bacf0: lui $at, 0x31
    g_00308054 = v1;  // Global at 0x00308054                   // 0x001bacf4: sw $v1, -0x7fac($at)
    at = 0x31 << 16;                                            // 0x001bacf8: lui $at, 0x31
    goto label_0x1bad18;                                        // 0x001bacfc: b 0x1bad18
    g_00308050 = 0;  // Global at 0x00308050                    // 0x001bad00: sb $zero, -0x7fb0($at)
label_0x1bad04:
    v1 = g_00308054;  // Global at 0x00308054                   // 0x001bad04: lw $v1, -0x7fac($at)
    if (v1 != 0) goto label_0x1bad18;                           // 0x001bad08: bnez $v1, 0x1bad18
    /* nop */                                                   // 0x001bad0c: nop 
    at = 0x31 << 16;                                            // 0x001bad10: lui $at, 0x31
    g_00308050 = 0;  // Global at 0x00308050                    // 0x001bad14: sb $zero, -0x7fb0($at)
label_0x1bad18:
    return;                                                     // 0x001bad1c: jr $ra
    sp = sp + 0x10;                                             // 0x001bad20: addiu $sp, $sp, 0x10
}