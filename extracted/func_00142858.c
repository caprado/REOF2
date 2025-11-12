void func_00142858() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_18, local_4, local_8, local_b0, local_b8;
    uint32_t local_c, local_c0, local_c8;
    
    sp = sp + -0xb0;                                            // 0x0014285c: addiu $sp, $sp, -0xb0
    v0 = t8 + 0x6d4;                                            // 0x00142860: addiu $v0, $t8, 0x6d4
    v1 = 0x140;                                                 // 0x0014286c: addiu $v1, $zero, 0x140
    local_14 = v0;                                              // 0x00142888: sw $v0, 0x14($sp)
    a1 = local_14;                                              // 0x001428a0: lw $a1, 0x14($sp)
    a0 = *(int32_t*)((t8) + 0x834);                             // 0x001428a4: lw $a0, 0x834($t8)
    s6 = local_b0;                                              // 0x001428a8: lw $s6, 0xb0($sp)
    local_8 = a0;                                               // 0x001428ac: sw $a0, 8($sp)
    a0 = 0x1c;                                                  // 0x001428b0: addiu $a0, $zero, 0x1c
    t5 = local_c0;                                              // 0x001428b4: lw $t5, 0xc0($sp)
    v0 = *(int32_t*)((t8) + 0x828);                             // 0x001428b8: lw $v0, 0x828($t8)
    local_4 = t2;                                               // 0x001428bc: sw $t2, 4($sp)
    /* multiply: v0 * v1 -> hi:lo */                            // 0x001428c0: mult $ac2, $v0, $v1
    local_0 = a3;                                               // 0x001428c4: sw $a3, 0($sp)
    a3 = local_4;                                               // 0x001428c8: lw $a3, 4($sp)
    t2 = s6 >> 1;                                               // 0x001428cc: sra $t2, $s6, 1
    s2 = local_b8;                                              // 0x001428d0: lw $s2, 0xb8($sp)
    t0 = t2 + a3;                                               // 0x001428d4: addu $t0, $t2, $a3
    v1 = a1 + v0;                                               // 0x001428d8: addu $v1, $a1, $v0
    s7 = *(int32_t*)(v1);                                       // 0x001428dc: lw $s7, 0($v1)
    v0 = v0 + 0x5a8;                                            // 0x001428e0: addiu $v0, $v0, 0x5a8
    v0 = t8 + v0;                                               // 0x001428e4: addu $v0, $t8, $v0
    v1 = a0 + 0xb8;                                             // 0x001428ec: addiu $v1, $a0, 0xb8
    a0 = a0 + 0x48;                                             // 0x001428f0: addiu $a0, $a0, 0x48
    t7 = v0 + v1;                                               // 0x001428f4: addu $t7, $v0, $v1
    if (t5 == 0) goto label_0x142910;                           // 0x001428f8: beqz $t5, 0x142910
    t4 = v0 + a0;                                               // 0x001428fc: addu $t4, $v0, $a0
    v0 = s2 >> 1;                                               // 0x00142900: sra $v0, $s2, 1
    v1 = s0 + s1;                                               // 0x00142904: addu $v1, $s0, $s1
    goto label_0x142918;                                        // 0x00142908: b 0x142918
    v0 = v0 << 1;                                               // 0x0014290c: sll $v0, $v0, 1
label_0x142910:
    v0 = s2 >> 1;                                               // 0x00142910: sra $v0, $s2, 1
    v1 = s0 + s1;                                               // 0x00142914: addu $v1, $s0, $s1
label_0x142918:
    v0 = v0 + t3;                                               // 0x00142918: addu $v0, $v0, $t3
    a2 = v0 + v1;                                               // 0x0014291c: addu $a2, $v0, $v1
    a1 = *(int32_t*)((fp) + 0x10);                              // 0x00142920: lw $a1, 0x10($fp)
    s4 = t0 >> 4;                                               // 0x00142924: sra $s4, $t0, 4
    v0 = local_0;                                               // 0x00142928: lw $v0, 0($sp)
    v1 = s4 << 4;                                               // 0x0014292c: sll $v1, $s4, 4
    s5 = a2 >> 4;                                               // 0x00142934: sra $s5, $a2, 4
    a3 = local_8;                                               // 0x00142938: lw $a3, 8($sp)
    a0 = v0 + s0;                                               // 0x0014293c: addu $a0, $v0, $s0
    v1 = t0 - v1;                                               // 0x00142940: subu $v1, $t0, $v1
    a0 = a0 << 5;                                               // 0x00142944: sll $a0, $a0, 5
    *(uint32_t*)((t4) + 4) = v1;                                // 0x00142948: sw $v1, 4($t4)
    a0 = a3 + a0;                                               // 0x0014294c: addu $a0, $a3, $a0
    a1 = a1 + s5;                                               // 0x00142950: addu $a1, $a1, $s5
    v0 = s5 << 4;                                               // 0x00142954: sll $v0, $s5, 4
    local_10 = a1;                                              // 0x00142958: sw $a1, 0x10($sp)
    a2 = a2 - v0;                                               // 0x0014295c: subu $a2, $a2, $v0
    *(uint32_t*)(t4) = a0;                                      // 0x00142960: sw $a0, 0($t4)
    t9 = s2 & 1;                                                // 0x00142964: andi $t9, $s2, 1
    if (t9 == 0) goto label_0x1429a8;                           // 0x00142968: beqz $t9, 0x1429a8
    s3 = s6 & 1;                                                // 0x0014296c: andi $s3, $s6, 1
    v0 = t6 << t5;                                              // 0x00142970: sllv $v0, $t6, $t5
    v0 = a2 + v0;                                               // 0x00142974: addu $v0, $a2, $v0
    v0 = (v0 < 0x10) ? 1 : 0;                                   // 0x00142978: slti $v0, $v0, 0x10
    /* bnezl $v0, 0x1429dc */                                   // 0x0014297c: bnezl $v0, 0x1429dc
    *(uint32_t*)((t4) + 8) = t6;                                // 0x00142980: sw $t6, 8($t4)
    v0 = 0x10;                                                  // 0x00142984: addiu $v0, $zero, 0x10
    v1 = a2 >> t5;                                              // 0x00142988: srav $v1, $a2, $t5
    v0 = v0 >> t5;                                              // 0x0014298c: srav $v0, $v0, $t5
    v0 = v0 - v1;                                               // 0x00142990: subu $v0, $v0, $v1
    v0 = v0 + -1;                                               // 0x00142994: addiu $v0, $v0, -1
    v1 = t6 - v0;                                               // 0x00142998: subu $v1, $t6, $v0
    *(uint32_t*)((t4) + 8) = v0;                                // 0x0014299c: sw $v0, 8($t4)
    goto label_0x1429e0;                                        // 0x001429a0: b 0x1429e0
    *(uint32_t*)((t4) + 0xc) = v1;                              // 0x001429a4: sw $v1, 0xc($t4)
label_0x1429a8:
    v0 = t6 << t5;                                              // 0x001429a8: sllv $v0, $t6, $t5
    v0 = a2 + v0;                                               // 0x001429ac: addu $v0, $a2, $v0
    v0 = (v0 < 0x11) ? 1 : 0;                                   // 0x001429b0: slti $v0, $v0, 0x11
    /* bnezl $v0, 0x1429dc */                                   // 0x001429b4: bnezl $v0, 0x1429dc
    *(uint32_t*)((t4) + 8) = t6;                                // 0x001429b8: sw $t6, 8($t4)
    v0 = 0x10;                                                  // 0x001429bc: addiu $v0, $zero, 0x10
    v1 = a2 >> t5;                                              // 0x001429c0: srav $v1, $a2, $t5
    v0 = v0 >> t5;                                              // 0x001429c4: srav $v0, $v0, $t5
    v0 = v0 - v1;                                               // 0x001429c8: subu $v0, $v0, $v1
    a0 = t6 - v0;                                               // 0x001429cc: subu $a0, $t6, $v0
    *(uint32_t*)((t4) + 8) = v0;                                // 0x001429d0: sw $v0, 8($t4)
    goto label_0x1429e0;                                        // 0x001429d4: b 0x1429e0
    *(uint32_t*)((t4) + 0xc) = a0;                              // 0x001429d8: sw $a0, 0xc($t4)
    *(uint32_t*)((t4) + 0xc) = 0;                               // 0x001429dc: sw $zero, 0xc($t4)
label_0x1429e0:
    a1 = *(int32_t*)((t8) + 0x828);                             // 0x001429e0: lw $a1, 0x828($t8)
    v0 = 0x140;                                                 // 0x001429e4: addiu $v0, $zero, 0x140
    a3 = 0x600;                                                 // 0x001429e8: addiu $a3, $zero, 0x600
    a0 = s3 << 1;                                               // 0x001429ec: sll $a0, $s3, 1
    /* multiply: a1 * v0 -> hi:lo */                            // 0x001429f0: mult $ac3, $a1, $v0
    v0 = local_c8;                                              // 0x001429f8: lw $v0, 0xc8($sp)
    t1 = a2 << 4;                                               // 0x001429fc: sll $t1, $a2, 4
    t2 = t1 + 0x300;                                            // 0x00142a00: addiu $t2, $t1, 0x300
    a2 = 0x10;                                                  // 0x00142a04: addiu $a2, $zero, 0x10
    v0 = v0 << 2;                                               // 0x00142a08: sll $v0, $v0, 2
    a2 = a2 << t5;                                              // 0x00142a0c: sllv $a2, $a2, $t5
    local_18 = v0;                                              // 0x00142a10: sw $v0, 0x18($sp)
    a1 = v1 + t8;                                               // 0x00142a14: addu $a1, $v1, $t8
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00142a18: srl $v0, $s2, 0x1f
    v1 = (unsigned)s6 >> 0x1f;                                  // 0x00142a1c: srl $v1, $s6, 0x1f
    t0 = g_00211281;  // Global at 0x00211281                   // 0x00142a20: lw $t0, 0x5a8($a1)
    v1 = s6 + v1;                                               // 0x00142a24: addu $v1, $s6, $v1
    a1 = s2 + v0;                                               // 0x00142a28: addu $a1, $s2, $v0
    s3 = v1 >> 1;                                               // 0x00142a2c: sra $s3, $v1, 1
    s2 = t0 + a3;                                               // 0x00142a30: addu $s2, $t0, $a3
    v1 = v1 >> 2;                                               // 0x00142a34: sra $v1, $v1, 2
    a3 = local_18;                                              // 0x00142a38: lw $a3, 0x18($sp)
    t1 = s2 + t1;                                               // 0x00142a3c: addu $t1, $s2, $t1
    t2 = s2 + t2;                                               // 0x00142a40: addu $t2, $s2, $t2
    s6 = a1 >> 1;                                               // 0x00142a44: sra $s6, $a1, 1
    a0 = a3 | a0;                                               // 0x00142a48: or $a0, $a3, $a0
    a0 = a0 | t9;                                               // 0x00142a4c: or $a0, $a0, $t9
    a3 = s0 >> 1;                                               // 0x00142a50: sra $a3, $s0, 1
    local_c = a0;                                               // 0x00142a54: sw $a0, 0xc($sp)
    a0 = local_4;                                               // 0x00142a58: lw $a0, 4($sp)
    *(uint32_t*)((t4) + 0x14) = t1;                             // 0x00142a5c: sw $t1, 0x14($t4)
    v0 = a0 >> 1;                                               // 0x00142a60: sra $v0, $a0, 1
    *(uint32_t*)((t4) + 0x10) = a2;                             // 0x00142a64: sw $a2, 0x10($t4)
    t0 = v1 + v0;                                               // 0x00142a68: addu $t0, $v1, $v0
    *(uint32_t*)((t4) + 0x18) = t2;                             // 0x00142a6c: sw $t2, 0x18($t4)
    if (t5 == 0) goto label_0x142a94;                           // 0x00142a70: beqz $t5, 0x142a94
    t1 = t6 >> 1;                                               // 0x00142a74: sra $t1, $t6, 1
    v0 = a1 >> 2;                                               // 0x00142a78: sra $v0, $a1, 2
    a0 = t3 >> 1;                                               // 0x00142a7c: sra $a0, $t3, 1
    v0 = v0 << 1;                                               // 0x00142a80: sll $v0, $v0, 1
    v1 = a3 + s1;                                               // 0x00142a84: addu $v1, $a3, $s1
    v0 = v0 + a0;                                               // 0x00142a88: addu $v0, $v0, $a0
    goto label_0x142aa8;                                        // 0x00142a8c: b 0x142aa8
    a2 = v0 + v1;                                               // 0x00142a90: addu $a2, $v0, $v1
label_0x142a94:
    v0 = a1 >> 2;                                               // 0x00142a94: sra $v0, $a1, 2
    v1 = t3 >> 1;                                               // 0x00142a98: sra $v1, $t3, 1
    v0 = v0 + v1;                                               // 0x00142a9c: addu $v0, $v0, $v1
    a0 = a3 + s1;                                               // 0x00142aa0: addu $a0, $a3, $s1
    a2 = v0 + a0;                                               // 0x00142aa4: addu $a2, $v0, $a0
label_0x142aa8:
    a1 = local_0;                                               // 0x00142aa8: lw $a1, 0($sp)
    t2 = a2 >> 3;                                               // 0x00142aac: sra $t2, $a2, 3
    t4 = local_8;                                               // 0x00142ab0: lw $t4, 8($sp)
    a0 = t2 << 3;                                               // 0x00142ab4: sll $a0, $t2, 3
    v0 = a1 + a3;                                               // 0x00142ab8: addu $v0, $a1, $a3
    s3 = s3 & 1;                                                // 0x00142abc: andi $s3, $s3, 1
    a3 = t0 >> 3;                                               // 0x00142ac0: sra $a3, $t0, 3
    v0 = v0 << 4;                                               // 0x00142ac4: sll $v0, $v0, 4
    v0 = v0 + 0x200;                                            // 0x00142ac8: addiu $v0, $v0, 0x200
    v1 = a3 << 3;                                               // 0x00142acc: sll $v1, $a3, 3
    v1 = t0 - v1;                                               // 0x00142ad0: subu $v1, $t0, $v1
    v0 = t4 + v0;                                               // 0x00142ad4: addu $v0, $t4, $v0
    a2 = a2 - a0;                                               // 0x00142ad8: subu $a2, $a2, $a0
    t9 = s6 & 1;                                                // 0x00142adc: andi $t9, $s6, 1
    *(uint32_t*)((t7) + 4) = v1;                                // 0x00142ae0: sw $v1, 4($t7)
    if (t9 == 0) goto label_0x142b24;                           // 0x00142ae4: beqz $t9, 0x142b24
    *(uint32_t*)(t7) = v0;                                      // 0x00142ae8: sw $v0, 0($t7)
    v0 = t1 << t5;                                              // 0x00142aec: sllv $v0, $t1, $t5
    v0 = a2 + v0;                                               // 0x00142af0: addu $v0, $a2, $v0
    v0 = (v0 < 8) ? 1 : 0;                                      // 0x00142af4: slti $v0, $v0, 8
    /* bnezl $v0, 0x142b58 */                                   // 0x00142af8: bnezl $v0, 0x142b58
    *(uint32_t*)((t7) + 8) = t1;                                // 0x00142afc: sw $t1, 8($t7)
    v0 = 8;                                                     // 0x00142b00: addiu $v0, $zero, 8
    v1 = a2 >> t5;                                              // 0x00142b04: srav $v1, $a2, $t5
    v0 = v0 >> t5;                                              // 0x00142b08: srav $v0, $v0, $t5
    v0 = v0 - v1;                                               // 0x00142b0c: subu $v0, $v0, $v1
    v0 = v0 + -1;                                               // 0x00142b10: addiu $v0, $v0, -1
    v1 = t1 - v0;                                               // 0x00142b14: subu $v1, $t1, $v0
    *(uint32_t*)((t7) + 8) = v0;                                // 0x00142b18: sw $v0, 8($t7)
    goto label_0x142b5c;                                        // 0x00142b1c: b 0x142b5c
    *(uint32_t*)((t7) + 0xc) = v1;                              // 0x00142b20: sw $v1, 0xc($t7)
label_0x142b24:
    v0 = t1 << t5;                                              // 0x00142b24: sllv $v0, $t1, $t5
    v0 = a2 + v0;                                               // 0x00142b28: addu $v0, $a2, $v0
    v0 = (v0 < 9) ? 1 : 0;                                      // 0x00142b2c: slti $v0, $v0, 9
    /* bnezl $v0, 0x142b58 */                                   // 0x00142b30: bnezl $v0, 0x142b58
    *(uint32_t*)((t7) + 8) = t1;                                // 0x00142b34: sw $t1, 8($t7)
    v0 = 8;                                                     // 0x00142b38: addiu $v0, $zero, 8
    v1 = a2 >> t5;                                              // 0x00142b3c: srav $v1, $a2, $t5
    v0 = v0 >> t5;                                              // 0x00142b40: srav $v0, $v0, $t5
    v0 = v0 - v1;                                               // 0x00142b44: subu $v0, $v0, $v1
    a0 = t1 - v0;                                               // 0x00142b48: subu $a0, $t1, $v0
    *(uint32_t*)((t7) + 8) = v0;                                // 0x00142b4c: sw $v0, 8($t7)
    goto label_0x142b5c;                                        // 0x00142b50: b 0x142b5c
    *(uint32_t*)((t7) + 0xc) = a0;                              // 0x00142b54: sw $a0, 0xc($t7)
    *(uint32_t*)((t7) + 0xc) = 0;                               // 0x00142b58: sw $zero, 0xc($t7)
label_0x142b5c:
    v0 = 8;                                                     // 0x00142b5c: addiu $v0, $zero, 8
    a0 = a3 - s4;                                               // 0x00142b60: subu $a0, $a3, $s4
    v0 = v0 << t5;                                              // 0x00142b64: sllv $v0, $v0, $t5
    v1 = t2 - s5;                                               // 0x00142b68: subu $v1, $t2, $s5
    *(uint32_t*)((t7) + 0x10) = v0;                             // 0x00142b6c: sw $v0, 0x10($t7)
    a0 = a0 << 1;                                               // 0x00142b70: sll $a0, $a0, 1
    a0 = a0 + v1;                                               // 0x00142b74: addu $a0, $a0, $v1
    a1 = 0x140;                                                 // 0x00142b78: addiu $a1, $zero, 0x140
    a3 = local_c;                                               // 0x00142b7c: lw $a3, 0xc($sp)
    v0 = 0x21 << 16;                                            // 0x00142b80: lui $v0, 0x21
    t0 = *(int32_t*)((t8) + 0x828);                             // 0x00142b84: lw $t0, 0x828($t8)
    t2 = 0x180;                                                 // 0x00142b88: addiu $t2, $zero, 0x180
    t4 = local_10;                                              // 0x00142b8c: lw $t4, 0x10($sp)
    v0 = v0 + 0xcb8;                                            // 0x00142b90: addiu $v0, $v0, 0xcb8
    v1 = a3 << 2;                                               // 0x00142b98: sll $v1, $a3, 2
    v1 = v1 + v0;                                               // 0x00142b9c: addu $v1, $v1, $v0
    t3 = *(int32_t*)((fp) + 0x10);                              // 0x00142ba8: lw $t3, 0x10($fp)
    t4 = *(int32_t*)(v1);                                       // 0x00142bac: lw $t4, 0($v1)
    a3 = s7 << 2;                                               // 0x00142bb0: sll $a3, $s7, 2
    v1 = local_10;                                              // 0x00142bb4: lw $v1, 0x10($sp)
    a3 = a3 + t0;                                               // 0x00142bb8: addu $a3, $a3, $t0
    a0 = a1 + s2;                                               // 0x00142bbc: addu $a0, $a1, $s2
    v0 = s3 << 1;                                               // 0x00142bc0: sll $v0, $s3, 1
    t3 = v1 + t3;                                               // 0x00142bc4: addu $t3, $v1, $t3
    a1 = local_18;                                              // 0x00142bc8: lw $a1, 0x18($sp)
    v1 = t8 + a3;                                               // 0x00142bcc: addu $v1, $t8, $a3
    a2 = a2 << 3;                                               // 0x00142bd0: sll $a2, $a2, 3
    *(uint32_t*)((v1) + 0x5d0) = t4;                            // 0x00142bd4: sw $t4, 0x5d0($v1)
    v0 = a1 | v0;                                               // 0x00142bd8: or $v0, $a1, $v0
    t4 = local_14;                                              // 0x00142bdc: lw $t4, 0x14($sp)
    v1 = a2 + 0x400;                                            // 0x00142be0: addiu $v1, $a2, 0x400
    v1 = a0 + v1;                                               // 0x00142be4: addu $v1, $a0, $v1
    v0 = v0 | t9;                                               // 0x00142be8: or $v0, $v0, $t9
    t0 = t4 + t0;                                               // 0x00142bec: addu $t0, $t4, $t0
    a2 = a2 + 0x100;                                            // 0x00142bf0: addiu $a2, $a2, 0x100
    a1 = 0x21 << 16;                                            // 0x00142bf8: lui $a1, 0x21
    t1 = *(int32_t*)(fp);                                       // 0x00142bfc: lw $t1, 0($fp)
    a0 = a0 + a2;                                               // 0x00142c00: addu $a0, $a0, $a2
    a1 = a1 + 0xcd8;                                            // 0x00142c04: addiu $a1, $a1, 0xcd8
    v0 = v0 << 2;                                               // 0x00142c08: sll $v0, $v0, 2
    *(uint32_t*)((t7) + 0x14) = a0;                             // 0x00142c0c: sw $a0, 0x14($t7)
    v0 = v0 + a1;                                               // 0x00142c10: addu $v0, $v0, $a1
    *(uint32_t*)((t7) + 0x18) = v1;                             // 0x00142c14: sw $v1, 0x18($t7)
    a0 = t8 + a3;                                               // 0x00142c18: addu $a0, $t8, $a3
    t3 = t4 + t1;                                               // 0x00142c1c: addu $t3, $t4, $t1
    a1 = *(int32_t*)(t0);                                       // 0x00142c20: lw $a1, 0($t0)
    t1 = t1 + t5;                                               // 0x00142c28: addu $t1, $t1, $t5
    a2 = g_00210cb8;  // Global at 0x00210cb8                   // 0x00142c2c: lw $a2, 0($v0)
    a1 = a1 + 1;                                                // 0x00142c30: addiu $a1, $a1, 1
    *(uint32_t*)((a0) + 0x5b0) = t1;                            // 0x00142c34: sw $t1, 0x5b0($a0)
    *(uint32_t*)((v1) + 0x5e0) = a2;                            // 0x00142c60: sw $a2, 0x5e0($v1)
    *(uint32_t*)((a3) + 0x5c0) = t3;                            // 0x00142c64: sw $t3, 0x5c0($a3)
    *(uint32_t*)(t0) = a1;                                      // 0x00142c68: sw $a1, 0($t0)
    return;                                                     // 0x00142c6c: jr $ra
    sp = sp + 0xb0;                                             // 0x00142c70: addiu $sp, $sp, 0xb0
}