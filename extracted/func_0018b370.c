void func_0018b370() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t0 = a3 << 3;                                               // 0x0018b370: sll $t0, $a3, 3
    sp = sp + -0x60;                                            // 0x0018b374: addiu $sp, $sp, -0x60
    t0 = t0 + a3;                                               // 0x0018b378: addu $t0, $t0, $a3
    t0 = t0 << 1;                                               // 0x0018b380: sll $t0, $t0, 1
    v1 = 0x28 << 16;                                            // 0x0018b384: lui $v1, 0x28
    a3 = t0 + a3;                                               // 0x0018b388: addu $a3, $t0, $a3
    v1 = v1 + 0x4960;                                           // 0x0018b390: addiu $v1, $v1, 0x4960
    a3 = a3 << 2;                                               // 0x0018b394: sll $a3, $a3, 2
    at = ((unsigned)a2 < (unsigned)6) ? 1 : 0;                  // 0x0018b398: sltiu $at, $a2, 6
    /* FPU: dpa.w.ph $ac0, $sp, $s0 */                          // 0x0018b39c: dpa.w.ph $ac0, $sp, $s0
    if (at == 0) goto label_0x18b950;                           // 0x0018b3a0: beqz $at, 0x18b950
    s1 = v1 + a3;                                               // 0x0018b3a4: addu $s1, $v1, $a3
    v1 = a2 << 2;                                               // 0x0018b3a8: sll $v1, $a2, 2
    a2 = 0x23 << 16;                                            // 0x0018b3ac: lui $a2, 0x23
    a2 = a2 + -0x5c90;                                          // 0x0018b3b0: addiu $a2, $a2, -0x5c90
    v1 = v1 + a2;                                               // 0x0018b3b4: addu $v1, $v1, $a2
    v1 = g_00284960;  // Global at 0x00284960                   // 0x0018b3b8: lw $v1, 0($v1)
    /* jump to address in v1 */                                 // 0x0018b3bc: jr $v1
    /* nop */                                                   // 0x0018b3c0: nop 
    a1 = 0xc;                                                   // 0x0018b3d0: addiu $a1, $zero, 0xc
    func_0018c630();  // 0x18c5d0                                // 0x0018b3d8: jal 0x18c5d0
    a0 = s0 + 0x10;                                             // 0x0018b3e0: addiu $a0, $s0, 0x10
    a1 = 0xa;                                                   // 0x0018b3e4: addiu $a1, $zero, 0xa
    func_0018c6f0();  // 0x18c6b0                                // 0x0018b3e8: jal 0x18c6b0
    v0 = 0x1000 << 16;                                          // 0x0018b3f0: lui $v0, 0x1000
    a1 = s0 + 0x40;                                             // 0x0018b3fc: addiu $a1, $s0, 0x40
    v0 = 0 | 0x8006;                                            // 0x0018b400: ori $v0, $zero, 0x8006
    a2 = s0 + 0x50;                                             // 0x0018b404: addiu $a2, $s0, 0x50
    v1 = v0 | v1;                                               // 0x0018b408: or $v1, $v0, $v1
    a3 = s0 + 0x60;                                             // 0x0018b40c: addiu $a3, $s0, 0x60
    v0 = 0xe;                                                   // 0x0018b410: addiu $v0, $zero, 0xe
    *(uint32_t*)((s0) + 0x38) = v0;                             // 0x0018b418: sw $v0, 0x38($s0)
    t0 = s0 + 0x70;                                             // 0x0018b41c: addiu $t0, $s0, 0x70
    *(uint32_t*)((s0) + 0x3c) = 0;                              // 0x0018b420: sw $zero, 0x3c($s0)
    t1 = s0 + 0x80;                                             // 0x0018b424: addiu $t1, $s0, 0x80
    a0 = *(int32_t*)((s1) + 0x44);                              // 0x0018b428: lw $a0, 0x44($s1)
    func_0018bc20();  // 0x18bb30                                // 0x0018b42c: jal 0x18bb30
    t2 = s0 + 0x90;                                             // 0x0018b430: addiu $t2, $s0, 0x90
    FPU_F0 = *(float*)((s1) + 4);  // Load float                // 0x0018b434: lwc1 $f0, 4($s1)
    v0 = 0x4300 << 16;                                          // 0x0018b438: lui $v0, 0x4300
    /* move to FPU: $v0, $f1 */                                 // 0x0018b43c: mtc1 $v0, $f1
    a0 = s0 + 0xc0;                                             // 0x0018b440: addiu $a0, $s0, 0xc0
    *(float*)((s0) + 0xa0) = FPU_F0;  // Store float            // 0x0018b444: swc1 $f0, 0xa0($s0)
    FPU_F0 = *(float*)((s1) + 8);  // Load float                // 0x0018b448: lwc1 $f0, 8($s1)
    *(float*)((s0) + 0xa4) = FPU_F0;  // Store float            // 0x0018b44c: swc1 $f0, 0xa4($s0)
    FPU_F0 = *(float*)((s1) + 0xc);  // Load float              // 0x0018b450: lwc1 $f0, 0xc($s1)
    *(float*)((s0) + 0xa8) = FPU_F0;  // Store float            // 0x0018b454: swc1 $f0, 0xa8($s0)
    FPU_F0 = *(float*)((s1) + 0x10);  // Load float             // 0x0018b458: lwc1 $f0, 0x10($s1)
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0018b45c: mul.s $f0, $f1, $f0
    *(float*)((s0) + 0xac) = FPU_F0;  // Store float            // 0x0018b460: swc1 $f0, 0xac($s0)
    FPU_F0 = *(float*)((s1) + 0x24);  // Load float             // 0x0018b464: lwc1 $f0, 0x24($s1)
    *(float*)((s0) + 0xb0) = FPU_F0;  // Store float            // 0x0018b468: swc1 $f0, 0xb0($s0)
    FPU_F0 = *(float*)((s1) + 0x28);  // Load float             // 0x0018b46c: lwc1 $f0, 0x28($s1)
    *(float*)((s0) + 0xb4) = FPU_F0;  // Store float            // 0x0018b470: swc1 $f0, 0xb4($s0)
    FPU_F0 = *(float*)((s1) + 0x2c);  // Load float             // 0x0018b474: lwc1 $f0, 0x2c($s1)
    *(float*)((s0) + 0xb8) = FPU_F0;  // Store float            // 0x0018b478: swc1 $f0, 0xb8($s0)
    FPU_F0 = *(float*)((s1) + 0x30);  // Load float             // 0x0018b47c: lwc1 $f0, 0x30($s1)
    func_0018c6b0();  // 0x18c690                                // 0x0018b480: jal 0x18c690
    *(float*)((s0) + 0xbc) = FPU_F0;  // Store float            // 0x0018b484: swc1 $f0, 0xbc($s0)
    goto label_0x18b954;                                        // 0x0018b488: b 0x18b954
    a1 = 0xc;                                                   // 0x0018b49c: addiu $a1, $zero, 0xc
    func_0018c630();  // 0x18c5d0                                // 0x0018b4a4: jal 0x18c5d0
    a0 = s0 + 0x10;                                             // 0x0018b4ac: addiu $a0, $s0, 0x10
    a1 = 0xa;                                                   // 0x0018b4b0: addiu $a1, $zero, 0xa
    func_0018c6f0();  // 0x18c6b0                                // 0x0018b4b4: jal 0x18c6b0
    v0 = 0x1000 << 16;                                          // 0x0018b4bc: lui $v0, 0x1000
    a0 = 6;                                                     // 0x0018b4c8: addiu $a0, $zero, 6
    v0 = 0 | 0x8006;                                            // 0x0018b4cc: ori $v0, $zero, 0x8006
    a2 = 8;                                                     // 0x0018b4d0: addiu $a2, $zero, 8
    v1 = v0 | v1;                                               // 0x0018b4d4: or $v1, $v0, $v1
    a1 = 0x34;                                                  // 0x0018b4d8: addiu $a1, $zero, 0x34
    v0 = 0xe;                                                   // 0x0018b4e0: addiu $v0, $zero, 0xe
    *(uint32_t*)((s0) + 0x38) = v0;                             // 0x0018b4e4: sw $v0, 0x38($s0)
    v1 = 0x3b;                                                  // 0x0018b4e8: addiu $v1, $zero, 0x3b
    *(uint32_t*)((s0) + 0x3c) = 0;                              // 0x0018b4ec: sw $zero, 0x3c($s0)
    v0 = 0x14;                                                  // 0x0018b4f0: addiu $v0, $zero, 0x14
    v1 = 0x36;                                                  // 0x0018b500: addiu $v1, $zero, 0x36
    v0 = 0x4300 << 16;                                          // 0x0018b50c: lui $v0, 0x4300
    /* move to FPU: $v0, $f1 */                                 // 0x0018b514: mtc1 $v0, $f1
    a0 = s0 + 0xc0;                                             // 0x0018b51c: addiu $a0, $s0, 0xc0
    FPU_F0 = *(float*)((s1) + 4);  // Load float                // 0x0018b534: lwc1 $f0, 4($s1)
    *(float*)((s0) + 0xa0) = FPU_F0;  // Store float            // 0x0018b538: swc1 $f0, 0xa0($s0)
    FPU_F0 = *(float*)((s1) + 8);  // Load float                // 0x0018b53c: lwc1 $f0, 8($s1)
    *(float*)((s0) + 0xa4) = FPU_F0;  // Store float            // 0x0018b540: swc1 $f0, 0xa4($s0)
    FPU_F0 = *(float*)((s1) + 0xc);  // Load float              // 0x0018b544: lwc1 $f0, 0xc($s1)
    *(float*)((s0) + 0xa8) = FPU_F0;  // Store float            // 0x0018b548: swc1 $f0, 0xa8($s0)
    FPU_F0 = *(float*)((s1) + 0x10);  // Load float             // 0x0018b54c: lwc1 $f0, 0x10($s1)
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0018b550: mul.s $f0, $f1, $f0
    *(float*)((s0) + 0xac) = FPU_F0;  // Store float            // 0x0018b554: swc1 $f0, 0xac($s0)
    FPU_F0 = *(float*)((s1) + 0x24);  // Load float             // 0x0018b558: lwc1 $f0, 0x24($s1)
    *(float*)((s0) + 0xb0) = FPU_F0;  // Store float            // 0x0018b55c: swc1 $f0, 0xb0($s0)
    FPU_F0 = *(float*)((s1) + 0x28);  // Load float             // 0x0018b560: lwc1 $f0, 0x28($s1)
    *(float*)((s0) + 0xb4) = FPU_F0;  // Store float            // 0x0018b564: swc1 $f0, 0xb4($s0)
    FPU_F0 = *(float*)((s1) + 0x2c);  // Load float             // 0x0018b568: lwc1 $f0, 0x2c($s1)
    *(float*)((s0) + 0xb8) = FPU_F0;  // Store float            // 0x0018b56c: swc1 $f0, 0xb8($s0)
    FPU_F0 = *(float*)((s1) + 0x30);  // Load float             // 0x0018b570: lwc1 $f0, 0x30($s1)
    func_0018c6b0();  // 0x18c690                                // 0x0018b574: jal 0x18c690
    *(float*)((s0) + 0xbc) = FPU_F0;  // Store float            // 0x0018b578: swc1 $f0, 0xbc($s0)
    goto label_0x18b950;                                        // 0x0018b57c: b 0x18b950
    /* nop */                                                   // 0x0018b580: nop 
    a1 = 0xe;                                                   // 0x0018b590: addiu $a1, $zero, 0xe
    func_0018c630();  // 0x18c5d0                                // 0x0018b598: jal 0x18c5d0
    a0 = s0 + 0x10;                                             // 0x0018b5a0: addiu $a0, $s0, 0x10
    a1 = 0xc;                                                   // 0x0018b5a4: addiu $a1, $zero, 0xc
    func_0018c6f0();  // 0x18c6b0                                // 0x0018b5a8: jal 0x18c6b0
    v0 = 0x1000 << 16;                                          // 0x0018b5b0: lui $v0, 0x1000
    a1 = s0 + 0x40;                                             // 0x0018b5bc: addiu $a1, $s0, 0x40
    v0 = 0 | 0x8006;                                            // 0x0018b5c0: ori $v0, $zero, 0x8006
    a2 = s0 + 0x50;                                             // 0x0018b5c4: addiu $a2, $s0, 0x50
    v1 = v0 | v1;                                               // 0x0018b5c8: or $v1, $v0, $v1
    a3 = s0 + 0x60;                                             // 0x0018b5cc: addiu $a3, $s0, 0x60
    v0 = 0xe;                                                   // 0x0018b5d0: addiu $v0, $zero, 0xe
    *(uint32_t*)((s0) + 0x38) = v0;                             // 0x0018b5d8: sw $v0, 0x38($s0)
    t0 = s0 + 0x70;                                             // 0x0018b5dc: addiu $t0, $s0, 0x70
    *(uint32_t*)((s0) + 0x3c) = 0;                              // 0x0018b5e0: sw $zero, 0x3c($s0)
    t1 = s0 + 0x80;                                             // 0x0018b5e4: addiu $t1, $s0, 0x80
    a0 = *(int32_t*)((s1) + 0x44);                              // 0x0018b5e8: lw $a0, 0x44($s1)
    func_0018bc20();  // 0x18bb30                                // 0x0018b5ec: jal 0x18bb30
    t2 = s0 + 0x90;                                             // 0x0018b5f0: addiu $t2, $s0, 0x90
    FPU_F0 = *(float*)((s1) + 4);  // Load float                // 0x0018b5f4: lwc1 $f0, 4($s1)
    v0 = 0x4300 << 16;                                          // 0x0018b5f8: lui $v0, 0x4300
    /* move to FPU: $v0, $f1 */                                 // 0x0018b5fc: mtc1 $v0, $f1
    v0 = 0x100;                                                 // 0x0018b600: addiu $v0, $zero, 0x100
    *(float*)((s0) + 0xa0) = FPU_F0;  // Store float            // 0x0018b604: swc1 $f0, 0xa0($s0)
    FPU_F0 = *(float*)((s1) + 8);  // Load float                // 0x0018b608: lwc1 $f0, 8($s1)
    *(float*)((s0) + 0xa4) = FPU_F0;  // Store float            // 0x0018b60c: swc1 $f0, 0xa4($s0)
    FPU_F0 = *(float*)((s1) + 0xc);  // Load float              // 0x0018b610: lwc1 $f0, 0xc($s1)
    *(float*)((s0) + 0xa8) = FPU_F0;  // Store float            // 0x0018b614: swc1 $f0, 0xa8($s0)
    FPU_F0 = *(float*)((s1) + 0x10);  // Load float             // 0x0018b618: lwc1 $f0, 0x10($s1)
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0018b61c: mul.s $f0, $f1, $f0
    *(float*)((s0) + 0xac) = FPU_F0;  // Store float            // 0x0018b620: swc1 $f0, 0xac($s0)
    FPU_F0 = *(float*)((s1) + 0x24);  // Load float             // 0x0018b624: lwc1 $f0, 0x24($s1)
    *(float*)((s0) + 0xb0) = FPU_F0;  // Store float            // 0x0018b628: swc1 $f0, 0xb0($s0)
    FPU_F0 = *(float*)((s1) + 0x28);  // Load float             // 0x0018b62c: lwc1 $f0, 0x28($s1)
    *(float*)((s0) + 0xb4) = FPU_F0;  // Store float            // 0x0018b630: swc1 $f0, 0xb4($s0)
    FPU_F0 = *(float*)((s1) + 0x2c);  // Load float             // 0x0018b634: lwc1 $f0, 0x2c($s1)
    *(float*)((s0) + 0xb8) = FPU_F0;  // Store float            // 0x0018b638: swc1 $f0, 0xb8($s0)
    FPU_F0 = *(float*)((s1) + 0x30);  // Load float             // 0x0018b63c: lwc1 $f0, 0x30($s1)
    *(float*)((s0) + 0xbc) = FPU_F0;  // Store float            // 0x0018b640: swc1 $f0, 0xbc($s0)
    FPU_F0 = *(float*)((s1) + 0x14);  // Load float             // 0x0018b644: lwc1 $f0, 0x14($s1)
    *(float*)((s0) + 0xc0) = FPU_F0;  // Store float            // 0x0018b648: swc1 $f0, 0xc0($s0)
    FPU_F0 = *(float*)((s1) + 0x18);  // Load float             // 0x0018b64c: lwc1 $f0, 0x18($s1)
    *(float*)((s0) + 0xc4) = FPU_F0;  // Store float            // 0x0018b650: swc1 $f0, 0xc4($s0)
    FPU_F0 = *(float*)((s1) + 0x1c);  // Load float             // 0x0018b654: lwc1 $f0, 0x1c($s1)
    *(float*)((s0) + 0xc8) = FPU_F0;  // Store float            // 0x0018b658: swc1 $f0, 0xc8($s0)
    FPU_F0 = *(float*)((s1) + 0x20);  // Load float             // 0x0018b65c: lwc1 $f0, 0x20($s1)
    *(float*)((s0) + 0xcc) = FPU_F0;  // Store float            // 0x0018b660: swc1 $f0, 0xcc($s0)
    v1 = *(int32_t*)((s1) + 0x48);                              // 0x0018b664: lw $v1, 0x48($s1)
    if (v1 == v0) goto label_0x18b724;                          // 0x0018b668: beq $v1, $v0, 0x18b724
    v0 = 0x80;                                                  // 0x0018b66c: addiu $v0, $zero, 0x80
    if (v1 == v0) goto label_0x18b718;                          // 0x0018b670: beq $v1, $v0, 0x18b718
    /* nop */                                                   // 0x0018b674: nop 
    v0 = 0x40;                                                  // 0x0018b678: addiu $v0, $zero, 0x40
    if (v1 == v0) goto label_0x18b70c;                          // 0x0018b67c: beq $v1, $v0, 0x18b70c
    v0 = 0x20;                                                  // 0x0018b680: addiu $v0, $zero, 0x20
    if (v1 == v0) goto label_0x18b700;                          // 0x0018b684: beq $v1, $v0, 0x18b700
    /* nop */                                                   // 0x0018b688: nop 
    v0 = 0x10;                                                  // 0x0018b68c: addiu $v0, $zero, 0x10
    if (v1 == v0) goto label_0x18b6f4;                          // 0x0018b690: beq $v1, $v0, 0x18b6f4
    v0 = 8;                                                     // 0x0018b694: addiu $v0, $zero, 8
    if (v1 == v0) goto label_0x18b6e8;                          // 0x0018b698: beq $v1, $v0, 0x18b6e8
    /* nop */                                                   // 0x0018b69c: nop 
    v0 = 4;                                                     // 0x0018b6a0: addiu $v0, $zero, 4
    if (v1 == v0) goto label_0x18b6dc;                          // 0x0018b6a4: beq $v1, $v0, 0x18b6dc
    v0 = 2;                                                     // 0x0018b6a8: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x18b6d0;                          // 0x0018b6ac: beq $v1, $v0, 0x18b6d0
    /* nop */                                                   // 0x0018b6b0: nop 
    v0 = 1;                                                     // 0x0018b6b4: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x18b6d0;                          // 0x0018b6b8: beq $v1, $v0, 0x18b6d0
    /* nop */                                                   // 0x0018b6bc: nop 
    if (v1 == 0) goto label_0x18b6d0;                           // 0x0018b6c0: beqz $v1, 0x18b6d0
    /* nop */                                                   // 0x0018b6c4: nop 
    goto label_0x18b730;                                        // 0x0018b6c8: b 0x18b730
    v1 = v1 + -1;                                               // 0x0018b6cc: addiu $v1, $v1, -1
label_0x18b6d0:
    v1 = 1;                                                     // 0x0018b6d0: addiu $v1, $zero, 1
    goto label_0x18b734;                                        // 0x0018b6d4: b 0x18b734
label_0x18b6dc:
    v1 = 2;                                                     // 0x0018b6dc: addiu $v1, $zero, 2
    goto label_0x18b734;                                        // 0x0018b6e0: b 0x18b734
    v0 = 1;                                                     // 0x0018b6e4: addiu $v0, $zero, 1
label_0x18b6e8:
    v1 = 3;                                                     // 0x0018b6e8: addiu $v1, $zero, 3
    goto label_0x18b734;                                        // 0x0018b6ec: b 0x18b734
    v0 = 1;                                                     // 0x0018b6f0: addiu $v0, $zero, 1
label_0x18b6f4:
    v1 = 4;                                                     // 0x0018b6f4: addiu $v1, $zero, 4
    goto label_0x18b734;                                        // 0x0018b6f8: b 0x18b734
    v0 = 1;                                                     // 0x0018b6fc: addiu $v0, $zero, 1
label_0x18b700:
    v1 = 5;                                                     // 0x0018b700: addiu $v1, $zero, 5
    goto label_0x18b734;                                        // 0x0018b704: b 0x18b734
    v0 = 1;                                                     // 0x0018b708: addiu $v0, $zero, 1
label_0x18b70c:
    v1 = 6;                                                     // 0x0018b70c: addiu $v1, $zero, 6
    goto label_0x18b734;                                        // 0x0018b710: b 0x18b734
    v0 = 1;                                                     // 0x0018b714: addiu $v0, $zero, 1
label_0x18b718:
    v1 = 7;                                                     // 0x0018b718: addiu $v1, $zero, 7
    goto label_0x18b734;                                        // 0x0018b71c: b 0x18b734
    v0 = 1;                                                     // 0x0018b720: addiu $v0, $zero, 1
label_0x18b724:
    v1 = 8;                                                     // 0x0018b724: addiu $v1, $zero, 8
    goto label_0x18b734;                                        // 0x0018b728: b 0x18b734
    v0 = 1;                                                     // 0x0018b72c: addiu $v0, $zero, 1
label_0x18b730:
label_0x18b734:
    *(uint32_t*)((s0) + 0xd0) = v1;                             // 0x0018b734: sw $v1, 0xd0($s0)
    a0 = s0 + 0xe0;                                             // 0x0018b738: addiu $a0, $s0, 0xe0
    *(uint32_t*)((s0) + 0xd4) = v0;                             // 0x0018b73c: sw $v0, 0xd4($s0)
    *(uint32_t*)((s0) + 0xd8) = 0;                              // 0x0018b740: sw $zero, 0xd8($s0)
    func_0018c6b0();  // 0x18c690                                // 0x0018b744: jal 0x18c690
    *(uint32_t*)((s0) + 0xdc) = 0;                              // 0x0018b748: sw $zero, 0xdc($s0)
    goto label_0x18b950;                                        // 0x0018b74c: b 0x18b950
    /* nop */                                                   // 0x0018b750: nop 
    a1 = 0xa;                                                   // 0x0018b760: addiu $a1, $zero, 0xa
    func_0018c630();  // 0x18c5d0                                // 0x0018b768: jal 0x18c5d0
    a0 = s0 + 0x10;                                             // 0x0018b770: addiu $a0, $s0, 0x10
    a1 = 8;                                                     // 0x0018b774: addiu $a1, $zero, 8
    func_0018c6f0();  // 0x18c6b0                                // 0x0018b778: jal 0x18c6b0
    v0 = 0x1000 << 16;                                          // 0x0018b780: lui $v0, 0x1000
    a1 = s0 + 0x40;                                             // 0x0018b78c: addiu $a1, $s0, 0x40
    v0 = 0 | 0x8006;                                            // 0x0018b790: ori $v0, $zero, 0x8006
    a2 = s0 + 0x50;                                             // 0x0018b794: addiu $a2, $s0, 0x50
    v1 = v0 | v1;                                               // 0x0018b798: or $v1, $v0, $v1
    a3 = s0 + 0x60;                                             // 0x0018b79c: addiu $a3, $s0, 0x60
    v0 = 0xe;                                                   // 0x0018b7a0: addiu $v0, $zero, 0xe
    *(uint32_t*)((s0) + 0x38) = v0;                             // 0x0018b7a8: sw $v0, 0x38($s0)
    t0 = s0 + 0x70;                                             // 0x0018b7ac: addiu $t0, $s0, 0x70
    *(uint32_t*)((s0) + 0x3c) = 0;                              // 0x0018b7b0: sw $zero, 0x3c($s0)
    t1 = s0 + 0x80;                                             // 0x0018b7b4: addiu $t1, $s0, 0x80
    a0 = *(int32_t*)((s1) + 0x44);                              // 0x0018b7b8: lw $a0, 0x44($s1)
    func_0018bc20();  // 0x18bb30                                // 0x0018b7bc: jal 0x18bb30
    t2 = s0 + 0x90;                                             // 0x0018b7c0: addiu $t2, $s0, 0x90
    func_0018c6b0();  // 0x18c690                                // 0x0018b7c4: jal 0x18c690
    a0 = s0 + 0xa0;                                             // 0x0018b7c8: addiu $a0, $s0, 0xa0
    goto label_0x18b950;                                        // 0x0018b7cc: b 0x18b950
    /* nop */                                                   // 0x0018b7d0: nop 
    a1 = 0xb;                                                   // 0x0018b7e0: addiu $a1, $zero, 0xb
    func_0018c630();  // 0x18c5d0                                // 0x0018b7e8: jal 0x18c5d0
    a0 = s0 + 0x10;                                             // 0x0018b7f0: addiu $a0, $s0, 0x10
    a1 = 9;                                                     // 0x0018b7f4: addiu $a1, $zero, 9
    func_0018c6f0();  // 0x18c6b0                                // 0x0018b7f8: jal 0x18c6b0
    v0 = 0x1000 << 16;                                          // 0x0018b800: lui $v0, 0x1000
    a0 = 0x14;                                                  // 0x0018b80c: addiu $a0, $zero, 0x14
    v0 = 0 | 0x8006;                                            // 0x0018b810: ori $v0, $zero, 0x8006
    a2 = 6;                                                     // 0x0018b814: addiu $a2, $zero, 6
    v0 = v0 | v1;                                               // 0x0018b818: or $v0, $v0, $v1
    a1 = 8;                                                     // 0x0018b81c: addiu $a1, $zero, 8
    v1 = 0xe;                                                   // 0x0018b824: addiu $v1, $zero, 0xe
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x0018b828: sw $v1, 0x38($s0)
    v0 = 0x3b;                                                  // 0x0018b82c: addiu $v0, $zero, 0x3b
    *(uint32_t*)((s0) + 0x3c) = 0;                              // 0x0018b830: sw $zero, 0x3c($s0)
    v1 = 0x34;                                                  // 0x0018b834: addiu $v1, $zero, 0x34
    v0 = 0x36;                                                  // 0x0018b844: addiu $v0, $zero, 0x36
    a0 = s0 + 0xb0;                                             // 0x0018b850: addiu $a0, $s0, 0xb0
    func_0018c6b0();  // 0x18c690                                // 0x0018b870: jal 0x18c690
    goto label_0x18b950;                                        // 0x0018b878: b 0x18b950
    /* nop */                                                   // 0x0018b87c: nop 
    a1 = 0x10;                                                  // 0x0018b88c: addiu $a1, $zero, 0x10
    func_0018c630();  // 0x18c5d0                                // 0x0018b894: jal 0x18c5d0
    a0 = s0 + 0x10;                                             // 0x0018b89c: addiu $a0, $s0, 0x10
    a1 = 0xe;                                                   // 0x0018b8a0: addiu $a1, $zero, 0xe
    func_0018c6f0();  // 0x18c6b0                                // 0x0018b8a4: jal 0x18c6b0
    v0 = 0x1000 << 16;                                          // 0x0018b8ac: lui $v0, 0x1000
    a0 = s0 + 0xc0;                                             // 0x0018b8b8: addiu $a0, $s0, 0xc0
    v0 = 0 | 0x800b;                                            // 0x0018b8bc: ori $v0, $zero, 0x800b
    a1 = s0 + 0x40;                                             // 0x0018b8c0: addiu $a1, $s0, 0x40
    v1 = v0 | v1;                                               // 0x0018b8c4: or $v1, $v0, $v1
    a2 = s0 + 0x50;                                             // 0x0018b8c8: addiu $a2, $s0, 0x50
    v0 = 0xe;                                                   // 0x0018b8d0: addiu $v0, $zero, 0xe
    *(uint32_t*)((s0) + 0x38) = v0;                             // 0x0018b8d4: sw $v0, 0x38($s0)
    v1 = s0 + 0xa0;                                             // 0x0018b8d8: addiu $v1, $s0, 0xa0
    *(uint32_t*)((s0) + 0x3c) = 0;                              // 0x0018b8dc: sw $zero, 0x3c($s0)
    v0 = s0 + 0xb0;                                             // 0x0018b8e0: addiu $v0, $s0, 0xb0
    a3 = s0 + 0x60;                                             // 0x0018b8e8: addiu $a3, $s0, 0x60
    v1 = s0 + 0xd0;                                             // 0x0018b8f0: addiu $v1, $s0, 0xd0
    v0 = s0 + 0xe0;                                             // 0x0018b8f8: addiu $v0, $s0, 0xe0
    t0 = s0 + 0x70;                                             // 0x0018b900: addiu $t0, $s0, 0x70
    t1 = s0 + 0x80;                                             // 0x0018b908: addiu $t1, $s0, 0x80
    a0 = *(int32_t*)((s1) + 0x44);                              // 0x0018b90c: lw $a0, 0x44($s1)
    t3 = *(int32_t*)((gp) + -0x6494);                           // 0x0018b910: lw $t3, -0x6494($gp)
    func_0018be00();  // 0x18bc20                                // 0x0018b914: jal 0x18bc20
    t2 = s0 + 0x90;                                             // 0x0018b918: addiu $t2, $s0, 0x90
    FPU_F0 = *(float*)((s1) + 4);  // Load float                // 0x0018b91c: lwc1 $f0, 4($s1)
    v0 = 0x4300 << 16;                                          // 0x0018b920: lui $v0, 0x4300
    /* move to FPU: $v0, $f1 */                                 // 0x0018b924: mtc1 $v0, $f1
    a0 = s0 + 0x100;                                            // 0x0018b928: addiu $a0, $s0, 0x100
    *(float*)((s0) + 0xf0) = FPU_F0;  // Store float            // 0x0018b92c: swc1 $f0, 0xf0($s0)
    FPU_F0 = *(float*)((s1) + 8);  // Load float                // 0x0018b930: lwc1 $f0, 8($s1)
    *(float*)((s0) + 0xf4) = FPU_F0;  // Store float            // 0x0018b934: swc1 $f0, 0xf4($s0)
    FPU_F0 = *(float*)((s1) + 0xc);  // Load float              // 0x0018b938: lwc1 $f0, 0xc($s1)
    *(float*)((s0) + 0xf8) = FPU_F0;  // Store float            // 0x0018b93c: swc1 $f0, 0xf8($s0)
    FPU_F0 = *(float*)((s1) + 0x10);  // Load float             // 0x0018b940: lwc1 $f0, 0x10($s1)
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0018b944: mul.s $f0, $f1, $f0
    func_0018c6b0();  // 0x18c690                                // 0x0018b948: jal 0x18c690
    *(float*)((s0) + 0xfc) = FPU_F0;  // Store float            // 0x0018b94c: swc1 $f0, 0xfc($s0)
label_0x18b950:
label_0x18b954:
    /* FPU: xori.b $w1, $w0, 0xb1 */                            // 0x0018b954: xori.b $w1, $w0, 0xb1
    return;                                                     // 0x0018b95c: jr $ra
    sp = sp + 0x60;                                             // 0x0018b960: addiu $sp, $sp, 0x60
}