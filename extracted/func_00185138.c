void func_00185138() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_10, local_200, local_202, local_204, local_208, local_209, local_20a, local_20b;
    uint32_t local_20c, local_20d, local_20e, local_210, local_214, local_220, local_4, local_481;
    uint32_t local_482, local_483, local_485, local_486, local_487, local_490, local_494;
    
    sp = sp + -0x540;                                           // 0x00185138: addiu $sp, $sp, -0x540
    func_00183fa0();  // 183fa0                                // 0x0018516c: jal 0x183fa0
    if (v1 != 0) goto label_0x185694;                           // 0x00185178: bnez $v1, 0x185694
    local_490 = v0;                                             // 0x0018517c: sw $v0, 0x490($sp)
    s2 = sp + 0x400;                                            // 0x00185180: addiu $s2, $sp, 0x400
    func_00184048();  // 184048                                // 0x0018518c: jal 0x184048
    if (v1 != 0) goto label_0x185694;                           // 0x00185198: bnez $v1, 0x185694
    local_490 = v0;                                             // 0x0018519c: sw $v0, 0x490($sp)
    v0 = 0 | 0x8417;                                            // 0x001851a0: ori $v0, $zero, 0x8417
    if (s5 == 0) s5 = v0;                                       // 0x001851a4: movz $s5, $v0, $s5
    s7 = s5 & 0x20;                                             // 0x001851a8: andi $s7, $s5, 0x20
    if (s7 == 0) goto label_0x1851d4;                           // 0x001851ac: beqz $s7, 0x1851d4
    func_00182628();  // 182628                                // 0x001851b4: jal 0x182628
    v0 = (v0 < 2) ? 1 : 0;                                      // 0x001851bc: slti $v0, $v0, 2
    if (v0 != 0) goto label_0x1851d4;                           // 0x001851c0: bnez $v0, 0x1851d4
    /* nop */                                                   // 0x001851c4: nop 
    v0 = 0x8101 << 16;                                          // 0x001851c8: lui $v0, 0x8101
    goto label_0x185694;                                        // 0x001851cc: b 0x185694
    v0 = v0 | 0x9004;                                           // 0x001851d0: ori $v0, $v0, 0x9004
label_0x1851d4:
    func_00182628();  // 182628                                // 0x001851d4: jal 0x182628
    v0 = v0 ^ 1;                                                // 0x001851dc: xori $v0, $v0, 1
    s0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x001851e4: sltiu $s0, $v0, 1
    func_00184320();  // 184320                                // 0x001851f4: jal 0x184320
    v1 = 0x8101 << 16;                                          // 0x001851fc: lui $v1, 0x8101
    v1 = v1 | 2;                                                // 0x00185204: ori $v1, $v1, 2
    if (a0 != v1) goto label_0x185694;                          // 0x00185208: bne $a0, $v1, 0x185694
    local_490 = v0;                                             // 0x0018520c: sw $v0, 0x490($sp)
    if (s0 != 0) goto label_0x185238;                           // 0x00185210: bnez $s0, 0x185238
    s1 = sp + 0x490;                                            // 0x00185214: addiu $s1, $sp, 0x490
    v0 = local_4;                                               // 0x00185218: lw $v0, 4($sp)
    v0 = v0 - s3;                                               // 0x0018521c: subu $v0, $v0, $s3
    v0 = (v0 < 0x14) ? 1 : 0;                                   // 0x00185220: slti $v0, $v0, 0x14
    if (v0 != 0) goto label_0x18523c;                           // 0x00185224: bnez $v0, 0x18523c
    v0 = 0x8101 << 16;                                          // 0x0018522c: lui $v0, 0x8101
    goto label_0x185694;                                        // 0x00185230: b 0x185694
    v0 = v0 | 0x17;                                             // 0x00185234: ori $v0, $v0, 0x17
label_0x185238:
label_0x18523c:
    func_00182e98();  // 182e98                                // 0x0018523c: jal 0x182e98
    v1 = local_490;                                             // 0x00185244: lw $v1, 0x490($sp)
    if (v1 == 0) goto label_0x185258;                           // 0x00185248: beqz $v1, 0x185258
    goto label_0x185694;                                        // 0x00185250: b 0x185694
label_0x185258:
    a1 = local_10;                                              // 0x00185258: lw $a1, 0x10($sp)
    a2 = local_4;                                               // 0x00185260: lw $a2, 4($sp)
    func_00184918();  // 184918                                // 0x00185264: jal 0x184918
    v0 = local_490;                                             // 0x00185270: lw $v0, 0x490($sp)
    if (v0 != 0) goto label_0x185698;                           // 0x00185274: bnez $v0, 0x185698
    v0 = (0 < s3) ? 1 : 0;                                      // 0x0018527c: slt $v0, $zero, $s3
    v1 = 1;                                                     // 0x00185280: addiu $v1, $zero, 1
    a0 = 2;                                                     // 0x00185284: addiu $a0, $zero, 2
    s0 = v0 + s0;                                               // 0x00185288: addu $s0, $v0, $s0
    if (s6 != 0) v1 = a0;                                       // 0x0018528c: movn $v1, $a0, $s6
    v1 = (s0 < v1) ? 1 : 0;                                     // 0x00185290: slt $v1, $s0, $v1
    if (v1 == 0) goto label_0x1852a8;                           // 0x00185294: beqz $v1, 0x1852a8
    /* nop */                                                   // 0x00185298: nop 
    v0 = 0x8101 << 16;                                          // 0x0018529c: lui $v0, 0x8101
    goto label_0x185698;                                        // 0x001852a0: b 0x185698
    v0 = v0 | 0x1c;                                             // 0x001852a4: ori $v0, $v0, 0x1c
label_0x1852a8:
    if (s7 == 0) goto label_0x1852e8;                           // 0x001852a8: beqz $s7, 0x1852e8
    func_00182d68();  // 182d68                                // 0x001852b0: jal 0x182d68
    v0 = local_490;                                             // 0x001852bc: lw $v0, 0x490($sp)
    if (v0 != 0) goto label_0x185698;                           // 0x001852c0: bnez $v0, 0x185698
    a2 = -1;                                                    // 0x001852d0: addiu $a2, $zero, -1
    func_00182c38();  // 182c38                                // 0x001852d4: jal 0x182c38
    v0 = local_490;                                             // 0x001852dc: lw $v0, 0x490($sp)
    if (v0 != 0) goto label_0x185698;                           // 0x001852e0: bnez $v0, 0x185698
label_0x1852e8:
    v0 = sp + 0x480;                                            // 0x001852e8: addiu $v0, $sp, 0x480
    local_494 = v0;                                             // 0x001852f0: sw $v0, 0x494($sp)
    func_00187e78();  // 187e78                                // 0x001852f4: jal 0x187e78
    s3 = 0xa;                                                   // 0x001852fc: addiu $s3, $zero, 0xa
    s0 = sp + 0x200;                                            // 0x00185300: addiu $s0, $sp, 0x200
    func_00107c70();  // 107c70                                // 0x0018530c: jal 0x107c70
    a2 = 0x200;                                                 // 0x00185310: addiu $a2, $zero, 0x200
    v1 = local_487;                                             // 0x00185314: lbu $v1, 0x487($sp)
    t6 = -1;                                                    // 0x00185318: addiu $t6, $zero, -1
    t1 = local_486;                                             // 0x0018531c: lbu $t1, 0x486($sp)
    t7 = 2;                                                     // 0x00185320: addiu $t7, $zero, 2
    a3 = local_485;                                             // 0x00185324: lbu $a3, 0x485($sp)
    v0 = (unsigned)v1 >> 4;                                     // 0x00185328: srl $v0, $v1, 4
    a2 = local_483;                                             // 0x0018532c: lbu $a2, 0x483($sp)
    t5 = (unsigned)t1 >> 4;                                     // 0x00185330: srl $t5, $t1, 4
    a1 = local_482;                                             // 0x00185334: lbu $a1, 0x482($sp)
    t2 = (unsigned)a3 >> 4;                                     // 0x00185338: srl $t2, $a3, 4
    a0 = local_481;                                             // 0x0018533c: lbu $a0, 0x481($sp)
    t3 = (unsigned)a2 >> 4;                                     // 0x00185340: srl $t3, $a2, 4
    t4 = (unsigned)a1 >> 4;                                     // 0x00185344: srl $t4, $a1, 4
    /* multiply: v0 * s3 -> hi:lo */                            // 0x00185348: mult $ac2, $v0, $s3
    t0 = (unsigned)a0 >> 4;                                     // 0x0018534c: srl $t0, $a0, 4
    v1 = v1 & 0xf;                                              // 0x00185358: andi $v1, $v1, 0xf
    a3 = a3 & 0xf;                                              // 0x00185360: andi $a3, $a3, 0xf
    v0 = v0 + v1;                                               // 0x00185368: addu $v0, $v0, $v1
    a2 = a2 & 0xf;                                              // 0x00185370: andi $a2, $a2, 0xf
    a1 = a1 & 0xf;                                              // 0x00185374: andi $a1, $a1, 0xf
    a0 = a0 & 0xf;                                              // 0x00185378: andi $a0, $a0, 0xf
    t1 = t1 & 0xf;                                              // 0x0018537c: andi $t1, $t1, 0xf
    t2 = t2 + a3;                                               // 0x00185380: addu $t2, $t2, $a3
    t3 = t3 + a2;                                               // 0x00185384: addu $t3, $t3, $a2
    t4 = t4 + a1;                                               // 0x00185388: addu $t4, $t4, $a1
    t0 = t0 + a0;                                               // 0x0018538c: addu $t0, $t0, $a0
    t5 = t5 + t1;                                               // 0x00185390: addu $t5, $t5, $t1
    if (s6 != 0) t6 = fp;                                       // 0x00185394: movn $t6, $fp, $s6
    if (s6 == 0) t7 = 0;                                        // 0x00185398: movz $t7, $zero, $s6
    v0 = v0 + 0x7d0;                                            // 0x0018539c: addiu $v0, $v0, 0x7d0
    local_200 = s5;                                             // 0x001853a0: sh $s5, 0x200($sp)
    local_210 = t6;                                             // 0x001853a4: sw $t6, 0x210($sp)
    local_204 = t7;                                             // 0x001853ac: sw $t7, 0x204($sp)
    a1 = 0x2f;                                                  // 0x001853b0: addiu $a1, $zero, 0x2f
    local_20e = v0;                                             // 0x001853b4: sh $v0, 0x20e($sp)
    local_20d = t5;                                             // 0x001853b8: sb $t5, 0x20d($sp)
    local_20c = t2;                                             // 0x001853bc: sb $t2, 0x20c($sp)
    local_20b = t3;                                             // 0x001853c0: sb $t3, 0x20b($sp)
    local_20a = t4;                                             // 0x001853c4: sb $t4, 0x20a($sp)
    local_209 = t0;                                             // 0x001853c8: sb $t0, 0x209($sp)
    local_202 = 0;                                              // 0x001853cc: sh $zero, 0x202($sp)
    local_208 = 0;                                              // 0x001853d0: sb $zero, 0x208($sp)
    local_214 = 0;                                              // 0x001853d4: sw $zero, 0x214($sp)
    func_0010b460();  // 10b460                                // 0x001853e8: jal 0x10b460
    local_220 = 0;                                              // 0x001853ec: sw $zero, 0x220($sp)
    a2 = local_10;                                              // 0x0018543c: lw $a2, 0x10($sp)
    func_00184a48();  // 184a48                                // 0x00185440: jal 0x184a48
    a3 = local_4;                                               // 0x00185444: lw $a3, 4($sp)
    if (s5 < 0) goto label_0x185694;                            // 0x0018544c: bltz $s5, 0x185694
    v0 = local_490;                                             // 0x00185450: lw $v0, 0x490($sp)
    if (s7 == 0) goto label_0x185654;                           // 0x00185454: beqz $s7, 0x185654
    s1 = 0x28 << 16;                                            // 0x00185458: lui $s1, 0x28
    s0 = s1 + -0x7c00;                                          // 0x00185460: addiu $s0, $s1, -0x7c00
    a2 = 0x200;                                                 // 0x00185464: addiu $a2, $zero, 0x200
    func_00107c70();  // 107c70                                // 0x0018546c: jal 0x107c70
    s2 = 0 | 0x8427;                                            // 0x00185470: ori $s2, $zero, 0x8427
    v1 = local_487;                                             // 0x00185474: lbu $v1, 0x487($sp)
    t7 = 0x23 << 16;                                            // 0x00185478: lui $t7, 0x23
    t6 = local_486;                                             // 0x0018547c: lbu $t6, 0x486($sp)
    t5 = local_485;                                             // 0x00185484: lbu $t5, 0x485($sp)
    v0 = (unsigned)v1 >> 4;                                     // 0x00185488: srl $v0, $v1, 4
    t4 = local_483;                                             // 0x0018548c: lbu $t4, 0x483($sp)
    t3 = (unsigned)t6 >> 4;                                     // 0x00185490: srl $t3, $t6, 4
    t2 = local_482;                                             // 0x00185494: lbu $t2, 0x482($sp)
    a3 = (unsigned)t5 >> 4;                                     // 0x00185498: srl $a3, $t5, 4
    a2 = local_481;                                             // 0x0018549c: lbu $a2, 0x481($sp)
    t0 = (unsigned)t4 >> 4;                                     // 0x001854a0: srl $t0, $t4, 4
    t1 = (unsigned)t2 >> 4;                                     // 0x001854a4: srl $t1, $t2, 4
    /* multiply: v0 * s3 -> hi:lo */                            // 0x001854a8: mult $ac2, $v0, $s3
    a0 = (unsigned)a2 >> 4;                                     // 0x001854ac: srl $a0, $a2, 4
    v1 = v1 & 0xf;                                              // 0x001854b8: andi $v1, $v1, 0xf
    a2 = a2 & 0xf;                                              // 0x001854c0: andi $a2, $a2, 0xf
    v0 = v0 + v1;                                               // 0x001854c8: addu $v0, $v0, $v1
    t6 = t6 & 0xf;                                              // 0x001854d0: andi $t6, $t6, 0xf
    t5 = t5 & 0xf;                                              // 0x001854d4: andi $t5, $t5, 0xf
    t4 = t4 & 0xf;                                              // 0x001854d8: andi $t4, $t4, 0xf
    t2 = t2 & 0xf;                                              // 0x001854dc: andi $t2, $t2, 0xf
    g_00278400 = s2;  // Global at 0x00278400                   // 0x001854e0: sh $s2, -0x7c00($s1)
    a3 = a3 + t5;                                               // 0x001854e4: addu $a3, $a3, $t5
    t0 = t0 + t4;                                               // 0x001854e8: addu $t0, $t0, $t4
    a0 = a0 + a2;                                               // 0x001854ec: addu $a0, $a0, $a2
    t1 = t1 + t2;                                               // 0x001854f0: addu $t1, $t1, $t2
    v0 = v0 + 0x7d0;                                            // 0x001854f4: addiu $v0, $v0, 0x7d0
    t3 = t3 + t6;                                               // 0x001854f8: addu $t3, $t3, $t6
    g_00278409 = a0;  // Global at 0x00278409                   // 0x001854fc: sb $a0, 9($s0)
    a2 = 0x200;                                                 // 0x00185500: addiu $a2, $zero, 0x200
    g_0027840e = v0;  // Global at 0x0027840e                   // 0x00185504: sh $v0, 0xe($s0)
    g_0027840d = t3;  // Global at 0x0027840d                   // 0x00185508: sb $t3, 0xd($s0)
    g_0027840c = a3;  // Global at 0x0027840c                   // 0x0018550c: sb $a3, 0xc($s0)
    g_0027840b = t0;  // Global at 0x0027840b                   // 0x00185510: sb $t0, 0xb($s0)
    g_0027840a = t1;  // Global at 0x0027840a                   // 0x00185514: sb $t1, 0xa($s0)
    g_00278414 = s5;  // Global at 0x00278414                   // 0x00185518: sw $s5, 0x14($s0)
    g_00278404 = 0;  // Global at 0x00278404                    // 0x0018551c: sw $zero, 4($s0)
    g_00278402 = 0;  // Global at 0x00278402                    // 0x00185520: sh $zero, 2($s0)
    g_00278410 = 0;  // Global at 0x00278410                    // 0x00185524: sw $zero, 0x10($s0)
    t0 = t7 + -0x60a0;                                          // 0x00185538: addiu $t0, $t7, -0x60a0
    v1 = g_00229f60;  // Global at 0x00229f60                   // 0x0018553c: lb $v1, 0($t0)
    a0 = g_00229f61;  // Global at 0x00229f61                   // 0x00185540: lb $a0, 1($t0)
    g_00278440 = v1;  // Global at 0x00278440                   // 0x00185544: sb $v1, 0x40($s0)
    g_00278441 = a0;  // Global at 0x00278441                   // 0x00185548: sb $a0, 0x41($s0)
    s0 = s0 + 0x200;                                            // 0x0018554c: addiu $s0, $s0, 0x200
    func_00107c70();  // 107c70                                // 0x00185550: jal 0x107c70
    v1 = local_487;                                             // 0x00185558: lbu $v1, 0x487($sp)
    t7 = 0x23 << 16;                                            // 0x0018555c: lui $t7, 0x23
    t6 = local_486;                                             // 0x00185560: lbu $t6, 0x486($sp)
    a1 = s1 + -0x7c00;                                          // 0x00185564: addiu $a1, $s1, -0x7c00
    t5 = local_485;                                             // 0x00185568: lbu $t5, 0x485($sp)
    v0 = (unsigned)v1 >> 4;                                     // 0x0018556c: srl $v0, $v1, 4
    t4 = local_483;                                             // 0x00185570: lbu $t4, 0x483($sp)
    t0 = (unsigned)t6 >> 4;                                     // 0x00185574: srl $t0, $t6, 4
    a3 = local_482;                                             // 0x00185578: lbu $a3, 0x482($sp)
    t1 = (unsigned)t5 >> 4;                                     // 0x0018557c: srl $t1, $t5, 4
    a0 = local_481;                                             // 0x00185580: lbu $a0, 0x481($sp)
    t2 = (unsigned)t4 >> 4;                                     // 0x00185584: srl $t2, $t4, 4
    t3 = (unsigned)a3 >> 4;                                     // 0x00185588: srl $t3, $a3, 4
    /* multiply: v0 * s3 -> hi:lo */                            // 0x0018558c: mult $ac2, $v0, $s3
    a2 = (unsigned)a0 >> 4;                                     // 0x00185590: srl $a2, $a0, 4
    v1 = v1 & 0xf;                                              // 0x0018559c: andi $v1, $v1, 0xf
    a3 = a3 & 0xf;                                              // 0x001855a4: andi $a3, $a3, 0xf
    v0 = v0 + v1;                                               // 0x001855ac: addu $v0, $v0, $v1
    a0 = a0 & 0xf;                                              // 0x001855b4: andi $a0, $a0, 0xf
    t6 = t6 & 0xf;                                              // 0x001855b8: andi $t6, $t6, 0xf
    t5 = t5 & 0xf;                                              // 0x001855bc: andi $t5, $t5, 0xf
    t4 = t4 & 0xf;                                              // 0x001855c0: andi $t4, $t4, 0xf
    a2 = a2 + a0;                                               // 0x001855c4: addu $a2, $a2, $a0
    t1 = t1 + t5;                                               // 0x001855c8: addu $t1, $t1, $t5
    v0 = v0 + 0x7d0;                                            // 0x001855cc: addiu $v0, $v0, 0x7d0
    t0 = t0 + t6;                                               // 0x001855d0: addu $t0, $t0, $t6
    t3 = t3 + a3;                                               // 0x001855d4: addu $t3, $t3, $a3
    t2 = t2 + t4;                                               // 0x001855d8: addu $t2, $t2, $t4
    g_00278600 = s2;  // Global at 0x00278600                   // 0x001855dc: sh $s2, 0($s0)
    g_0027860e = v0;  // Global at 0x0027860e                   // 0x001855e0: sh $v0, 0xe($s0)
    g_0027860d = t0;  // Global at 0x0027860d                   // 0x001855e8: sb $t0, 0xd($s0)
    g_0027860c = t1;  // Global at 0x0027860c                   // 0x001855ec: sb $t1, 0xc($s0)
    g_0027860b = t2;  // Global at 0x0027860b                   // 0x001855f0: sb $t2, 0xb($s0)
    g_0027860a = t3;  // Global at 0x0027860a                   // 0x001855f4: sb $t3, 0xa($s0)
    g_00278609 = a2;  // Global at 0x00278609                   // 0x001855f8: sb $a2, 9($s0)
    g_00278604 = 0;  // Global at 0x00278604                    // 0x001855fc: sw $zero, 4($s0)
    g_00278602 = 0;  // Global at 0x00278602                    // 0x00185600: sh $zero, 2($s0)
    g_00278608 = 0;  // Global at 0x00278608                    // 0x00185604: sb $zero, 8($s0)
    g_00278610 = 0;  // Global at 0x00278610                    // 0x00185608: sw $zero, 0x10($s0)
    g_00278614 = 0;  // Global at 0x00278614                    // 0x0018560c: sw $zero, 0x14($s0)
    g_00278620 = 0;  // Global at 0x00278620                    // 0x00185620: sw $zero, 0x20($s0)
    a2 = local_210;                                             // 0x00185624: lw $a2, 0x210($sp)
    v1 = t7 + -0x6098;                                          // 0x00185628: addiu $v1, $t7, -0x6098
    t0 = g_00229f68;  // Global at 0x00229f68                   // 0x0018562c: lb $t0, 0($v1)
    t1 = g_00229f69;  // Global at 0x00229f69                   // 0x00185630: lb $t1, 1($v1)
    v0 = g_00229f6a;  // Global at 0x00229f6a                   // 0x00185634: lb $v0, 2($v1)
    g_00278640 = t0;  // Global at 0x00278640                   // 0x00185638: sb $t0, 0x40($s0)
    g_00278641 = t1;  // Global at 0x00278641                   // 0x0018563c: sb $t1, 0x41($s0)
    g_00278642 = v0;  // Global at 0x00278642                   // 0x00185640: sb $v0, 0x42($s0)
    func_001873b0();  // 1873b0                                // 0x00185644: jal 0x1873b0
    a3 = 1;                                                     // 0x00185648: addiu $a3, $zero, 1
    if (v0 == 0) goto label_0x18568c;                           // 0x0018564c: beqz $v0, 0x18568c
    /* nop */                                                   // 0x00185650: nop 
label_0x185654:
    a1 = local_10;                                              // 0x00185654: lw $a1, 0x10($sp)
    func_00184f18();  // 184f18                                // 0x0018565c: jal 0x184f18
    a2 = local_494;                                             // 0x00185660: lw $a2, 0x494($sp)
    if (v0 != 0) goto label_0x185694;                           // 0x00185664: bnez $v0, 0x185694
    local_490 = v0;                                             // 0x00185668: sw $v0, 0x490($sp)
    func_001829e0();  // 1829e0                                // 0x0018566c: jal 0x1829e0
    if (v0 == 0) goto label_0x18568c;                           // 0x00185674: beqz $v0, 0x18568c
    /* nop */                                                   // 0x00185678: nop 
    func_00186e48();  // 186e48                                // 0x0018567c: jal 0x186e48
    /* bnezl $v0, 0x185694 */                                   // 0x00185684: bnezl $v0, 0x185694
    v0 = local_490;                                             // 0x00185688: lw $v0, 0x490($sp)
label_0x18568c:
    v0 = 0x8101 << 16;                                          // 0x0018568c: lui $v0, 0x8101
    v0 = v0 | 0x6f;                                             // 0x00185690: ori $v0, $v0, 0x6f
label_0x185694:
label_0x185698:
    return;                                                     // 0x001856bc: jr $ra
    sp = sp + 0x540;                                            // 0x001856c0: addiu $sp, $sp, 0x540
}