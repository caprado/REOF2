void func_0013e430() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x60;                                            // 0x0013e430: addiu $sp, $sp, -0x60
    v0 = 0x21 << 16;                                            // 0x0013e434: lui $v0, 0x21
    s3 = v0 + -0x6180;                                          // 0x0013e44c: addiu $s3, $v0, -0x6180
    v0 = g_00209e80;  // Global at 0x00209e80                   // 0x0013e464: lb $v0, 0($s3)
    if (v0 == 0) goto label_0x13e49c;                           // 0x0013e468: beqz $v0, 0x13e49c
label_0x13e478:
    s1 = s1 + 1;                                                // 0x0013e478: addiu $s1, $s1, 1
    a0 = a0 + 0x60;                                             // 0x0013e47c: addiu $a0, $a0, 0x60
    v0 = (s1 < 0x10) ? 1 : 0;                                   // 0x0013e480: slti $v0, $s1, 0x10
    if (v0 == 0) goto label_0x13e49c;                           // 0x0013e484: beqz $v0, 0x13e49c
    v1 = v1 + 0x60;                                             // 0x0013e488: addiu $v1, $v1, 0x60
    v0 = g_002260e4;  // Global at 0x002260e4                   // 0x0013e48c: lb $v0, 0($a0)
    /* nop */                                                   // 0x0013e490: nop 
    if (v0 != 0) goto label_0x13e478;                           // 0x0013e494: bnez $v0, 0x13e478
label_0x13e49c:
    v1 = 0x10;                                                  // 0x0013e49c: addiu $v1, $zero, 0x10
    if (s1 == v1) goto label_0x13e758;                          // 0x0013e4a0: beq $s1, $v1, 0x13e758
    a2 = 0x60;                                                  // 0x0013e4b0: addiu $a2, $zero, 0x60
    func_00107c70();  // 107c70                                // 0x0013e4b4: jal 0x107c70
    if (s2 <= 0) goto label_0x13e538;                           // 0x0013e4bc: blez $s2, 0x13e538
    g_00209e84 = s2;  // Global at 0x00209e84                   // 0x0013e4c0: sw $s2, 4($s3)
    s4 = s3 + 8;                                                // 0x0013e4c4: addiu $s4, $s3, 8
    s6 = 0x22 << 16;                                            // 0x0013e4c8: lui $s6, 0x22
label_0x13e4d0:
    func_0013dbe0();  // 13dbe0                                // 0x0013e4d0: jal 0x13dbe0
    /* nop */                                                   // 0x0013e4d4: nop 
    g_00209e94 = v0;  // Global at 0x00209e94                   // 0x0013e4d8: sw $v0, 0($s0)
    if (v0 != 0) goto label_0x13e528;                           // 0x0013e4dc: bnez $v0, 0x13e528
    s0 = s0 + 4;                                                // 0x0013e4e0: addiu $s0, $s0, 4
    func_00116508();  // 116508                                // 0x0013e4e4: jal 0x116508
    a0 = &str_00226030;  // "E0100401: can't create PS2RNA of IOP\n" // 0x0013e4e8: addiu $a0, $s6, 0x6030
    if (s2 <= 0) goto label_0x13e758;                           // 0x0013e4ec: blez $s2, 0x13e758
    v0 = *(int32_t*)(s1);                                       // 0x0013e4fc: lw $v0, 0($s1)
    s1 = s1 + 4;                                                // 0x0013e500: addiu $s1, $s1, 4
    if (v0 == 0) goto label_0x13e514;                           // 0x0013e504: beqz $v0, 0x13e514
    func_0013dc58();  // 13dc58                                // 0x0013e50c: jal 0x13dc58
    /* nop */                                                   // 0x0013e510: nop 
label_0x13e514:
    s0 = s0 + -1;                                               // 0x0013e514: addiu $s0, $s0, -1
    /* bnezl $s0, 0x13e500 */                                   // 0x0013e518: bnezl $s0, 0x13e500
    v0 = *(int32_t*)(s1);                                       // 0x0013e51c: lw $v0, 0($s1)
    goto label_0x13e758;                                        // 0x0013e520: b 0x13e758
label_0x13e528:
    s1 = s1 + 1;                                                // 0x0013e528: addiu $s1, $s1, 1
    v0 = (s1 < s2) ? 1 : 0;                                     // 0x0013e52c: slt $v0, $s1, $s2
    if (v0 != 0) goto label_0x13e4d0;                           // 0x0013e530: bnez $v0, 0x13e4d0
    /* nop */                                                   // 0x0013e534: nop 
label_0x13e538:
    local_0 = s2;                                               // 0x0013e538: sw $s2, 0($sp)
    if (s2 <= 0) goto label_0x13e570;                           // 0x0013e540: blez $s2, 0x13e570
    local_4 = 0;                                                // 0x0013e544: sw $zero, 4($sp)
    a2 = sp + 8;                                                // 0x0013e548: addiu $a2, $sp, 8
    a1 = s3 + 8;                                                // 0x0013e54c: addiu $a1, $s3, 8
label_0x13e550:
    v0 = g_00209e88;  // Global at 0x00209e88                   // 0x0013e550: lw $v0, 0($a1)
    a1 = a1 + 4;                                                // 0x0013e554: addiu $a1, $a1, 4
    s1 = s1 + 1;                                                // 0x0013e558: addiu $s1, $s1, 1
    v1 = g_00210004;  // Global at 0x00210004                   // 0x0013e55c: lw $v1, 4($v0)
    a0 = (s1 < s2) ? 1 : 0;                                     // 0x0013e560: slt $a0, $s1, $s2
    *(uint32_t*)(a2) = v1;                                      // 0x0013e564: sw $v1, 0($a2)
    if (a0 != 0) goto label_0x13e550;                           // 0x0013e568: bnez $a0, 0x13e550
    a2 = a2 + 4;                                                // 0x0013e56c: addiu $a2, $a2, 4
label_0x13e570:
    a0 = 8;                                                     // 0x0013e570: addiu $a0, $zero, 8
    a2 = 4;                                                     // 0x0013e578: addiu $a2, $zero, 4
    a3 = sp + 0x10;                                             // 0x0013e57c: addiu $a3, $sp, 0x10
    func_00139120();  // 139120                                // 0x0013e580: jal 0x139120
    t0 = 1;                                                     // 0x0013e584: addiu $t0, $zero, 1
    if (v0 != 0) goto label_0x13e5a8;                           // 0x0013e588: bnez $v0, 0x13e5a8
    g_00209ea0 = v0;  // Global at 0x00209ea0                   // 0x0013e58c: sw $v0, 0x20($s3)
    a0 = 0x22 << 16;                                            // 0x0013e590: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x0013e594: jal 0x116508
    a0 = &str_00226058;  // "E1072602: can't create DTR handle\n" // 0x0013e598: addiu $a0, $a0, 0x6058
    goto label_0x13e758;                                        // 0x0013e59c: b 0x13e758
    /* nop */                                                   // 0x0013e5a4: nop 
label_0x13e5a8:
    if (s2 <= 0) goto label_0x13e680;                           // 0x0013e5a8: blez $s2, 0x13e680
    s4 = s3 + 8;                                                // 0x0013e5b0: addiu $s4, $s3, 8
    s6 = 0x22 << 16;                                            // 0x0013e5b4: lui $s6, 0x22
    s0 = s3 + 0x10;                                             // 0x0013e5b8: addiu $s0, $s3, 0x10
    v0 = s1 << 2;                                               // 0x0013e5bc: sll $v0, $s1, 2
label_0x13e5c0:
    s1 = s1 + 1;                                                // 0x0013e5c0: addiu $s1, $s1, 1
    v1 = s4 + v0;                                               // 0x0013e5c4: addu $v1, $s4, $v0
    v0 = v0 + s5;                                               // 0x0013e5c8: addu $v0, $v0, $s5
    a2 = g_00209f24;  // Global at 0x00209f24                   // 0x0013e5cc: lw $a2, 0($v1)
    a0 = g_00210000;  // Global at 0x00210000                   // 0x0013e5d0: lw $a0, 0($v0)
    func_00138778();  // 138778                                // 0x0013e5d4: jal 0x138778
    a1 = *(int32_t*)((a2) + 8);                                 // 0x0013e5d8: lw $a1, 8($a2)
    v1 = (s1 < s2) ? 1 : 0;                                     // 0x0013e5dc: slt $v1, $s1, $s2
    g_00209e90 = v0;  // Global at 0x00209e90                   // 0x0013e5e0: sw $v0, 0($s0)
    if (v0 != 0) goto label_0x13e678;                           // 0x0013e5e4: bnez $v0, 0x13e678
    s0 = s0 + 4;                                                // 0x0013e5e8: addiu $s0, $s0, 4
    a0 = &str_00226080;  // "PS2RNA_Start: not implemented\n"   // 0x0013e5ec: addiu $a0, $s6, 0x6080
    func_00116508();  // 116508                                // 0x0013e5f0: jal 0x116508
    if (s2 <= 0) goto label_0x13e758;                           // 0x0013e5f8: blez $s2, 0x13e758
    s0 = s3 + 0x10;                                             // 0x0013e604: addiu $s0, $s3, 0x10
    v0 = g_00209e90;  // Global at 0x00209e90                   // 0x0013e608: lw $v0, 0($s0)
    /* nop */                                                   // 0x0013e60c: nop 
    s0 = s0 + 4;                                                // 0x0013e610: addiu $s0, $s0, 4
    if (v0 == 0) goto label_0x13e624;                           // 0x0013e614: beqz $v0, 0x13e624
    func_00138868();  // 138868                                // 0x0013e61c: jal 0x138868
    /* nop */                                                   // 0x0013e620: nop 
label_0x13e624:
    v0 = g_00209ea0;  // Global at 0x00209ea0                   // 0x0013e624: lw $v0, 0x20($s3)
    if (v0 == 0) goto label_0x13e648;                           // 0x0013e628: beqz $v0, 0x13e648
    a0 = 9;                                                     // 0x0013e62c: addiu $a0, $zero, 9
    a2 = 1;                                                     // 0x0013e634: addiu $a2, $zero, 1
    func_00139120();  // 139120                                // 0x0013e640: jal 0x139120
    local_0 = v0;                                               // 0x0013e644: sw $v0, 0($sp)
label_0x13e648:
    a0 = *(int32_t*)(s1);                                       // 0x0013e648: lw $a0, 0($s1)
    if (a0 == 0) goto label_0x13e65c;                           // 0x0013e64c: beqz $a0, 0x13e65c
    s1 = s1 + 4;                                                // 0x0013e650: addiu $s1, $s1, 4
    func_0013dc58();  // 13dc58                                // 0x0013e654: jal 0x13dc58
    /* nop */                                                   // 0x0013e658: nop 
label_0x13e65c:
    s5 = s5 + 1;                                                // 0x0013e65c: addiu $s5, $s5, 1
    v0 = (s5 < s2) ? 1 : 0;                                     // 0x0013e660: slt $v0, $s5, $s2
    /* bnezl $v0, 0x13e610 */                                   // 0x0013e664: bnezl $v0, 0x13e610
    v0 = g_00209e94;  // Global at 0x00209e94                   // 0x0013e668: lw $v0, 0($s0)
    goto label_0x13e758;                                        // 0x0013e66c: b 0x13e758
    /* nop */                                                   // 0x0013e674: nop 
label_0x13e678:
    if (v1 != 0) goto label_0x13e5c0;                           // 0x0013e678: bnez $v1, 0x13e5c0
    v0 = s1 << 2;                                               // 0x0013e67c: sll $v0, $s1, 2
label_0x13e680:
    if (s2 <= 0) goto label_0x13e6ac;                           // 0x0013e680: blez $s2, 0x13e6ac
    a1 = s3 + 0x18;                                             // 0x0013e688: addiu $a1, $s3, 0x18
label_0x13e690:
    v1 = str_00226080;  // "PS2RNA_Start: not implemented\n"    // 0x0013e690: lw $v1, 0($a0)
    a0 = a0 + 4;                                                // 0x0013e694: addiu $a0, $a0, 4
    s1 = s1 + 1;                                                // 0x0013e698: addiu $s1, $s1, 1
    v0 = (s1 < s2) ? 1 : 0;                                     // 0x0013e69c: slt $v0, $s1, $s2
    g_00209e98 = v1;  // Global at 0x00209e98                   // 0x0013e6a0: sw $v1, 0($a1)
    if (v0 != 0) goto label_0x13e690;                           // 0x0013e6a4: bnez $v0, 0x13e690
    a1 = a1 + 4;                                                // 0x0013e6a8: addiu $a1, $a1, 4
label_0x13e6ac:
    g_00209ea4 = 0;  // Global at 0x00209ea4                    // 0x0013e6ac: sb $zero, 0x24($s3)
    g_00209ea5 = 0;  // Global at 0x00209ea5                    // 0x0013e6b0: sb $zero, 0x25($s3)
    g_00209ea6 = s2;  // Global at 0x00209ea6                   // 0x0013e6b4: sb $s2, 0x26($s3)
    g_00209ea7 = s2;  // Global at 0x00209ea7                   // 0x0013e6b8: sb $s2, 0x27($s3)
    g_00209eb0 = 0;  // Global at 0x00209eb0                    // 0x0013e6bc: sw $zero, 0x30($s3)
    g_00209eb4 = 0;  // Global at 0x00209eb4                    // 0x0013e6c0: sw $zero, 0x34($s3)
    g_00209ec8 = 0;  // Global at 0x00209ec8                    // 0x0013e6c4: sw $zero, 0x48($s3)
    g_00209ecc = 0;  // Global at 0x00209ecc                    // 0x0013e6c8: sw $zero, 0x4c($s3)
    g_00209ed3 = 0;  // Global at 0x00209ed3                    // 0x0013e6cc: sb $zero, 0x53($s3)
    if (s2 <= 0) goto label_0x13e704;                           // 0x0013e6d0: blez $s2, 0x13e704
    g_00209ed2 = 0;  // Global at 0x00209ed2                    // 0x0013e6d4: sb $zero, 0x52($s3)
    v1 = s3 + 0x40;                                             // 0x0013e6dc: addiu $v1, $s3, 0x40
    v0 = s3 + 0x38;                                             // 0x0013e6e0: addiu $v0, $s3, 0x38
    /* nop */                                                   // 0x0013e6e4: nop 
label_0x13e6e8:
    s1 = s1 + -1;                                               // 0x0013e6e8: addiu $s1, $s1, -1
    g_00209eb8 = 0;  // Global at 0x00209eb8                    // 0x0013e6ec: sw $zero, 0($v0)
    g_00209ec0 = 0;  // Global at 0x00209ec0                    // 0x0013e6f0: sw $zero, 0($v1)
    v1 = v1 + 4;                                                // 0x0013e6f4: addiu $v1, $v1, 4
    /* nop */                                                   // 0x0013e6f8: nop 
    if (s1 != 0) goto label_0x13e6e8;                           // 0x0013e6fc: bnez $s1, 0x13e6e8
    v0 = v0 + 4;                                                // 0x0013e700: addiu $v0, $v0, 4
label_0x13e704:
    s1 = 1;                                                     // 0x0013e704: addiu $s1, $zero, 1
    g_00209ed0 = 0;  // Global at 0x00209ed0                    // 0x0013e708: sb $zero, 0x50($s3)
    g_00209ed1 = s1;  // Global at 0x00209ed1                   // 0x0013e70c: sb $s1, 0x51($s3)
    g_00209ed4 = 0;  // Global at 0x00209ed4                    // 0x0013e710: sw $zero, 0x54($s3)
    a0 = *(int32_t*)(s5);                                       // 0x0013e714: lw $a0, 0($s5)
    v1 = g_00226084;  // Global at 0x00226084                   // 0x0013e718: lw $v1, 0($a0)
    v0 = g_00209ee8;  // Global at 0x00209ee8                   // 0x0013e71c: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x0013e720: jalr $v0
    a1 = 1;                                                     // 0x0013e724: addiu $a1, $zero, 1
    a0 = *(int32_t*)(s5);                                       // 0x0013e728: lw $a0, 0($s5)
    v1 = g_00226084;  // Global at 0x00226084                   // 0x0013e730: lw $v1, 0($a0)
    v0 = g_00209ee8;  // Global at 0x00209ee8                   // 0x0013e734: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x0013e738: jalr $v0
    v1 = 0x4000;                                                // 0x0013e740: addiu $v1, $zero, 0x4000
    s0 = s0 + v0;                                               // 0x0013e744: addu $s0, $s0, $v0
    g_00209ed8 = s0;  // Global at 0x00209ed8                   // 0x0013e74c: sw $s0, 0x58($s3)
    g_00209edc = v1;  // Global at 0x00209edc                   // 0x0013e750: sw $v1, 0x5c($s3)
    g_00209e80 = s1;  // Global at 0x00209e80                   // 0x0013e754: sb $s1, 0($s3)
label_0x13e758:
    return;                                                     // 0x0013e778: jr $ra
    sp = sp + 0x60;                                             // 0x0013e77c: addiu $sp, $sp, 0x60
}