void func_00127944() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_18, local_4, local_70, local_78, local_8;
    uint32_t local_80, local_c;
    
    sp = sp + -0x70;                                            // 0x00127944: addiu $sp, $sp, -0x70
    v0 = a1 + v0;                                               // 0x00127948: addu $v0, $a1, $v0
    v1 = local_78;                                              // 0x0012794c: lh $v1, 0x78($sp)
    v0 = v0 >> 1;                                               // 0x00127950: sra $v0, $v0, 1
    local_18 = v0;                                              // 0x00127958: sw $v0, 0x18($sp)
    v0 = local_80;                                              // 0x00127960: lh $v0, 0x80($sp)
    t2 = t2 << 0x10;                                            // 0x00127964: sll $t2, $t2, 0x10
    s3 = t2 >> 0x10;                                            // 0x0012796c: sra $s3, $t2, 0x10
    t3 = t3 << 0x10;                                            // 0x00127974: sll $t3, $t3, 0x10
    s2 = t3 >> 0x10;                                            // 0x00127984: sra $s2, $t3, 0x10
    local_0 = a1;                                               // 0x00127998: sw $a1, 0($sp)
    local_4 = a3;                                               // 0x0012799c: sw $a3, 4($sp)
    local_8 = t1;                                               // 0x001279a0: sw $t1, 8($sp)
    local_10 = v0;                                              // 0x001279a4: sw $v0, 0x10($sp)
    local_14 = 0;                                               // 0x001279a8: sw $zero, 0x14($sp)
    local_c = v1;                                               // 0x001279ac: sw $v1, 0xc($sp)
    a0 = local_18;                                              // 0x001279b0: lw $a0, 0x18($sp)
    t5 = *(int16_t*)(a3);                                       // 0x001279b4: lh $t5, 0($a3)
    t2 = *(int16_t*)((a3) + 2);                                 // 0x001279b8: lh $t2, 2($a3)
    t6 = *(int16_t*)(t1);                                       // 0x001279bc: lh $t6, 0($t1)
    if (a0 <= 0) goto label_0x127c40;                           // 0x001279c0: blez $a0, 0x127c40
    s0 = *(int16_t*)((t1) + 2);                                 // 0x001279c4: lh $s0, 2($t1)
label_0x1279c8:
    v1 = *(uint16_t*)(t7);                                      // 0x001279c8: lhu $v1, 0($t7)
    a2 = -0x100;                                                // 0x001279cc: addiu $a2, $zero, -0x100
    a0 = *(uint8_t*)((t7) + 1);                                 // 0x001279d0: lbu $a0, 1($t7)
    v1 = v1 << 8;                                               // 0x001279d4: sll $v1, $v1, 8
    a1 = local_14;                                              // 0x001279d8: lw $a1, 0x14($sp)
    v1 = v1 & a2;                                               // 0x001279dc: and $v1, $v1, $a2
    a0 = a0 | v1;                                               // 0x001279e0: or $a0, $a0, $v1
    v0 = a1 << 1;                                               // 0x001279e4: sll $v0, $a1, 1
    a0 = a0 << 0x10;                                            // 0x001279e8: sll $a0, $a0, 0x10
    a1 = a0 >> 0x10;                                            // 0x001279ec: sra $a1, $a0, 0x10
    v1 = a1 & 0x8000;                                           // 0x001279f0: andi $v1, $a1, 0x8000
    if (v1 != 0) goto label_0x127c5c;                           // 0x001279f4: bnez $v1, 0x127c5c
    a0 = local_14;                                              // 0x001279f8: lw $a0, 0x14($sp)
    v0 = local_70;                                              // 0x001279fc: lw $v0, 0x70($sp)
    a2 = local_10;                                              // 0x00127a00: lw $a2, 0x10($sp)
    v1 = *(uint16_t*)(v0);                                      // 0x00127a04: lhu $v1, 0($v0)
    /* mtlo $a2 */                                              // 0x00127a08
    a2 = local_c;                                               // 0x00127a0c: lw $a2, 0xc($sp)
    v0 = a0 << 1;                                               // 0x00127a10: sll $v0, $a0, 1
    v1 = a1 ^ v1;                                               // 0x00127a18: xor $v1, $a1, $v1
    v1 = v1 & 0x1fff;                                           // 0x00127a1c: andi $v1, $v1, 0x1fff
    a1 = -0x100;                                                // 0x00127a20: addiu $a1, $zero, -0x100
    s7 = v1 + 1;                                                // 0x00127a24: addiu $s7, $v1, 1
    v1 = local_70;                                              // 0x00127a28: lw $v1, 0x70($sp)
    a2 = a0 & 0x7fff;                                           // 0x00127a2c: andi $a2, $a0, 0x7fff
    g_00222468 = a2;  // Global at 0x00222468                   // 0x00127a30: sh $a2, 0($v1)
    v1 = *(uint16_t*)((t7) + 0x12);                             // 0x00127a34: lhu $v1, 0x12($t7)
    a0 = *(uint8_t*)((t7) + 0x13);                              // 0x00127a38: lbu $a0, 0x13($t7)
    v1 = v1 << 8;                                               // 0x00127a3c: sll $v1, $v1, 8
    v1 = v1 & a1;                                               // 0x00127a40: and $v1, $v1, $a1
    a0 = a0 | v1;                                               // 0x00127a44: or $a0, $a0, $v1
    a0 = a0 << 0x10;                                            // 0x00127a48: sll $a0, $a0, 0x10
    a1 = a0 >> 0x10;                                            // 0x00127a4c: sra $a1, $a0, 0x10
    v1 = a1 & 0x8000;                                           // 0x00127a50: andi $v1, $a1, 0x8000
    if (v1 != 0) goto label_0x127c5c;                           // 0x00127a54: bnez $v1, 0x127c5c
    v1 = local_10;                                              // 0x00127a58: lw $v1, 0x10($sp)
    t7 = t7 + 2;                                                // 0x00127a5c: addiu $t7, $t7, 2
    a0 = local_70;                                              // 0x00127a60: lw $a0, 0x70($sp)
    s6 = 0 | 0x8000;                                            // 0x00127a64: ori $s6, $zero, 0x8000
    /* mtlo $v1 */                                              // 0x00127a68
    v1 = local_c;                                               // 0x00127a6c: lw $v1, 0xc($sp)
    s5 = 0 | 0xffff;                                            // 0x00127a70: ori $s5, $zero, 0xffff
    t8 = 0x7fff;                                                // 0x00127a74: addiu $t8, $zero, 0x7fff
    /* madd $ac2, $v1, $a2 */                                   // 0x00127a78: madd $ac2, $v1, $a2
    v1 = a1 ^ a2;                                               // 0x00127a7c: xor $v1, $a1, $a2
    v1 = v1 & 0x1fff;                                           // 0x00127a80: andi $v1, $v1, 0x1fff
    fp = 0x1e;                                                  // 0x00127a84: addiu $fp, $zero, 0x1e
    s4 = v1 + 1;                                                // 0x00127a88: addiu $s4, $v1, 1
    v0 = v0 & 0x7fff;                                           // 0x00127a8c: andi $v0, $v0, 0x7fff
    *(uint16_t*)(a0) = v0;                                      // 0x00127a90: sh $v0, 0($a0)
    /* nop */                                                   // 0x00127a94: nop 
label_0x127a98:
    v1 = *(uint8_t*)(t7);                                       // 0x00127a98: lbu $v1, 0($t7)
    /* multiply: s2 * t2 -> hi:lo */                            // 0x00127a9c: mult $ac2, $s2, $t2
    a2 = *(uint8_t*)((t7) + 0x12);                              // 0x00127aa4: lbu $a2, 0x12($t7)
    v1 = v1 << 0x18;                                            // 0x00127aa8: sll $v1, $v1, 0x18
    a1 = v1 >> 0x1c;                                            // 0x00127ab0: sra $a1, $v1, 0x1c
    a2 = a2 << 0x18;                                            // 0x00127ab4: sll $a2, $a2, 0x18
    t4 = v1 >> 0x18;                                            // 0x00127abc: sra $t4, $v1, 0x18
    a0 = a0 + v0;                                               // 0x00127ac0: addu $a0, $a0, $v0
    v0 = t4 & 0xf;                                              // 0x00127ac4: andi $v0, $t4, 0xf
    v1 = a2 >> 0x1c;                                            // 0x00127ac8: sra $v1, $a2, 0x1c
    a2 = a2 >> 0x18;                                            // 0x00127acc: sra $a2, $a2, 0x18
    a0 = a0 >> 0xc;                                             // 0x00127ad0: sra $a0, $a0, 0xc
    v1 = 0x22 << 16;                                            // 0x00127ad8: lui $v1, 0x22
    a1 = a0 + a1;                                               // 0x00127adc: addu $a1, $a0, $a1
    v0 = v0 << 2;                                               // 0x00127ae0: sll $v0, $v0, 2
    v1 = v1 + 0x2468;                                           // 0x00127ae4: addiu $v1, $v1, 0x2468
    t3 = v0 + v1;                                               // 0x00127ae8: addu $t3, $v0, $v1
    v0 = a1 + s6;                                               // 0x00127aec: addu $v0, $a1, $s6
    v1 = (a1 < -0x8000) ? 1 : 0;                                // 0x00127af0: slti $v1, $a1, -0x8000
    v0 = ((unsigned)s5 < (unsigned)v0) ? 1 : 0;                 // 0x00127af4: sltu $v0, $s5, $v0
    t7 = t7 + 1;                                                // 0x00127afc: addiu $t7, $t7, 1
    a0 = (t8 < a1) ? 1 : 0;                                     // 0x00127b00: slt $a0, $t8, $a1
    v1 = v1 ^ 0;                                                // 0x00127b04: xori $v1, $v1, 0
    if (v0 == 0) goto label_0x127b1c;                           // 0x00127b08: beqz $v0, 0x127b1c
    t1 = a2 & 0xf;                                              // 0x00127b0c: andi $t1, $a2, 0xf
    if (a0 != 0) a1 = t8;                                       // 0x00127b10: movn $a1, $t8, $a0
    v0 = -0x8000;                                               // 0x00127b14: addiu $v0, $zero, -0x8000
    if (v1 != 0) a1 = v0;                                       // 0x00127b18: movn $a1, $v0, $v1
label_0x127b1c:
    /* multiply: s3 * t5 -> hi:lo */                            // 0x00127b2c: mult $ac3, $s3, $t5
    v0 = v0 + a0;                                               // 0x00127b38: addu $v0, $v0, $a0
    v0 = v0 >> 0xc;                                             // 0x00127b3c: sra $v0, $v0, 0xc
    v1 = v1 + s1;                                               // 0x00127b40: addu $v1, $v1, $s1
    a1 = v0 + t4;                                               // 0x00127b44: addu $a1, $v0, $t4
    a2 = v1 >> 0xc;                                             // 0x00127b48: sra $a2, $v1, 0xc
    v1 = a1 + s6;                                               // 0x00127b4c: addu $v1, $a1, $s6
    v0 = (a1 < -0x8000) ? 1 : 0;                                // 0x00127b50: slti $v0, $a1, -0x8000
    v1 = ((unsigned)s5 < (unsigned)v1) ? 1 : 0;                 // 0x00127b54: sltu $v1, $s5, $v1
    a0 = (t8 < a1) ? 1 : 0;                                     // 0x00127b58: slt $a0, $t8, $a1
    if (v1 == 0) goto label_0x127b70;                           // 0x00127b5c: beqz $v1, 0x127b70
    t4 = v0 ^ 0;                                                // 0x00127b60: xori $t4, $v0, 0
    if (a0 != 0) a1 = t8;                                       // 0x00127b64: movn $a1, $t8, $a0
    v0 = -0x8000;                                               // 0x00127b68: addiu $v0, $zero, -0x8000
    if (t4 != 0) a1 = v0;                                       // 0x00127b6c: movn $a1, $v0, $t4
label_0x127b70:
    t4 = *(int32_t*)(t3);                                       // 0x00127b70: lw $t4, 0($t3)
    /* multiply: s3 * t6 -> hi:lo */                            // 0x00127b78: mult $ac2, $s3, $t6
    a1 = 0x22 << 16;                                            // 0x00127b7c: lui $a1, 0x22
    a1 = a1 + 0x2468;                                           // 0x00127b84: addiu $a1, $a1, 0x2468
    v1 = t1 << 2;                                               // 0x00127b88: sll $v1, $t1, 2
    *(uint16_t*)(t9) = t5;                                      // 0x00127b8c: sh $t5, 0($t9)
    v1 = v1 + a1;                                               // 0x00127b90: addu $v1, $v1, $a1
    v0 = v0 + a3;                                               // 0x00127b98: addu $v0, $v0, $a3
    *(uint16_t*)(t0) = t6;                                      // 0x00127b9c: sh $t6, 0($t0)
    a1 = a2 + a0;                                               // 0x00127ba0: addu $a1, $a2, $a0
    a2 = g_00222468;  // Global at 0x00222468                   // 0x00127ba4: lw $a2, 0($v1)
    t4 = v0 >> 0xc;                                             // 0x00127ba8: sra $t4, $v0, 0xc
    v0 = a1 + s6;                                               // 0x00127bac: addu $v0, $a1, $s6
    v1 = (a1 < -0x8000) ? 1 : 0;                                // 0x00127bb0: slti $v1, $a1, -0x8000
    v0 = ((unsigned)s5 < (unsigned)v0) ? 1 : 0;                 // 0x00127bb4: sltu $v0, $s5, $v0
    t9 = t9 + 2;                                                // 0x00127bb8: addiu $t9, $t9, 2
    t0 = t0 + 2;                                                // 0x00127bbc: addiu $t0, $t0, 2
    a0 = (t8 < a1) ? 1 : 0;                                     // 0x00127bc4: slt $a0, $t8, $a1
    if (v0 == 0) goto label_0x127bdc;                           // 0x00127bc8: beqz $v0, 0x127bdc
    v1 = v1 ^ 0;                                                // 0x00127bcc: xori $v1, $v1, 0
    if (a0 != 0) a1 = t8;                                       // 0x00127bd0: movn $a1, $t8, $a0
    v0 = -0x8000;                                               // 0x00127bd4: addiu $v0, $zero, -0x8000
    if (v1 != 0) a1 = v0;                                       // 0x00127bd8: movn $a1, $v0, $v1
label_0x127bdc:
    a1 = t4 + a2;                                               // 0x00127be0: addu $a1, $t4, $a2
    v0 = a1 + s6;                                               // 0x00127be4: addu $v0, $a1, $s6
    v1 = (a1 < -0x8000) ? 1 : 0;                                // 0x00127be8: slti $v1, $a1, -0x8000
    v0 = ((unsigned)s5 < (unsigned)v0) ? 1 : 0;                 // 0x00127bec: sltu $v0, $s5, $v0
    a0 = (t8 < a1) ? 1 : 0;                                     // 0x00127bf0: slt $a0, $t8, $a1
    if (v0 == 0) goto label_0x127c08;                           // 0x00127bf4: beqz $v0, 0x127c08
    v1 = v1 ^ 0;                                                // 0x00127bf8: xori $v1, $v1, 0
    if (a0 != 0) a1 = t8;                                       // 0x00127bfc: movn $a1, $t8, $a0
    v0 = -0x8000;                                               // 0x00127c00: addiu $v0, $zero, -0x8000
    if (v1 != 0) a1 = v0;                                       // 0x00127c04: movn $a1, $v0, $v1
label_0x127c08:
    fp = fp + -2;                                               // 0x00127c0c: addiu $fp, $fp, -2
    *(uint16_t*)(t9) = t5;                                      // 0x00127c10: sh $t5, 0($t9)
    t9 = t9 + 2;                                                // 0x00127c14: addiu $t9, $t9, 2
    *(uint16_t*)(t0) = t6;                                      // 0x00127c18: sh $t6, 0($t0)
    if (fp >= 0) goto label_0x127a98;                           // 0x00127c1c: bgez $fp, 0x127a98
    t0 = t0 + 2;                                                // 0x00127c20: addiu $t0, $t0, 2
    a2 = local_14;                                              // 0x00127c24: lw $a2, 0x14($sp)
    t7 = t7 + 0x12;                                             // 0x00127c28: addiu $t7, $t7, 0x12
    v1 = local_18;                                              // 0x00127c2c: lw $v1, 0x18($sp)
    a2 = a2 + 1;                                                // 0x00127c30: addiu $a2, $a2, 1
    v0 = (a2 < v1) ? 1 : 0;                                     // 0x00127c34: slt $v0, $a2, $v1
    if (v0 != 0) goto label_0x1279c8;                           // 0x00127c38: bnez $v0, 0x1279c8
    local_14 = a2;                                              // 0x00127c3c: sw $a2, 0x14($sp)
label_0x127c40:
    a0 = local_4;                                               // 0x00127c40: lw $a0, 4($sp)
    *(uint16_t*)((a0) + 2) = t2;                                // 0x00127c44: sh $t2, 2($a0)
    v0 = local_0;                                               // 0x00127c48: lw $v0, 0($sp)
    *(uint16_t*)(a0) = t5;                                      // 0x00127c4c: sh $t5, 0($a0)
    a1 = local_8;                                               // 0x00127c50: lw $a1, 8($sp)
    g_0022246a = s0;  // Global at 0x0022246a                   // 0x00127c54: sh $s0, 2($a1)
    g_00222468 = t6;  // Global at 0x00222468                   // 0x00127c58: sh $t6, 0($a1)
label_0x127c5c:
    return;                                                     // 0x00127c80: jr $ra
    sp = sp + 0x70;                                             // 0x00127c84: addiu $sp, $sp, 0x70
}