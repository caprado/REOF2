void func_001831d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_210;
    
    sp = sp + -0x2c0;                                           // 0x001831d8: addiu $sp, $sp, -0x2c0
    v1 = 0x184;                                                 // 0x001831dc: addiu $v1, $zero, 0x184
    v0 = 0x21 << 16;                                            // 0x001831e4: lui $v0, 0x21
    /* multiply: s3 * v1 -> hi:lo */                            // 0x001831f0: mult $ac3, $s3, $v1
    v0 = v0 + 0x6018;                                           // 0x001831f8: addiu $v0, $v0, 0x6018
    s1 = v1 + v0;                                               // 0x00183210: addu $s1, $v1, $v0
    func_00188530();  // 188530                                // 0x0018321c: jal 0x188530
    if (v0 == 0) goto label_0x183250;                           // 0x00183224: beqz $v0, 0x183250
    /* nop */                                                   // 0x00183228: nop 
    if (s6 == 0) goto label_0x183240;                           // 0x0018322c: beqz $s6, 0x183240
    /* nop */                                                   // 0x00183230: nop 
    *(uint32_t*)((s6) + 4) = 0;                                 // 0x00183234: sw $zero, 4($s6)
    *(uint32_t*)(s6) = 0;                                       // 0x00183238: sw $zero, 0($s6)
    *(uint32_t*)((s6) + 8) = 0;                                 // 0x0018323c: sw $zero, 8($s6)
label_0x183240:
    func_00186b50();  // 186b50                                // 0x00183240: jal 0x186b50
    if (v0 != 0) goto label_0x18325c;                           // 0x00183248: bnez $v0, 0x18325c
    s4 = 2;                                                     // 0x0018324c: addiu $s4, $zero, 2
label_0x183250:
    v0 = 0x8101 << 16;                                          // 0x00183250: lui $v0, 0x8101
    goto label_0x183540;                                        // 0x00183254: b 0x183540
    v0 = v0 | 0x13;                                             // 0x00183258: ori $v0, $v0, 0x13
label_0x18325c:
    if (v0 != s4) goto label_0x183284;                          // 0x0018325c: bne $v0, $s4, 0x183284
    fp = 0x27 << 16;                                            // 0x00183260: lui $fp, 0x27
    func_00187b78();  // 187b78                                // 0x00183264: jal 0x187b78
    v1 = 0x898;                                                 // 0x0018326c: addiu $v1, $zero, 0x898
    v0 = fp + 0x72c8;                                           // 0x00183270: addiu $v0, $fp, 0x72c8
    /* multiply: s3 * v1 -> hi:lo */                            // 0x00183274: mult $ac3, $s3, $v1
    a0 = 1;                                                     // 0x00183278: addiu $a0, $zero, 1
    v0 = v0 + v1;                                               // 0x0018327c: addu $v0, $v0, $v1
    g_00277b50 = a0;  // Global at 0x00277b50                   // 0x00183280: sw $a0, 0x888($v0)
label_0x183284:
    v1 = 0x898;                                                 // 0x00183284: addiu $v1, $zero, 0x898
    s2 = fp + 0x72c8;                                           // 0x00183288: addiu $s2, $fp, 0x72c8
    v0 = s2 + s0;                                               // 0x00183290: addu $v0, $s2, $s0
    v1 = g_00277b50;  // Global at 0x00277b50                   // 0x00183294: lw $v1, 0x888($v0)
    if (v1 == 0) goto label_0x1834b0;                           // 0x00183298: beqz $v1, 0x1834b0
    func_00186b30();  // 186b30                                // 0x001832a0: jal 0x186b30
    if (v0 == 0) goto label_0x183304;                           // 0x001832a8: beqz $v0, 0x183304
    /* nop */                                                   // 0x001832ac: nop 
    v0 = local_0;                                               // 0x001832b0: lw $v0, 0($sp)
    if (v0 == 0) goto label_0x183304;                           // 0x001832b4: beqz $v0, 0x183304
    v1 = s2 + s0;                                               // 0x001832b8: addu $v1, $s2, $s0
    a0 = -1;                                                    // 0x001832bc: addiu $a0, $zero, -1
    g_00277b5c = 0;  // Global at 0x00277b5c                    // 0x001832c0: sw $zero, 0x894($v1)
    g_00277ac8 = a0;  // Global at 0x00277ac8                   // 0x001832c8: sw $a0, 0x800($v0)
    a1 = 0x23 << 16;                                            // 0x001832cc: lui $a1, 0x23
    g_00277acc = a0;  // Global at 0x00277acc                   // 0x001832d0: sw $a0, 0x804($v1)
    v0 = s2 + 0x808;                                            // 0x001832d4: addiu $v0, $s2, 0x808
    v0 = s0 + v0;                                               // 0x001832d8: addu $v0, $s0, $v0
    g_00277b58 = 0;  // Global at 0x00277b58                    // 0x001832dc: sw $zero, 0x890($v1)
    t0 = a1 + -0x6088;                                          // 0x001832e0: addiu $t0, $a1, -0x6088
    v1 = g_00229f78;  // Global at 0x00229f78                   // 0x001832e4: lb $v1, 0($t0)
    a2 = g_00229f79;  // Global at 0x00229f79                   // 0x001832e8: lb $a2, 1($t0)
    g_00277ad0 = v1;  // Global at 0x00277ad0                   // 0x001832ec: sb $v1, 0($v0)
    g_00277ad1 = a2;  // Global at 0x00277ad1                   // 0x001832f0: sb $a2, 1($v0)
    func_00186b90();  // 186b90                                // 0x001832f4: jal 0x186b90
    if (v0 != 0) goto label_0x183310;                           // 0x001832fc: bnez $v0, 0x183310
    /* nop */                                                   // 0x00183300: nop 
label_0x183304:
    v0 = 0x8101 << 16;                                          // 0x00183304: lui $v0, 0x8101
    goto label_0x183540;                                        // 0x00183308: b 0x183540
    v0 = v0 | 0x6f;                                             // 0x0018330c: ori $v0, $v0, 0x6f
label_0x183310:
    /* bnezl $s6, 0x183318 */                                   // 0x00183310: bnezl $s6, 0x183318
    *(uint32_t*)(s6) = s4;                                      // 0x00183314: sw $s4, 0($s6)
    a1 = 0x23 << 16;                                            // 0x00183318: lui $a1, 0x23
    a1 = &str_00229f80;  // " 1.2.0.0"                          // 0x00183320: addiu $a1, $a1, -0x6080
    func_0010b0e8();  // 10b0e8                                // 0x00183324: jal 0x10b0e8
    a2 = 0x1b;                                                  // 0x00183328: addiu $a2, $zero, 0x1b
    /* beqzl $v0, 0x183344 */                                   // 0x0018332c: beqzl $v0, 0x183344
    v0 = *(int8_t*)((s1) + 0x1c);                               // 0x00183330: lb $v0, 0x1c($s1)
    /* bnezl $s6, 0x1834d0 */                                   // 0x00183334: bnezl $s6, 0x1834d0
    *(uint32_t*)((s6) + 4) = 0;                                 // 0x00183338: sw $zero, 4($s6)
    goto label_0x1834d0;                                        // 0x0018333c: b 0x1834d0
    /* nop */                                                   // 0x00183340: nop 
    a0 = 0xa;                                                   // 0x00183344: addiu $a0, $zero, 0xa
    a1 = *(int8_t*)((s1) + 0x1e);                               // 0x00183348: lb $a1, 0x1e($s1)
    v0 = v0 + -0x30;                                            // 0x0018334c: addiu $v0, $v0, -0x30
    v1 = a2 + -0x30;                                            // 0x00183354: addiu $v1, $a2, -0x30
    a2 = v1 + a1;                                               // 0x00183358: addu $a2, $v1, $a1
    v0 = (a2 < 0xb) ? 1 : 0;                                    // 0x0018335c: slti $v0, $a2, 0xb
    if (v0 == 0) goto label_0x183374;                           // 0x00183360: beqz $v0, 0x183374
    v0 = 0x8101 << 16;                                          // 0x00183368: lui $v0, 0x8101
    goto label_0x183540;                                        // 0x0018336c: b 0x183540
    v0 = v0 | 0x86;                                             // 0x00183370: ori $v0, $v0, 0x86
label_0x183374:
    func_00183180();  // 183180                                // 0x00183374: jal 0x183180
    a1 = *(int32_t*)((s1) + 0x44);                              // 0x00183380: lw $a1, 0x44($s1)
    a2 = *(int32_t*)((s1) + 0x40);                              // 0x00183388: lw $a2, 0x40($s1)
    func_00187838();  // 187838                                // 0x0018338c: jal 0x187838
    func_00187d40();  // 187d40                                // 0x00183394: jal 0x187d40
    v1 = *(int32_t*)((s1) + 0x30);                              // 0x0018339c: lw $v1, 0x30($s1)
    v0 = 0x3e8;                                                 // 0x001833a0: addiu $v0, $zero, 0x3e8
    /* beqzl $v0, 0x1833ac */                                   // 0x001833a4: beqzl $v0, 0x1833ac
    /* break (trap) */                                          // 0x001833a8: break 0, 7
    /* divide: v1 / v0 -> hi:lo */                              // 0x001833ac: div $zero, $v1, $v0
    a0 = *(int32_t*)((s1) + 0x38);                              // 0x001833b0: lw $a0, 0x38($s1)
    s0 = *(int32_t*)((s1) + 0x34);                              // 0x001833b4: lw $s0, 0x34($s1)
    /* mflo $v1 */                                              // 0x001833b8
    /* multiply: v1 * v0 -> hi:lo */                            // 0x001833bc: mult $ac3, $v1, $v0
    if (a0 <= 0) goto label_0x183410;                           // 0x001833c0: blez $a0, 0x183410
    s7 = v1 + 1;                                                // 0x001833c4: addiu $s7, $v1, 1
    s5 = sp + 0x10;                                             // 0x001833c8: addiu $s5, $sp, 0x10
    /* nop */                                                   // 0x001833cc: nop 
label_0x1833d0:
    if (s4 != s7) goto label_0x1833e4;                          // 0x001833d0: bne $s4, $s7, 0x1833e4
    v0 = *(int32_t*)((s1) + 0x34);                              // 0x001833d8: lw $v0, 0x34($s1)
    v0 = s0 - v0;                                               // 0x001833dc: subu $v0, $s0, $v0
    *(uint32_t*)((s1) + 0x170) = v0;                            // 0x001833e0: sw $v0, 0x170($s1)
label_0x1833e4:
    func_00187418();  // 187418                                // 0x001833e4: jal 0x187418
    s2 = s2 + 1;                                                // 0x001833ec: addiu $s2, $s2, 1
    a0 = *(int32_t*)((s1) + 0x38);                              // 0x001833f0: lw $a0, 0x38($s1)
    v1 = s4 + 1;                                                // 0x001833f4: addiu $v1, $s4, 1
    if (v0 == 0) s4 = v1;                                       // 0x001833f8: movz $s4, $v1, $v0
    a0 = (s2 < a0) ? 1 : 0;                                     // 0x001833fc: slt $a0, $s2, $a0
    if (a0 != 0) goto label_0x1833d0;                           // 0x00183400: bnez $a0, 0x1833d0
    s0 = s0 + 1;                                                // 0x00183404: addiu $s0, $s0, 1
    goto label_0x183418;                                        // 0x00183408: b 0x183418
    a2 = *(int32_t*)((s1) + 0x3c);                              // 0x0018340c: lw $a2, 0x3c($s1)
label_0x183410:
    s5 = sp + 0x10;                                             // 0x00183410: addiu $s5, $sp, 0x10
    a2 = *(int32_t*)((s1) + 0x3c);                              // 0x00183414: lw $a2, 0x3c($s1)
label_0x183418:
    func_00182f70();  // 182f70                                // 0x00183420: jal 0x182f70
    if (v1 != 0) goto label_0x183540;                           // 0x0018342c: bnez $v1, 0x183540
    local_210 = v0;                                             // 0x00183430: sw $v0, 0x210($sp)
    v0 = local_10;                                              // 0x00183434: lhu $v0, 0x10($sp)
    v0 = v0 & 0x8000;                                           // 0x00183438: andi $v0, $v0, 0x8000
    if (v0 == 0) goto label_0x1834d0;                           // 0x0018343c: beqz $v0, 0x1834d0
    s0 = sp + 0x50;                                             // 0x00183440: addiu $s0, $sp, 0x50
    a1 = 0x23 << 16;                                            // 0x00183444: lui $a1, 0x23
    a1 = a1 + -0x60a0;                                          // 0x00183448: addiu $a1, $a1, -0x60a0
    func_0010ab20();  // 10ab20                                // 0x0018344c: jal 0x10ab20
    if (v0 != 0) goto label_0x1834d0;                           // 0x00183454: bnez $v0, 0x1834d0
    a2 = *(int32_t*)((s1) + 0x3c);                              // 0x0018345c: lw $a2, 0x3c($s1)
    func_00182f70();  // 182f70                                // 0x00183464: jal 0x182f70
    a3 = 1;                                                     // 0x00183468: addiu $a3, $zero, 1
    if (v1 != 0) goto label_0x183540;                           // 0x00183470: bnez $v1, 0x183540
    local_210 = v0;                                             // 0x00183474: sw $v0, 0x210($sp)
    v0 = local_10;                                              // 0x00183478: lhu $v0, 0x10($sp)
    v0 = v0 & 0x8000;                                           // 0x0018347c: andi $v0, $v0, 0x8000
    if (v0 == 0) goto label_0x1834d0;                           // 0x00183480: beqz $v0, 0x1834d0
    a1 = 0x23 << 16;                                            // 0x00183484: lui $a1, 0x23
    func_0010ab20();  // 10ab20                                // 0x0018348c: jal 0x10ab20
    a1 = a1 + -0x6098;                                          // 0x00183490: addiu $a1, $a1, -0x6098
    if (v0 != 0) goto label_0x1834d0;                           // 0x00183494: bnez $v0, 0x1834d0
    v1 = fp + 0x72c8;                                           // 0x00183498: addiu $v1, $fp, 0x72c8
    v0 = 0x898;                                                 // 0x0018349c: addiu $v0, $zero, 0x898
    /* multiply: s3 * v0 -> hi:lo */                            // 0x001834a0: mult $ac2, $s3, $v0
    a0 = 1;                                                     // 0x001834a4: addiu $a0, $zero, 1
    v1 = v1 + v0;                                               // 0x001834a8: addu $v1, $v1, $v0
    g_00277b54 = a0;  // Global at 0x00277b54                   // 0x001834ac: sw $a0, 0x88c($v1)
label_0x1834b0:
    v1 = 0x898;                                                 // 0x001834b0: addiu $v1, $zero, 0x898
    v0 = fp + 0x72c8;                                           // 0x001834b4: addiu $v0, $fp, 0x72c8
    /* multiply: s3 * v1 -> hi:lo */                            // 0x001834b8: mult $ac3, $s3, $v1
    v0 = v0 + 0x88c;                                            // 0x001834bc: addiu $v0, $v0, 0x88c
    s0 = v1 + v0;                                               // 0x001834c0: addu $s0, $v1, $v0
    a0 = *(int32_t*)(s0);                                       // 0x001834c4: lw $a0, 0($s0)
    if (a0 != 0) goto label_0x1834dc;                           // 0x001834c8: bnez $a0, 0x1834dc
    /* nop */                                                   // 0x001834cc: nop 
label_0x1834d0:
    v0 = 0x8101 << 16;                                          // 0x001834d0: lui $v0, 0x8101
    goto label_0x183540;                                        // 0x001834d4: b 0x183540
    v0 = v0 | 0x2f;                                             // 0x001834d8: ori $v0, $v0, 0x2f
label_0x1834dc:
    if (s6 == 0) goto label_0x183514;                           // 0x001834dc: beqz $s6, 0x183514
    func_00182e98();  // 182e98                                // 0x001834e4: jal 0x182e98
    a1 = sp + 0x210;                                            // 0x001834e8: addiu $a1, $sp, 0x210
    v1 = local_210;                                             // 0x001834ec: lw $v1, 0x210($sp)
    if (v1 == 0) goto label_0x183500;                           // 0x001834f0: beqz $v1, 0x183500
    goto label_0x183540;                                        // 0x001834f8: b 0x183540
label_0x183500:
    v1 = *(int32_t*)(s0);                                       // 0x00183500: lw $v1, 0($s0)
    v0 = 2;                                                     // 0x00183504: addiu $v0, $zero, 2
    *(uint32_t*)(s6) = v0;                                      // 0x00183508: sw $v0, 0($s6)
    *(uint32_t*)((s6) + 4) = v1;                                // 0x0018350c: sw $v1, 4($s6)
    *(uint32_t*)((s6) + 8) = a2;                                // 0x00183510: sw $a2, 8($s6)
label_0x183514:
    v1 = 0x898;                                                 // 0x00183514: addiu $v1, $zero, 0x898
    v0 = fp + 0x72c8;                                           // 0x00183518: addiu $v0, $fp, 0x72c8
    /* multiply: s3 * v1 -> hi:lo */                            // 0x0018351c: mult $ac3, $s3, $v1
    v0 = v0 + 0x888;                                            // 0x00183520: addiu $v0, $v0, 0x888
    v1 = v1 + v0;                                               // 0x00183524: addu $v1, $v1, $v0
    a0 = g_002772c8;  // Global at 0x002772c8                   // 0x00183528: lw $a0, 0($v1)
    /* beqzl $a0, 0x183540 */                                   // 0x0018352c: beqzl $a0, 0x183540
    v0 = 0x8101 << 16;                                          // 0x00183534: lui $v0, 0x8101
    g_002772c8 = 0;  // Global at 0x002772c8                    // 0x00183538: sw $zero, 0($v1)
    v0 = v0 | 0x9003;                                           // 0x0018353c: ori $v0, $v0, 0x9003
label_0x183540:
    return;                                                     // 0x00183568: jr $ra
    sp = sp + 0x2c0;                                            // 0x0018356c: addiu $sp, $sp, 0x2c0
}