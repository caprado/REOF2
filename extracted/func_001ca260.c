void func_001ca260() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x31 << 16;                                            // 0x001ca260: lui $at, 0x31
    return PollSema();  // Tail call                            // 0x001ca264: j 0x114320
    a0 = g_00316cc8;  // Global at 0x00316cc8                   // 0x001ca268: lw $a0, 0x6cc8($at)
    /* nop */                                                   // 0x001ca26c: nop 
    at = 0x31 << 16;                                            // 0x001ca270: lui $at, 0x31
    return iSignalSema();  // Tail call                         // 0x001ca274: j 0x114300
    a0 = g_00316cc8;  // Global at 0x00316cc8                   // 0x001ca278: lw $a0, 0x6cc8($at)
    /* nop */                                                   // 0x001ca27c: nop 
    sp = sp + -0x60;                                            // 0x001ca280: addiu $sp, $sp, -0x60
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001ca294: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ca2a0: addu.qb $zero, $sp, $s1
    a1 = *(int8_t*)(a0);                                        // 0x001ca2a8: lb $a1, 0($a0)
    if (a1 == 0) goto label_0x1ca328;                           // 0x001ca2ac: beqz $a1, 0x1ca328
    v0 = 0x2e;                                                  // 0x001ca2b4: addiu $v0, $zero, 0x2e
    v1 = 4;                                                     // 0x001ca2b8: addiu $v1, $zero, 4
    /* nop */                                                   // 0x001ca2bc: nop 
label_0x1ca2c0:
    a0 = (a1 < 0x30) ? 1 : 0;                                   // 0x001ca2c0: slti $a0, $a1, 0x30
    if (a0 != 0) goto label_0x1ca2e8;                           // 0x001ca2c4: bnez $a0, 0x1ca2e8
    at = (a1 < 0x3a) ? 1 : 0;                                   // 0x001ca2c8: slti $at, $a1, 0x3a
    if (at == 0) goto label_0x1ca2e8;                           // 0x001ca2cc: beqz $at, 0x1ca2e8
    /* nop */                                                   // 0x001ca2d0: nop 
    a3 = a3 + 1;                                                // 0x001ca2d4: addiu $a3, $a3, 1
    if (a3 != v1) goto label_0x1ca318;                          // 0x001ca2d8: bne $a3, $v1, 0x1ca318
    /* nop */                                                   // 0x001ca2dc: nop 
    goto label_0x1ca480;                                        // 0x001ca2e0: b 0x1ca480
label_0x1ca2e8:
    if (a1 != v0) goto label_0x1ca310;                          // 0x001ca2e8: bne $a1, $v0, 0x1ca310
    /* nop */                                                   // 0x001ca2ec: nop 
    t0 = t0 + 1;                                                // 0x001ca2f0: addiu $t0, $t0, 1
    if (t0 != v1) goto label_0x1ca308;                          // 0x001ca2f4: bne $t0, $v1, 0x1ca308
    /* nop */                                                   // 0x001ca2f8: nop 
    goto label_0x1ca480;                                        // 0x001ca2fc: b 0x1ca480
    /* nop */                                                   // 0x001ca304: nop 
label_0x1ca308:
    goto label_0x1ca318;                                        // 0x001ca308: b 0x1ca318
label_0x1ca310:
    goto label_0x1ca480;                                        // 0x001ca310: b 0x1ca480
label_0x1ca318:
    a2 = a2 + 1;                                                // 0x001ca318: addiu $a2, $a2, 1
    a1 = *(int8_t*)(a2);                                        // 0x001ca31c: lb $a1, 0($a2)
    if (a1 != 0) goto label_0x1ca2c0;                           // 0x001ca320: bnez $a1, 0x1ca2c0
    /* nop */                                                   // 0x001ca324: nop 
label_0x1ca328:
    func_00103788();  // 103788                                // 0x001ca32c: jal 0x103788
    goto label_0x1ca348;                                        // 0x001ca334: b 0x1ca348
    s2 = v0 & 0xff;                                             // 0x001ca338: andi $s2, $v0, 0xff
    /* nop */                                                   // 0x001ca33c: nop 
label_0x1ca340:
    s3 = s3 + 1;                                                // 0x001ca340: addiu $s3, $s3, 1
    /* nop */                                                   // 0x001ca344: nop 
label_0x1ca348:
    func_0010ae00();  // 10ae00                                // 0x001ca348: jal 0x10ae00
    at = ((unsigned)s3 < (unsigned)v0) ? 1 : 0;                 // 0x001ca350: sltu $at, $s3, $v0
    if (at == 0) goto label_0x1ca370;                           // 0x001ca354: beqz $at, 0x1ca370
    v1 = s4 + s3;                                               // 0x001ca358: addu $v1, $s4, $s3
    v0 = 0x2e;                                                  // 0x001ca35c: addiu $v0, $zero, 0x2e
    v1 = *(int8_t*)(v1);                                        // 0x001ca360: lb $v1, 0($v1)
    if (v1 != v0) goto label_0x1ca340;                          // 0x001ca364: bne $v1, $v0, 0x1ca340
    /* nop */                                                   // 0x001ca368: nop 
    /* nop */                                                   // 0x001ca36c: nop 
label_0x1ca370:
    func_0010ae00();  // 10ae00                                // 0x001ca370: jal 0x10ae00
    at = ((unsigned)s3 < (unsigned)v0) ? 1 : 0;                 // 0x001ca378: sltu $at, $s3, $v0
    if (at == 0) goto label_0x1ca388;                           // 0x001ca37c: beqz $at, 0x1ca388
    /* nop */                                                   // 0x001ca380: nop 
    s3 = s3 + 1;                                                // 0x001ca384: addiu $s3, $s3, 1
label_0x1ca388:
    func_00103788();  // 103788                                // 0x001ca388: jal 0x103788
    a0 = s4 + s3;                                               // 0x001ca38c: addu $a0, $s4, $s3
    goto label_0x1ca3a0;                                        // 0x001ca390: b 0x1ca3a0
    s1 = v0 & 0xff;                                             // 0x001ca394: andi $s1, $v0, 0xff
label_0x1ca398:
    s3 = s3 + 1;                                                // 0x001ca398: addiu $s3, $s3, 1
    /* nop */                                                   // 0x001ca39c: nop 
label_0x1ca3a0:
    func_0010ae00();  // 10ae00                                // 0x001ca3a0: jal 0x10ae00
    at = ((unsigned)s3 < (unsigned)v0) ? 1 : 0;                 // 0x001ca3a8: sltu $at, $s3, $v0
    if (at == 0) goto label_0x1ca3c8;                           // 0x001ca3ac: beqz $at, 0x1ca3c8
    v1 = s4 + s3;                                               // 0x001ca3b0: addu $v1, $s4, $s3
    v0 = 0x2e;                                                  // 0x001ca3b4: addiu $v0, $zero, 0x2e
    v1 = *(int8_t*)(v1);                                        // 0x001ca3b8: lb $v1, 0($v1)
    if (v1 != v0) goto label_0x1ca398;                          // 0x001ca3bc: bne $v1, $v0, 0x1ca398
    /* nop */                                                   // 0x001ca3c0: nop 
    /* nop */                                                   // 0x001ca3c4: nop 
label_0x1ca3c8:
    func_0010ae00();  // 10ae00                                // 0x001ca3c8: jal 0x10ae00
    at = ((unsigned)s3 < (unsigned)v0) ? 1 : 0;                 // 0x001ca3d0: sltu $at, $s3, $v0
    if (at == 0) goto label_0x1ca3e0;                           // 0x001ca3d4: beqz $at, 0x1ca3e0
    /* nop */                                                   // 0x001ca3d8: nop 
    s3 = s3 + 1;                                                // 0x001ca3dc: addiu $s3, $s3, 1
label_0x1ca3e0:
    func_00103788();  // 103788                                // 0x001ca3e0: jal 0x103788
    a0 = s4 + s3;                                               // 0x001ca3e4: addu $a0, $s4, $s3
    goto label_0x1ca3f8;                                        // 0x001ca3e8: b 0x1ca3f8
    s0 = v0 & 0xff;                                             // 0x001ca3ec: andi $s0, $v0, 0xff
label_0x1ca3f0:
    s3 = s3 + 1;                                                // 0x001ca3f0: addiu $s3, $s3, 1
    /* nop */                                                   // 0x001ca3f4: nop 
label_0x1ca3f8:
    func_0010ae00();  // 10ae00                                // 0x001ca3f8: jal 0x10ae00
    at = ((unsigned)s3 < (unsigned)v0) ? 1 : 0;                 // 0x001ca400: sltu $at, $s3, $v0
    if (at == 0) goto label_0x1ca420;                           // 0x001ca404: beqz $at, 0x1ca420
    v1 = s4 + s3;                                               // 0x001ca408: addu $v1, $s4, $s3
    v0 = 0x2e;                                                  // 0x001ca40c: addiu $v0, $zero, 0x2e
    v1 = *(int8_t*)(v1);                                        // 0x001ca410: lb $v1, 0($v1)
    if (v1 != v0) goto label_0x1ca3f0;                          // 0x001ca414: bne $v1, $v0, 0x1ca3f0
    /* nop */                                                   // 0x001ca418: nop 
    /* nop */                                                   // 0x001ca41c: nop 
label_0x1ca420:
    func_0010ae00();  // 10ae00                                // 0x001ca420: jal 0x10ae00
    at = ((unsigned)s3 < (unsigned)v0) ? 1 : 0;                 // 0x001ca428: sltu $at, $s3, $v0
    if (at == 0) goto label_0x1ca438;                           // 0x001ca42c: beqz $at, 0x1ca438
    /* nop */                                                   // 0x001ca430: nop 
    s3 = s3 + 1;                                                // 0x001ca434: addiu $s3, $s3, 1
label_0x1ca438:
    func_00103788();  // 103788                                // 0x001ca438: jal 0x103788
    a0 = s4 + s3;                                               // 0x001ca43c: addu $a0, $s4, $s3
    v1 = s1 & 0xff;                                             // 0x001ca440: andi $v1, $s1, 0xff
    v0 = v0 & 0xff;                                             // 0x001ca444: andi $v0, $v0, 0xff
    a0 = v1 << 8;                                               // 0x001ca448: sll $a0, $v1, 8
    a2 = s2 & 0xff;                                             // 0x001ca44c: andi $a2, $s2, 0xff
    a1 = a0 & 0xff00;                                           // 0x001ca450: andi $a1, $a0, 0xff00
    v1 = s0 & 0xff;                                             // 0x001ca454: andi $v1, $s0, 0xff
    a0 = v1 << 0x10;                                            // 0x001ca458: sll $a0, $v1, 0x10
    a1 = a2 | a1;                                               // 0x001ca45c: or $a1, $a2, $a1
    v1 = v0 << 0x18;                                            // 0x001ca460: sll $v1, $v0, 0x18
    v0 = 0xff << 16;                                            // 0x001ca464: lui $v0, 0xff
    a0 = a0 & v0;                                               // 0x001ca468: and $a0, $a0, $v0
    v0 = 0xff00 << 16;                                          // 0x001ca46c: lui $v0, 0xff00
    a0 = a0 | a1;                                               // 0x001ca470: or $a0, $a0, $a1
    v0 = v1 & v0;                                               // 0x001ca474: and $v0, $v1, $v0
    v0 = v0 | a0;                                               // 0x001ca478: or $v0, $v0, $a0
    /* nop */                                                   // 0x001ca47c: nop 
label_0x1ca480:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001ca484: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001ca48c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ca490: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ca494: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ca498: jr $ra
    sp = sp + 0x60;                                             // 0x001ca49c: addiu $sp, $sp, 0x60
}