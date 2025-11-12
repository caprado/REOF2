void func_00108f48() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_18, local_1c, local_4, local_8, local_c;
    
    sp = sp + -0xc0;                                            // 0x00108f48: addiu $sp, $sp, -0xc0
    local_0 = a1;                                               // 0x00108f68: sw $a1, 0($sp)
label_0x108f84:
    v0 = s6 & 7;                                                // 0x00108f84: andi $v0, $s6, 7
    if (v0 != 0) goto label_0x108fa4;                           // 0x00108f88: bnez $v0, 0x108fa4
    v0 = 2;                                                     // 0x00108f8c: addiu $v0, $zero, 2
    v0 = s4 & 7;                                                // 0x00108f90: andi $v0, $s4, 7
    /* bnezl $v0, 0x108fa4 */                                   // 0x00108f94: bnezl $v0, 0x108fa4
    v0 = 2;                                                     // 0x00108f98: addiu $v0, $zero, 2
    v0 = s4 ^ 8;                                                // 0x00108f9c: xori $v0, $s4, 8
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x00108fa0: sltu $v0, $zero, $v0
label_0x108fa4:
    local_4 = v0;                                               // 0x00108fa4: sw $v0, 4($sp)
    v1 = local_0;                                               // 0x00108fa8: lw $v1, 0($sp)
    v0 = ((unsigned)v1 < (unsigned)7) ? 1 : 0;                  // 0x00108fac: sltiu $v0, $v1, 7
    if (v0 == 0) goto label_0x1090b8;                           // 0x00108fb0: beqz $v0, 0x1090b8
    local_8 = 0;                                                // 0x00108fb4: sw $zero, 8($sp)
    /* multiply: v1 * s4 -> hi:lo */                            // 0x00108fb8: mult $ac2, $v1, $s4
    s3 = s6 + s4;                                               // 0x00108fbc: addu $s3, $s6, $s4
    v1 = v0 + s6;                                               // 0x00108fc0: addu $v1, $v0, $s6
    v0 = ((unsigned)s3 < (unsigned)v1) ? 1 : 0;                 // 0x00108fc4: sltu $v0, $s3, $v1
    /* beqzl $v0, 0x109908 */                                   // 0x00108fc8: beqzl $v0, 0x109908
    local_c = v1;                                               // 0x00108fd0: sw $v1, 0xc($sp)
    v0 = (unsigned)s4 >> 3;                                     // 0x00108fd4: srl $v0, $s4, 3
    v1 = local_4;                                               // 0x00108fd8: lw $v1, 4($sp)
    s5 = (v1 < 2) ? 1 : 0;                                      // 0x00108fe4: slti $s5, $v1, 2
    goto label_0x109074;                                        // 0x00108fe8: b 0x109074
label_0x108ff0:
    if (a0 != 0) goto label_0x109010;                           // 0x00108ff0: bnez $a0, 0x109010
    /* nop */                                                   // 0x00108ff4: nop 
    goto label_0x109070;                                        // 0x00109004: b 0x109070
    /* nop */                                                   // 0x0010900c: nop 
label_0x109010:
    if (s5 == 0) goto label_0x109048;                           // 0x00109010: beqz $s5, 0x109048
label_0x109020:
    a0 = a0 + 8;                                                // 0x00109030: addiu $a0, $a0, 8
    if (a1 > 0) goto label_0x109020;                            // 0x00109038: bgtz $a1, 0x109020
    a2 = a2 + 8;                                                // 0x0010903c: addiu $a2, $a2, 8
    goto label_0x109074;                                        // 0x00109040: b 0x109074
label_0x109048:
label_0x109050:
    v1 = *(int8_t*)(a0);                                        // 0x00109050: lb $v1, 0($a0)
    v0 = *(uint8_t*)(a2);                                       // 0x00109058: lbu $v0, 0($a2)
    *(uint8_t*)(a0) = v0;                                       // 0x0010905c: sb $v0, 0($a0)
    a0 = a0 + 1;                                                // 0x00109060: addiu $a0, $a0, 1
    *(uint8_t*)(a2) = v1;                                       // 0x00109064: sb $v1, 0($a2)
    if (a1 > 0) goto label_0x109050;                            // 0x00109068: bgtz $a1, 0x109050
    a2 = a2 + 1;                                                // 0x0010906c: addiu $a2, $a2, 1
label_0x109070:
label_0x109074:
    v0 = ((unsigned)s6 < (unsigned)s0) ? 1 : 0;                 // 0x00109074: sltu $v0, $s6, $s0
    if (v0 == 0) goto label_0x10909c;                           // 0x00109078: beqz $v0, 0x10909c
    v1 = local_c;                                               // 0x0010907c: lw $v1, 0xc($sp)
    s1 = s0 - s4;                                               // 0x00109080: subu $s1, $s0, $s4
    /* call function at address in fp */                        // 0x00109088: jalr $fp
    if (v0 > 0) goto label_0x108ff0;                            // 0x00109090: bgtzl $v0, 0x108ff0
    a0 = local_4;                                               // 0x00109094: lw $a0, 4($sp)
    v1 = local_c;                                               // 0x00109098: lw $v1, 0xc($sp)
label_0x10909c:
    s3 = s3 + s4;                                               // 0x0010909c: addu $s3, $s3, $s4
    v0 = ((unsigned)s3 < (unsigned)v1) ? 1 : 0;                 // 0x001090a0: sltu $v0, $s3, $v1
    /* bnezl $v0, 0x109074 */                                   // 0x001090a4: bnezl $v0, 0x109074
    goto label_0x109908;                                        // 0x001090ac: b 0x109908
    /* nop */                                                   // 0x001090b4: nop 
label_0x1090b8:
    a0 = local_0;                                               // 0x001090b8: lw $a0, 0($sp)
    v0 = (unsigned)a0 >> 1;                                     // 0x001090bc: srl $v0, $a0, 1
    v1 = ((unsigned)a0 < (unsigned)8) ? 1 : 0;                  // 0x001090c0: sltiu $v1, $a0, 8
    if (v1 != 0) goto label_0x109308;                           // 0x001090c8: bnez $v1, 0x109308
    s3 = a0 + s6;                                               // 0x001090cc: addu $s3, $a0, $s6
    v0 = local_0;                                               // 0x001090d0: lw $v0, 0($sp)
    v1 = local_0;                                               // 0x001090d8: lw $v1, 0($sp)
    v0 = v0 + -1;                                               // 0x001090dc: addiu $v0, $v0, -1
    local_18 = v0;                                              // 0x001090e0: sw $v0, 0x18($sp)
    v0 = ((unsigned)v1 < (unsigned)0x29) ? 1 : 0;               // 0x001090e4: sltiu $v0, $v1, 0x29
    v1 = local_18;                                              // 0x001090e8: lw $v1, 0x18($sp)
    /* multiply: v1 * s4 -> hi:lo */                            // 0x001090ec: mult $ac3, $v1, $s4
    if (v0 != 0) goto label_0x109288;                           // 0x001090f0: bnez $v0, 0x109288
    s5 = v1 + s6;                                               // 0x001090f4: addu $s5, $v1, $s6
    a0 = local_0;                                               // 0x001090f8: lw $a0, 0($sp)
    v0 = (unsigned)a0 >> 3;                                     // 0x001090fc: srl $v0, $a0, 3
    v0 = s7 << 1;                                               // 0x00109108: sll $v0, $s7, 1
    s0 = s6 + s7;                                               // 0x0010910c: addu $s0, $s6, $s7
    local_10 = v0;                                              // 0x00109110: sw $v0, 0x10($sp)
    /* call function at address in fp */                        // 0x00109118: jalr $fp
    s1 = v0 + s6;                                               // 0x0010911c: addu $s1, $v0, $s6
    if (v0 >= 0) goto label_0x109150;                           // 0x00109120: bgez $v0, 0x109150
    /* call function at address in fp */                        // 0x00109128: jalr $fp
    if (v0 < 0) goto label_0x109180;                            // 0x00109130: bltz $v0, 0x109180
    /* call function at address in fp */                        // 0x00109138: jalr $fp
    v0 = (v0 < 0) ? 1 : 0;                                      // 0x00109144: slti $v0, $v0, 0
    goto label_0x109184;                                        // 0x00109148: b 0x109184
    if (v0 == 0) v1 = s6;                                       // 0x0010914c: movz $v1, $s6, $v0
label_0x109150:
    /* call function at address in fp */                        // 0x00109150: jalr $fp
    if (v0 > 0) goto label_0x109184;                            // 0x00109158: bgtz $v0, 0x109184
    /* call function at address in fp */                        // 0x00109164: jalr $fp
    v0 = (v0 < 0) ? 1 : 0;                                      // 0x00109170: slti $v0, $v0, 0
    goto label_0x109184;                                        // 0x00109174: b 0x109184
    if (v0 == 0) v1 = s1;                                       // 0x00109178: movz $v1, $s1, $v0
    /* nop */                                                   // 0x0010917c: nop 
label_0x109180:
label_0x109184:
    s2 = s3 - s7;                                               // 0x00109184: subu $s2, $s3, $s7
    /* call function at address in fp */                        // 0x00109194: jalr $fp
    s1 = s3 + s7;                                               // 0x00109198: addu $s1, $s3, $s7
    if (v0 >= 0) goto label_0x1091d0;                           // 0x0010919c: bgez $v0, 0x1091d0
    /* call function at address in fp */                        // 0x001091a4: jalr $fp
    if (v0 < 0) goto label_0x109200;                            // 0x001091ac: bltz $v0, 0x109200
    /* call function at address in fp */                        // 0x001091b4: jalr $fp
    v0 = (v0 < 0) ? 1 : 0;                                      // 0x001091bc: slti $v0, $v0, 0
    if (v0 == 0) s1 = s2;                                       // 0x001091c0: movz $s1, $s2, $v0
    goto label_0x109204;                                        // 0x001091c4: b 0x109204
    /* nop */                                                   // 0x001091cc: nop 
label_0x1091d0:
    /* call function at address in fp */                        // 0x001091d0: jalr $fp
    if (v0 > 0) goto label_0x109204;                            // 0x001091d8: bgtzl $v0, 0x109204
    /* call function at address in fp */                        // 0x001091e4: jalr $fp
    v0 = (v0 < 0) ? 1 : 0;                                      // 0x001091ec: slti $v0, $v0, 0
    if (v0 == 0) s2 = s1;                                       // 0x001091f0: movz $s2, $s1, $v0
    goto label_0x109204;                                        // 0x001091f4: b 0x109204
    /* nop */                                                   // 0x001091fc: nop 
label_0x109200:
label_0x109204:
    v1 = local_10;                                              // 0x00109204: lw $v1, 0x10($sp)
    s1 = s5 - s7;                                               // 0x00109208: subu $s1, $s5, $s7
    s2 = s5 - v1;                                               // 0x00109214: subu $s2, $s5, $v1
    /* call function at address in fp */                        // 0x00109218: jalr $fp
    if (v0 >= 0) goto label_0x109250;                           // 0x00109220: bgez $v0, 0x109250
    /* call function at address in fp */                        // 0x00109228: jalr $fp
    if (v0 < 0) goto label_0x109280;                            // 0x00109230: bltz $v0, 0x109280
    /* call function at address in fp */                        // 0x00109238: jalr $fp
    v0 = (v0 < 0) ? 1 : 0;                                      // 0x00109244: slti $v0, $v0, 0
    goto label_0x109284;                                        // 0x00109248: b 0x109284
    if (v0 == 0) a0 = s2;                                       // 0x0010924c: movz $a0, $s2, $v0
label_0x109250:
    /* call function at address in fp */                        // 0x00109250: jalr $fp
    if (v0 > 0) goto label_0x109284;                            // 0x00109258: bgtz $v0, 0x109284
    /* call function at address in fp */                        // 0x00109264: jalr $fp
    v0 = (v0 < 0) ? 1 : 0;                                      // 0x00109270: slti $v0, $v0, 0
    goto label_0x109284;                                        // 0x00109274: b 0x109284
    if (v0 == 0) a0 = s5;                                       // 0x00109278: movz $a0, $s5, $v0
    /* nop */                                                   // 0x0010927c: nop 
label_0x109280:
label_0x109284:
label_0x109288:
    /* call function at address in fp */                        // 0x0010928c: jalr $fp
    if (v0 >= 0) goto label_0x1092c8;                           // 0x00109294: bgez $v0, 0x1092c8
    /* call function at address in fp */                        // 0x0010929c: jalr $fp
    if (v0 < 0) goto label_0x1092f8;                            // 0x001092a4: bltz $v0, 0x1092f8
    /* call function at address in fp */                        // 0x001092ac: jalr $fp
    v0 = (v0 < 0) ? 1 : 0;                                      // 0x001092b8: slti $v0, $v0, 0
    goto label_0x1092fc;                                        // 0x001092bc: b 0x1092fc
    if (v0 == 0) a0 = s0;                                       // 0x001092c0: movz $a0, $s0, $v0
    /* nop */                                                   // 0x001092c4: nop 
label_0x1092c8:
    /* call function at address in fp */                        // 0x001092c8: jalr $fp
    if (v0 > 0) goto label_0x1092fc;                            // 0x001092d0: bgtz $v0, 0x1092fc
    /* call function at address in fp */                        // 0x001092dc: jalr $fp
    v0 = (v0 < 0) ? 1 : 0;                                      // 0x001092e8: slti $v0, $v0, 0
    goto label_0x1092fc;                                        // 0x001092ec: b 0x1092fc
    if (v0 == 0) a0 = s5;                                       // 0x001092f0: movz $a0, $s5, $v0
    /* nop */                                                   // 0x001092f4: nop 
label_0x1092f8:
label_0x1092fc:
    goto label_0x109314;                                        // 0x001092fc: b 0x109314
    /* nop */                                                   // 0x00109304: nop 
label_0x109308:
    a0 = local_0;                                               // 0x00109308: lw $a0, 0($sp)
    a0 = a0 + -1;                                               // 0x0010930c: addiu $a0, $a0, -1
    local_18 = a0;                                              // 0x00109310: sw $a0, 0x18($sp)
label_0x109314:
    v0 = local_4;                                               // 0x00109314: lw $v0, 4($sp)
    if (v0 != 0) goto label_0x109338;                           // 0x00109318: bnez $v0, 0x109338
    v1 = local_4;                                               // 0x0010931c: lw $v1, 4($sp)
    goto label_0x1093b0;                                        // 0x0010932c: b 0x1093b0
    /* nop */                                                   // 0x00109334: nop 
label_0x109338:
    v0 = (v1 < 2) ? 1 : 0;                                      // 0x00109338: slti $v0, $v1, 2
    if (v0 == 0) goto label_0x109380;                           // 0x0010933c: beqz $v0, 0x109380
    v0 = (unsigned)s4 >> 3;                                     // 0x00109344: srl $v0, $s4, 3
label_0x109358:
    a2 = a2 + 8;                                                // 0x00109368: addiu $a2, $a2, 8
    if (a3 > 0) goto label_0x109358;                            // 0x00109370: bgtz $a3, 0x109358
    a0 = a0 + 8;                                                // 0x00109374: addiu $a0, $a0, 8
    goto label_0x1093b4;                                        // 0x00109378: b 0x1093b4
    v0 = local_18;                                              // 0x0010937c: lw $v0, 0x18($sp)
label_0x109380:
    /* nop */                                                   // 0x0010938c: nop 
label_0x109390:
    v1 = *(int8_t*)(a2);                                        // 0x00109390: lb $v1, 0($a2)
    v0 = *(uint8_t*)(a0);                                       // 0x00109398: lbu $v0, 0($a0)
    *(uint8_t*)(a2) = v0;                                       // 0x0010939c: sb $v0, 0($a2)
    a2 = a2 + 1;                                                // 0x001093a0: addiu $a2, $a2, 1
    *(uint8_t*)(a0) = v1;                                       // 0x001093a4: sb $v1, 0($a0)
    if (a1 > 0) goto label_0x109390;                            // 0x001093a8: bgtz $a1, 0x109390
    a0 = a0 + 1;                                                // 0x001093ac: addiu $a0, $a0, 1
label_0x1093b0:
    v0 = local_18;                                              // 0x001093b0: lw $v0, 0x18($sp)
label_0x1093b4:
    s1 = s6 + s4;                                               // 0x001093b4: addu $s1, $s6, $s4
    v1 = local_4;                                               // 0x001093b8: lw $v1, 4($sp)
    /* multiply: v0 * s4 -> hi:lo */                            // 0x001093c0: mult $ac2, $v0, $s4
    t2 = (v1 < 2) ? 1 : 0;                                      // 0x001093c8: slti $t2, $v1, 2
    local_1c = s1;                                              // 0x001093cc: sw $s1, 0x1c($sp)
    s3 = v0 + s6;                                               // 0x001093d0: addu $s3, $v0, $s6
    v0 = (unsigned)s4 >> 3;                                     // 0x001093d4: srl $v0, $s4, 3
    goto label_0x109488;                                        // 0x001093dc: b 0x109488
    /* nop */                                                   // 0x001093e4: nop 
label_0x1093e8:
    /* bnezl $a1, 0x109488 */                                   // 0x001093e8: bnezl $a1, 0x109488
    s1 = s1 + s4;                                               // 0x001093ec: addu $s1, $s1, $s4
    v0 = local_4;                                               // 0x001093f0: lw $v0, 4($sp)
    a0 = 1;                                                     // 0x001093f4: addiu $a0, $zero, 1
    if (v0 != 0) goto label_0x109418;                           // 0x001093f8: bnez $v0, 0x109418
    local_8 = a0;                                               // 0x001093fc: sw $a0, 8($sp)
    goto label_0x109480;                                        // 0x0010940c: b 0x109480
    /* nop */                                                   // 0x00109414: nop 
label_0x109418:
    if (t2 == 0) goto label_0x109450;                           // 0x00109418: beqz $t2, 0x109450
label_0x109428:
    a1 = a1 + 8;                                                // 0x00109438: addiu $a1, $a1, 8
    if (a2 > 0) goto label_0x109428;                            // 0x00109440: bgtz $a2, 0x109428
    a0 = a0 + 8;                                                // 0x00109444: addiu $a0, $a0, 8
    goto label_0x109484;                                        // 0x00109448: b 0x109484
    s5 = s5 + s4;                                               // 0x0010944c: addu $s5, $s5, $s4
label_0x109450:
    /* nop */                                                   // 0x0010945c: nop 
label_0x109460:
    v1 = *(int8_t*)(a1);                                        // 0x00109460: lb $v1, 0($a1)
    v0 = *(uint8_t*)(a0);                                       // 0x00109468: lbu $v0, 0($a0)
    *(uint8_t*)(a1) = v0;                                       // 0x0010946c: sb $v0, 0($a1)
    a1 = a1 + 1;                                                // 0x00109470: addiu $a1, $a1, 1
    *(uint8_t*)(a0) = v1;                                       // 0x00109474: sb $v1, 0($a0)
    if (a2 > 0) goto label_0x109460;                            // 0x00109478: bgtz $a2, 0x109460
    a0 = a0 + 1;                                                // 0x0010947c: addiu $a0, $a0, 1
label_0x109480:
    s5 = s5 + s4;                                               // 0x00109480: addu $s5, $s5, $s4
label_0x109484:
    s1 = s1 + s4;                                               // 0x00109484: addu $s1, $s1, $s4
label_0x109488:
    s0 = ((unsigned)s2 < (unsigned)s1) ? 1 : 0;                 // 0x00109488: sltu $s0, $s2, $s1
    if (s0 != 0) goto label_0x1094c4;                           // 0x0010948c: bnez $s0, 0x1094c4
    v1 = local_4;                                               // 0x00109490: lw $v1, 4($sp)
    /* FPU: subu.qb $zero, $sp, $t2 */                          // 0x0010949c: subu.qb $zero, $sp, $t2
    /* call function at address in fp */                        // 0x001094a4: jalr $fp
    /* FPU: xori.b $w1, $w0, 0xa9 */                            // 0x001094b0: xori.b $w1, $w0, 0xa9
    /* FPU: aver_u.h $w1, $w0, $w10 */                          // 0x001094b4: aver_u.h $w1, $w0, $w10
    if (a1 <= 0) goto label_0x1093e8;                           // 0x001094b8: blez $a1, 0x1093e8
    /* FPU: ld.b $w1, -0x55($zero) */                           // 0x001094bc: ld.b $w1, -0x55($zero)
    v1 = local_4;                                               // 0x001094c0: lw $v1, 4($sp)
label_0x1094c4:
    v0 = (unsigned)s4 >> 3;                                     // 0x001094c4: srl $v0, $s4, 3
    goto label_0x10957c;                                        // 0x001094d0: b 0x10957c
    t0 = (v1 < 2) ? 1 : 0;                                      // 0x001094d4: slti $t0, $v1, 2
label_0x1094d8:
    /* bnezl $a1, 0x109578 */                                   // 0x001094d8: bnezl $a1, 0x109578
    s2 = s2 - s4;                                               // 0x001094dc: subu $s2, $s2, $s4
    v0 = local_4;                                               // 0x001094e0: lw $v0, 4($sp)
    a0 = 1;                                                     // 0x001094e4: addiu $a0, $zero, 1
    if (v0 != 0) goto label_0x109508;                           // 0x001094e8: bnez $v0, 0x109508
    local_8 = a0;                                               // 0x001094ec: sw $a0, 8($sp)
    goto label_0x109570;                                        // 0x001094fc: b 0x109570
    /* nop */                                                   // 0x00109504: nop 
label_0x109508:
    if (t0 == 0) goto label_0x109540;                           // 0x00109508: beqz $t0, 0x109540
label_0x109518:
    a1 = a1 + 8;                                                // 0x00109528: addiu $a1, $a1, 8
    if (a2 > 0) goto label_0x109518;                            // 0x00109530: bgtz $a2, 0x109518
    a0 = a0 + 8;                                                // 0x00109534: addiu $a0, $a0, 8
    goto label_0x109574;                                        // 0x00109538: b 0x109574
    s3 = s3 - s4;                                               // 0x0010953c: subu $s3, $s3, $s4
label_0x109540:
    /* nop */                                                   // 0x0010954c: nop 
label_0x109550:
    v1 = *(int8_t*)(a1);                                        // 0x00109550: lb $v1, 0($a1)
    v0 = *(uint8_t*)(a0);                                       // 0x00109558: lbu $v0, 0($a0)
    *(uint8_t*)(a1) = v0;                                       // 0x0010955c: sb $v0, 0($a1)
    a1 = a1 + 1;                                                // 0x00109560: addiu $a1, $a1, 1
    *(uint8_t*)(a0) = v1;                                       // 0x00109564: sb $v1, 0($a0)
    if (a2 > 0) goto label_0x109550;                            // 0x00109568: bgtz $a2, 0x109550
    a0 = a0 + 1;                                                // 0x0010956c: addiu $a0, $a0, 1
label_0x109570:
    s3 = s3 - s4;                                               // 0x00109570: subu $s3, $s3, $s4
label_0x109574:
    s2 = s2 - s4;                                               // 0x00109574: subu $s2, $s2, $s4
    s0 = ((unsigned)s2 < (unsigned)s1) ? 1 : 0;                 // 0x00109578: sltu $s0, $s2, $s1
label_0x10957c:
    if (s0 != 0) goto label_0x109660;                           // 0x0010957c: bnez $s0, 0x109660
    v0 = local_8;                                               // 0x00109580: lw $v0, 8($sp)
    /* FPU: dpa.w.ph $ac0, $sp, $t0 */                          // 0x0010958c: dpa.w.ph $ac0, $sp, $t0
    /* FPU: subu.qb $zero, $sp, $t2 */                          // 0x00109598: subu.qb $zero, $sp, $t2
    /* call function at address in fp */                        // 0x0010959c: jalr $fp
    /* FPU: ld.b $w0, -0x59($zero) */                           // 0x001095a8: ld.b $w0, -0x59($zero)
    /* FPU: xori.b $w1, $w0, 0xa9 */                            // 0x001095b0: xori.b $w1, $w0, 0xa9
    /* FPU: aver_u.h $w1, $w0, $w10 */                          // 0x001095b4: aver_u.h $w1, $w0, $w10
    if (a1 >= 0) goto label_0x1094d8;                           // 0x001095b8: bgez $a1, 0x1094d8
    /* FPU: ld.b $w1, -0x55($zero) */                           // 0x001095bc: ld.b $w1, -0x55($zero)
    v1 = local_4;                                               // 0x001095c0: lw $v1, 4($sp)
    if (v1 != 0) goto label_0x1095e0;                           // 0x001095c4: bnez $v1, 0x1095e0
    /* nop */                                                   // 0x001095c8: nop 
    goto label_0x109648;                                        // 0x001095d8: b 0x109648
label_0x1095e0:
    if (t2 == 0) goto label_0x109618;                           // 0x001095e0: beqz $t2, 0x109618
label_0x1095f0:
    a1 = a1 + 8;                                                // 0x00109600: addiu $a1, $a1, 8
    if (a2 > 0) goto label_0x1095f0;                            // 0x00109608: bgtz $a2, 0x1095f0
    a0 = a0 + 8;                                                // 0x0010960c: addiu $a0, $a0, 8
    goto label_0x10964c;                                        // 0x00109610: b 0x10964c
    a0 = 1;                                                     // 0x00109614: addiu $a0, $zero, 1
label_0x109618:
    /* nop */                                                   // 0x00109624: nop 
label_0x109628:
    v1 = *(int8_t*)(a1);                                        // 0x00109628: lb $v1, 0($a1)
    v0 = *(uint8_t*)(a0);                                       // 0x00109630: lbu $v0, 0($a0)
    *(uint8_t*)(a1) = v0;                                       // 0x00109634: sb $v0, 0($a1)
    a1 = a1 + 1;                                                // 0x00109638: addiu $a1, $a1, 1
    *(uint8_t*)(a0) = v1;                                       // 0x0010963c: sb $v1, 0($a0)
    if (a2 > 0) goto label_0x109628;                            // 0x00109640: bgtz $a2, 0x109628
    a0 = a0 + 1;                                                // 0x00109644: addiu $a0, $a0, 1
label_0x109648:
    a0 = 1;                                                     // 0x00109648: addiu $a0, $zero, 1
label_0x10964c:
    s1 = s1 + s4;                                               // 0x0010964c: addu $s1, $s1, $s4
    local_8 = a0;                                               // 0x00109650: sw $a0, 8($sp)
    goto label_0x109488;                                        // 0x00109654: b 0x109488
    s2 = s2 - s4;                                               // 0x00109658: subu $s2, $s2, $s4
    /* nop */                                                   // 0x0010965c: nop 
label_0x109660:
    if (v0 != 0) goto label_0x109770;                           // 0x00109660: bnez $v0, 0x109770
    a1 = s1 - s5;                                               // 0x00109664: subu $a1, $s1, $s5
    v0 = local_0;                                               // 0x00109668: lw $v0, 0($sp)
    s3 = local_1c;                                              // 0x0010966c: lw $s3, 0x1c($sp)
    /* multiply: v0 * s4 -> hi:lo */                            // 0x00109670: mult $ac2, $v0, $s4
    v1 = v0 + s6;                                               // 0x00109674: addu $v1, $v0, $s6
    v0 = ((unsigned)s3 < (unsigned)v1) ? 1 : 0;                 // 0x00109678: sltu $v0, $s3, $v1
    /* beqzl $v0, 0x109908 */                                   // 0x0010967c: beqzl $v0, 0x109908
    local_14 = v1;                                              // 0x00109684: sw $v1, 0x14($sp)
    v0 = (unsigned)s4 >> 3;                                     // 0x00109688: srl $v0, $s4, 3
    v1 = local_4;                                               // 0x0010968c: lw $v1, 4($sp)
    s5 = (v1 < 2) ? 1 : 0;                                      // 0x00109698: slti $s5, $v1, 2
    goto label_0x10972c;                                        // 0x0010969c: b 0x10972c
    /* nop */                                                   // 0x001096a4: nop 
label_0x1096a8:
    if (a0 != 0) goto label_0x1096c8;                           // 0x001096a8: bnez $a0, 0x1096c8
    /* nop */                                                   // 0x001096ac: nop 
    goto label_0x109728;                                        // 0x001096bc: b 0x109728
    /* nop */                                                   // 0x001096c4: nop 
label_0x1096c8:
    if (s5 == 0) goto label_0x109700;                           // 0x001096c8: beqz $s5, 0x109700
label_0x1096d8:
    a0 = a0 + 8;                                                // 0x001096e8: addiu $a0, $a0, 8
    if (a1 > 0) goto label_0x1096d8;                            // 0x001096f0: bgtz $a1, 0x1096d8
    a2 = a2 + 8;                                                // 0x001096f4: addiu $a2, $a2, 8
    goto label_0x10972c;                                        // 0x001096f8: b 0x10972c
label_0x109700:
label_0x109708:
    v1 = *(int8_t*)(a0);                                        // 0x00109708: lb $v1, 0($a0)
    v0 = *(uint8_t*)(a2);                                       // 0x00109710: lbu $v0, 0($a2)
    *(uint8_t*)(a0) = v0;                                       // 0x00109714: sb $v0, 0($a0)
    a0 = a0 + 1;                                                // 0x00109718: addiu $a0, $a0, 1
    *(uint8_t*)(a2) = v1;                                       // 0x0010971c: sb $v1, 0($a2)
    if (a1 > 0) goto label_0x109708;                            // 0x00109720: bgtz $a1, 0x109708
    a2 = a2 + 1;                                                // 0x00109724: addiu $a2, $a2, 1
label_0x109728:
label_0x10972c:
    v0 = ((unsigned)s6 < (unsigned)s0) ? 1 : 0;                 // 0x0010972c: sltu $v0, $s6, $s0
    if (v0 == 0) goto label_0x109754;                           // 0x00109730: beqz $v0, 0x109754
    v1 = local_14;                                              // 0x00109734: lw $v1, 0x14($sp)
    s1 = s0 - s4;                                               // 0x00109738: subu $s1, $s0, $s4
    /* call function at address in fp */                        // 0x00109740: jalr $fp
    if (v0 > 0) goto label_0x1096a8;                            // 0x00109748: bgtzl $v0, 0x1096a8
    a0 = local_4;                                               // 0x0010974c: lw $a0, 4($sp)
    v1 = local_14;                                              // 0x00109750: lw $v1, 0x14($sp)
label_0x109754:
    s3 = s3 + s4;                                               // 0x00109754: addu $s3, $s3, $s4
    v0 = ((unsigned)s3 < (unsigned)v1) ? 1 : 0;                 // 0x00109758: sltu $v0, $s3, $v1
    /* bnezl $v0, 0x10972c */                                   // 0x0010975c: bnezl $v0, 0x10972c
    goto label_0x109908;                                        // 0x00109764: b 0x109908
    /* nop */                                                   // 0x0010976c: nop 
label_0x109770:
    v0 = s5 - s6;                                               // 0x00109770: subu $v0, $s5, $s6
    v1 = (v0 < a1) ? 1 : 0;                                     // 0x00109774: slt $v1, $v0, $a1
    if (v1 != 0) a1 = v0;                                       // 0x0010977c: movn $a1, $v0, $v1
    v0 = local_0;                                               // 0x00109780: lw $v0, 0($sp)
    /* multiply: v0 * s4 -> hi:lo */                            // 0x00109784: mult $ac2, $v0, $s4
    if (a1 <= 0) goto label_0x109810;                           // 0x00109788: blez $a1, 0x109810
    s5 = v0 + s6;                                               // 0x0010978c: addu $s5, $v0, $s6
    v1 = local_4;                                               // 0x00109790: lw $v1, 4($sp)
    v0 = (v1 < 2) ? 1 : 0;                                      // 0x00109794: slti $v0, $v1, 2
    if (v0 == 0) goto label_0x1097e0;                           // 0x00109798: beqz $v0, 0x1097e0
    v1 = s1 - a1;                                               // 0x0010979c: subu $v1, $s1, $a1
    v0 = (unsigned)a1 >> 3;                                     // 0x001097a0: srl $v0, $a1, 3
    /* nop */                                                   // 0x001097b4: nop 
label_0x1097b8:
    a0 = a0 + 8;                                                // 0x001097c8: addiu $a0, $a0, 8
    if (a1 > 0) goto label_0x1097b8;                            // 0x001097d0: bgtz $a1, 0x1097b8
    a2 = a2 + 8;                                                // 0x001097d4: addiu $a2, $a2, 8
    goto label_0x109814;                                        // 0x001097d8: b 0x109814
    v1 = s5 - s3;                                               // 0x001097dc: subu $v1, $s5, $s3
label_0x1097e0:
label_0x1097f0:
    v1 = *(int8_t*)(a0);                                        // 0x001097f0: lb $v1, 0($a0)
    v0 = *(uint8_t*)(a2);                                       // 0x001097f8: lbu $v0, 0($a2)
    *(uint8_t*)(a0) = v0;                                       // 0x001097fc: sb $v0, 0($a0)
    a0 = a0 + 1;                                                // 0x00109800: addiu $a0, $a0, 1
    *(uint8_t*)(a2) = v1;                                       // 0x00109804: sb $v1, 0($a2)
    if (a1 > 0) goto label_0x1097f0;                            // 0x00109808: bgtz $a1, 0x1097f0
    a2 = a2 + 1;                                                // 0x0010980c: addiu $a2, $a2, 1
label_0x109810:
    v1 = s5 - s3;                                               // 0x00109810: subu $v1, $s5, $s3
label_0x109814:
    s0 = s3 - s2;                                               // 0x00109814: subu $s0, $s3, $s2
    a1 = v1 - s4;                                               // 0x00109818: subu $a1, $v1, $s4
    v0 = ((unsigned)s0 < (unsigned)a1) ? 1 : 0;                 // 0x0010981c: sltu $v0, $s0, $a1
    if (v0 != 0) a1 = s0;                                       // 0x00109820: movn $a1, $s0, $v0
    if (a1 <= 0) goto label_0x1098ac;                           // 0x00109824: blezl $a1, 0x1098ac
    a0 = local_4;                                               // 0x0010982c: lw $a0, 4($sp)
    v0 = (a0 < 2) ? 1 : 0;                                      // 0x00109830: slti $v0, $a0, 2
    if (v0 == 0) goto label_0x109878;                           // 0x00109834: beqz $v0, 0x109878
    v1 = s5 - a1;                                               // 0x00109838: subu $v1, $s5, $a1
    v0 = (unsigned)a1 >> 3;                                     // 0x0010983c: srl $v0, $a1, 3
label_0x109850:
    a0 = a0 + 8;                                                // 0x00109860: addiu $a0, $a0, 8
    if (a1 > 0) goto label_0x109850;                            // 0x00109868: bgtz $a1, 0x109850
    a2 = a2 + 8;                                                // 0x0010986c: addiu $a2, $a2, 8
    goto label_0x1098ac;                                        // 0x00109870: b 0x1098ac
label_0x109878:
label_0x109888:
    v1 = *(int8_t*)(a0);                                        // 0x00109888: lb $v1, 0($a0)
    v0 = *(uint8_t*)(a2);                                       // 0x00109890: lbu $v0, 0($a2)
    *(uint8_t*)(a0) = v0;                                       // 0x00109894: sb $v0, 0($a0)
    a0 = a0 + 1;                                                // 0x00109898: addiu $a0, $a0, 1
    *(uint8_t*)(a2) = v1;                                       // 0x0010989c: sb $v1, 0($a2)
    if (a1 > 0) goto label_0x109888;                            // 0x001098a0: bgtz $a1, 0x109888
    a2 = a2 + 1;                                                // 0x001098a4: addiu $a2, $a2, 1
label_0x1098ac:
    v0 = ((unsigned)s4 < (unsigned)a1) ? 1 : 0;                 // 0x001098ac: sltu $v0, $s4, $a1
    /* beqzl $v0, 0x1098e0 */                                   // 0x001098b0: beqzl $v0, 0x1098e0
    /* divide: a1 / s4 -> hi:lo */                              // 0x001098b8: divu $zero, $a1, $s4
    /* beqzl $s4, 0x1098d0 */                                   // 0x001098c8: beqzl $s4, 0x1098d0
    /* break (trap) */                                          // 0x001098cc: break 0, 7
    /* mflo $a1 */                                              // 0x001098d0
    func_00109950();  // 0x108f48                                // 0x001098d4: jal 0x108f48
    /* nop */                                                   // 0x001098d8: nop 
    v0 = ((unsigned)s4 < (unsigned)a1) ? 1 : 0;                 // 0x001098e0: sltu $v0, $s4, $a1
    if (v0 == 0) goto label_0x109908;                           // 0x001098e4: beqz $v0, 0x109908
    /* divide: a1 / s4 -> hi:lo */                              // 0x001098ec: divu $zero, $a1, $s4
    /* beqzl $s4, 0x1098f8 */                                   // 0x001098f0: beqzl $s4, 0x1098f8
    /* break (trap) */                                          // 0x001098f4: break 0, 7
    s6 = s5 - a1;                                               // 0x001098f8: subu $s6, $s5, $a1
    /* mflo $v0 */                                              // 0x001098fc
    goto label_0x108f84;                                        // 0x00109900: b 0x108f84
    local_0 = v0;                                               // 0x00109904: sw $v0, 0($sp)
label_0x109908:
    return;                                                     // 0x0010992c: jr $ra
    sp = sp + 0xc0;                                             // 0x00109930: addiu $sp, $sp, 0xc0
}