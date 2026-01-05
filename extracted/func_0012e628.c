void func_0012e628() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_4, local_8, local_c;
    
    sp = sp + -0x70;                                            // 0x0012e628: addiu $sp, $sp, -0x70
    a2 = 8;                                                     // 0x0012e62c: addiu $a2, $zero, 8
    a0 = a1 << 2;                                               // 0x0012e644: sll $a0, $a1, 2
    v1 = a1 << 6;                                               // 0x0012e64c: sll $v1, $a1, 6
    fp = -1;                                                    // 0x0012e654: addiu $fp, $zero, -1
    a1 = a1 << 4;                                               // 0x0012e65c: sll $a1, $a1, 4
    v1 = s3 + v1;                                               // 0x0012e664: addu $v1, $s3, $v1
    a1 = s3 + a1;                                               // 0x0012e66c: addu $a1, $s3, $a1
    a1 = a1 + 0x2a8;                                            // 0x0012e674: addiu $a1, $a1, 0x2a8
    a0 = a0 + s3;                                               // 0x0012e67c: addu $a0, $a0, $s3
    v0 = *(int32_t*)((s3) + 0x54);                              // 0x0012e680: lw $v0, 0x54($s3)
    /* divide: a2 / v0 -> hi:lo */                              // 0x0012e684: div $zero, $a2, $v0
    a2 = v1 + 0x210;                                            // 0x0012e688: addiu $a2, $v1, 0x210
    /* mflo $a3 */                                              // 0x0012e68c
    local_14 = a3;                                              // 0x0012e690: sw $a3, 0x14($sp)
    /* beqzl $v0, 0x12e69c */                                   // 0x0012e694: beqzl $v0, 0x12e69c
    /* break (trap) */                                          // 0x0012e698: break 0, 7
    v0 = *(int32_t*)((s3) + 0x44);                              // 0x0012e69c: lw $v0, 0x44($s3)
    a3 = v1 + 0x110;                                            // 0x0012e6a0: addiu $a3, $v1, 0x110
    local_c = a2;                                               // 0x0012e6a4: sw $a2, 0xc($sp)
    v1 = v1 + 0x190;                                            // 0x0012e6a8: addiu $v1, $v1, 0x190
    local_10 = a1;                                              // 0x0012e6ac: sw $a1, 0x10($sp)
    s6 = local_14;                                              // 0x0012e6b0: lw $s6, 0x14($sp)
    s7 = *(int32_t*)((a0) + 0x80);                              // 0x0012e6b4: lw $s7, 0x80($a0)
    local_0 = 0;                                                // 0x0012e6b8: sw $zero, 0($sp)
    local_4 = a3;                                               // 0x0012e6bc: sw $a3, 4($sp)
    if (v0 <= 0) goto label_0x12e87c;                           // 0x0012e6c0: blez $v0, 0x12e87c
    local_8 = v1;                                               // 0x0012e6c4: sw $v1, 8($sp)
    s5 = 0x1249;                                                // 0x0012e6c8: addiu $s5, $zero, 0x1249
label_0x12e6d0:
    func_0012e210();  // 12e210                                // 0x0012e6d0: jal 0x12e210
    s1 = s4 << 1;                                               // 0x0012e6d8: sll $s1, $s4, 1
    a0 = local_4;                                               // 0x0012e6dc: lw $a0, 4($sp)
    v1 = s1 + a0;                                               // 0x0012e6e0: addu $v1, $s1, $a0
    a0 = v0 << 0x10;                                            // 0x0012e6e4: sll $a0, $v0, 0x10
    *(uint16_t*)(v1) = v0;                                      // 0x0012e6e8: sh $v0, 0($v1)
    func_00111f90();  // 111f90                                // 0x0012e6ec: jal 0x111f90
    a0 = a0 >> 0x10;                                            // 0x0012e6f0: sra $a0, $a0, 0x10
    func_00111a58();  // 111a58                                // 0x0012e6fc: jal 0x111a58
    func_00112048();  // 112048                                // 0x0012e704: jal 0x112048
    a1 = 0x7fff;                                                // 0x0012e70c: addiu $a1, $zero, 0x7fff
    v0 = (a1 < a0) ? 1 : 0;                                     // 0x0012e714: slt $v0, $a1, $a0
    if (v0 != 0) goto label_0x12e738;                           // 0x0012e718: bnez $v0, 0x12e738
    v1 = 0x7fff;                                                // 0x0012e71c: addiu $v1, $zero, 0x7fff
    v0 = (v1 < -0x8000) ? 1 : 0;                                // 0x0012e724: slti $v0, $v1, -0x8000
    /* bnezl $v0, 0x12e738 */                                   // 0x0012e728: bnezl $v0, 0x12e738
    v1 = -0x8000;                                               // 0x0012e72c: addiu $v1, $zero, -0x8000
    goto label_0x12e73c;                                        // 0x0012e730: b 0x12e73c
    a2 = local_8;                                               // 0x0012e734: lw $a2, 8($sp)
label_0x12e738:
    a2 = local_8;                                               // 0x0012e738: lw $a2, 8($sp)
label_0x12e73c:
    v1 = a0 << 0x10;                                            // 0x0012e740: sll $v1, $a0, 0x10
    v0 = s1 + a2;                                               // 0x0012e744: addu $v0, $s1, $a2
    if (v1 >= 0) goto label_0x12e758;                           // 0x0012e748: bgez $v1, 0x12e758
    *(uint16_t*)(v0) = a0;                                      // 0x0012e74c: sh $a0, 0($v0)
    goto label_0x12e75c;                                        // 0x0012e750: b 0x12e75c
    v0 = a0 + -0x924;                                           // 0x0012e754: addiu $v0, $a0, -0x924
label_0x12e758:
    v0 = a0 + 0x924;                                            // 0x0012e758: addiu $v0, $a0, 0x924
label_0x12e75c:
    /* beqzl $s5, 0x12e764 */                                   // 0x0012e75c: beqzl $s5, 0x12e764
    /* break (trap) */                                          // 0x0012e760: break 0, 7
    /* divide: v0 / s5 -> hi:lo */                              // 0x0012e764: div $zero, $v0, $s5
    /* mflo $v0 */                                              // 0x0012e768
    v0 = (a0 < 7) ? 1 : 0;                                      // 0x0012e770: slti $v0, $a0, 7
    if (v0 == 0) goto label_0x12e798;                           // 0x0012e774: beqz $v0, 0x12e798
    s0 = 7;                                                     // 0x0012e778: addiu $s0, $zero, 7
    v0 = (s0 < -8) ? 1 : 0;                                     // 0x0012e780: slti $v0, $s0, -8
    /* bnezl $v0, 0x12e798 */                                   // 0x0012e784: bnezl $v0, 0x12e798
    s0 = -8;                                                    // 0x0012e788: addiu $s0, $zero, -8
    goto label_0x12e79c;                                        // 0x0012e78c: b 0x12e79c
    a0 = *(int16_t*)((s7) + 0x7c);                              // 0x0012e790: lh $a0, 0x7c($s7)
    /* nop */                                                   // 0x0012e794: nop 
label_0x12e798:
    a0 = *(int16_t*)((s7) + 0x7c);                              // 0x0012e798: lh $a0, 0x7c($s7)
label_0x12e79c:
    func_00111f90();  // 111f90                                // 0x0012e79c: jal 0x111f90
    func_00111a58();  // 111a58                                // 0x0012e7a8: jal 0x111a58
    func_00112048();  // 112048                                // 0x0012e7b0: jal 0x112048
    v1 = 0x7fff;                                                // 0x0012e7b8: addiu $v1, $zero, 0x7fff
    v0 = (v1 < a0) ? 1 : 0;                                     // 0x0012e7c0: slt $v0, $v1, $a0
    /* bnezl $v0, 0x12e7e0 */                                   // 0x0012e7c4: bnezl $v0, 0x12e7e0
    a0 = 0x7fff;                                                // 0x0012e7c8: addiu $a0, $zero, 0x7fff
    v0 = (a0 < -0x8000) ? 1 : 0;                                // 0x0012e7cc: slti $v0, $a0, -0x8000
    /* bnezl $v0, 0x12e7e0 */                                   // 0x0012e7d0: bnezl $v0, 0x12e7e0
    a0 = -0x8000;                                               // 0x0012e7d4: addiu $a0, $zero, -0x8000
    goto label_0x12e7e4;                                        // 0x0012e7d8: b 0x12e7e4
    /* divide: s4 / s6 -> hi:lo */                              // 0x0012e7dc: div $zero, $s4, $s6
    /* divide: s4 / s6 -> hi:lo */                              // 0x0012e7e0: div $zero, $s4, $s6
label_0x12e7e4:
    a1 = local_c;                                               // 0x0012e7e4: lw $a1, 0xc($sp)
    v0 = s1 + a1;                                               // 0x0012e7e8: addu $v0, $s1, $a1
    *(uint16_t*)(v0) = a0;                                      // 0x0012e7ec: sh $a0, 0($v0)
    /* beqzl $s6, 0x12e7f8 */                                   // 0x0012e7f0: beqzl $s6, 0x12e7f8
    /* break (trap) */                                          // 0x0012e7f4: break 0, 7
    /* mfhi $v1 */                                              // 0x0012e7f8
    if (v1 != 0) goto label_0x12e820;                           // 0x0012e7fc: bnez $v1, 0x12e820
    v1 = local_10;                                              // 0x0012e800: lw $v1, 0x10($sp)
    v0 = local_10;                                              // 0x0012e804: lw $v0, 0x10($sp)
    fp = fp + 1;                                                // 0x0012e808: addiu $fp, $fp, 1
    a2 = 1;                                                     // 0x0012e80c: addiu $a2, $zero, 1
    a3 = v0 + fp;                                               // 0x0012e810: addu $a3, $v0, $fp
    local_0 = a2;                                               // 0x0012e814: sw $a2, 0($sp)
    goto label_0x12e824;                                        // 0x0012e818: b 0x12e824
    *(uint8_t*)(a3) = 0;                                        // 0x0012e81c: sb $zero, 0($a3)
label_0x12e820:
    a3 = v1 + fp;                                               // 0x0012e820: addu $a3, $v1, $fp
label_0x12e824:
    v0 = local_0;                                               // 0x0012e824: lw $v0, 0($sp)
    v1 = 8;                                                     // 0x0012e828: addiu $v1, $zero, 8
    a2 = local_14;                                              // 0x0012e82c: lw $a2, 0x14($sp)
    s4 = s4 + 1;                                                // 0x0012e830: addiu $s4, $s4, 1
    a1 = *(int32_t*)((s3) + 0x54);                              // 0x0012e834: lw $a1, 0x54($s3)
    a0 = a2 - v0;                                               // 0x0012e838: subu $a0, $a2, $v0
    a2 = *(uint8_t*)(a3);                                       // 0x0012e83c: lbu $a2, 0($a3)
    v1 = v1 - a1;                                               // 0x0012e840: subu $v1, $v1, $a1
    v0 = s0 << v1;                                              // 0x0012e848: sllv $v0, $s0, $v1
    a1 = local_0;                                               // 0x0012e84c: lw $a1, 0($sp)
    v0 = v0 & 0xff;                                             // 0x0012e850: andi $v0, $v0, 0xff
    s0 = v0 >> v1;                                              // 0x0012e854: srav $s0, $v0, $v1
    a1 = a1 + 1;                                                // 0x0012e858: addiu $a1, $a1, 1
    a0 = s0 << a0;                                              // 0x0012e85c: sllv $a0, $s0, $a0
    local_0 = a1;                                               // 0x0012e860: sw $a1, 0($sp)
    a2 = a2 | a0;                                               // 0x0012e864: or $a2, $a2, $a0
    *(uint8_t*)(a3) = a2;                                       // 0x0012e868: sb $a2, 0($a3)
    v0 = *(int32_t*)((s3) + 0x44);                              // 0x0012e86c: lw $v0, 0x44($s3)
    v0 = (s4 < v0) ? 1 : 0;                                     // 0x0012e870: slt $v0, $s4, $v0
    if (v0 != 0) goto label_0x12e6d0;                           // 0x0012e874: bnez $v0, 0x12e6d0
label_0x12e87c:
    return;                                                     // 0x0012e8a4: jr $ra
    sp = sp + 0x70;                                             // 0x0012e8a8: addiu $sp, $sp, 0x70
}