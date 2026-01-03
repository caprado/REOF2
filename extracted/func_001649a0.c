void func_001649a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8, local_c;
    
    sp = sp + -0x70;                                            // 0x001649a0: addiu $sp, $sp, -0x70
    a2 = sp + 4;                                                // 0x001649cc: addiu $a2, $sp, 4
    s1 = s4 + 0xcc0;                                            // 0x001649dc: addiu $s1, $s4, 0xcc0
    *(uint32_t*)(fp) = 0;                                       // 0x001649e8: sw $zero, 0($fp)
    func_00164f88();  // 164f88                                // 0x001649ec: jal 0x164f88
    s3 = *(int32_t*)((s4) + 0x1b74);                            // 0x001649f0: lw $s3, 0x1b74($s4)
    /* bnezl $v0, 0x164a38 */                                   // 0x001649f4: bnezl $v0, 0x164a38
    v0 = 0x16 << 16;                                            // 0x001649f8: lui $v0, 0x16
    a1 = local_4;                                               // 0x001649fc: lw $a1, 4($sp)
    func_00175d80();  // 175d80                                // 0x00164a00: jal 0x175d80
    if (s2 < 0) goto label_0x164bcc;                            // 0x00164a0c: bltz $s2, 0x164bcc
    func_001752e8();  // 1752e8                                // 0x00164a14: jal 0x1752e8
    a1 = 5;                                                     // 0x00164a18: addiu $a1, $zero, 5
    /* bnezl $v0, 0x164a48 */                                   // 0x00164a1c: bnezl $v0, 0x164a48
    a1 = local_4;                                               // 0x00164a20: lw $a1, 4($sp)
    a2 = local_4;                                               // 0x00164a24: lw $a2, 4($sp)
    func_00175e48();  // 175e48                                // 0x00164a2c: jal 0x175e48
    v0 = 0x16 << 16;                                            // 0x00164a34: lui $v0, 0x16
    v0 = v0 + 0x48e8;                                           // 0x00164a38: addiu $v0, $v0, 0x48e8
    goto label_0x164bcc;                                        // 0x00164a3c: b 0x164bcc
    *(uint32_t*)((s3) + 0x3c) = v0;                             // 0x00164a40: sw $v0, 0x3c($s3)
    /* nop */                                                   // 0x00164a44: nop 
    func_00175dd0();  // 175dd0                                // 0x00164a4c: jal 0x175dd0
    a2 = sp + 8;                                                // 0x00164a50: addiu $a2, $sp, 8
    if (s0 < 0) goto label_0x164bcc;                            // 0x00164a58: bltz $s0, 0x164bcc
    a2 = local_4;                                               // 0x00164a60: lw $a2, 4($sp)
    func_00175e48();  // 175e48                                // 0x00164a68: jal 0x175e48
    v1 = s0 - s2;                                               // 0x00164a70: subu $v1, $s0, $s2
    v0 = *(int32_t*)((s3) + 0x38);                              // 0x00164a74: lw $v0, 0x38($s3)
    v1 = v1 - v0;                                               // 0x00164a78: subu $v1, $v1, $v0
    if (v1 < 0) goto label_0x164b70;                            // 0x00164a7c: bltz $v1, 0x164b70
    a1 = local_0;                                               // 0x00164a80: lw $a1, 0($sp)
    v1 = v1 >> 5;                                               // 0x00164a84: sra $v1, $v1, 5
    /* multiply: v1 * a1 -> hi:lo */                            // 0x00164a88: mult $ac3, $v1, $a1
    v0 = v1 << 3;                                               // 0x00164a8c: sll $v0, $v1, 3
    v0 = v0 + v1;                                               // 0x00164a90: addu $v0, $v0, $v1
    s1 = v0 << 1;                                               // 0x00164a94: sll $s1, $v0, 1
    if (s1 <= 0) goto label_0x164b24;                           // 0x00164a98: blez $s1, 0x164b24
    local_c = 0;                                                // 0x00164a9c: sw $zero, 0xc($sp)
    v0 = a1 << 3;                                               // 0x00164aa0: sll $v0, $a1, 3
    v0 = v0 + a1;                                               // 0x00164aa8: addu $v0, $v0, $a1
    a2 = sp + 0xc;                                              // 0x00164aac: addiu $a2, $sp, 0xc
    v0 = v0 << 1;                                               // 0x00164ab0: sll $v0, $v0, 1
    /* divide: s5 / v0 -> hi:lo */                              // 0x00164ab4: div $zero, $s5, $v0
    /* beqzl $v0, 0x164ac0 */                                   // 0x00164ab8: beqzl $v0, 0x164ac0
    /* break (trap) */                                          // 0x00164abc: break 0, 7
    /* mflo $v1 */                                              // 0x00164ac0
    /* multiply: v1 * a1 -> hi:lo */                            // 0x00164ac4: mult $ac3, $v1, $a1
    v0 = v1 << 3;                                               // 0x00164ac8: sll $v0, $v1, 3
    v0 = v0 + v1;                                               // 0x00164acc: addu $v0, $v0, $v1
    v0 = v0 << 1;                                               // 0x00164ad0: sll $v0, $v0, 1
    v0 = (v0 < s1) ? 1 : 0;                                     // 0x00164ad8: slt $v0, $v0, $s1
    if (v0 == 0) s0 = s1;                                       // 0x00164adc: movz $s0, $s1, $v0
    func_00164c00();  // 164c00                                // 0x00164ae4: jal 0x164c00
    s0 = s1 - s0;                                               // 0x00164ae8: subu $s0, $s1, $s0
    v1 = local_0;                                               // 0x00164aec: lw $v1, 0($sp)
    v0 = v1 << 3;                                               // 0x00164af4: sll $v0, $v1, 3
    v0 = v0 + v1;                                               // 0x00164af8: addu $v0, $v0, $v1
    v0 = v0 << 1;                                               // 0x00164afc: sll $v0, $v0, 1
    /* divide: s6 / v0 -> hi:lo */                              // 0x00164b00: div $zero, $s6, $v0
    /* beqzl $v0, 0x164b0c */                                   // 0x00164b04: beqzl $v0, 0x164b0c
    /* break (trap) */                                          // 0x00164b08: break 0, 7
    v1 = *(int32_t*)((s3) + 0x38);                              // 0x00164b0c: lw $v1, 0x38($s3)
    /* mflo $a0 */                                              // 0x00164b10
    a0 = a0 << 5;                                               // 0x00164b14: sll $a0, $a0, 5
    v1 = v1 + a0;                                               // 0x00164b18: addu $v1, $v1, $a0
    if (s0 > 0) goto label_0x164b4c;                            // 0x00164b1c: bgtz $s0, 0x164b4c
    *(uint32_t*)((s3) + 0x38) = v1;                             // 0x00164b20: sw $v1, 0x38($s3)
label_0x164b24:
    v0 = local_8;                                               // 0x00164b24: lw $v0, 8($sp)
    if (v0 == 0) goto label_0x164b4c;                           // 0x00164b28: beqz $v0, 0x164b4c
    v0 = 0x16 << 16;                                            // 0x00164b2c: lui $v0, 0x16
    v0 = v0 + 0x48e8;                                           // 0x00164b34: addiu $v0, $v0, 0x48e8
    *(uint32_t*)((s3) + 0x3c) = v0;                             // 0x00164b3c: sw $v0, 0x3c($s3)
    func_00132f00();  // 132f00                                // 0x00164b40: jal 0x132f00
    a2 = sp + 0x10;                                             // 0x00164b44: addiu $a2, $sp, 0x10
    local_c = v0;                                               // 0x00164b48: sw $v0, 0xc($sp)
label_0x164b4c:
    v0 = local_c;                                               // 0x00164b4c: lw $v0, 0xc($sp)
    if (v0 == 0) goto label_0x164bc8;                           // 0x00164b50: beqz $v0, 0x164bc8
    a1 = 6;                                                     // 0x00164b58: addiu $a1, $zero, 6
    func_00175120();  // 175120                                // 0x00164b5c: jal 0x175120
    goto label_0x164bcc;                                        // 0x00164b64: b 0x164bcc
    *(uint32_t*)(fp) = s6;                                      // 0x00164b68: sw $s6, 0($fp)
    /* nop */                                                   // 0x00164b6c: nop 
label_0x164b70:
    v0 = local_8;                                               // 0x00164b70: lw $v0, 8($sp)
    if (v0 == 0) goto label_0x164bc8;                           // 0x00164b74: beqz $v0, 0x164bc8
    a0 = -v1;                                                   // 0x00164b78: negu $a0, $v1
    v0 = a0 + 0x1f;                                             // 0x00164b7c: addiu $v0, $a0, 0x1f
    v1 = (a0 < 0) ? 1 : 0;                                      // 0x00164b80: slti $v1, $a0, 0
    if (v1 != 0) a0 = v0;                                       // 0x00164b84: movn $a0, $v0, $v1
    a0 = a0 >> 5;                                               // 0x00164b88: sra $a0, $a0, 5
    s0 = a0 << 5;                                               // 0x00164b8c: sll $s0, $a0, 5
    if (s0 <= 0) goto label_0x164bc0;                           // 0x00164b90: blezl $s0, 0x164bc0
    v0 = 0x16 << 16;                                            // 0x00164b94: lui $v0, 0x16
    a1 = local_0;                                               // 0x00164b98: lw $a1, 0($sp)
    func_00164c88();  // 164c88                                // 0x00164ba0: jal 0x164c88
    v1 = *(int32_t*)((s3) + 0x38);                              // 0x00164ba8: lw $v1, 0x38($s3)
    a0 = s0 - v0;                                               // 0x00164bac: subu $a0, $s0, $v0
    v1 = v1 - v0;                                               // 0x00164bb0: subu $v1, $v1, $v0
    if (a0 > 0) goto label_0x164bc8;                            // 0x00164bb4: bgtz $a0, 0x164bc8
    *(uint32_t*)((s3) + 0x38) = v1;                             // 0x00164bb8: sw $v1, 0x38($s3)
    v0 = 0x16 << 16;                                            // 0x00164bbc: lui $v0, 0x16
label_0x164bc0:
    v0 = v0 + 0x48e8;                                           // 0x00164bc0: addiu $v0, $v0, 0x48e8
    *(uint32_t*)((s3) + 0x3c) = v0;                             // 0x00164bc4: sw $v0, 0x3c($s3)
label_0x164bc8:
    *(uint32_t*)(fp) = s6;                                      // 0x00164bc8: sw $s6, 0($fp)
label_0x164bcc:
    return;                                                     // 0x00164bf4: jr $ra
    sp = sp + 0x70;                                             // 0x00164bf8: addiu $sp, $sp, 0x70
}