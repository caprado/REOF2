void func_001b3ba0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_2e8, local_a0, local_b0, local_c0, local_d0, local_e0;
    
    sp = sp + -0x2f0;                                           // 0x001b3ba0: addiu $sp, $sp, -0x2f0
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x001b3bac: dps.w.ph $ac0, $sp, $s7
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001b3bb8: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001b3bc4: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b3bd4: addu.qb $zero, $sp, $s1
    if (s3 == 0) goto label_0x1b3ebc;                           // 0x001b3bdc: beqz $s3, 0x1b3ebc
    func_001b4fd0();  // 1b4fd0                                // 0x001b3be4: jal 0x1b4fd0
    func_001b5040();  // 1b5040                                // 0x001b3bec: jal 0x1b5040
    v0 = 7;                                                     // 0x001b3bf4: addiu $v0, $zero, 7
    local_c0 = v0;                                              // 0x001b3bfc: sw $v0, 0xc0($sp)
    local_e0 = 0;                                               // 0x001b3c04: sb $zero, 0xe0($sp)
    s1 = sp + 0xe0;                                             // 0x001b3c08: addiu $s1, $sp, 0xe0
    func_001b4fd0();  // 1b4fd0                                // 0x001b3c0c: jal 0x1b4fd0
    local_d0 = 0;                                               // 0x001b3c10: sw $zero, 0xd0($sp)
    func_001b5040();  // 1b5040                                // 0x001b3c14: jal 0x1b5040
    v0 = s2 & 0xff;                                             // 0x001b3c1c: andi $v0, $s2, 0xff
    at = 0x22 << 16;                                            // 0x001b3c20: lui $at, 0x22
    v1 = g_0021c21c;  // Global at 0x0021c21c                   // 0x001b3c24: lw $v1, -0x3de4($at)
    v0 = v0 << 0x18;                                            // 0x001b3c28: sll $v0, $v0, 0x18
    local_a0 = v0;                                              // 0x001b3c2c: sw $v0, 0xa0($sp)
    v0 = local_a0;                                              // 0x001b3c30: lw $v0, 0xa0($sp)
    func_001b5050();  // 1b5050                                // 0x001b3c3c: jal 0x1b5050
    a0 = v0 | v1;                                               // 0x001b3c40: or $a0, $v0, $v1
    func_001b4ff0();  // 1b4ff0                                // 0x001b3c48: jal 0x1b4ff0
    v0 = s4 >> 1;                                               // 0x001b3c50: sra $v0, $s4, 1
    if (s4 >= 0) goto label_0x1b3c6c;                           // 0x001b3c58: bgez $s4, 0x1b3c6c
    local_b0 = v0;                                              // 0x001b3c5c: sw $v0, 0xb0($sp)
    v0 = s4 + 1;                                                // 0x001b3c60: addiu $v0, $s4, 1
    v0 = v0 >> 1;                                               // 0x001b3c64: sra $v0, $v0, 1
    local_b0 = v0;                                              // 0x001b3c68: sw $v0, 0xb0($sp)
label_0x1b3c6c:
    if (fp != 0) goto label_0x1b3cc0;                           // 0x001b3c6c: bnez $fp, 0x1b3cc0
    /* nop */                                                   // 0x001b3c70: nop 
    v0 = local_d0;                                              // 0x001b3c74: lw $v0, 0xd0($sp)
    if (v0 == 0) goto label_0x1b3cc0;                           // 0x001b3c78: beqz $v0, 0x1b3cc0
    func_001b3a40();  // 1b3a40                                // 0x001b3c80: jal 0x1b3a40
    /* nop */                                                   // 0x001b3c84: nop 
    if (v0 == 0) goto label_0x1b3ebc;                           // 0x001b3c88: beqz $v0, 0x1b3ebc
    /* nop */                                                   // 0x001b3c8c: nop 
    v1 = local_b0;                                              // 0x001b3c90: lw $v1, 0xb0($sp)
    /* multiply: v0 * v1 -> hi:lo */                            // 0x001b3c94: mult $ac2, $v0, $v1
    v1 = 0x280;                                                 // 0x001b3c98: addiu $v1, $zero, 0x280
    v0 = v1 - v0;                                               // 0x001b3c9c: subu $v0, $v1, $v0
    if (v0 >= 0) goto label_0x1b3cb0;                           // 0x001b3ca0: bgez $v0, 0x1b3cb0
    s0 = v0 >> 1;                                               // 0x001b3ca4: sra $s0, $v0, 1
    v0 = v0 + 1;                                                // 0x001b3ca8: addiu $v0, $v0, 1
    s0 = v0 >> 1;                                               // 0x001b3cac: sra $s0, $v0, 1
label_0x1b3cb0:
    func_001b4ff0();  // 1b4ff0                                // 0x001b3cb4: jal 0x1b4ff0
    fp = 1;                                                     // 0x001b3cbc: addiu $fp, $zero, 1
label_0x1b3cc0:
    s2 = *(uint8_t*)(s3);                                       // 0x001b3cc0: lbu $s2, 0($s3)
    if (s2 == 0) goto label_0x1b3ea0;                           // 0x001b3cc4: beqz $s2, 0x1b3ea0
    s3 = s3 + 1;                                                // 0x001b3cc8: addiu $s3, $s3, 1
    v0 = 0xd;                                                   // 0x001b3ccc: addiu $v0, $zero, 0xd
    if (s2 == v0) goto label_0x1b3ea4;                          // 0x001b3cd0: beq $s2, $v0, 0x1b3ea4
    a0 = sp + 0xe0;                                             // 0x001b3cd4: addiu $a0, $sp, 0xe0
    v0 = 0xa;                                                   // 0x001b3cd8: addiu $v0, $zero, 0xa
    if (s2 != v0) goto label_0x1b3cf4;                          // 0x001b3cdc: bne $s2, $v0, 0x1b3cf4
    v0 = ((unsigned)s2 < (unsigned)0x80) ? 1 : 0;               // 0x001b3ce0: sltiu $v0, $s2, 0x80
    s5 = s5 + s4;                                               // 0x001b3ce8: addu $s5, $s5, $s4
    goto label_0x1b3e30;                                        // 0x001b3cec: b 0x1b3e30
label_0x1b3cf4:
    if (v0 != 0) goto label_0x1b3d04;                           // 0x001b3cf4: bnez $v0, 0x1b3d04
    at = ((unsigned)s2 < (unsigned)0xa0) ? 1 : 0;               // 0x001b3cf8: sltiu $at, $s2, 0xa0
    if (at != 0) goto label_0x1b3d1c;                           // 0x001b3cfc: bnez $at, 0x1b3d1c
    /* nop */                                                   // 0x001b3d00: nop 
label_0x1b3d04:
    v0 = ((unsigned)s2 < (unsigned)0xe0) ? 1 : 0;               // 0x001b3d04: sltiu $v0, $s2, 0xe0
    if (v0 != 0) goto label_0x1b3d40;                           // 0x001b3d08: bnez $v0, 0x1b3d40
    v0 = 0x3c;                                                  // 0x001b3d0c: addiu $v0, $zero, 0x3c
    at = ((unsigned)s2 < (unsigned)0x100) ? 1 : 0;              // 0x001b3d10: sltiu $at, $s2, 0x100
    if (at == 0) goto label_0x1b3d40;                           // 0x001b3d14: beqz $at, 0x1b3d40
    /* nop */                                                   // 0x001b3d18: nop 
label_0x1b3d1c:
    *(uint8_t*)(s1) = s2;                                       // 0x001b3d1c: sb $s2, 0($s1)
    v0 = *(uint8_t*)(s3);                                       // 0x001b3d20: lbu $v0, 0($s3)
    s1 = s1 + 1;                                                // 0x001b3d24: addiu $s1, $s1, 1
    if (v0 == 0) goto label_0x1b3ea0;                           // 0x001b3d28: beqz $v0, 0x1b3ea0
    s3 = s3 + 1;                                                // 0x001b3d2c: addiu $s3, $s3, 1
    *(uint8_t*)(s1) = v0;                                       // 0x001b3d30: sb $v0, 0($s1)
    goto label_0x1b3e94;                                        // 0x001b3d38: b 0x1b3e94
    s1 = s1 + 1;                                                // 0x001b3d3c: addiu $s1, $s1, 1
label_0x1b3d40:
    if (s2 != v0) goto label_0x1b3e20;                          // 0x001b3d40: bne $s2, $v0, 0x1b3e20
    /* nop */                                                   // 0x001b3d44: nop 
    local_2e8 = s2;                                             // 0x001b3d48: sb $s2, 0x2e8($sp)
    a1 = 1;                                                     // 0x001b3d4c: addiu $a1, $zero, 1
    a0 = ((unsigned)s2 < (unsigned)0x80) ? 1 : 0;               // 0x001b3d50: sltiu $a0, $s2, 0x80
    goto label_0x1b3da0;                                        // 0x001b3d54: b 0x1b3da0
    v1 = ((unsigned)s2 < (unsigned)0xe0) ? 1 : 0;               // 0x001b3d58: sltiu $v1, $s2, 0xe0
label_0x1b3d5c:
    v0 = g_0021c200;  // Global at 0x0021c200                   // 0x001b3d5c: lb $v0, -1($v0)
    if (v0 == 0) goto label_0x1b3db0;                           // 0x001b3d60: beqz $v0, 0x1b3db0
    v0 = a1 + sp;                                               // 0x001b3d64: addu $v0, $a1, $sp
    v0 = a1 + -1;                                               // 0x001b3d68: addiu $v0, $a1, -1
    v0 = s3 + v0;                                               // 0x001b3d6c: addu $v0, $s3, $v0
    if (a0 != 0) goto label_0x1b3d84;                           // 0x001b3d70: bnez $a0, 0x1b3d84
    s6 = g_0023dbcf;  // Global at 0x0023dbcf                   // 0x001b3d74: lbu $s6, 0($v0)
    at = ((unsigned)s2 < (unsigned)0xa0) ? 1 : 0;               // 0x001b3d78: sltiu $at, $s2, 0xa0
    if (at != 0) goto label_0x1b3dac;                           // 0x001b3d7c: bnez $at, 0x1b3dac
    /* nop */                                                   // 0x001b3d80: nop 
label_0x1b3d84:
    if (v1 != 0) goto label_0x1b3d98;                           // 0x001b3d84: bnez $v1, 0x1b3d98
    v0 = a1 + sp;                                               // 0x001b3d88: addu $v0, $a1, $sp
    at = ((unsigned)s2 < (unsigned)0x100) ? 1 : 0;              // 0x001b3d8c: sltiu $at, $s2, 0x100
    if (at != 0) goto label_0x1b3dac;                           // 0x001b3d90: bnez $at, 0x1b3dac
    /* nop */                                                   // 0x001b3d94: nop 
label_0x1b3d98:
    g_0023deb7 = s6;  // Global at 0x0023deb7                   // 0x001b3d98: sb $s6, 0x2e8($v0)
    a1 = a1 + 1;                                                // 0x001b3d9c: addiu $a1, $a1, 1
label_0x1b3da0:
    v0 = (a1 < 4) ? 1 : 0;                                      // 0x001b3da0: slti $v0, $a1, 4
    if (v0 != 0) goto label_0x1b3d5c;                           // 0x001b3da4: bnez $v0, 0x1b3d5c
    v0 = s3 + a1;                                               // 0x001b3da8: addu $v0, $s3, $a1
label_0x1b3dac:
    v0 = a1 + sp;                                               // 0x001b3dac: addu $v0, $a1, $sp
label_0x1b3db0:
    g_0023deb7 = 0;  // Global at 0x0023deb7                    // 0x001b3db0: sb $zero, 0x2e8($v0)
    v0 = sp + 0x2ea;                                            // 0x001b3db4: addiu $v0, $sp, 0x2ea
    v0 = g_0023dbcf;  // Global at 0x0023dbcf                   // 0x001b3db8: lb $v0, 0($v0)
    if (v0 == 0) goto label_0x1b3dd4;                           // 0x001b3dbc: beqz $v0, 0x1b3dd4
    /* nop */                                                   // 0x001b3dc0: nop 
    v1 = 0x20;                                                  // 0x001b3dc8: addiu $v1, $zero, 0x20
    v0 = sp + 0x2ea;                                            // 0x001b3dcc: addiu $v0, $sp, 0x2ea
    g_0023dbcf = v1;  // Global at 0x0023dbcf                   // 0x001b3dd0: sb $v1, 0($v0)
label_0x1b3dd4:
    a1 = 0x24 << 16;                                            // 0x001b3dd4: lui $a1, 0x24
    a0 = sp + 0x2e8;                                            // 0x001b3dd8: addiu $a0, $sp, 0x2e8
    func_0010ab20();  // 10ab20                                // 0x001b3ddc: jal 0x10ab20
    a1 = a1 + -0x2438;                                          // 0x001b3de0: addiu $a1, $a1, -0x2438
    if (v0 != 0) goto label_0x1b3dfc;                           // 0x001b3de4: bnez $v0, 0x1b3dfc
    a1 = 0x24 << 16;                                            // 0x001b3de8: lui $a1, 0x24
    v0 = s6 + -0x30;                                            // 0x001b3dec: addiu $v0, $s6, -0x30
    s3 = s3 + 3;                                                // 0x001b3df0: addiu $s3, $s3, 3
    goto label_0x1b3e30;                                        // 0x001b3df4: b 0x1b3e30
    local_d0 = v0;                                              // 0x001b3df8: sw $v0, 0xd0($sp)
label_0x1b3dfc:
    a0 = sp + 0x2e8;                                            // 0x001b3dfc: addiu $a0, $sp, 0x2e8
    func_0010ab20();  // 10ab20                                // 0x001b3e00: jal 0x10ab20
    a1 = a1 + -0x2430;                                          // 0x001b3e04: addiu $a1, $a1, -0x2430
    if (v0 != 0) goto label_0x1b3e20;                           // 0x001b3e08: bnez $v0, 0x1b3e20
    /* nop */                                                   // 0x001b3e0c: nop 
    v0 = s6 + -0x30;                                            // 0x001b3e10: addiu $v0, $s6, -0x30
    s3 = s3 + 3;                                                // 0x001b3e14: addiu $s3, $s3, 3
    goto label_0x1b3e30;                                        // 0x001b3e18: b 0x1b3e30
    local_c0 = v0;                                              // 0x001b3e1c: sw $v0, 0xc0($sp)
label_0x1b3e20:
    *(uint8_t*)(s1) = s2;                                       // 0x001b3e20: sb $s2, 0($s1)
    v0 = 1;                                                     // 0x001b3e24: addiu $v0, $zero, 1
    goto label_0x1b3e94;                                        // 0x001b3e28: b 0x1b3e94
    s1 = s1 + 1;                                                // 0x001b3e2c: addiu $s1, $s1, 1
label_0x1b3e30:
    a0 = sp + 0xe0;                                             // 0x001b3e30: addiu $a0, $sp, 0xe0
    func_0010ae00();  // 10ae00                                // 0x001b3e34: jal 0x10ae00
    *(uint8_t*)(s1) = 0;                                        // 0x001b3e38: sb $zero, 0($s1)
    if (v0 == 0) goto label_0x1b3e54;                           // 0x001b3e3c: beqz $v0, 0x1b3e54
    a0 = sp + 0xe0;                                             // 0x001b3e40: addiu $a0, $sp, 0xe0
    func_001b5090();  // 1b5090                                // 0x001b3e44: jal 0x1b5090
    /* nop */                                                   // 0x001b3e48: nop 
    local_e0 = 0;                                               // 0x001b3e4c: sb $zero, 0xe0($sp)
    s1 = sp + 0xe0;                                             // 0x001b3e50: addiu $s1, $sp, 0xe0
label_0x1b3e54:
    v0 = local_c0;                                              // 0x001b3e54: lw $v0, 0xc0($sp)
    v1 = v0 << 2;                                               // 0x001b3e58: sll $v1, $v0, 2
    v0 = 0x22 << 16;                                            // 0x001b3e5c: lui $v0, 0x22
    v0 = v0 + -0x3e00;                                          // 0x001b3e60: addiu $v0, $v0, -0x3e00
    v0 = v0 + v1;                                               // 0x001b3e64: addu $v0, $v0, $v1
    v0 = g_0021c200;  // Global at 0x0021c200                   // 0x001b3e68: lw $v0, 0($v0)
    v0 = local_a0;                                              // 0x001b3e70: lw $v0, 0xa0($sp)
    func_001b5050();  // 1b5050                                // 0x001b3e78: jal 0x1b5050
    a0 = v0 | v1;                                               // 0x001b3e7c: or $a0, $v0, $v1
    func_001b4ff0();  // 1b4ff0                                // 0x001b3e84: jal 0x1b4ff0
    goto label_0x1b3c6c;                                        // 0x001b3e8c: b 0x1b3c6c
    /* nop */                                                   // 0x001b3e90: nop 
label_0x1b3e94:
    v0 = s4 >> v0;                                              // 0x001b3e94: srav $v0, $s4, $v0
    goto label_0x1b3c6c;                                        // 0x001b3e98: b 0x1b3c6c
    s0 = s0 + v0;                                               // 0x001b3e9c: addu $s0, $s0, $v0
label_0x1b3ea0:
    a0 = sp + 0xe0;                                             // 0x001b3ea0: addiu $a0, $sp, 0xe0
label_0x1b3ea4:
    func_0010ae00();  // 10ae00                                // 0x001b3ea4: jal 0x10ae00
    *(uint8_t*)(s1) = 0;                                        // 0x001b3ea8: sb $zero, 0($s1)
    if (v0 == 0) goto label_0x1b3ebc;                           // 0x001b3eac: beqz $v0, 0x1b3ebc
    a0 = sp + 0xe0;                                             // 0x001b3eb0: addiu $a0, $sp, 0xe0
    func_001b5090();  // 1b5090                                // 0x001b3eb4: jal 0x1b5090
    /* nop */                                                   // 0x001b3eb8: nop 
label_0x1b3ebc:
    /* FPU: xori.b $w2, $w0, 0xbe */                            // 0x001b3ec0: xori.b $w2, $w0, 0xbe
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001b3ec8: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001b3ecc: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001b3ed0: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b3ed8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b3edc: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b3ee0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b3ee4: jr $ra
    sp = sp + 0x2f0;                                            // 0x001b3ee8: addiu $sp, $sp, 0x2f0
}