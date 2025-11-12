void func_0012757c() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_4, local_70, local_78, local_8, local_80;
    uint32_t local_c;
    
    sp = sp + -0x70;                                            // 0x0012757c: addiu $sp, $sp, -0x70
    v0 = a1 + v0;                                               // 0x00127580: addu $v0, $a1, $v0
    local_8 = t1;                                               // 0x00127584: sw $t1, 8($sp)
    v0 = v0 >> 1;                                               // 0x00127588: sra $v0, $v0, 1
    v1 = local_78;                                              // 0x0012758c: lh $v1, 0x78($sp)
    local_14 = v0;                                              // 0x00127590: sw $v0, 0x14($sp)
    v0 = local_80;                                              // 0x00127598: lh $v0, 0x80($sp)
    t2 = t2 << 0x10;                                            // 0x0012759c: sll $t2, $t2, 0x10
    t3 = t3 << 0x10;                                            // 0x001275a4: sll $t3, $t3, 0x10
    s3 = t2 >> 0x10;                                            // 0x001275ac: sra $s3, $t2, 0x10
    local_0 = a1;                                               // 0x001275b8: sw $a1, 0($sp)
    s2 = t3 >> 0x10;                                            // 0x001275bc: sra $s2, $t3, 0x10
    local_4 = a3;                                               // 0x001275dc: sw $a3, 4($sp)
    local_10 = v0;                                              // 0x001275e0: sw $v0, 0x10($sp)
    local_c = v1;                                               // 0x001275e4: sw $v1, 0xc($sp)
    a1 = local_8;                                               // 0x001275e8: lw $a1, 8($sp)
    a2 = local_14;                                              // 0x001275ec: lw $a2, 0x14($sp)
    t8 = *(int16_t*)(a3);                                       // 0x001275f0: lh $t8, 0($a3)
    t4 = *(int16_t*)((a3) + 2);                                 // 0x001275f4: lh $t4, 2($a3)
    t9 = *(int16_t*)(a1);                                       // 0x001275f8: lh $t9, 0($a1)
    if (a2 <= 0) goto label_0x1278f4;                           // 0x001275fc: blez $a2, 0x1278f4
    s1 = *(int16_t*)((a1) + 2);                                 // 0x00127600: lh $s1, 2($a1)
    /* nop */                                                   // 0x00127604: nop 
label_0x127608:
    v1 = *(uint16_t*)(t7);                                      // 0x00127608: lhu $v1, 0($t7)
    a1 = -0x100;                                                // 0x0012760c: addiu $a1, $zero, -0x100
    a0 = *(uint8_t*)((t7) + 1);                                 // 0x00127610: lbu $a0, 1($t7)
    v1 = v1 << 8;                                               // 0x00127614: sll $v1, $v1, 8
    v1 = v1 & a1;                                               // 0x00127618: and $v1, $v1, $a1
    a0 = a0 | v1;                                               // 0x0012761c: or $a0, $a0, $v1
    a0 = a0 << 0x10;                                            // 0x00127620: sll $a0, $a0, 0x10
    a1 = a0 >> 0x10;                                            // 0x00127624: sra $a1, $a0, 0x10
    v1 = a1 & 0x8000;                                           // 0x00127628: andi $v1, $a1, 0x8000
    if (v1 != 0) goto label_0x127910;                           // 0x0012762c: bnez $v1, 0x127910
    v0 = s7 << 1;                                               // 0x00127630: sll $v0, $s7, 1
    a2 = local_70;                                              // 0x00127634: lw $a2, 0x70($sp)
    v1 = *(uint16_t*)(a2);                                      // 0x00127638: lhu $v1, 0($a2)
    a2 = local_10;                                              // 0x0012763c: lw $a2, 0x10($sp)
    /* mtlo $a2 */                                              // 0x00127640
    a2 = local_c;                                               // 0x00127644: lw $a2, 0xc($sp)
    v1 = a1 ^ v1;                                               // 0x0012764c: xor $v1, $a1, $v1
    v1 = v1 & 0x1fff;                                           // 0x00127650: andi $v1, $v1, 0x1fff
    a1 = -0x100;                                                // 0x00127654: addiu $a1, $zero, -0x100
    s5 = v1 + 1;                                                // 0x00127658: addiu $s5, $v1, 1
    v1 = local_70;                                              // 0x0012765c: lw $v1, 0x70($sp)
    a2 = a0 & 0x7fff;                                           // 0x00127660: andi $a2, $a0, 0x7fff
    *(uint16_t*)(v1) = a2;                                      // 0x00127664: sh $a2, 0($v1)
    v1 = *(uint16_t*)((t7) + 0x12);                             // 0x00127668: lhu $v1, 0x12($t7)
    a0 = *(uint8_t*)((t7) + 0x13);                              // 0x0012766c: lbu $a0, 0x13($t7)
    v1 = v1 << 8;                                               // 0x00127670: sll $v1, $v1, 8
    v1 = v1 & a1;                                               // 0x00127674: and $v1, $v1, $a1
    a0 = a0 | v1;                                               // 0x00127678: or $a0, $a0, $v1
    a0 = a0 << 0x10;                                            // 0x0012767c: sll $a0, $a0, 0x10
    a1 = a0 >> 0x10;                                            // 0x00127680: sra $a1, $a0, 0x10
    v1 = a1 & 0x8000;                                           // 0x00127684: andi $v1, $a1, 0x8000
    if (v1 != 0) goto label_0x127910;                           // 0x00127688: bnez $v1, 0x127910
    v1 = local_10;                                              // 0x0012768c: lw $v1, 0x10($sp)
    a0 = 0x22 << 16;                                            // 0x00127690: lui $a0, 0x22
    fp = a0 + 0x2468;                                           // 0x00127694: addiu $fp, $a0, 0x2468
    t7 = t7 + 2;                                                // 0x00127698: addiu $t7, $t7, 2
    /* mtlo $v1 */                                              // 0x0012769c
    v1 = local_c;                                               // 0x001276a0: lw $v1, 0xc($sp)
    s0 = 0 | 0x8000;                                            // 0x001276a4: ori $s0, $zero, 0x8000
    t3 = 0 | 0xffff;                                            // 0x001276a8: ori $t3, $zero, 0xffff
    /* madd $ac2, $v1, $a2 */                                   // 0x001276ac: madd $ac2, $v1, $a2
    v1 = a1 ^ a2;                                               // 0x001276b0: xor $v1, $a1, $a2
    a1 = local_70;                                              // 0x001276b4: lw $a1, 0x70($sp)
    v1 = v1 & 0x1fff;                                           // 0x001276b8: andi $v1, $v1, 0x1fff
    s4 = v1 + 1;                                                // 0x001276bc: addiu $s4, $v1, 1
    t5 = 0x7fff;                                                // 0x001276c0: addiu $t5, $zero, 0x7fff
    t2 = 0xa;                                                   // 0x001276c4: addiu $t2, $zero, 0xa
    s6 = 0x1e;                                                  // 0x001276c8: addiu $s6, $zero, 0x1e
    v0 = v0 & 0x7fff;                                           // 0x001276cc: andi $v0, $v0, 0x7fff
    *(uint16_t*)(a1) = v0;                                      // 0x001276d0: sh $v0, 0($a1)
    /* nop */                                                   // 0x001276d4: nop 
label_0x1276d8:
    v0 = *(uint8_t*)(t7);                                       // 0x001276d8: lbu $v0, 0($t7)
    a0 = *(uint8_t*)((t7) + 0x12);                              // 0x001276e4: lbu $a0, 0x12($t7)
    v0 = v0 << 0x18;                                            // 0x001276e8: sll $v0, $v0, 0x18
    t7 = t7 + 1;                                                // 0x001276ec: addiu $t7, $t7, 1
    a1 = v0 >> 0x1c;                                            // 0x001276f0: sra $a1, $v0, 0x1c
    t6 = v0 >> 0x18;                                            // 0x001276f4: sra $t6, $v0, 0x18
    a0 = a0 << 0x18;                                            // 0x001276fc: sll $a0, $a0, 0x18
    v1 = v1 + a2;                                               // 0x00127700: addu $v1, $v1, $a2
    t4 = a0 >> 0x1c;                                            // 0x00127704: sra $t4, $a0, 0x1c
    v1 = v1 >> 0xc;                                             // 0x00127708: sra $v1, $v1, 0xc
    a2 = v1 + a1;                                               // 0x0012770c: addu $a2, $v1, $a1
    v0 = a2 + s0;                                               // 0x00127710: addu $v0, $a2, $s0
    v0 = ((unsigned)t3 < (unsigned)v0) ? 1 : 0;                 // 0x00127714: sltu $v0, $t3, $v0
    if (v0 == 0) goto label_0x127738;                           // 0x00127718: beqz $v0, 0x127738
    a3 = a0 >> 0x18;                                            // 0x0012771c: sra $a3, $a0, 0x18
    v0 = (a2 < -0x8000) ? 1 : 0;                                // 0x00127720: slti $v0, $a2, -0x8000
    v1 = (t5 < a2) ? 1 : 0;                                     // 0x00127724: slt $v1, $t5, $a2
    if (v1 != 0) a2 = t5;                                       // 0x00127728: movn $a2, $t5, $v1
    v1 = -0x8000;                                               // 0x0012772c: addiu $v1, $zero, -0x8000
    v0 = v0 ^ 0;                                                // 0x00127730: xori $v0, $v0, 0
    if (v0 != 0) a2 = v1;                                       // 0x00127734: movn $a2, $v1, $v0
label_0x127738:
    /* multiply: s2 * s1 -> hi:lo */                            // 0x00127738: mult $ac2, $s2, $s1
    v1 = v1 + v0;                                               // 0x0012774c: addu $v1, $v1, $v0
    v1 = v1 >> 0xc;                                             // 0x00127750: sra $v1, $v1, 0xc
    a2 = v1 + a0;                                               // 0x00127754: addu $a2, $v1, $a0
    v0 = a2 + s0;                                               // 0x00127758: addu $v0, $a2, $s0
    v0 = ((unsigned)t3 < (unsigned)v0) ? 1 : 0;                 // 0x0012775c: sltu $v0, $t3, $v0
    if (v0 == 0) goto label_0x127780;                           // 0x00127760: beqz $v0, 0x127780
    v0 = (a2 < -0x8000) ? 1 : 0;                                // 0x00127768: slti $v0, $a2, -0x8000
    v1 = (t5 < a2) ? 1 : 0;                                     // 0x0012776c: slt $v1, $t5, $a2
    if (v1 != 0) a2 = t5;                                       // 0x00127770: movn $a2, $t5, $v1
    v1 = -0x8000;                                               // 0x00127774: addiu $v1, $zero, -0x8000
    v0 = v0 ^ 0;                                                // 0x00127778: xori $v0, $v0, 0
    if (v0 != 0) a2 = v1;                                       // 0x0012777c: movn $a2, $v1, $v0
label_0x127780:
    v1 = t8 + t9;                                               // 0x00127784: addu $v1, $t8, $t9
    /* beqzl $t2, 0x127790 */                                   // 0x00127788: beqzl $t2, 0x127790
    /* break (trap) */                                          // 0x0012778c: break 0, 7
    v0 = v1 << 3;                                               // 0x00127790: sll $v0, $v1, 3
    v0 = v0 - v1;                                               // 0x00127794: subu $v0, $v0, $v1
    /* divide: v0 / t2 -> hi:lo */                              // 0x00127798: div $zero, $v0, $t2
    /* mflo $v0 */                                              // 0x0012779c
    v1 = a2 + s0;                                               // 0x001277a4: addu $v1, $a2, $s0
    v1 = ((unsigned)t3 < (unsigned)v1) ? 1 : 0;                 // 0x001277a8: sltu $v1, $t3, $v1
    if (v1 == 0) goto label_0x1277d0;                           // 0x001277ac: beqz $v1, 0x1277d0
    v0 = t6 & 0xf;                                              // 0x001277b0: andi $v0, $t6, 0xf
    v0 = (a2 < -0x8000) ? 1 : 0;                                // 0x001277b4: slti $v0, $a2, -0x8000
    v1 = (t5 < a2) ? 1 : 0;                                     // 0x001277b8: slt $v1, $t5, $a2
    if (v1 != 0) a2 = t5;                                       // 0x001277bc: movn $a2, $t5, $v1
    v1 = -0x8000;                                               // 0x001277c0: addiu $v1, $zero, -0x8000
    v0 = v0 ^ 0;                                                // 0x001277c4: xori $v0, $v0, 0
    if (v0 != 0) a2 = v1;                                       // 0x001277c8: movn $a2, $v1, $v0
    v0 = t6 & 0xf;                                              // 0x001277cc: andi $v0, $t6, 0xf
label_0x1277d0:
    v0 = v0 << 2;                                               // 0x001277d8: sll $v0, $v0, 2
    v0 = v0 + fp;                                               // 0x001277dc: addu $v0, $v0, $fp
    *(uint16_t*)(t0) = a2;                                      // 0x001277e0: sh $a2, 0($t0)
    t6 = *(int32_t*)(v0);                                       // 0x001277e4: lw $t6, 0($v0)
    v1 = a3 & 0xf;                                              // 0x001277e8: andi $v1, $a3, 0xf
    *(uint16_t*)(t1) = a2;                                      // 0x001277ec: sh $a2, 0($t1)
    t1 = t1 + 2;                                                // 0x001277f0: addiu $t1, $t1, 2
    a0 = a0 + a1;                                               // 0x001277f4: addu $a0, $a0, $a1
    a0 = a0 >> 0xc;                                             // 0x001277fc: sra $a0, $a0, 0xc
    v1 = v1 << 2;                                               // 0x00127800: sll $v1, $v1, 2
    v1 = v1 + fp;                                               // 0x00127804: addu $v1, $v1, $fp
    t0 = t0 + 2;                                                // 0x00127808: addiu $t0, $t0, 2
    a2 = a0 + a1;                                               // 0x0012780c: addu $a2, $a0, $a1
    v0 = a2 + s0;                                               // 0x00127810: addu $v0, $a2, $s0
    v0 = ((unsigned)t3 < (unsigned)v0) ? 1 : 0;                 // 0x00127814: sltu $v0, $t3, $v0
    if (v0 == 0) goto label_0x127838;                           // 0x00127818: beqz $v0, 0x127838
    a3 = *(int32_t*)(v1);                                       // 0x0012781c: lw $a3, 0($v1)
    v0 = (a2 < -0x8000) ? 1 : 0;                                // 0x00127820: slti $v0, $a2, -0x8000
    v1 = (t5 < a2) ? 1 : 0;                                     // 0x00127824: slt $v1, $t5, $a2
    if (v1 != 0) a2 = t5;                                       // 0x00127828: movn $a2, $t5, $v1
    v1 = -0x8000;                                               // 0x0012782c: addiu $v1, $zero, -0x8000
    v0 = v0 ^ 0;                                                // 0x00127830: xori $v0, $v0, 0
    if (v0 != 0) a2 = v1;                                       // 0x00127834: movn $a2, $v1, $v0
label_0x127838:
    /* multiply: s2 * s1 -> hi:lo */                            // 0x00127838: mult $ac2, $s2, $s1
    v1 = v1 + v0;                                               // 0x0012784c: addu $v1, $v1, $v0
    v1 = v1 >> 0xc;                                             // 0x00127850: sra $v1, $v1, 0xc
    a2 = v1 + a0;                                               // 0x00127854: addu $a2, $v1, $a0
    v0 = a2 + s0;                                               // 0x00127858: addu $v0, $a2, $s0
    v0 = ((unsigned)t3 < (unsigned)v0) ? 1 : 0;                 // 0x0012785c: sltu $v0, $t3, $v0
    if (v0 == 0) goto label_0x127880;                           // 0x00127860: beqz $v0, 0x127880
    v0 = (a2 < -0x8000) ? 1 : 0;                                // 0x00127868: slti $v0, $a2, -0x8000
    v1 = (t5 < a2) ? 1 : 0;                                     // 0x0012786c: slt $v1, $t5, $a2
    if (v1 != 0) a2 = t5;                                       // 0x00127870: movn $a2, $t5, $v1
    v1 = -0x8000;                                               // 0x00127874: addiu $v1, $zero, -0x8000
    v0 = v0 ^ 0;                                                // 0x00127878: xori $v0, $v0, 0
    if (v0 != 0) a2 = v1;                                       // 0x0012787c: movn $a2, $v1, $v0
label_0x127880:
    v1 = t8 + t9;                                               // 0x00127884: addu $v1, $t8, $t9
    /* beqzl $t2, 0x127890 */                                   // 0x00127888: beqzl $t2, 0x127890
    /* break (trap) */                                          // 0x0012788c: break 0, 7
    v0 = v1 << 3;                                               // 0x00127890: sll $v0, $v1, 3
    v0 = v0 - v1;                                               // 0x00127894: subu $v0, $v0, $v1
    /* divide: v0 / t2 -> hi:lo */                              // 0x00127898: div $zero, $v0, $t2
    /* mflo $v0 */                                              // 0x0012789c
    v1 = a2 + s0;                                               // 0x001278a4: addu $v1, $a2, $s0
    v1 = ((unsigned)t3 < (unsigned)v1) ? 1 : 0;                 // 0x001278a8: sltu $v1, $t3, $v1
    if (v1 == 0) goto label_0x1278cc;                           // 0x001278ac: beqz $v1, 0x1278cc
    s6 = s6 + -2;                                               // 0x001278b0: addiu $s6, $s6, -2
    v0 = (a2 < -0x8000) ? 1 : 0;                                // 0x001278b4: slti $v0, $a2, -0x8000
    v1 = (t5 < a2) ? 1 : 0;                                     // 0x001278b8: slt $v1, $t5, $a2
    if (v1 != 0) a2 = t5;                                       // 0x001278bc: movn $a2, $t5, $v1
    v1 = -0x8000;                                               // 0x001278c0: addiu $v1, $zero, -0x8000
    v0 = v0 ^ 0;                                                // 0x001278c4: xori $v0, $v0, 0
    if (v0 != 0) a2 = v1;                                       // 0x001278c8: movn $a2, $v1, $v0
label_0x1278cc:
    *(uint16_t*)(t0) = a2;                                      // 0x001278cc: sh $a2, 0($t0)
    *(uint16_t*)(t1) = a2;                                      // 0x001278d0: sh $a2, 0($t1)
    t1 = t1 + 2;                                                // 0x001278d4: addiu $t1, $t1, 2
    if (s6 >= 0) goto label_0x1276d8;                           // 0x001278d8: bgez $s6, 0x1276d8
    t0 = t0 + 2;                                                // 0x001278dc: addiu $t0, $t0, 2
    v1 = local_14;                                              // 0x001278e0: lw $v1, 0x14($sp)
    s7 = s7 + 1;                                                // 0x001278e4: addiu $s7, $s7, 1
    v0 = (s7 < v1) ? 1 : 0;                                     // 0x001278e8: slt $v0, $s7, $v1
    if (v0 != 0) goto label_0x127608;                           // 0x001278ec: bnez $v0, 0x127608
    t7 = t7 + 0x12;                                             // 0x001278f0: addiu $t7, $t7, 0x12
label_0x1278f4:
    a1 = local_4;                                               // 0x001278f4: lw $a1, 4($sp)
    *(uint16_t*)((a1) + 2) = t4;                                // 0x001278f8: sh $t4, 2($a1)
    v0 = local_0;                                               // 0x001278fc: lw $v0, 0($sp)
    *(uint16_t*)(a1) = t8;                                      // 0x00127900: sh $t8, 0($a1)
    a2 = local_8;                                               // 0x00127904: lw $a2, 8($sp)
    *(uint16_t*)((a2) + 2) = s1;                                // 0x00127908: sh $s1, 2($a2)
    *(uint16_t*)(a2) = t9;                                      // 0x0012790c: sh $t9, 0($a2)
label_0x127910:
    return;                                                     // 0x00127934: jr $ra
    sp = sp + 0x70;                                             // 0x00127938: addiu $sp, $sp, 0x70
}