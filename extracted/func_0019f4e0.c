/** @category: graphics/init @status: complete @author: caprado */
void func_0019f4e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x0019f4e0: addiu $sp, $sp, -0x50
    at = 0x29 << 16;                                            // 0x0019f4e4: lui $at, 0x29
    v0 = 1;                                                     // 0x0019f4ec: addiu $v0, $zero, 1
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0019f4f0: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019f4fc: addu.qb $zero, $sp, $s1
    g_0028ff70 = a3;  // Global at 0x0028ff70                   // 0x0019f508: sw $a3, -0x90($at)
    at = 0x29 << 16;                                            // 0x0019f50c: lui $at, 0x29
    g_0028ff74 = a2;  // Global at 0x0028ff74                   // 0x0019f510: sw $a2, -0x8c($at)
    at = 0x29 << 16;                                            // 0x0019f514: lui $at, 0x29
    g_0028ff88 = s3;  // Global at 0x0028ff88                   // 0x0019f518: sw $s3, -0x78($at)
    at = 0x29 << 16;                                            // 0x0019f51c: lui $at, 0x29
    g_0028ffa0 = s2;  // Global at 0x0028ffa0                   // 0x0019f520: sw $s2, -0x60($at)
    at = 0x29 << 16;                                            // 0x0019f524: lui $at, 0x29
    g_0029032c = 0;  // Global at 0x0029032c                    // 0x0019f528: sw $zero, 0x32c($at)
    at = 0x29 << 16;                                            // 0x0019f52c: lui $at, 0x29
    if (t0 == v0) goto label_0x19f54c;                          // 0x0019f530: beq $t0, $v0, 0x19f54c
    g_00290330 = 0;  // Global at 0x00290330                    // 0x0019f534: sw $zero, 0x330($at)
    v0 = 3;                                                     // 0x0019f538: addiu $v0, $zero, 3
    at = 0x29 << 16;                                            // 0x0019f53c: lui $at, 0x29
    s1 = 0x280;                                                 // 0x0019f540: addiu $s1, $zero, 0x280
    goto label_0x19f55c;                                        // 0x0019f544: b 0x19f55c
    g_0028ff84 = v0;  // Global at 0x0028ff84                   // 0x0019f548: sw $v0, -0x7c($at)
label_0x19f54c:
    v0 = 4;                                                     // 0x0019f54c: addiu $v0, $zero, 4
    at = 0x29 << 16;                                            // 0x0019f550: lui $at, 0x29
    s1 = 0x200;                                                 // 0x0019f554: addiu $s1, $zero, 0x200
    g_0028ff84 = v0;  // Global at 0x0028ff84                   // 0x0019f558: sw $v0, -0x7c($at)
label_0x19f55c:
    if (a2 != 0) goto label_0x19f624;                           // 0x0019f55c: bnez $a2, 0x19f624
    v0 = 2;                                                     // 0x0019f560: addiu $v0, $zero, 2
    v0 = 2;                                                     // 0x0019f564: addiu $v0, $zero, 2
    if (a3 == v0) goto label_0x19f5ec;                          // 0x0019f568: beq $a3, $v0, 0x19f5ec
    a1 = 1;                                                     // 0x0019f56c: addiu $a1, $zero, 1
    a1 = 1;                                                     // 0x0019f570: addiu $a1, $zero, 1
    if (a3 == a1) goto label_0x19f5b8;                          // 0x0019f574: beq $a3, $a1, 0x19f5b8
    a1 = 1;                                                     // 0x0019f57c: addiu $a1, $zero, 1
    a2 = 2;                                                     // 0x0019f584: addiu $a2, $zero, 2
    func_00112210();  // 112210                                // 0x0019f588: jal 0x112210
    v1 = 0x27c;                                                 // 0x0019f590: addiu $v1, $zero, 0x27c
    at = 0x29 << 16;                                            // 0x0019f594: lui $at, 0x29
    g_00290324 = v1;  // Global at 0x00290324                   // 0x0019f598: sw $v1, 0x324($at)
    v0 = 0x32;                                                  // 0x0019f59c: addiu $v0, $zero, 0x32
    at = 0x29 << 16;                                            // 0x0019f5a0: lui $at, 0x29
    s0 = 0xe0;                                                  // 0x0019f5a4: addiu $s0, $zero, 0xe0
    a0 = 0x1c0;                                                 // 0x0019f5a8: addiu $a0, $zero, 0x1c0
    goto label_0x19f6d8;                                        // 0x0019f5ac: b 0x19f6d8
    g_00290328 = v0;  // Global at 0x00290328                   // 0x0019f5b0: sw $v0, 0x328($at)
label_0x19f5b8:
    a2 = 3;                                                     // 0x0019f5b8: addiu $a2, $zero, 3
    func_00112210();  // 112210                                // 0x0019f5bc: jal 0x112210
    v1 = 0x290;                                                 // 0x0019f5c4: addiu $v1, $zero, 0x290
    at = 0x29 << 16;                                            // 0x0019f5c8: lui $at, 0x29
    g_00290324 = v1;  // Global at 0x00290324                   // 0x0019f5cc: sw $v1, 0x324($at)
    v0 = 0x62;                                                  // 0x0019f5d0: addiu $v0, $zero, 0x62
    at = 0x29 << 16;                                            // 0x0019f5d4: lui $at, 0x29
    s0 = 0xe0;                                                  // 0x0019f5d8: addiu $s0, $zero, 0xe0
    a0 = 0x1c0;                                                 // 0x0019f5dc: addiu $a0, $zero, 0x1c0
    goto label_0x19f6d8;                                        // 0x0019f5e0: b 0x19f6d8
    g_00290328 = v0;  // Global at 0x00290328                   // 0x0019f5e4: sw $v0, 0x328($at)
    a1 = 1;                                                     // 0x0019f5e8: addiu $a1, $zero, 1
label_0x19f5ec:
    a2 = 3;                                                     // 0x0019f5f0: addiu $a2, $zero, 3
    func_00112210();  // 112210                                // 0x0019f5f4: jal 0x112210
    v1 = 0x290;                                                 // 0x0019f5fc: addiu $v1, $zero, 0x290
    at = 0x29 << 16;                                            // 0x0019f600: lui $at, 0x29
    g_00290324 = v1;  // Global at 0x00290324                   // 0x0019f604: sw $v1, 0x324($at)
    v0 = 0x48;                                                  // 0x0019f608: addiu $v0, $zero, 0x48
    at = 0x29 << 16;                                            // 0x0019f60c: lui $at, 0x29
    s0 = 0x100;                                                 // 0x0019f610: addiu $s0, $zero, 0x100
    a0 = 0x200;                                                 // 0x0019f614: addiu $a0, $zero, 0x200
    goto label_0x19f6d8;                                        // 0x0019f618: b 0x19f6d8
    g_00290328 = v0;  // Global at 0x00290328                   // 0x0019f61c: sw $v0, 0x328($at)
    v0 = 2;                                                     // 0x0019f620: addiu $v0, $zero, 2
label_0x19f624:
    if (a3 == v0) goto label_0x19f6a8;                          // 0x0019f624: beq $a3, $v0, 0x19f6a8
    a1 = 1;                                                     // 0x0019f62c: addiu $a1, $zero, 1
    if (a3 == a1) goto label_0x19f674;                          // 0x0019f630: beq $a3, $a1, 0x19f674
    a1 = 1;                                                     // 0x0019f63c: addiu $a1, $zero, 1
    a2 = 2;                                                     // 0x0019f640: addiu $a2, $zero, 2
    func_00112210();  // 112210                                // 0x0019f644: jal 0x112210
    v0 = 0x27c;                                                 // 0x0019f64c: addiu $v0, $zero, 0x27c
    at = 0x29 << 16;                                            // 0x0019f650: lui $at, 0x29
    g_00290324 = v0;  // Global at 0x00290324                   // 0x0019f654: sw $v0, 0x324($at)
    s0 = 0x1c0;                                                 // 0x0019f658: addiu $s0, $zero, 0x1c0
    v0 = 0x32;                                                  // 0x0019f65c: addiu $v0, $zero, 0x32
    at = 0x29 << 16;                                            // 0x0019f660: lui $at, 0x29
    goto label_0x19f6d8;                                        // 0x0019f668: b 0x19f6d8
    g_00290328 = v0;  // Global at 0x00290328                   // 0x0019f66c: sw $v0, 0x328($at)
label_0x19f674:
    a2 = 3;                                                     // 0x0019f674: addiu $a2, $zero, 3
    func_00112210();  // 112210                                // 0x0019f678: jal 0x112210
    v0 = 0x290;                                                 // 0x0019f680: addiu $v0, $zero, 0x290
    at = 0x29 << 16;                                            // 0x0019f684: lui $at, 0x29
    g_00290324 = v0;  // Global at 0x00290324                   // 0x0019f688: sw $v0, 0x324($at)
    s0 = 0x1c0;                                                 // 0x0019f68c: addiu $s0, $zero, 0x1c0
    v0 = 0x62;                                                  // 0x0019f690: addiu $v0, $zero, 0x62
    at = 0x29 << 16;                                            // 0x0019f694: lui $at, 0x29
    goto label_0x19f6d8;                                        // 0x0019f69c: b 0x19f6d8
    g_00290328 = v0;  // Global at 0x00290328                   // 0x0019f6a0: sw $v0, 0x328($at)
label_0x19f6a8:
    a1 = 1;                                                     // 0x0019f6a8: addiu $a1, $zero, 1
    a2 = 3;                                                     // 0x0019f6ac: addiu $a2, $zero, 3
    func_00112210();  // 112210                                // 0x0019f6b0: jal 0x112210
    v0 = 0x290;                                                 // 0x0019f6b8: addiu $v0, $zero, 0x290
    at = 0x29 << 16;                                            // 0x0019f6bc: lui $at, 0x29
    g_00290324 = v0;  // Global at 0x00290324                   // 0x0019f6c0: sw $v0, 0x324($at)
    s0 = 0x200;                                                 // 0x0019f6c4: addiu $s0, $zero, 0x200
    v0 = 0x48;                                                  // 0x0019f6c8: addiu $v0, $zero, 0x48
    at = 0x29 << 16;                                            // 0x0019f6cc: lui $at, 0x29
    g_00290328 = v0;  // Global at 0x00290328                   // 0x0019f6d4: sw $v0, 0x328($at)
label_0x19f6d8:
    at = 0x29 << 16;                                            // 0x0019f6d8: lui $at, 0x29
    v0 = 4;                                                     // 0x0019f6dc: addiu $v0, $zero, 4
    g_0028ff80 = a0;  // Global at 0x0028ff80                   // 0x0019f6e0: sw $a0, -0x80($at)
    at = 0x29 << 16;                                            // 0x0019f6e4: lui $at, 0x29
    *(uint32_t*)((gp) + -0x6448) = s1;                          // 0x0019f6e8: sw $s1, -0x6448($gp)
    g_0028ff7c = s1;  // Global at 0x0028ff7c                   // 0x0019f6ec: sw $s1, -0x84($at)
    at = 0x29 << 16;                                            // 0x0019f6f0: lui $at, 0x29
    v1 = g_0028ff88;  // Global at 0x0028ff88                   // 0x0019f6f4: lw $v1, -0x78($at)
    if (v1 == v0) goto label_0x19f768;                          // 0x0019f6f8: beq $v1, $v0, 0x19f768
    *(uint32_t*)((gp) + -0x644c) = s0;                          // 0x0019f6fc: sw $s0, -0x644c($gp)
    v0 = 3;                                                     // 0x0019f700: addiu $v0, $zero, 3
    if (v1 == v0) goto label_0x19f744;                          // 0x0019f704: beq $v1, $v0, 0x19f744
    v0 = 1;                                                     // 0x0019f708: addiu $v0, $zero, 1
    v0 = 2;                                                     // 0x0019f70c: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x19f720;                          // 0x0019f710: beq $v1, $v0, 0x19f720
    /* nop */                                                   // 0x0019f714: nop 
    goto label_0x19f768;                                        // 0x0019f718: b 0x19f768
    /* nop */                                                   // 0x0019f71c: nop 
label_0x19f720:
    at = 0x29 << 16;                                            // 0x0019f720: lui $at, 0x29
    g_0028ff8c = v0;  // Global at 0x0028ff8c                   // 0x0019f724: sw $v0, -0x74($at)
    v0 = 0x40;                                                  // 0x0019f728: addiu $v0, $zero, 0x40
    at = 0x29 << 16;                                            // 0x0019f72c: lui $at, 0x29
    g_0028ff90 = v0;  // Global at 0x0028ff90                   // 0x0019f730: sw $v0, -0x70($at)
    at = 0x29 << 16;                                            // 0x0019f734: lui $at, 0x29
    goto label_0x19f788;                                        // 0x0019f738: b 0x19f788
    g_0028ff94 = v0;  // Global at 0x0028ff94                   // 0x0019f73c: sw $v0, -0x6c($at)
    v0 = 1;                                                     // 0x0019f740: addiu $v0, $zero, 1
label_0x19f744:
    at = 0x29 << 16;                                            // 0x0019f744: lui $at, 0x29
    g_0028ff8c = v0;  // Global at 0x0028ff8c                   // 0x0019f748: sw $v0, -0x74($at)
    v1 = 0x40;                                                  // 0x0019f74c: addiu $v1, $zero, 0x40
    at = 0x29 << 16;                                            // 0x0019f750: lui $at, 0x29
    v0 = 0x20;                                                  // 0x0019f754: addiu $v0, $zero, 0x20
    g_0028ff90 = v1;  // Global at 0x0028ff90                   // 0x0019f758: sw $v1, -0x70($at)
    at = 0x29 << 16;                                            // 0x0019f75c: lui $at, 0x29
    goto label_0x19f788;                                        // 0x0019f760: b 0x19f788
    g_0028ff94 = v0;  // Global at 0x0028ff94                   // 0x0019f764: sw $v0, -0x6c($at)
label_0x19f768:
    at = 0x29 << 16;                                            // 0x0019f768: lui $at, 0x29
    v0 = 0x40;                                                  // 0x0019f76c: addiu $v0, $zero, 0x40
    g_0028ff8c = 0;  // Global at 0x0028ff8c                    // 0x0019f770: sw $zero, -0x74($at)
    at = 0x29 << 16;                                            // 0x0019f774: lui $at, 0x29
    g_0028ff90 = v0;  // Global at 0x0028ff90                   // 0x0019f778: sw $v0, -0x70($at)
    v0 = 0x20;                                                  // 0x0019f77c: addiu $v0, $zero, 0x20
    at = 0x29 << 16;                                            // 0x0019f780: lui $at, 0x29
    g_0028ff94 = v0;  // Global at 0x0028ff94                   // 0x0019f784: sw $v0, -0x6c($at)
label_0x19f788:
    at = 0x29 << 16;                                            // 0x0019f788: lui $at, 0x29
    a1 = g_0028ff90;  // Global at 0x0028ff90                   // 0x0019f78c: lw $a1, -0x70($at)
    at = 0x29 << 16;                                            // 0x0019f790: lui $at, 0x29
    v0 = s1 + a1;                                               // 0x0019f794: addu $v0, $s1, $a1
    a0 = g_0028ff94;  // Global at 0x0028ff94                   // 0x0019f798: lw $a0, -0x6c($at)
    v0 = v0 + -1;                                               // 0x0019f79c: addiu $v0, $v0, -1
    v1 = s0 + a0;                                               // 0x0019f7a0: addu $v1, $s0, $a0
    v1 = v1 + -1;                                               // 0x0019f7a4: addiu $v1, $v1, -1
    /* divide: v1 / a0 -> hi:lo */                              // 0x0019f7a8: divu $zero, $v1, $a0
    /* nop */                                                   // 0x0019f7ac: nop 
    /* nop */                                                   // 0x0019f7b0: nop 
    /* mflo $v1 */                                              // 0x0019f7b4
    /* divide: v0 / a1 -> hi:lo */                              // 0x0019f7b8: divu $zero, $v0, $a1
    /* nop */                                                   // 0x0019f7bc: nop 
    /* nop */                                                   // 0x0019f7c0: nop 
    /* mflo $v0 */                                              // 0x0019f7c4
    /* multiply: a1 * v0 -> hi:lo */                            // 0x0019f7c8: mult $ac2, $a1, $v0
    /* multiply: v1 * v0 -> hi:lo */                            // 0x0019f7cc: mult $ac2, $v1, $v0
    /* multiply: a0 * v0 -> hi:lo */                            // 0x0019f7d0: mult $ac2, $a0, $v0
    func_0019c640();  // 19c640                                // 0x0019f7d8: jal 0x19c640
    v0 = v0 & 0xffff;                                           // 0x0019f7e0: andi $v0, $v0, 0xffff
    at = 0x29 << 16;                                            // 0x0019f7e4: lui $at, 0x29
    func_0019c640();  // 19c640                                // 0x0019f7ec: jal 0x19c640
    g_0028ff98 = v0;  // Global at 0x0028ff98                   // 0x0019f7f0: sw $v0, -0x68($at)
    at = 0x29 << 16;                                            // 0x0019f7f4: lui $at, 0x29
    v0 = v0 & 0xffff;                                           // 0x0019f7f8: andi $v0, $v0, 0xffff
    a0 = g_0028ffa0;  // Global at 0x0028ffa0                   // 0x0019f7fc: lw $a0, -0x60($at)
    at = 0x29 << 16;                                            // 0x0019f800: lui $at, 0x29
    g_0028ff9c = v0;  // Global at 0x0028ff9c                   // 0x0019f804: sw $v0, -0x64($at)
    v0 = 4;                                                     // 0x0019f808: addiu $v0, $zero, 4
    if (a0 == v0) goto label_0x19f8cc;                          // 0x0019f80c: beq $a0, $v0, 0x19f8cc
    /* nop */                                                   // 0x0019f810: nop 
    v0 = 3;                                                     // 0x0019f814: addiu $v0, $zero, 3
    if (a0 == v0) goto label_0x19f890;                          // 0x0019f818: beq $a0, $v0, 0x19f890
    v1 = 0x31;                                                  // 0x0019f81c: addiu $v1, $zero, 0x31
    v1 = 2;                                                     // 0x0019f820: addiu $v1, $zero, 2
    if (a0 == v1) goto label_0x19f834;                          // 0x0019f824: beq $a0, $v1, 0x19f834
    /* nop */                                                   // 0x0019f828: nop 
    goto label_0x19f8cc;                                        // 0x0019f82c: b 0x19f8cc
    /* nop */                                                   // 0x0019f830: nop 
label_0x19f834:
    at = 0x29 << 16;                                            // 0x0019f834: lui $at, 0x29
    v0 = g_0028ff88;  // Global at 0x0028ff88                   // 0x0019f838: lw $v0, -0x78($at)
    if (v0 != v1) goto label_0x19f858;                          // 0x0019f83c: bne $v0, $v1, 0x19f858
    v0 = 0x3a;                                                  // 0x0019f840: addiu $v0, $zero, 0x3a
    v0 = 0x32;                                                  // 0x0019f844: addiu $v0, $zero, 0x32
    at = 0x29 << 16;                                            // 0x0019f848: lui $at, 0x29
    goto label_0x19f860;                                        // 0x0019f84c: b 0x19f860
    g_0028ffa4 = v0;  // Global at 0x0028ffa4                   // 0x0019f850: sw $v0, -0x5c($at)
    v0 = 0x3a;                                                  // 0x0019f854: addiu $v0, $zero, 0x3a
label_0x19f858:
    at = 0x29 << 16;                                            // 0x0019f858: lui $at, 0x29
    g_0028ffa4 = v0;  // Global at 0x0028ffa4                   // 0x0019f85c: sw $v0, -0x5c($at)
label_0x19f860:
    v0 = 0 | 0xffff;                                            // 0x0019f860: ori $v0, $zero, 0xffff
    v1 = 0x40;                                                  // 0x0019f864: addiu $v1, $zero, 0x40
    /* move to FPU: $v0, $f0 */                                 // 0x0019f868: mtc1 $v0, $f0
    at = 0x29 << 16;                                            // 0x0019f86c: lui $at, 0x29
    g_0028ffa8 = v1;  // Global at 0x0028ffa8                   // 0x0019f870: sw $v1, -0x58($at)
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0019f874: cvt.s.w $f0, $f0
    at = 0x29 << 16;                                            // 0x0019f878: lui $at, 0x29
    g_0028ffac = v1;  // Global at 0x0028ffac                   // 0x0019f87c: sw $v1, -0x54($at)
    at = 0x29 << 16;                                            // 0x0019f880: lui $at, 0x29
    goto label_0x19f928;                                        // 0x0019f884: b 0x19f928
    *(float*)((at) + -0x4c) = FPU_F0;  // Store float           // 0x0019f888: swc1 $f0, -0x4c($at)
    v1 = 0x31;                                                  // 0x0019f88c: addiu $v1, $zero, 0x31
label_0x19f890:
    at = 0x29 << 16;                                            // 0x0019f890: lui $at, 0x29
    g_0028ffa4 = v1;  // Global at 0x0028ffa4                   // 0x0019f894: sw $v1, -0x5c($at)
    v0 = 0x40;                                                  // 0x0019f898: addiu $v0, $zero, 0x40
    at = 0x29 << 16;                                            // 0x0019f89c: lui $at, 0x29
    v1 = 0x20;                                                  // 0x0019f8a0: addiu $v1, $zero, 0x20
    g_0028ffa8 = v0;  // Global at 0x0028ffa8                   // 0x0019f8a4: sw $v0, -0x58($at)
    v0 = 0xff << 16;                                            // 0x0019f8a8: lui $v0, 0xff
    at = 0x29 << 16;                                            // 0x0019f8ac: lui $at, 0x29
    v0 = v0 | 0xff28;                                           // 0x0019f8b0: ori $v0, $v0, 0xff28
    g_0028ffac = v1;  // Global at 0x0028ffac                   // 0x0019f8b4: sw $v1, -0x54($at)
    /* move to FPU: $v0, $f0 */                                 // 0x0019f8b8: mtc1 $v0, $f0
    at = 0x29 << 16;                                            // 0x0019f8bc: lui $at, 0x29
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0019f8c0: cvt.s.w $f0, $f0
    goto label_0x19f928;                                        // 0x0019f8c4: b 0x19f928
    *(float*)((at) + -0x4c) = FPU_F0;  // Store float           // 0x0019f8c8: swc1 $f0, -0x4c($at)
label_0x19f8cc:
    at = 0x29 << 16;                                            // 0x0019f8cc: lui $at, 0x29
    v0 = 2;                                                     // 0x0019f8d0: addiu $v0, $zero, 2
    v1 = g_0028ff88;  // Global at 0x0028ff88                   // 0x0019f8d4: lw $v1, -0x78($at)
    if (v1 != v0) goto label_0x19f8f0;                          // 0x0019f8d8: bne $v1, $v0, 0x19f8f0
    v1 = 0x30;                                                  // 0x0019f8dc: addiu $v1, $zero, 0x30
    v0 = 0xa;                                                   // 0x0019f8e0: addiu $v0, $zero, 0xa
    at = 0x29 << 16;                                            // 0x0019f8e4: lui $at, 0x29
    g_0028ff8c = v0;  // Global at 0x0028ff8c                   // 0x0019f8e8: sw $v0, -0x74($at)
    v1 = 0x30;                                                  // 0x0019f8ec: addiu $v1, $zero, 0x30
label_0x19f8f0:
    at = 0x29 << 16;                                            // 0x0019f8f0: lui $at, 0x29
    g_0028ffa4 = v1;  // Global at 0x0028ffa4                   // 0x0019f8f4: sw $v1, -0x5c($at)
    v0 = 0x40;                                                  // 0x0019f8f8: addiu $v0, $zero, 0x40
    at = 0x29 << 16;                                            // 0x0019f8fc: lui $at, 0x29
    v1 = 0x20;                                                  // 0x0019f900: addiu $v1, $zero, 0x20
    g_0028ffa8 = v0;  // Global at 0x0028ffa8                   // 0x0019f904: sw $v0, -0x58($at)
    v0 = 0xff << 16;                                            // 0x0019f908: lui $v0, 0xff
    at = 0x29 << 16;                                            // 0x0019f90c: lui $at, 0x29
    v0 = v0 | 0xff28;                                           // 0x0019f910: ori $v0, $v0, 0xff28
    g_0028ffac = v1;  // Global at 0x0028ffac                   // 0x0019f914: sw $v1, -0x54($at)
    /* move to FPU: $v0, $f0 */                                 // 0x0019f918: mtc1 $v0, $f0
    at = 0x29 << 16;                                            // 0x0019f91c: lui $at, 0x29
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0019f920: cvt.s.w $f0, $f0
    *(float*)((at) + -0x4c) = FPU_F0;  // Store float           // 0x0019f924: swc1 $f0, -0x4c($at)
label_0x19f928:
    at = 0x29 << 16;                                            // 0x0019f928: lui $at, 0x29
    a1 = g_0028ffac;  // Global at 0x0028ffac                   // 0x0019f92c: lw $a1, -0x54($at)
    at = 0x29 << 16;                                            // 0x0019f930: lui $at, 0x29
    v0 = s0 + a1;                                               // 0x0019f934: addu $v0, $s0, $a1
    a0 = g_0028ffa8;  // Global at 0x0028ffa8                   // 0x0019f938: lw $a0, -0x58($at)
    v0 = v0 + -1;                                               // 0x0019f93c: addiu $v0, $v0, -1
    v1 = s1 + a0;                                               // 0x0019f940: addu $v1, $s1, $a0
    v1 = v1 + -1;                                               // 0x0019f944: addiu $v1, $v1, -1
    /* divide: v1 / a0 -> hi:lo */                              // 0x0019f948: divu $zero, $v1, $a0
    /* nop */                                                   // 0x0019f94c: nop 
    /* nop */                                                   // 0x0019f950: nop 
    /* mflo $v1 */                                              // 0x0019f954
    /* multiply: a0 * v1 -> hi:lo */                            // 0x0019f958: mult $ac3, $a0, $v1
    /* divide: v0 / a1 -> hi:lo */                              // 0x0019f95c: divu $zero, $v0, $a1
    /* nop */                                                   // 0x0019f960: nop 
    /* nop */                                                   // 0x0019f964: nop 
    /* mflo $v0 */                                              // 0x0019f968
    /* multiply: v1 * v0 -> hi:lo */                            // 0x0019f970: mult $ac2, $v1, $v0
    func_0019c640();  // 19c640                                // 0x0019f974: jal 0x19c640
    at = 0x29 << 16;                                            // 0x0019f97c: lui $at, 0x29
    v0 = v0 & 0xffff;                                           // 0x0019f980: andi $v0, $v0, 0xffff
    g_0029031c = 0;  // Global at 0x0029031c                    // 0x0019f984: sw $zero, 0x31c($at)
    v1 = 0x800;                                                 // 0x0019f988: addiu $v1, $zero, 0x800
    at = 0x29 << 16;                                            // 0x0019f98c: lui $at, 0x29
    g_0028ffb0 = v0;  // Global at 0x0028ffb0                   // 0x0019f990: sw $v0, -0x50($at)
    at = 0x29 << 16;                                            // 0x0019f994: lui $at, 0x29
    v0 = s1 >> 1;                                               // 0x0019f998: sra $v0, $s1, 1
    g_00290320 = 0;  // Global at 0x00290320                    // 0x0019f99c: sw $zero, 0x320($at)
    v0 = v1 - v0;                                               // 0x0019f9a0: subu $v0, $v1, $v0
    at = 0x29 << 16;                                            // 0x0019f9a4: lui $at, 0x29
    g_00290404 = s1;  // Global at 0x00290404                   // 0x0019f9a8: sw $s1, 0x404($at)
    at = 0x29 << 16;                                            // 0x0019f9ac: lui $at, 0x29
    g_00290314 = v0;  // Global at 0x00290314                   // 0x0019f9b0: sw $v0, 0x314($at)
    at = 0x29 << 16;                                            // 0x0019f9b4: lui $at, 0x29
    v0 = s0 >> 1;                                               // 0x0019f9b8: sra $v0, $s0, 1
    g_00290408 = s0;  // Global at 0x00290408                   // 0x0019f9bc: sw $s0, 0x408($at)
    v0 = v1 - v0;                                               // 0x0019f9c0: subu $v0, $v1, $v0
    at = 0x29 << 16;                                            // 0x0019f9c4: lui $at, 0x29
    g_00290318 = v0;  // Global at 0x00290318                   // 0x0019f9c8: sw $v0, 0x318($at)
    at = 0x29 << 16;                                            // 0x0019f9cc: lui $at, 0x29
    v0 = 4;                                                     // 0x0019f9d0: addiu $v0, $zero, 4
    g_00290410 = 0;  // Global at 0x00290410                    // 0x0019f9d4: sw $zero, 0x410($at)
    at = 0x29 << 16;                                            // 0x0019f9d8: lui $at, 0x29
    g_00290400 = 0;  // Global at 0x00290400                    // 0x0019f9dc: sw $zero, 0x400($at)
    at = 0x29 << 16;                                            // 0x0019f9e0: lui $at, 0x29
    a0 = g_0028ff88;  // Global at 0x0028ff88                   // 0x0019f9e4: lw $a0, -0x78($at)
    /* multiply: s1 * a0 -> hi:lo */                            // 0x0019f9e8: mult $ac3, $s1, $a0
    at = 0x29 << 16;                                            // 0x0019f9ec: lui $at, 0x29
    g_00290414 = a0;  // Global at 0x00290414                   // 0x0019f9f0: sw $a0, 0x414($at)
    at = 0x29 << 16;                                            // 0x0019f9f4: lui $at, 0x29
    if (a0 == v0) goto label_0x19fb08;                          // 0x0019f9f8: beq $a0, $v0, 0x19fb08
    g_0029040c = v1;  // Global at 0x0029040c                   // 0x0019f9fc: sw $v1, 0x40c($at)
    v0 = 3;                                                     // 0x0019fa00: addiu $v0, $zero, 3
    if (a0 == v0) goto label_0x19fa98;                          // 0x0019fa04: beq $a0, $v0, 0x19fa98
    /* nop */                                                   // 0x0019fa08: nop 
    v0 = 2;                                                     // 0x0019fa0c: addiu $v0, $zero, 2
    if (a0 == v0) goto label_0x19fa20;                          // 0x0019fa10: beq $a0, $v0, 0x19fa20
    /* nop */                                                   // 0x0019fa14: nop 
    goto label_0x19fb78;                                        // 0x0019fa18: b 0x19fb78
    /* nop */                                                   // 0x0019fa1c: nop 
label_0x19fa20:
    at = 0x29 << 16;                                            // 0x0019fa20: lui $at, 0x29
    a1 = 5;                                                     // 0x0019fa24: addiu $a1, $zero, 5
    g_0029041c = 0;  // Global at 0x0029041c                    // 0x0019fa28: sw $zero, 0x41c($at)
    v0 = 0xa;                                                   // 0x0019fa2c: addiu $v0, $zero, 0xa
    at = 0x29 << 16;                                            // 0x0019fa30: lui $at, 0x29
    a0 = 0x1f;                                                  // 0x0019fa34: addiu $a0, $zero, 0x1f
    g_00290418 = a1;  // Global at 0x00290418                   // 0x0019fa38: sw $a1, 0x418($at)
    v1 = 1;                                                     // 0x0019fa3c: addiu $v1, $zero, 1
    at = 0x29 << 16;                                            // 0x0019fa40: lui $at, 0x29
    g_00290434 = v0;  // Global at 0x00290434                   // 0x0019fa44: sw $v0, 0x434($at)
    at = 0x29 << 16;                                            // 0x0019fa48: lui $at, 0x29
    v0 = 0xf;                                                   // 0x0019fa4c: addiu $v0, $zero, 0xf
    g_00290420 = a0;  // Global at 0x00290420                   // 0x0019fa50: sw $a0, 0x420($at)
    at = 0x29 << 16;                                            // 0x0019fa54: lui $at, 0x29
    g_00290428 = a1;  // Global at 0x00290428                   // 0x0019fa58: sw $a1, 0x428($at)
    at = 0x29 << 16;                                            // 0x0019fa5c: lui $at, 0x29
    g_00290440 = v0;  // Global at 0x00290440                   // 0x0019fa60: sw $v0, 0x440($at)
    at = 0x29 << 16;                                            // 0x0019fa64: lui $at, 0x29
    g_00290430 = a1;  // Global at 0x00290430                   // 0x0019fa68: sw $a1, 0x430($at)
    at = 0x29 << 16;                                            // 0x0019fa6c: lui $at, 0x29
    g_00290424 = a1;  // Global at 0x00290424                   // 0x0019fa70: sw $a1, 0x424($at)
    at = 0x29 << 16;                                            // 0x0019fa74: lui $at, 0x29
    g_00290438 = a0;  // Global at 0x00290438                   // 0x0019fa78: sw $a0, 0x438($at)
    at = 0x29 << 16;                                            // 0x0019fa7c: lui $at, 0x29
    g_0029042c = a0;  // Global at 0x0029042c                   // 0x0019fa80: sw $a0, 0x42c($at)
    at = 0x29 << 16;                                            // 0x0019fa84: lui $at, 0x29
    g_0029043c = v1;  // Global at 0x0029043c                   // 0x0019fa88: sw $v1, 0x43c($at)
    at = 0x29 << 16;                                            // 0x0019fa8c: lui $at, 0x29
    goto label_0x19fb78;                                        // 0x0019fa90: b 0x19fb78
    g_00290444 = v1;  // Global at 0x00290444                   // 0x0019fa94: sw $v1, 0x444($at)
label_0x19fa98:
    at = 0x29 << 16;                                            // 0x0019fa98: lui $at, 0x29
    v1 = 8;                                                     // 0x0019fa9c: addiu $v1, $zero, 8
    g_0029043c = 0;  // Global at 0x0029043c                    // 0x0019faa0: sw $zero, 0x43c($at)
    v0 = 0x10;                                                  // 0x0019faa4: addiu $v0, $zero, 0x10
    at = 0x29 << 16;                                            // 0x0019faa8: lui $at, 0x29
    g_00290418 = v1;  // Global at 0x00290418                   // 0x0019faac: sw $v1, 0x418($at)
    at = 0x29 << 16;                                            // 0x0019fab0: lui $at, 0x29
    g_00290434 = v0;  // Global at 0x00290434                   // 0x0019fab4: sw $v0, 0x434($at)
    v0 = 0xff;                                                  // 0x0019fab8: addiu $v0, $zero, 0xff
    at = 0x29 << 16;                                            // 0x0019fabc: lui $at, 0x29
    g_00290420 = v0;  // Global at 0x00290420                   // 0x0019fac0: sw $v0, 0x420($at)
    at = 0x29 << 16;                                            // 0x0019fac4: lui $at, 0x29
    g_00290424 = v1;  // Global at 0x00290424                   // 0x0019fac8: sw $v1, 0x424($at)
    at = 0x29 << 16;                                            // 0x0019facc: lui $at, 0x29
    g_00290428 = v1;  // Global at 0x00290428                   // 0x0019fad0: sw $v1, 0x428($at)
    at = 0x29 << 16;                                            // 0x0019fad4: lui $at, 0x29
    g_00290430 = v1;  // Global at 0x00290430                   // 0x0019fad8: sw $v1, 0x430($at)
    at = 0x29 << 16;                                            // 0x0019fadc: lui $at, 0x29
    g_0029042c = v0;  // Global at 0x0029042c                   // 0x0019fae0: sw $v0, 0x42c($at)
    at = 0x29 << 16;                                            // 0x0019fae4: lui $at, 0x29
    g_00290438 = v0;  // Global at 0x00290438                   // 0x0019fae8: sw $v0, 0x438($at)
    at = 0x29 << 16;                                            // 0x0019faec: lui $at, 0x29
    g_00290440 = 0;  // Global at 0x00290440                    // 0x0019faf0: sw $zero, 0x440($at)
    at = 0x29 << 16;                                            // 0x0019faf4: lui $at, 0x29
    g_00290444 = 0;  // Global at 0x00290444                    // 0x0019faf8: sw $zero, 0x444($at)
    at = 0x29 << 16;                                            // 0x0019fafc: lui $at, 0x29
    goto label_0x19fb78;                                        // 0x0019fb00: b 0x19fb78
    g_0029041c = 0;  // Global at 0x0029041c                    // 0x0019fb04: sw $zero, 0x41c($at)
label_0x19fb08:
    at = 0x29 << 16;                                            // 0x0019fb08: lui $at, 0x29
    a0 = 8;                                                     // 0x0019fb0c: addiu $a0, $zero, 8
    g_0029041c = 0;  // Global at 0x0029041c                    // 0x0019fb10: sw $zero, 0x41c($at)
    v0 = 0x10;                                                  // 0x0019fb14: addiu $v0, $zero, 0x10
    at = 0x29 << 16;                                            // 0x0019fb18: lui $at, 0x29
    v1 = 0xff;                                                  // 0x0019fb1c: addiu $v1, $zero, 0xff
    g_00290418 = a0;  // Global at 0x00290418                   // 0x0019fb20: sw $a0, 0x418($at)
    at = 0x29 << 16;                                            // 0x0019fb24: lui $at, 0x29
    g_00290434 = v0;  // Global at 0x00290434                   // 0x0019fb28: sw $v0, 0x434($at)
    at = 0x29 << 16;                                            // 0x0019fb2c: lui $at, 0x29
    v0 = 0x18;                                                  // 0x0019fb30: addiu $v0, $zero, 0x18
    g_00290420 = v1;  // Global at 0x00290420                   // 0x0019fb34: sw $v1, 0x420($at)
    at = 0x29 << 16;                                            // 0x0019fb38: lui $at, 0x29
    g_00290440 = v0;  // Global at 0x00290440                   // 0x0019fb3c: sw $v0, 0x440($at)
    at = 0x29 << 16;                                            // 0x0019fb40: lui $at, 0x29
    g_00290424 = a0;  // Global at 0x00290424                   // 0x0019fb44: sw $a0, 0x424($at)
    at = 0x29 << 16;                                            // 0x0019fb48: lui $at, 0x29
    g_00290428 = a0;  // Global at 0x00290428                   // 0x0019fb4c: sw $a0, 0x428($at)
    at = 0x29 << 16;                                            // 0x0019fb50: lui $at, 0x29
    g_0029042c = v1;  // Global at 0x0029042c                   // 0x0019fb54: sw $v1, 0x42c($at)
    at = 0x29 << 16;                                            // 0x0019fb58: lui $at, 0x29
    g_00290430 = a0;  // Global at 0x00290430                   // 0x0019fb5c: sw $a0, 0x430($at)
    at = 0x29 << 16;                                            // 0x0019fb60: lui $at, 0x29
    g_0029043c = a0;  // Global at 0x0029043c                   // 0x0019fb64: sw $a0, 0x43c($at)
    at = 0x29 << 16;                                            // 0x0019fb68: lui $at, 0x29
    g_00290438 = v1;  // Global at 0x00290438                   // 0x0019fb6c: sw $v1, 0x438($at)
    at = 0x29 << 16;                                            // 0x0019fb70: lui $at, 0x29
    g_00290444 = v1;  // Global at 0x00290444                   // 0x0019fb74: sw $v1, 0x444($at)
label_0x19fb78:
    func_00195ec0();  // 195ec0                                // 0x0019fb78: jal 0x195ec0
    /* nop */                                                   // 0x0019fb7c: nop 
    at = 0x29 << 16;                                            // 0x0019fb80: lui $at, 0x29
    s1 = 0x29 << 16;                                            // 0x0019fb84: lui $s1, 0x29
    g_0028ffc0 = 0;  // Global at 0x0028ffc0                    // 0x0019fb88: sw $zero, -0x40($at)
    s1 = s1 + -0x1d0;                                           // 0x0019fb8c: addiu $s1, $s1, -0x1d0
    v0 = 1;                                                     // 0x0019fb90: addiu $v0, $zero, 1
    at = 0x29 << 16;                                            // 0x0019fb94: lui $at, 0x29
    s0 = 0x29 << 16;                                            // 0x0019fb98: lui $s0, 0x29
    g_0028ffbc = v0;  // Global at 0x0028ffbc                   // 0x0019fb9c: sw $v0, -0x44($at)
    a1 = 9;                                                     // 0x0019fba4: addiu $a1, $zero, 9
    func_0018c660();  // 18c660                                // 0x0019fbb0: jal 0x18c660
    s0 = s0 + -0x130;                                           // 0x0019fbb4: addiu $s0, $s0, -0x130
    a1 = 9;                                                     // 0x0019fbbc: addiu $a1, $zero, 9
    func_0018c660();  // 18c660                                // 0x0019fbc4: jal 0x18c660
    v0 = 0x1000 << 16;                                          // 0x0019fbcc: lui $v0, 0x1000
    at = 0x29 << 16;                                            // 0x0019fbd0: lui $at, 0x29
    v1 = 0 | 0x8008;                                            // 0x0019fbd8: ori $v1, $zero, 0x8008
    v0 = 0xe;                                                   // 0x0019fbdc: addiu $v0, $zero, 0xe
    v1 = v1 | a0;                                               // 0x0019fbe0: or $v1, $v1, $a0
    at = 0x29 << 16;                                            // 0x0019fbe8: lui $at, 0x29
    v1 = *(int32_t*)((gp) + -0x6448);                           // 0x0019fbf8: lw $v1, -0x6448($gp)
    if (v1 >= 0) goto label_0x19fc0c;                           // 0x0019fbfc: bgez $v1, 0x19fc0c
    v0 = v1 >> 6;                                               // 0x0019fc00: sra $v0, $v1, 6
    v0 = v1 + 0x3f;                                             // 0x0019fc04: addiu $v0, $v1, 0x3f
    v0 = v0 >> 6;                                               // 0x0019fc08: sra $v0, $v0, 6
label_0x19fc0c:
    at = 0x29 << 16;                                            // 0x0019fc0c: lui $at, 0x29
    a1 = 1;                                                     // 0x0019fc20: addiu $a1, $zero, 1
    v1 = 0x4c;                                                  // 0x0019fc24: addiu $v1, $zero, 0x4c
    v0 = 0x4d;                                                  // 0x0019fc28: addiu $v0, $zero, 0x4d
    t3 = 0x4e;                                                  // 0x0019fc30: addiu $t3, $zero, 0x4e
    t2 = 0x4f;                                                  // 0x0019fc34: addiu $t2, $zero, 0x4f
    t1 = 0x18;                                                  // 0x0019fc38: addiu $t1, $zero, 0x18
    at = 0x29 << 16;                                            // 0x0019fc3c: lui $at, 0x29
    a3 = g_0028ff9c;  // Global at 0x0028ff9c                   // 0x0019fc44: lw $a3, -0x64($at)
    t0 = 0x19;                                                  // 0x0019fc48: addiu $t0, $zero, 0x19
    at = 0x29 << 16;                                            // 0x0019fc4c: lui $at, 0x29
    a3 = (unsigned)a3 >> 5;                                     // 0x0019fc50: srl $a3, $a3, 5
    at = 0x29 << 16;                                            // 0x0019fc5c: lui $at, 0x29
    t4 = g_0028ff98;  // Global at 0x0028ff98                   // 0x0019fc64: lw $t4, -0x68($at)
    t5 = a3 | a2;                                               // 0x0019fc68: or $t5, $a3, $a2
    t5 = t6 | t5;                                               // 0x0019fc6c: or $t5, $t6, $t5
    a3 = 2;                                                     // 0x0019fc70: addiu $a3, $zero, 2
    t5 = t5 | a0;                                               // 0x0019fc74: or $t5, $t5, $a0
    at = 0x29 << 16;                                            // 0x0019fc78: lui $at, 0x29
    t4 = (unsigned)t4 >> 5;                                     // 0x0019fc7c: srl $t4, $t4, 5
    at = 0x29 << 16;                                            // 0x0019fc8c: lui $at, 0x29
    t4 = t4 | a2;                                               // 0x0019fc90: or $t4, $t4, $a2
    t4 = t6 | t4;                                               // 0x0019fc98: or $t4, $t6, $t4
    at = 0x29 << 16;                                            // 0x0019fc9c: lui $at, 0x29
    t4 = t4 | a0;                                               // 0x0019fca4: or $t4, $t4, $a0
    at = 0x29 << 16;                                            // 0x0019fcac: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x0019fcb4: lui $at, 0x29
    t4 = g_0028ff98;  // Global at 0x0028ff98                   // 0x0019fcbc: lw $t4, -0x68($at)
    t4 = (unsigned)t4 >> 5;                                     // 0x0019fcc0: srl $t4, $t4, 5
    at = 0x29 << 16;                                            // 0x0019fcc4: lui $at, 0x29
    a2 = t4 | a2;                                               // 0x0019fcd0: or $a2, $t4, $a2
    a2 = t5 | a2;                                               // 0x0019fcd4: or $a2, $t5, $a2
    a0 = a2 | a0;                                               // 0x0019fcd8: or $a0, $a2, $a0
    at = 0x29 << 16;                                            // 0x0019fcec: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x0019fcf4: lui $at, 0x29
    v1 = g_0028ffb0;  // Global at 0x0028ffb0                   // 0x0019fcf8: lw $v1, -0x50($at)
    at = 0x29 << 16;                                            // 0x0019fcfc: lui $at, 0x29
    v1 = (unsigned)v1 >> 5;                                     // 0x0019fd00: srl $v1, $v1, 5
    at = 0x29 << 16;                                            // 0x0019fd14: lui $at, 0x29
    v0 = v1 | v0;                                               // 0x0019fd18: or $v0, $v1, $v0
    at = 0x29 << 16;                                            // 0x0019fd20: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x0019fd2c: lui $at, 0x29
    v1 = g_0028ffb0;  // Global at 0x0028ffb0                   // 0x0019fd30: lw $v1, -0x50($at)
    at = 0x29 << 16;                                            // 0x0019fd34: lui $at, 0x29
    v1 = (unsigned)v1 >> 5;                                     // 0x0019fd38: srl $v1, $v1, 5
    at = 0x29 << 16;                                            // 0x0019fd4c: lui $at, 0x29
    v0 = v1 | v0;                                               // 0x0019fd50: or $v0, $v1, $v0
    at = 0x29 << 16;                                            // 0x0019fd64: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x0019fd6c: lui $at, 0x29
    v1 = g_00290314;  // Global at 0x00290314                   // 0x0019fd70: lw $v1, 0x314($at)
    at = 0x29 << 16;                                            // 0x0019fd74: lui $at, 0x29
    v1 = v1 << 4;                                               // 0x0019fd78: sll $v1, $v1, 4
    v0 = g_00290318;  // Global at 0x00290318                   // 0x0019fd7c: lw $v0, 0x318($at)
    v0 = v0 << 4;                                               // 0x0019fd80: sll $v0, $v0, 4
    at = 0x29 << 16;                                            // 0x0019fd84: lui $at, 0x29
    v0 = v1 | v0;                                               // 0x0019fd8c: or $v0, $v1, $v0
    at = 0x29 << 16;                                            // 0x0019fd94: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x0019fda0: lui $at, 0x29
    v1 = g_00290314;  // Global at 0x00290314                   // 0x0019fda4: lw $v1, 0x314($at)
    at = 0x29 << 16;                                            // 0x0019fda8: lui $at, 0x29
    v1 = v1 << 4;                                               // 0x0019fdac: sll $v1, $v1, 4
    v0 = g_00290318;  // Global at 0x00290318                   // 0x0019fdb0: lw $v0, 0x318($at)
    v0 = v0 << 4;                                               // 0x0019fdb4: sll $v0, $v0, 4
    at = 0x29 << 16;                                            // 0x0019fdb8: lui $at, 0x29
    v0 = v1 | v0;                                               // 0x0019fdc0: or $v0, $v1, $v0
    v0 = g_0028ff88;  // Global at 0x0028ff88                   // 0x0019fdd0: lw $v0, -0x78($at)
    if (v0 != a3) goto label_0x19fde8;                          // 0x0019fdd4: bne $v0, $a3, 0x19fde8
    /* nop */                                                   // 0x0019fdd8: nop 
    goto label_0x19fdf0;                                        // 0x0019fde0: b 0x19fdf0
label_0x19fde8:
label_0x19fdf0:
    v1 = 0x45;                                                  // 0x0019fdf0: addiu $v1, $zero, 0x45
    a0 = 0x29 << 16;                                            // 0x0019fdf4: lui $a0, 0x29
    a2 = 1;                                                     // 0x0019fdfc: addiu $a2, $zero, 1
    v0 = 0x46;                                                  // 0x0019fe04: addiu $v0, $zero, 0x46
    a0 = a0 + -0x310;                                           // 0x0019fe0c: addiu $a0, $a0, -0x310
    a1 = 0x13;                                                  // 0x0019fe14: addiu $a1, $zero, 0x13
    func_0018c660();  // 18c660                                // 0x0019fe20: jal 0x18c660
    at = 0x29 << 16;                                            // 0x0019fe28: lui $at, 0x29
    v0 = 0x1300 << 16;                                          // 0x0019fe2c: lui $v0, 0x1300
    a1 = 0x47;                                                  // 0x0019fe34: addiu $a1, $zero, 0x47
    at = 0x29 << 16;                                            // 0x0019fe38: lui $at, 0x29
    a0 = 5;                                                     // 0x0019fe3c: addiu $a0, $zero, 5
    g_0028fcf8 = v0;  // Global at 0x0028fcf8                   // 0x0019fe40: sw $v0, -0x308($at)
    at = 0x29 << 16;                                            // 0x0019fe44: lui $at, 0x29
    v0 = 0x5100 << 16;                                          // 0x0019fe48: lui $v0, 0x5100
    v0 = v0 | 0x13;                                             // 0x0019fe50: ori $v0, $v0, 0x13
    at = 0x29 << 16;                                            // 0x0019fe54: lui $at, 0x29
    g_0028fcfc = v0;  // Global at 0x0028fcfc                   // 0x0019fe58: sw $v0, -0x304($at)
    at = 0x29 << 16;                                            // 0x0019fe5c: lui $at, 0x29
    v0 = 0x1000 << 16;                                          // 0x0019fe60: lui $v0, 0x1000
    at = 0x29 << 16;                                            // 0x0019fe6c: lui $at, 0x29
    v0 = 0 | 0x8012;                                            // 0x0019fe70: ori $v0, $zero, 0x8012
    v0 = v0 | v1;                                               // 0x0019fe78: or $v0, $v0, $v1
    at = 0x29 << 16;                                            // 0x0019fe7c: lui $at, 0x29
    v1 = 0x40;                                                  // 0x0019fe80: addiu $v1, $zero, 0x40
    at = 0x29 << 16;                                            // 0x0019fe88: lui $at, 0x29
    v0 = 0xe;                                                   // 0x0019fe90: addiu $v0, $zero, 0xe
    at = 0x29 << 16;                                            // 0x0019fe94: lui $at, 0x29
    v0 = 0x4a;                                                  // 0x0019fe9c: addiu $v0, $zero, 0x4a
    at = 0x29 << 16;                                            // 0x0019fea0: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x0019fea8: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x0019feb0: lui $at, 0x29
    v0 = 3 << 16;                                               // 0x0019feb4: lui $v0, 3
    v0 = v0 | 3;                                                // 0x0019febc: ori $v0, $v0, 3
    at = 0x29 << 16;                                            // 0x0019fec0: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x0019fec8: lui $at, 0x29
    v0 = 6;                                                     // 0x0019fecc: addiu $v0, $zero, 6
    at = 0x29 << 16;                                            // 0x0019fed4: lui $at, 0x29
    v1 = 1;                                                     // 0x0019fed8: addiu $v1, $zero, 1
    at = 0x29 << 16;                                            // 0x0019fee0: lui $at, 0x29
    v0 = 0x41;                                                  // 0x0019fee4: addiu $v0, $zero, 0x41
    at = 0x29 << 16;                                            // 0x0019feec: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x0019fef4: lui $at, 0x29
    v0 = 0x48;                                                  // 0x0019fefc: addiu $v0, $zero, 0x48
    at = 0x29 << 16;                                            // 0x0019ff00: lui $at, 0x29
    v0 = 0x4e;                                                  // 0x0019ff08: addiu $v0, $zero, 0x4e
    at = 0x29 << 16;                                            // 0x0019ff0c: lui $at, 0x29
    v0 = 0x4f;                                                  // 0x0019ff14: addiu $v0, $zero, 0x4f
    at = 0x29 << 16;                                            // 0x0019ff18: lui $at, 0x29
    v0 = 0x4b;                                                  // 0x0019ff20: addiu $v0, $zero, 0x4b
    at = 0x29 << 16;                                            // 0x0019ff24: lui $at, 0x29
    v0 = 0x49;                                                  // 0x0019ff2c: addiu $v0, $zero, 0x49
    at = 0x29 << 16;                                            // 0x0019ff30: lui $at, 0x29
    v0 = 0x1a;                                                  // 0x0019ff38: addiu $v0, $zero, 0x1a
    at = 0x29 << 16;                                            // 0x0019ff3c: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x0019ff44: lui $at, 0x29
    v0 = 0x6071 << 16;                                          // 0x0019ff48: lui $v0, 0x6071
    v0 = v0 | 0x2435;                                           // 0x0019ff50: ori $v0, $v0, 0x2435
    at = 0x29 << 16;                                            // 0x0019ff54: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x0019ff5c: lui $at, 0x29
    v0 = 0x7160 << 16;                                          // 0x0019ff68: lui $v0, 0x7160
    at = 0x29 << 16;                                            // 0x0019ff6c: lui $at, 0x29
    v0 = v0 | 0x3524;                                           // 0x0019ff70: ori $v0, $v0, 0x3524
    v0 = v0 | v1;                                               // 0x0019ff78: or $v0, $v0, $v1
    at = 0x29 << 16;                                            // 0x0019ff7c: lui $at, 0x29
    a0 = 0x1a << 16;                                            // 0x0019ff80: lui $a0, 0x1a
    a0 = a0 + -0xd20;                                           // 0x0019ff88: addiu $a0, $a0, -0xd20
    at = 0x29 << 16;                                            // 0x0019ff8c: lui $at, 0x29
    v0 = 0x44;                                                  // 0x0019ff94: addiu $v0, $zero, 0x44
    at = 0x29 << 16;                                            // 0x0019ff98: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x0019ffa0: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x0019ffa8: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x0019ffb0: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x0019ffb8: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x0019ffc0: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x0019ffc8: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x0019ffd0: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x0019ffd8: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x0019ffe0: lui $at, 0x29
    func_001137b0();  // 1137b0                                // 0x0019ffe4: jal 0x1137b0
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019fff4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019fff8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019fffc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a0000: jr $ra
    sp = sp + 0x50;                                             // 0x001a0004: addiu $sp, $sp, 0x50
}