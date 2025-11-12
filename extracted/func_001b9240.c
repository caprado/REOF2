void func_001b9240() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_48, local_4c;
    
    sp = sp + -0x50;                                            // 0x001b9240: addiu $sp, $sp, -0x50
    a1 = gp + -0x7cc8;                                          // 0x001b9244: addiu $a1, $gp, -0x7cc8
    v1 = 1;                                                     // 0x001b924c: addiu $v1, $zero, 1
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b9254: addu.qb $zero, $sp, $s1
    a2 = *(int16_t*)((a0) + 0x38);                              // 0x001b9260: lh $a2, 0x38($a0)
    a1 = a1 + a2;                                               // 0x001b9264: addu $a1, $a1, $a2
    a0 = *(int8_t*)((a0) + 4);                                  // 0x001b9268: lb $a0, 4($a0)
    if (a0 == v1) goto label_0x1b9358;                          // 0x001b926c: beq $a0, $v1, 0x1b9358
    s0 = *(int8_t*)(a1);                                        // 0x001b9270: lb $s0, 0($a1)
    if (a0 == 0) goto label_0x1b9284;                           // 0x001b9274: beqz $a0, 0x1b9284
    /* nop */                                                   // 0x001b9278: nop 
    goto label_0x1b9504;                                        // 0x001b927c: b 0x1b9504
label_0x1b9284:
    v0 = a0 + 1;                                                // 0x001b9284: addiu $v0, $a0, 1
    v1 = s0 << 2;                                               // 0x001b9288: sll $v1, $s0, 2
    *(uint8_t*)((s1) + 4) = v0;                                 // 0x001b928c: sb $v0, 4($s1)
    a0 = s1 + 0x2c;                                             // 0x001b9290: addiu $a0, $s1, 0x2c
    v0 = 0x22 << 16;                                            // 0x001b9294: lui $v0, 0x22
    a2 = s1 + 0x14;                                             // 0x001b9298: addiu $a2, $s1, 0x14
    v0 = v0 + -0x36b0;                                          // 0x001b929c: addiu $v0, $v0, -0x36b0
    v0 = v0 + v1;                                               // 0x001b92a0: addu $v0, $v0, $v1
    a1 = g_0021c950;  // Global at 0x0021c950                   // 0x001b92a4: lw $a1, 0($v0)
    func_001b8e30();  // 0x1b8c20                                // 0x001b92a8: jal 0x1b8c20
    a3 = s1 + 0x18;                                             // 0x001b92ac: addiu $a3, $s1, 0x18
    v0 = *(int32_t*)((s1) + 0x14);                              // 0x001b92b4: lw $v0, 0x14($s1)
    *(uint32_t*)((s1) + 0xc) = v0;                              // 0x001b92b8: sw $v0, 0xc($s1)
    v0 = *(int32_t*)((s1) + 0x18);                              // 0x001b92bc: lw $v0, 0x18($s1)
    *(uint32_t*)((s1) + 0x10) = v0;                             // 0x001b92c0: sw $v0, 0x10($s1)
    v0 = *(int8_t*)((s1) + 1);                                  // 0x001b92c4: lb $v0, 1($s1)
    if (v0 != 0) goto label_0x1b9314;                           // 0x001b92c8: bnez $v0, 0x1b9314
    /* nop */                                                   // 0x001b92cc: nop 
    a1 = *(uint8_t*)((s1) + 2);                                 // 0x001b92d0: lbu $a1, 2($s1)
    a0 = 2;                                                     // 0x001b92d4: addiu $a0, $zero, 2
    a3 = *(int32_t*)((s1) + 0x14);                              // 0x001b92d8: lw $a3, 0x14($s1)
    t0 = *(int32_t*)((s1) + 0x18);                              // 0x001b92e0: lw $t0, 0x18($s1)
    t1 = -1;                                                    // 0x001b92e4: addiu $t1, $zero, -1
    func_001ac590();  // 0x1ac220                                // 0x001b92e8: jal 0x1ac220
    a1 = *(uint8_t*)((s1) + 2);                                 // 0x001b92f0: lbu $a1, 2($s1)
    a0 = 2;                                                     // 0x001b92f4: addiu $a0, $zero, 2
    a3 = *(int32_t*)((s1) + 0x14);                              // 0x001b92f8: lw $a3, 0x14($s1)
    t0 = *(int32_t*)((s1) + 0x18);                              // 0x001b9300: lw $t0, 0x18($s1)
    func_001ac8d0();  // 0x1ac590                                // 0x001b9304: jal 0x1ac590
    t1 = 0x2000;                                                // 0x001b9308: addiu $t1, $zero, 0x2000
    goto label_0x1b9354;                                        // 0x001b930c: b 0x1b9354
    v0 = 4;                                                     // 0x001b9310: addiu $v0, $zero, 4
label_0x1b9314:
    a1 = *(uint8_t*)((s1) + 2);                                 // 0x001b9314: lbu $a1, 2($s1)
    thunk_func_001ad420();  // 0x1b9800                          // 0x001b931c: jal 0x1b9800
    a2 = 4;                                                     // 0x001b9320: addiu $a2, $zero, 4
    if (v0 != 0) goto label_0x1b9350;                           // 0x001b9324: bnez $v0, 0x1b9350
    /* nop */                                                   // 0x001b9328: nop 
    if (s2 != 0) goto label_0x1b9344;                           // 0x001b932c: bnez $s2, 0x1b9344
    func_001adab0();  // 0x1ad9c0                                // 0x001b9334: jal 0x1ad9c0
    goto label_0x1b9350;                                        // 0x001b933c: b 0x1b9350
    /* nop */                                                   // 0x001b9340: nop 
label_0x1b9344:
    a1 = *(int32_t*)((s1) + 0x14);                              // 0x001b9344: lw $a1, 0x14($s1)
    func_001adab0();  // 0x1ad9c0                                // 0x001b9348: jal 0x1ad9c0
label_0x1b9350:
    v0 = 4;                                                     // 0x001b9350: addiu $v0, $zero, 4
label_0x1b9354:
    *(uint16_t*)((s1) + 8) = v0;                                // 0x001b9354: sh $v0, 8($s1)
label_0x1b9358:
    v0 = 0x22 << 16;                                            // 0x001b9358: lui $v0, 0x22
    v1 = s0 << 2;                                               // 0x001b935c: sll $v1, $s0, 2
    v0 = v0 + -0x36b0;                                          // 0x001b9360: addiu $v0, $v0, -0x36b0
    a0 = s1 + 0x2c;                                             // 0x001b9364: addiu $a0, $s1, 0x2c
    v0 = v0 + v1;                                               // 0x001b9368: addu $v0, $v0, $v1
    a2 = sp + 0x4c;                                             // 0x001b936c: addiu $a2, $sp, 0x4c
    a1 = g_0021c950;  // Global at 0x0021c950                   // 0x001b9370: lw $a1, 0($v0)
    func_001b8e30();  // 0x1b8c20                                // 0x001b9374: jal 0x1b8c20
    a3 = sp + 0x48;                                             // 0x001b9378: addiu $a3, $sp, 0x48
    a1 = local_4c;                                              // 0x001b937c: lw $a1, 0x4c($sp)
    v1 = *(int32_t*)((s1) + 0x14);                              // 0x001b9380: lw $v1, 0x14($s1)
    if (v1 == a1) goto label_0x1b93c0;                          // 0x001b9384: beq $v1, $a1, 0x1b93c0
    /* nop */                                                   // 0x001b9388: nop 
    a0 = *(int32_t*)((s1) + 0xc);                               // 0x001b938c: lw $a0, 0xc($s1)
    v1 = 0x4080 << 16;                                          // 0x001b9390: lui $v1, 0x4080
    /* move to FPU: $v1, $f0 */                                 // 0x001b9394: mtc1 $v1, $f0
    v1 = 4;                                                     // 0x001b9398: addiu $v1, $zero, 4
    a0 = a1 - a0;                                               // 0x001b939c: subu $a0, $a1, $a0
    /* move to FPU: $a0, $f1 */                                 // 0x001b93a0: mtc1 $a0, $f1
    /* nop */                                                   // 0x001b93a4: nop 
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x001b93a8: cvt.s.w $f1, $f1
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x001b93ac: div.s $f0, $f1, $f0
    *(float*)((s1) + 0x1c) = FPU_F0;  // Store float            // 0x001b93b0: swc1 $f0, 0x1c($s1)
    a0 = local_4c;                                              // 0x001b93b4: lw $a0, 0x4c($sp)
    *(uint32_t*)((s1) + 0x14) = a0;                             // 0x001b93b8: sw $a0, 0x14($s1)
    *(uint16_t*)((s1) + 8) = v1;                                // 0x001b93bc: sh $v1, 8($s1)
label_0x1b93c0:
    a1 = local_48;                                              // 0x001b93c0: lw $a1, 0x48($sp)
    v1 = *(int32_t*)((s1) + 0x18);                              // 0x001b93c4: lw $v1, 0x18($s1)
    if (v1 == a1) goto label_0x1b9404;                          // 0x001b93c8: beq $v1, $a1, 0x1b9404
    /* nop */                                                   // 0x001b93cc: nop 
    a0 = *(int32_t*)((s1) + 0x10);                              // 0x001b93d0: lw $a0, 0x10($s1)
    v1 = 0x4080 << 16;                                          // 0x001b93d4: lui $v1, 0x4080
    /* move to FPU: $v1, $f0 */                                 // 0x001b93d8: mtc1 $v1, $f0
    v1 = 4;                                                     // 0x001b93dc: addiu $v1, $zero, 4
    a0 = a1 - a0;                                               // 0x001b93e0: subu $a0, $a1, $a0
    /* move to FPU: $a0, $f1 */                                 // 0x001b93e4: mtc1 $a0, $f1
    /* nop */                                                   // 0x001b93e8: nop 
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x001b93ec: cvt.s.w $f1, $f1
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x001b93f0: div.s $f0, $f1, $f0
    *(float*)((s1) + 0x20) = FPU_F0;  // Store float            // 0x001b93f4: swc1 $f0, 0x20($s1)
    a0 = local_48;                                              // 0x001b93f8: lw $a0, 0x48($sp)
    *(uint32_t*)((s1) + 0x18) = a0;                             // 0x001b93fc: sw $a0, 0x18($s1)
    *(uint16_t*)((s1) + 0xa) = v1;                              // 0x001b9400: sh $v1, 0xa($s1)
label_0x1b9404:
    v1 = *(int16_t*)((s1) + 8);                                 // 0x001b9404: lh $v1, 8($s1)
    if (v1 == 0) goto label_0x1b9458;                           // 0x001b9408: beqz $v1, 0x1b9458
    v1 = v1 + -1;                                               // 0x001b9410: addiu $v1, $v1, -1
    *(uint16_t*)((s1) + 8) = v1;                                // 0x001b9414: sh $v1, 8($s1)
    if (v1 != 0) goto label_0x1b9434;                           // 0x001b9420: bnez $v1, 0x1b9434
    /* nop */                                                   // 0x001b9424: nop 
    v1 = *(int32_t*)((s1) + 0x14);                              // 0x001b9428: lw $v1, 0x14($s1)
    goto label_0x1b9454;                                        // 0x001b942c: b 0x1b9454
    *(uint32_t*)((s1) + 0xc) = v1;                              // 0x001b9430: sw $v1, 0xc($s1)
label_0x1b9434:
    FPU_F1 = *(float*)((s1) + 0xc);  // Load float              // 0x001b9434: lwc1 $f1, 0xc($s1)
    FPU_F0 = *(float*)((s1) + 0x1c);  // Load float             // 0x001b9438: lwc1 $f0, 0x1c($s1)
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x001b943c: cvt.s.w $f1, $f1
    /* FPU: add.s $f0, $f1, $f0 */                              // 0x001b9440: add.s $f0, $f1, $f0
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001b9444: cvt.w.s $f0, $f0
    /* move from FPU: $v1, $f0 */                               // 0x001b9448: mfc1 $v1, $f0
    /* nop */                                                   // 0x001b944c: nop 
    *(uint32_t*)((s1) + 0xc) = v1;                              // 0x001b9450: sw $v1, 0xc($s1)
label_0x1b9454:
    a0 = 1;                                                     // 0x001b9454: addiu $a0, $zero, 1
label_0x1b9458:
    v1 = *(int16_t*)((s1) + 0xa);                               // 0x001b9458: lh $v1, 0xa($s1)
    if (v1 == 0) goto label_0x1b94ac;                           // 0x001b945c: beqz $v1, 0x1b94ac
    /* nop */                                                   // 0x001b9460: nop 
    v1 = v1 + -1;                                               // 0x001b9464: addiu $v1, $v1, -1
    *(uint16_t*)((s1) + 0xa) = v1;                              // 0x001b9468: sh $v1, 0xa($s1)
    if (v1 != 0) goto label_0x1b9488;                           // 0x001b9474: bnez $v1, 0x1b9488
    /* nop */                                                   // 0x001b9478: nop 
    v1 = *(int32_t*)((s1) + 0x18);                              // 0x001b947c: lw $v1, 0x18($s1)
    goto label_0x1b94a8;                                        // 0x001b9480: b 0x1b94a8
    *(uint32_t*)((s1) + 0x10) = v1;                             // 0x001b9484: sw $v1, 0x10($s1)
label_0x1b9488:
    FPU_F1 = *(float*)((s1) + 0x10);  // Load float             // 0x001b9488: lwc1 $f1, 0x10($s1)
    FPU_F0 = *(float*)((s1) + 0x20);  // Load float             // 0x001b948c: lwc1 $f0, 0x20($s1)
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x001b9490: cvt.s.w $f1, $f1
    /* FPU: add.s $f0, $f1, $f0 */                              // 0x001b9494: add.s $f0, $f1, $f0
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001b9498: cvt.w.s $f0, $f0
    /* move from FPU: $v1, $f0 */                               // 0x001b949c: mfc1 $v1, $f0
    /* nop */                                                   // 0x001b94a0: nop 
    *(uint32_t*)((s1) + 0x10) = v1;                             // 0x001b94a4: sw $v1, 0x10($s1)
label_0x1b94a8:
    a0 = 1;                                                     // 0x001b94a8: addiu $a0, $zero, 1
label_0x1b94ac:
    if (a0 == 0) goto label_0x1b9500;                           // 0x001b94ac: beqz $a0, 0x1b9500
    /* nop */                                                   // 0x001b94b0: nop 
    v0 = *(int8_t*)((s1) + 1);                                  // 0x001b94b4: lb $v0, 1($s1)
    if (v0 != 0) goto label_0x1b94e4;                           // 0x001b94b8: bnez $v0, 0x1b94e4
    a1 = *(uint8_t*)((s1) + 2);                                 // 0x001b94c0: lbu $a1, 2($s1)
    a0 = 2;                                                     // 0x001b94c4: addiu $a0, $zero, 2
    a3 = *(int32_t*)((s1) + 0xc);                               // 0x001b94c8: lw $a3, 0xc($s1)
    t0 = *(int32_t*)((s1) + 0x10);                              // 0x001b94d0: lw $t0, 0x10($s1)
    func_001ac8d0();  // 0x1ac590                                // 0x001b94d4: jal 0x1ac590
    t1 = 0x2000;                                                // 0x001b94d8: addiu $t1, $zero, 0x2000
    goto label_0x1b9500;                                        // 0x001b94dc: b 0x1b9500
    /* nop */                                                   // 0x001b94e0: nop 
label_0x1b94e4:
    func_001ade90();  // 0x1ade50                                // 0x001b94e4: jal 0x1ade50
    /* nop */                                                   // 0x001b94e8: nop 
    if (v0 != 0) goto label_0x1b9500;                           // 0x001b94ec: bnez $v0, 0x1b9500
    /* nop */                                                   // 0x001b94f0: nop 
    a1 = *(int32_t*)((s1) + 0xc);                               // 0x001b94f4: lw $a1, 0xc($s1)
    func_001adab0();  // 0x1ad9c0                                // 0x001b94f8: jal 0x1ad9c0
label_0x1b9500:
label_0x1b9504:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b9504: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b9508: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b950c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b9510: jr $ra
    sp = sp + 0x50;                                             // 0x001b9514: addiu $sp, $sp, 0x50
}