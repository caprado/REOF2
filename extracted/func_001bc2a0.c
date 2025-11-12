void func_001bc2a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001bc2a0: addiu $sp, $sp, -0x20
    a2 = g_001bae59;  // Global at 0x001bae59                   // 0x001bc2ac: lbu $a2, 9($a0)
    at = ((unsigned)a2 < (unsigned)0xc) ? 1 : 0;                // 0x001bc2b0: sltiu $at, $a2, 0xc
    if (at == 0) goto label_0x1bc68c;                           // 0x001bc2b4: beqz $at, 0x1bc68c
    a1 = 0x24 << 16;                                            // 0x001bc2bc: lui $a1, 0x24
    v1 = a2 << 2;                                               // 0x001bc2c0: sll $v1, $a2, 2
    a1 = a1 + -0x21b0;                                          // 0x001bc2c4: addiu $a1, $a1, -0x21b0
    v1 = v1 + a1;                                               // 0x001bc2c8: addu $v1, $v1, $a1
    v1 = *(int32_t*)(v1);                                       // 0x001bc2cc: lw $v1, 0($v1)
    /* jump to address in v1 */                                 // 0x001bc2d0: jr $v1
    /* nop */                                                   // 0x001bc2d4: nop 
    func_001b07d0();  // 0x1b0720                                // 0x001bc2d8: jal 0x1b0720
    /* nop */                                                   // 0x001bc2dc: nop 
    v1 = -1;                                                    // 0x001bc2e4: addiu $v1, $zero, -1
    if (a0 == v1) goto label_0x1bc68c;                          // 0x001bc2ec: beq $a0, $v1, 0x1bc68c
    /* nop */                                                   // 0x001bc2f0: nop 
    v0 = -2;                                                    // 0x001bc2f4: addiu $v0, $zero, -2
    if (a0 != v0) goto label_0x1bc31c;                          // 0x001bc2f8: bne $a0, $v0, 0x1bc31c
    v0 = 0xb;                                                   // 0x001bc2fc: addiu $v0, $zero, 0xb
    a0 = 0x1c << 16;                                            // 0x001bc300: lui $a0, 0x1c
    *(uint8_t*)((s0) + 9) = v0;                                 // 0x001bc304: sb $v0, 9($s0)
    a0 = a0 + 0x1f70;                                           // 0x001bc308: addiu $a0, $a0, 0x1f70
    func_001af2f0();  // 0x1af280                                // 0x001bc30c: jal 0x1af280
    *(uint8_t*)((s0) + 0xa) = 0;                                // 0x001bc310: sb $zero, 0xa($s0)
    goto label_0x1bc690;                                        // 0x001bc314: b 0x1bc690
    a0 = *(uint8_t*)((s0) + 9);                                 // 0x001bc318: lbu $a0, 9($s0)
label_0x1bc31c:
    a0 = 0x1c << 16;                                            // 0x001bc31c: lui $a0, 0x1c
    a1 = 0xe;                                                   // 0x001bc320: addiu $a1, $zero, 0xe
    func_001b7720();  // 0x1b76c0                                // 0x001bc324: jal 0x1b76c0
    a0 = a0 + -0x61a0;                                          // 0x001bc328: addiu $a0, $a0, -0x61a0
    v0 = *(uint8_t*)((s0) + 9);                                 // 0x001bc32c: lbu $v0, 9($s0)
    v0 = v0 + 1;                                                // 0x001bc330: addiu $v0, $v0, 1
    func_001bbf70();  // 0x1bbf40                                // 0x001bc334: jal 0x1bbf40
    *(uint8_t*)((s0) + 9) = v0;                                 // 0x001bc338: sb $v0, 9($s0)
    func_001bbfb0();  // 0x1bbf70                                // 0x001bc33c: jal 0x1bbf70
    /* nop */                                                   // 0x001bc340: nop 
    a0 = 0x1c << 16;                                            // 0x001bc344: lui $a0, 0x1c
    func_001af2f0();  // 0x1af280                                // 0x001bc348: jal 0x1af280
    a0 = a0 + -0x4050;                                          // 0x001bc34c: addiu $a0, $a0, -0x4050
    a0 = 0x1c << 16;                                            // 0x001bc350: lui $a0, 0x1c
    func_001af2f0();  // 0x1af280                                // 0x001bc354: jal 0x1af280
    a0 = a0 + -0x51b0;                                          // 0x001bc358: addiu $a0, $a0, -0x51b0
    goto label_0x1bc68c;                                        // 0x001bc35c: b 0x1bc68c
    /* nop */                                                   // 0x001bc360: nop 
    func_001bc960();  // 0x1bc750                                // 0x001bc364: jal 0x1bc750
    /* nop */                                                   // 0x001bc368: nop 
    if (v0 != 0) goto label_0x1bc68c;                           // 0x001bc36c: bnez $v0, 0x1bc68c
    /* nop */                                                   // 0x001bc370: nop 
    v1 = *(uint8_t*)((s0) + 9);                                 // 0x001bc374: lbu $v1, 9($s0)
    v0 = 0x14;                                                  // 0x001bc378: addiu $v0, $zero, 0x14
    a0 = 8;                                                     // 0x001bc37c: addiu $a0, $zero, 8
    v1 = v1 + 1;                                                // 0x001bc380: addiu $v1, $v1, 1
    *(uint8_t*)((s0) + 9) = v1;                                 // 0x001bc384: sb $v1, 9($s0)
    func_001bbab0();  // 0x1bb9e0                                // 0x001bc388: jal 0x1bb9e0
    *(uint8_t*)((s0) + 0xa) = v0;                               // 0x001bc38c: sb $v0, 0xa($s0)
    v1 = 4;                                                     // 0x001bc390: addiu $v1, $zero, 4
    at = 0x31 << 16;                                            // 0x001bc394: lui $at, 0x31
    goto label_0x1bc68c;                                        // 0x001bc398: b 0x1bc68c
    g_00313884 = v1;  // Global at 0x00313884                   // 0x001bc39c: sh $v1, 0x3884($at)
    v1 = *(uint8_t*)((s0) + 0xa);                               // 0x001bc3a0: lbu $v1, 0xa($s0)
    if (v1 == 0) goto label_0x1bc3b8;                           // 0x001bc3a4: beqz $v1, 0x1bc3b8
    v1 = v1 + -1;                                               // 0x001bc3ac: addiu $v1, $v1, -1
    goto label_0x1bc68c;                                        // 0x001bc3b0: b 0x1bc68c
    *(uint8_t*)((s0) + 0xa) = v1;                               // 0x001bc3b4: sb $v1, 0xa($s0)
label_0x1bc3b8:
    func_001c2e20();  // 0x1c2a50                                // 0x001bc3b8: jal 0x1c2a50
    v1 = 3;                                                     // 0x001bc3c0: addiu $v1, $zero, 3
    goto label_0x1bc68c;                                        // 0x001bc3c4: b 0x1bc68c
    *(uint8_t*)((s0) + 9) = v1;                                 // 0x001bc3c8: sb $v1, 9($s0)
    func_001c32d0();  // 0x1c2e20                                // 0x001bc3cc: jal 0x1c2e20
    /* nop */                                                   // 0x001bc3d0: nop 
    if (v0 != 0) goto label_0x1bc68c;                           // 0x001bc3d4: bnez $v0, 0x1bc68c
    /* nop */                                                   // 0x001bc3d8: nop 
    v0 = 0x14;                                                  // 0x001bc3dc: addiu $v0, $zero, 0x14
    a0 = 7;                                                     // 0x001bc3e0: addiu $a0, $zero, 7
    func_001bbab0();  // 0x1bb9e0                                // 0x001bc3e4: jal 0x1bb9e0
    *(uint8_t*)((s0) + 0xa) = v0;                               // 0x001bc3e8: sb $v0, 0xa($s0)
    v1 = *(uint8_t*)((s0) + 9);                                 // 0x001bc3ec: lbu $v1, 9($s0)
    v1 = v1 + 1;                                                // 0x001bc3f0: addiu $v1, $v1, 1
    goto label_0x1bc68c;                                        // 0x001bc3f4: b 0x1bc68c
    *(uint8_t*)((s0) + 9) = v1;                                 // 0x001bc3f8: sb $v1, 9($s0)
    v1 = *(uint8_t*)((s0) + 0xa);                               // 0x001bc3fc: lbu $v1, 0xa($s0)
    if (v1 == 0) goto label_0x1bc414;                           // 0x001bc400: beqz $v1, 0x1bc414
    /* nop */                                                   // 0x001bc404: nop 
    v1 = v1 + -1;                                               // 0x001bc408: addiu $v1, $v1, -1
    goto label_0x1bc68c;                                        // 0x001bc40c: b 0x1bc68c
    *(uint8_t*)((s0) + 0xa) = v1;                               // 0x001bc410: sb $v1, 0xa($s0)
label_0x1bc414:
    v1 = a2 + 1;                                                // 0x001bc414: addiu $v1, $a2, 1
    goto label_0x1bc68c;                                        // 0x001bc418: b 0x1bc68c
    *(uint8_t*)((s0) + 9) = v1;                                 // 0x001bc41c: sb $v1, 9($s0)
    func_001bc1b0();  // 0x1bc1a0                                // 0x001bc420: jal 0x1bc1a0
    /* nop */                                                   // 0x001bc424: nop 
    *(uint32_t*)((gp) + -0x6330) = 0;                           // 0x001bc428: sw $zero, -0x6330($gp)
    v0 = 3;                                                     // 0x001bc42c: addiu $v0, $zero, 3
    v1 = *(uint8_t*)((s0) + 9);                                 // 0x001bc430: lbu $v1, 9($s0)
    at = 0x31 << 16;                                            // 0x001bc434: lui $at, 0x31
    a0 = 8;                                                     // 0x001bc438: addiu $a0, $zero, 8
    v1 = v1 + 1;                                                // 0x001bc43c: addiu $v1, $v1, 1
    *(uint8_t*)((s0) + 9) = v1;                                 // 0x001bc440: sb $v1, 9($s0)
    func_001bbab0();  // 0x1bb9e0                                // 0x001bc444: jal 0x1bb9e0
    g_00313884 = v0;  // Global at 0x00313884                   // 0x001bc448: sh $v0, 0x3884($at)
    goto label_0x1bc68c;                                        // 0x001bc44c: b 0x1bc68c
    /* nop */                                                   // 0x001bc450: nop 
    func_001dbe10();  // 0x1dbdc0                                // 0x001bc454: jal 0x1dbdc0
    /* nop */                                                   // 0x001bc458: nop 
    if (v0 != 0) goto label_0x1bc470;                           // 0x001bc45c: bnez $v0, 0x1bc470
    a0 = 8;                                                     // 0x001bc460: addiu $a0, $zero, 8
    v0 = *(uint8_t*)((s0) + 9);                                 // 0x001bc464: lbu $v0, 9($s0)
    v0 = v0 + 1;                                                // 0x001bc468: addiu $v0, $v0, 1
    *(uint8_t*)((s0) + 9) = v0;                                 // 0x001bc46c: sb $v0, 9($s0)
label_0x1bc470:
    func_001bbab0();  // 0x1bb9e0                                // 0x001bc470: jal 0x1bb9e0
    /* nop */                                                   // 0x001bc474: nop 
    v1 = 0x80;                                                  // 0x001bc478: addiu $v1, $zero, 0x80
    goto label_0x1bc68c;                                        // 0x001bc47c: b 0x1bc68c
    *(uint8_t*)((s0) + 0xa) = v1;                               // 0x001bc480: sb $v1, 0xa($s0)
    v1 = *(uint8_t*)((s0) + 0xa);                               // 0x001bc484: lbu $v1, 0xa($s0)
    v1 = v1 + -1;                                               // 0x001bc488: addiu $v1, $v1, -1
    *(uint8_t*)((s0) + 0xa) = v1;                               // 0x001bc48c: sb $v1, 0xa($s0)
    v1 = v1 & 0xff;                                             // 0x001bc490: andi $v1, $v1, 0xff
    if (v1 == 0) goto label_0x1bc4bc;                           // 0x001bc494: beqz $v1, 0x1bc4bc
    /* nop */                                                   // 0x001bc498: nop 
    a0 = *(uint8_t*)((s0) + 0xa);                               // 0x001bc49c: lbu $a0, 0xa($s0)
    v1 = 0x14;                                                  // 0x001bc4a0: addiu $v1, $zero, 0x14
    if (a0 != v1) goto label_0x1bc68c;                          // 0x001bc4a4: bne $a0, $v1, 0x1bc68c
    a0 = 7;                                                     // 0x001bc4a8: addiu $a0, $zero, 7
    func_001bbab0();  // 0x1bb9e0                                // 0x001bc4ac: jal 0x1bb9e0
    /* nop */                                                   // 0x001bc4b0: nop 
    goto label_0x1bc68c;                                        // 0x001bc4b4: b 0x1bc68c
    /* nop */                                                   // 0x001bc4b8: nop 
label_0x1bc4bc:
    v1 = *(uint8_t*)((s0) + 9);                                 // 0x001bc4bc: lbu $v1, 9($s0)
    v0 = 0x80;                                                  // 0x001bc4c0: addiu $v0, $zero, 0x80
    a0 = 8;                                                     // 0x001bc4c4: addiu $a0, $zero, 8
    v1 = v1 + 1;                                                // 0x001bc4c8: addiu $v1, $v1, 1
    *(uint8_t*)((s0) + 9) = v1;                                 // 0x001bc4cc: sb $v1, 9($s0)
    func_001bbab0();  // 0x1bb9e0                                // 0x001bc4d0: jal 0x1bb9e0
    *(uint8_t*)((s0) + 0xa) = v0;                               // 0x001bc4d4: sb $v0, 0xa($s0)
    v1 = 1;                                                     // 0x001bc4d8: addiu $v1, $zero, 1
    at = 0x31 << 16;                                            // 0x001bc4dc: lui $at, 0x31
    goto label_0x1bc68c;                                        // 0x001bc4e0: b 0x1bc68c
    g_00313884 = v1;  // Global at 0x00313884                   // 0x001bc4e4: sh $v1, 0x3884($at)
    v1 = *(uint8_t*)((s0) + 0xa);                               // 0x001bc4e8: lbu $v1, 0xa($s0)
    v1 = v1 + -1;                                               // 0x001bc4ec: addiu $v1, $v1, -1
    *(uint8_t*)((s0) + 0xa) = v1;                               // 0x001bc4f0: sb $v1, 0xa($s0)
    v1 = v1 & 0xff;                                             // 0x001bc4f4: andi $v1, $v1, 0xff
    if (v1 == 0) goto label_0x1bc520;                           // 0x001bc4f8: beqz $v1, 0x1bc520
    /* nop */                                                   // 0x001bc4fc: nop 
    a0 = *(uint8_t*)((s0) + 0xa);                               // 0x001bc500: lbu $a0, 0xa($s0)
    v1 = 0x14;                                                  // 0x001bc504: addiu $v1, $zero, 0x14
    if (a0 != v1) goto label_0x1bc68c;                          // 0x001bc508: bne $a0, $v1, 0x1bc68c
    a0 = 7;                                                     // 0x001bc50c: addiu $a0, $zero, 7
    func_001bbab0();  // 0x1bb9e0                                // 0x001bc510: jal 0x1bb9e0
    /* nop */                                                   // 0x001bc514: nop 
    goto label_0x1bc68c;                                        // 0x001bc518: b 0x1bc68c
    /* nop */                                                   // 0x001bc51c: nop 
label_0x1bc520:
    v1 = *(uint8_t*)((s0) + 9);                                 // 0x001bc520: lbu $v1, 9($s0)
    v0 = 0x80;                                                  // 0x001bc524: addiu $v0, $zero, 0x80
    a0 = 8;                                                     // 0x001bc528: addiu $a0, $zero, 8
    v1 = v1 + 1;                                                // 0x001bc52c: addiu $v1, $v1, 1
    *(uint8_t*)((s0) + 9) = v1;                                 // 0x001bc530: sb $v1, 9($s0)
    func_001bbab0();  // 0x1bb9e0                                // 0x001bc534: jal 0x1bb9e0
    *(uint8_t*)((s0) + 0xa) = v0;                               // 0x001bc538: sb $v0, 0xa($s0)
    v1 = 2;                                                     // 0x001bc53c: addiu $v1, $zero, 2
    at = 0x31 << 16;                                            // 0x001bc540: lui $at, 0x31
    goto label_0x1bc68c;                                        // 0x001bc544: b 0x1bc68c
    g_00313884 = v1;  // Global at 0x00313884                   // 0x001bc548: sh $v1, 0x3884($at)
    v1 = *(uint8_t*)((s0) + 0xa);                               // 0x001bc54c: lbu $v1, 0xa($s0)
    v1 = v1 + -1;                                               // 0x001bc550: addiu $v1, $v1, -1
    *(uint8_t*)((s0) + 0xa) = v1;                               // 0x001bc554: sb $v1, 0xa($s0)
    v1 = v1 & 0xff;                                             // 0x001bc558: andi $v1, $v1, 0xff
    if (v1 == 0) goto label_0x1bc584;                           // 0x001bc55c: beqz $v1, 0x1bc584
    /* nop */                                                   // 0x001bc560: nop 
    a0 = *(uint8_t*)((s0) + 0xa);                               // 0x001bc564: lbu $a0, 0xa($s0)
    v1 = 0x14;                                                  // 0x001bc568: addiu $v1, $zero, 0x14
    if (a0 != v1) goto label_0x1bc68c;                          // 0x001bc56c: bne $a0, $v1, 0x1bc68c
    a0 = 7;                                                     // 0x001bc570: addiu $a0, $zero, 7
    func_001bbab0();  // 0x1bb9e0                                // 0x001bc574: jal 0x1bb9e0
    /* nop */                                                   // 0x001bc578: nop 
    goto label_0x1bc68c;                                        // 0x001bc57c: b 0x1bc68c
    /* nop */                                                   // 0x001bc580: nop 
label_0x1bc584:
    v1 = *(uint8_t*)((s0) + 9);                                 // 0x001bc584: lbu $v1, 9($s0)
    at = 0x31 << 16;                                            // 0x001bc588: lui $at, 0x31
    v1 = v1 + 1;                                                // 0x001bc58c: addiu $v1, $v1, 1
    *(uint8_t*)((s0) + 9) = v1;                                 // 0x001bc590: sb $v1, 9($s0)
    goto label_0x1bc68c;                                        // 0x001bc594: b 0x1bc68c
    g_00313884 = 0;  // Global at 0x00313884                    // 0x001bc598: sh $zero, 0x3884($at)
    v0 = *(int32_t*)((gp) + -0x6330);                           // 0x001bc59c: lw $v0, -0x6330($gp)
    if (v0 != 0) goto label_0x1bc5b8;                           // 0x001bc5a0: bnez $v0, 0x1bc5b8
    a0 = 0x1c << 16;                                            // 0x001bc5a4: lui $a0, 0x1c
    func_001bc200();  // 0x1bc1b0                                // 0x001bc5a8: jal 0x1bc1b0
    /* nop */                                                   // 0x001bc5ac: nop 
    goto label_0x1bc6b0;                                        // 0x001bc5b0: b 0x1bc6b0
label_0x1bc5b8:
    func_001af3a0();  // 0x1af2f0                                // 0x001bc5b8: jal 0x1af2f0
    a0 = a0 + -0x4050;                                          // 0x001bc5bc: addiu $a0, $a0, -0x4050
    a0 = 0x1c << 16;                                            // 0x001bc5c0: lui $a0, 0x1c
    func_001af3a0();  // 0x1af2f0                                // 0x001bc5c4: jal 0x1af2f0
    a0 = a0 + -0x51b0;                                          // 0x001bc5c8: addiu $a0, $a0, -0x51b0
    func_001ba590();  // 0x1ba3c0                                // 0x001bc5cc: jal 0x1ba3c0
    /* nop */                                                   // 0x001bc5d0: nop 
    func_001bbb80();  // 0x1bbab0                                // 0x001bc5d4: jal 0x1bbab0
    /* nop */                                                   // 0x001bc5d8: nop 
    func_001b7970();  // 0x1b7940                                // 0x001bc5dc: jal 0x1b7940
    /* nop */                                                   // 0x001bc5e0: nop 
    func_001b77f0();  // 0x1b7790                                // 0x001bc5e4: jal 0x1b7790
    goto label_0x1bc68c;                                        // 0x001bc5ec: b 0x1bc68c
    /* nop */                                                   // 0x001bc5f0: nop 
    v0 = *(uint8_t*)((s0) + 0xa);                               // 0x001bc5f4: lbu $v0, 0xa($s0)
    if (v0 != 0) goto label_0x1bc618;                           // 0x001bc5f8: bnez $v0, 0x1bc618
    at = 0x31 << 16;                                            // 0x001bc5fc: lui $at, 0x31
    func_001b0d20();  // 0x1b0ce0                                // 0x001bc600: jal 0x1b0ce0
    /* nop */                                                   // 0x001bc604: nop 
    if (v0 == 0) goto label_0x1bc68c;                           // 0x001bc608: beqz $v0, 0x1bc68c
    v1 = 1;                                                     // 0x001bc60c: addiu $v1, $zero, 1
    goto label_0x1bc68c;                                        // 0x001bc610: b 0x1bc68c
    *(uint8_t*)((s0) + 0xa) = v1;                               // 0x001bc614: sb $v1, 0xa($s0)
label_0x1bc618:
    v0 = g_003136e0;  // Global at 0x003136e0                   // 0x001bc618: lw $v0, 0x36e0($at)
    v0 = v0 & 0x20;                                             // 0x001bc61c: andi $v0, $v0, 0x20
    if (v0 == 0) goto label_0x1bc678;                           // 0x001bc620: beqz $v0, 0x1bc678
    a0 = 0x1c << 16;                                            // 0x001bc624: lui $a0, 0x1c
    a1 = 0xe;                                                   // 0x001bc628: addiu $a1, $zero, 0xe
    func_001b7720();  // 0x1b76c0                                // 0x001bc62c: jal 0x1b76c0
    a0 = a0 + -0x61a0;                                          // 0x001bc630: addiu $a0, $a0, -0x61a0
    v0 = 1;                                                     // 0x001bc634: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 9) = v0;                                 // 0x001bc638: sb $v0, 9($s0)
    func_001bbfb0();  // 0x1bbf70                                // 0x001bc63c: jal 0x1bbf70
    *(uint8_t*)((s0) + 0xa) = 0;                                // 0x001bc640: sb $zero, 0xa($s0)
    func_001bbf70();  // 0x1bbf40                                // 0x001bc644: jal 0x1bbf40
    /* nop */                                                   // 0x001bc648: nop 
    a0 = 0x1c << 16;                                            // 0x001bc64c: lui $a0, 0x1c
    func_001af3a0();  // 0x1af2f0                                // 0x001bc650: jal 0x1af2f0
    a0 = a0 + 0x1f70;                                           // 0x001bc654: addiu $a0, $a0, 0x1f70
    a0 = 0x1c << 16;                                            // 0x001bc658: lui $a0, 0x1c
    func_001af2f0();  // 0x1af280                                // 0x001bc65c: jal 0x1af280
    a0 = a0 + -0x4050;                                          // 0x001bc660: addiu $a0, $a0, -0x4050
    a0 = 0x1c << 16;                                            // 0x001bc664: lui $a0, 0x1c
    func_001af2f0();  // 0x1af280                                // 0x001bc668: jal 0x1af280
    a0 = a0 + -0x51b0;                                          // 0x001bc66c: addiu $a0, $a0, -0x51b0
    goto label_0x1bc68c;                                        // 0x001bc670: b 0x1bc68c
    /* nop */                                                   // 0x001bc674: nop 
label_0x1bc678:
    func_001b0d20();  // 0x1b0ce0                                // 0x001bc678: jal 0x1b0ce0
    /* nop */                                                   // 0x001bc67c: nop 
    if (v0 != 0) goto label_0x1bc68c;                           // 0x001bc680: bnez $v0, 0x1bc68c
    /* nop */                                                   // 0x001bc684: nop 
    *(uint8_t*)((s0) + 0xa) = 0;                                // 0x001bc688: sb $zero, 0xa($s0)
label_0x1bc68c:
    a0 = *(uint8_t*)((s0) + 9);                                 // 0x001bc68c: lbu $a0, 9($s0)
label_0x1bc690:
    v1 = (a0 < 7) ? 1 : 0;                                      // 0x001bc690: slti $v1, $a0, 7
    if (v1 != 0) goto label_0x1bc6ac;                           // 0x001bc694: bnez $v1, 0x1bc6ac
    at = (a0 < 0xa) ? 1 : 0;                                    // 0x001bc698: slti $at, $a0, 0xa
    if (at == 0) goto label_0x1bc6ac;                           // 0x001bc69c: beqz $at, 0x1bc6ac
    /* nop */                                                   // 0x001bc6a0: nop 
    func_001bc200();  // 0x1bc1b0                                // 0x001bc6a4: jal 0x1bc1b0
    /* nop */                                                   // 0x001bc6a8: nop 
label_0x1bc6ac:
label_0x1bc6b0:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bc6b0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bc6b4: jr $ra
    sp = sp + 0x20;                                             // 0x001bc6b8: addiu $sp, $sp, 0x20
}