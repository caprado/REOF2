void func_0018a140() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_100, local_110, local_140, local_150, local_160, local_170, local_180, local_190;
    uint32_t local_1a0, local_1b0, local_1c0, local_1d0, local_1e0, local_1f0, local_200, local_210;
    uint32_t local_220, local_230, local_24c, local_250, local_26c, local_2f0, local_300, local_a0;
    uint32_t local_b0, local_c0, local_d0, local_e0, local_f0;
    
    sp = sp + -0x310;                                           // 0x0018a140: addiu $sp, $sp, -0x310
    v1 = 0x10;                                                  // 0x0018a144: addiu $v1, $zero, 0x10
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x0018a150: dps.w.ph $ac0, $sp, $s7
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x0018a15c: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0018a164: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0018a16c: addu.qb $zero, $sp, $s1
    local_26c = a0;                                             // 0x0018a174: sw $a0, 0x26c($sp)
    v0 = g_1000004c;  // Global at 0x1000004c                   // 0x0018a178: lw $v0, 0x4c($a1)
    a0 = sp + 0x300;                                            // 0x0018a17c: addiu $a0, $sp, 0x300
    local_180 = v0;                                             // 0x0018a180: sw $v0, 0x180($sp)
    a1 = 0x21 << 16;                                            // 0x0018a184: lui $a1, 0x21
    v0 = local_180;                                             // 0x0018a188: lw $v0, 0x180($sp)
    a1 = a1 + 0x6364;                                           // 0x0018a18c: addiu $a1, $a1, 0x6364
    v0 = g_10000019;  // Global at 0x10000019                   // 0x0018a190: lw $v0, 0x18($v0)
    v0 = v0 << 3;                                               // 0x0018a194: sll $v0, $v0, 3
    v0 = a1 + v0;                                               // 0x0018a198: addu $v0, $a1, $v0
    v0 = g_10000001;  // Global at 0x10000001                   // 0x0018a19c: lw $v0, 0($v0)
    if (a0 == 0) goto label_0x18a1c4;                           // 0x0018a1a0: beqz $a0, 0x18a1c4
    local_170 = v0;                                             // 0x0018a1a4: sw $v0, 0x170($sp)
label_0x18a1a8:
    str_0022a340 = 0;  // Global at 0x0022a340                  // 0x0018a1a8: sb $zero, 0($a0)
    v1 = v1 + -1;                                               // 0x0018a1ac: addiu $v1, $v1, -1
    a0 = a0 + 1;                                                // 0x0018a1b0: addiu $a0, $a0, 1
    /* nop */                                                   // 0x0018a1b4: nop 
    /* nop */                                                   // 0x0018a1b8: nop 
    if (v1 != 0) goto label_0x18a1a8;                           // 0x0018a1bc: bnez $v1, 0x18a1a8
    /* nop */                                                   // 0x0018a1c0: nop 
label_0x18a1c4:
    v1 = sp + 0x2f0;                                            // 0x0018a1c4: addiu $v1, $sp, 0x2f0
    if (v1 == 0) goto label_0x18a1ec;                           // 0x0018a1c8: beqz $v1, 0x18a1ec
    v0 = 0x10;                                                  // 0x0018a1cc: addiu $v0, $zero, 0x10
label_0x18a1d0:
    g_6fffffff = 0;  // Global at 0x6fffffff                    // 0x0018a1d0: sb $zero, 0($v1)
    v0 = v0 + -1;                                               // 0x0018a1d4: addiu $v0, $v0, -1
    v1 = v1 + 1;                                                // 0x0018a1d8: addiu $v1, $v1, 1
    /* nop */                                                   // 0x0018a1dc: nop 
    /* nop */                                                   // 0x0018a1e0: nop 
    if (v0 != 0) goto label_0x18a1d0;                           // 0x0018a1e4: bnez $v0, 0x18a1d0
    /* nop */                                                   // 0x0018a1e8: nop 
label_0x18a1ec:
    v1 = 0x1f;                                                  // 0x0018a1ec: addiu $v1, $zero, 0x1f
label_0x18a1f0:
    v0 = v1 << 2;                                               // 0x0018a1f0: sll $v0, $v1, 2
    v0 = v0 + sp;                                               // 0x0018a1f4: addu $v0, $v0, $sp
    v1 = v1 + -1;                                               // 0x0018a1f8: addiu $v1, $v1, -1
    g_10000270 = 0;  // Global at 0x10000270                    // 0x0018a1fc: sw $zero, 0x270($v0)
    /* nop */                                                   // 0x0018a200: nop 
    if (v1 >= 0) goto label_0x18a1f0;                           // 0x0018a204: bgez $v1, 0x18a1f0
    /* nop */                                                   // 0x0018a208: nop 
    v0 = local_180;                                             // 0x0018a20c: lw $v0, 0x180($sp)
    a3 = 0x21 << 16;                                            // 0x0018a210: lui $a3, 0x21
    a2 = 0x21 << 16;                                            // 0x0018a214: lui $a2, 0x21
    a1 = 0x21 << 16;                                            // 0x0018a218: lui $a1, 0x21
    a0 = *(int32_t*)((fp) + 0xc);                               // 0x0018a21c: lw $a0, 0xc($fp)
    a3 = a3 + 0x63c0;                                           // 0x0018a220: addiu $a3, $a3, 0x63c0
    a2 = a2 + 0x63c4;                                           // 0x0018a224: addiu $a2, $a2, 0x63c4
    a1 = a1 + 0x63c8;                                           // 0x0018a228: addiu $a1, $a1, 0x63c8
    v1 = 0 | 0x8000;                                            // 0x0018a22c: ori $v1, $zero, 0x8000
    t1 = g_1000001c;  // Global at 0x1000001c                   // 0x0018a230: lw $t1, 0x1c($v0)
    v0 = 1 << 16;                                               // 0x0018a234: lui $v0, 1
    t0 = t1 << 1;                                               // 0x0018a238: sll $t0, $t1, 1
    v0 = v0 | 0x8000;                                           // 0x0018a23c: ori $v0, $v0, 0x8000
    t0 = t0 + t1;                                               // 0x0018a240: addu $t0, $t0, $t1
    t0 = t0 << 2;                                               // 0x0018a244: sll $t0, $t0, 2
    a0 = a0 & v0;                                               // 0x0018a248: and $a0, $a0, $v0
    a3 = a3 + t0;                                               // 0x0018a24c: addu $a3, $a3, $t0
    v0 = a2 + t0;                                               // 0x0018a250: addu $v0, $a2, $t0
    s2 = g_002163c0;  // Global at 0x002163c0                   // 0x0018a254: lw $s2, 0($a3)
    a1 = a1 + t0;                                               // 0x0018a258: addu $a1, $a1, $t0
    v0 = g_00010000;  // Global at 0x00010000                   // 0x0018a25c: lw $v0, 0($v0)
    local_1a0 = v0;                                             // 0x0018a260: sw $v0, 0x1a0($sp)
    v0 = g_002163c8;  // Global at 0x002163c8                   // 0x0018a264: lw $v0, 0($a1)
    if (a0 != v1) goto label_0x18a274;                          // 0x0018a268: bne $a0, $v1, 0x18a274
    local_190 = v0;                                             // 0x0018a26c: sw $v0, 0x190($sp)
    s2 = s2 | 0x20;                                             // 0x0018a270: ori $s2, $s2, 0x20
label_0x18a274:
    func_0018db00();  // 18db00                                // 0x0018a274: jal 0x18db00
    a0 = *(int32_t*)((fp) + 0x1c);                              // 0x0018a278: lw $a0, 0x1c($fp)
    local_24c = v0;                                             // 0x0018a280: sw $v0, 0x24c($sp)
    a1 = local_190;                                             // 0x0018a288: lw $a1, 0x190($sp)
    s4 = local_24c;                                             // 0x0018a290: lw $s4, 0x24c($sp)
    v1 = local_26c;                                             // 0x0018a29c: lw $v1, 0x26c($sp)
    a1 = a1 << 4;                                               // 0x0018a2a0: sll $a1, $a1, 4
    s2 = g_70000007;  // Global at 0x70000007                   // 0x0018a2a4: lw $s2, 8($v1)
    v1 = -1;                                                    // 0x0018a2a8: addiu $v1, $zero, -1
    local_230 = v1;                                             // 0x0018a2ac: sw $v1, 0x230($sp)
    v1 = local_26c;                                             // 0x0018a2b0: lw $v1, 0x26c($sp)
    v1 = g_70000003;  // Global at 0x70000003                   // 0x0018a2b4: lw $v1, 4($v1)
    local_1d0 = v1;                                             // 0x0018a2b8: sw $v1, 0x1d0($sp)
    v1 = local_180;                                             // 0x0018a2bc: lw $v1, 0x180($sp)
    local_220 = 0;                                              // 0x0018a2c0: sw $zero, 0x220($sp)
    a0 = g_7000001f;  // Global at 0x7000001f                   // 0x0018a2c4: lw $a0, 0x20($v1)
    v1 = local_230;                                             // 0x0018a2c8: lw $v1, 0x230($sp)
    a0 = a0 + 0x20;                                             // 0x0018a2cc: addiu $a0, $a0, 0x20
    local_200 = 0;                                              // 0x0018a2d0: sw $zero, 0x200($sp)
    local_210 = v1;                                             // 0x0018a2d4: sw $v1, 0x210($sp)
    v1 = *(int32_t*)((fp) + 0x2c);                              // 0x0018a2d8: lw $v1, 0x2c($fp)
    local_140 = a1;                                             // 0x0018a2dc: sw $a1, 0x140($sp)
    v0 = v0 + v1;                                               // 0x0018a2e0: addu $v0, $v0, $v1
    a1 = local_190;                                             // 0x0018a2e4: lw $a1, 0x190($sp)
    local_150 = a0;                                             // 0x0018a2e8: sw $a0, 0x150($sp)
    a0 = local_170;                                             // 0x0018a2ec: lw $a0, 0x170($sp)
    local_a0 = 0;                                               // 0x0018a2f0: sw $zero, 0xa0($sp)
    local_1b0 = v0;                                             // 0x0018a2f4: sw $v0, 0x1b0($sp)
    a0 = a0 & 8;                                                // 0x0018a304: andi $a0, $a0, 8
    a1 = local_170;                                             // 0x0018a30c: lw $a1, 0x170($sp)
    local_e0 = a0;                                              // 0x0018a310: sw $a0, 0xe0($sp)
    a0 = local_170;                                             // 0x0018a314: lw $a0, 0x170($sp)
    a1 = a1 & 1;                                                // 0x0018a318: andi $a1, $a1, 1
    local_110 = a1;                                             // 0x0018a31c: sw $a1, 0x110($sp)
    a1 = local_170;                                             // 0x0018a320: lw $a1, 0x170($sp)
    a0 = a0 & 0x10;                                             // 0x0018a324: andi $a0, $a0, 0x10
    local_d0 = a0;                                              // 0x0018a328: sw $a0, 0xd0($sp)
    a0 = local_170;                                             // 0x0018a32c: lw $a0, 0x170($sp)
    a1 = a1 & 2;                                                // 0x0018a330: andi $a1, $a1, 2
    local_100 = a1;                                             // 0x0018a334: sw $a1, 0x100($sp)
    a1 = local_170;                                             // 0x0018a338: lw $a1, 0x170($sp)
    a0 = a0 & 0x20;                                             // 0x0018a33c: andi $a0, $a0, 0x20
    local_c0 = a0;                                              // 0x0018a340: sw $a0, 0xc0($sp)
    a1 = a1 & 4;                                                // 0x0018a344: andi $a1, $a1, 4
    goto label_0x18afa8;                                        // 0x0018a348: b 0x18afa8
    local_f0 = a1;                                              // 0x0018a34c: sw $a1, 0xf0($sp)
label_0x18a350:
    v0 = *(uint16_t*)(s2);                                      // 0x0018a350: lhu $v0, 0($s2)
    local_1c0 = v0;                                             // 0x0018a354: sw $v0, 0x1c0($sp)
    v0 = local_26c;                                             // 0x0018a358: lw $v0, 0x26c($sp)
    local_160 = 0;                                              // 0x0018a35c: sw $zero, 0x160($sp)
    v1 = g_00010000;  // Global at 0x00010000                   // 0x0018a360: lw $v1, 0($v0)
    v0 = 0x10 << 16;                                            // 0x0018a364: lui $v0, 0x10
    v0 = v1 & v0;                                               // 0x0018a368: and $v0, $v1, $v0
    if (v0 == 0) goto label_0x18a380;                           // 0x0018a36c: beqz $v0, 0x18a380
    s2 = s2 + 2;                                                // 0x0018a370: addiu $s2, $s2, 2
    v0 = *(uint16_t*)(s2);                                      // 0x0018a374: lhu $v0, 0($s2)
    local_220 = v0;                                             // 0x0018a378: sw $v0, 0x220($sp)
    s2 = s2 + 2;                                                // 0x0018a37c: addiu $s2, $s2, 2
label_0x18a380:
    v0 = 0x20 << 16;                                            // 0x0018a380: lui $v0, 0x20
    v0 = v1 & v0;                                               // 0x0018a384: and $v0, $v1, $v0
    if (v0 == 0) goto label_0x18a39c;                           // 0x0018a388: beqz $v0, 0x18a39c
    /* nop */                                                   // 0x0018a38c: nop 
    v0 = *(uint16_t*)(s2);                                      // 0x0018a390: lhu $v0, 0($s2)
    local_200 = v0;                                             // 0x0018a394: sw $v0, 0x200($sp)
    s2 = s2 + 2;                                                // 0x0018a398: addiu $s2, $s2, 2
label_0x18a39c:
    v1 = local_230;                                             // 0x0018a39c: lw $v1, 0x230($sp)
    v0 = local_220;                                             // 0x0018a3a0: lw $v0, 0x220($sp)
    if (v1 == v0) goto label_0x18a574;                          // 0x0018a3a4: beq $v1, $v0, 0x18a574
    /* nop */                                                   // 0x0018a3a8: nop 
    if (s5 == 0) goto label_0x18a530;                           // 0x0018a3ac: beqz $s5, 0x18a530
    /* nop */                                                   // 0x0018a3b0: nop 
    v0 = local_1f0;                                             // 0x0018a3b4: lw $v0, 0x1f0($sp)
    func_0018c6b0();  // 18c6b0                                // 0x0018a3c0: jal 0x18c6b0
    a1 = (unsigned)v0 >> 4;                                     // 0x0018a3c4: srl $a1, $v0, 4
    v1 = 1;                                                     // 0x0018a3cc: addiu $v1, $zero, 1
    v0 = local_210;                                             // 0x0018a3d0: lw $v0, 0x210($sp)
    if (v0 == v1) goto label_0x18a3f4;                          // 0x0018a3d4: beq $v0, $v1, 0x18a3f4
    /* nop */                                                   // 0x0018a3d8: nop 
    if (v0 == 0) goto label_0x18a3ec;                           // 0x0018a3dc: beqz $v0, 0x18a3ec
    /* nop */                                                   // 0x0018a3e0: nop 
    goto label_0x18a400;                                        // 0x0018a3e4: b 0x18a400
    v0 = local_140;                                             // 0x0018a3e8: lw $v0, 0x140($sp)
label_0x18a3ec:
    goto label_0x18a3fc;                                        // 0x0018a3ec: b 0x18a3fc
    *(uint32_t*)(s7) = v1;                                      // 0x0018a3f0: sw $v1, 0($s7)
label_0x18a3f4:
    v0 = 2;                                                     // 0x0018a3f4: addiu $v0, $zero, 2
    *(uint32_t*)(s7) = v0;                                      // 0x0018a3f8: sw $v0, 0($s7)
label_0x18a3fc:
    v0 = local_140;                                             // 0x0018a3fc: lw $v0, 0x140($sp)
label_0x18a400:
    v1 = s5 + 2;                                                // 0x0018a400: addiu $v1, $s5, 2
    v1 = 0x4000;                                                // 0x0018a414: addiu $v1, $zero, 0x4000
    v0 = 0 | 0x8000;                                            // 0x0018a418: ori $v0, $zero, 0x8000
    v0 = v0 | v1;                                               // 0x0018a420: or $v0, $v0, $v1
    v1 = a1 | v0;                                               // 0x0018a424: or $v1, $a1, $v0
    v0 = (unsigned)a2 >> 4;                                     // 0x0018a428: srl $v0, $a2, 4
    a1 = v0 + 1;                                                // 0x0018a42c: addiu $a1, $v0, 1
    v1 = v1 | v0;                                               // 0x0018a434: or $v1, $v1, $v0
    *(uint32_t*)((s7) + 4) = a1;                                // 0x0018a438: sw $a1, 4($s7)
    v0 = v0 | v1;                                               // 0x0018a440: or $v0, $v0, $v1
    v0 = local_1a0;                                             // 0x0018a44c: lw $v0, 0x1a0($sp)
    *(uint32_t*)((s7) + 0x18) = v0;                             // 0x0018a450: sw $v0, 0x18($s7)
    func_0018c690();  // 18c690                                // 0x0018a454: jal 0x18c690
    *(uint32_t*)((s7) + 0x1c) = 0;                              // 0x0018a458: sw $zero, 0x1c($s7)
    v0 = local_230;                                             // 0x0018a460: lw $v0, 0x230($sp)
    s5 = v0 << 2;                                               // 0x0018a464: sll $s5, $v0, 2
    v0 = s5 + sp;                                               // 0x0018a468: addu $v0, $s5, $sp
    a0 = g_00200270;  // Global at 0x00200270                   // 0x0018a46c: lw $a0, 0x270($v0)
    if (s3 != a0) goto label_0x18a4ac;                          // 0x0018a470: bne $s3, $a0, 0x18a4ac
    /* nop */                                                   // 0x0018a474: nop 
    v0 = s4 - s3;                                               // 0x0018a478: subu $v0, $s4, $s3
    v0 = (unsigned)v0 >> 4;                                     // 0x0018a480: srl $v0, $v0, 4
    a1 = v0 + -1;                                               // 0x0018a488: addiu $a1, $v0, -1
    func_0018c630();  // 18c630                                // 0x0018a48c: jal 0x18c630
    v0 = local_24c;                                             // 0x0018a494: lw $v0, 0x24c($sp)
    v1 = s3 - v0;                                               // 0x0018a498: subu $v1, $s3, $v0
    v0 = local_1b0;                                             // 0x0018a49c: lw $v0, 0x1b0($sp)
    v0 = v0 + s5;                                               // 0x0018a4a0: addu $v0, $v0, $s5
    goto label_0x18a52c;                                        // 0x0018a4a4: b 0x18a52c
    g_00200000 = v1;  // Global at 0x00200000                   // 0x0018a4a8: sw $v1, 0($v0)
label_0x18a4ac:
    a1 = g_0022a361;  // Global at 0x0022a361                   // 0x0018a4ac: lw $a1, 0($a0)
    v1 = 0x7000 << 16;                                          // 0x0018a4b0: lui $v1, 0x7000
    v0 = 0x6000 << 16;                                          // 0x0018a4b4: lui $v0, 0x6000
    v1 = a1 & v1;                                               // 0x0018a4b8: and $v1, $a1, $v1
    if (v1 == v0) goto label_0x18a4f4;                          // 0x0018a4bc: beq $v1, $v0, 0x18a4f4
    v0 = 0x2000 << 16;                                          // 0x0018a4c0: lui $v0, 0x2000
    if (v1 == v0) goto label_0x18a4e0;                          // 0x0018a4c4: beq $v1, $v0, 0x18a4e0
    /* nop */                                                   // 0x0018a4c8: nop 
    v0 = 0x1000 << 16;                                          // 0x0018a4cc: lui $v0, 0x1000
    if (v1 == v0) goto label_0x18a4e4;                          // 0x0018a4d0: beq $v1, $v0, 0x18a4e4
    v0 = a1 & 0xffff;                                           // 0x0018a4d4: andi $v0, $a1, 0xffff
    goto label_0x18a50c;                                        // 0x0018a4d8: b 0x18a50c
    /* nop */                                                   // 0x0018a4dc: nop 
label_0x18a4e0:
    v0 = a1 & 0xffff;                                           // 0x0018a4e0: andi $v0, $a1, 0xffff
label_0x18a4e4:
    v0 = v0 + 1;                                                // 0x0018a4e4: addiu $v0, $v0, 1
    v0 = v0 << 4;                                               // 0x0018a4e8: sll $v0, $v0, 4
    goto label_0x18a50c;                                        // 0x0018a4ec: b 0x18a50c
    a0 = a0 + v0;                                               // 0x0018a4f0: addu $a0, $a0, $v0
label_0x18a4f4:
    a1 = a1 & 0xffff;                                           // 0x0018a4f4: andi $a1, $a1, 0xffff
    func_0018c4c0();  // 18c4c0                                // 0x0018a500: jal 0x18c4c0
label_0x18a50c:
    if (a0 != 0) goto label_0x18a4ac;                           // 0x0018a50c: bnez $a0, 0x18a4ac
    v0 = s4 - s3;                                               // 0x0018a510: subu $v0, $s4, $s3
    v0 = (unsigned)v0 >> 4;                                     // 0x0018a518: srl $v0, $v0, 4
    a1 = v0 + -1;                                               // 0x0018a520: addiu $a1, $v0, -1
    func_0018c630();  // 18c630                                // 0x0018a524: jal 0x18c630
label_0x18a52c:
label_0x18a530:
    v0 = local_220;                                             // 0x0018a530: lw $v0, 0x220($sp)
    local_230 = v0;                                             // 0x0018a534: sw $v0, 0x230($sp)
    v0 = local_200;                                             // 0x0018a538: lw $v0, 0x200($sp)
    local_210 = v0;                                             // 0x0018a53c: sw $v0, 0x210($sp)
    v0 = local_220;                                             // 0x0018a540: lw $v0, 0x220($sp)
    v0 = v0 << 2;                                               // 0x0018a544: sll $v0, $v0, 2
    v0 = v0 + sp;                                               // 0x0018a548: addu $v0, $v0, $sp
    v1 = v0 + 0x270;                                            // 0x0018a54c: addiu $v1, $v0, 0x270
    v0 = g_10000271;  // Global at 0x10000271                   // 0x0018a550: lw $v0, 0($v1)
    if (v0 != 0) goto label_0x18a560;                           // 0x0018a554: bnez $v0, 0x18a560
    g_10000271 = s4;  // Global at 0x10000271                   // 0x0018a55c: sw $s4, 0($v1)
label_0x18a560:
    s7 = s4 + 0x10;                                             // 0x0018a560: addiu $s7, $s4, 0x10
    v0 = 0x20;                                                  // 0x0018a564: addiu $v0, $zero, 0x20
    local_1f0 = v0;                                             // 0x0018a568: sw $v0, 0x1f0($sp)
    goto label_0x18a68c;                                        // 0x0018a56c: b 0x18a68c
    s4 = s4 + 0x40;                                             // 0x0018a570: addiu $s4, $s4, 0x40
label_0x18a574:
    v1 = local_210;                                             // 0x0018a574: lw $v1, 0x210($sp)
    v0 = local_200;                                             // 0x0018a578: lw $v0, 0x200($sp)
    if (v1 == v0) goto label_0x18a68c;                          // 0x0018a57c: beq $v1, $v0, 0x18a68c
    /* nop */                                                   // 0x0018a580: nop 
    if (s5 == 0) goto label_0x18a674;                           // 0x0018a584: beqz $s5, 0x18a674
    /* nop */                                                   // 0x0018a588: nop 
    v0 = local_1f0;                                             // 0x0018a58c: lw $v0, 0x1f0($sp)
    func_0018c6b0();  // 18c6b0                                // 0x0018a598: jal 0x18c6b0
    a1 = (unsigned)v0 >> 4;                                     // 0x0018a59c: srl $a1, $v0, 4
    v1 = local_210;                                             // 0x0018a5a0: lw $v1, 0x210($sp)
    a0 = 1;                                                     // 0x0018a5a4: addiu $a0, $zero, 1
    if (v1 == a0) goto label_0x18a5c8;                          // 0x0018a5a8: beq $v1, $a0, 0x18a5c8
    /* nop */                                                   // 0x0018a5ac: nop 
    if (v1 == 0) goto label_0x18a5c0;                           // 0x0018a5b0: beqz $v1, 0x18a5c0
    /* nop */                                                   // 0x0018a5b4: nop 
    goto label_0x18a5d4;                                        // 0x0018a5b8: b 0x18a5d4
    v1 = local_140;                                             // 0x0018a5bc: lw $v1, 0x140($sp)
label_0x18a5c0:
    goto label_0x18a5d0;                                        // 0x0018a5c0: b 0x18a5d0
    g_10000001 = a0;  // Global at 0x10000001                   // 0x0018a5c4: sw $a0, 0($v0)
label_0x18a5c8:
    v1 = 2;                                                     // 0x0018a5c8: addiu $v1, $zero, 2
    g_10000001 = v1;  // Global at 0x10000001                   // 0x0018a5cc: sw $v1, 0($v0)
label_0x18a5d0:
    v1 = local_140;                                             // 0x0018a5d0: lw $v1, 0x140($sp)
label_0x18a5d4:
    a1 = s5 + 2;                                                // 0x0018a5d4: addiu $a1, $s5, 2
    a1 = 0x4000;                                                // 0x0018a5e8: addiu $a1, $zero, 0x4000
    v1 = 0 | 0x8000;                                            // 0x0018a5ec: ori $v1, $zero, 0x8000
    v1 = v1 | a1;                                               // 0x0018a5f4: or $v1, $v1, $a1
    a1 = a2 | v1;                                               // 0x0018a5f8: or $a1, $a2, $v1
    v1 = (unsigned)a3 >> 4;                                     // 0x0018a5fc: srl $v1, $a3, 4
    a2 = v1 + 1;                                                // 0x0018a600: addiu $a2, $v1, 1
    a1 = a1 | v1;                                               // 0x0018a608: or $a1, $a1, $v1
    g_10000005 = a2;  // Global at 0x10000005                   // 0x0018a60c: sw $a2, 4($v0)
    v1 = v1 | a1;                                               // 0x0018a614: or $v1, $v1, $a1
    v1 = local_1a0;                                             // 0x0018a620: lw $v1, 0x1a0($sp)
    g_10000019 = v1;  // Global at 0x10000019                   // 0x0018a624: sw $v1, 0x18($v0)
    func_0018c690();  // 18c690                                // 0x0018a628: jal 0x18c690
    g_1000001d = 0;  // Global at 0x1000001d                    // 0x0018a62c: sw $zero, 0x1c($v0)
    v1 = 0x10 << 16;                                            // 0x0018a634: lui $v1, 0x10
    v0 = local_150;                                             // 0x0018a638: lw $v0, 0x150($sp)
    a0 = s4 - s3;                                               // 0x0018a63c: subu $a0, $s4, $s3
    v0 = v0 + a0;                                               // 0x0018a640: addu $v0, $v0, $a0
    v0 = ((unsigned)v0 < (unsigned)v1) ? 1 : 0;                 // 0x0018a644: sltu $v0, $v0, $v1
    if (v0 != 0) goto label_0x18a674;                           // 0x0018a648: bnez $v0, 0x18a674
    v0 = (unsigned)a0 >> 4;                                     // 0x0018a650: srl $v0, $a0, 4
    a1 = v0 + -1;                                               // 0x0018a65c: addiu $a1, $v0, -1
    func_0018c490();  // 18c490                                // 0x0018a660: jal 0x18c490
    s4 = s4 + 0x10;                                             // 0x0018a66c: addiu $s4, $s4, 0x10
label_0x18a674:
    v0 = local_200;                                             // 0x0018a674: lw $v0, 0x200($sp)
    s4 = s4 + 0x30;                                             // 0x0018a67c: addiu $s4, $s4, 0x30
    local_210 = v0;                                             // 0x0018a680: sw $v0, 0x210($sp)
    v0 = 0x20;                                                  // 0x0018a684: addiu $v0, $zero, 0x20
    local_1f0 = v0;                                             // 0x0018a688: sw $v0, 0x1f0($sp)
label_0x18a68c:
    v0 = local_1c0;                                             // 0x0018a68c: lw $v0, 0x1c0($sp)
    local_250 = 0;                                              // 0x0018a690: sw $zero, 0x250($sp)
    v0 = v0 & 0x3fff;                                           // 0x0018a694: andi $v0, $v0, 0x3fff
    goto label_0x18af88;                                        // 0x0018a698: b 0x18af88
    local_b0 = v0;                                              // 0x0018a69c: sw $v0, 0xb0($sp)
label_0x18a6a0:
    v0 = local_180;                                             // 0x0018a6a0: lw $v0, 0x180($sp)
    v1 = 0x21 << 16;                                            // 0x0018a6a4: lui $v1, 0x21
    v1 = v1 + 0x6360;                                           // 0x0018a6a8: addiu $v1, $v1, 0x6360
    a1 = g_10000019;  // Global at 0x10000019                   // 0x0018a6ac: lw $a1, 0x18($v0)
    a0 = g_10000021;  // Global at 0x10000021                   // 0x0018a6b0: lw $a0, 0x20($v0)
    v0 = a1 << 3;                                               // 0x0018a6b4: sll $v0, $a1, 3
    v0 = v1 + v0;                                               // 0x0018a6b8: addu $v0, $v1, $v0
    v0 = g_10000001;  // Global at 0x10000001                   // 0x0018a6bc: lw $v0, 0($v0)
    v1 = local_1f0;                                             // 0x0018a6c0: lw $v1, 0x1f0($sp)
    local_1e0 = v0;                                             // 0x0018a6c4: sw $v0, 0x1e0($sp)
    v0 = local_1e0;                                             // 0x0018a6c8: lw $v0, 0x1e0($sp)
    v0 = v1 + v0;                                               // 0x0018a6cc: addu $v0, $v1, $v0
    v0 = ((unsigned)v0 < (unsigned)a0) ? 1 : 0;                 // 0x0018a6d0: sltu $v0, $v0, $a0
    if (v0 != 0) goto label_0x18a7d0;                           // 0x0018a6d4: bnez $v0, 0x18a7d0
    a1 = (unsigned)v0 >> 4;                                     // 0x0018a6e0: srl $a1, $v0, 4
    func_0018c6b0();  // 18c6b0                                // 0x0018a6e4: jal 0x18c6b0
    v1 = local_210;                                             // 0x0018a6ec: lw $v1, 0x210($sp)
    a0 = 1;                                                     // 0x0018a6f0: addiu $a0, $zero, 1
    if (v1 == a0) goto label_0x18a714;                          // 0x0018a6f4: beq $v1, $a0, 0x18a714
    /* nop */                                                   // 0x0018a6f8: nop 
    if (v1 == 0) goto label_0x18a70c;                           // 0x0018a6fc: beqz $v1, 0x18a70c
    /* nop */                                                   // 0x0018a700: nop 
    goto label_0x18a720;                                        // 0x0018a704: b 0x18a720
    v1 = local_140;                                             // 0x0018a708: lw $v1, 0x140($sp)
label_0x18a70c:
    goto label_0x18a71c;                                        // 0x0018a70c: b 0x18a71c
    g_10000001 = a0;  // Global at 0x10000001                   // 0x0018a710: sw $a0, 0($v0)
label_0x18a714:
    v1 = 2;                                                     // 0x0018a714: addiu $v1, $zero, 2
    g_10000001 = v1;  // Global at 0x10000001                   // 0x0018a718: sw $v1, 0($v0)
label_0x18a71c:
    v1 = local_140;                                             // 0x0018a71c: lw $v1, 0x140($sp)
label_0x18a720:
    a1 = s5 + 2;                                                // 0x0018a720: addiu $a1, $s5, 2
    a1 = 0x4000;                                                // 0x0018a734: addiu $a1, $zero, 0x4000
    v1 = 0 | 0x8000;                                            // 0x0018a738: ori $v1, $zero, 0x8000
    v1 = v1 | a1;                                               // 0x0018a740: or $v1, $v1, $a1
    a1 = a2 | v1;                                               // 0x0018a744: or $a1, $a2, $v1
    v1 = (unsigned)a3 >> 4;                                     // 0x0018a748: srl $v1, $a3, 4
    a2 = v1 + 1;                                                // 0x0018a74c: addiu $a2, $v1, 1
    a1 = a1 | v1;                                               // 0x0018a754: or $a1, $a1, $v1
    g_10000005 = a2;  // Global at 0x10000005                   // 0x0018a758: sw $a2, 4($v0)
    v1 = v1 | a1;                                               // 0x0018a760: or $v1, $v1, $a1
    v1 = local_1a0;                                             // 0x0018a76c: lw $v1, 0x1a0($sp)
    g_10000019 = v1;  // Global at 0x10000019                   // 0x0018a770: sw $v1, 0x18($v0)
    func_0018c690();  // 18c690                                // 0x0018a774: jal 0x18c690
    g_1000001d = 0;  // Global at 0x1000001d                    // 0x0018a778: sw $zero, 0x1c($v0)
    v1 = 0x10 << 16;                                            // 0x0018a780: lui $v1, 0x10
    v0 = local_150;                                             // 0x0018a784: lw $v0, 0x150($sp)
    a0 = s4 - s3;                                               // 0x0018a788: subu $a0, $s4, $s3
    v0 = v0 + a0;                                               // 0x0018a78c: addu $v0, $v0, $a0
    v0 = ((unsigned)v0 < (unsigned)v1) ? 1 : 0;                 // 0x0018a790: sltu $v0, $v0, $v1
    if (v0 != 0) goto label_0x18a7c0;                           // 0x0018a794: bnez $v0, 0x18a7c0
    v0 = (unsigned)a0 >> 4;                                     // 0x0018a79c: srl $v0, $a0, 4
    a1 = v0 + -1;                                               // 0x0018a7a8: addiu $a1, $v0, -1
    func_0018c490();  // 18c490                                // 0x0018a7ac: jal 0x18c490
    s4 = s4 + 0x10;                                             // 0x0018a7b8: addiu $s4, $s4, 0x10
label_0x18a7c0:
    v0 = 0x20;                                                  // 0x0018a7c0: addiu $v0, $zero, 0x20
    local_1f0 = v0;                                             // 0x0018a7c4: sw $v0, 0x1f0($sp)
    s4 = s4 + 0x30;                                             // 0x0018a7c8: addiu $s4, $s4, 0x30
label_0x18a7d0:
    v1 = local_1f0;                                             // 0x0018a7d0: lw $v1, 0x1f0($sp)
    v0 = local_1e0;                                             // 0x0018a7d4: lw $v0, 0x1e0($sp)
    v1 = v1 + v0;                                               // 0x0018a7d8: addu $v1, $v1, $v0
    v0 = local_26c;                                             // 0x0018a7dc: lw $v0, 0x26c($sp)
    local_1f0 = v1;                                             // 0x0018a7e0: sw $v1, 0x1f0($sp)
    v1 = g_1000000d;  // Global at 0x1000000d                   // 0x0018a7e4: lw $v1, 0xc($v0)
    v0 = 0x135;                                                 // 0x0018a7e8: addiu $v0, $zero, 0x135
    if (v1 == v0) goto label_0x18abe0;                          // 0x0018a7ec: beq $v1, $v0, 0x18abe0
    s5 = s5 + 1;                                                // 0x0018a7f0: addiu $s5, $s5, 1
    v0 = 0x35;                                                  // 0x0018a7f4: addiu $v0, $zero, 0x35
    if (v1 == v0) goto label_0x18aa00;                          // 0x0018a7f8: beq $v1, $v0, 0x18aa00
    v0 = 0x25;                                                  // 0x0018a7fc: addiu $v0, $zero, 0x25
    if (v1 == v0) goto label_0x18a810;                          // 0x0018a800: beq $v1, $v0, 0x18a810
    /* nop */                                                   // 0x0018a804: nop 
    goto label_0x18af74;                                        // 0x0018a808: b 0x18af74
    v0 = local_160;                                             // 0x0018a80c: lw $v0, 0x160($sp)
label_0x18a810:
    v0 = local_26c;                                             // 0x0018a810: lw $v0, 0x26c($sp)
    v0 = g_10000001;  // Global at 0x10000001                   // 0x0018a814: lw $v0, 0($v0)
    v0 = v0 & 0x1000;                                           // 0x0018a818: andi $v0, $v0, 0x1000
    if (v0 == 0) goto label_0x18a848;                           // 0x0018a81c: beqz $v0, 0x18a848
    /* nop */                                                   // 0x0018a820: nop 
    v0 = local_26c;                                             // 0x0018a824: lw $v0, 0x26c($sp)
    a0 = *(uint16_t*)(s2);                                      // 0x0018a828: lhu $a0, 0($s2)
    v0 = g_10000011;  // Global at 0x10000011                   // 0x0018a82c: lw $v0, 0x10($v0)
    v1 = a0 << 3;                                               // 0x0018a830: sll $v1, $a0, 3
    s2 = s2 + 2;                                                // 0x0018a834: addiu $s2, $s2, 2
    v1 = v1 - a0;                                               // 0x0018a838: subu $v1, $v1, $a0
    v1 = v1 << 2;                                               // 0x0018a83c: sll $v1, $v1, 2
    goto label_0x18a84c;                                        // 0x0018a840: b 0x18a84c
    s6 = v0 + v1;                                               // 0x0018a844: addu $s6, $v0, $v1
label_0x18a848:
    s6 = s6 + 0x1c;                                             // 0x0018a848: addiu $s6, $s6, 0x1c
label_0x18a84c:
    v0 = local_110;                                             // 0x0018a84c: lw $v0, 0x110($sp)
    if (v0 == 0) goto label_0x18a890;                           // 0x0018a850: beqz $v0, 0x18a890
    /* nop */                                                   // 0x0018a854: nop 
    FPU_F0 = *(float*)(s6);  // Load float                      // 0x0018a858: lwc1 $f0, 0($s6)
    *(float*)(s4) = FPU_F0;  // Store float                     // 0x0018a85c: swc1 $f0, 0($s4)
    FPU_F0 = *(float*)((s6) + 4);  // Load float                // 0x0018a860: lwc1 $f0, 4($s6)
    *(float*)((s4) + 4) = FPU_F0;  // Store float               // 0x0018a864: swc1 $f0, 4($s4)
    FPU_F0 = *(float*)((s6) + 8);  // Load float                // 0x0018a868: lwc1 $f0, 8($s6)
    *(float*)((s4) + 8) = FPU_F0;  // Store float               // 0x0018a86c: swc1 $f0, 8($s4)
    v0 = local_250;                                             // 0x0018a870: lw $v0, 0x250($sp)
    at = (v0 < 2) ? 1 : 0;                                      // 0x0018a874: slti $at, $v0, 2
    if (at == 0) goto label_0x18a888;                           // 0x0018a878: beqz $at, 0x18a888
    v0 = 0 | 0x8000;                                            // 0x0018a87c: ori $v0, $zero, 0x8000
    goto label_0x18a88c;                                        // 0x0018a880: b 0x18a88c
    *(uint32_t*)((s4) + 0xc) = v0;                              // 0x0018a884: sw $v0, 0xc($s4)
label_0x18a888:
    *(uint32_t*)((s4) + 0xc) = 0;                               // 0x0018a888: sw $zero, 0xc($s4)
label_0x18a88c:
    s4 = s4 + 0x10;                                             // 0x0018a88c: addiu $s4, $s4, 0x10
label_0x18a890:
    v0 = local_100;                                             // 0x0018a890: lw $v0, 0x100($sp)
    if (v0 == 0) goto label_0x18a8d4;                           // 0x0018a894: beqz $v0, 0x18a8d4
    /* nop */                                                   // 0x0018a898: nop 
    FPU_F0 = *(float*)((s6) + 0xc);  // Load float              // 0x0018a89c: lwc1 $f0, 0xc($s6)
    *(float*)(s4) = FPU_F0;  // Store float                     // 0x0018a8a0: swc1 $f0, 0($s4)
    FPU_F0 = *(float*)((s6) + 0x10);  // Load float             // 0x0018a8a4: lwc1 $f0, 0x10($s6)
    *(float*)((s4) + 4) = FPU_F0;  // Store float               // 0x0018a8a8: swc1 $f0, 4($s4)
    FPU_F0 = *(float*)((s6) + 0x14);  // Load float             // 0x0018a8ac: lwc1 $f0, 0x14($s6)
    *(float*)((s4) + 8) = FPU_F0;  // Store float               // 0x0018a8b0: swc1 $f0, 8($s4)
    v0 = local_160;                                             // 0x0018a8b4: lw $v0, 0x160($sp)
    if (v0 != 0) goto label_0x18a8cc;                           // 0x0018a8b8: bnez $v0, 0x18a8cc
    v0 = 0xbf80 << 16;                                          // 0x0018a8bc: lui $v0, 0xbf80
    v0 = 0x3f80 << 16;                                          // 0x0018a8c0: lui $v0, 0x3f80
    goto label_0x18a8d0;                                        // 0x0018a8c4: b 0x18a8d0
    *(uint32_t*)((s4) + 0xc) = v0;                              // 0x0018a8c8: sw $v0, 0xc($s4)
label_0x18a8cc:
    *(uint32_t*)((s4) + 0xc) = v0;                              // 0x0018a8cc: sw $v0, 0xc($s4)
label_0x18a8d0:
    s4 = s4 + 0x10;                                             // 0x0018a8d0: addiu $s4, $s4, 0x10
label_0x18a8d4:
    v0 = local_f0;                                              // 0x0018a8d4: lw $v0, 0xf0($sp)
    if (v0 == 0) goto label_0x18af70;                           // 0x0018a8d8: beqz $v0, 0x18af70
    /* nop */                                                   // 0x0018a8dc: nop 
    v0 = *(int32_t*)((fp) + 0xc);                               // 0x0018a8e0: lw $v0, 0xc($fp)
    v0 = v0 & 0xf00;                                            // 0x0018a8e4: andi $v0, $v0, 0xf00
    if (v0 != 0) goto label_0x18a9a0;                           // 0x0018a8e8: bnez $v0, 0x18a9a0
    /* nop */                                                   // 0x0018a8ec: nop 
    v0 = *(int32_t*)((s6) + 0x18);                              // 0x0018a8f0: lw $v0, 0x18($s6)
    v0 = (unsigned)v0 >> 0x10;                                  // 0x0018a8f4: srl $v0, $v0, 0x10
    v0 = v0 & 0xff;                                             // 0x0018a8f8: andi $v0, $v0, 0xff
    if (v0 < 0) goto label_0x18a910;                            // 0x0018a8fc: bltz $v0, 0x18a910
    v1 = (unsigned)v0 >> 1;                                     // 0x0018a900: srl $v1, $v0, 1
    /* move to FPU: $v0, $f0 */                                 // 0x0018a904: mtc1 $v0, $f0
    goto label_0x18a928;                                        // 0x0018a908: b 0x18a928
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018a90c: cvt.s.w $f0, $f0
label_0x18a910:
    v0 = v0 & 1;                                                // 0x0018a910: andi $v0, $v0, 1
    v1 = v1 | v0;                                               // 0x0018a914: or $v1, $v1, $v0
    /* move to FPU: $v1, $f0 */                                 // 0x0018a918: mtc1 $v1, $f0
    /* nop */                                                   // 0x0018a91c: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018a920: cvt.s.w $f0, $f0
    /* FPU: add.s $f0, $f0, $f0 */                              // 0x0018a924: add.s $f0, $f0, $f0
label_0x18a928:
    *(float*)(s4) = FPU_F0;  // Store float                     // 0x0018a928: swc1 $f0, 0($s4)
    v0 = *(int32_t*)((s6) + 0x18);                              // 0x0018a92c: lw $v0, 0x18($s6)
    v0 = (unsigned)v0 >> 8;                                     // 0x0018a930: srl $v0, $v0, 8
    v0 = v0 & 0xff;                                             // 0x0018a934: andi $v0, $v0, 0xff
    if (v0 < 0) goto label_0x18a94c;                            // 0x0018a938: bltz $v0, 0x18a94c
    v1 = (unsigned)v0 >> 1;                                     // 0x0018a93c: srl $v1, $v0, 1
    /* move to FPU: $v0, $f0 */                                 // 0x0018a940: mtc1 $v0, $f0
    goto label_0x18a964;                                        // 0x0018a944: b 0x18a964
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018a948: cvt.s.w $f0, $f0
label_0x18a94c:
    v0 = v0 & 1;                                                // 0x0018a94c: andi $v0, $v0, 1
    v1 = v1 | v0;                                               // 0x0018a950: or $v1, $v1, $v0
    /* move to FPU: $v1, $f0 */                                 // 0x0018a954: mtc1 $v1, $f0
    /* nop */                                                   // 0x0018a958: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018a95c: cvt.s.w $f0, $f0
    /* FPU: add.s $f0, $f0, $f0 */                              // 0x0018a960: add.s $f0, $f0, $f0
label_0x18a964:
    *(float*)((s4) + 4) = FPU_F0;  // Store float               // 0x0018a964: swc1 $f0, 4($s4)
    v0 = *(uint8_t*)((s6) + 0x18);                              // 0x0018a968: lbu $v0, 0x18($s6)
    if (v0 < 0) goto label_0x18a980;                            // 0x0018a96c: bltz $v0, 0x18a980
    v1 = (unsigned)v0 >> 1;                                     // 0x0018a970: srl $v1, $v0, 1
    /* move to FPU: $v0, $f0 */                                 // 0x0018a974: mtc1 $v0, $f0
    goto label_0x18a998;                                        // 0x0018a978: b 0x18a998
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018a97c: cvt.s.w $f0, $f0
label_0x18a980:
    v0 = v0 & 1;                                                // 0x0018a980: andi $v0, $v0, 1
    v1 = v1 | v0;                                               // 0x0018a984: or $v1, $v1, $v0
    /* move to FPU: $v1, $f0 */                                 // 0x0018a988: mtc1 $v1, $f0
    /* nop */                                                   // 0x0018a98c: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018a990: cvt.s.w $f0, $f0
    /* FPU: add.s $f0, $f0, $f0 */                              // 0x0018a994: add.s $f0, $f0, $f0
label_0x18a998:
    goto label_0x18a9e0;                                        // 0x0018a998: b 0x18a9e0
    *(float*)((s4) + 8) = FPU_F0;  // Store float               // 0x0018a99c: swc1 $f0, 8($s4)
label_0x18a9a0:
    v0 = *(int32_t*)((s6) + 0x18);                              // 0x0018a9a0: lw $v0, 0x18($s6)
    a1 = 1;                                                     // 0x0018a9a4: addiu $a1, $zero, 1
    v0 = (unsigned)v0 >> 0x10;                                  // 0x0018a9a8: srl $v0, $v0, 0x10
    func_0018b190();  // 18b190                                // 0x0018a9ac: jal 0x18b190
    a0 = v0 & 0xff;                                             // 0x0018a9b0: andi $a0, $v0, 0xff
    *(float*)(s4) = FPU_F0;  // Store float                     // 0x0018a9b4: swc1 $f0, 0($s4)
    a1 = 1;                                                     // 0x0018a9b8: addiu $a1, $zero, 1
    v0 = *(int32_t*)((s6) + 0x18);                              // 0x0018a9bc: lw $v0, 0x18($s6)
    v0 = (unsigned)v0 >> 8;                                     // 0x0018a9c0: srl $v0, $v0, 8
    func_0018b190();  // 18b190                                // 0x0018a9c4: jal 0x18b190
    a0 = v0 & 0xff;                                             // 0x0018a9c8: andi $a0, $v0, 0xff
    *(float*)((s4) + 4) = FPU_F0;  // Store float               // 0x0018a9cc: swc1 $f0, 4($s4)
    a0 = *(uint8_t*)((s6) + 0x18);                              // 0x0018a9d0: lbu $a0, 0x18($s6)
    func_0018b190();  // 18b190                                // 0x0018a9d4: jal 0x18b190
    a1 = 1;                                                     // 0x0018a9d8: addiu $a1, $zero, 1
    *(float*)((s4) + 8) = FPU_F0;  // Store float               // 0x0018a9dc: swc1 $f0, 8($s4)
label_0x18a9e0:
    v0 = *(int32_t*)((s6) + 0x18);                              // 0x0018a9e0: lw $v0, 0x18($s6)
    v0 = (unsigned)v0 >> 0x18;                                  // 0x0018a9e8: srl $v0, $v0, 0x18
    func_0018b190();  // 18b190                                // 0x0018a9ec: jal 0x18b190
    a0 = v0 & 0xff;                                             // 0x0018a9f0: andi $a0, $v0, 0xff
    *(float*)((s4) + 0xc) = FPU_F0;  // Store float             // 0x0018a9f4: swc1 $f0, 0xc($s4)
    goto label_0x18af70;                                        // 0x0018a9f8: b 0x18af70
    s4 = s4 + 0x10;                                             // 0x0018a9fc: addiu $s4, $s4, 0x10
label_0x18aa00:
    v0 = local_26c;                                             // 0x0018aa00: lw $v0, 0x26c($sp)
    v0 = g_3f800000;  // Global at 0x3f800000                   // 0x0018aa04: lw $v0, 0($v0)
    v0 = v0 & 0x1000;                                           // 0x0018aa08: andi $v0, $v0, 0x1000
    if (v0 == 0) goto label_0x18aa38;                           // 0x0018aa0c: beqz $v0, 0x18aa38
    /* nop */                                                   // 0x0018aa10: nop 
    v0 = local_26c;                                             // 0x0018aa14: lw $v0, 0x26c($sp)
    a0 = *(uint16_t*)(s2);                                      // 0x0018aa18: lhu $a0, 0($s2)
    v0 = g_3f800010;  // Global at 0x3f800010                   // 0x0018aa1c: lw $v0, 0x10($v0)
    v1 = a0 << 3;                                               // 0x0018aa20: sll $v1, $a0, 3
    s2 = s2 + 2;                                                // 0x0018aa24: addiu $s2, $s2, 2
    v1 = v1 + a0;                                               // 0x0018aa28: addu $v1, $v1, $a0
    v1 = v1 << 2;                                               // 0x0018aa2c: sll $v1, $v1, 2
    goto label_0x18aa3c;                                        // 0x0018aa30: b 0x18aa3c
    s1 = v0 + v1;                                               // 0x0018aa34: addu $s1, $v0, $v1
label_0x18aa38:
    s1 = s1 + 0x24;                                             // 0x0018aa38: addiu $s1, $s1, 0x24
label_0x18aa3c:
    v0 = local_110;                                             // 0x0018aa3c: lw $v0, 0x110($sp)
    if (v0 == 0) goto label_0x18aa80;                           // 0x0018aa40: beqz $v0, 0x18aa80
    /* nop */                                                   // 0x0018aa44: nop 
    FPU_F0 = *(float*)(s1);  // Load float                      // 0x0018aa48: lwc1 $f0, 0($s1)
    *(float*)(s4) = FPU_F0;  // Store float                     // 0x0018aa4c: swc1 $f0, 0($s4)
    FPU_F0 = *(float*)((s1) + 4);  // Load float                // 0x0018aa50: lwc1 $f0, 4($s1)
    *(float*)((s4) + 4) = FPU_F0;  // Store float               // 0x0018aa54: swc1 $f0, 4($s4)
    FPU_F0 = *(float*)((s1) + 8);  // Load float                // 0x0018aa58: lwc1 $f0, 8($s1)
    *(float*)((s4) + 8) = FPU_F0;  // Store float               // 0x0018aa5c: swc1 $f0, 8($s4)
    v0 = local_250;                                             // 0x0018aa60: lw $v0, 0x250($sp)
    at = (v0 < 2) ? 1 : 0;                                      // 0x0018aa64: slti $at, $v0, 2
    if (at == 0) goto label_0x18aa78;                           // 0x0018aa68: beqz $at, 0x18aa78
    v0 = 0 | 0x8000;                                            // 0x0018aa6c: ori $v0, $zero, 0x8000
    goto label_0x18aa7c;                                        // 0x0018aa70: b 0x18aa7c
    *(uint32_t*)((s4) + 0xc) = v0;                              // 0x0018aa74: sw $v0, 0xc($s4)
label_0x18aa78:
    *(uint32_t*)((s4) + 0xc) = 0;                               // 0x0018aa78: sw $zero, 0xc($s4)
label_0x18aa7c:
    s4 = s4 + 0x10;                                             // 0x0018aa7c: addiu $s4, $s4, 0x10
label_0x18aa80:
    v0 = local_100;                                             // 0x0018aa80: lw $v0, 0x100($sp)
    if (v0 == 0) goto label_0x18aac4;                           // 0x0018aa84: beqz $v0, 0x18aac4
    /* nop */                                                   // 0x0018aa88: nop 
    FPU_F0 = *(float*)((s1) + 0xc);  // Load float              // 0x0018aa8c: lwc1 $f0, 0xc($s1)
    *(float*)(s4) = FPU_F0;  // Store float                     // 0x0018aa90: swc1 $f0, 0($s4)
    FPU_F0 = *(float*)((s1) + 0x10);  // Load float             // 0x0018aa94: lwc1 $f0, 0x10($s1)
    *(float*)((s4) + 4) = FPU_F0;  // Store float               // 0x0018aa98: swc1 $f0, 4($s4)
    FPU_F0 = *(float*)((s1) + 0x14);  // Load float             // 0x0018aa9c: lwc1 $f0, 0x14($s1)
    *(float*)((s4) + 8) = FPU_F0;  // Store float               // 0x0018aaa0: swc1 $f0, 8($s4)
    v0 = local_160;                                             // 0x0018aaa4: lw $v0, 0x160($sp)
    if (v0 != 0) goto label_0x18aabc;                           // 0x0018aaa8: bnez $v0, 0x18aabc
    v0 = 0xbf80 << 16;                                          // 0x0018aaac: lui $v0, 0xbf80
    v0 = 0x3f80 << 16;                                          // 0x0018aab0: lui $v0, 0x3f80
    goto label_0x18aac0;                                        // 0x0018aab4: b 0x18aac0
    *(uint32_t*)((s4) + 0xc) = v0;                              // 0x0018aab8: sw $v0, 0xc($s4)
label_0x18aabc:
    *(uint32_t*)((s4) + 0xc) = v0;                              // 0x0018aabc: sw $v0, 0xc($s4)
label_0x18aac0:
    s4 = s4 + 0x10;                                             // 0x0018aac0: addiu $s4, $s4, 0x10
label_0x18aac4:
    v0 = local_f0;                                              // 0x0018aac4: lw $v0, 0xf0($sp)
    if (v0 == 0) goto label_0x18ab80;                           // 0x0018aac8: beqz $v0, 0x18ab80
    /* nop */                                                   // 0x0018aacc: nop 
    v0 = *(int32_t*)((fp) + 0xc);                               // 0x0018aad0: lw $v0, 0xc($fp)
    v0 = v0 & 0xf00;                                            // 0x0018aad4: andi $v0, $v0, 0xf00
    if (v0 != 0) goto label_0x18ab24;                           // 0x0018aad8: bnez $v0, 0x18ab24
    /* nop */                                                   // 0x0018aadc: nop 
    v0 = *(int32_t*)((s1) + 0x18);                              // 0x0018aae0: lw $v0, 0x18($s1)
    v0 = (unsigned)v0 >> 0x10;                                  // 0x0018aae8: srl $v0, $v0, 0x10
    func_0018b190();  // 18b190                                // 0x0018aaec: jal 0x18b190
    a0 = v0 & 0xff;                                             // 0x0018aaf0: andi $a0, $v0, 0xff
    *(float*)(s4) = FPU_F0;  // Store float                     // 0x0018aaf4: swc1 $f0, 0($s4)
    v0 = *(int32_t*)((s1) + 0x18);                              // 0x0018aafc: lw $v0, 0x18($s1)
    v0 = (unsigned)v0 >> 8;                                     // 0x0018ab00: srl $v0, $v0, 8
    func_0018b190();  // 18b190                                // 0x0018ab04: jal 0x18b190
    a0 = v0 & 0xff;                                             // 0x0018ab08: andi $a0, $v0, 0xff
    *(float*)((s4) + 4) = FPU_F0;  // Store float               // 0x0018ab0c: swc1 $f0, 4($s4)
    a0 = *(uint8_t*)((s1) + 0x18);                              // 0x0018ab10: lbu $a0, 0x18($s1)
    func_0018b190();  // 18b190                                // 0x0018ab14: jal 0x18b190
    goto label_0x18ab64;                                        // 0x0018ab1c: b 0x18ab64
    *(float*)((s4) + 8) = FPU_F0;  // Store float               // 0x0018ab20: swc1 $f0, 8($s4)
label_0x18ab24:
    v0 = *(int32_t*)((s1) + 0x18);                              // 0x0018ab24: lw $v0, 0x18($s1)
    a1 = 1;                                                     // 0x0018ab28: addiu $a1, $zero, 1
    v0 = (unsigned)v0 >> 0x10;                                  // 0x0018ab2c: srl $v0, $v0, 0x10
    func_0018b190();  // 18b190                                // 0x0018ab30: jal 0x18b190
    a0 = v0 & 0xff;                                             // 0x0018ab34: andi $a0, $v0, 0xff
    *(float*)(s4) = FPU_F0;  // Store float                     // 0x0018ab38: swc1 $f0, 0($s4)
    a1 = 1;                                                     // 0x0018ab3c: addiu $a1, $zero, 1
    v0 = *(int32_t*)((s1) + 0x18);                              // 0x0018ab40: lw $v0, 0x18($s1)
    v0 = (unsigned)v0 >> 8;                                     // 0x0018ab44: srl $v0, $v0, 8
    func_0018b190();  // 18b190                                // 0x0018ab48: jal 0x18b190
    a0 = v0 & 0xff;                                             // 0x0018ab4c: andi $a0, $v0, 0xff
    *(float*)((s4) + 4) = FPU_F0;  // Store float               // 0x0018ab50: swc1 $f0, 4($s4)
    a0 = *(uint8_t*)((s1) + 0x18);                              // 0x0018ab54: lbu $a0, 0x18($s1)
    func_0018b190();  // 18b190                                // 0x0018ab58: jal 0x18b190
    a1 = 1;                                                     // 0x0018ab5c: addiu $a1, $zero, 1
    *(float*)((s4) + 8) = FPU_F0;  // Store float               // 0x0018ab60: swc1 $f0, 8($s4)
label_0x18ab64:
    v0 = *(int32_t*)((s1) + 0x18);                              // 0x0018ab64: lw $v0, 0x18($s1)
    v0 = (unsigned)v0 >> 0x18;                                  // 0x0018ab6c: srl $v0, $v0, 0x18
    func_0018b190();  // 18b190                                // 0x0018ab70: jal 0x18b190
    a0 = v0 & 0xff;                                             // 0x0018ab74: andi $a0, $v0, 0xff
    *(float*)((s4) + 0xc) = FPU_F0;  // Store float             // 0x0018ab78: swc1 $f0, 0xc($s4)
    s4 = s4 + 0x10;                                             // 0x0018ab7c: addiu $s4, $s4, 0x10
label_0x18ab80:
    v0 = local_e0;                                              // 0x0018ab80: lw $v0, 0xe0($sp)
    if (v0 == 0) goto label_0x18af70;                           // 0x0018ab84: beqz $v0, 0x18af70
    /* nop */                                                   // 0x0018ab88: nop 
    FPU_F0 = *(float*)((s1) + 0x1c);  // Load float             // 0x0018ab8c: lwc1 $f0, 0x1c($s1)
    v0 = 0x3f80 << 16;                                          // 0x0018ab90: lui $v0, 0x3f80
    *(float*)(s4) = FPU_F0;  // Store float                     // 0x0018ab98: swc1 $f0, 0($s4)
    FPU_F0 = *(float*)((s1) + 0x20);  // Load float             // 0x0018ab9c: lwc1 $f0, 0x20($s1)
    *(float*)((s4) + 4) = FPU_F0;  // Store float               // 0x0018aba0: swc1 $f0, 4($s4)
    *(uint32_t*)((s4) + 8) = v0;                                // 0x0018aba4: sw $v0, 8($s4)
    *(uint32_t*)((s4) + 0xc) = 0;                               // 0x0018aba8: sw $zero, 0xc($s4)
    v0 = *(int32_t*)(fp);                                       // 0x0018abac: lw $v0, 0($fp)
    v0 = v0 & 0x20;                                             // 0x0018abb0: andi $v0, $v0, 0x20
    if (v0 == 0) goto label_0x18af70;                           // 0x0018abb4: beqz $v0, 0x18af70
    s4 = s4 + 0x10;                                             // 0x0018abb8: addiu $s4, $s4, 0x10
    FPU_F1 = *(float*)(v1);  // Load float                      // 0x0018abbc: lwc1 $f1, 0($v1)
    FPU_F0 = *(float*)((gp) + -0x64cc);  // Load float          // 0x0018abc0: lwc1 $f0, -0x64cc($gp)
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0018abc4: mul.s $f0, $f1, $f0
    *(float*)(v1) = FPU_F0;  // Store float                     // 0x0018abc8: swc1 $f0, 0($v1)
    FPU_F1 = *(float*)((v1) + 4);  // Load float                // 0x0018abcc: lwc1 $f1, 4($v1)
    FPU_F0 = *(float*)((gp) + -0x64d0);  // Load float          // 0x0018abd0: lwc1 $f0, -0x64d0($gp)
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0018abd4: mul.s $f0, $f1, $f0
    goto label_0x18af70;                                        // 0x0018abd8: b 0x18af70
    *(float*)((v1) + 4) = FPU_F0;  // Store float               // 0x0018abdc: swc1 $f0, 4($v1)
label_0x18abe0:
    v0 = local_26c;                                             // 0x0018abe0: lw $v0, 0x26c($sp)
    v0 = g_3f800000;  // Global at 0x3f800000                   // 0x0018abe4: lw $v0, 0($v0)
    v0 = v0 & 0x1000;                                           // 0x0018abe8: andi $v0, $v0, 0x1000
    if (v0 == 0) goto label_0x18ac20;                           // 0x0018abec: beqz $v0, 0x18ac20
    /* nop */                                                   // 0x0018abf0: nop 
    v0 = local_26c;                                             // 0x0018abf4: lw $v0, 0x26c($sp)
    a0 = *(uint16_t*)(s2);                                      // 0x0018abf8: lhu $a0, 0($s2)
    v0 = g_3f800010;  // Global at 0x3f800010                   // 0x0018abfc: lw $v0, 0x10($v0)
    v1 = a0 << 2;                                               // 0x0018ac00: sll $v1, $a0, 2
    s2 = s2 + 2;                                                // 0x0018ac04: addiu $s2, $s2, 2
    v1 = v1 + a0;                                               // 0x0018ac08: addu $v1, $v1, $a0
    v1 = v1 << 1;                                               // 0x0018ac0c: sll $v1, $v1, 1
    v1 = v1 + a0;                                               // 0x0018ac10: addu $v1, $v1, $a0
    v1 = v1 << 2;                                               // 0x0018ac14: sll $v1, $v1, 2
    goto label_0x18ac24;                                        // 0x0018ac18: b 0x18ac24
    s0 = v0 + v1;                                               // 0x0018ac1c: addu $s0, $v0, $v1
label_0x18ac20:
    s0 = s0 + 0x2c;                                             // 0x0018ac20: addiu $s0, $s0, 0x2c
label_0x18ac24:
    v0 = local_110;                                             // 0x0018ac24: lw $v0, 0x110($sp)
    if (v0 == 0) goto label_0x18ac68;                           // 0x0018ac28: beqz $v0, 0x18ac68
    /* nop */                                                   // 0x0018ac2c: nop 
    FPU_F0 = *(float*)(s0);  // Load float                      // 0x0018ac30: lwc1 $f0, 0($s0)
    *(float*)(s4) = FPU_F0;  // Store float                     // 0x0018ac34: swc1 $f0, 0($s4)
    FPU_F0 = *(float*)((s0) + 4);  // Load float                // 0x0018ac38: lwc1 $f0, 4($s0)
    *(float*)((s4) + 4) = FPU_F0;  // Store float               // 0x0018ac3c: swc1 $f0, 4($s4)
    FPU_F0 = *(float*)((s0) + 8);  // Load float                // 0x0018ac40: lwc1 $f0, 8($s0)
    *(float*)((s4) + 8) = FPU_F0;  // Store float               // 0x0018ac44: swc1 $f0, 8($s4)
    v0 = local_250;                                             // 0x0018ac48: lw $v0, 0x250($sp)
    at = (v0 < 2) ? 1 : 0;                                      // 0x0018ac4c: slti $at, $v0, 2
    if (at == 0) goto label_0x18ac60;                           // 0x0018ac50: beqz $at, 0x18ac60
    v0 = 0 | 0x8000;                                            // 0x0018ac54: ori $v0, $zero, 0x8000
    goto label_0x18ac64;                                        // 0x0018ac58: b 0x18ac64
    *(uint32_t*)((s4) + 0xc) = v0;                              // 0x0018ac5c: sw $v0, 0xc($s4)
label_0x18ac60:
    *(uint32_t*)((s4) + 0xc) = 0;                               // 0x0018ac60: sw $zero, 0xc($s4)
label_0x18ac64:
    s4 = s4 + 0x10;                                             // 0x0018ac64: addiu $s4, $s4, 0x10
label_0x18ac68:
    v0 = local_100;                                             // 0x0018ac68: lw $v0, 0x100($sp)
    if (v0 == 0) goto label_0x18acac;                           // 0x0018ac6c: beqz $v0, 0x18acac
    /* nop */                                                   // 0x0018ac70: nop 
    FPU_F0 = *(float*)((s0) + 0xc);  // Load float              // 0x0018ac74: lwc1 $f0, 0xc($s0)
    *(float*)(s4) = FPU_F0;  // Store float                     // 0x0018ac78: swc1 $f0, 0($s4)
    FPU_F0 = *(float*)((s0) + 0x10);  // Load float             // 0x0018ac7c: lwc1 $f0, 0x10($s0)
    *(float*)((s4) + 4) = FPU_F0;  // Store float               // 0x0018ac80: swc1 $f0, 4($s4)
    FPU_F0 = *(float*)((s0) + 0x14);  // Load float             // 0x0018ac84: lwc1 $f0, 0x14($s0)
    *(float*)((s4) + 8) = FPU_F0;  // Store float               // 0x0018ac88: swc1 $f0, 8($s4)
    v0 = local_160;                                             // 0x0018ac8c: lw $v0, 0x160($sp)
    if (v0 != 0) goto label_0x18aca4;                           // 0x0018ac90: bnez $v0, 0x18aca4
    v0 = 0xbf80 << 16;                                          // 0x0018ac94: lui $v0, 0xbf80
    v0 = 0x3f80 << 16;                                          // 0x0018ac98: lui $v0, 0x3f80
    goto label_0x18aca8;                                        // 0x0018ac9c: b 0x18aca8
    *(uint32_t*)((s4) + 0xc) = v0;                              // 0x0018aca0: sw $v0, 0xc($s4)
label_0x18aca4:
    *(uint32_t*)((s4) + 0xc) = v0;                              // 0x0018aca4: sw $v0, 0xc($s4)
label_0x18aca8:
    s4 = s4 + 0x10;                                             // 0x0018aca8: addiu $s4, $s4, 0x10
label_0x18acac:
    v0 = local_f0;                                              // 0x0018acac: lw $v0, 0xf0($sp)
    if (v0 == 0) goto label_0x18ad68;                           // 0x0018acb0: beqz $v0, 0x18ad68
    /* nop */                                                   // 0x0018acb4: nop 
    v0 = *(int32_t*)((fp) + 0xc);                               // 0x0018acb8: lw $v0, 0xc($fp)
    v0 = v0 & 0xf00;                                            // 0x0018acbc: andi $v0, $v0, 0xf00
    if (v0 != 0) goto label_0x18ad0c;                           // 0x0018acc0: bnez $v0, 0x18ad0c
    /* nop */                                                   // 0x0018acc4: nop 
    v0 = *(int32_t*)((s0) + 0x18);                              // 0x0018acc8: lw $v0, 0x18($s0)
    v0 = (unsigned)v0 >> 0x10;                                  // 0x0018acd0: srl $v0, $v0, 0x10
    func_0018b190();  // 18b190                                // 0x0018acd4: jal 0x18b190
    a0 = v0 & 0xff;                                             // 0x0018acd8: andi $a0, $v0, 0xff
    *(float*)(s4) = FPU_F0;  // Store float                     // 0x0018acdc: swc1 $f0, 0($s4)
    v0 = *(int32_t*)((s0) + 0x18);                              // 0x0018ace4: lw $v0, 0x18($s0)
    v0 = (unsigned)v0 >> 8;                                     // 0x0018ace8: srl $v0, $v0, 8
    func_0018b190();  // 18b190                                // 0x0018acec: jal 0x18b190
    a0 = v0 & 0xff;                                             // 0x0018acf0: andi $a0, $v0, 0xff
    *(float*)((s4) + 4) = FPU_F0;  // Store float               // 0x0018acf4: swc1 $f0, 4($s4)
    a0 = *(uint8_t*)((s0) + 0x18);                              // 0x0018acf8: lbu $a0, 0x18($s0)
    func_0018b190();  // 18b190                                // 0x0018acfc: jal 0x18b190
    goto label_0x18ad4c;                                        // 0x0018ad04: b 0x18ad4c
    *(float*)((s4) + 8) = FPU_F0;  // Store float               // 0x0018ad08: swc1 $f0, 8($s4)
label_0x18ad0c:
    v0 = *(int32_t*)((s0) + 0x18);                              // 0x0018ad0c: lw $v0, 0x18($s0)
    a1 = 1;                                                     // 0x0018ad10: addiu $a1, $zero, 1
    v0 = (unsigned)v0 >> 0x10;                                  // 0x0018ad14: srl $v0, $v0, 0x10
    func_0018b190();  // 18b190                                // 0x0018ad18: jal 0x18b190
    a0 = v0 & 0xff;                                             // 0x0018ad1c: andi $a0, $v0, 0xff
    *(float*)(s4) = FPU_F0;  // Store float                     // 0x0018ad20: swc1 $f0, 0($s4)
    a1 = 1;                                                     // 0x0018ad24: addiu $a1, $zero, 1
    v0 = *(int32_t*)((s0) + 0x18);                              // 0x0018ad28: lw $v0, 0x18($s0)
    v0 = (unsigned)v0 >> 8;                                     // 0x0018ad2c: srl $v0, $v0, 8
    func_0018b190();  // 18b190                                // 0x0018ad30: jal 0x18b190
    a0 = v0 & 0xff;                                             // 0x0018ad34: andi $a0, $v0, 0xff
    *(float*)((s4) + 4) = FPU_F0;  // Store float               // 0x0018ad38: swc1 $f0, 4($s4)
    a0 = *(uint8_t*)((s0) + 0x18);                              // 0x0018ad3c: lbu $a0, 0x18($s0)
    func_0018b190();  // 18b190                                // 0x0018ad40: jal 0x18b190
    a1 = 1;                                                     // 0x0018ad44: addiu $a1, $zero, 1
    *(float*)((s4) + 8) = FPU_F0;  // Store float               // 0x0018ad48: swc1 $f0, 8($s4)
label_0x18ad4c:
    v0 = *(int32_t*)((s0) + 0x18);                              // 0x0018ad4c: lw $v0, 0x18($s0)
    v0 = (unsigned)v0 >> 0x18;                                  // 0x0018ad54: srl $v0, $v0, 0x18
    func_0018b190();  // 18b190                                // 0x0018ad58: jal 0x18b190
    a0 = v0 & 0xff;                                             // 0x0018ad5c: andi $a0, $v0, 0xff
    *(float*)((s4) + 0xc) = FPU_F0;  // Store float             // 0x0018ad60: swc1 $f0, 0xc($s4)
    s4 = s4 + 0x10;                                             // 0x0018ad64: addiu $s4, $s4, 0x10
label_0x18ad68:
    v0 = local_e0;                                              // 0x0018ad68: lw $v0, 0xe0($sp)
    if (v0 == 0) goto label_0x18adc4;                           // 0x0018ad6c: beqz $v0, 0x18adc4
    /* nop */                                                   // 0x0018ad70: nop 
    FPU_F0 = *(float*)((s0) + 0x1c);  // Load float             // 0x0018ad74: lwc1 $f0, 0x1c($s0)
    v0 = 0x3f80 << 16;                                          // 0x0018ad78: lui $v0, 0x3f80
    *(float*)(s4) = FPU_F0;  // Store float                     // 0x0018ad80: swc1 $f0, 0($s4)
    FPU_F0 = *(float*)((s0) + 0x20);  // Load float             // 0x0018ad84: lwc1 $f0, 0x20($s0)
    *(float*)((s4) + 4) = FPU_F0;  // Store float               // 0x0018ad88: swc1 $f0, 4($s4)
    *(uint32_t*)((s4) + 8) = v0;                                // 0x0018ad8c: sw $v0, 8($s4)
    *(uint32_t*)((s4) + 0xc) = 0;                               // 0x0018ad90: sw $zero, 0xc($s4)
    v0 = *(int32_t*)(fp);                                       // 0x0018ad94: lw $v0, 0($fp)
    v0 = v0 & 0x20;                                             // 0x0018ad98: andi $v0, $v0, 0x20
    if (v0 == 0) goto label_0x18adc4;                           // 0x0018ad9c: beqz $v0, 0x18adc4
    s4 = s4 + 0x10;                                             // 0x0018ada0: addiu $s4, $s4, 0x10
    FPU_F1 = *(float*)(v1);  // Load float                      // 0x0018ada4: lwc1 $f1, 0($v1)
    FPU_F0 = *(float*)((gp) + -0x64cc);  // Load float          // 0x0018ada8: lwc1 $f0, -0x64cc($gp)
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0018adac: mul.s $f0, $f1, $f0
    *(float*)(v1) = FPU_F0;  // Store float                     // 0x0018adb0: swc1 $f0, 0($v1)
    FPU_F1 = *(float*)((v1) + 4);  // Load float                // 0x0018adb4: lwc1 $f1, 4($v1)
    FPU_F0 = *(float*)((gp) + -0x64d0);  // Load float          // 0x0018adb8: lwc1 $f0, -0x64d0($gp)
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0018adbc: mul.s $f0, $f1, $f0
    *(float*)((v1) + 4) = FPU_F0;  // Store float               // 0x0018adc0: swc1 $f0, 4($v1)
label_0x18adc4:
    v0 = local_d0;                                              // 0x0018adc4: lw $v0, 0xd0($sp)
    if (v0 == 0) goto label_0x18af70;                           // 0x0018adc8: beqz $v0, 0x18af70
    /* nop */                                                   // 0x0018adcc: nop 
    v0 = local_c0;                                              // 0x0018add0: lw $v0, 0xc0($sp)
    if (v0 == 0) goto label_0x18af70;                           // 0x0018add4: beqz $v0, 0x18af70
    /* nop */                                                   // 0x0018add8: nop 
    v0 = *(int32_t*)((s0) + 0x24);                              // 0x0018addc: lw $v0, 0x24($s0)
    a2 = s4 + 0x10;                                             // 0x0018ade4: addiu $a2, $s4, 0x10
    v1 = 1;                                                     // 0x0018ade8: addiu $v1, $zero, 1
    v0 = (unsigned)v0 >> 0x18;                                  // 0x0018adec: srl $v0, $v0, 0x18
    v0 = v0 & 0xff;                                             // 0x0018adf0: andi $v0, $v0, 0xff
    local_300 = v0;                                             // 0x0018adf4: sw $v0, 0x300($sp)
    v0 = *(int32_t*)((s0) + 0x24);                              // 0x0018adf8: lw $v0, 0x24($s0)
    v0 = (unsigned)v0 >> 0x10;                                  // 0x0018adfc: srl $v0, $v0, 0x10
    a1 = v0 & 0xff;                                             // 0x0018ae00: andi $a1, $v0, 0xff
    v0 = sp + 0x304;                                            // 0x0018ae04: addiu $v0, $sp, 0x304
    g_3f800000 = a1;  // Global at 0x3f800000                   // 0x0018ae08: sw $a1, 0($v0)
    v0 = *(int32_t*)((s0) + 0x24);                              // 0x0018ae0c: lw $v0, 0x24($s0)
    v0 = (unsigned)v0 >> 8;                                     // 0x0018ae10: srl $v0, $v0, 8
    a1 = v0 & 0xff;                                             // 0x0018ae14: andi $a1, $v0, 0xff
    v0 = sp + 0x308;                                            // 0x0018ae18: addiu $v0, $sp, 0x308
    g_3f800000 = a1;  // Global at 0x3f800000                   // 0x0018ae1c: sw $a1, 0($v0)
    a1 = *(uint8_t*)((s0) + 0x24);                              // 0x0018ae20: lbu $a1, 0x24($s0)
    v0 = sp + 0x30c;                                            // 0x0018ae24: addiu $v0, $sp, 0x30c
    g_3f800000 = a1;  // Global at 0x3f800000                   // 0x0018ae28: sw $a1, 0($v0)
    v0 = *(int32_t*)((s0) + 0x28);                              // 0x0018ae2c: lw $v0, 0x28($s0)
    v0 = (unsigned)v0 >> 0x18;                                  // 0x0018ae30: srl $v0, $v0, 0x18
    v0 = v0 & 0xff;                                             // 0x0018ae34: andi $v0, $v0, 0xff
    local_2f0 = v0;                                             // 0x0018ae38: sw $v0, 0x2f0($sp)
    v0 = *(int32_t*)((s0) + 0x28);                              // 0x0018ae3c: lw $v0, 0x28($s0)
    v0 = (unsigned)v0 >> 0x10;                                  // 0x0018ae40: srl $v0, $v0, 0x10
    a1 = v0 & 0xff;                                             // 0x0018ae44: andi $a1, $v0, 0xff
    v0 = sp + 0x2f4;                                            // 0x0018ae48: addiu $v0, $sp, 0x2f4
    g_3f800000 = a1;  // Global at 0x3f800000                   // 0x0018ae4c: sw $a1, 0($v0)
    v0 = *(int32_t*)((s0) + 0x28);                              // 0x0018ae50: lw $v0, 0x28($s0)
    v0 = (unsigned)v0 >> 8;                                     // 0x0018ae54: srl $v0, $v0, 8
    a1 = v0 & 0xff;                                             // 0x0018ae58: andi $a1, $v0, 0xff
    v0 = sp + 0x2f8;                                            // 0x0018ae5c: addiu $v0, $sp, 0x2f8
    g_3f800000 = a1;  // Global at 0x3f800000                   // 0x0018ae60: sw $a1, 0($v0)
    a1 = *(uint8_t*)((s0) + 0x28);                              // 0x0018ae64: lbu $a1, 0x28($s0)
    v0 = sp + 0x2fc;                                            // 0x0018ae68: addiu $v0, $sp, 0x2fc
    g_3f800000 = a1;  // Global at 0x3f800000                   // 0x0018ae6c: sw $a1, 0($v0)
    v0 = local_210;                                             // 0x0018ae78: lw $v0, 0x210($sp)
    if (v0 == v1) goto label_0x18aefc;                          // 0x0018ae7c: beq $v0, $v1, 0x18aefc
    s4 = s4 + 0x20;                                             // 0x0018ae80: addiu $s4, $s4, 0x20
    if (v0 == 0) goto label_0x18ae94;                           // 0x0018ae84: beqz $v0, 0x18ae94
    /* nop */                                                   // 0x0018ae88: nop 
    goto label_0x18af70;                                        // 0x0018ae8c: b 0x18af70
    /* nop */                                                   // 0x0018ae90: nop 
label_0x18ae94:
    v0 = local_180;                                             // 0x0018ae94: lw $v0, 0x180($sp)
    a1 = 0x42c8 << 16;                                          // 0x0018ae98: lui $a1, 0x42c8
    a3 = local_300;                                             // 0x0018ae9c: lw $a3, 0x300($sp)
    v0 = g_3f800028;  // Global at 0x3f800028                   // 0x0018aea0: lw $v0, 0x28($v0)
    a3 = a3 << 2;                                               // 0x0018aea4: sll $a3, $a3, 2
    v0 = g_3f800000;  // Global at 0x3f800000                   // 0x0018aea8: lw $v0, 0($v0)
    v0 = v0 + a3;                                               // 0x0018aeac: addu $v0, $v0, $a3
    g_0022a361 = v0;  // Global at 0x0022a361                   // 0x0018aeb0: sw $v0, 0($a0)
    a3 = local_300;                                             // 0x0018aeb4: lw $a3, 0x300($sp)
    v0 = *(int32_t*)((fp) + 0x54);                              // 0x0018aeb8: lw $v0, 0x54($fp)
    v1 = v1 << a3;                                              // 0x0018aebc: sllv $v1, $v1, $a3
    v0 = v0 | v1;                                               // 0x0018aec0: or $v0, $v0, $v1
    *(uint32_t*)((fp) + 0x54) = v0;                             // 0x0018aec4: sw $v0, 0x54($fp)
    v0 = local_180;                                             // 0x0018aec8: lw $v0, 0x180($sp)
    v1 = local_300;                                             // 0x0018aecc: lw $v1, 0x300($sp)
    v0 = g_3f800028;  // Global at 0x3f800028                   // 0x0018aed0: lw $v0, 0x28($v0)
    t0 = g_3f800004;  // Global at 0x3f800004                   // 0x0018aed4: lw $t0, 4($v0)
    a3 = g_3f800000;  // Global at 0x3f800000                   // 0x0018aed8: lw $a3, 0($v0)
    t0 = t0 << 2;                                               // 0x0018aedc: sll $t0, $t0, 2
    v0 = g_3f800008;  // Global at 0x3f800008                   // 0x0018aee0: lw $v0, 8($v0)
    a3 = a3 + t0;                                               // 0x0018aee4: addu $a3, $a3, $t0
    /* multiply: v1 * v0 -> hi:lo */                            // 0x0018aee8: mult $ac2, $v1, $v0
    v0 = a3 + v0;                                               // 0x0018aeec: addu $v0, $a3, $v0
    g_0022a365 = v0;  // Global at 0x0022a365                   // 0x0018aef0: sw $v0, 4($a0)
    goto label_0x18af70;                                        // 0x0018aef4: b 0x18af70
    g_00216361 = a1;  // Global at 0x00216361                   // 0x0018aef8: sw $a1, 0($a2)
label_0x18aefc:
    v0 = 0x437f << 16;                                          // 0x0018af00: lui $v0, 0x437f
    /* move to FPU: $v0, $f1 */                                 // 0x0018af04: mtc1 $v0, $f1
label_0x18af08:
    v0 = local_180;                                             // 0x0018af08: lw $v0, 0x180($sp)
    a1 = a3 << 2;                                               // 0x0018af0c: sll $a1, $a3, 2
    a3 = a3 + 1;                                                // 0x0018af10: addiu $a3, $a3, 1
    t2 = a0 + a1;                                               // 0x0018af14: addu $t2, $a0, $a1
    t1 = a2 + a1;                                               // 0x0018af18: addu $t1, $a2, $a1
    t0 = (a3 < 4) ? 1 : 0;                                      // 0x0018af1c: slti $t0, $a3, 4
    t3 = g_437f0028;  // Global at 0x437f0028                   // 0x0018af20: lw $t3, 0x28($v0)
    v0 = a1 + sp;                                               // 0x0018af24: addu $v0, $a1, $sp
    t3 = *(int32_t*)(t3);                                       // 0x0018af28: lw $t3, 0($t3)
    a1 = v0 + 0x300;                                            // 0x0018af2c: addiu $a1, $v0, 0x300
    t4 = g_437f0300;  // Global at 0x437f0300                   // 0x0018af30: lw $t4, 0($a1)
    t4 = t4 << 2;                                               // 0x0018af34: sll $t4, $t4, 2
    t3 = t3 + t4;                                               // 0x0018af38: addu $t3, $t3, $t4
    *(uint32_t*)(t2) = t3;                                      // 0x0018af3c: sw $t3, 0($t2)
    t2 = g_437f0300;  // Global at 0x437f0300                   // 0x0018af40: lw $t2, 0($a1)
    a1 = *(int32_t*)((fp) + 0x54);                              // 0x0018af44: lw $a1, 0x54($fp)
    t2 = v1 << t2;                                              // 0x0018af48: sllv $t2, $v1, $t2
    a1 = a1 | t2;                                               // 0x0018af4c: or $a1, $a1, $t2
    *(uint32_t*)((fp) + 0x54) = a1;                             // 0x0018af50: sw $a1, 0x54($fp)
    FPU_F0 = *(float*)((v0) + 0x2f0);  // Load float            // 0x0018af54: lwc1 $f0, 0x2f0($v0)
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018af58: cvt.s.w $f0, $f0
    /* FPU: div.s $f0, $f0, $f1 */                              // 0x0018af5c: div.s $f0, $f0, $f1
    /* nop */                                                   // 0x0018af60: nop 
    /* nop */                                                   // 0x0018af64: nop 
    if (t0 != 0) goto label_0x18af08;                           // 0x0018af68: bnez $t0, 0x18af08
    *(float*)(t1) = FPU_F0;  // Store float                     // 0x0018af6c: swc1 $f0, 0($t1)
label_0x18af70:
    v0 = local_160;                                             // 0x0018af70: lw $v0, 0x160($sp)
label_0x18af74:
    v0 = v0 ^ 1;                                                // 0x0018af74: xori $v0, $v0, 1
    local_160 = v0;                                             // 0x0018af78: sw $v0, 0x160($sp)
    v0 = local_250;                                             // 0x0018af7c: lw $v0, 0x250($sp)
    v0 = v0 + 1;                                                // 0x0018af80: addiu $v0, $v0, 1
    local_250 = v0;                                             // 0x0018af84: sw $v0, 0x250($sp)
label_0x18af88:
    v1 = local_250;                                             // 0x0018af88: lw $v1, 0x250($sp)
    v0 = local_b0;                                              // 0x0018af8c: lw $v0, 0xb0($sp)
    v0 = ((unsigned)v1 < (unsigned)v0) ? 1 : 0;                 // 0x0018af90: sltu $v0, $v1, $v0
    if (v0 != 0) goto label_0x18a6a0;                           // 0x0018af94: bnez $v0, 0x18a6a0
    /* nop */                                                   // 0x0018af98: nop 
    v0 = local_a0;                                              // 0x0018af9c: lw $v0, 0xa0($sp)
    v0 = v0 + 1;                                                // 0x0018afa0: addiu $v0, $v0, 1
    local_a0 = v0;                                              // 0x0018afa4: sw $v0, 0xa0($sp)
label_0x18afa8:
    v1 = local_a0;                                              // 0x0018afa8: lw $v1, 0xa0($sp)
    v0 = local_1d0;                                             // 0x0018afac: lw $v0, 0x1d0($sp)
    v0 = (v1 < v0) ? 1 : 0;                                     // 0x0018afb0: slt $v0, $v1, $v0
    if (v0 != 0) goto label_0x18a350;                           // 0x0018afb4: bnez $v0, 0x18a350
    /* nop */                                                   // 0x0018afb8: nop 
    if (s5 == 0) goto label_0x18b06c;                           // 0x0018afbc: beqz $s5, 0x18b06c
    /* nop */                                                   // 0x0018afc0: nop 
    v0 = local_1f0;                                             // 0x0018afc4: lw $v0, 0x1f0($sp)
    func_0018c6b0();  // 18c6b0                                // 0x0018afd0: jal 0x18c6b0
    a1 = (unsigned)v0 >> 4;                                     // 0x0018afd4: srl $a1, $v0, 4
    v1 = local_210;                                             // 0x0018afd8: lw $v1, 0x210($sp)
    a0 = 1;                                                     // 0x0018afdc: addiu $a0, $zero, 1
    if (v1 == a0) goto label_0x18b000;                          // 0x0018afe0: beq $v1, $a0, 0x18b000
    /* nop */                                                   // 0x0018afe4: nop 
    if (v1 == 0) goto label_0x18aff8;                           // 0x0018afe8: beqz $v1, 0x18aff8
    /* nop */                                                   // 0x0018afec: nop 
    goto label_0x18b00c;                                        // 0x0018aff0: b 0x18b00c
    v1 = local_140;                                             // 0x0018aff4: lw $v1, 0x140($sp)
label_0x18aff8:
    goto label_0x18b008;                                        // 0x0018aff8: b 0x18b008
    g_437f0002 = a0;  // Global at 0x437f0002                   // 0x0018affc: sw $a0, 0($v0)
label_0x18b000:
    v1 = 2;                                                     // 0x0018b000: addiu $v1, $zero, 2
    g_437f0002 = v1;  // Global at 0x437f0002                   // 0x0018b004: sw $v1, 0($v0)
label_0x18b008:
    v1 = local_140;                                             // 0x0018b008: lw $v1, 0x140($sp)
label_0x18b00c:
    a1 = s5 + 2;                                                // 0x0018b00c: addiu $a1, $s5, 2
    a1 = 0x4000;                                                // 0x0018b020: addiu $a1, $zero, 0x4000
    v1 = 0 | 0x8000;                                            // 0x0018b024: ori $v1, $zero, 0x8000
    v1 = v1 | a1;                                               // 0x0018b02c: or $v1, $v1, $a1
    a1 = a2 | v1;                                               // 0x0018b030: or $a1, $a2, $v1
    a2 = (unsigned)a3 >> 4;                                     // 0x0018b038: srl $a2, $a3, 4
    a2 = a2 + 1;                                                // 0x0018b03c: addiu $a2, $a2, 1
    a1 = a1 | v1;                                               // 0x0018b040: or $a1, $a1, $v1
    g_437f0006 = a2;  // Global at 0x437f0006                   // 0x0018b048: sw $a2, 4($v0)
    v1 = v1 | a1;                                               // 0x0018b04c: or $v1, $v1, $a1
    v1 = local_1a0;                                             // 0x0018b058: lw $v1, 0x1a0($sp)
    g_437f001a = v1;  // Global at 0x437f001a                   // 0x0018b05c: sw $v1, 0x18($v0)
    func_0018c690();  // 18c690                                // 0x0018b060: jal 0x18c690
    g_437f001e = 0;  // Global at 0x437f001e                    // 0x0018b064: sw $zero, 0x1c($v0)
label_0x18b06c:
    v0 = local_230;                                             // 0x0018b06c: lw $v0, 0x230($sp)
    s0 = v0 << 2;                                               // 0x0018b070: sll $s0, $v0, 2
    v0 = s0 + sp;                                               // 0x0018b074: addu $v0, $s0, $sp
    a0 = g_437f0272;  // Global at 0x437f0272                   // 0x0018b078: lw $a0, 0x270($v0)
    if (s3 != a0) goto label_0x18b0b4;                          // 0x0018b07c: bne $s3, $a0, 0x18b0b4
    v0 = s4 - s3;                                               // 0x0018b080: subu $v0, $s4, $s3
    v0 = (unsigned)v0 >> 4;                                     // 0x0018b088: srl $v0, $v0, 4
    a1 = v0 + -1;                                               // 0x0018b090: addiu $a1, $v0, -1
    func_0018c630();  // 18c630                                // 0x0018b094: jal 0x18c630
    v1 = local_1b0;                                             // 0x0018b09c: lw $v1, 0x1b0($sp)
    a0 = v1 + s0;                                               // 0x0018b0a0: addu $a0, $v1, $s0
    v1 = local_24c;                                             // 0x0018b0a4: lw $v1, 0x24c($sp)
    v1 = s3 - v1;                                               // 0x0018b0a8: subu $v1, $s3, $v1
    goto label_0x18b134;                                        // 0x0018b0ac: b 0x18b134
    g_0022a361 = v1;  // Global at 0x0022a361                   // 0x0018b0b0: sw $v1, 0($a0)
label_0x18b0b4:
    a1 = g_0022a361;  // Global at 0x0022a361                   // 0x0018b0b4: lw $a1, 0($a0)
    v1 = 0x7000 << 16;                                          // 0x0018b0b8: lui $v1, 0x7000
    v0 = 0x6000 << 16;                                          // 0x0018b0bc: lui $v0, 0x6000
    v1 = a1 & v1;                                               // 0x0018b0c0: and $v1, $a1, $v1
    if (v1 == v0) goto label_0x18b0fc;                          // 0x0018b0c4: beq $v1, $v0, 0x18b0fc
    v0 = 0x2000 << 16;                                          // 0x0018b0c8: lui $v0, 0x2000
    if (v1 == v0) goto label_0x18b0e8;                          // 0x0018b0cc: beq $v1, $v0, 0x18b0e8
    /* nop */                                                   // 0x0018b0d0: nop 
    v0 = 0x1000 << 16;                                          // 0x0018b0d4: lui $v0, 0x1000
    if (v1 == v0) goto label_0x18b0ec;                          // 0x0018b0d8: beq $v1, $v0, 0x18b0ec
    v0 = a1 & 0xffff;                                           // 0x0018b0dc: andi $v0, $a1, 0xffff
    goto label_0x18b114;                                        // 0x0018b0e0: b 0x18b114
    /* nop */                                                   // 0x0018b0e4: nop 
label_0x18b0e8:
    v0 = a1 & 0xffff;                                           // 0x0018b0e8: andi $v0, $a1, 0xffff
label_0x18b0ec:
    v0 = v0 + 1;                                                // 0x0018b0ec: addiu $v0, $v0, 1
    v0 = v0 << 4;                                               // 0x0018b0f0: sll $v0, $v0, 4
    goto label_0x18b114;                                        // 0x0018b0f4: b 0x18b114
    a0 = a0 + v0;                                               // 0x0018b0f8: addu $a0, $a0, $v0
label_0x18b0fc:
    a1 = a1 & 0xffff;                                           // 0x0018b0fc: andi $a1, $a1, 0xffff
    func_0018c4c0();  // 18c4c0                                // 0x0018b108: jal 0x18c4c0
label_0x18b114:
    if (a0 != 0) goto label_0x18b0b4;                           // 0x0018b114: bnez $a0, 0x18b0b4
    v0 = s4 - s3;                                               // 0x0018b118: subu $v0, $s4, $s3
    v0 = (unsigned)v0 >> 4;                                     // 0x0018b120: srl $v0, $v0, 4
    a1 = v0 + -1;                                               // 0x0018b128: addiu $a1, $v0, -1
    func_0018c630();  // 18c630                                // 0x0018b12c: jal 0x18c630
label_0x18b134:
    v1 = local_24c;                                             // 0x0018b134: lw $v1, 0x24c($sp)
    a3 = *(int32_t*)((fp) + 0x18);                              // 0x0018b138: lw $a3, 0x18($fp)
    v1 = s4 - v1;                                               // 0x0018b13c: subu $v1, $s4, $v1
    if (a3 == v1) goto label_0x18b15c;                          // 0x0018b140: beq $a3, $v1, 0x18b15c
    /* nop */                                                   // 0x0018b144: nop 
    a1 = local_24c;                                             // 0x0018b148: lw $a1, 0x24c($sp)
    a0 = 0x23 << 16;                                            // 0x0018b14c: lui $a0, 0x23
    func_001a0760();  // 1a0760                                // 0x0018b154: jal 0x1a0760
    a0 = &str_0022a340;  // "Can't load module %s"              // 0x0018b158: addiu $a0, $a0, -0x5cc0
label_0x18b15c:
    /* FPU: xori.b $w2, $w0, 0xbe */                            // 0x0018b160: xori.b $w2, $w0, 0xbe
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x0018b168: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x0018b16c: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x0018b170: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0018b178: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0018b17c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018b180: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018b184: jr $ra
    sp = sp + 0x310;                                            // 0x0018b188: addiu $sp, $sp, 0x310
}