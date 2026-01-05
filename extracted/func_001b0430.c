void func_001b0430() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x001b0430: addiu $sp, $sp, -0x80
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001b043c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b0444: addu.qb $zero, $sp, $s1
    goto label_0x1b0670;                                        // 0x001b0450: b 0x1b0670
    s0 = sp + 0x6c;                                             // 0x001b0454: addiu $s0, $sp, 0x6c
label_0x1b0458:
    v1 = *(int32_t*)((gp) + -0x6430);                           // 0x001b0458: lw $v1, -0x6430($gp)
    v0 = s1 << 4;                                               // 0x001b045c: sll $v0, $s1, 4
    a0 = v0 - s1;                                               // 0x001b0460: subu $a0, $v0, $s1
    s2 = a0 << 3;                                               // 0x001b0464: sll $s2, $a0, 3
    v0 = 1;                                                     // 0x001b0468: addiu $v0, $zero, 1
    v1 = v1 + s2;                                               // 0x001b046c: addu $v1, $v1, $s2
    v1 = g_0030f6e0;  // Global at 0x0030f6e0                   // 0x001b0470: lbu $v1, 0($v1)
    if (v1 == v0) goto label_0x1b04fc;                          // 0x001b0474: beq $v1, $v0, 0x1b04fc
    v1 = s1 << 1;                                               // 0x001b0478: sll $v1, $s1, 1
    v0 = s1 << 1;                                               // 0x001b047c: sll $v0, $s1, 1
    v1 = 0x31 << 16;                                            // 0x001b0480: lui $v1, 0x31
    a0 = v0 + s1;                                               // 0x001b0484: addu $a0, $v0, $s1
    v1 = v1 + 0x36e0;                                           // 0x001b0488: addiu $v1, $v1, 0x36e0
    a0 = a0 << 4;                                               // 0x001b048c: sll $a0, $a0, 4
    v0 = 0x31 << 16;                                            // 0x001b0490: lui $v0, 0x31
    v1 = v1 + a0;                                               // 0x001b0494: addu $v1, $v1, $a0
    v0 = v0 + 0x3620;                                           // 0x001b0498: addiu $v0, $v0, 0x3620
    g_003136e8 = 0;  // Global at 0x003136e8                    // 0x001b049c: sw $zero, 8($v1)
    v0 = v0 + a0;                                               // 0x001b04a0: addu $v0, $v0, $a0
    g_003136e0 = 0;  // Global at 0x003136e0                    // 0x001b04a4: sw $zero, 0($v1)
    g_003136e4 = 0;  // Global at 0x003136e4                    // 0x001b04a8: sw $zero, 4($v1)
    g_00313700 = 0;  // Global at 0x00313700                    // 0x001b04ac: sh $zero, 0x20($v1)
    g_00313708 = 0;  // Global at 0x00313708                    // 0x001b04b0: sh $zero, 0x28($v1)
    g_00313702 = 0;  // Global at 0x00313702                    // 0x001b04b4: sh $zero, 0x22($v1)
    g_0031370a = 0;  // Global at 0x0031370a                    // 0x001b04b8: sh $zero, 0x2a($v1)
    g_00313704 = 0;  // Global at 0x00313704                    // 0x001b04bc: sh $zero, 0x24($v1)
    g_00313706 = 0;  // Global at 0x00313706                    // 0x001b04c0: sh $zero, 0x26($v1)
    g_0031370c = 0;  // Global at 0x0031370c                    // 0x001b04c4: sh $zero, 0x2c($v1)
    g_0031370e = 0;  // Global at 0x0031370e                    // 0x001b04c8: sh $zero, 0x2e($v1)
    g_00313628 = 0;  // Global at 0x00313628                    // 0x001b04cc: sw $zero, 8($v0)
    g_00313620 = 0;  // Global at 0x00313620                    // 0x001b04d0: sw $zero, 0($v0)
    g_00313624 = 0;  // Global at 0x00313624                    // 0x001b04d4: sw $zero, 4($v0)
    g_00313640 = 0;  // Global at 0x00313640                    // 0x001b04d8: sh $zero, 0x20($v0)
    g_00313648 = 0;  // Global at 0x00313648                    // 0x001b04dc: sh $zero, 0x28($v0)
    g_00313642 = 0;  // Global at 0x00313642                    // 0x001b04e0: sh $zero, 0x22($v0)
    g_0031364a = 0;  // Global at 0x0031364a                    // 0x001b04e4: sh $zero, 0x2a($v0)
    g_00313644 = 0;  // Global at 0x00313644                    // 0x001b04e8: sh $zero, 0x24($v0)
    g_00313646 = 0;  // Global at 0x00313646                    // 0x001b04ec: sh $zero, 0x26($v0)
    g_0031364c = 0;  // Global at 0x0031364c                    // 0x001b04f0: sh $zero, 0x2c($v0)
    g_0031364e = 0;  // Global at 0x0031364e                    // 0x001b04f4: sh $zero, 0x2e($v0)
    v1 = s1 << 1;                                               // 0x001b04f8: sll $v1, $s1, 1
label_0x1b04fc:
    v0 = 0x31 << 16;                                            // 0x001b04fc: lui $v0, 0x31
    v1 = v1 + s1;                                               // 0x001b0500: addu $v1, $v1, $s1
    v0 = v0 + 0x36e0;                                           // 0x001b0504: addiu $v0, $v0, 0x36e0
    s4 = v1 << 4;                                               // 0x001b0508: sll $s4, $v1, 4
    s3 = v0 + s4;                                               // 0x001b050c: addu $s3, $v0, $s4
    v0 = *(int32_t*)((s3) + 0x10);                              // 0x001b0510: lw $v0, 0x10($s3)
    *(uint32_t*)((s3) + 0x14) = v0;                             // 0x001b0514: sw $v0, 0x14($s3)
    v0 = *(int32_t*)((s3) + 0xc);                               // 0x001b0518: lw $v0, 0xc($s3)
    *(uint32_t*)((s3) + 0x10) = v0;                             // 0x001b051c: sw $v0, 0x10($s3)
    v0 = *(int32_t*)((s3) + 8);                                 // 0x001b0520: lw $v0, 8($s3)
    *(uint32_t*)((s3) + 0xc) = v0;                              // 0x001b0524: sw $v0, 0xc($s3)
    v0 = *(int32_t*)((gp) + -0x6430);                           // 0x001b0528: lw $v0, -0x6430($gp)
    v1 = v0 + s2;                                               // 0x001b052c: addu $v1, $v0, $s2
    v0 = g_003136e8;  // Global at 0x003136e8                   // 0x001b0530: lw $v0, 8($v1)
    *(uint32_t*)((s3) + 8) = v0;                                // 0x001b0534: sw $v0, 8($s3)
    v0 = g_003136f0;  // Global at 0x003136f0                   // 0x001b0538: lw $v0, 0x10($v1)
    *(uint32_t*)(s3) = v0;                                      // 0x001b053c: sw $v0, 0($s3)
    v0 = g_003136f4;  // Global at 0x003136f4                   // 0x001b0540: lw $v0, 0x14($v1)
    *(uint32_t*)((s3) + 4) = v0;                                // 0x001b0544: sw $v0, 4($s3)
    v0 = g_003136fc;  // Global at 0x003136fc                   // 0x001b0548: lh $v0, 0x1c($v1)
    *(uint16_t*)((s3) + 0x24) = v0;                             // 0x001b054c: sh $v0, 0x24($s3)
    v0 = g_003136fe;  // Global at 0x003136fe                   // 0x001b0550: lh $v0, 0x1e($v1)
    *(uint16_t*)((s3) + 0x26) = v0;                             // 0x001b0554: sh $v0, 0x26($s3)
    v0 = g_00313708;  // Global at 0x00313708                   // 0x001b0558: lh $v0, 0x28($v1)
    *(uint16_t*)((s3) + 0x2c) = v0;                             // 0x001b055c: sh $v0, 0x2c($s3)
    v0 = g_0031370a;  // Global at 0x0031370a                   // 0x001b0560: lh $v0, 0x2a($v1)
    *(uint16_t*)((s3) + 0x2e) = v0;                             // 0x001b0564: sh $v0, 0x2e($s3)
    v0 = g_00313700;  // Global at 0x00313700                   // 0x001b0568: lh $v0, 0x20($v1)
    *(uint16_t*)((s3) + 0x20) = v0;                             // 0x001b056c: sh $v0, 0x20($s3)
    v0 = g_0031370c;  // Global at 0x0031370c                   // 0x001b0570: lh $v0, 0x2c($v1)
    *(uint16_t*)((s3) + 0x28) = v0;                             // 0x001b0574: sh $v0, 0x28($s3)
    func_00191ca0();  // 191ca0                                // 0x001b0578: jal 0x191ca0
    FPU_F12 = *(float*)((v1) + 0x24);  // Load float            // 0x001b057c: lwc1 $f12, 0x24($v1)
    v0 = v0 & 0xffff;                                           // 0x001b0580: andi $v0, $v0, 0xffff
    v0 = v0 + -0x4000;                                          // 0x001b0584: addiu $v0, $v0, -0x4000
    *(uint16_t*)((s3) + 0x22) = v0;                             // 0x001b0588: sh $v0, 0x22($s3)
    v0 = *(int32_t*)((gp) + -0x6430);                           // 0x001b058c: lw $v0, -0x6430($gp)
    v0 = v0 + s2;                                               // 0x001b0590: addu $v0, $v0, $s2
    func_00191ca0();  // 191ca0                                // 0x001b0594: jal 0x191ca0
    FPU_F12 = *(float*)((v0) + 0x30);  // Load float            // 0x001b0598: lwc1 $f12, 0x30($v0)
    v0 = v0 & 0xffff;                                           // 0x001b059c: andi $v0, $v0, 0xffff
    v0 = v0 + -0x4000;                                          // 0x001b05a4: addiu $v0, $v0, -0x4000
    *(uint16_t*)((s3) + 0x2a) = v0;                             // 0x001b05ac: sh $v0, 0x2a($s3)
    func_001a15f0();  // 1a15f0                                // 0x001b05b0: jal 0x1a15f0
    a2 = sp + 0x60;                                             // 0x001b05b4: addiu $a2, $sp, 0x60
    a1 = 1;                                                     // 0x001b05bc: addiu $a1, $zero, 1
    func_001a15f0();  // 1a15f0                                // 0x001b05c0: jal 0x1a15f0
    v0 = 0x31 << 16;                                            // 0x001b05c8: lui $v0, 0x31
    v0 = v0 + 0x3620;                                           // 0x001b05cc: addiu $v0, $v0, 0x3620
    s3 = v0 + s4;                                               // 0x001b05d0: addu $s3, $v0, $s4
    v0 = *(int32_t*)((s3) + 0x10);                              // 0x001b05d4: lw $v0, 0x10($s3)
    *(uint32_t*)((s3) + 0x14) = v0;                             // 0x001b05d8: sw $v0, 0x14($s3)
    v0 = *(int32_t*)((s3) + 0xc);                               // 0x001b05dc: lw $v0, 0xc($s3)
    *(uint32_t*)((s3) + 0x10) = v0;                             // 0x001b05e0: sw $v0, 0x10($s3)
    v0 = *(int32_t*)((s3) + 8);                                 // 0x001b05e4: lw $v0, 8($s3)
    *(uint32_t*)((s3) + 0xc) = v0;                              // 0x001b05e8: sw $v0, 0xc($s3)
    v0 = *(int32_t*)((gp) + -0x642c);                           // 0x001b05ec: lw $v0, -0x642c($gp)
    v1 = v0 + s2;                                               // 0x001b05f0: addu $v1, $v0, $s2
    v0 = g_003136e8;  // Global at 0x003136e8                   // 0x001b05f4: lw $v0, 8($v1)
    *(uint32_t*)((s3) + 8) = v0;                                // 0x001b05f8: sw $v0, 8($s3)
    v0 = g_003136f0;  // Global at 0x003136f0                   // 0x001b05fc: lw $v0, 0x10($v1)
    *(uint32_t*)(s3) = v0;                                      // 0x001b0600: sw $v0, 0($s3)
    v0 = g_003136f4;  // Global at 0x003136f4                   // 0x001b0604: lw $v0, 0x14($v1)
    *(uint32_t*)((s3) + 4) = v0;                                // 0x001b0608: sw $v0, 4($s3)
    v0 = g_003136fc;  // Global at 0x003136fc                   // 0x001b060c: lh $v0, 0x1c($v1)
    *(uint16_t*)((s3) + 0x24) = v0;                             // 0x001b0610: sh $v0, 0x24($s3)
    v0 = g_003136fe;  // Global at 0x003136fe                   // 0x001b0614: lh $v0, 0x1e($v1)
    *(uint16_t*)((s3) + 0x26) = v0;                             // 0x001b0618: sh $v0, 0x26($s3)
    v0 = g_00313708;  // Global at 0x00313708                   // 0x001b061c: lh $v0, 0x28($v1)
    *(uint16_t*)((s3) + 0x2c) = v0;                             // 0x001b0620: sh $v0, 0x2c($s3)
    v0 = g_0031370a;  // Global at 0x0031370a                   // 0x001b0624: lh $v0, 0x2a($v1)
    *(uint16_t*)((s3) + 0x2e) = v0;                             // 0x001b0628: sh $v0, 0x2e($s3)
    v0 = g_00313700;  // Global at 0x00313700                   // 0x001b062c: lh $v0, 0x20($v1)
    *(uint16_t*)((s3) + 0x20) = v0;                             // 0x001b0630: sh $v0, 0x20($s3)
    v0 = g_0031370c;  // Global at 0x0031370c                   // 0x001b0634: lh $v0, 0x2c($v1)
    *(uint16_t*)((s3) + 0x28) = v0;                             // 0x001b0638: sh $v0, 0x28($s3)
    func_00191ca0();  // 191ca0                                // 0x001b063c: jal 0x191ca0
    FPU_F12 = *(float*)((v1) + 0x24);  // Load float            // 0x001b0640: lwc1 $f12, 0x24($v1)
    v0 = v0 & 0xffff;                                           // 0x001b0644: andi $v0, $v0, 0xffff
    v0 = v0 + -0x4000;                                          // 0x001b0648: addiu $v0, $v0, -0x4000
    *(uint16_t*)((s3) + 0x22) = v0;                             // 0x001b064c: sh $v0, 0x22($s3)
    v0 = *(int32_t*)((gp) + -0x642c);                           // 0x001b0650: lw $v0, -0x642c($gp)
    v0 = v0 + s2;                                               // 0x001b0654: addu $v0, $v0, $s2
    func_00191ca0();  // 191ca0                                // 0x001b0658: jal 0x191ca0
    FPU_F12 = *(float*)((v0) + 0x30);  // Load float            // 0x001b065c: lwc1 $f12, 0x30($v0)
    v1 = v0 & 0xffff;                                           // 0x001b0660: andi $v1, $v0, 0xffff
    s1 = s1 + 1;                                                // 0x001b0664: addiu $s1, $s1, 1
    v1 = v1 + -0x4000;                                          // 0x001b0668: addiu $v1, $v1, -0x4000
    *(uint16_t*)((s3) + 0x2a) = v1;                             // 0x001b066c: sh $v1, 0x2a($s3)
label_0x1b0670:
    v1 = *(int8_t*)((gp) + -0x6350);                            // 0x001b0670: lb $v1, -0x6350($gp)
    v1 = (s1 < v1) ? 1 : 0;                                     // 0x001b0674: slt $v1, $s1, $v1
    if (v1 != 0) goto label_0x1b0458;                           // 0x001b0678: bnez $v1, 0x1b0458
    /* nop */                                                   // 0x001b067c: nop 
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001b0684: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b068c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b0690: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b0694: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b0698: jr $ra
    sp = sp + 0x80;                                             // 0x001b069c: addiu $sp, $sp, 0x80
}