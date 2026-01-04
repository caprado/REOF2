void func_001b74b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;
    int32_t at;
    int32_t hi, lo;

    sp = sp + -0x50;                                            // 0x001b74b0: addiu $sp, $sp, -0x50
    v0 = -1;                                                    // 0x001b74b4: addiu $v0, $zero, -1
    a0 = *(int8_t*)((gp) + -0x7cd4);                           // 0x001b74cc: lb $a0, -0x7cd4($gp)
    if (a0 == v0) goto label_0x1b751c;                          // 0x001b74d0: beq $a0, $v0, 0x1b751c
    func_001a8e70();  // 1a8e70                                // 0x001b74d8: jal 0x1a8e70
    v1 = *(int8_t*)((gp) + -0x7cd4);                           // 0x001b74e0: lb $v1, -0x7cd4($gp)
    v0 = -1;                                                    // 0x001b74e4: addiu $v0, $zero, -1
    s1 = 0x30 << 16;                                            // 0x001b74e8: lui $s1, 0x30
    at = 0x31 << 16;                                            // 0x001b74ec: lui $at, 0x31
    s1 = s1 + 0x7e10;                                           // 0x001b74f0: addiu $s1, $s1, 0x7e10
    g_003137d8 = v1;  // Global at 0x003137d8                   // 0x001b74fc: sb $v1, 0x37d8($at)
    *(uint8_t*)((gp) + -0x7cd4) = v0;                           // 0x001b7500: sb $v0, -0x7cd4($gp)
    s0 = g_00307e14;  // Global at 0x00307e14                   // 0x001b7504: lw $s0, 4($s1)
    func_00107c70();  // 107c70 - memset                       // 0x001b7508: jal 0x107c70
    a2 = 0x20;                                                  // 0x001b750c: addiu $a2, $zero, 0x20
    g_00307e14 = s0;  // Global at 0x00307e14                   // 0x001b7510: sw $s0, 4($s1)
    v0 = 4;                                                     // 0x001b7514: addiu $v0, $zero, 4
    g_00307e10 = v0;  // Global at 0x00307e10                   // 0x001b7518: sh $v0, 0($s1)
label_0x1b751c:
    a0 = *(int8_t*)((gp) + -0x7cd0);                           // 0x001b751c: lb $a0, -0x7cd0($gp)
    v0 = -1;                                                    // 0x001b7520: addiu $v0, $zero, -1
    if (a0 == v0) goto label_0x1b7548;                          // 0x001b7524: beq $a0, $v0, 0x1b7548
    func_001a8e70();  // 1a8e70                                // 0x001b752c: jal 0x1a8e70
    v1 = *(int8_t*)((gp) + -0x7cd0);                           // 0x001b7534: lb $v1, -0x7cd0($gp)
    v0 = -1;                                                    // 0x001b7538: addiu $v0, $zero, -1
    at = 0x31 << 16;                                            // 0x001b753c: lui $at, 0x31
    g_003137d9 = v1;  // Global at 0x003137d9                   // 0x001b7540: sb $v1, 0x37d9($at)
    *(uint8_t*)((gp) + -0x7cd0) = v0;                           // 0x001b7544: sb $v0, -0x7cd0($gp)
label_0x1b7548:
    v0 = *(uint16_t*)((gp) + -0x6334);                          // 0x001b7548: lhu $v0, -0x6334($gp)
    if (v0 != 0) goto label_0x1b7580;                           // 0x001b754c: bnez $v0, 0x1b7580
    s2 = 4;                                                     // 0x001b7550: addiu $s2, $zero, 4
    at = 0x31 << 16;                                            // 0x001b7554: lui $at, 0x31
    v0 = g_003137a0;  // Global at 0x003137a0                   // 0x001b7558: lbu $v0, 0x37a0($at)
    if (v0 == 0) goto label_0x1b7574;                           // 0x001b755c: beqz $v0, 0x1b7574
    s2 = 0x10;                                                  // 0x001b7560: addiu $s2, $zero, 0x10
    at = 0x49 << 16;                                            // 0x001b7564: lui $at, 0x49
    v0 = g_004912bc;  // Global at 0x004912bc                   // 0x001b7568: lbu $v0, 0x12bc($at)
    if (v0 != 0) goto label_0x1b757c;                           // 0x001b756c: bnez $v0, 0x1b757c
label_0x1b7574:
    goto label_0x1b7584;                                        // 0x001b7574: b 0x1b7584
    s1 = -1;                                                    // 0x001b7578: addiu $s1, $zero, -1
label_0x1b757c:
    s2 = 4;                                                     // 0x001b757c: addiu $s2, $zero, 4
label_0x1b7580:
    s1 = 0xc;                                                   // 0x001b7580: addiu $s1, $zero, 0xc
label_0x1b7584:
    func_001b7a50();  // 1b7a50                                // 0x001b7584: jal 0x1b7a50
    if (v0 == 0) goto label_0x1b759c;                           // 0x001b758c: beqz $v0, 0x1b759c
    s0 = 0x30 << 16;                                            // 0x001b7590: lui $s0, 0x30
    s1 = 0xc;                                                   // 0x001b7598: addiu $s1, $zero, 0xc
label_0x1b759c:
    s0 = s0 + 0x7d90;                                           // 0x001b75a0: addiu $s0, $s0, 0x7d90
label_0x1b75a4:
    v0 = (s3 < s2) ? 1 : 0;                                     // 0x001b75a4: slt $v0, $s3, $s2
    if (v0 != 0) goto label_0x1b75b8;                           // 0x001b75a8: bnez $v0, 0x1b75b8
    at = (s1 < s3) ? 1 : 0;                                     // 0x001b75ac: slt $at, $s1, $s3
    if (at == 0) goto label_0x1b766c;                           // 0x001b75b0: beqz $at, 0x1b766c
label_0x1b75b8:
    a0 = g_00307d90;  // Global at 0x00307d90                   // 0x001b75b8: lh $a0, 0($s0)
    v0 = 0x10;                                                  // 0x001b75bc: addiu $v0, $zero, 0x10
    if (a0 == v0) goto label_0x1b763c;                          // 0x001b75c0: beq $a0, $v0, 0x1b763c
    v0 = 2;                                                     // 0x001b75c4: addiu $v0, $zero, 2
    if (a0 == v0) goto label_0x1b762c;                          // 0x001b75c8: beq $a0, $v0, 0x1b762c
    v0 = 1;                                                     // 0x001b75d0: addiu $v0, $zero, 1
    if (a0 == v0) goto label_0x1b766c;                          // 0x001b75d4: beq $a0, $v0, 0x1b766c
    v1 = 8;                                                     // 0x001b75d8: addiu $v1, $zero, 8
    if (a0 == v1) goto label_0x1b7618;                          // 0x001b75dc: beq $a0, $v1, 0x1b7618
    v0 = 0xc;                                                   // 0x001b75e0: addiu $v0, $zero, 0xc
    if (a0 == v0) goto label_0x1b7610;                          // 0x001b75e4: beq $a0, $v0, 0x1b7610
    v0 = 4;                                                     // 0x001b75ec: addiu $v0, $zero, 4
    if (a0 == v0) goto label_0x1b7608;                          // 0x001b75f0: beq $a0, $v0, 0x1b7608
    if (a0 == 0) goto label_0x1b766c;                           // 0x001b75f8: beqz $a0, 0x1b766c
    goto label_0x1b7670;                                        // 0x001b7600: b 0x1b7670
    s3 = s3 + 1;                                                // 0x001b7604: addiu $s3, $s3, 1
label_0x1b7608:
    goto label_0x1b766c;                                        // 0x001b7608: b 0x1b766c
    g_00307d90 = v1;  // Global at 0x00307d90                   // 0x001b760c: sh $v1, 0($s0)
label_0x1b7610:
    goto label_0x1b766c;                                        // 0x001b7610: b 0x1b766c
    g_00307d90 = v1;  // Global at 0x00307d90                   // 0x001b7614: sh $v1, 0($s0)
label_0x1b7618:
    v0 = g_00307d94;  // Global at 0x00307d94                   // 0x001b7618: lw $v0, 4($s0)
    /* call function at address in v0 */                        // 0x001b761c: jalr $v0
    goto label_0x1b766c;                                        // 0x001b7624: b 0x1b766c
label_0x1b762c:
    g_00307d92 = 0;  // Global at 0x00307d92                    // 0x001b762c: sh $zero, 2($s0)
    v0 = 4;                                                     // 0x001b7630: addiu $v0, $zero, 4
    goto label_0x1b766c;                                        // 0x001b7634: b 0x1b766c
    g_00307d90 = v0;  // Global at 0x00307d90                   // 0x001b7638: sh $v0, 0($s0)
label_0x1b763c:
    v0 = g_00307d92;  // Global at 0x00307d92                   // 0x001b763c: lh $v0, 2($s0)
    v0 = v0 + -1;                                               // 0x001b7640: addiu $v0, $v0, -1
    g_00307d92 = v0;  // Global at 0x00307d92                   // 0x001b7644: sh $v0, 2($s0)
    v0 = g_00307d92;  // Global at 0x00307d92                   // 0x001b7648: lh $v0, 2($s0)
    if (v0 >= 0) goto label_0x1b765c;                           // 0x001b764c: bgez $v0, 0x1b765c
    goto label_0x1b766c;                                        // 0x001b7654: b 0x1b766c
    g_00307d92 = 0;  // Global at 0x00307d92                    // 0x001b7658: sh $zero, 2($s0)
label_0x1b765c:
    if (v0 != 0) goto label_0x1b766c;                           // 0x001b765c: bnez $v0, 0x1b766c
    v0 = 4;                                                     // 0x001b7664: addiu $v0, $zero, 4
    g_00307d90 = v0;  // Global at 0x00307d90                   // 0x001b7668: sh $v0, 0($s0)
label_0x1b766c:
    s3 = s3 + 1;                                                // 0x001b766c: addiu $s3, $s3, 1
label_0x1b7670:
    v0 = (s3 < 0x10) ? 1 : 0;                                   // 0x001b7670: slti $v0, $s3, 0x10
    if (v0 != 0) goto label_0x1b75a4;                           // 0x001b7674: bnez $v0, 0x1b75a4
    s0 = s0 + 0x20;                                             // 0x001b7678: addiu $s0, $s0, 0x20
    func_001b7a50();  // 1b7a50                                // 0x001b767c: jal 0x1b7a50
    if (v0 != 0) goto label_0x1b769c;                           // 0x001b7684: bnez $v0, 0x1b769c
    func_001af3a0();  // 1af3a0 - callAllFunctionPointers      // 0x001b768c: jal 0x1af3a0
    func_001bb740();  // 1bb740                                // 0x001b7694: jal 0x1bb740
label_0x1b769c:
    return;                                                     // 0x001b76b0: jr $ra
    sp = sp + 0x50;                                             // 0x001b76b4: addiu $sp, $sp, 0x50
}
