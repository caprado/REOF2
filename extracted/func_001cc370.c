void func_001cc370() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_1c;
    
    sp = sp + -0x20;                                            // 0x001cc370: addiu $sp, $sp, -0x20
    func_001cfd50();  // 0x1cfc90                                // 0x001cc378: jal 0x1cfc90
    /* nop */                                                   // 0x001cc37c: nop 
    at = 0x32 << 16;                                            // 0x001cc380: lui $at, 0x32
    *(float*)((at) + 0x57ec) = FPU_F0;  // Store float          // 0x001cc384: swc1 $f0, 0x57ec($at)
    at = 0x32 << 16;                                            // 0x001cc388: lui $at, 0x32
    FPU_F2 = *(float*)((at) + 0x57e8);  // Load float           // 0x001cc38c: lwc1 $f2, 0x57e8($at)
    at = 0x32 << 16;                                            // 0x001cc390: lui $at, 0x32
    FPU_F1 = *(float*)((at) + 0x57e0);  // Load float           // 0x001cc394: lwc1 $f1, 0x57e0($at)
    /* FPU: sub.s $f2, $f0, $f2 */                              // 0x001cc398: sub.s $f2, $f0, $f2
    at = 0x32 << 16;                                            // 0x001cc39c: lui $at, 0x32
    *(float*)((at) + 0x57e8) = FPU_F0;  // Store float          // 0x001cc3a0: swc1 $f0, 0x57e8($at)
    /* FPU: mov.s $f0, $f2 */                                   // 0x001cc3a4: mov.s $f0, $f2
    at = 0x32 << 16;                                            // 0x001cc3a8: lui $at, 0x32
    /* FPU: add.s $f0, $f1, $f0 */                              // 0x001cc3ac: add.s $f0, $f1, $f0
    *(float*)((at) + 0x57e4) = FPU_F2;  // Store float          // 0x001cc3b0: swc1 $f2, 0x57e4($at)
    at = 0x32 << 16;                                            // 0x001cc3b4: lui $at, 0x32
    func_001cdf30();  // 0x1cd7d0                                // 0x001cc3b8: jal 0x1cd7d0
    *(float*)((at) + 0x57e0) = FPU_F0;  // Store float          // 0x001cc3bc: swc1 $f0, 0x57e0($at)
    at = 0x32 << 16;                                            // 0x001cc3c0: lui $at, 0x32
    v0 = 0x22 << 16;                                            // 0x001cc3c4: lui $v0, 0x22
    v1 = g_003257d6;  // Global at 0x003257d6                   // 0x001cc3c8: lbu $v1, 0x57d6($at)
    v0 = v0 + -0xd30;                                           // 0x001cc3cc: addiu $v0, $v0, -0xd30
    v1 = v1 << 2;                                               // 0x001cc3d0: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001cc3d4: addu $v0, $v0, $v1
    v0 = g_0021f2d0;  // Global at 0x0021f2d0                   // 0x001cc3d8: lw $v0, 0($v0)
    /* call function at address in v0 */                        // 0x001cc3dc: jalr $v0
    /* nop */                                                   // 0x001cc3e0: nop 
    func_001cd7d0();  // 0x1cd5f0                                // 0x001cc3e4: jal 0x1cd5f0
    /* nop */                                                   // 0x001cc3e8: nop 
    at = 0x32 << 16;                                            // 0x001cc3ec: lui $at, 0x32
    v0 = 0x3f80 << 16;                                          // 0x001cc3f0: lui $v0, 0x3f80
    FPU_F2 = *(float*)((at) + 0x57f8);  // Load float           // 0x001cc3f4: lwc1 $f2, 0x57f8($at)
    /* move to FPU: $v0, $f0 */                                 // 0x001cc3f8: mtc1 $v0, $f0
    at = 0x32 << 16;                                            // 0x001cc3fc: lui $at, 0x32
    FPU_F1 = *(float*)((at) + 0x57e4);  // Load float           // 0x001cc400: lwc1 $f1, 0x57e4($at)
    /* FPU: add.s $f1, $f2, $f1 */                              // 0x001cc404: add.s $f1, $f2, $f1
    at = 0x32 << 16;                                            // 0x001cc408: lui $at, 0x32
    /* FPU: c.ole.s $f1, $f0 */                                 // 0x001cc40c: c.ole.s $f1, $f0
    /* bc1t 0x1cc4c8 */                                         // 0x001cc410: bc1t 0x1cc4c8
    *(float*)((at) + 0x57f8) = FPU_F1;  // Store float          // 0x001cc414: swc1 $f1, 0x57f8($at)
    at = 0x32 << 16;                                            // 0x001cc418: lui $at, 0x32
    a0 = g_0032580e;  // Global at 0x0032580e                   // 0x001cc41c: lhu $a0, 0x580e($at)
    /* FPU: sub.s $f0, $f1, $f0 */                              // 0x001cc420: sub.s $f0, $f1, $f0
    at = 0x32 << 16;                                            // 0x001cc424: lui $at, 0x32
    v1 = g_00325816;  // Global at 0x00325816                   // 0x001cc428: lhu $v1, 0x5816($at)
    at = 0x32 << 16;                                            // 0x001cc42c: lui $at, 0x32
    v0 = g_00325944;  // Global at 0x00325944                   // 0x001cc430: lw $v0, 0x5944($at)
    at = 0x32 << 16;                                            // 0x001cc434: lui $at, 0x32
    *(float*)((at) + 0x57f8) = FPU_F0;  // Store float          // 0x001cc438: swc1 $f0, 0x57f8($at)
    at = 0x32 << 16;                                            // 0x001cc43c: lui $at, 0x32
    g_0032580c = a0;  // Global at 0x0032580c                   // 0x001cc440: sh $a0, 0x580c($at)
    at = 0x32 << 16;                                            // 0x001cc444: lui $at, 0x32
    g_00325814 = v1;  // Global at 0x00325814                   // 0x001cc448: sh $v1, 0x5814($at)
    at = 0x32 << 16;                                            // 0x001cc44c: lui $at, 0x32
    g_0032580e = 0;  // Global at 0x0032580e                    // 0x001cc450: sh $zero, 0x580e($at)
    at = 0x32 << 16;                                            // 0x001cc454: lui $at, 0x32
    g_00325816 = 0;  // Global at 0x00325816                    // 0x001cc458: sh $zero, 0x5816($at)
    at = 0x32 << 16;                                            // 0x001cc45c: lui $at, 0x32
    v1 = g_0032580c;  // Global at 0x0032580c                   // 0x001cc460: lhu $v1, 0x580c($at)
    at = (v0 < v1) ? 1 : 0;                                     // 0x001cc464: slt $at, $v0, $v1
    if (at == 0) goto label_0x1cc4c8;                           // 0x001cc468: beqz $at, 0x1cc4c8
    /* nop */                                                   // 0x001cc46c: nop 
    at = 0x32 << 16;                                            // 0x001cc470: lui $at, 0x32
    g_00325944 = v1;  // Global at 0x00325944                   // 0x001cc474: sw $v1, 0x5944($at)
    at = 0x31 << 16;                                            // 0x001cc478: lui $at, 0x31
    a1 = g_003137bc;  // Global at 0x003137bc                   // 0x001cc47c: lbu $a1, 0x37bc($at)
    at = 0x31 << 16;                                            // 0x001cc480: lui $at, 0x31
    a0 = g_003137bd;  // Global at 0x003137bd                   // 0x001cc484: lbu $a0, 0x37bd($at)
    at = 0x31 << 16;                                            // 0x001cc488: lui $at, 0x31
    a0 = a0 << 8;                                               // 0x001cc48c: sll $a0, $a0, 8
    v1 = g_003137ba;  // Global at 0x003137ba                   // 0x001cc490: lbu $v1, 0x37ba($at)
    a0 = a1 | a0;                                               // 0x001cc494: or $a0, $a1, $a0
    at = 0x31 << 16;                                            // 0x001cc498: lui $at, 0x31
    v0 = g_003137bb;  // Global at 0x003137bb                   // 0x001cc49c: lbu $v0, 0x37bb($at)
    v0 = v0 << 8;                                               // 0x001cc4a0: sll $v0, $v0, 8
    at = 0x32 << 16;                                            // 0x001cc4a4: lui $at, 0x32
    v1 = v1 | v0;                                               // 0x001cc4a8: or $v1, $v1, $v0
    v0 = v1 << 5;                                               // 0x001cc4ac: sll $v0, $v1, 5
    v0 = v0 - v1;                                               // 0x001cc4b0: subu $v0, $v0, $v1
    v0 = v0 << 2;                                               // 0x001cc4b4: sll $v0, $v0, 2
    v0 = v0 + v1;                                               // 0x001cc4b8: addu $v0, $v0, $v1
    v0 = v0 << 3;                                               // 0x001cc4bc: sll $v0, $v0, 3
    v0 = a0 + v0;                                               // 0x001cc4c0: addu $v0, $a0, $v0
    g_00325948 = v0;  // Global at 0x00325948                   // 0x001cc4c4: sw $v0, 0x5948($at)
label_0x1cc4c8:
    at = 0x32 << 16;                                            // 0x001cc4c8: lui $at, 0x32
    FPU_F2 = *(float*)((at) + 0x57f4);  // Load float           // 0x001cc4cc: lwc1 $f2, 0x57f4($at)
    FPU_F0 = *(float*)((gp) + -0x7b88);  // Load float          // 0x001cc4d0: lwc1 $f0, -0x7b88($gp)
    at = 0x32 << 16;                                            // 0x001cc4d4: lui $at, 0x32
    FPU_F1 = *(float*)((at) + 0x57e4);  // Load float           // 0x001cc4d8: lwc1 $f1, 0x57e4($at)
    /* FPU: add.s $f1, $f2, $f1 */                              // 0x001cc4dc: add.s $f1, $f2, $f1
    at = 0x32 << 16;                                            // 0x001cc4e0: lui $at, 0x32
    /* FPU: c.ole.s $f1, $f0 */                                 // 0x001cc4e4: c.ole.s $f1, $f0
    /* bc1t 0x1cc53c */                                         // 0x001cc4e8: bc1t 0x1cc53c
    *(float*)((at) + 0x57f4) = FPU_F1;  // Store float          // 0x001cc4ec: swc1 $f1, 0x57f4($at)
    at = 0x32 << 16;                                            // 0x001cc4f0: lui $at, 0x32
    a1 = g_003257d6;  // Global at 0x003257d6                   // 0x001cc4f4: lbu $a1, 0x57d6($at)
    at = 0x32 << 16;                                            // 0x001cc4f8: lui $at, 0x32
    a2 = g_003257d7;  // Global at 0x003257d7                   // 0x001cc4fc: lbu $a2, 0x57d7($at)
    func_001cdfc0();  // 0x1cdf70                                // 0x001cc500: jal 0x1cdf70
    a0 = 4;                                                     // 0x001cc504: addiu $a0, $zero, 4
    at = 0x32 << 16;                                            // 0x001cc508: lui $at, 0x32
    v0 = 0x12;                                                  // 0x001cc50c: addiu $v0, $zero, 0x12
    v1 = g_00325938;  // Global at 0x00325938                   // 0x001cc510: lhu $v1, 0x5938($at)
    at = 0x32 << 16;                                            // 0x001cc514: lui $at, 0x32
    g_00325930 = v0;  // Global at 0x00325930                   // 0x001cc518: sw $v0, 0x5930($at)
    v0 = *(int32_t*)((gp) + -0x7b94);                           // 0x001cc51c: lw $v0, -0x7b94($gp)
    v0 = (v1 < v0) ? 1 : 0;                                     // 0x001cc520: slt $v0, $v1, $v0
    if (v0 != 0) goto label_0x1cc638;                           // 0x001cc524: bnez $v0, 0x1cc638
    /* nop */                                                   // 0x001cc528: nop 
    v0 = 0x10;                                                  // 0x001cc52c: addiu $v0, $zero, 0x10
    at = 0x32 << 16;                                            // 0x001cc530: lui $at, 0x32
    goto label_0x1cc638;                                        // 0x001cc534: b 0x1cc638
    g_00325930 = v0;  // Global at 0x00325930                   // 0x001cc538: sw $v0, 0x5930($at)
    at = 0x32 << 16;                                            // 0x001cc53c: lui $at, 0x32
    a0 = g_003257d0;  // Global at 0x003257d0                   // 0x001cc540: lw $a0, 0x57d0($at)
    func_001c91f0();  // 0x1c90c0                                // 0x001cc544: jal 0x1c90c0
    a1 = sp + 0x18;                                             // 0x001cc548: addiu $a1, $sp, 0x18
    if (v0 == 0) goto label_0x1cc578;                           // 0x001cc54c: beqz $v0, 0x1cc578
    at = 0x32 << 16;                                            // 0x001cc550: lui $at, 0x32
    a1 = g_003257d6;  // Global at 0x003257d6                   // 0x001cc554: lbu $a1, 0x57d6($at)
    at = 0x32 << 16;                                            // 0x001cc558: lui $at, 0x32
    a2 = g_003257d7;  // Global at 0x003257d7                   // 0x001cc55c: lbu $a2, 0x57d7($at)
    func_001cdfc0();  // 0x1cdf70                                // 0x001cc560: jal 0x1cdf70
    a0 = 4;                                                     // 0x001cc564: addiu $a0, $zero, 4
    v0 = 0x13;                                                  // 0x001cc568: addiu $v0, $zero, 0x13
    at = 0x32 << 16;                                            // 0x001cc56c: lui $at, 0x32
    goto label_0x1cc638;                                        // 0x001cc570: b 0x1cc638
    g_00325930 = v0;  // Global at 0x00325930                   // 0x001cc574: sw $v0, 0x5930($at)
label_0x1cc578:
    v0 = *(int32_t*)((gp) + -0x62d8);                           // 0x001cc578: lw $v0, -0x62d8($gp)
    v1 = 0x2000;                                                // 0x001cc57c: addiu $v1, $zero, 0x2000
    a0 = local_1c;                                              // 0x001cc580: lhu $a0, 0x1c($sp)
    v0 = v1 - v0;                                               // 0x001cc584: subu $v0, $v1, $v0
    at = (v0 < a0) ? 1 : 0;                                     // 0x001cc588: slt $at, $v0, $a0
    if (at == 0) goto label_0x1cc5a0;                           // 0x001cc58c: beqz $at, 0x1cc5a0
    at = 0x32 << 16;                                            // 0x001cc590: lui $at, 0x32
    at = 0x32 << 16;                                            // 0x001cc594: lui $at, 0x32
    goto label_0x1cc5f4;                                        // 0x001cc598: b 0x1cc5f4
    g_00325938 = 0;  // Global at 0x00325938                    // 0x001cc59c: sh $zero, 0x5938($at)
label_0x1cc5a0:
    v0 = g_0032593a;  // Global at 0x0032593a                   // 0x001cc5a0: lhu $v0, 0x593a($at)
    at = (v0 < a0) ? 1 : 0;                                     // 0x001cc5a4: slt $at, $v0, $a0
    if (at != 0) goto label_0x1cc5d8;                           // 0x001cc5a8: bnez $at, 0x1cc5d8
    /* nop */                                                   // 0x001cc5ac: nop 
    at = 0x32 << 16;                                            // 0x001cc5b0: lui $at, 0x32
    v0 = g_00325938;  // Global at 0x00325938                   // 0x001cc5b4: lhu $v0, 0x5938($at)
    at = 0 | 0xffff;                                            // 0x001cc5b8: ori $at, $zero, 0xffff
    at = (v0 < at) ? 1 : 0;                                     // 0x001cc5bc: slt $at, $v0, $at
    if (at == 0) goto label_0x1cc5f4;                           // 0x001cc5c0: beqz $at, 0x1cc5f4
    /* nop */                                                   // 0x001cc5c4: nop 
    v0 = v0 + 1;                                                // 0x001cc5c8: addiu $v0, $v0, 1
    at = 0x32 << 16;                                            // 0x001cc5cc: lui $at, 0x32
    goto label_0x1cc5f4;                                        // 0x001cc5d0: b 0x1cc5f4
    g_00325938 = v0;  // Global at 0x00325938                   // 0x001cc5d4: sh $v0, 0x5938($at)
label_0x1cc5d8:
    at = 0x32 << 16;                                            // 0x001cc5d8: lui $at, 0x32
    v0 = g_00325938;  // Global at 0x00325938                   // 0x001cc5dc: lhu $v0, 0x5938($at)
    if (v0 == 0) goto label_0x1cc5f4;                           // 0x001cc5e0: beqz $v0, 0x1cc5f4
    /* nop */                                                   // 0x001cc5e4: nop 
    v0 = v0 + -1;                                               // 0x001cc5e8: addiu $v0, $v0, -1
    at = 0x32 << 16;                                            // 0x001cc5ec: lui $at, 0x32
    g_00325938 = v0;  // Global at 0x00325938                   // 0x001cc5f0: sh $v0, 0x5938($at)
label_0x1cc5f4:
    at = 0x32 << 16;                                            // 0x001cc5f4: lui $at, 0x32
    v0 = *(int32_t*)((gp) + -0x7b94);                           // 0x001cc5f8: lw $v0, -0x7b94($gp)
    g_0032593a = a0;  // Global at 0x0032593a                   // 0x001cc5fc: sh $a0, 0x593a($at)
    at = 0x32 << 16;                                            // 0x001cc600: lui $at, 0x32
    v1 = g_00325938;  // Global at 0x00325938                   // 0x001cc604: lhu $v1, 0x5938($at)
    v0 = (v1 < v0) ? 1 : 0;                                     // 0x001cc608: slt $v0, $v1, $v0
    if (v0 != 0) goto label_0x1cc638;                           // 0x001cc60c: bnez $v0, 0x1cc638
    /* nop */                                                   // 0x001cc610: nop 
    at = 0x32 << 16;                                            // 0x001cc614: lui $at, 0x32
    a1 = g_003257d6;  // Global at 0x003257d6                   // 0x001cc618: lbu $a1, 0x57d6($at)
    at = 0x32 << 16;                                            // 0x001cc61c: lui $at, 0x32
    a2 = g_003257d7;  // Global at 0x003257d7                   // 0x001cc620: lbu $a2, 0x57d7($at)
    func_001cdfc0();  // 0x1cdf70                                // 0x001cc624: jal 0x1cdf70
    a0 = 4;                                                     // 0x001cc628: addiu $a0, $zero, 4
    v0 = 0x10;                                                  // 0x001cc62c: addiu $v0, $zero, 0x10
    at = 0x32 << 16;                                            // 0x001cc630: lui $at, 0x32
    g_00325930 = v0;  // Global at 0x00325930                   // 0x001cc634: sw $v0, 0x5930($at)
label_0x1cc638:
    at = 0x32 << 16;                                            // 0x001cc638: lui $at, 0x32
    v0 = g_003257d6;  // Global at 0x003257d6                   // 0x001cc640: lbu $v0, 0x57d6($at)
    v0 = v0 ^ 7;                                                // 0x001cc644: xori $v0, $v0, 7
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x001cc648: sltiu $v0, $v0, 1
    v0 = -v0;                                                   // 0x001cc64c: negu $v0, $v0
    return;                                                     // 0x001cc650: jr $ra
    sp = sp + 0x20;                                             // 0x001cc654: addiu $sp, $sp, 0x20
}