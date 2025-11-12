void func_00122608() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x40;                                            // 0x00122608: addiu $sp, $sp, -0x40
    v0 = *(int8_t*)((s1) + 2);                                  // 0x00122628: lb $v0, 2($s1)
    if (v0 <= 0) goto label_0x122654;                           // 0x0012262c: blez $v0, 0x122654
    a0 = *(uint8_t*)((s1) + 2);                                 // 0x00122630: lbu $a0, 2($s1)
    v1 = s1 + 0x14;                                             // 0x00122634: addiu $v1, $s1, 0x14
label_0x122638:
    *(uint32_t*)(v1) = 0;                                       // 0x00122638: sw $zero, 0($v1)
    v1 = v1 + 4;                                                // 0x0012263c: addiu $v1, $v1, 4
    s2 = s2 + 1;                                                // 0x00122640: addiu $s2, $s2, 1
    v0 = *(int8_t*)((s1) + 2);                                  // 0x00122644: lb $v0, 2($s1)
    v0 = (s2 < v0) ? 1 : 0;                                     // 0x00122648: slt $v0, $s2, $v0
    if (v0 != 0) goto label_0x122638;                           // 0x0012264c: bnez $v0, 0x122638
    a0 = *(uint8_t*)((s1) + 2);                                 // 0x00122650: lbu $a0, 2($s1)
label_0x122654:
    v0 = a0 << 0x18;                                            // 0x00122654: sll $v0, $a0, 0x18
    *(uint32_t*)((s1) + 0x2c) = 0;                              // 0x00122658: sw $zero, 0x2c($s1)
    if (v0 <= 0) goto label_0x1226f0;                           // 0x0012265c: blez $v0, 0x1226f0
    s3 = s1 + 4;                                                // 0x00122664: addiu $s3, $s1, 4
label_0x122668:
    s0 = *(int32_t*)(s3);                                       // 0x00122668: lw $s0, 0($s3)
    s3 = s3 + 4;                                                // 0x0012266c: addiu $s3, $s3, 4
    s2 = s2 + 1;                                                // 0x00122670: addiu $s2, $s2, 1
    v1 = *(int32_t*)(s0);                                       // 0x00122674: lw $v1, 0($s0)
    v0 = *(int32_t*)((v1) + 0x14);                              // 0x00122678: lw $v0, 0x14($v1)
    /* call function at address in v0 */                        // 0x0012267c: jalr $v0
    v1 = *(int32_t*)(s0);                                       // 0x00122684: lw $v1, 0($s0)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x0012268c: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x00122690: jalr $v0
    v1 = *(int32_t*)(s0);                                       // 0x00122698: lw $v1, 0($s0)
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x001226a4: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x001226ac: jalr $v0
    a0 = local_0;                                               // 0x001226b8: lw $a0, 0($sp)
    func_00107d30();  // 0x107c70                                // 0x001226bc: jal 0x107c70
    a2 = local_4;                                               // 0x001226c0: lw $a2, 4($sp)
    v1 = *(int32_t*)(s0);                                       // 0x001226c4: lw $v1, 0($s0)
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x001226d0: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x001226d4: jalr $v0
    v0 = *(int8_t*)((s1) + 2);                                  // 0x001226dc: lb $v0, 2($s1)
    v0 = (s2 < v0) ? 1 : 0;                                     // 0x001226e0: slt $v0, $s2, $v0
    if (v0 != 0) goto label_0x122668;                           // 0x001226e4: bnez $v0, 0x122668
    a0 = *(uint8_t*)((s1) + 2);                                 // 0x001226e8: lbu $a0, 2($s1)
    v0 = a0 << 0x18;                                            // 0x001226ec: sll $v0, $a0, 0x18
label_0x1226f0:
    if (v0 <= 0) goto label_0x122780;                           // 0x001226f0: blez $v0, 0x122780
    s3 = s1 + 0xc;                                              // 0x001226f8: addiu $s3, $s1, 0xc
    s0 = *(int32_t*)(s3);                                       // 0x001226fc: lw $s0, 0($s3)
    s3 = s3 + 4;                                                // 0x00122700: addiu $s3, $s3, 4
    s2 = s2 + 1;                                                // 0x00122704: addiu $s2, $s2, 1
    v1 = *(int32_t*)(s0);                                       // 0x00122708: lw $v1, 0($s0)
    v0 = *(int32_t*)((v1) + 0x14);                              // 0x0012270c: lw $v0, 0x14($v1)
    /* call function at address in v0 */                        // 0x00122710: jalr $v0
    v1 = *(int32_t*)(s0);                                       // 0x00122718: lw $v1, 0($s0)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x00122720: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x00122724: jalr $v0
    v1 = *(int32_t*)(s0);                                       // 0x0012272c: lw $v1, 0($s0)
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x00122738: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x00122740: jalr $v0
    a0 = local_0;                                               // 0x0012274c: lw $a0, 0($sp)
    func_00107d30();  // 0x107c70                                // 0x00122750: jal 0x107c70
    a2 = local_4;                                               // 0x00122754: lw $a2, 4($sp)
    a2 = *(int32_t*)(s0);                                       // 0x00122758: lw $a2, 0($s0)
    v1 = *(int32_t*)((a2) + 0x1c);                              // 0x00122764: lw $v1, 0x1c($a2)
    /* call function at address in v1 */                        // 0x00122768: jalr $v1
    v0 = *(int8_t*)((s1) + 2);                                  // 0x00122770: lb $v0, 2($s1)
    v0 = (s2 < v0) ? 1 : 0;                                     // 0x00122774: slt $v0, $s2, $v0
    /* bnezl $v0, 0x122700 */                                   // 0x00122778: bnezl $v0, 0x122700
    s0 = *(int32_t*)(s3);                                       // 0x0012277c: lw $s0, 0($s3)
label_0x122780:
    v0 = 2;                                                     // 0x00122780: addiu $v0, $zero, 2
    *(uint8_t*)((s1) + 1) = v0;                                 // 0x00122788: sb $v0, 1($s1)
    return;                                                     // 0x0012279c: jr $ra
    sp = sp + 0x40;                                             // 0x001227a0: addiu $sp, $sp, 0x40
}