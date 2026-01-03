void func_001db2e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xf0;                                            // 0x001db2e0: addiu $sp, $sp, -0xf0
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001db2e8: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001db2f0: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001db2f8: addu.qb $zero, $sp, $s1
    s1 = 0x31 << 16;                                            // 0x001db2fc: lui $s1, 0x31
    func_00692860();  // 0x692860                               // 0x001db304: jal 0x692860
    s1 = s1 + 0x37a0;                                           // 0x001db308: addiu $s1, $s1, 0x37a0
    at = 0x49 << 16;                                            // 0x001db30c: lui $at, 0x49
    v1 = g_00490104;  // Global at 0x00490104                   // 0x001db314: lbu $v1, 0x104($at)
    if (v1 == s0) goto label_0x1db6d8;                          // 0x001db318: beq $v1, $s0, 0x1db6d8
    /* nop */                                                   // 0x001db31c: nop 
    func_00692b90();  // 0x692b90                               // 0x001db320: jal 0x692b90
    /* nop */                                                   // 0x001db324: nop 
    if (s0 < 0) goto label_0x1db6d8;                            // 0x001db328: bltz $s0, 0x1db6d8
    at = 0x31 << 16;                                            // 0x001db32c: lui $at, 0x31
    v0 = g_00313828;  // Global at 0x00313828                   // 0x001db334: lw $v0, 0x3828($at)
    s5 = sp + 0x70;                                             // 0x001db338: addiu $s5, $sp, 0x70
    goto label_0x1db44c;                                        // 0x001db33c: b 0x1db44c
    s3 = v0 + 0x6000;                                           // 0x001db340: addiu $s3, $v0, 0x6000
label_0x1db344:
    v0 = 0x48 << 16;                                            // 0x001db344: lui $v0, 0x48
    v1 = v1 + s4;                                               // 0x001db348: addu $v1, $v1, $s4
    v0 = v0 + -0x42d0;                                          // 0x001db34c: addiu $v0, $v0, -0x42d0
    v1 = v1 << 8;                                               // 0x001db350: sll $v1, $v1, 8
    a0 = v0 + v1;                                               // 0x001db354: addu $a0, $v0, $v1
    v0 = *(uint16_t*)((a0) + 0xbc8);                            // 0x001db358: lhu $v0, 0xbc8($a0)
    if (v0 == 0) goto label_0x1db38c;                           // 0x001db35c: beqz $v0, 0x1db38c
    v1 = v0 & 0xffff;                                           // 0x001db360: andi $v1, $v0, 0xffff
    v0 = 0x5b;                                                  // 0x001db364: addiu $v0, $zero, 0x5b
    if (v1 != v0) goto label_0x1db37c;                          // 0x001db368: bne $v1, $v0, 0x1db37c
    /* nop */                                                   // 0x001db36c: nop 
    t1 = *(uint8_t*)((a0) + 0xbb0);                             // 0x001db370: lbu $t1, 0xbb0($a0)
    goto label_0x1db394;                                        // 0x001db374: b 0x1db394
    s2 = a0 + 0xbb0;                                            // 0x001db378: addiu $s2, $a0, 0xbb0
label_0x1db37c:
    v0 = *(uint8_t*)((a0) + 0xbb0);                             // 0x001db37c: lbu $v0, 0xbb0($a0)
    s2 = a0 + 0xbb0;                                            // 0x001db380: addiu $s2, $a0, 0xbb0
    goto label_0x1db394;                                        // 0x001db384: b 0x1db394
    t1 = v0 + 9;                                                // 0x001db388: addiu $t1, $v0, 9
label_0x1db38c:
    t1 = *(uint8_t*)((a0) + 0xbb0);                             // 0x001db38c: lbu $t1, 0xbb0($a0)
    s2 = a0 + 0xbb0;                                            // 0x001db390: addiu $s2, $a0, 0xbb0
label_0x1db394:
    at = 0x31 << 16;                                            // 0x001db394: lui $at, 0x31
    v0 = g_003137b7;  // Global at 0x003137b7                   // 0x001db398: lb $v0, 0x37b7($at)
    if (v0 != 0) goto label_0x1db3c8;                           // 0x001db39c: bnez $v0, 0x1db3c8
    /* nop */                                                   // 0x001db3a0: nop 
    a2 = g_003137ba;  // Global at 0x003137ba                   // 0x001db3a4: lhu $a2, 0x1a($s1)
    a1 = 0x24 << 16;                                            // 0x001db3a8: lui $a1, 0x24
    a0 = sp + 0x70;                                             // 0x001db3ac: addiu $a0, $sp, 0x70
    a1 = &str_00247b10;  // "sp%02d%02d%02d.bin"                // 0x001db3b0: addiu $a1, $a1, 0x7b10
    func_0010a4d8();  // 10a4d8                                // 0x001db3b8: jal 0x10a4d8
    goto label_0x1db3e8;                                        // 0x001db3c0: b 0x1db3e8
    v0 = 1 << 16;                                               // 0x001db3c4: lui $v0, 1
label_0x1db3c8:
    a2 = g_003137ba;  // Global at 0x003137ba                   // 0x001db3c8: lhu $a2, 0x1a($s1)
    a1 = 0x24 << 16;                                            // 0x001db3cc: lui $a1, 0x24
    a0 = sp + 0x70;                                             // 0x001db3d4: addiu $a0, $sp, 0x70
    a1 = &str_00247b40;  // "data/rom/scene/spk/r%03d/sp%02d%02d08.bin" // 0x001db3d8: addiu $a1, $a1, 0x7b40
    func_0010a4d8();  // 10a4d8                                // 0x001db3dc: jal 0x10a4d8
    v0 = 1 << 16;                                               // 0x001db3e4: lui $v0, 1
label_0x1db3e8:
    func_001d3390();  // 1d3390                                // 0x001db3f4: jal 0x1d3390
    a2 = v0 | 1;                                                // 0x001db3f8: ori $a2, $v0, 1
    if (v0 <= 0) goto label_0x1db414;                           // 0x001db3fc: blez $v0, 0x1db414
    at = 1 << 16;                                               // 0x001db400: lui $at, 1
    at = at | 0x2801;                                           // 0x001db404: ori $at, $at, 0x2801
    at = (v0 < at) ? 1 : 0;                                     // 0x001db408: slt $at, $v0, $at
    if (at != 0) goto label_0x1db430;                           // 0x001db40c: bnez $at, 0x1db430
label_0x1db414:
    v1 = *(uint8_t*)(s2);                                       // 0x001db414: lbu $v1, 0($s2)
    v0 = 0x76 << 16;                                            // 0x001db418: lui $v0, 0x76
    v0 = v0 + -0x540;                                           // 0x001db41c: addiu $v0, $v0, -0x540
    a0 = 0xff;                                                  // 0x001db420: addiu $a0, $zero, 0xff
    v0 = v0 + v1;                                               // 0x001db424: addu $v0, $v0, $v1
    goto label_0x1db43c;                                        // 0x001db428: b 0x1db43c
    g_007604f4 = a0;  // Global at 0x007604f4                   // 0x001db42c: sb $a0, 0xa34($v0)
label_0x1db430:
    func_006927d0();  // 0x6927d0                               // 0x001db434: jal 0x6927d0
label_0x1db43c:
    v0 = 1 << 16;                                               // 0x001db43c: lui $v0, 1
    s4 = s4 + 1;                                                // 0x001db440: addiu $s4, $s4, 1
    v0 = v0 | 0x2800;                                           // 0x001db444: ori $v0, $v0, 0x2800
    s3 = s3 + v0;                                               // 0x001db448: addu $s3, $s3, $v0
label_0x1db44c:
    v0 = *(int32_t*)((gp) + -0x6124);                           // 0x001db44c: lw $v0, -0x6124($gp)
    v0 = (s4 < v0) ? 1 : 0;                                     // 0x001db450: slt $v0, $s4, $v0
    if (v0 != 0) goto label_0x1db344;                           // 0x001db454: bnez $v0, 0x1db344
    v1 = s4 << 4;                                               // 0x001db458: sll $v1, $s4, 4
    at = 0x31 << 16;                                            // 0x001db45c: lui $at, 0x31
    v1 = g_00313828;  // Global at 0x00313828                   // 0x001db460: lw $v1, 0x3828($at)
    at = 0x31 << 16;                                            // 0x001db464: lui $at, 0x31
    v0 = g_003137b7;  // Global at 0x003137b7                   // 0x001db468: lb $v0, 0x37b7($at)
    if (v0 != 0) goto label_0x1db498;                           // 0x001db46c: bnez $v0, 0x1db498
    s2 = v1 + 0x6000;                                           // 0x001db470: addiu $s2, $v1, 0x6000
    a2 = g_003137ba;  // Global at 0x003137ba                   // 0x001db474: lhu $a2, 0x1a($s1)
    a1 = 0x24 << 16;                                            // 0x001db478: lui $a1, 0x24
    a0 = sp + 0x70;                                             // 0x001db47c: addiu $a0, $sp, 0x70
    a1 = &str_00247b60;  // "sp%02d%02d08.bin"                  // 0x001db480: addiu $a1, $a1, 0x7b60
    func_0010a4d8();  // 10a4d8                                // 0x001db488: jal 0x10a4d8
    goto label_0x1db4b4;                                        // 0x001db490: b 0x1db4b4
    v0 = 4 << 16;                                               // 0x001db494: lui $v0, 4
label_0x1db498:
    a2 = g_003137ba;  // Global at 0x003137ba                   // 0x001db498: lhu $a2, 0x1a($s1)
    a1 = 0x24 << 16;                                            // 0x001db49c: lui $a1, 0x24
    a0 = sp + 0x70;                                             // 0x001db4a0: addiu $a0, $sp, 0x70
    a1 = &str_00247b90;  // "data/rom/scene/spk/r%03d/spm%02d%02d%02d.bin" // 0x001db4a4: addiu $a1, $a1, 0x7b90
    func_0010a4d8();  // 10a4d8                                // 0x001db4a8: jal 0x10a4d8
    v0 = 4 << 16;                                               // 0x001db4b0: lui $v0, 4
label_0x1db4b4:
    v1 = v0 | 0xa000;                                           // 0x001db4b8: ori $v1, $v0, 0xa000
    v0 = 1 << 16;                                               // 0x001db4c0: lui $v0, 1
    a1 = s2 + v1;                                               // 0x001db4c4: addu $a1, $s2, $v1
    func_001d3390();  // 1d3390                                // 0x001db4c8: jal 0x1d3390
    a2 = v0 | 1;                                                // 0x001db4cc: ori $a2, $v0, 1
    if (v0 <= 0) goto label_0x1db500;                           // 0x001db4d0: blez $v0, 0x1db500
    /* nop */                                                   // 0x001db4d4: nop 
    at = 0 | 0xc000;                                            // 0x001db4d8: ori $at, $zero, 0xc000
    at = (v0 < at) ? 1 : 0;                                     // 0x001db4dc: slt $at, $v0, $at
    if (at == 0) goto label_0x1db500;                           // 0x001db4e0: beqz $at, 0x1db500
    /* nop */                                                   // 0x001db4e4: nop 
    v0 = 4 << 16;                                               // 0x001db4e8: lui $v0, 4
    v0 = v0 | 0xa000;                                           // 0x001db4f0: ori $v0, $v0, 0xa000
    a2 = 4;                                                     // 0x001db4f4: addiu $a2, $zero, 4
    func_006927d0();  // 0x6927d0                               // 0x001db4f8: jal 0x6927d0
    a0 = s2 + v0;                                               // 0x001db4fc: addu $a0, $s2, $v0
label_0x1db500:
    at = 0x31 << 16;                                            // 0x001db500: lui $at, 0x31
    v0 = 5 << 16;                                               // 0x001db504: lui $v0, 5
    v1 = g_00313828;  // Global at 0x00313828                   // 0x001db508: lw $v1, 0x3828($at)
    v0 = v0 | 0xc000;                                           // 0x001db50c: ori $v0, $v0, 0xc000
    goto label_0x1db61c;                                        // 0x001db514: b 0x1db61c
    s3 = v1 + v0;                                               // 0x001db518: addu $s3, $v1, $v0
label_0x1db51c:
    v0 = 0x48 << 16;                                            // 0x001db51c: lui $v0, 0x48
    v1 = v1 + s2;                                               // 0x001db520: addu $v1, $v1, $s2
    v0 = v0 + -0x42d0;                                          // 0x001db524: addiu $v0, $v0, -0x42d0
    v1 = v1 << 8;                                               // 0x001db528: sll $v1, $v1, 8
    a0 = v0 + v1;                                               // 0x001db52c: addu $a0, $v0, $v1
    v0 = *(uint16_t*)((a0) + 0xbc8);                            // 0x001db530: lhu $v0, 0xbc8($a0)
    if (v0 == 0) goto label_0x1db564;                           // 0x001db534: beqz $v0, 0x1db564
    v1 = v0 & 0xffff;                                           // 0x001db538: andi $v1, $v0, 0xffff
    v0 = 0x5b;                                                  // 0x001db53c: addiu $v0, $zero, 0x5b
    if (v1 != v0) goto label_0x1db554;                          // 0x001db540: bne $v1, $v0, 0x1db554
    /* nop */                                                   // 0x001db544: nop 
    t1 = *(uint8_t*)((a0) + 0xbb0);                             // 0x001db548: lbu $t1, 0xbb0($a0)
    goto label_0x1db56c;                                        // 0x001db54c: b 0x1db56c
    s4 = a0 + 0xbb0;                                            // 0x001db550: addiu $s4, $a0, 0xbb0
label_0x1db554:
    v0 = *(uint8_t*)((a0) + 0xbb0);                             // 0x001db554: lbu $v0, 0xbb0($a0)
    s4 = a0 + 0xbb0;                                            // 0x001db558: addiu $s4, $a0, 0xbb0
    goto label_0x1db56c;                                        // 0x001db55c: b 0x1db56c
    t1 = v0 + 9;                                                // 0x001db560: addiu $t1, $v0, 9
label_0x1db564:
    t1 = *(uint8_t*)((a0) + 0xbb0);                             // 0x001db564: lbu $t1, 0xbb0($a0)
    s4 = a0 + 0xbb0;                                            // 0x001db568: addiu $s4, $a0, 0xbb0
label_0x1db56c:
    at = 0x31 << 16;                                            // 0x001db56c: lui $at, 0x31
    v0 = g_003137b7;  // Global at 0x003137b7                   // 0x001db570: lb $v0, 0x37b7($at)
    if (v0 != 0) goto label_0x1db5a0;                           // 0x001db574: bnez $v0, 0x1db5a0
    /* nop */                                                   // 0x001db578: nop 
    a2 = g_003137ba;  // Global at 0x003137ba                   // 0x001db57c: lhu $a2, 0x1a($s1)
    a1 = 0x24 << 16;                                            // 0x001db580: lui $a1, 0x24
    a0 = sp + 0x70;                                             // 0x001db584: addiu $a0, $sp, 0x70
    a1 = &str_00247bb0;  // "spm%02d%02d%02d.bin"               // 0x001db588: addiu $a1, $a1, 0x7bb0
    func_0010a4d8();  // 10a4d8                                // 0x001db590: jal 0x10a4d8
    goto label_0x1db5c0;                                        // 0x001db598: b 0x1db5c0
    v0 = 1 << 16;                                               // 0x001db59c: lui $v0, 1
label_0x1db5a0:
    a2 = g_003137ba;  // Global at 0x003137ba                   // 0x001db5a0: lhu $a2, 0x1a($s1)
    a1 = 0x24 << 16;                                            // 0x001db5a4: lui $a1, 0x24
    a0 = sp + 0x70;                                             // 0x001db5ac: addiu $a0, $sp, 0x70
    a1 = &str_00247be0;  // "data/rom/scene/spk/r%03d/spm%02d%02d08.bin" // 0x001db5b0: addiu $a1, $a1, 0x7be0
    func_0010a4d8();  // 10a4d8                                // 0x001db5b4: jal 0x10a4d8
    v0 = 1 << 16;                                               // 0x001db5bc: lui $v0, 1
label_0x1db5c0:
    func_001d3390();  // 1d3390                                // 0x001db5cc: jal 0x1d3390
    a2 = v0 | 1;                                                // 0x001db5d0: ori $a2, $v0, 1
    if (v0 <= 0) goto label_0x1db5e8;                           // 0x001db5d4: blez $v0, 0x1db5e8
    at = 0 | 0x8001;                                            // 0x001db5d8: ori $at, $zero, 0x8001
    at = (v0 < at) ? 1 : 0;                                     // 0x001db5dc: slt $at, $v0, $at
    if (at != 0) goto label_0x1db604;                           // 0x001db5e0: bnez $at, 0x1db604
label_0x1db5e8:
    v1 = *(uint8_t*)(s4);                                       // 0x001db5e8: lbu $v1, 0($s4)
    v0 = 0x76 << 16;                                            // 0x001db5ec: lui $v0, 0x76
    v0 = v0 + -0x540;                                           // 0x001db5f0: addiu $v0, $v0, -0x540
    a0 = 0xff;                                                  // 0x001db5f4: addiu $a0, $zero, 0xff
    v0 = v0 + v1;                                               // 0x001db5f8: addu $v0, $v0, $v1
    goto label_0x1db610;                                        // 0x001db5fc: b 0x1db610
    g_007604f4 = a0;  // Global at 0x007604f4                   // 0x001db600: sb $a0, 0xa34($v0)
label_0x1db604:
    a1 = 1;                                                     // 0x001db604: addiu $a1, $zero, 1
    func_006927d0();  // 0x6927d0                               // 0x001db608: jal 0x6927d0
label_0x1db610:
    v0 = s3 + 0x7fff;                                           // 0x001db610: addiu $v0, $s3, 0x7fff
    s2 = s2 + 1;                                                // 0x001db614: addiu $s2, $s2, 1
    s3 = v0 + 1;                                                // 0x001db618: addiu $s3, $v0, 1
label_0x1db61c:
    v0 = *(int32_t*)((gp) + -0x6124);                           // 0x001db61c: lw $v0, -0x6124($gp)
    v0 = (s2 < v0) ? 1 : 0;                                     // 0x001db620: slt $v0, $s2, $v0
    if (v0 != 0) goto label_0x1db51c;                           // 0x001db624: bnez $v0, 0x1db51c
    v1 = s2 << 4;                                               // 0x001db628: sll $v1, $s2, 4
    at = 0x31 << 16;                                            // 0x001db62c: lui $at, 0x31
    v0 = 5 << 16;                                               // 0x001db630: lui $v0, 5
    a0 = g_00313828;  // Global at 0x00313828                   // 0x001db634: lw $a0, 0x3828($at)
    v1 = v0 | 0xc000;                                           // 0x001db638: ori $v1, $v0, 0xc000
    at = 0x31 << 16;                                            // 0x001db63c: lui $at, 0x31
    v0 = g_003137b7;  // Global at 0x003137b7                   // 0x001db640: lb $v0, 0x37b7($at)
    if (v0 != 0) goto label_0x1db670;                           // 0x001db644: bnez $v0, 0x1db670
    s2 = a0 + v1;                                               // 0x001db648: addu $s2, $a0, $v1
    a2 = g_003137ba;  // Global at 0x003137ba                   // 0x001db64c: lhu $a2, 0x1a($s1)
    a1 = 0x24 << 16;                                            // 0x001db650: lui $a1, 0x24
    a0 = sp + 0x70;                                             // 0x001db654: addiu $a0, $sp, 0x70
    a1 = &str_00247c00;  // "spm%02d%02d08.bin"                 // 0x001db658: addiu $a1, $a1, 0x7c00
    func_0010a4d8();  // 10a4d8                                // 0x001db660: jal 0x10a4d8
    goto label_0x1db68c;                                        // 0x001db668: b 0x1db68c
    v0 = 2 << 16;                                               // 0x001db66c: lui $v0, 2
label_0x1db670:
    a2 = g_003137ba;  // Global at 0x003137ba                   // 0x001db670: lhu $a2, 0x1a($s1)
    a1 = 0x24 << 16;                                            // 0x001db674: lui $a1, 0x24
    a0 = sp + 0x70;                                             // 0x001db678: addiu $a0, $sp, 0x70
    a1 = &str_00247c30;  // "data/rom/scene/rtp/r%02d.rtp"      // 0x001db67c: addiu $a1, $a1, 0x7c30
    func_0010a4d8();  // 10a4d8                                // 0x001db680: jal 0x10a4d8
    v0 = 2 << 16;                                               // 0x001db688: lui $v0, 2
label_0x1db68c:
    a1 = s2 + v0;                                               // 0x001db690: addu $a1, $s2, $v0
    v0 = 1 << 16;                                               // 0x001db698: lui $v0, 1
    func_001d3390();  // 1d3390                                // 0x001db69c: jal 0x1d3390
    a2 = v0 | 1;                                                // 0x001db6a0: ori $a2, $v0, 1
    if (v0 <= 0) goto label_0x1db6d0;                           // 0x001db6a4: blez $v0, 0x1db6d0
    /* nop */                                                   // 0x001db6a8: nop 
    at = 0 | 0x8000;                                            // 0x001db6ac: ori $at, $zero, 0x8000
    at = (v0 < at) ? 1 : 0;                                     // 0x001db6b0: slt $at, $v0, $at
    if (at == 0) goto label_0x1db6d0;                           // 0x001db6b4: beqz $at, 0x1db6d0
    /* nop */                                                   // 0x001db6b8: nop 
    v0 = 2 << 16;                                               // 0x001db6bc: lui $v0, 2
    a1 = 1;                                                     // 0x001db6c0: addiu $a1, $zero, 1
    a0 = s2 + v0;                                               // 0x001db6c4: addu $a0, $s2, $v0
    func_006927d0();  // 0x6927d0                               // 0x001db6c8: jal 0x6927d0
    a2 = 4;                                                     // 0x001db6cc: addiu $a2, $zero, 4
label_0x1db6d0:
    at = 0x49 << 16;                                            // 0x001db6d0: lui $at, 0x49
    g_00490104 = s0;  // Global at 0x00490104                   // 0x001db6d4: sb $s0, 0x104($at)
label_0x1db6d8:
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001db6dc: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001db6e0: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001db6e8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001db6ec: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001db6f0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001db6f4: jr $ra
    sp = sp + 0xf0;                                             // 0x001db6f8: addiu $sp, $sp, 0xf0
}