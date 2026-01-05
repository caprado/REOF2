void func_001cba20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x001cba20: addiu $sp, $sp, -0x80
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001cba30: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001cba3c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001cba48: addu.qb $zero, $sp, $s1
    a2 = *(uint16_t*)((a0) + 0x1c0);                            // 0x001cba50: lhu $a2, 0x1c0($a0)
    a0 = *(int32_t*)((a0) + 0x1b8);                             // 0x001cba58: lw $a0, 0x1b8($a0)
    func_00107c70();  // 107c70                                // 0x001cba5c: jal 0x107c70
    v0 = *(uint8_t*)((s0) + 0x1c4);                             // 0x001cba64: lbu $v0, 0x1c4($s0)
    if (v0 != 0) goto label_0x1cba78;                           // 0x001cba68: bnez $v0, 0x1cba78
    goto label_0x1cbc44;                                        // 0x001cba70: b 0x1cbc44
label_0x1cba78:
    v1 = *(int32_t*)((s0) + 0x1c8);                             // 0x001cba78: lw $v1, 0x1c8($s0)
    v0 = *(uint16_t*)((s0) + 0x1c0);                            // 0x001cba7c: lhu $v0, 0x1c0($s0)
    at = ((unsigned)v0 < (unsigned)v1) ? 1 : 0;                 // 0x001cba80: sltu $at, $v0, $v1
    if (at != 0) goto label_0x1cbafc;                           // 0x001cba84: bnez $at, 0x1cbafc
    s1 = *(int32_t*)((s0) + 0x1a8);                             // 0x001cba88: lw $s1, 0x1a8($s0)
    goto label_0x1cbae4;                                        // 0x001cba8c: b 0x1cbae4
    v0 = *(int32_t*)((s0) + 0x1ac);                             // 0x001cba90: lw $v0, 0x1ac($s0)
label_0x1cba94:
    s2 = *(uint8_t*)((s1) + 3);                                 // 0x001cba94: lbu $s2, 3($s1)
    if (s2 >= 0) goto label_0x1cbaac;                           // 0x001cba98: bgez $s2, 0x1cbaac
    v1 = s2 & 3;                                                // 0x001cba9c: andi $v1, $s2, 3
    if (v1 == 0) goto label_0x1cbaac;                           // 0x001cbaa0: beqz $v1, 0x1cbaac
    /* nop */                                                   // 0x001cbaa4: nop 
    v1 = v1 + -4;                                               // 0x001cbaa8: addiu $v1, $v1, -4
label_0x1cbaac:
    if (v1 == 0) goto label_0x1cbabc;                           // 0x001cbaac: beqz $v1, 0x1cbabc
    v0 = 4;                                                     // 0x001cbab0: addiu $v0, $zero, 4
    v0 = v0 - v1;                                               // 0x001cbab4: subu $v0, $v0, $v1
    s2 = s2 + v0;                                               // 0x001cbab8: addu $s2, $s2, $v0
label_0x1cbabc:
    a0 = *(int32_t*)((s0) + 0x1bc);                             // 0x001cbabc: lw $a0, 0x1bc($s0)
    func_00107ab8();  // 107ab8                                // 0x001cbac4: jal 0x107ab8
    v0 = *(int32_t*)((s0) + 0x1bc);                             // 0x001cbacc: lw $v0, 0x1bc($s0)
    v0 = v0 + s2;                                               // 0x001cbad0: addu $v0, $v0, $s2
    *(uint32_t*)((s0) + 0x1bc) = v0;                            // 0x001cbad4: sw $v0, 0x1bc($s0)
    v0 = *(uint16_t*)((s0) + 0x1b4);                            // 0x001cbad8: lhu $v0, 0x1b4($s0)
    s1 = s1 + v0;                                               // 0x001cbadc: addu $s1, $s1, $v0
    v0 = *(int32_t*)((s0) + 0x1ac);                             // 0x001cbae0: lw $v0, 0x1ac($s0)
label_0x1cbae4:
    v0 = ((unsigned)s1 < (unsigned)v0) ? 1 : 0;                 // 0x001cbae4: sltu $v0, $s1, $v0
    if (v0 != 0) goto label_0x1cba94;                           // 0x001cbae8: bnez $v0, 0x1cba94
    /* nop */                                                   // 0x001cbaec: nop 
    *(uint32_t*)((s0) + 0x1c8) = 0;                             // 0x001cbaf0: sw $zero, 0x1c8($s0)
    goto label_0x1cbbd8;                                        // 0x001cbaf4: b 0x1cbbd8
    *(uint8_t*)((s0) + 0x1c4) = 0;                              // 0x001cbaf8: sb $zero, 0x1c4($s0)
label_0x1cbafc:
    s6 = 4;                                                     // 0x001cbafc: addiu $s6, $zero, 4
label_0x1cbb00:
    goto label_0x1cbbbc;                                        // 0x001cbb00: b 0x1cbbbc
    s1 = *(int32_t*)((s0) + 0x1a8);                             // 0x001cbb04: lw $s1, 0x1a8($s0)
label_0x1cbb08:
    v0 = *(uint8_t*)((s1) + 2);                                 // 0x001cbb08: lbu $v0, 2($s1)
    v0 = v0 & 0xf;                                              // 0x001cbb0c: andi $v0, $v0, 0xf
    if (v0 != s6) goto label_0x1cbbb4;                          // 0x001cbb10: bne $v0, $s6, 0x1cbbb4
    /* nop */                                                   // 0x001cbb14: nop 
    s2 = *(uint8_t*)((s1) + 3);                                 // 0x001cbb18: lbu $s2, 3($s1)
    if (s2 >= 0) goto label_0x1cbb30;                           // 0x001cbb1c: bgez $s2, 0x1cbb30
    v1 = s2 & 3;                                                // 0x001cbb20: andi $v1, $s2, 3
    if (v1 == 0) goto label_0x1cbb30;                           // 0x001cbb24: beqz $v1, 0x1cbb30
    /* nop */                                                   // 0x001cbb28: nop 
    v1 = v1 + -4;                                               // 0x001cbb2c: addiu $v1, $v1, -4
label_0x1cbb30:
    if (v1 == 0) goto label_0x1cbb40;                           // 0x001cbb30: beqz $v1, 0x1cbb40
    v0 = 4;                                                     // 0x001cbb34: addiu $v0, $zero, 4
    v0 = v0 - v1;                                               // 0x001cbb38: subu $v0, $v0, $v1
    s2 = s2 + v0;                                               // 0x001cbb3c: addu $s2, $s2, $v0
label_0x1cbb40:
    v0 = *(uint16_t*)((s0) + 0x1c0);                            // 0x001cbb40: lhu $v0, 0x1c0($s0)
    v1 = s4 + s2;                                               // 0x001cbb44: addu $v1, $s4, $s2
    at = ((unsigned)v0 < (unsigned)v1) ? 1 : 0;                 // 0x001cbb48: sltu $at, $v0, $v1
    if (at != 0) goto label_0x1cbb94;                           // 0x001cbb4c: bnez $at, 0x1cbb94
    v0 = (s6 < 4) ? 1 : 0;                                      // 0x001cbb50: slti $v0, $s6, 4
    a0 = *(int32_t*)((s0) + 0x1bc);                             // 0x001cbb54: lw $a0, 0x1bc($s0)
    func_00107ab8();  // 107ab8                                // 0x001cbb5c: jal 0x107ab8
    *(uint8_t*)((s1) + 2) = 0;                                  // 0x001cbb64: sb $zero, 2($s1)
    s4 = s4 + s2;                                               // 0x001cbb68: addu $s4, $s4, $s2
    v0 = *(int32_t*)((s0) + 0x1bc);                             // 0x001cbb6c: lw $v0, 0x1bc($s0)
    v0 = v0 + s2;                                               // 0x001cbb70: addu $v0, $v0, $s2
    *(uint32_t*)((s0) + 0x1bc) = v0;                            // 0x001cbb74: sw $v0, 0x1bc($s0)
    v0 = *(int32_t*)((s0) + 0x1c8);                             // 0x001cbb78: lw $v0, 0x1c8($s0)
    v0 = v0 - s2;                                               // 0x001cbb7c: subu $v0, $v0, $s2
    *(uint32_t*)((s0) + 0x1c8) = v0;                            // 0x001cbb80: sw $v0, 0x1c8($s0)
    v0 = *(uint8_t*)((s0) + 0x1c4);                             // 0x001cbb84: lbu $v0, 0x1c4($s0)
    v0 = v0 + -1;                                               // 0x001cbb88: addiu $v0, $v0, -1
    goto label_0x1cbbb4;                                        // 0x001cbb8c: b 0x1cbbb4
    *(uint8_t*)((s0) + 0x1c4) = v0;                             // 0x001cbb90: sb $v0, 0x1c4($s0)
label_0x1cbb94:
    if (v0 != 0) goto label_0x1cbbb0;                           // 0x001cbb94: bnez $v0, 0x1cbbb0
    /* nop */                                                   // 0x001cbb98: nop 
    if (s5 != 0) goto label_0x1cbbb4;                           // 0x001cbb9c: bnez $s5, 0x1cbbb4
    /* nop */                                                   // 0x001cbba0: nop 
    goto label_0x1cbbb4;                                        // 0x001cbba8: b 0x1cbbb4
    s5 = s5 + 1;                                                // 0x001cbbac: addiu $s5, $s5, 1
label_0x1cbbb0:
    *(uint8_t*)((s1) + 2) = 0;                                  // 0x001cbbb0: sb $zero, 2($s1)
label_0x1cbbb4:
    v0 = *(uint16_t*)((s0) + 0x1b4);                            // 0x001cbbb4: lhu $v0, 0x1b4($s0)
    s1 = s1 + v0;                                               // 0x001cbbb8: addu $s1, $s1, $v0
label_0x1cbbbc:
    v0 = *(int32_t*)((s0) + 0x1ac);                             // 0x001cbbbc: lw $v0, 0x1ac($s0)
    at = ((unsigned)v0 < (unsigned)s1) ? 1 : 0;                 // 0x001cbbc0: sltu $at, $v0, $s1
    if (at == 0) goto label_0x1cbb08;                           // 0x001cbbc4: beqz $at, 0x1cbb08
    /* nop */                                                   // 0x001cbbc8: nop 
    s6 = s6 + -1;                                               // 0x001cbbcc: addiu $s6, $s6, -1
    if (s6 > 0) goto label_0x1cbb00;                            // 0x001cbbd0: bgtz $s6, 0x1cbb00
    /* nop */                                                   // 0x001cbbd4: nop 
label_0x1cbbd8:
    if (s3 == 0) goto label_0x1cbc38;                           // 0x001cbbd8: beqz $s3, 0x1cbc38
    /* nop */                                                   // 0x001cbbdc: nop 
    goto label_0x1cbc20;                                        // 0x001cbbe0: b 0x1cbc20
    s1 = *(int32_t*)((s0) + 0x1a8);                             // 0x001cbbe4: lw $s1, 0x1a8($s0)
label_0x1cbbe8:
    v0 = *(uint8_t*)((s3) + 2);                                 // 0x001cbbe8: lbu $v0, 2($s3)
    v0 = v0 & 0xf;                                              // 0x001cbbec: andi $v0, $v0, 0xf
    v0 = (v0 < 4) ? 1 : 0;                                      // 0x001cbbf0: slti $v0, $v0, 4
    if (v0 != 0) goto label_0x1cbc18;                           // 0x001cbbf4: bnez $v0, 0x1cbc18
    /* nop */                                                   // 0x001cbbf8: nop 
    a2 = *(uint16_t*)((s0) + 0x1b4);                            // 0x001cbbfc: lhu $a2, 0x1b4($s0)
    func_00107ab8();  // 107ab8                                // 0x001cbc04: jal 0x107ab8
    *(uint8_t*)((s3) + 2) = 0;                                  // 0x001cbc0c: sb $zero, 2($s3)
    v0 = *(uint16_t*)((s0) + 0x1b4);                            // 0x001cbc10: lhu $v0, 0x1b4($s0)
    s1 = s1 + v0;                                               // 0x001cbc14: addu $s1, $s1, $v0
label_0x1cbc18:
    v0 = *(uint16_t*)((s0) + 0x1b4);                            // 0x001cbc18: lhu $v0, 0x1b4($s0)
    s3 = s3 + v0;                                               // 0x001cbc1c: addu $s3, $s3, $v0
label_0x1cbc20:
    v0 = *(int32_t*)((s0) + 0x1ac);                             // 0x001cbc20: lw $v0, 0x1ac($s0)
    v0 = ((unsigned)s3 < (unsigned)v0) ? 1 : 0;                 // 0x001cbc24: sltu $v0, $s3, $v0
    if (v0 != 0) goto label_0x1cbbe8;                           // 0x001cbc28: bnez $v0, 0x1cbbe8
    /* nop */                                                   // 0x001cbc2c: nop 
    goto label_0x1cbc3c;                                        // 0x001cbc30: b 0x1cbc3c
    *(uint32_t*)((s0) + 0x1ac) = s1;                            // 0x001cbc34: sw $s1, 0x1ac($s0)
label_0x1cbc38:
    *(uint32_t*)((s0) + 0x1ac) = 0;                             // 0x001cbc38: sw $zero, 0x1ac($s0)
label_0x1cbc3c:
    v0 = 1;                                                     // 0x001cbc3c: addiu $v0, $zero, 1
label_0x1cbc44:
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001cbc44: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001cbc48: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001cbc4c: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001cbc54: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001cbc58: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cbc5c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cbc60: jr $ra
    sp = sp + 0x80;                                             // 0x001cbc64: addiu $sp, $sp, 0x80
}