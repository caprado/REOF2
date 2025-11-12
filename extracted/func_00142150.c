void func_00142150() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_18, local_20, local_24, local_28, local_2c, local_30;
    uint32_t local_34, local_38, local_3c, local_40, local_8;
    
    sp = sp + -0xf0;                                            // 0x00142150: addiu $sp, $sp, -0xf0
    v1 = 0x140;                                                 // 0x00142154: addiu $v1, $zero, 0x140
    s3 = 1;                                                     // 0x00142180: addiu $s3, $zero, 1
    v0 = *(int32_t*)((s1) + 0x828);                             // 0x001421a0: lw $v0, 0x828($s1)
    local_40 = a3;                                              // 0x001421a4: sw $a3, 0x40($sp)
    t4 = a3 & 8;                                                // 0x001421ac: andi $t4, $a3, 8
    v0 = a0 + s1;                                               // 0x001421b0: addu $v0, $a0, $s1
    if (t4 != 0) goto label_0x1421cc;                           // 0x001421b4: bnez $t4, 0x1421cc
    *(uint32_t*)((v0) + 0x6d4) = 0;                             // 0x001421b8: sw $zero, 0x6d4($v0)
    v1 = *(int32_t*)((s1) + 0x168);                             // 0x001421bc: lw $v1, 0x168($s1)
    v0 = 2;                                                     // 0x001421c0: addiu $v0, $zero, 2
    if (v1 != v0) goto label_0x142638;                          // 0x001421c4: bne $v1, $v0, 0x142638
    a0 = local_40;                                              // 0x001421c8: lw $a0, 0x40($sp)
label_0x1421cc:
    v1 = *(int32_t*)((s1) + 0x18c);                             // 0x001421cc: lw $v1, 0x18c($s1)
    v0 = 3;                                                     // 0x001421d0: addiu $v0, $zero, 3
    if (v1 != v0) goto label_0x1423e4;                          // 0x001421d4: bne $v1, $v0, 0x1423e4
    v0 = v1 ^ 2;                                                // 0x001421d8: xori $v0, $v1, 2
    v0 = 2;                                                     // 0x001421dc: addiu $v0, $zero, 2
    if (s4 == v0) goto label_0x1421f4;                          // 0x001421e0: beql $s4, $v0, 0x1421f4
    v0 = *(int32_t*)(s2);                                       // 0x001421e4: lw $v0, 0($s2)
    if (t4 != 0) goto label_0x142228;                           // 0x001421e8: bnez $t4, 0x142228
    /* nop */                                                   // 0x001421ec: nop 
    v0 = *(int32_t*)(s2);                                       // 0x001421f0: lw $v0, 0($s2)
label_0x1421f4:
    v1 = *(int32_t*)((s2) + 4);                                 // 0x001421f8: lw $v1, 4($s2)
    a1 = *(int32_t*)((s1) + 0x1d0);                             // 0x00142200: lw $a1, 0x1d0($s1)
    local_0 = v0;                                               // 0x00142208: sw $v0, 0($sp)
    local_8 = v1;                                               // 0x00142210: sw $v1, 8($sp)
    t1 = 0x10;                                                  // 0x00142214: addiu $t1, $zero, 0x10
    local_10 = 0;                                               // 0x00142218: sw $zero, 0x10($sp)
    goto label_0x142610;                                        // 0x00142220: b 0x142610
    local_18 = 0;                                               // 0x00142224: sw $zero, 0x18($sp)
label_0x142228:
    if (s4 != s3) goto label_0x1422b4;                          // 0x00142228: bne $s4, $s3, 0x1422b4
    v0 = *(int32_t*)((s2) + 4);                                 // 0x00142230: lw $v0, 4($s2)
    v1 = *(int32_t*)(s2);                                       // 0x00142234: lw $v1, 0($s2)
    a1 = *(int32_t*)((s1) + 0x1d0);                             // 0x0014223c: lw $a1, 0x1d0($s1)
    v0 = v0 >> 1;                                               // 0x00142240: sra $v0, $v0, 1
    a2 = *(int32_t*)(fp);                                       // 0x00142244: lw $a2, 0($fp)
    local_0 = v1;                                               // 0x0014224c: sw $v1, 0($sp)
    t1 = 8;                                                     // 0x00142250: addiu $t1, $zero, 8
    local_8 = v0;                                               // 0x00142254: sw $v0, 8($sp)
    local_10 = s4;                                              // 0x0014225c: sw $s4, 0x10($sp)
    func_00142c78();  // 0x142858                                // 0x00142264: jal 0x142858
    local_18 = 0;                                               // 0x00142268: sw $zero, 0x18($sp)
    v0 = *(int32_t*)((s2) + 0x14);                              // 0x0014226c: lw $v0, 0x14($s2)
    v1 = *(int32_t*)((s2) + 0x10);                              // 0x00142274: lw $v1, 0x10($s2)
    a3 = 1;                                                     // 0x00142278: addiu $a3, $zero, 1
    a1 = *(int32_t*)((s1) + 0x1d0);                             // 0x0014227c: lw $a1, 0x1d0($s1)
    v0 = v0 >> 1;                                               // 0x00142280: sra $v0, $v0, 1
    a2 = *(int32_t*)((fp) + 8);                                 // 0x00142284: lw $a2, 8($fp)
    local_0 = v1;                                               // 0x0014228c: sw $v1, 0($sp)
    t1 = 8;                                                     // 0x00142290: addiu $t1, $zero, 8
    local_8 = v0;                                               // 0x00142294: sw $v0, 8($sp)
    local_10 = s4;                                              // 0x0014229c: sw $s4, 0x10($sp)
    func_00142c78();  // 0x142858                                // 0x001422a4: jal 0x142858
    local_18 = 0;                                               // 0x001422a8: sw $zero, 0x18($sp)
    goto label_0x142634;                                        // 0x001422ac: b 0x142634
    s0 = 1;                                                     // 0x001422b0: addiu $s0, $zero, 1
label_0x1422b4:
    if (s4 != v1) goto label_0x1423cc;                          // 0x001422b4: bne $s4, $v1, 0x1423cc
    a1 = 0x22 << 16;                                            // 0x001422b8: lui $a1, 0x22
    t0 = *(int32_t*)((s2) + 4);                                 // 0x001422bc: lw $t0, 4($s2)
    a3 = *(int32_t*)(s2);                                       // 0x001422c4: lw $a3, 0($s2)
    t0 = t0 >> 1;                                               // 0x001422cc: sra $t0, $t0, 1
    func_001440b0();  // 0x143f28                                // 0x001422d0: jal 0x143f28
    a1 = sp + 0x20;                                             // 0x001422d4: addiu $a1, $sp, 0x20
    v0 = *(int32_t*)((s2) + 4);                                 // 0x001422d8: lw $v0, 4($s2)
    v1 = *(int32_t*)(s2);                                       // 0x001422e0: lw $v1, 0($s2)
    a1 = *(int32_t*)((s1) + 0x1d0);                             // 0x001422e8: lw $a1, 0x1d0($s1)
    v0 = v0 >> 1;                                               // 0x001422ec: sra $v0, $v0, 1
    local_0 = v1;                                               // 0x001422f0: sw $v1, 0($sp)
    local_8 = v0;                                               // 0x001422f8: sw $v0, 8($sp)
    local_10 = s3;                                              // 0x00142300: sw $s3, 0x10($sp)
    t1 = 8;                                                     // 0x00142304: addiu $t1, $zero, 8
    local_18 = 0;                                               // 0x00142308: sw $zero, 0x18($sp)
    func_00142c78();  // 0x142858                                // 0x00142310: jal 0x142858
    v0 = local_20;                                              // 0x00142318: lw $v0, 0x20($sp)
    v1 = local_24;                                              // 0x00142320: lw $v1, 0x24($sp)
    a2 = 1;                                                     // 0x00142324: addiu $a2, $zero, 1
    a1 = *(int32_t*)((s1) + 0x1d0);                             // 0x00142328: lw $a1, 0x1d0($s1)
    local_0 = v0;                                               // 0x00142330: sw $v0, 0($sp)
    local_8 = v1;                                               // 0x00142338: sw $v1, 8($sp)
    t1 = 8;                                                     // 0x0014233c: addiu $t1, $zero, 8
    local_10 = s3;                                              // 0x00142340: sw $s3, 0x10($sp)
    local_18 = s3;                                              // 0x00142348: sw $s3, 0x18($sp)
    func_00142c78();  // 0x142858                                // 0x0014234c: jal 0x142858
    v0 = *(int32_t*)((s2) + 4);                                 // 0x00142354: lw $v0, 4($s2)
    v1 = *(int32_t*)(s2);                                       // 0x0014235c: lw $v1, 0($s2)
    a2 = 1;                                                     // 0x00142360: addiu $a2, $zero, 1
    a1 = *(int32_t*)((s1) + 0x1d0);                             // 0x00142364: lw $a1, 0x1d0($s1)
    v0 = v0 >> 1;                                               // 0x00142368: sra $v0, $v0, 1
    local_0 = v1;                                               // 0x0014236c: sw $v1, 0($sp)
    a3 = 1;                                                     // 0x00142370: addiu $a3, $zero, 1
    local_8 = v0;                                               // 0x00142374: sw $v0, 8($sp)
    local_10 = s3;                                              // 0x0014237c: sw $s3, 0x10($sp)
    t1 = 8;                                                     // 0x00142380: addiu $t1, $zero, 8
    local_18 = 0;                                               // 0x00142384: sw $zero, 0x18($sp)
    func_00142c78();  // 0x142858                                // 0x0014238c: jal 0x142858
    v0 = local_28;                                              // 0x00142394: lw $v0, 0x28($sp)
    v1 = local_2c;                                              // 0x0014239c: lw $v1, 0x2c($sp)
    a1 = *(int32_t*)((s1) + 0x1d0);                             // 0x001423a4: lw $a1, 0x1d0($s1)
    a3 = 1;                                                     // 0x001423a8: addiu $a3, $zero, 1
    local_0 = v0;                                               // 0x001423ac: sw $v0, 0($sp)
    local_8 = v1;                                               // 0x001423b4: sw $v1, 8($sp)
    t1 = 8;                                                     // 0x001423b8: addiu $t1, $zero, 8
    local_18 = s3;                                              // 0x001423bc: sw $s3, 0x18($sp)
    goto label_0x142610;                                        // 0x001423c4: b 0x142610
    local_10 = s3;                                              // 0x001423c8: sw $s3, 0x10($sp)
label_0x1423cc:
    a1 = &str_002265d0;  // "(b) invalid motion_type(%d)-1"     // 0x001423d0: addiu $a1, $a1, 0x65d0
    func_00148530();  // 0x1484f8                                // 0x001423d4: jal 0x1484f8
    goto label_0x142634;                                        // 0x001423dc: b 0x142634
    s0 = 1;                                                     // 0x001423e0: addiu $s0, $zero, 1
label_0x1423e4:
    a3 = *(int32_t*)((s1) + 0x1e0);                             // 0x001423e4: lw $a3, 0x1e0($s1)
    a1 = *(int32_t*)((s1) + 0x1f0);                             // 0x001423e8: lw $a1, 0x1f0($s1)
    s7 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x001423ec: sltiu $s7, $v0, 1
    a0 = *(int32_t*)((s1) + 0x1e4);                             // 0x001423f0: lw $a0, 0x1e4($s1)
    a2 = 2;                                                     // 0x001423f4: addiu $a2, $zero, 2
    v1 = *(int32_t*)((s1) + 0x1f4);                             // 0x001423f8: lw $v1, 0x1f4($s1)
    v0 = *(int32_t*)((s1) + 0x168);                             // 0x00142400: lw $v0, 0x168($s1)
    local_30 = a3;                                              // 0x00142404: sw $a3, 0x30($sp)
    local_34 = a1;                                              // 0x00142408: sw $a1, 0x34($sp)
    local_38 = a0;                                              // 0x0014240c: sw $a0, 0x38($sp)
    if (v0 != a2) goto label_0x142430;                          // 0x00142410: bne $v0, $a2, 0x142430
    local_3c = v1;                                              // 0x00142414: sw $v1, 0x3c($sp)
    v0 = *(int32_t*)((s1) + 0x138);                             // 0x00142418: lw $v0, 0x138($s1)
    if (v0 == 0) goto label_0x142434;                           // 0x0014241c: beqz $v0, 0x142434
    v0 = 1;                                                     // 0x00142420: addiu $v0, $zero, 1
    v0 = *(int32_t*)(fp);                                       // 0x00142424: lw $v0, 0($fp)
    v0 = s7 ^ v0;                                               // 0x00142428: xor $v0, $s7, $v0
    s3 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x0014242c: sltu $s3, $zero, $v0
label_0x142430:
    v0 = 1;                                                     // 0x00142430: addiu $v0, $zero, 1
label_0x142434:
    if (s4 == v0) goto label_0x142448;                          // 0x00142434: beql $s4, $v0, 0x142448
    v0 = *(int32_t*)(fp);                                       // 0x00142438: lw $v0, 0($fp)
    if (t4 != 0) goto label_0x142484;                           // 0x0014243c: bnez $t4, 0x142484
    v0 = 2;                                                     // 0x00142440: addiu $v0, $zero, 2
    v0 = *(int32_t*)(fp);                                       // 0x00142444: lw $v0, 0($fp)
label_0x142448:
    v1 = s3 << 3;                                               // 0x00142448: sll $v1, $s3, 3
    a2 = *(int32_t*)(s2);                                       // 0x0014244c: lw $a2, 0($s2)
    a1 = *(int32_t*)((s2) + 4);                                 // 0x00142454: lw $a1, 4($s2)
    v0 = v0 << 2;                                               // 0x00142458: sll $v0, $v0, 2
    local_0 = a2;                                               // 0x0014245c: sw $a2, 0($sp)
    v0 = v0 + v1;                                               // 0x00142460: addu $v0, $v0, $v1
    v1 = sp + v0;                                               // 0x00142464: addu $v1, $sp, $v0
    local_8 = a1;                                               // 0x00142468: sw $a1, 8($sp)
    a1 = *(int32_t*)((v1) + 0x30);                              // 0x0014246c: lw $a1, 0x30($v1)
    local_10 = 0;                                               // 0x00142474: sw $zero, 0x10($sp)
    goto label_0x142604;                                        // 0x0014247c: b 0x142604
    local_18 = 0;                                               // 0x00142480: sw $zero, 0x18($sp)
label_0x142484:
    if (s4 != v0) goto label_0x142554;                          // 0x00142484: bne $s4, $v0, 0x142554
    v0 = 3;                                                     // 0x00142488: addiu $v0, $zero, 3
    v0 = *(int32_t*)(fp);                                       // 0x0014248c: lw $v0, 0($fp)
    a1 = s3 << 3;                                               // 0x00142490: sll $a1, $s3, 3
    a0 = *(int32_t*)((s2) + 4);                                 // 0x00142494: lw $a0, 4($s2)
    s0 = sp + 0x30;                                             // 0x00142498: addiu $s0, $sp, 0x30
    v1 = *(int32_t*)(s2);                                       // 0x0014249c: lw $v1, 0($s2)
    v0 = v0 << 2;                                               // 0x001424a0: sll $v0, $v0, 2
    v0 = v0 + a1;                                               // 0x001424a4: addu $v0, $v0, $a1
    local_8 = a0;                                               // 0x001424a8: sw $a0, 8($sp)
    local_0 = v1;                                               // 0x001424ac: sw $v1, 0($sp)
    v0 = s0 + v0;                                               // 0x001424b0: addu $v0, $s0, $v0
    a1 = *(int32_t*)(v0);                                       // 0x001424bc: lw $a1, 0($v0)
    local_10 = 0;                                               // 0x001424c4: sw $zero, 0x10($sp)
    local_18 = 0;                                               // 0x001424cc: sw $zero, 0x18($sp)
    t1 = 8;                                                     // 0x001424d0: addiu $t1, $zero, 8
    func_00142c78();  // 0x142858                                // 0x001424d8: jal 0x142858
    v0 = *(int32_t*)((s1) + 0x168);                             // 0x001424e0: lw $v0, 0x168($s1)
    if (v0 != s4) goto label_0x142508;                          // 0x001424e4: bne $v0, $s4, 0x142508
    v0 = *(int32_t*)((s1) + 0x138);                             // 0x001424ec: lw $v0, 0x138($s1)
    if (v0 == 0) goto label_0x14250c;                           // 0x001424f0: beqz $v0, 0x14250c
    v1 = *(int32_t*)((fp) + 8);                                 // 0x001424f4: lw $v1, 8($fp)
    s3 = 1;                                                     // 0x001424f8: addiu $s3, $zero, 1
    v0 = s7 ^ v1;                                               // 0x001424fc: xor $v0, $s7, $v1
    goto label_0x14250c;                                        // 0x00142500: b 0x14250c
    if (v0 == 0) s3 = 0;                                        // 0x00142504: movz $s3, $zero, $v0
label_0x142508:
    v1 = *(int32_t*)((fp) + 8);                                 // 0x00142508: lw $v1, 8($fp)
label_0x14250c:
    v0 = v1 << 2;                                               // 0x0014250c: sll $v0, $v1, 2
    a2 = *(int32_t*)((s2) + 0x10);                              // 0x00142510: lw $a2, 0x10($s2)
    v1 = s3 << 3;                                               // 0x00142514: sll $v1, $s3, 3
    v0 = v0 + v1;                                               // 0x0014251c: addu $v0, $v0, $v1
    v0 = s0 + v0;                                               // 0x00142524: addu $v0, $s0, $v0
    v1 = *(int32_t*)((s2) + 0x14);                              // 0x00142528: lw $v1, 0x14($s2)
    a1 = *(int32_t*)(v0);                                       // 0x0014252c: lw $a1, 0($v0)
    t0 = 8;                                                     // 0x00142530: addiu $t0, $zero, 8
    local_0 = a2;                                               // 0x00142534: sw $a2, 0($sp)
    t1 = 8;                                                     // 0x00142538: addiu $t1, $zero, 8
    local_8 = v1;                                               // 0x00142540: sw $v1, 8($sp)
    local_10 = 0;                                               // 0x00142544: sw $zero, 0x10($sp)
    goto label_0x142610;                                        // 0x0014254c: b 0x142610
    local_18 = 0;                                               // 0x00142550: sw $zero, 0x18($sp)
label_0x142554:
    if (s4 != v0) goto label_0x142620;                          // 0x00142554: bne $s4, $v0, 0x142620
    a1 = 0x22 << 16;                                            // 0x00142558: lui $a1, 0x22
    v0 = *(int32_t*)((s1) + 0x138);                             // 0x0014255c: lw $v0, 0x138($s1)
    s3 = 1;                                                     // 0x00142560: addiu $s3, $zero, 1
    a3 = *(int32_t*)(s2);                                       // 0x00142564: lw $a3, 0($s2)
    t0 = *(int32_t*)((s2) + 4);                                 // 0x0014256c: lw $t0, 4($s2)
    if (v0 == 0) s3 = 0;                                        // 0x00142570: movz $s3, $zero, $v0
    func_001440b0();  // 0x143f28                                // 0x00142578: jal 0x143f28
    a1 = sp + 0x20;                                             // 0x0014257c: addiu $a1, $sp, 0x20
    s0 = sp + 0x30;                                             // 0x00142580: addiu $s0, $sp, 0x30
    v0 = s7 << 2;                                               // 0x00142584: sll $v0, $s7, 2
    t0 = *(int32_t*)((s2) + 4);                                 // 0x00142588: lw $t0, 4($s2)
    v0 = s0 + v0;                                               // 0x0014258c: addu $v0, $s0, $v0
    v1 = *(int32_t*)(s2);                                       // 0x00142590: lw $v1, 0($s2)
    a1 = *(int32_t*)(v0);                                       // 0x00142598: lw $a1, 0($v0)
    local_8 = t0;                                               // 0x001425a0: sw $t0, 8($sp)
    local_0 = v1;                                               // 0x001425a8: sw $v1, 0($sp)
    local_10 = 0;                                               // 0x001425b0: sw $zero, 0x10($sp)
    t1 = 0x10;                                                  // 0x001425b4: addiu $t1, $zero, 0x10
    local_18 = 0;                                               // 0x001425b8: sw $zero, 0x18($sp)
    func_00142c78();  // 0x142858                                // 0x001425c0: jal 0x142858
    v1 = s3 << 3;                                               // 0x001425c8: sll $v1, $s3, 3
    a0 = local_20;                                              // 0x001425cc: lw $a0, 0x20($sp)
    v0 = v1 + 4;                                                // 0x001425d0: addiu $v0, $v1, 4
    a1 = local_24;                                              // 0x001425d4: lw $a1, 0x24($sp)
    if (s7 != 0) v0 = v1;                                       // 0x001425d8: movn $v0, $v1, $s7
    local_0 = a0;                                               // 0x001425dc: sw $a0, 0($sp)
    s0 = s0 + v0;                                               // 0x001425e0: addu $s0, $s0, $v0
    local_8 = a1;                                               // 0x001425e4: sw $a1, 8($sp)
    a1 = *(int32_t*)(s0);                                       // 0x001425e8: lw $a1, 0($s0)
    v1 = 1;                                                     // 0x001425ec: addiu $v1, $zero, 1
    local_18 = v1;                                              // 0x001425f4: sw $v1, 0x18($sp)
    local_10 = 0;                                               // 0x001425fc: sw $zero, 0x10($sp)
label_0x142604:
    t1 = 0x10;                                                  // 0x00142608: addiu $t1, $zero, 0x10
label_0x142610:
    func_00142c78();  // 0x142858                                // 0x00142610: jal 0x142858
    goto label_0x142634;                                        // 0x00142618: b 0x142634
    s0 = 1;                                                     // 0x0014261c: addiu $s0, $zero, 1
label_0x142620:
    a1 = &str_002265f0;  // "(c) invalid motion_type(%d)-2"     // 0x00142624: addiu $a1, $a1, 0x65f0
    func_00148530();  // 0x1484f8                                // 0x00142628: jal 0x1484f8
    s0 = 1;                                                     // 0x00142630: addiu $s0, $zero, 1
label_0x142634:
    a0 = local_40;                                              // 0x00142634: lw $a0, 0x40($sp)
label_0x142638:
    v0 = a0 & 4;                                                // 0x00142638: andi $v0, $a0, 4
    if (v0 == 0) goto label_0x142824;                           // 0x0014263c: beqz $v0, 0x142824
    v0 = 3;                                                     // 0x00142640: addiu $v0, $zero, 3
    v1 = *(int32_t*)((s1) + 0x18c);                             // 0x00142644: lw $v1, 0x18c($s1)
    if (v1 != v0) goto label_0x14271c;                          // 0x00142648: bne $v1, $v0, 0x14271c
    v0 = 1;                                                     // 0x0014264c: addiu $v0, $zero, 1
    v0 = 2;                                                     // 0x00142650: addiu $v0, $zero, 2
    if (s4 != v0) goto label_0x142694;                          // 0x00142654: bne $s4, $v0, 0x142694
    s3 = 1;                                                     // 0x00142658: addiu $s3, $zero, 1
    v0 = *(int32_t*)((s2) + 0xc);                               // 0x0014265c: lw $v0, 0xc($s2)
    v1 = *(int32_t*)((s2) + 8);                                 // 0x00142664: lw $v1, 8($s2)
    local_8 = v0;                                               // 0x0014266c: sw $v0, 8($sp)
    local_0 = v1;                                               // 0x00142674: sw $v1, 0($sp)
    local_18 = s0;                                              // 0x0014267c: sw $s0, 0x18($sp)
    local_10 = 0;                                               // 0x00142684: sw $zero, 0x10($sp)
    goto label_0x14270c;                                        // 0x0014268c: b 0x14270c
    t1 = 0x10;                                                  // 0x00142690: addiu $t1, $zero, 0x10
label_0x142694:
    v0 = *(int32_t*)((s2) + 0xc);                               // 0x00142694: lw $v0, 0xc($s2)
    v1 = *(int32_t*)((s2) + 8);                                 // 0x0014269c: lw $v1, 8($s2)
    a1 = *(int32_t*)((s1) + 0x1d4);                             // 0x001426a4: lw $a1, 0x1d4($s1)
    v0 = v0 >> 1;                                               // 0x001426a8: sra $v0, $v0, 1
    a2 = *(int32_t*)((fp) + 4);                                 // 0x001426ac: lw $a2, 4($fp)
    local_0 = v1;                                               // 0x001426b4: sw $v1, 0($sp)
    t1 = 8;                                                     // 0x001426b8: addiu $t1, $zero, 8
    local_8 = v0;                                               // 0x001426bc: sw $v0, 8($sp)
    local_10 = s3;                                              // 0x001426c4: sw $s3, 0x10($sp)
    func_00142c78();  // 0x142858                                // 0x001426cc: jal 0x142858
    local_18 = s0;                                              // 0x001426d0: sw $s0, 0x18($sp)
    v0 = *(int32_t*)((s2) + 0x1c);                              // 0x001426d4: lw $v0, 0x1c($s2)
    v1 = *(int32_t*)((s2) + 0x18);                              // 0x001426dc: lw $v1, 0x18($s2)
    v0 = v0 >> 1;                                               // 0x001426e4: sra $v0, $v0, 1
    local_10 = s3;                                              // 0x001426e8: sw $s3, 0x10($sp)
    local_0 = v1;                                               // 0x001426ec: sw $v1, 0($sp)
    local_8 = v0;                                               // 0x001426f4: sw $v0, 8($sp)
    a3 = 1;                                                     // 0x001426f8: addiu $a3, $zero, 1
    local_18 = s0;                                              // 0x001426fc: sw $s0, 0x18($sp)
    t1 = 8;                                                     // 0x00142704: addiu $t1, $zero, 8
    a2 = *(int32_t*)((fp) + 0xc);                               // 0x00142708: lw $a2, 0xc($fp)
label_0x14270c:
    func_00142c78();  // 0x142858                                // 0x0014270c: jal 0x142858
    a1 = *(int32_t*)((a0) + 0x1d4);                             // 0x00142710: lw $a1, 0x1d4($a0)
    goto label_0x142828;                                        // 0x00142714: b 0x142828
label_0x14271c:
    if (s4 != v0) goto label_0x142774;                          // 0x0014271c: bne $s4, $v0, 0x142774
    v0 = 2;                                                     // 0x00142720: addiu $v0, $zero, 2
    v0 = *(int32_t*)((fp) + 4);                                 // 0x00142724: lw $v0, 4($fp)
    /* beqzl $v0, 0x142734 */                                   // 0x00142728: beqzl $v0, 0x142734
    a1 = *(int32_t*)((s1) + 0x1e4);                             // 0x0014272c: lw $a1, 0x1e4($s1)
    a1 = *(int32_t*)((s1) + 0x1f4);                             // 0x00142730: lw $a1, 0x1f4($s1)
    v0 = *(int32_t*)((s2) + 0xc);                               // 0x00142734: lw $v0, 0xc($s2)
    v1 = *(int32_t*)((s2) + 8);                                 // 0x0014273c: lw $v1, 8($s2)
    local_8 = v0;                                               // 0x00142744: sw $v0, 8($sp)
    local_0 = v1;                                               // 0x0014274c: sw $v1, 0($sp)
    local_18 = s0;                                              // 0x00142754: sw $s0, 0x18($sp)
    local_10 = 0;                                               // 0x0014275c: sw $zero, 0x10($sp)
    func_00142c78();  // 0x142858                                // 0x00142764: jal 0x142858
    t1 = 0x10;                                                  // 0x00142768: addiu $t1, $zero, 0x10
    goto label_0x142828;                                        // 0x0014276c: b 0x142828
label_0x142774:
    if (s4 != v0) goto label_0x142814;                          // 0x00142774: bne $s4, $v0, 0x142814
    a1 = 0x22 << 16;                                            // 0x00142778: lui $a1, 0x22
    v0 = *(int32_t*)((fp) + 4);                                 // 0x0014277c: lw $v0, 4($fp)
    /* beqzl $v0, 0x14278c */                                   // 0x00142780: beqzl $v0, 0x14278c
    a1 = *(int32_t*)((s1) + 0x1e4);                             // 0x00142784: lw $a1, 0x1e4($s1)
    a1 = *(int32_t*)((s1) + 0x1f4);                             // 0x00142788: lw $a1, 0x1f4($s1)
    v0 = *(int32_t*)((s2) + 8);                                 // 0x0014278c: lw $v0, 8($s2)
    v1 = *(int32_t*)((s2) + 0xc);                               // 0x00142794: lw $v1, 0xc($s2)
    local_0 = v0;                                               // 0x0014279c: sw $v0, 0($sp)
    local_8 = v1;                                               // 0x001427a4: sw $v1, 8($sp)
    local_10 = 0;                                               // 0x001427ac: sw $zero, 0x10($sp)
    t1 = 8;                                                     // 0x001427b0: addiu $t1, $zero, 8
    local_18 = s0;                                              // 0x001427b4: sw $s0, 0x18($sp)
    func_00142c78();  // 0x142858                                // 0x001427bc: jal 0x142858
    v0 = *(int32_t*)((fp) + 0xc);                               // 0x001427c4: lw $v0, 0xc($fp)
    /* beqzl $v0, 0x1427d4 */                                   // 0x001427c8: beqzl $v0, 0x1427d4
    a1 = *(int32_t*)((s1) + 0x1e4);                             // 0x001427cc: lw $a1, 0x1e4($s1)
    a1 = *(int32_t*)((s1) + 0x1f4);                             // 0x001427d0: lw $a1, 0x1f4($s1)
    v0 = *(int32_t*)((s2) + 0x1c);                              // 0x001427d4: lw $v0, 0x1c($s2)
    v1 = *(int32_t*)((s2) + 0x18);                              // 0x001427dc: lw $v1, 0x18($s2)
    local_8 = v0;                                               // 0x001427e4: sw $v0, 8($sp)
    local_0 = v1;                                               // 0x001427ec: sw $v1, 0($sp)
    local_18 = s0;                                              // 0x001427f4: sw $s0, 0x18($sp)
    local_10 = 0;                                               // 0x001427fc: sw $zero, 0x10($sp)
    t0 = 8;                                                     // 0x00142800: addiu $t0, $zero, 8
    func_00142c78();  // 0x142858                                // 0x00142804: jal 0x142858
    t1 = 8;                                                     // 0x00142808: addiu $t1, $zero, 8
    goto label_0x142828;                                        // 0x0014280c: b 0x142828
label_0x142814:
    a1 = &str_00226610;  // "intra && skip MB"                  // 0x00142818: addiu $a1, $a1, 0x6610
    func_00148530();  // 0x1484f8                                // 0x0014281c: jal 0x1484f8
label_0x142824:
label_0x142828:
    return;                                                     // 0x0014284c: jr $ra
    sp = sp + 0xf0;                                             // 0x00142850: addiu $sp, $sp, 0xf0
}