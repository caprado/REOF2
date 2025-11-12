void func_00119290() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_14, local_18, local_24, local_30;
    
    sp = sp + -0xc0;                                            // 0x00119290: addiu $sp, $sp, -0xc0
    s6 = 0x25 << 16;                                            // 0x001192ac: lui $s6, 0x25
    s5 = 1;                                                     // 0x001192b4: addiu $s5, $zero, 1
    s4 = 0x25 << 16;                                            // 0x001192bc: lui $s4, 0x25
    func_00117f28();  // 0x117eb8                                // 0x001192c8: jal 0x117eb8
    s3 = s6 + -0x1e40;                                          // 0x001192cc: addiu $s3, $s6, -0x1e40
    func_00118360();  // 0x118330                                // 0x001192d4: jal 0x118330
    a0 = 5;                                                     // 0x001192d8: addiu $a0, $zero, 5
    v0 = 0x1f << 16;                                            // 0x001192dc: lui $v0, 0x1f
    g_0024e188 = s2;  // Global at 0x0024e188                   // 0x001192e0: sw $s2, -0x1e78($s4)
    v1 = g_001f03dc;  // Global at 0x001f03dc                   // 0x001192e4: lw $v1, 0x3dc($v0)
    if (v1 != 0) goto label_0x1192f8;                           // 0x001192e8: bnez $v1, 0x1192f8
    /* nop */                                                   // 0x001192ec: nop 
    func_00118668();  // 0x118460                                // 0x001192f0: jal 0x118460
    /* nop */                                                   // 0x001192f4: nop 
label_0x1192f8:
    if (s0 == 0) goto label_0x11930c;                           // 0x001192f8: beqz $s0, 0x11930c
    /* nop */                                                   // 0x001192fc: nop 
    v0 = g_0024e1c4;  // Global at 0x0024e1c4                   // 0x00119300: lw $v0, 4($s0)
    /* bnezl $v0, 0x11931c */                                   // 0x00119304: bnezl $v0, 0x11931c
    g_0024e5d4 = 0;  // Global at 0x0024e5d4                    // 0x00119308: sw $zero, 0x414($s3)
label_0x11930c:
    func_00118418();  // 0x118360                                // 0x0011930c: jal 0x118360
    /* nop */                                                   // 0x00119310: nop 
    goto label_0x1195dc;                                        // 0x00119314: b 0x1195dc
    v0 = -9;                                                    // 0x00119318: addiu $v0, $zero, -9
    v0 = 2;                                                     // 0x0011931c: addiu $v0, $zero, 2
    if (s1 == v0) goto label_0x1193c8;                          // 0x00119320: beq $s1, $v0, 0x1193c8
    g_0024e5d8 = 0;  // Global at 0x0024e5d8                    // 0x00119324: sw $zero, 0x418($s3)
    v0 = (s1 < 3) ? 1 : 0;                                      // 0x00119328: slti $v0, $s1, 3
    if (v0 == 0) goto label_0x119344;                           // 0x0011932c: beqz $v0, 0x119344
    v0 = 3;                                                     // 0x00119330: addiu $v0, $zero, 3
    if (s1 == s5) goto label_0x119354;                          // 0x00119334: beql $s1, $s5, 0x119354
    s0 = 0x1f << 16;                                            // 0x00119338: lui $s0, 0x1f
    goto label_0x119430;                                        // 0x0011933c: b 0x119430
    v0 = g_001f0000;  // Global at 0x001f0000                   // 0x00119340: lw $v0, 0($s0)
label_0x119344:
    if (s1 == v0) goto label_0x1193f8;                          // 0x00119344: beq $s1, $v0, 0x1193f8
    a0 = 0x1f << 16;                                            // 0x00119348: lui $a0, 0x1f
    goto label_0x119430;                                        // 0x0011934c: b 0x119430
    v0 = g_001f0000;  // Global at 0x001f0000                   // 0x00119350: lw $v0, 0($s0)
label_0x119354:
    PollSema();  // 0x114320                                    // 0x00119354: jal 0x114320
    a0 = g_001f03ec;  // Global at 0x001f03ec                   // 0x00119358: lw $a0, 0x3ec($s0)
    a1 = 0x1f << 16;                                            // 0x0011935c: lui $a1, 0x1f
    v1 = g_001f0358;  // Global at 0x001f0358                   // 0x00119364: lw $v1, 0x358($a1)
    v0 = -1;                                                    // 0x00119368: addiu $v0, $zero, -1
    if (v1 != v0) goto label_0x11939c;                          // 0x0011936c: bne $v1, $v0, 0x11939c
    v0 = 0x20;                                                  // 0x00119370: addiu $v0, $zero, 0x20
    v1 = a1 + 0x358;                                            // 0x00119374: addiu $v1, $a1, 0x358
    a1 = -1;                                                    // 0x00119378: addiu $a1, $zero, -1
    a0 = a0 + 1;                                                // 0x0011937c: addiu $a0, $a0, 1
label_0x119380:
    v0 = (a0 < 0x20) ? 1 : 0;                                   // 0x00119380: slti $v0, $a0, 0x20
    if (v0 == 0) goto label_0x119398;                           // 0x00119384: beqz $v0, 0x119398
    v1 = v1 + 4;                                                // 0x00119388: addiu $v1, $v1, 4
    v0 = g_001f035c;  // Global at 0x001f035c                   // 0x0011938c: lw $v0, 0($v1)
    if (v0 == a1) goto label_0x119380;                          // 0x00119390: beql $v0, $a1, 0x119380
    a0 = a0 + 1;                                                // 0x00119394: addiu $a0, $a0, 1
label_0x119398:
    v0 = 0x20;                                                  // 0x00119398: addiu $v0, $zero, 0x20
label_0x11939c:
    if (a0 != v0) goto label_0x1193b0;                          // 0x0011939c: bne $a0, $v0, 0x1193b0
    v1 = g_0024e188;  // Global at 0x0024e188                   // 0x001193a0: lw $v1, -0x1e78($s4)
    v0 = g_0024e188;  // Global at 0x0024e188                   // 0x001193a4: lw $v0, -0x1e78($s4)
    goto label_0x1193b8;                                        // 0x001193a8: b 0x1193b8
    g_001f0000 = 0;  // Global at 0x001f0000                    // 0x001193ac: sw $zero, 0($v0)
label_0x1193b0:
    v0 = 1;                                                     // 0x001193b0: addiu $v0, $zero, 1
    g_001f035c = v0;  // Global at 0x001f035c                   // 0x001193b4: sw $v0, 0($v1)
label_0x1193b8:
    iSignalSema();  // 0x114300                                 // 0x001193b8: jal 0x114300
    a0 = g_001f03ec;  // Global at 0x001f03ec                   // 0x001193bc: lw $a0, 0x3ec($s0)
    goto label_0x119420;                                        // 0x001193c0: b 0x119420
    /* nop */                                                   // 0x001193c4: nop 
label_0x1193c8:
    a0 = 0x1f << 16;                                            // 0x001193c8: lui $a0, 0x1f
    a1 = 0x440;                                                 // 0x001193cc: addiu $a1, $zero, 0x440
    v0 = g_001f03d8;  // Global at 0x001f03d8                   // 0x001193d0: lw $v0, 0x3d8($a0)
    v1 = 0x25 << 16;                                            // 0x001193d4: lui $v1, 0x25
    v1 = v1 + -0x11b0;                                          // 0x001193d8: addiu $v1, $v1, -0x11b0
    a0 = 0x2000 << 16;                                          // 0x001193dc: lui $a0, 0x2000
    /* multiply: v0 * a1 -> hi:lo */                            // 0x001193e0: mult $ac2, $v0, $a1
    v0 = v0 + v1;                                               // 0x001193e4: addu $v0, $v0, $v1
    v0 = v0 | a0;                                               // 0x001193e8: or $v0, $v0, $a0
    v1 = g_001f0000;  // Global at 0x001f0000                   // 0x001193ec: lw $v1, 0($v0)
    goto label_0x119420;                                        // 0x001193f0: b 0x119420
    *(uint32_t*)(s2) = v1;                                      // 0x001193f4: sw $v1, 0($s2)
label_0x1193f8:
    a1 = 0x440;                                                 // 0x001193f8: addiu $a1, $zero, 0x440
    v0 = g_200003d8;  // Global at 0x200003d8                   // 0x001193fc: lw $v0, 0x3d8($a0)
    v1 = 0x25 << 16;                                            // 0x00119400: lui $v1, 0x25
    v1 = v1 + -0x11b0;                                          // 0x00119404: addiu $v1, $v1, -0x11b0
    a0 = 0x2000 << 16;                                          // 0x00119408: lui $a0, 0x2000
    /* multiply: v0 * a1 -> hi:lo */                            // 0x0011940c: mult $ac2, $v0, $a1
    v0 = v0 + v1;                                               // 0x00119410: addu $v0, $v0, $v1
    v0 = v0 | a0;                                               // 0x00119414: or $v0, $v0, $a0
label_0x119420:
    func_00118418();  // 0x118360                                // 0x00119420: jal 0x118360
    /* nop */                                                   // 0x00119424: nop 
    goto label_0x1195dc;                                        // 0x00119428: b 0x1195dc
label_0x119430:
    g_0024e1d0 = s1;  // Global at 0x0024e1d0                   // 0x00119430: sw $s1, 0x10($s3)
    if (s2 != 0) goto label_0x119450;                           // 0x00119434: bnez $s2, 0x119450
    g_0024e1cc = v0;  // Global at 0x0024e1cc                   // 0x00119438: sw $v0, 0xc($s3)
    g_0024e5dc = 0;  // Global at 0x0024e5dc                    // 0x0011943c: sw $zero, 0x41c($s3)
    s2 = sp + 0x30;                                             // 0x00119440: addiu $s2, $sp, 0x30
    s5 = 0x25 << 16;                                            // 0x00119444: lui $s5, 0x25
    goto label_0x11951c;                                        // 0x00119448: b 0x11951c
    s1 = 0x25 << 16;                                            // 0x0011944c: lui $s1, 0x25
label_0x119450:
    a0 = s3 + 0x14;                                             // 0x00119454: addiu $a0, $s3, 0x14
    v1 = 0x400;                                                 // 0x00119458: addiu $v1, $zero, 0x400
    v0 = a2 | a0;                                               // 0x0011945c: or $v0, $a2, $a0
    v0 = v0 & 7;                                                // 0x00119460: andi $v0, $v0, 7
    if (v0 == 0) goto label_0x1194d8;                           // 0x00119464: beqz $v0, 0x1194d8
    g_0024e5dc = v1;  // Global at 0x0024e5dc                   // 0x00119468: sw $v1, 0x41c($s3)
    v0 = a2 + 0x400;                                            // 0x0011946c: addiu $v0, $a2, 0x400
    s2 = sp + 0x30;                                             // 0x00119470: addiu $s2, $sp, 0x30
    s5 = 0x25 << 16;                                            // 0x00119474: lui $s5, 0x25
    s1 = 0x25 << 16;                                            // 0x00119478: lui $s1, 0x25
label_0x11947c:
    a2 = a2 + 0x20;                                             // 0x001194bc: addiu $a2, $a2, 0x20
    a0 = a0 + 0x20;                                             // 0x001194c0: addiu $a0, $a0, 0x20
    /* nop */                                                   // 0x001194c4: nop 
    if (a2 != v0) goto label_0x11947c;                          // 0x001194c8: bne $a2, $v0, 0x11947c
    /* nop */                                                   // 0x001194cc: nop 
    goto label_0x119520;                                        // 0x001194d0: b 0x119520
    v0 = 1;                                                     // 0x001194d4: addiu $v0, $zero, 1
label_0x1194d8:
    v0 = a2 + 0x400;                                            // 0x001194d8: addiu $v0, $a2, 0x400
    s2 = sp + 0x30;                                             // 0x001194dc: addiu $s2, $sp, 0x30
    s5 = 0x25 << 16;                                            // 0x001194e0: lui $s5, 0x25
    s1 = 0x25 << 16;                                            // 0x001194e4: lui $s1, 0x25
label_0x1194e8:
    a2 = a2 + 0x20;                                             // 0x00119508: addiu $a2, $a2, 0x20
    a0 = a0 + 0x20;                                             // 0x0011950c: addiu $a0, $a0, 0x20
    /* nop */                                                   // 0x00119510: nop 
    if (a2 != v0) goto label_0x1194e8;                          // 0x00119514: bne $a2, $v0, 0x1194e8
    /* nop */                                                   // 0x00119518: nop 
label_0x11951c:
    v0 = 1;                                                     // 0x0011951c: addiu $v0, $zero, 1
label_0x119520:
    local_18 = 0;                                               // 0x00119520: sw $zero, 0x18($sp)
    local_14 = v0;                                              // 0x00119524: sw $v0, 0x14($sp)
    a0 = sp + 0x10;                                             // 0x00119528: addiu $a0, $sp, 0x10
    local_24 = 0;                                               // 0x0011952c: sw $zero, 0x24($sp)
    DeleteSema();  // 0x1142e0                                  // 0x00119530: jal 0x1142e0
    s4 = s1 + -0x1200;                                          // 0x00119534: addiu $s4, $s1, -0x1200
    s0 = s6 + -0x1e40;                                          // 0x00119538: addiu $s0, $s6, -0x1e40
    v0 = 4;                                                     // 0x00119544: addiu $v0, $zero, 4
    g_0024e1c4 = s2;  // Global at 0x0024e1c4                   // 0x00119548: sw $s2, 4($s3)
    g_0024e1c8 = v0;  // Global at 0x0024e1c8                   // 0x0011954c: sw $v0, 8($s3)
    a1 = 0x420;                                                 // 0x00119550: addiu $a1, $zero, 0x420
    func_00116d40();  // 0x116c90                                // 0x00119554: jal 0x116c90
    g_0024e1c0 = s1;  // Global at 0x0024e1c0                   // 0x00119558: sw $s1, 0($s3)
    a0 = s5 + -0x740;                                           // 0x0011955c: addiu $a0, $s5, -0x740
    local_0 = 0;                                                // 0x00119564: sw $zero, 0($sp)
    a1 = 5;                                                     // 0x00119568: addiu $a1, $zero, 5
    t0 = 0x420;                                                 // 0x00119570: addiu $t0, $zero, 0x420
    t2 = 4;                                                     // 0x00119578: addiu $t2, $zero, 4
    func_001178a0();  // 0x1176a8                                // 0x0011957c: jal 0x1176a8
    if (v0 >= 0) goto label_0x1195a4;                           // 0x00119584: bgez $v0, 0x1195a4
    v0 = 0x2000 << 16;                                          // 0x00119588: lui $v0, 0x2000
    SignalSema();  // 0x1142f0                                  // 0x0011958c: jal 0x1142f0
    func_00118418();  // 0x118360                                // 0x00119594: jal 0x118360
    /* nop */                                                   // 0x00119598: nop 
    goto label_0x1195dc;                                        // 0x0011959c: b 0x1195dc
    v0 = -0xb;                                                  // 0x001195a0: addiu $v0, $zero, -0xb
label_0x1195a4:
    v0 = s4 | v0;                                               // 0x001195a4: or $v0, $s4, $v0
    func_00118418();  // 0x118360                                // 0x001195a8: jal 0x118360
    s0 = g_20000000;  // Global at 0x20000000                   // 0x001195ac: lw $s0, 0($v0)
    if (s0 != 0) goto label_0x1195c8;                           // 0x001195b0: bnez $s0, 0x1195c8
    /* nop */                                                   // 0x001195b4: nop 
    SignalSema();  // 0x1142f0                                  // 0x001195b8: jal 0x1142f0
    goto label_0x1195dc;                                        // 0x001195c0: b 0x1195dc
    v0 = -0xb;                                                  // 0x001195c4: addiu $v0, $zero, -0xb
label_0x1195c8:
    PollSema();  // 0x114320                                    // 0x001195c8: jal 0x114320
    SignalSema();  // 0x1142f0                                  // 0x001195d0: jal 0x1142f0
    v0 = local_30;                                              // 0x001195d8: lw $v0, 0x30($sp)
label_0x1195dc:
    return;                                                     // 0x001195fc: jr $ra
    sp = sp + 0xc0;                                             // 0x00119600: addiu $sp, $sp, 0xc0
}