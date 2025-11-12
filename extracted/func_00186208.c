void func_00186208() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_140, local_144, local_19f, local_340, local_344, local_350, local_540, local_544;
    uint32_t local_548, local_54c, local_550, local_554;
    
    sp = sp + -0x600;                                           // 0x00186208: addiu $sp, $sp, -0x600
    local_544 = a3;                                             // 0x00186244: sw $a3, 0x544($sp)
    local_548 = t1;                                             // 0x00186248: sw $t1, 0x548($sp)
    func_00188568();  // 0x188530                                // 0x0018624c: jal 0x188530
    local_54c = 0;                                              // 0x00186250: sw $zero, 0x54c($sp)
    if (v0 != 0) goto label_0x186268;                           // 0x00186254: bnez $v0, 0x186268
    v1 = 0x898;                                                 // 0x00186258: addiu $v1, $zero, 0x898
    v0 = 0x8101 << 16;                                          // 0x0018625c: lui $v0, 0x8101
    goto label_0x1866f4;                                        // 0x00186260: b 0x1866f4
    v0 = v0 | 0x13;                                             // 0x00186264: ori $v0, $v0, 0x13
label_0x186268:
    v0 = 0x27 << 16;                                            // 0x00186268: lui $v0, 0x27
    /* multiply: s6 * v1 -> hi:lo */                            // 0x0018626c: mult $ac3, $s6, $v1
    v0 = v0 + 0x72c8;                                           // 0x00186270: addiu $v0, $v0, 0x72c8
    v0 = v0 + v1;                                               // 0x00186274: addu $v0, $v0, $v1
    a0 = g_00277b54;  // Global at 0x00277b54                   // 0x00186278: lw $a0, 0x88c($v0)
    if (a0 == 0) goto label_0x1864a4;                           // 0x0018627c: beqz $a0, 0x1864a4
    func_001827f8();  // 0x182670                                // 0x00186288: jal 0x182670
    if (v0 == 0) goto label_0x1862b0;                           // 0x00186290: beqz $v0, 0x1862b0
    v0 = 0x23 << 16;                                            // 0x00186298: lui $v0, 0x23
    s2 = v0 + -0x6088;                                          // 0x0018629c: addiu $s2, $v0, -0x6088
    func_0010ac68();  // 0x10ab20                                // 0x001862a0: jal 0x10ab20
    if (v0 != 0) goto label_0x1862bc;                           // 0x001862a8: bnez $v0, 0x1862bc
    s0 = sp + 0x80;                                             // 0x001862ac: addiu $s0, $sp, 0x80
label_0x1862b0:
    v0 = 0x8101 << 16;                                          // 0x001862b0: lui $v0, 0x8101
    goto label_0x1866f4;                                        // 0x001862b4: b 0x1866f4
    v0 = v0 | 0x16;                                             // 0x001862b8: ori $v0, $v0, 0x16
label_0x1862bc:
    func_0010ae00();  // 0x10ac68                                // 0x001862c0: jal 0x10ac68
    func_0010b4b0();  // 0x10b460                                // 0x001862cc: jal 0x10b460
    a1 = 0x2f;                                                  // 0x001862d0: addiu $a1, $zero, 0x2f
    v1 = sp + 0x100;                                            // 0x001862d4: addiu $v1, $sp, 0x100
    local_550 = v1;                                             // 0x001862dc: sw $v1, 0x550($sp)
    func_0010af38();  // 0x10ae00                                // 0x001862e0: jal 0x10ae00
    g_81010000 = 0;  // Global at 0x81010000                    // 0x001862e4: sb $zero, 0($v0)
    v0 = v0 + 1;                                                // 0x001862e8: addiu $v0, $v0, 1
    a0 = local_550;                                             // 0x001862ec: lw $a0, 0x550($sp)
    func_0010ae00();  // 0x10ac68                                // 0x001862f0: jal 0x10ac68
    a1 = s0 + v0;                                               // 0x001862f4: addu $a1, $s0, $v0
    func_0010af38();  // 0x10ae00                                // 0x001862f8: jal 0x10ae00
    if (v0 != 0) goto label_0x186324;                           // 0x00186300: bnez $v0, 0x186324
    a2 = sp + 0x340;                                            // 0x00186310: addiu $a2, $sp, 0x340
    goto label_0x186338;                                        // 0x0018631c: b 0x186338
    s0 = 1;                                                     // 0x00186320: addiu $s0, $zero, 1
label_0x186324:
    a2 = sp + 0x340;                                            // 0x00186328: addiu $a2, $sp, 0x340
label_0x186338:
    func_00184770();  // 0x184320                                // 0x00186338: jal 0x184320
    /* nop */                                                   // 0x0018633c: nop 
    v1 = 0x8101 << 16;                                          // 0x00186340: lui $v1, 0x8101
    v1 = v1 | 0x11;                                             // 0x00186348: ori $v1, $v1, 0x11
    if (a0 != v1) goto label_0x1866f4;                          // 0x0018634c: bne $a0, $v1, 0x1866f4
    local_540 = v0;                                             // 0x00186350: sw $v0, 0x540($sp)
    v0 = local_340;                                             // 0x00186354: lhu $v0, 0x340($sp)
    v0 = v0 & 0x20;                                             // 0x00186358: andi $v0, $v0, 0x20
    if (v0 != 0) goto label_0x186370;                           // 0x0018635c: bnez $v0, 0x186370
    a1 = sp + 0x140;                                            // 0x00186360: addiu $a1, $sp, 0x140
    v0 = 0x8101 << 16;                                          // 0x00186364: lui $v0, 0x8101
    goto label_0x1866f4;                                        // 0x00186368: b 0x1866f4
    v0 = v0 | 0x14;                                             // 0x0018636c: ori $v0, $v0, 0x14
label_0x186370:
    a2 = local_350;                                             // 0x00186370: lw $a2, 0x350($sp)
    local_554 = a1;                                             // 0x00186374: sw $a1, 0x554($sp)
    func_001830f0();  // 0x182f70                                // 0x0018637c: jal 0x182f70
    if (v1 != 0) goto label_0x1863d4;                           // 0x00186388: bnez $v1, 0x1863d4
    local_540 = v0;                                             // 0x0018638c: sw $v0, 0x540($sp)
    v0 = local_140;                                             // 0x00186390: lhu $v0, 0x140($sp)
    v0 = v0 & 0x8000;                                           // 0x00186394: andi $v0, $v0, 0x8000
    if (v0 == 0) goto label_0x1866b0;                           // 0x00186398: beqz $v0, 0x1866b0
    s3 = sp + 0x180;                                            // 0x0018639c: addiu $s3, $sp, 0x180
    a2 = 0x23 << 16;                                            // 0x001863a0: lui $a2, 0x23
    func_0010ac68();  // 0x10ab20                                // 0x001863a8: jal 0x10ab20
    a1 = a2 + -0x60a0;                                          // 0x001863ac: addiu $a1, $a2, -0x60a0
    if (v0 != 0) goto label_0x1866b0;                           // 0x001863b0: bnez $v0, 0x1866b0
    a2 = local_350;                                             // 0x001863b4: lw $a2, 0x350($sp)
    a1 = local_554;                                             // 0x001863bc: lw $a1, 0x554($sp)
    func_001830f0();  // 0x182f70                                // 0x001863c0: jal 0x182f70
    a3 = 1;                                                     // 0x001863c4: addiu $a3, $zero, 1
    if (v1 == 0) goto label_0x1863f8;                           // 0x001863cc: beqz $v1, 0x1863f8
    local_540 = v0;                                             // 0x001863d0: sw $v0, 0x540($sp)
label_0x1863d4:
    v0 = 0x8101 << 16;                                          // 0x001863d4: lui $v0, 0x8101
    v0 = v0 | 2;                                                // 0x001863d8: ori $v0, $v0, 2
    if (v1 != v0) goto label_0x1866f4;                          // 0x001863dc: bnel $v1, $v0, 0x1866f4
    v0 = local_540;                                             // 0x001863e0: lw $v0, 0x540($sp)
    v0 = 0x8101 << 16;                                          // 0x001863e4: lui $v0, 0x8101
    v0 = v0 | 0x9002;                                           // 0x001863e8: ori $v0, $v0, 0x9002
    local_540 = v0;                                             // 0x001863ec: sw $v0, 0x540($sp)
    goto label_0x1866f4;                                        // 0x001863f0: b 0x1866f4
    v0 = local_540;                                             // 0x001863f4: lw $v0, 0x540($sp)
label_0x1863f8:
    v0 = local_140;                                             // 0x001863f8: lhu $v0, 0x140($sp)
    v0 = v0 & 0x8000;                                           // 0x001863fc: andi $v0, $v0, 0x8000
    if (v0 == 0) goto label_0x1866b0;                           // 0x00186400: beqz $v0, 0x1866b0
    a3 = 0x23 << 16;                                            // 0x00186404: lui $a3, 0x23
    func_0010ac68();  // 0x10ab20                                // 0x0018640c: jal 0x10ab20
    a1 = a3 + -0x6098;                                          // 0x00186410: addiu $a1, $a3, -0x6098
    if (v0 != 0) goto label_0x1866b0;                           // 0x00186414: bnez $v0, 0x1866b0
    v1 = local_344;                                             // 0x00186418: lw $v1, 0x344($sp)
    v0 = (v1 < 2) ? 1 : 0;                                      // 0x0018641c: slti $v0, $v1, 2
    if (v0 != 0) goto label_0x1866b0;                           // 0x00186420: bnez $v0, 0x1866b0
    /* nop */                                                   // 0x00186424: nop 
    v0 = (s7 < v1) ? 1 : 0;                                     // 0x00186428: slt $v0, $s7, $v1
    if (v0 != 0) goto label_0x186448;                           // 0x0018642c: bnez $v0, 0x186448
    t0 = local_548;                                             // 0x00186434: lw $t0, 0x548($sp)
    /* bnezl $t0, 0x1866f0 */                                   // 0x00186438: bnezl $t0, 0x1866f0
    *(uint32_t*)(t0) = 0;                                       // 0x0018643c: sw $zero, 0($t0)
    goto label_0x1866f4;                                        // 0x00186440: b 0x1866f4
label_0x186448:
    if (s0 == 0) goto label_0x1866d8;                           // 0x00186448: beqz $s0, 0x1866d8
    s4 = local_350;                                             // 0x0018644c: lw $s4, 0x350($sp)
    v0 = v1 + -2;                                               // 0x00186450: addiu $v0, $v1, -2
    if (v0 != 0) goto label_0x186470;                           // 0x00186454: bnez $v0, 0x186470
    local_344 = v0;                                             // 0x00186458: sw $v0, 0x344($sp)
    t1 = local_548;                                             // 0x0018645c: lw $t1, 0x548($sp)
    /* bnezl $t1, 0x1866f0 */                                   // 0x00186460: bnezl $t1, 0x1866f0
    g_00230000 = 0;  // Global at 0x00230000                    // 0x00186464: sw $zero, 0($t1)
    goto label_0x1866f4;                                        // 0x00186468: b 0x1866f4
label_0x186470:
    func_00182c38();  // 0x182bd0                                // 0x00186478: jal 0x182bd0
    a2 = sp + 0x540;                                            // 0x0018647c: addiu $a2, $sp, 0x540
    v1 = 0x8101 << 16;                                          // 0x00186480: lui $v1, 0x8101
    a0 = local_540;                                             // 0x00186484: lw $a0, 0x540($sp)
    v1 = v1 | 0x59;                                             // 0x00186488: ori $v1, $v1, 0x59
    if (a0 == v1) goto label_0x1866b0;                          // 0x0018648c: beq $a0, $v1, 0x1866b0
    if (a0 == 0) goto label_0x1866dc;                           // 0x00186494: beqz $a0, 0x1866dc
    v0 = local_344;                                             // 0x00186498: lw $v0, 0x344($sp)
label_0x18649c:
    goto label_0x1866f4;                                        // 0x0018649c: b 0x1866f4
label_0x1864a4:
    v0 = 0x8101 << 16;                                          // 0x001864a4: lui $v0, 0x8101
    goto label_0x1866f4;                                        // 0x001864a8: b 0x1866f4
    v0 = v0 | 0x6f;                                             // 0x001864ac: ori $v0, $v0, 0x6f
label_0x1864b0:
    s0 = v0 + -0x7c00;                                          // 0x001864b4: addiu $s0, $v0, -0x7c00
    func_001873b0();  // 0x187390                                // 0x001864c0: jal 0x187390
    a3 = 1;                                                     // 0x001864c4: addiu $a3, $zero, 1
    if (v0 == 0) goto label_0x1864a4;                           // 0x001864c8: beqz $v0, 0x1864a4
    s0 = s0 + 0x200;                                            // 0x001864d4: addiu $s0, $s0, 0x200
label_0x1864d8:
    a0 = local_554;                                             // 0x001864d8: lw $a0, 0x554($sp)
    v0 = s2 & 7;                                                // 0x001864dc: andi $v0, $s2, 7
    if (v0 == 0) goto label_0x186548;                           // 0x001864e0: beqz $v0, 0x186548
label_0x1864ec:
    v1 = v1 + 0x20;                                             // 0x0018652c: addiu $v1, $v1, 0x20
    a0 = a0 + 0x20;                                             // 0x00186530: addiu $a0, $a0, 0x20
    /* nop */                                                   // 0x00186534: nop 
    if (v1 != v0) goto label_0x1864ec;                          // 0x00186538: bne $v1, $v0, 0x1864ec
    /* nop */                                                   // 0x0018653c: nop 
    goto label_0x186584;                                        // 0x00186540: b 0x186584
    v1 = local_140;                                             // 0x00186544: lhu $v1, 0x140($sp)
label_0x186548:
label_0x18654c:
    v1 = v1 + 0x20;                                             // 0x0018656c: addiu $v1, $v1, 0x20
    a0 = a0 + 0x20;                                             // 0x00186570: addiu $a0, $a0, 0x20
    /* nop */                                                   // 0x00186574: nop 
    if (v1 != v0) goto label_0x18654c;                          // 0x00186578: bne $v1, $v0, 0x18654c
    /* nop */                                                   // 0x0018657c: nop 
    v1 = local_140;                                             // 0x00186580: lhu $v1, 0x140($sp)
label_0x186584:
    v0 = v1 & 0x8000;                                           // 0x00186584: andi $v0, $v1, 0x8000
    if (v0 == 0) goto label_0x18665c;                           // 0x00186588: beqz $v0, 0x18665c
    local_19f = 0;                                              // 0x0018658c: sb $zero, 0x19f($sp)
    v0 = v1 & 0x2000;                                           // 0x00186590: andi $v0, $v1, 0x2000
    if (v0 != 0) goto label_0x186660;                           // 0x00186594: bnez $v0, 0x186660
    v0 = local_344;                                             // 0x00186598: lw $v0, 0x344($sp)
    a1 = local_550;                                             // 0x0018659c: lw $a1, 0x550($sp)
    func_00182508();  // 0x182388                                // 0x001865a0: jal 0x182388
    a0 = sp + 0x180;                                            // 0x001865a4: addiu $a0, $sp, 0x180
    v1 = 1;                                                     // 0x001865a8: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x186660;                          // 0x001865ac: bnel $v0, $v1, 0x186660
    v0 = local_344;                                             // 0x001865b0: lw $v0, 0x344($sp)
    /* bnezl $s7, 0x18665c */                                   // 0x001865b4: bnezl $s7, 0x18665c
    s7 = s7 + -1;                                               // 0x001865b8: addiu $s7, $s7, -1
    if (s1 == 0) goto label_0x186638;                           // 0x001865bc: beqz $s1, 0x186638
    t0 = local_544;                                             // 0x001865c0: lw $t0, 0x544($sp)
    if (t0 <= 0) goto label_0x186638;                           // 0x001865c4: blez $t0, 0x186638
    v1 = local_144;                                             // 0x001865c8: lw $v1, 0x144($sp)
    a0 = s1 + 0x18;                                             // 0x001865cc: addiu $a0, $s1, 0x18
    v0 = local_140;                                             // 0x001865d0: lhu $v0, 0x140($sp)
    *(uint32_t*)((s1) + 0x10) = v1;                             // 0x001865f8: sw $v1, 0x10($s1)
    func_0010ae00();  // 0x10ac68                                // 0x001865fc: jal 0x10ac68
    *(uint16_t*)((s1) + 0x14) = v0;                             // 0x00186600: sh $v0, 0x14($s1)
    t1 = 0x23 << 16;                                            // 0x00186604: lui $t1, 0x23
    func_0010ac68();  // 0x10ab20                                // 0x0018660c: jal 0x10ab20
    a1 = t1 + -0x60a0;                                          // 0x00186610: addiu $a1, $t1, -0x60a0
    if (v0 != 0) goto label_0x186628;                           // 0x00186614: bnez $v0, 0x186628
    v0 = 0x23 << 16;                                            // 0x00186618: lui $v0, 0x23
    v0 = local_340;                                             // 0x0018661c: lhu $v0, 0x340($sp)
    *(uint16_t*)((s1) + 0x14) = v0;                             // 0x00186620: sh $v0, 0x14($s1)
    v0 = 0x23 << 16;                                            // 0x00186624: lui $v0, 0x23
label_0x186628:
    a1 = v0 + -0x6098;                                          // 0x0018662c: addiu $a1, $v0, -0x6098
    func_0010ac68();  // 0x10ab20                                // 0x00186630: jal 0x10ab20
    s1 = s1 + 0x38;                                             // 0x00186634: addiu $s1, $s1, 0x38
label_0x186638:
    v1 = local_544;                                             // 0x00186638: lw $v1, 0x544($sp)
    if (v1 <= 0) goto label_0x18665c;                           // 0x0018663c: blez $v1, 0x18665c
    fp = fp + 1;                                                // 0x00186640: addiu $fp, $fp, 1
    v0 = (fp < v1) ? 1 : 0;                                     // 0x00186644: slt $v0, $fp, $v1
    if (v0 != 0) goto label_0x186660;                           // 0x00186648: bnez $v0, 0x186660
    v0 = local_344;                                             // 0x0018664c: lw $v0, 0x344($sp)
    a1 = 1;                                                     // 0x00186650: addiu $a1, $zero, 1
    goto label_0x186680;                                        // 0x00186654: b 0x186680
    local_54c = a1;                                             // 0x00186658: sw $a1, 0x54c($sp)
label_0x18665c:
    v0 = local_344;                                             // 0x0018665c: lw $v0, 0x344($sp)
label_0x186660:
    v0 = v0 + -1;                                               // 0x00186660: addiu $v0, $v0, -1
    if (v0 == 0) goto label_0x1866bc;                           // 0x00186664: beqz $v0, 0x1866bc
    local_344 = v0;                                             // 0x00186668: sw $v0, 0x344($sp)
    s5 = s5 + 1;                                                // 0x0018666c: addiu $s5, $s5, 1
    s0 = s0 + 0x200;                                            // 0x00186670: addiu $s0, $s0, 0x200
    v0 = (s5 < 2) ? 1 : 0;                                      // 0x00186674: slti $v0, $s5, 2
    if (v0 != 0) goto label_0x1864d8;                           // 0x00186678: bnez $v0, 0x1864d8
    s2 = s2 + 0x200;                                            // 0x0018667c: addiu $s2, $s2, 0x200
label_0x186680:
    a2 = local_54c;                                             // 0x00186680: lw $a2, 0x54c($sp)
    v0 = 1;                                                     // 0x00186684: addiu $v0, $zero, 1
    if (a2 == v0) goto label_0x1866e4;                          // 0x00186688: beq $a2, $v0, 0x1866e4
    func_00182c38();  // 0x182bd0                                // 0x00186694: jal 0x182bd0
    a2 = sp + 0x540;                                            // 0x00186698: addiu $a2, $sp, 0x540
    v1 = 0x8101 << 16;                                          // 0x0018669c: lui $v1, 0x8101
    a0 = local_540;                                             // 0x001866a0: lw $a0, 0x540($sp)
    v1 = v1 | 0x59;                                             // 0x001866a4: ori $v1, $v1, 0x59
    if (a0 != v1) goto label_0x1866c8;                          // 0x001866a8: bne $a0, $v1, 0x1866c8
label_0x1866b0:
    v0 = 0x8101 << 16;                                          // 0x001866b0: lui $v0, 0x8101
    goto label_0x1866f4;                                        // 0x001866b4: b 0x1866f4
    v0 = v0 | 0x9002;                                           // 0x001866b8: ori $v0, $v0, 0x9002
label_0x1866bc:
    a3 = 1;                                                     // 0x001866bc: addiu $a3, $zero, 1
    goto label_0x186680;                                        // 0x001866c0: b 0x186680
    local_54c = a3;                                             // 0x001866c4: sw $a3, 0x54c($sp)
label_0x1866c8:
    if (a0 != 0) goto label_0x18649c;                           // 0x001866c8: bnez $a0, 0x18649c
    t0 = local_54c;                                             // 0x001866cc: lw $t0, 0x54c($sp)
    if (t0 != 0) goto label_0x1866e8;                           // 0x001866d0: bnez $t0, 0x1866e8
    t1 = local_548;                                             // 0x001866d4: lw $t1, 0x548($sp)
label_0x1866d8:
    v0 = local_344;                                             // 0x001866d8: lw $v0, 0x344($sp)
label_0x1866dc:
    if (v0 != 0) goto label_0x1864b0;                           // 0x001866dc: bnez $v0, 0x1864b0
    v0 = 0x28 << 16;                                            // 0x001866e0: lui $v0, 0x28
label_0x1866e4:
    t1 = local_548;                                             // 0x001866e4: lw $t1, 0x548($sp)
label_0x1866e8:
    /* bnezl $t1, 0x1866f0 */                                   // 0x001866e8: bnezl $t1, 0x1866f0
    g_00230000 = fp;  // Global at 0x00230000                   // 0x001866ec: sw $fp, 0($t1)
label_0x1866f4:
    return;                                                     // 0x0018671c: jr $ra
    sp = sp + 0x600;                                            // 0x00186720: addiu $sp, $sp, 0x600
}