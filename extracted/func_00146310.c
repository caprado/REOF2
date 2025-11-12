void func_00146310() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t3 = 4;                                                     // 0x00146314: addiu $t3, $zero, 4
    t1 = *(int32_t*)((a3) + 0x18c);                             // 0x00146318: lw $t1, 0x18c($a3)
    t4 = 2;                                                     // 0x0014631c: addiu $t4, $zero, 2
    t2 = *(int32_t*)((a3) + 0x168);                             // 0x00146320: lw $t2, 0x168($a3)
    v0 = t1 ^ 3;                                                // 0x00146328: xori $v0, $t1, 3
    t6 = 3;                                                     // 0x00146330: addiu $t6, $zero, 3
    if (t2 != t6) goto label_0x146448;                          // 0x00146334: bne $t2, $t6, 0x146448
    if (v0 == 0) t3 = t4;                                       // 0x00146338: movz $t3, $t4, $v0
    v0 = *(int32_t*)((a3) + 0xb8);                              // 0x0014633c: lw $v0, 0xb8($a3)
    v1 = *(int32_t*)((a3) + 0xbc);                              // 0x00146340: lw $v1, 0xbc($a3)
    a1 = *(int32_t*)((a3) + 0x1dc);                             // 0x00146344: lw $a1, 0x1dc($a3)
    a2 = *(int32_t*)((a3) + 0x1ec);                             // 0x00146348: lw $a2, 0x1ec($a3)
    v0 = v0 + v1;                                               // 0x0014634c: addu $v0, $v0, $v1
    a0 = *(int32_t*)((a3) + 0x1fc);                             // 0x00146350: lw $a0, 0x1fc($a3)
    v0 = (v0 < t3) ? 1 : 0;                                     // 0x00146354: slt $v0, $v0, $t3
    *(uint32_t*)((a3) + 0x1d8) = a1;                            // 0x00146358: sw $a1, 0x1d8($a3)
    *(uint32_t*)((a3) + 0x1e8) = a2;                            // 0x0014635c: sw $a2, 0x1e8($a3)
    if (v0 != 0) goto label_0x146374;                           // 0x00146360: bnez $v0, 0x146374
    *(uint32_t*)((a3) + 0x1f8) = a0;                            // 0x00146364: sw $a0, 0x1f8($a3)
    *(uint32_t*)((a3) + 0x100) = 0;                             // 0x00146368: sw $zero, 0x100($a3)
    *(uint32_t*)((a3) + 0x1c0) = 0;                             // 0x0014636c: sw $zero, 0x1c0($a3)
    *(uint32_t*)((a3) + 0x1bc) = 0;                             // 0x00146370: sw $zero, 0x1bc($a3)
label_0x146374:
    v0 = *(int32_t*)((a3) + 0x100);                             // 0x00146374: lw $v0, 0x100($a3)
    /* bnezl $v0, 0x146390 */                                   // 0x00146378: bnezl $v0, 0x146390
    v0 = *(int32_t*)((a3) + 0x1bc);                             // 0x0014637c: lw $v0, 0x1bc($a3)
    v0 = *(int32_t*)((a3) + 0x1c0);                             // 0x00146380: lw $v0, 0x1c0($a3)
    /* beqzl $v0, 0x1463b8 */                                   // 0x00146384: beqzl $v0, 0x1463b8
    *(uint32_t*)((a3) + 0x100) = 0;                             // 0x00146388: sw $zero, 0x100($a3)
    v0 = *(int32_t*)((a3) + 0x1bc);                             // 0x0014638c: lw $v0, 0x1bc($a3)
    /* bnezl $v0, 0x1463b8 */                                   // 0x00146390: bnezl $v0, 0x1463b8
    *(uint32_t*)((a3) + 0x100) = 0;                             // 0x00146394: sw $zero, 0x100($a3)
    v0 = *(int32_t*)((a3) + 0x1d0);                             // 0x00146398: lw $v0, 0x1d0($a3)
    a0 = *(int32_t*)((a3) + 0x1e0);                             // 0x0014639c: lw $a0, 0x1e0($a3)
    *(uint32_t*)((v0) + 0x28) = 0;                              // 0x001463a0: sw $zero, 0x28($v0)
    v1 = *(int32_t*)((a3) + 0x1f0);                             // 0x001463a4: lw $v1, 0x1f0($a3)
    *(uint32_t*)((a0) + 0x28) = 0;                              // 0x001463a8: sw $zero, 0x28($a0)
    *(uint32_t*)((v1) + 0x28) = 0;                              // 0x001463ac: sw $zero, 0x28($v1)
    t1 = *(int32_t*)((a3) + 0x18c);                             // 0x001463b0: lw $t1, 0x18c($a3)
    *(uint32_t*)((a3) + 0x100) = 0;                             // 0x001463b4: sw $zero, 0x100($a3)
    v0 = 3;                                                     // 0x001463b8: addiu $v0, $zero, 3
    if (t1 != v0) goto label_0x1463ec;                          // 0x001463bc: bne $t1, $v0, 0x1463ec
    *(uint32_t*)((a3) + 0x1c0) = 0;                             // 0x001463c0: sw $zero, 0x1c0($a3)
    v1 = *(int32_t*)((a3) + 0x1d0);                             // 0x001463c4: lw $v1, 0x1d0($a3)
    a0 = 1;                                                     // 0x001463c8: addiu $a0, $zero, 1
    v0 = *(int32_t*)((v1) + 0x28);                              // 0x001463cc: lw $v0, 0x28($v1)
    if (v0 == a0) goto label_0x146434;                          // 0x001463d0: beql $v0, $a0, 0x146434
    v1 = *(int32_t*)((a3) + 0x1d4);                             // 0x001463d4: lw $v1, 0x1d4($a3)
    v0 = *(int32_t*)((a3) + 0x1bc);                             // 0x001463d8: lw $v0, 0x1bc($a3)
    if (v0 == 0) goto label_0x146500;                           // 0x001463dc: beqz $v0, 0x146500
    v0 = 2;                                                     // 0x001463e0: addiu $v0, $zero, 2
    goto label_0x146434;                                        // 0x001463e4: b 0x146434
    v1 = *(int32_t*)((a3) + 0x1d4);                             // 0x001463e8: lw $v1, 0x1d4($a3)
label_0x1463ec:
    v0 = *(int32_t*)((a3) + 0x1e0);                             // 0x001463ec: lw $v0, 0x1e0($a3)
    v1 = 1;                                                     // 0x001463f0: addiu $v1, $zero, 1
    a0 = *(int32_t*)((v0) + 0x28);                              // 0x001463f4: lw $a0, 0x28($v0)
    if (a0 != v1) goto label_0x146414;                          // 0x001463f8: bnel $a0, $v1, 0x146414
    v0 = *(int32_t*)((a3) + 0x1bc);                             // 0x001463fc: lw $v0, 0x1bc($a3)
    v0 = *(int32_t*)((a3) + 0x1f0);                             // 0x00146400: lw $v0, 0x1f0($a3)
    v1 = *(int32_t*)((v0) + 0x28);                              // 0x00146404: lw $v1, 0x28($v0)
    if (v1 == a0) goto label_0x146420;                          // 0x00146408: beql $v1, $a0, 0x146420
    v0 = *(int32_t*)((a3) + 0x1e4);                             // 0x0014640c: lw $v0, 0x1e4($a3)
    v0 = *(int32_t*)((a3) + 0x1bc);                             // 0x00146410: lw $v0, 0x1bc($a3)
label_0x146414:
    if (v0 == 0) goto label_0x146500;                           // 0x00146414: beqz $v0, 0x146500
    v0 = 2;                                                     // 0x00146418: addiu $v0, $zero, 2
    v0 = *(int32_t*)((a3) + 0x1e4);                             // 0x0014641c: lw $v0, 0x1e4($a3)
label_0x146420:
    v1 = 1;                                                     // 0x00146420: addiu $v1, $zero, 1
    a0 = *(int32_t*)((v0) + 0x28);                              // 0x00146424: lw $a0, 0x28($v0)
    if (a0 != v1) goto label_0x146500;                          // 0x00146428: bne $a0, $v1, 0x146500
    v0 = 2;                                                     // 0x0014642c: addiu $v0, $zero, 2
    v1 = *(int32_t*)((a3) + 0x1f4);                             // 0x00146430: lw $v1, 0x1f4($a3)
label_0x146434:
    v0 = *(int32_t*)((v1) + 0x28);                              // 0x00146438: lw $v0, 0x28($v1)
    v0 = v0 ^ 1;                                                // 0x0014643c: xori $v0, $v0, 1
    goto label_0x1464fc;                                        // 0x00146440: b 0x1464fc
    if (v0 != 0) t5 = 0;                                        // 0x00146444: movn $t5, $zero, $v0
label_0x146448:
    /* bnezl $a1, 0x146484 */                                   // 0x00146448: bnezl $a1, 0x146484
    v0 = *(int32_t*)((a3) + 0x1d4);                             // 0x0014644c: lw $v0, 0x1d4($a3)
    a2 = *(int32_t*)((a3) + 0x1d0);                             // 0x00146450: lw $a2, 0x1d0($a3)
    a0 = *(int32_t*)((a3) + 0x1d4);                             // 0x00146454: lw $a0, 0x1d4($a3)
    *(uint32_t*)((a3) + 0x1d4) = a2;                            // 0x00146458: sw $a2, 0x1d4($a3)
    a2 = *(int32_t*)((a3) + 0x1e0);                             // 0x0014645c: lw $a2, 0x1e0($a3)
    v1 = *(int32_t*)((a3) + 0x1e4);                             // 0x00146460: lw $v1, 0x1e4($a3)
    *(uint32_t*)((a3) + 0x1e4) = a2;                            // 0x00146464: sw $a2, 0x1e4($a3)
    a2 = *(int32_t*)((a3) + 0x1f0);                             // 0x00146468: lw $a2, 0x1f0($a3)
    v0 = *(int32_t*)((a3) + 0x1f4);                             // 0x0014646c: lw $v0, 0x1f4($a3)
    *(uint32_t*)((a3) + 0x1d0) = a0;                            // 0x00146470: sw $a0, 0x1d0($a3)
    *(uint32_t*)((a3) + 0x1e0) = v1;                            // 0x00146474: sw $v1, 0x1e0($a3)
    *(uint32_t*)((a3) + 0x1f0) = v0;                            // 0x00146478: sw $v0, 0x1f0($a3)
    *(uint32_t*)((a3) + 0x1f4) = a2;                            // 0x0014647c: sw $a2, 0x1f4($a3)
    v0 = *(int32_t*)((a3) + 0x1d4);                             // 0x00146480: lw $v0, 0x1d4($a3)
    a0 = *(int32_t*)((a3) + 0x1e4);                             // 0x00146484: lw $a0, 0x1e4($a3)
    v1 = *(int32_t*)((a3) + 0x1f4);                             // 0x00146488: lw $v1, 0x1f4($a3)
    *(uint32_t*)((a3) + 0x1d8) = v0;                            // 0x0014648c: sw $v0, 0x1d8($a3)
    *(uint32_t*)((a3) + 0x1e8) = a0;                            // 0x00146490: sw $a0, 0x1e8($a3)
    if (t1 != t6) goto label_0x1464b0;                          // 0x00146494: bne $t1, $t6, 0x1464b0
    *(uint32_t*)((a3) + 0x1f8) = v1;                            // 0x00146498: sw $v1, 0x1f8($a3)
    if (t2 != t4) goto label_0x1464fc;                          // 0x0014649c: bnel $t2, $t4, 0x1464fc
    t5 = 1;                                                     // 0x001464a0: addiu $t5, $zero, 1
    v0 = *(int32_t*)((a3) + 0x1d0);                             // 0x001464a4: lw $v0, 0x1d0($a3)
    goto label_0x1464ec;                                        // 0x001464a8: b 0x1464ec
    a0 = 1;                                                     // 0x001464ac: addiu $a0, $zero, 1
label_0x1464b0:
    v0 = t1 ^ 1;                                                // 0x001464b0: xori $v0, $t1, 1
    a2 = 1;                                                     // 0x001464b4: addiu $a2, $zero, 1
    if (v0 != 0) v1 = a0;                                       // 0x001464b8: movn $v1, $a0, $v0
    if (t2 != t4) goto label_0x1464f8;                          // 0x001464bc: bne $t2, $t4, 0x1464f8
    /* beqzl $a1, 0x1464dc */                                   // 0x001464c4: beqzl $a1, 0x1464dc
    v0 = *(int32_t*)((a3) + 0x1e0);                             // 0x001464c8: lw $v0, 0x1e0($a3)
    v0 = *(int32_t*)((v0) + 0x28);                              // 0x001464cc: lw $v0, 0x28($v0)
    if (v0 == a2) goto label_0x1464fc;                          // 0x001464d0: beql $v0, $a2, 0x1464fc
    t5 = 1;                                                     // 0x001464d4: addiu $t5, $zero, 1
    v0 = *(int32_t*)((a3) + 0x1e0);                             // 0x001464d8: lw $v0, 0x1e0($a3)
    a0 = *(int32_t*)((v0) + 0x28);                              // 0x001464dc: lw $a0, 0x28($v0)
    if (a0 != a2) goto label_0x146500;                          // 0x001464e0: bne $a0, $a2, 0x146500
    v0 = 2;                                                     // 0x001464e4: addiu $v0, $zero, 2
    v0 = *(int32_t*)((a3) + 0x1f0);                             // 0x001464e8: lw $v0, 0x1f0($a3)
label_0x1464ec:
    v1 = *(int32_t*)((v0) + 0x28);                              // 0x001464ec: lw $v1, 0x28($v0)
    if (v1 != a0) goto label_0x146500;                          // 0x001464f0: bne $v1, $a0, 0x146500
    v0 = 2;                                                     // 0x001464f4: addiu $v0, $zero, 2
label_0x1464f8:
    t5 = 1;                                                     // 0x001464f8: addiu $t5, $zero, 1
label_0x1464fc:
    v0 = 2;                                                     // 0x001464fc: addiu $v0, $zero, 2
label_0x146500:
    if (t1 == v0) goto label_0x146534;                          // 0x00146500: beq $t1, $v0, 0x146534
    v0 = (t1 < 3) ? 1 : 0;                                      // 0x00146504: slti $v0, $t1, 3
    if (v0 == 0) goto label_0x146520;                           // 0x00146508: beqz $v0, 0x146520
    v0 = 1;                                                     // 0x0014650c: addiu $v0, $zero, 1
    if (t1 == v0) goto label_0x146538;                          // 0x00146510: beql $t1, $v0, 0x146538
    t0 = *(int32_t*)((a3) + 0x1e8);                             // 0x00146514: lw $t0, 0x1e8($a3)
    goto label_0x14653c;                                        // 0x00146518: b 0x14653c
    *(uint32_t*)((t0) + 0x28) = 0;                              // 0x0014651c: sw $zero, 0x28($t0)
label_0x146520:
    v0 = 3;                                                     // 0x00146520: addiu $v0, $zero, 3
    if (t1 == v0) goto label_0x146538;                          // 0x00146524: beql $t1, $v0, 0x146538
    t0 = *(int32_t*)((a3) + 0x1d8);                             // 0x00146528: lw $t0, 0x1d8($a3)
    goto label_0x14653c;                                        // 0x0014652c: b 0x14653c
    *(uint32_t*)((t0) + 0x28) = 0;                              // 0x00146530: sw $zero, 0x28($t0)
label_0x146534:
    t0 = *(int32_t*)((a3) + 0x1f8);                             // 0x00146534: lw $t0, 0x1f8($a3)
label_0x146538:
    *(uint32_t*)((t0) + 0x28) = 0;                              // 0x00146538: sw $zero, 0x28($t0)
label_0x14653c:
    a0 = *(int32_t*)((a3) + 0x168);                             // 0x00146544: lw $a0, 0x168($a3)
    *(uint32_t*)((t0) + 0x2c) = a0;                             // 0x0014654c: sw $a0, 0x2c($t0)
    a0 = *(int32_t*)((a3) + 0x18c);                             // 0x00146554: lw $a0, 0x18c($a3)
    *(uint32_t*)((t0) + 0x30) = a0;                             // 0x0014655c: sw $a0, 0x30($t0)
    v1 = *(int32_t*)((a3) + 0x154);                             // 0x00146560: lw $v1, 0x154($a3)
    *(uint32_t*)((t0) + 0x34) = v1;                             // 0x00146564: sw $v1, 0x34($t0)
    a0 = *(int32_t*)((a3) + 0x1a0);                             // 0x00146568: lw $a0, 0x1a0($a3)
    *(uint32_t*)((t0) + 0x38) = a0;                             // 0x0014656c: sw $a0, 0x38($t0)
    v1 = *(int32_t*)((a3) + 0x190);                             // 0x00146570: lw $v1, 0x190($a3)
    *(uint32_t*)((t0) + 0x3c) = v1;                             // 0x00146574: sw $v1, 0x3c($t0)
    a0 = *(int32_t*)((a3) + 0x19c);                             // 0x00146578: lw $a0, 0x19c($a3)
    *(uint32_t*)((t0) + 0x40) = a0;                             // 0x0014657c: sw $a0, 0x40($t0)
    v1 = *(int32_t*)((a3) + 0x1a4);                             // 0x00146580: lw $v1, 0x1a4($a3)
    *(uint32_t*)((t0) + 0x44) = v1;                             // 0x00146584: sw $v1, 0x44($t0)
    a0 = *(int32_t*)((a3) + 0x1a8);                             // 0x00146588: lw $a0, 0x1a8($a3)
    *(uint32_t*)((t0) + 0x48) = a0;                             // 0x0014658c: sw $a0, 0x48($t0)
    v1 = *(int32_t*)((a3) + 0x1ac);                             // 0x00146590: lw $v1, 0x1ac($a3)
    *(uint32_t*)((t0) + 0x4c) = v1;                             // 0x00146594: sw $v1, 0x4c($t0)
    a0 = *(int32_t*)((a3) + 0x1b0);                             // 0x00146598: lw $a0, 0x1b0($a3)
    *(uint32_t*)((t0) + 0x50) = a0;                             // 0x0014659c: sw $a0, 0x50($t0)
    v1 = *(int32_t*)((a3) + 0x1b4);                             // 0x001465a0: lw $v1, 0x1b4($a3)
    *(uint32_t*)((t0) + 0x54) = v1;                             // 0x001465a4: sw $v1, 0x54($t0)
    a0 = *(int32_t*)((a3) + 0x1b8);                             // 0x001465a8: lw $a0, 0x1b8($a3)
    *(uint32_t*)((t0) + 0x58) = a0;                             // 0x001465ac: sw $a0, 0x58($t0)
    v1 = *(int32_t*)((a3) + 0x160);                             // 0x001465b0: lw $v1, 0x160($a3)
    *(uint32_t*)((t0) + 0x5c) = v1;                             // 0x001465b4: sw $v1, 0x5c($t0)
    a0 = *(int32_t*)((a3) + 0x164);                             // 0x001465b8: lw $a0, 0x164($a3)
    return;                                                     // 0x001465bc: jr $ra
    *(uint32_t*)((t0) + 0x60) = a0;                             // 0x001465c0: sw $a0, 0x60($t0)
}