void func_001cd5e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = 0x32 << 16;                                            // 0x001cd5e0: lui $a0, 0x32
    a1 = -1;                                                    // 0x001cd5e4: addiu $a1, $zero, -1
    return func_001ce8a0();  // Tail call                        // 0x001cd5e8: j 0x1ce830
    a0 = a0 + 0x3710;                                           // 0x001cd5ec: addiu $a0, $a0, 0x3710
    sp = sp + -0x20;                                            // 0x001cd5f0: addiu $sp, $sp, -0x20
    at = 0x32 << 16;                                            // 0x001cd5f4: lui $at, 0x32
    v1 = 7;                                                     // 0x001cd5fc: addiu $v1, $zero, 7
    a0 = g_003257d6;  // Global at 0x003257d6                   // 0x001cd604: lbu $a0, 0x57d6($at)
    if (a0 == v1) goto label_0x1cd7b4;                          // 0x001cd608: beq $a0, $v1, 0x1cd7b4
    /* nop */                                                   // 0x001cd60c: nop 
    a0 = 0x32 << 16;                                            // 0x001cd610: lui $a0, 0x32
    func_001ce6d0();  // 1ce6d0                                // 0x001cd614: jal 0x1ce6d0
    a0 = a0 + 0x4f90;                                           // 0x001cd618: addiu $a0, $a0, 0x4f90
    if (v0 != 0) goto label_0x1cd64c;                           // 0x001cd61c: bnez $v0, 0x1cd64c
    /* nop */                                                   // 0x001cd620: nop 
    at = 0x32 << 16;                                            // 0x001cd624: lui $at, 0x32
    v0 = 0x3f80 << 16;                                          // 0x001cd628: lui $v0, 0x3f80
    FPU_F2 = *(float*)((at) + 0x57ec);  // Load float           // 0x001cd62c: lwc1 $f2, 0x57ec($at)
    /* move to FPU: $v0, $f0 */                                 // 0x001cd630: mtc1 $v0, $f0
    at = 0x32 << 16;                                            // 0x001cd634: lui $at, 0x32
    FPU_F1 = *(float*)((at) + 0x57f0);  // Load float           // 0x001cd638: lwc1 $f1, 0x57f0($at)
    /* FPU: sub.s $f1, $f2, $f1 */                              // 0x001cd63c: sub.s $f1, $f2, $f1
    /* FPU: c.ole.s $f1, $f0 */                                 // 0x001cd640: c.ole.s $f1, $f0
    /* bc1f 0x1cd658 */                                         // 0x001cd644: bc1f 0x1cd658
    /* nop */                                                   // 0x001cd648: nop 
label_0x1cd64c:
    v0 = *(int32_t*)((gp) + -0x62d0);                           // 0x001cd64c: lw $v0, -0x62d0($gp)
    if (v0 == 0) goto label_0x1cd7a0;                           // 0x001cd650: beqz $v0, 0x1cd7a0
    /* nop */                                                   // 0x001cd654: nop 
    a0 = 0x32 << 16;                                            // 0x001cd658: lui $a0, 0x32
    a1 = 2;                                                     // 0x001cd65c: addiu $a1, $zero, 2
    thunk_func_001ce7e0();  // 1ce7e0                          // 0x001cd660: jal 0x1ce7e0
    a0 = a0 + 0x4f90;                                           // 0x001cd664: addiu $a0, $a0, 0x4f90
    at = 0x32 << 16;                                            // 0x001cd668: lui $at, 0x32
    a0 = 0x32 << 16;                                            // 0x001cd66c: lui $a0, 0x32
    v0 = g_003257d4;  // Global at 0x003257d4                   // 0x001cd670: lbu $v0, 0x57d4($at)
    a0 = a0 + 0x4f90;                                           // 0x001cd674: addiu $a0, $a0, 0x4f90
    v0 = v0 & 0xf;                                              // 0x001cd678: andi $v0, $v0, 0xf
    v0 = v0 | 0xf0;                                             // 0x001cd67c: ori $v0, $v0, 0xf0
    thunk_func_001ce7e0();  // 1ce7e0                          // 0x001cd680: jal 0x1ce7e0
    a1 = v0 & 0xff;                                             // 0x001cd684: andi $a1, $v0, 0xff
    goto label_0x1cd7a0;                                        // 0x001cd688: b 0x1cd7a0
    *(uint32_t*)((gp) + -0x62d0) = 0;                           // 0x001cd68c: sw $zero, -0x62d0($gp)
label_0x1cd690:
    if (s0 == 0) goto label_0x1cd7a0;                           // 0x001cd690: beqz $s0, 0x1cd7a0
    /* nop */                                                   // 0x001cd694: nop 
    at = 0x32 << 16;                                            // 0x001cd698: lui $at, 0x32
    a0 = g_003257d0;  // Global at 0x003257d0                   // 0x001cd6a0: lw $a0, 0x57d0($at)
    at = 0x32 << 16;                                            // 0x001cd6a4: lui $at, 0x32
    a1 = g_00324f98;  // Global at 0x00324f98                   // 0x001cd6a8: lw $a1, 0x4f98($at)
    func_001c9220();  // 1c9220                                // 0x001cd6ac: jal 0x1c9220
    at = (v0 < -1) ? 1 : 0;                                     // 0x001cd6b4: slti $at, $v0, -1
    if (at == 0) goto label_0x1cd708;                           // 0x001cd6b8: beqz $at, 0x1cd708
    /* nop */                                                   // 0x001cd6bc: nop 
    a0 = 2;                                                     // 0x001cd6c0: addiu $a0, $zero, 2
    func_001cdf70();  // 1cdf70                                // 0x001cd6c8: jal 0x1cdf70
    at = 0x32 << 16;                                            // 0x001cd6d0: lui $at, 0x32
    v1 = 4;                                                     // 0x001cd6d4: addiu $v1, $zero, 4
    a0 = g_00325938;  // Global at 0x00325938                   // 0x001cd6d8: lhu $a0, 0x5938($at)
    at = 0x32 << 16;                                            // 0x001cd6dc: lui $at, 0x32
    g_00325930 = v1;  // Global at 0x00325930                   // 0x001cd6e0: sw $v1, 0x5930($at)
    v1 = *(int32_t*)((gp) + -0x7b94);                           // 0x001cd6e4: lw $v1, -0x7b94($gp)
    v1 = (a0 < v1) ? 1 : 0;                                     // 0x001cd6e8: slt $v1, $a0, $v1
    if (v1 != 0) goto label_0x1cd7b4;                           // 0x001cd6ec: bnez $v1, 0x1cd7b4
    /* nop */                                                   // 0x001cd6f0: nop 
    v1 = 0x10;                                                  // 0x001cd6f4: addiu $v1, $zero, 0x10
    at = 0x32 << 16;                                            // 0x001cd6f8: lui $at, 0x32
    g_00325930 = v1;  // Global at 0x00325930                   // 0x001cd6fc: sw $v1, 0x5930($at)
    goto label_0x1cd7b8;                                        // 0x001cd700: b 0x1cd7b8
label_0x1cd708:
    at = 0x32 << 16;                                            // 0x001cd708: lui $at, 0x32
    v1 = s0 & 0xffff;                                           // 0x001cd70c: andi $v1, $s0, 0xffff
    a0 = g_00325808;  // Global at 0x00325808                   // 0x001cd710: lw $a0, 0x5808($at)
    /* move to FPU: $s0, $f0 */                                 // 0x001cd714: mtc1 $s0, $f0
    /* nop */                                                   // 0x001cd718: nop 
    /* FPU: cvt.s.w $f2, $f0 */                                 // 0x001cd71c: cvt.s.w $f2, $f0
    at = 0x32 << 16;                                            // 0x001cd720: lui $at, 0x32
    a0 = a0 + s0;                                               // 0x001cd724: addu $a0, $a0, $s0
    v0 = g_0032580e;  // Global at 0x0032580e                   // 0x001cd728: lhu $v0, 0x580e($at)
    at = 0x32 << 16;                                            // 0x001cd72c: lui $at, 0x32
    v0 = v0 + v1;                                               // 0x001cd730: addu $v0, $v0, $v1
    FPU_F1 = *(float*)((at) + 0x5918);  // Load float           // 0x001cd734: lwc1 $f1, 0x5918($at)
    at = 0x32 << 16;                                            // 0x001cd738: lui $at, 0x32
    FPU_F3 = *(float*)((at) + 0x57e0);  // Load float           // 0x001cd73c: lwc1 $f3, 0x57e0($at)
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x001cd740: mul.s $f1, $f2, $f1
    at = 0x32 << 16;                                            // 0x001cd744: lui $at, 0x32
    FPU_F0 = *(float*)((at) + 0x5914);  // Load float           // 0x001cd748: lwc1 $f0, 0x5914($at)
    at = 0x32 << 16;                                            // 0x001cd74c: lui $at, 0x32
    g_00325808 = a0;  // Global at 0x00325808                   // 0x001cd750: sw $a0, 0x5808($at)
    /* FPU: c.ole.s $f3, $f0 */                                 // 0x001cd754: c.ole.s $f3, $f0
    at = 0x32 << 16;                                            // 0x001cd758: lui $at, 0x32
    /* bc1t 0x1cd774 */                                         // 0x001cd75c: bc1t 0x1cd774
    g_0032580e = v0;  // Global at 0x0032580e                   // 0x001cd760: sh $v0, 0x580e($at)
    /* FPU: add.s $f0, $f3, $f1 */                              // 0x001cd764: add.s $f0, $f3, $f1
    at = 0x32 << 16;                                            // 0x001cd768: lui $at, 0x32
    goto label_0x1cd780;                                        // 0x001cd76c: b 0x1cd780
    *(float*)((at) + 0x5914) = FPU_F0;  // Store float          // 0x001cd770: swc1 $f0, 0x5914($at)
    /* FPU: add.s $f0, $f0, $f1 */                              // 0x001cd774: add.s $f0, $f0, $f1
    at = 0x32 << 16;                                            // 0x001cd778: lui $at, 0x32
    *(float*)((at) + 0x5914) = FPU_F0;  // Store float          // 0x001cd77c: swc1 $f0, 0x5914($at)
label_0x1cd780:
    a0 = 0x32 << 16;                                            // 0x001cd780: lui $a0, 0x32
    func_001ce830();  // 1ce830                                // 0x001cd788: jal 0x1ce830
    a0 = a0 + 0x4f90;                                           // 0x001cd78c: addiu $a0, $a0, 0x4f90
    at = 0x32 << 16;                                            // 0x001cd790: lui $at, 0x32
    FPU_F0 = *(float*)((at) + 0x57ec);  // Load float           // 0x001cd794: lwc1 $f0, 0x57ec($at)
    at = 0x32 << 16;                                            // 0x001cd798: lui $at, 0x32
    *(float*)((at) + 0x57f0) = FPU_F0;  // Store float          // 0x001cd79c: swc1 $f0, 0x57f0($at)
label_0x1cd7a0:
    a0 = 0x32 << 16;                                            // 0x001cd7a0: lui $a0, 0x32
    func_001cdfc0();  // 1cdfc0                                // 0x001cd7a4: jal 0x1cdfc0
    a0 = a0 + 0x4f90;                                           // 0x001cd7a8: addiu $a0, $a0, 0x4f90
    if (v0 != 0) goto label_0x1cd690;                           // 0x001cd7ac: bnez $v0, 0x1cd690
label_0x1cd7b4:
label_0x1cd7b8:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cd7b8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cd7bc: jr $ra
    sp = sp + 0x20;                                             // 0x001cd7c0: addiu $sp, $sp, 0x20
}