void func_001c32d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c32d0: addiu $sp, $sp, -0x20
    v0 = *(int8_t*)((a0) + 2);                                  // 0x001c32dc: lb $v0, 2($a0)
    at = ((unsigned)v0 < (unsigned)7) ? 1 : 0;                  // 0x001c32e0: sltiu $at, $v0, 7
    if (at == 0) goto label_0x1c3850;                           // 0x001c32e4: beqz $at, 0x1c3850
    v1 = 0x24 << 16;                                            // 0x001c32ec: lui $v1, 0x24
    v0 = v0 << 2;                                               // 0x001c32f0: sll $v0, $v0, 2
    v1 = v1 + 0x37b0;                                           // 0x001c32f4: addiu $v1, $v1, 0x37b0
    v0 = v0 + v1;                                               // 0x001c32f8: addu $v0, $v0, $v1
    v0 = *(int32_t*)(v0);                                       // 0x001c32fc: lw $v0, 0($v0)
    /* jump to address in v0 */                                 // 0x001c3300: jr $v0
    /* nop */                                                   // 0x001c3304: nop 
    a2 = 1;                                                     // 0x001c3308: addiu $a2, $zero, 1
    v0 = 8;                                                     // 0x001c330c: addiu $v0, $zero, 8
    *(uint8_t*)((s0) + 2) = a2;                                 // 0x001c3310: sb $a2, 2($s0)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c3314: sw $v0, 0x2c($s0)
    a1 = *(int32_t*)((s0) + 0xec);                              // 0x001c3318: lw $a1, 0xec($s0)
    func_001c0090();  // 0x1bffd0                                // 0x001c331c: jal 0x1bffd0
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c3320: lw $a0, 0x24($s0)
    func_001c0bd0();  // 0x1c0bc0                                // 0x001c3324: jal 0x1c0bc0
    /* nop */                                                   // 0x001c3328: nop 
    v1 = -1;                                                    // 0x001c332c: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1c3850;                          // 0x001c3330: beq $v0, $v1, 0x1c3850
    v1 = -0xfb;                                                 // 0x001c3334: addiu $v1, $zero, -0xfb
    if (v0 == v1) goto label_0x1c3414;                          // 0x001c3338: beq $v0, $v1, 0x1c3414
    /* nop */                                                   // 0x001c333c: nop 
    if (v0 == 0) goto label_0x1c33ac;                           // 0x001c3340: beqz $v0, 0x1c33ac
    v1 = -0x100;                                                // 0x001c3348: addiu $v1, $zero, -0x100
    if (v0 == v1) goto label_0x1c3388;                          // 0x001c334c: beq $v0, $v1, 0x1c3388
    v1 = 0x36;                                                  // 0x001c3350: addiu $v1, $zero, 0x36
    v1 = -0xfe;                                                 // 0x001c3354: addiu $v1, $zero, -0xfe
    if (v0 == v1) goto label_0x1c3370;                          // 0x001c3358: beq $v0, $v1, 0x1c3370
    v1 = -0xfd;                                                 // 0x001c335c: addiu $v1, $zero, -0xfd
    if (v0 == v1) goto label_0x1c3370;                          // 0x001c3360: beq $v0, $v1, 0x1c3370
    /* nop */                                                   // 0x001c3364: nop 
    goto label_0x1c343c;                                        // 0x001c3368: b 0x1c343c
    v1 = 3;                                                     // 0x001c336c: addiu $v1, $zero, 3
label_0x1c3370:
    *(uint32_t*)((s0) + 0x2c) = 0;                              // 0x001c3370: sw $zero, 0x2c($s0)
    v0 = 4;                                                     // 0x001c3374: addiu $v0, $zero, 4
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c3378: sb $v0, 2($s0)
    v0 = 1;                                                     // 0x001c337c: addiu $v0, $zero, 1
    goto label_0x1c3850;                                        // 0x001c3380: b 0x1c3850
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c3384: sw $v0, 0x10($s0)
label_0x1c3388:
    v0 = 3;                                                     // 0x001c3388: addiu $v0, $zero, 3
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c338c: sw $v1, 0x2c($s0)
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c3390: sb $v0, 2($s0)
    v1 = 5;                                                     // 0x001c3394: addiu $v1, $zero, 5
    v0 = 1;                                                     // 0x001c3398: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 0x10) = v1;                             // 0x001c339c: sw $v1, 0x10($s0)
    *(uint32_t*)((s0) + 0x30) = v0;                             // 0x001c33a0: sw $v0, 0x30($s0)
    goto label_0x1c3850;                                        // 0x001c33a4: b 0x1c3850
    *(uint32_t*)((s0) + 0x38) = v0;                             // 0x001c33a8: sw $v0, 0x38($s0)
label_0x1c33ac:
    func_001c6e20();  // 0x1c6dc0                                // 0x001c33ac: jal 0x1c6dc0
    /* nop */                                                   // 0x001c33b0: nop 
    if (v0 != 0) goto label_0x1c33e8;                           // 0x001c33b4: bnez $v0, 0x1c33e8
    at = 0x31 << 16;                                            // 0x001c33b8: lui $at, 0x31
    v0 = 2;                                                     // 0x001c33bc: addiu $v0, $zero, 2
    *(uint32_t*)((s0) + 0xf8) = v0;                             // 0x001c33c0: sw $v0, 0xf8($s0)
    a1 = *(int32_t*)((s0) + 0xec);                              // 0x001c33c4: lw $a1, 0xec($s0)
    func_001bfe40();  // 0x1bfda0                                // 0x001c33c8: jal 0x1bfda0
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c33cc: lw $a0, 0x24($s0)
    a0 = 2;                                                     // 0x001c33d0: addiu $a0, $zero, 2
    func_001bfda0();  // 0x1bfcb0                                // 0x001c33d4: jal 0x1bfcb0
    v0 = 6;                                                     // 0x001c33dc: addiu $v0, $zero, 6
    goto label_0x1c3850;                                        // 0x001c33e0: b 0x1c3850
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c33e4: sb $v0, 2($s0)
label_0x1c33e8:
    v0 = 0x39;                                                  // 0x001c33e8: addiu $v0, $zero, 0x39
    g_00313866 = 0;  // Global at 0x00313866                    // 0x001c33ec: sb $zero, 0x3866($at)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c33f0: sw $v0, 0x2c($s0)
    v0 = 3;                                                     // 0x001c33f4: addiu $v0, $zero, 3
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c33f8: sb $v0, 2($s0)
    v0 = 5;                                                     // 0x001c33fc: addiu $v0, $zero, 5
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c3400: sw $v0, 0x10($s0)
    v0 = 1;                                                     // 0x001c3404: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 0x30) = v0;                             // 0x001c3408: sw $v0, 0x30($s0)
    goto label_0x1c3850;                                        // 0x001c340c: b 0x1c3850
    *(uint32_t*)((s0) + 0x38) = v0;                             // 0x001c3410: sw $v0, 0x38($s0)
label_0x1c3414:
    v1 = 0x36;                                                  // 0x001c3414: addiu $v1, $zero, 0x36
    v0 = 3;                                                     // 0x001c3418: addiu $v0, $zero, 3
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c341c: sw $v1, 0x2c($s0)
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c3420: sb $v0, 2($s0)
    v1 = 5;                                                     // 0x001c3424: addiu $v1, $zero, 5
    v0 = 1;                                                     // 0x001c3428: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 0x10) = v1;                             // 0x001c342c: sw $v1, 0x10($s0)
    *(uint32_t*)((s0) + 0x30) = v0;                             // 0x001c3430: sw $v0, 0x30($s0)
    goto label_0x1c3850;                                        // 0x001c3434: b 0x1c3850
    *(uint32_t*)((s0) + 0x38) = v0;                             // 0x001c3438: sw $v0, 0x38($s0)
label_0x1c343c:
    v0 = v0 & 0xff;                                             // 0x001c343c: andi $v0, $v0, 0xff
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c3440: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c3444: sw $v0, 0x34($s0)
    a1 = *(int32_t*)((s0) + 0x34);                              // 0x001c3448: lw $a1, 0x34($s0)
    if (a1 == v1) goto label_0x1c34c4;                          // 0x001c344c: beq $a1, $v1, 0x1c34c4
    /* nop */                                                   // 0x001c3450: nop 
    v1 = 4;                                                     // 0x001c3454: addiu $v1, $zero, 4
    if (a1 == v1) goto label_0x1c34a8;                          // 0x001c3458: beq $a1, $v1, 0x1c34a8
    v0 = 0x1d;                                                  // 0x001c345c: addiu $v0, $zero, 0x1d
    v0 = 2;                                                     // 0x001c3460: addiu $v0, $zero, 2
    if (a1 == v0) goto label_0x1c3494;                          // 0x001c3464: beq $a1, $v0, 0x1c3494
    a0 = 1;                                                     // 0x001c3468: addiu $a0, $zero, 1
    if (a1 == a0) goto label_0x1c347c;                          // 0x001c346c: beq $a1, $a0, 0x1c347c
    v1 = 0x1c;                                                  // 0x001c3470: addiu $v1, $zero, 0x1c
    goto label_0x1c3854;                                        // 0x001c3474: b 0x1c3854
    v0 = 1;                                                     // 0x001c3478: addiu $v0, $zero, 1
label_0x1c347c:
    v0 = 5;                                                     // 0x001c347c: addiu $v0, $zero, 5
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c3480: sw $v1, 0x2c($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c3484: sw $v0, 0x10($s0)
    *(uint32_t*)((s0) + 0x30) = a0;                             // 0x001c3488: sw $a0, 0x30($s0)
    goto label_0x1c3850;                                        // 0x001c348c: b 0x1c3850
    *(uint32_t*)((s0) + 0x38) = a0;                             // 0x001c3490: sw $a0, 0x38($s0)
label_0x1c3494:
    *(uint32_t*)((s0) + 0x2c) = 0;                              // 0x001c3494: sw $zero, 0x2c($s0)
    v0 = 1;                                                     // 0x001c3498: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c349c: sb $v1, 2($s0)
    goto label_0x1c3850;                                        // 0x001c34a0: b 0x1c3850
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c34a4: sw $v0, 0x10($s0)
label_0x1c34a8:
    v1 = 5;                                                     // 0x001c34a8: addiu $v1, $zero, 5
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c34ac: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c34b0: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 0x10) = v1;                             // 0x001c34b4: sw $v1, 0x10($s0)
    *(uint32_t*)((s0) + 0x30) = v0;                             // 0x001c34b8: sw $v0, 0x30($s0)
    goto label_0x1c3850;                                        // 0x001c34bc: b 0x1c3850
    *(uint32_t*)((s0) + 0x38) = v0;                             // 0x001c34c0: sw $v0, 0x38($s0)
label_0x1c34c4:
    *(uint32_t*)((s0) + 0x2c) = 0;                              // 0x001c34c4: sw $zero, 0x2c($s0)
    v0 = 4;                                                     // 0x001c34c8: addiu $v0, $zero, 4
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c34cc: sb $v0, 2($s0)
    v0 = 1;                                                     // 0x001c34d0: addiu $v0, $zero, 1
    goto label_0x1c3850;                                        // 0x001c34d4: b 0x1c3850
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c34d8: sw $v0, 0x10($s0)
    func_001c0bd0();  // 0x1c0bc0                                // 0x001c34dc: jal 0x1c0bc0
    /* nop */                                                   // 0x001c34e0: nop 
    v1 = -1;                                                    // 0x001c34e4: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1c361c;                          // 0x001c34e8: beq $v0, $v1, 0x1c361c
    v1 = -0x100;                                                // 0x001c34ec: addiu $v1, $zero, -0x100
    if (v0 == v1) goto label_0x1c3568;                          // 0x001c34f0: beq $v0, $v1, 0x1c3568
    /* nop */                                                   // 0x001c34f4: nop 
    if (v0 == 0) goto label_0x1c3508;                           // 0x001c34f8: beqz $v0, 0x1c3508
    goto label_0x1c3590;                                        // 0x001c3500: b 0x1c3590
    a0 = 3;                                                     // 0x001c3504: addiu $a0, $zero, 3
label_0x1c3508:
    func_001c6e20();  // 0x1c6dc0                                // 0x001c3508: jal 0x1c6dc0
    /* nop */                                                   // 0x001c350c: nop 
    if (v0 != 0) goto label_0x1c353c;                           // 0x001c3510: bnez $v0, 0x1c353c
    at = 0x31 << 16;                                            // 0x001c3514: lui $at, 0x31
    v0 = 0x1a;                                                  // 0x001c3518: addiu $v0, $zero, 0x1a
    func_001c0c00();  // 0x1c0bf0                                // 0x001c351c: jal 0x1c0bf0
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c3520: sw $v0, 0x2c($s0)
    v1 = 4;                                                     // 0x001c3524: addiu $v1, $zero, 4
    v0 = 0x3c;                                                  // 0x001c3528: addiu $v0, $zero, 0x3c
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c352c: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x34) = 0;                              // 0x001c3530: sw $zero, 0x34($s0)
    goto label_0x1c361c;                                        // 0x001c3534: b 0x1c361c
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c3538: sw $v0, 0x10($s0)
label_0x1c353c:
    v0 = 0x39;                                                  // 0x001c353c: addiu $v0, $zero, 0x39
    g_00313866 = 0;  // Global at 0x00313866                    // 0x001c3540: sb $zero, 0x3866($at)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c3544: sw $v0, 0x2c($s0)
    v0 = 3;                                                     // 0x001c3548: addiu $v0, $zero, 3
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c354c: sb $v0, 2($s0)
    v0 = 5;                                                     // 0x001c3550: addiu $v0, $zero, 5
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c3554: sw $v0, 0x10($s0)
    v0 = 1;                                                     // 0x001c3558: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 0x30) = v0;                             // 0x001c355c: sw $v0, 0x30($s0)
    goto label_0x1c361c;                                        // 0x001c3560: b 0x1c361c
    *(uint32_t*)((s0) + 0x38) = v0;                             // 0x001c3564: sw $v0, 0x38($s0)
label_0x1c3568:
    v1 = 3;                                                     // 0x001c3568: addiu $v1, $zero, 3
    v0 = 0x39;                                                  // 0x001c356c: addiu $v0, $zero, 0x39
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c3570: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c3574: sw $v0, 0x2c($s0)
    v1 = 5;                                                     // 0x001c3578: addiu $v1, $zero, 5
    v0 = 1;                                                     // 0x001c357c: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 0x10) = v1;                             // 0x001c3580: sw $v1, 0x10($s0)
    *(uint32_t*)((s0) + 0x30) = v0;                             // 0x001c3584: sw $v0, 0x30($s0)
    goto label_0x1c361c;                                        // 0x001c3588: b 0x1c361c
    *(uint32_t*)((s0) + 0x38) = v0;                             // 0x001c358c: sw $v0, 0x38($s0)
label_0x1c3590:
    v1 = v0 & 0xff;                                             // 0x001c3590: andi $v1, $v0, 0xff
    *(uint8_t*)((s0) + 2) = a0;                                 // 0x001c3594: sb $a0, 2($s0)
    v0 = 4;                                                     // 0x001c3598: addiu $v0, $zero, 4
    *(uint32_t*)((s0) + 0x34) = v1;                             // 0x001c359c: sw $v1, 0x34($s0)
    v1 = *(int32_t*)((s0) + 0x34);                              // 0x001c35a0: lw $v1, 0x34($s0)
    if (v1 == v0) goto label_0x1c3600;                          // 0x001c35a4: beq $v1, $v0, 0x1c3600
    /* nop */                                                   // 0x001c35a8: nop 
    if (v1 == a0) goto label_0x1c35e8;                          // 0x001c35ac: beq $v1, $a0, 0x1c35e8
    v0 = 2;                                                     // 0x001c35b0: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1c35e8;                          // 0x001c35b4: beq $v1, $v0, 0x1c35e8
    a0 = 1;                                                     // 0x001c35b8: addiu $a0, $zero, 1
    if (v1 == a0) goto label_0x1c35cc;                          // 0x001c35bc: beq $v1, $a0, 0x1c35cc
    /* nop */                                                   // 0x001c35c0: nop 
    goto label_0x1c3620;                                        // 0x001c35c4: b 0x1c3620
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c35c8: lw $v0, -0x64d8($gp)
label_0x1c35cc:
    v1 = 0x1c;                                                  // 0x001c35cc: addiu $v1, $zero, 0x1c
    v0 = 5;                                                     // 0x001c35d0: addiu $v0, $zero, 5
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c35d4: sw $v1, 0x2c($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c35d8: sw $v0, 0x10($s0)
    *(uint32_t*)((s0) + 0x30) = a0;                             // 0x001c35dc: sw $a0, 0x30($s0)
    goto label_0x1c361c;                                        // 0x001c35e0: b 0x1c361c
    *(uint32_t*)((s0) + 0x38) = a0;                             // 0x001c35e4: sw $a0, 0x38($s0)
label_0x1c35e8:
    *(uint32_t*)((s0) + 0x2c) = 0;                              // 0x001c35e8: sw $zero, 0x2c($s0)
    v0 = 4;                                                     // 0x001c35ec: addiu $v0, $zero, 4
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c35f0: sb $v0, 2($s0)
    v0 = 1;                                                     // 0x001c35f4: addiu $v0, $zero, 1
    goto label_0x1c361c;                                        // 0x001c35f8: b 0x1c361c
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c35fc: sw $v0, 0x10($s0)
label_0x1c3600:
    v0 = 0x1d;                                                  // 0x001c3600: addiu $v0, $zero, 0x1d
    v1 = 5;                                                     // 0x001c3604: addiu $v1, $zero, 5
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c3608: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c360c: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 0x10) = v1;                             // 0x001c3610: sw $v1, 0x10($s0)
    *(uint32_t*)((s0) + 0x30) = v0;                             // 0x001c3614: sw $v0, 0x30($s0)
    *(uint32_t*)((s0) + 0x38) = v0;                             // 0x001c3618: sw $v0, 0x38($s0)
label_0x1c361c:
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c361c: lw $v0, -0x64d8($gp)
label_0x1c3620:
    goto label_0x1c3850;                                        // 0x001c3620: b 0x1c3850
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x001c3624: sw $v0, 0x14($s0)
    v1 = *(uint16_t*)((s0) + 0xa);                              // 0x001c3628: lhu $v1, 0xa($s0)
    v0 = v1 & 0x20;                                             // 0x001c362c: andi $v0, $v1, 0x20
    if (v0 == 0) goto label_0x1c3670;                           // 0x001c3630: beqz $v0, 0x1c3670
    /* nop */                                                   // 0x001c3634: nop 
    func_001c7470();  // 0x1c7460                                // 0x001c3638: jal 0x1c7460
    /* nop */                                                   // 0x001c363c: nop 
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x001c3640: sw $zero, 0x30($s0)
    v1 = 1;                                                     // 0x001c3644: addiu $v1, $zero, 1
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x001c3648: lw $v0, 0x38($s0)
    if (v0 != v1) goto label_0x1c365c;                          // 0x001c364c: bne $v0, $v1, 0x1c365c
    /* nop */                                                   // 0x001c3650: nop 
    goto label_0x1c3850;                                        // 0x001c3654: b 0x1c3850
    *(uint8_t*)((s0) + 2) = 0;                                  // 0x001c3658: sb $zero, 2($s0)
label_0x1c365c:
    *(uint32_t*)((s0) + 0x2c) = 0;                              // 0x001c365c: sw $zero, 0x2c($s0)
    v0 = 4;                                                     // 0x001c3660: addiu $v0, $zero, 4
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c3664: sb $v0, 2($s0)
    goto label_0x1c3850;                                        // 0x001c3668: b 0x1c3850
    *(uint32_t*)((s0) + 0x10) = v1;                             // 0x001c366c: sw $v1, 0x10($s0)
label_0x1c3670:
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x001c3670: lw $v0, 0x10($s0)
    if (v0 == 0) goto label_0x1c3688;                           // 0x001c3674: beqz $v0, 0x1c3688
    /* nop */                                                   // 0x001c3678: nop 
    v0 = v0 + -1;                                               // 0x001c367c: addiu $v0, $v0, -1
    goto label_0x1c3850;                                        // 0x001c3680: b 0x1c3850
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c3684: sw $v0, 0x10($s0)
label_0x1c3688:
    v0 = v1 & 8;                                                // 0x001c3688: andi $v0, $v1, 8
    if (v0 == 0) goto label_0x1c36a4;                           // 0x001c368c: beqz $v0, 0x1c36a4
    v0 = v1 & 4;                                                // 0x001c3690: andi $v0, $v1, 4
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x001c3694: lw $v0, 0x38($s0)
    if (v0 == 0) goto label_0x1c36bc;                           // 0x001c3698: beqz $v0, 0x1c36bc
    /* nop */                                                   // 0x001c369c: nop 
    v0 = v1 & 4;                                                // 0x001c36a0: andi $v0, $v1, 4
label_0x1c36a4:
    if (v0 == 0) goto label_0x1c3850;                           // 0x001c36a4: beqz $v0, 0x1c3850
    /* nop */                                                   // 0x001c36a8: nop 
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c36ac: lw $v1, 0x38($s0)
    v0 = 1;                                                     // 0x001c36b0: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1c3850;                          // 0x001c36b4: bne $v1, $v0, 0x1c3850
    /* nop */                                                   // 0x001c36b8: nop 
label_0x1c36bc:
    func_001c7480();  // 0x1c7470                                // 0x001c36bc: jal 0x1c7470
    /* nop */                                                   // 0x001c36c0: nop 
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c36c4: lw $v1, 0x38($s0)
    v0 = 5;                                                     // 0x001c36c8: addiu $v0, $zero, 5
    v1 = v1 ^ 1;                                                // 0x001c36cc: xori $v1, $v1, 1
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c36d0: sw $v1, 0x38($s0)
    goto label_0x1c3850;                                        // 0x001c36d4: b 0x1c3850
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c36d8: sw $v0, 0x10($s0)
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x001c36dc: lw $v0, 0x10($s0)
    v0 = v0 + -1;                                               // 0x001c36e0: addiu $v0, $v0, -1
    if (v0 != 0) goto label_0x1c3850;                           // 0x001c36e4: bnez $v0, 0x1c3850
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c36e8: sw $v0, 0x10($s0)
    goto label_0x1c3854;                                        // 0x001c36ec: b 0x1c3854
    v0 = *(uint16_t*)((s0) + 0xa);                              // 0x001c36f4: lhu $v0, 0xa($s0)
    v0 = v0 & 0xfff0;                                           // 0x001c36f8: andi $v0, $v0, 0xfff0
    if (v0 == 0) goto label_0x1c3850;                           // 0x001c36fc: beqz $v0, 0x1c3850
    /* nop */                                                   // 0x001c3700: nop 
    func_001c7470();  // 0x1c7460                                // 0x001c3704: jal 0x1c7460
    /* nop */                                                   // 0x001c3708: nop 
    goto label_0x1c3854;                                        // 0x001c370c: b 0x1c3854
    func_001c0bd0();  // 0x1c0bc0                                // 0x001c3714: jal 0x1c0bc0
    /* nop */                                                   // 0x001c3718: nop 
    v1 = -1;                                                    // 0x001c371c: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1c3850;                          // 0x001c3720: beq $v0, $v1, 0x1c3850
    v1 = -0xfb;                                                 // 0x001c3724: addiu $v1, $zero, -0xfb
    if (v0 == v1) goto label_0x1c37a4;                          // 0x001c3728: beq $v0, $v1, 0x1c37a4
    /* nop */                                                   // 0x001c372c: nop 
    if (v0 == 0) goto label_0x1c379c;                           // 0x001c3730: beqz $v0, 0x1c379c
    v1 = -0x100;                                                // 0x001c3738: addiu $v1, $zero, -0x100
    if (v0 == v1) goto label_0x1c3778;                          // 0x001c373c: beq $v0, $v1, 0x1c3778
    v1 = 3;                                                     // 0x001c3740: addiu $v1, $zero, 3
    v1 = -0xfe;                                                 // 0x001c3744: addiu $v1, $zero, -0xfe
    if (v0 == v1) goto label_0x1c3760;                          // 0x001c3748: beq $v0, $v1, 0x1c3760
    v1 = -0xfd;                                                 // 0x001c374c: addiu $v1, $zero, -0xfd
    if (v0 == v1) goto label_0x1c3760;                          // 0x001c3750: beq $v0, $v1, 0x1c3760
    /* nop */                                                   // 0x001c3754: nop 
    goto label_0x1c37cc;                                        // 0x001c3758: b 0x1c37cc
    v1 = 3;                                                     // 0x001c375c: addiu $v1, $zero, 3
label_0x1c3760:
    *(uint32_t*)((s0) + 0x2c) = 0;                              // 0x001c3760: sw $zero, 0x2c($s0)
    v0 = 4;                                                     // 0x001c3764: addiu $v0, $zero, 4
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c3768: sb $v0, 2($s0)
    v0 = 1;                                                     // 0x001c376c: addiu $v0, $zero, 1
    goto label_0x1c3850;                                        // 0x001c3770: b 0x1c3850
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c3774: sw $v0, 0x10($s0)
label_0x1c3778:
    v0 = 0x39;                                                  // 0x001c3778: addiu $v0, $zero, 0x39
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c377c: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c3780: sw $v0, 0x2c($s0)
    v1 = 5;                                                     // 0x001c3784: addiu $v1, $zero, 5
    v0 = 1;                                                     // 0x001c3788: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 0x10) = v1;                             // 0x001c378c: sw $v1, 0x10($s0)
    *(uint32_t*)((s0) + 0x30) = v0;                             // 0x001c3790: sw $v0, 0x30($s0)
    goto label_0x1c3850;                                        // 0x001c3794: b 0x1c3850
    *(uint32_t*)((s0) + 0x38) = v0;                             // 0x001c3798: sw $v0, 0x38($s0)
label_0x1c379c:
    func_001c6ea0();  // 0x1c6e50                                // 0x001c379c: jal 0x1c6e50
    /* nop */                                                   // 0x001c37a0: nop 
label_0x1c37a4:
    *(uint32_t*)((s0) + 0xf8) = 0;                              // 0x001c37a4: sw $zero, 0xf8($s0)
    v0 = 0x1a;                                                  // 0x001c37a8: addiu $v0, $zero, 0x1a
    func_001c0c00();  // 0x1c0bf0                                // 0x001c37ac: jal 0x1c0bf0
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c37b0: sw $v0, 0x2c($s0)
    v1 = 4;                                                     // 0x001c37b4: addiu $v1, $zero, 4
    v0 = 0x3c;                                                  // 0x001c37b8: addiu $v0, $zero, 0x3c
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c37bc: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x34) = 0;                              // 0x001c37c0: sw $zero, 0x34($s0)
    goto label_0x1c3850;                                        // 0x001c37c4: b 0x1c3850
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c37c8: sw $v0, 0x10($s0)
label_0x1c37cc:
    v0 = v0 & 0xff;                                             // 0x001c37cc: andi $v0, $v0, 0xff
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c37d0: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c37d4: sw $v0, 0x34($s0)
    a1 = *(int32_t*)((s0) + 0x34);                              // 0x001c37d8: lw $a1, 0x34($s0)
    if (a1 == v1) goto label_0x1c37a4;                          // 0x001c37dc: beq $a1, $v1, 0x1c37a4
    /* nop */                                                   // 0x001c37e0: nop 
    v1 = 4;                                                     // 0x001c37e4: addiu $v1, $zero, 4
    if (a1 == v1) goto label_0x1c3838;                          // 0x001c37e8: beq $a1, $v1, 0x1c3838
    v0 = 0x1d;                                                  // 0x001c37ec: addiu $v0, $zero, 0x1d
    v0 = 2;                                                     // 0x001c37f0: addiu $v0, $zero, 2
    if (a1 == v0) goto label_0x1c3824;                          // 0x001c37f4: beq $a1, $v0, 0x1c3824
    a0 = 1;                                                     // 0x001c37f8: addiu $a0, $zero, 1
    if (a1 == a0) goto label_0x1c380c;                          // 0x001c37fc: beq $a1, $a0, 0x1c380c
    v1 = 0x1c;                                                  // 0x001c3800: addiu $v1, $zero, 0x1c
    goto label_0x1c3850;                                        // 0x001c3804: b 0x1c3850
    /* nop */                                                   // 0x001c3808: nop 
label_0x1c380c:
    v0 = 5;                                                     // 0x001c380c: addiu $v0, $zero, 5
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c3810: sw $v1, 0x2c($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c3814: sw $v0, 0x10($s0)
    *(uint32_t*)((s0) + 0x30) = a0;                             // 0x001c3818: sw $a0, 0x30($s0)
    goto label_0x1c3850;                                        // 0x001c381c: b 0x1c3850
    *(uint32_t*)((s0) + 0x38) = a0;                             // 0x001c3820: sw $a0, 0x38($s0)
label_0x1c3824:
    *(uint32_t*)((s0) + 0x2c) = 0;                              // 0x001c3824: sw $zero, 0x2c($s0)
    v0 = 1;                                                     // 0x001c3828: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c382c: sb $v1, 2($s0)
    goto label_0x1c3850;                                        // 0x001c3830: b 0x1c3850
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c3834: sw $v0, 0x10($s0)
label_0x1c3838:
    v1 = 5;                                                     // 0x001c3838: addiu $v1, $zero, 5
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c383c: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c3840: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 0x10) = v1;                             // 0x001c3844: sw $v1, 0x10($s0)
    *(uint32_t*)((s0) + 0x30) = v0;                             // 0x001c3848: sw $v0, 0x30($s0)
    *(uint32_t*)((s0) + 0x38) = v0;                             // 0x001c384c: sw $v0, 0x38($s0)
label_0x1c3850:
    v0 = 1;                                                     // 0x001c3850: addiu $v0, $zero, 1
label_0x1c3854:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c3858: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c385c: jr $ra
    sp = sp + 0x20;                                             // 0x001c3860: addiu $sp, $sp, 0x20
}