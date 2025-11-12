void func_0013a3f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_30, local_4;
    
    sp = sp + -0x90;                                            // 0x0013a3f8: addiu $sp, $sp, -0x90
    if (s6 <= 0) goto label_0x13a54c;                           // 0x0013a434: blez $s6, 0x13a54c
    local_30 = 0;                                               // 0x0013a438: sw $zero, 0x30($sp)
    v0 = 0x20 << 16;                                            // 0x0013a43c: lui $v0, 0x20
    s7 = v0 + 0x3ed0;                                           // 0x0013a444: addiu $s7, $v0, 0x3ed0
label_0x13a448:
    v0 = g_00203edc;  // Global at 0x00203edc                   // 0x0013a448: lw $v0, 0xc($s7)
    v1 = g_00203ed8;  // Global at 0x00203ed8                   // 0x0013a44c: lw $v1, 8($s7)
    v1 = v1 << 3;                                               // 0x0013a454: sll $v1, $v1, 3
    v0 = a0 + s4;                                               // 0x0013a458: addu $v0, $a0, $s4
    v1 = v1 + v0;                                               // 0x0013a45c: addu $v1, $v1, $v0
    s1 = s5 + v1;                                               // 0x0013a460: addu $s1, $s5, $v1
    v0 = *(int8_t*)(s1);                                        // 0x0013a464: lb $v0, 0($s1)
    if (v0 == 0) goto label_0x13a53c;                           // 0x0013a468: beqz $v0, 0x13a53c
    s3 = 0x20 << 16;                                            // 0x0013a46c: lui $s3, 0x20
    func_00139fb0();  // 0x139f08                                // 0x0013a474: jal 0x139f08
    a1 = s3 + 0x3ff8;                                           // 0x0013a478: addiu $a1, $s3, 0x3ff8
    func_00137fb0();  // 0x137ec8                                // 0x0013a47c: jal 0x137ec8
    a0 = 0 | 0x9400;                                            // 0x0013a480: ori $a0, $zero, 0x9400
    s0 = 1;                                                     // 0x0013a484: addiu $s0, $zero, 1
label_0x13a488:
    func_00100e38();  // 0x100d98                                // 0x0013a488: jal 0x100d98
    a0 = 1;                                                     // 0x0013a48c: addiu $a0, $zero, 1
    if (v0 == s0) goto label_0x13a488;                          // 0x0013a490: beq $v0, $s0, 0x13a488
    /* nop */                                                   // 0x0013a494: nop 
    func_00137fb0();  // 0x137ec8                                // 0x0013a498: jal 0x137ec8
    a0 = 0 | 0x9401;                                            // 0x0013a49c: ori $a0, $zero, 0x9401
    func_00137fb0();  // 0x137ec8                                // 0x0013a4a0: jal 0x137ec8
    a0 = 0 | 0x9500;                                            // 0x0013a4a4: ori $a0, $zero, 0x9500
    a1 = s3 + 0x3ff8;                                           // 0x0013a4a8: addiu $a1, $s3, 0x3ff8
    func_00139390();  // 0x1392e8                                // 0x0013a4ac: jal 0x1392e8
    v1 = 1;                                                     // 0x0013a4b4: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x13a508;                          // 0x0013a4b8: bne $v0, $v1, 0x13a508
    /* nop */                                                   // 0x0013a4bc: nop 
    a0 = 0 | 0x9501;                                            // 0x0013a4c0: ori $a0, $zero, 0x9501
    func_00137fb0();  // 0x137ec8                                // 0x0013a4c4: jal 0x137ec8
    fp = fp + 1;                                                // 0x0013a4c8: addiu $fp, $fp, 1
    a0 = 0x20 << 16;                                            // 0x0013a4cc: lui $a0, 0x20
    v0 = local_0;                                               // 0x0013a4d0: lw $v0, 0($sp)
    v1 = local_4;                                               // 0x0013a4d4: lw $v1, 4($sp)
    *(uint32_t*)(s2) = v0;                                      // 0x0013a4d8: sw $v0, 0($s2)
    *(uint32_t*)((s2) + 4) = v1;                                // 0x0013a4dc: sw $v1, 4($s2)
    v0 = g_00203ee8;  // Global at 0x00203ee8                   // 0x0013a4e0: lw $v0, 0x3ee8($a0)
    /* bnezl $v0, 0x13a540 */                                   // 0x0013a4e4: bnezl $v0, 0x13a540
    s4 = s4 + 1;                                                // 0x0013a4e8: addiu $s4, $s4, 1
    v0 = 0x22 << 16;                                            // 0x0013a4ec: lui $v0, 0x22
    func_00116598();  // 0x116508                                // 0x0013a4f4: jal 0x116508
    a0 = &str_00225508;  // "DVCI: \\"                          // 0x0013a4f8: addiu $a0, $v0, 0x5508
    goto label_0x13a540;                                        // 0x0013a4fc: b 0x13a540
    s4 = s4 + 1;                                                // 0x0013a500: addiu $s4, $s4, 1
    /* nop */                                                   // 0x0013a504: nop 
label_0x13a508:
    func_00137fb0();  // 0x137ec8                                // 0x0013a508: jal 0x137ec8
    a0 = 0 | 0x9502;                                            // 0x0013a50c: ori $a0, $zero, 0x9502
    v1 = 0x20 << 16;                                            // 0x0013a510: lui $v1, 0x20
    v0 = g_00203ee8;  // Global at 0x00203ee8                   // 0x0013a514: lw $v0, 0x3ee8($v1)
    /* bnezl $v0, 0x13a534 */                                   // 0x0013a518: bnezl $v0, 0x13a534
    v1 = local_30;                                              // 0x0013a51c: lw $v1, 0x30($sp)
    v0 = 0x22 << 16;                                            // 0x0013a520: lui $v0, 0x22
    func_00116598();  // 0x116508                                // 0x0013a528: jal 0x116508
    a0 = &str_00225520;  // "DVCI: Total %d files.\n"           // 0x0013a52c: addiu $a0, $v0, 0x5520
    v1 = local_30;                                              // 0x0013a530: lw $v1, 0x30($sp)
    v1 = v1 + 1;                                                // 0x0013a534: addiu $v1, $v1, 1
    local_30 = v1;                                              // 0x0013a538: sw $v1, 0x30($sp)
label_0x13a53c:
    s4 = s4 + 1;                                                // 0x0013a53c: addiu $s4, $s4, 1
label_0x13a540:
    v0 = (s4 < s6) ? 1 : 0;                                     // 0x0013a540: slt $v0, $s4, $s6
    if (v0 != 0) goto label_0x13a448;                           // 0x0013a544: bnez $v0, 0x13a448
    s2 = s2 + 8;                                                // 0x0013a548: addiu $s2, $s2, 8
label_0x13a54c:
    a0 = 0x20 << 16;                                            // 0x0013a54c: lui $a0, 0x20
    s0 = a0 + 0x3ee8;                                           // 0x0013a550: addiu $s0, $a0, 0x3ee8
    v0 = g_00203ee8;  // Global at 0x00203ee8                   // 0x0013a554: lw $v0, 0($s0)
    /* bnezl $v0, 0x13a574 */                                   // 0x0013a558: bnezl $v0, 0x13a574
    v0 = local_30;                                              // 0x0013a55c: lw $v0, 0x30($sp)
    a0 = 0x22 << 16;                                            // 0x0013a560: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x0013a568: jal 0x116508
    a0 = &str_00225538;  // "DVCI: Warning, Can't load all cache file.%c" // 0x0013a56c: addiu $a0, $a0, 0x5538
    v0 = local_30;                                              // 0x0013a570: lw $v0, 0x30($sp)
    if (v0 <= 0) goto label_0x13a59c;                           // 0x0013a574: blez $v0, 0x13a59c
    v1 = g_00203ee8;  // Global at 0x00203ee8                   // 0x0013a57c: lw $v1, 0($s0)
    v0 = 2;                                                     // 0x0013a580: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x13a598;                          // 0x0013a584: beq $v1, $v0, 0x13a598
    a1 = 0xa;                                                   // 0x0013a588: addiu $a1, $zero, 0xa
    a0 = 0x22 << 16;                                            // 0x0013a58c: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x0013a590: jal 0x116508
    a0 = &str_00225550;  // "DVD-ROM"                           // 0x0013a594: addiu $a0, $a0, 0x5550
label_0x13a598:
label_0x13a59c:
    return;                                                     // 0x0013a5c4: jr $ra
    sp = sp + 0x90;                                             // 0x0013a5c8: addiu $sp, $sp, 0x90
}