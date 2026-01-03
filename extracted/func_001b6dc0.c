void func_001b6dc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_a0, local_b0, local_c0, local_d0, local_e0;
    
    sp = sp + -0xf0;                                            // 0x001b6dc0: addiu $sp, $sp, -0xf0
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x001b6dcc: dps.w.ph $ac0, $sp, $s7
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001b6dd4: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001b6ddc: dpa.w.ph $ac0, $sp, $s3
    s4 = 0x2b << 16;                                            // 0x001b6de0: lui $s4, 0x2b
    s4 = s4 + -0x3b70;                                          // 0x001b6de8: addiu $s4, $s4, -0x3b70
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b6dec: addu.qb $zero, $sp, $s1
    if (s1 != 0) goto label_0x1b6e0c;                           // 0x001b6dfc: bnez $s1, 0x1b6e0c
    goto label_0x1b7018;                                        // 0x001b6e04: b 0x1b7018
label_0x1b6e0c:
    s7 = g_002ac500;  // Global at 0x002ac500                   // 0x001b6e0c: lw $s7, 0x70($s4)
    fp = g_002ac504;  // Global at 0x002ac504                   // 0x001b6e10: lw $fp, 0x74($s4)
    s3 = g_002ac4dc;  // Global at 0x002ac4dc                   // 0x001b6e14: lw $s3, 0x4c($s4)
label_0x1b6e18:
    a1 = *(uint8_t*)(s2);                                       // 0x001b6e18: lbu $a1, 0($s2)
    if (a1 == 0) goto label_0x1b7010;                           // 0x001b6e1c: beqz $a1, 0x1b7010
    s2 = s2 + 1;                                                // 0x001b6e20: addiu $s2, $s2, 1
    v0 = 0xa;                                                   // 0x001b6e24: addiu $v0, $zero, 0xa
    if (a1 != v0) goto label_0x1b6e6c;                          // 0x001b6e28: bne $a1, $v0, 0x1b6e6c
    /* nop */                                                   // 0x001b6e2c: nop 
    if (s0 != 0) goto label_0x1b6e50;                           // 0x001b6e30: bnez $s0, 0x1b6e50
    /* nop */                                                   // 0x001b6e34: nop 
    g_002ac500 = s7;  // Global at 0x002ac500                   // 0x001b6e38: sw $s7, 0x70($s4)
    v1 = g_002ac4fc;  // Global at 0x002ac4fc                   // 0x001b6e3c: lw $v1, 0x6c($s4)
    v0 = g_002ac504;  // Global at 0x002ac504                   // 0x001b6e40: lw $v0, 0x74($s4)
    v0 = v0 + v1;                                               // 0x001b6e44: addu $v0, $v0, $v1
    goto label_0x1b6e18;                                        // 0x001b6e48: b 0x1b6e18
    g_002ac504 = v0;  // Global at 0x002ac504                   // 0x001b6e4c: sw $v0, 0x74($s4)
label_0x1b6e50:
    v1 = g_002ac4fc;  // Global at 0x002ac4fc                   // 0x001b6e50: lw $v1, 0x6c($s4)
    v0 = g_002ac500;  // Global at 0x002ac500                   // 0x001b6e54: lw $v0, 0x70($s4)
    v1 = v1 + 4;                                                // 0x001b6e58: addiu $v1, $v1, 4
    v0 = v0 - v1;                                               // 0x001b6e5c: subu $v0, $v0, $v1
    g_002ac500 = v0;  // Global at 0x002ac500                   // 0x001b6e60: sw $v0, 0x70($s4)
    goto label_0x1b6e18;                                        // 0x001b6e64: b 0x1b6e18
    g_002ac504 = fp;  // Global at 0x002ac504                   // 0x001b6e68: sw $fp, 0x74($s4)
label_0x1b6e6c:
    v0 = g_002ac500;  // Global at 0x002ac500                   // 0x001b6e6c: lw $v0, 0x70($s4)
    v1 = ((unsigned)a1 < (unsigned)0x80) ? 1 : 0;               // 0x001b6e70: sltiu $v1, $a1, 0x80
    local_e0 = v0;                                              // 0x001b6e74: sw $v0, 0xe0($sp)
    v0 = g_002ac504;  // Global at 0x002ac504                   // 0x001b6e78: lw $v0, 0x74($s4)
    if (v1 != 0) goto label_0x1b6e90;                           // 0x001b6e7c: bnez $v1, 0x1b6e90
    local_d0 = v0;                                              // 0x001b6e80: sw $v0, 0xd0($sp)
    at = ((unsigned)a1 < (unsigned)0xa0) ? 1 : 0;               // 0x001b6e84: sltiu $at, $a1, 0xa0
    if (at != 0) goto label_0x1b6ea8;                           // 0x001b6e88: bnez $at, 0x1b6ea8
    /* nop */                                                   // 0x001b6e8c: nop 
label_0x1b6e90:
    v0 = ((unsigned)a1 < (unsigned)0xe0) ? 1 : 0;               // 0x001b6e90: sltiu $v0, $a1, 0xe0
    if (v0 != 0) goto label_0x1b6ef8;                           // 0x001b6e94: bnez $v0, 0x1b6ef8
    a0 = a1 & 0xff;                                             // 0x001b6e98: andi $a0, $a1, 0xff
    at = ((unsigned)a1 < (unsigned)0x100) ? 1 : 0;              // 0x001b6e9c: sltiu $at, $a1, 0x100
    if (at == 0) goto label_0x1b6ef8;                           // 0x001b6ea0: beqz $at, 0x1b6ef8
    /* nop */                                                   // 0x001b6ea4: nop 
label_0x1b6ea8:
    a0 = *(uint8_t*)(s2);                                       // 0x001b6ea8: lbu $a0, 0($s2)
    if (a0 == 0) goto label_0x1b7010;                           // 0x001b6eac: beqz $a0, 0x1b7010
    s2 = s2 + 1;                                                // 0x001b6eb0: addiu $s2, $s2, 1
    v1 = a1 << 8;                                               // 0x001b6eb4: sll $v1, $a1, 8
    v0 = 0 | 0x8141;                                            // 0x001b6eb8: ori $v0, $zero, 0x8141
    v1 = v1 | a0;                                               // 0x001b6ebc: or $v1, $v1, $a0
    if (v1 != v0) goto label_0x1b6ef0;                          // 0x001b6ec0: bne $v1, $v0, 0x1b6ef0
    v1 = g_002ac4fc;  // Global at 0x002ac4fc                   // 0x001b6ec8: lw $v1, 0x6c($s4)
    v0 = g_002ac500;  // Global at 0x002ac500                   // 0x001b6ecc: lw $v0, 0x70($s4)
    v1 = (unsigned)v1 >> 1;                                     // 0x001b6ed0: srl $v1, $v1, 1
    v0 = v0 + v1;                                               // 0x001b6ed4: addu $v0, $v0, $v1
    g_002ac500 = v0;  // Global at 0x002ac500                   // 0x001b6ed8: sw $v0, 0x70($s4)
    v1 = g_002ac4fc;  // Global at 0x002ac4fc                   // 0x001b6edc: lw $v1, 0x6c($s4)
    v0 = g_002ac504;  // Global at 0x002ac504                   // 0x001b6ee0: lw $v0, 0x74($s4)
    v1 = (unsigned)v1 >> 1;                                     // 0x001b6ee4: srl $v1, $v1, 1
    v0 = v0 - v1;                                               // 0x001b6ee8: subu $v0, $v0, $v1
    g_002ac504 = v0;  // Global at 0x002ac504                   // 0x001b6eec: sw $v0, 0x74($s4)
label_0x1b6ef0:
    goto label_0x1b6f08;                                        // 0x001b6ef0: b 0x1b6f08
label_0x1b6ef8:
    func_001b5e60();  // 1b5e60                                // 0x001b6ef8: jal 0x1b5e60
    a1 = g_002ac498;  // Global at 0x002ac498                   // 0x001b6efc: lw $a1, 8($s4)
    s5 = 1;                                                     // 0x001b6f00: addiu $s5, $zero, 1
label_0x1b6f08:
    t0 = g_002ac4a8;  // Global at 0x002ac4a8                   // 0x001b6f0c: lw $t0, 0x18($s4)
    v1 = 0x8000 << 16;                                          // 0x001b6f10: lui $v1, 0x8000
    s3 = g_002ac510;  // Global at 0x002ac510                   // 0x001b6f14: lw $s3, 0x80($s4)
    v0 = g_002ac500;  // Global at 0x002ac500                   // 0x001b6f1c: lw $v0, 0x70($s4)
    s1 = s1 + t0;                                               // 0x001b6f28: addu $s1, $s1, $t0
    local_c0 = v0;                                              // 0x001b6f2c: sw $v0, 0xc0($sp)
    v0 = g_002ac504;  // Global at 0x002ac504                   // 0x001b6f30: lw $v0, 0x74($s4)
    local_b0 = v0;                                              // 0x001b6f34: sw $v0, 0xb0($sp)
    v0 = g_002ac508;  // Global at 0x002ac508                   // 0x001b6f38: lw $v0, 0x78($s4)
    local_a0 = v0;                                              // 0x001b6f3c: sw $v0, 0xa0($sp)
    v0 = s3 & v1;                                               // 0x001b6f40: and $v0, $s3, $v1
    g_002ac510 = v0;  // Global at 0x002ac510                   // 0x001b6f44: sw $v0, 0x80($s4)
    v0 = g_002ac500;  // Global at 0x002ac500                   // 0x001b6f48: lw $v0, 0x70($s4)
    v0 = v0 + 2;                                                // 0x001b6f4c: addiu $v0, $v0, 2
    g_002ac500 = v0;  // Global at 0x002ac500                   // 0x001b6f50: sw $v0, 0x70($s4)
    v0 = g_002ac504;  // Global at 0x002ac504                   // 0x001b6f54: lw $v0, 0x74($s4)
    v0 = v0 + 2;                                                // 0x001b6f58: addiu $v0, $v0, 2
    g_002ac504 = v0;  // Global at 0x002ac504                   // 0x001b6f5c: sw $v0, 0x74($s4)
    v0 = g_002ac508;  // Global at 0x002ac508                   // 0x001b6f60: lw $v0, 0x78($s4)
    v0 = v0 + -1;                                               // 0x001b6f64: addiu $v0, $v0, -1
    func_001b6a60();  // 1b6a60                                // 0x001b6f68: jal 0x1b6a60
    g_002ac508 = v0;  // Global at 0x002ac508                   // 0x001b6f6c: sw $v0, 0x78($s4)
    g_002ac510 = s3;  // Global at 0x002ac510                   // 0x001b6f70: sw $s3, 0x80($s4)
    v0 = local_c0;                                              // 0x001b6f78: lw $v0, 0xc0($sp)
    g_002ac500 = v0;  // Global at 0x002ac500                   // 0x001b6f7c: sw $v0, 0x70($s4)
    v0 = local_b0;                                              // 0x001b6f80: lw $v0, 0xb0($sp)
    g_002ac504 = v0;  // Global at 0x002ac504                   // 0x001b6f84: sw $v0, 0x74($s4)
    v0 = local_a0;                                              // 0x001b6f88: lw $v0, 0xa0($sp)
    g_002ac508 = v0;  // Global at 0x002ac508                   // 0x001b6f8c: sw $v0, 0x78($s4)
    v0 = g_002ac4f4;  // Global at 0x002ac4f4                   // 0x001b6f90: lw $v0, 0x64($s4)
    v0 = v0 + 1;                                                // 0x001b6f94: addiu $v0, $v0, 1
    g_002ac4f4 = v0;  // Global at 0x002ac4f4                   // 0x001b6f98: sw $v0, 0x64($s4)
    v1 = g_002ac4f4;  // Global at 0x002ac4f4                   // 0x001b6f9c: lw $v1, 0x64($s4)
    v0 = g_002ac4f0;  // Global at 0x002ac4f0                   // 0x001b6fa0: lw $v0, 0x60($s4)
    at = ((unsigned)v1 < (unsigned)v0) ? 1 : 0;                 // 0x001b6fa4: sltu $at, $v1, $v0
    if (at == 0) goto label_0x1b7010;                           // 0x001b6fa8: beqz $at, 0x1b7010
    func_001b6a60();  // 1b6a60                                // 0x001b6fb8: jal 0x1b6a60
    v0 = g_002ac4f4;  // Global at 0x002ac4f4                   // 0x001b6fc4: lw $v0, 0x64($s4)
    v0 = v0 + 1;                                                // 0x001b6fc8: addiu $v0, $v0, 1
    g_002ac4f4 = v0;  // Global at 0x002ac4f4                   // 0x001b6fcc: sw $v0, 0x64($s4)
    v0 = local_e0;                                              // 0x001b6fd0: lw $v0, 0xe0($sp)
    g_002ac500 = v0;  // Global at 0x002ac500                   // 0x001b6fd4: sw $v0, 0x70($s4)
    v0 = local_d0;                                              // 0x001b6fd8: lw $v0, 0xd0($sp)
    if (s0 != 0) goto label_0x1b6ffc;                           // 0x001b6fdc: bnez $s0, 0x1b6ffc
    g_002ac504 = v0;  // Global at 0x002ac504                   // 0x001b6fe0: sw $v0, 0x74($s4)
    v1 = g_002ac4fc;  // Global at 0x002ac4fc                   // 0x001b6fe4: lw $v1, 0x6c($s4)
    v0 = g_002ac500;  // Global at 0x002ac500                   // 0x001b6fe8: lw $v0, 0x70($s4)
    v1 = (unsigned)v1 >> s5;                                    // 0x001b6fec: srlv $v1, $v1, $s5
    v0 = v0 + v1;                                               // 0x001b6ff0: addu $v0, $v0, $v1
    goto label_0x1b6e18;                                        // 0x001b6ff4: b 0x1b6e18
    g_002ac500 = v0;  // Global at 0x002ac500                   // 0x001b6ff8: sw $v0, 0x70($s4)
label_0x1b6ffc:
    v1 = g_002ac4fc;  // Global at 0x002ac4fc                   // 0x001b6ffc: lw $v1, 0x6c($s4)
    v0 = g_002ac504;  // Global at 0x002ac504                   // 0x001b7000: lw $v0, 0x74($s4)
    v0 = v0 + v1;                                               // 0x001b7004: addu $v0, $v0, $v1
    goto label_0x1b6e18;                                        // 0x001b7008: b 0x1b6e18
    g_002ac504 = v0;  // Global at 0x002ac504                   // 0x001b700c: sw $v0, 0x74($s4)
label_0x1b7010:
    g_002ac4dc = s3;  // Global at 0x002ac4dc                   // 0x001b7010: sw $s3, 0x4c($s4)
label_0x1b7018:
    /* FPU: xori.b $w2, $w0, 0xbe */                            // 0x001b701c: xori.b $w2, $w0, 0xbe
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001b7024: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001b7028: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001b702c: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b7034: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b7038: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b703c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b7040: jr $ra
    sp = sp + 0xf0;                                             // 0x001b7044: addiu $sp, $sp, 0xf0
}