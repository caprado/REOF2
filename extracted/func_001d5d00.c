void func_001d5d00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x90;                                            // 0x001d5d00: addiu $sp, $sp, -0x90
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x001d5d0c: dps.w.ph $ac0, $sp, $s7
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001d5d18: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d5d24: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d5d2c: addu.qb $zero, $sp, $s1
    v1 = *(int32_t*)((gp) + -0x7ae4);                           // 0x001d5d3c: lw $v1, -0x7ae4($gp)
    v0 = (v1 < 0x1200) ? 1 : 0;                                 // 0x001d5d40: slti $v0, $v1, 0x1200
    if (v0 != 0) goto label_0x1d5d5c;                           // 0x001d5d44: bnez $v0, 0x1d5d5c
    at = (v1 < 0x1400) ? 1 : 0;                                 // 0x001d5d4c: slti $at, $v1, 0x1400
    if (at == 0) goto label_0x1d5d60;                           // 0x001d5d50: beqz $at, 0x1d5d60
    v0 = (v1 < 0x1400) ? 1 : 0;                                 // 0x001d5d54: slti $v0, $v1, 0x1400
    s5 = 1;                                                     // 0x001d5d58: addiu $s5, $zero, 1
label_0x1d5d5c:
    v0 = (v1 < 0x1400) ? 1 : 0;                                 // 0x001d5d5c: slti $v0, $v1, 0x1400
label_0x1d5d60:
    if (v0 != 0) goto label_0x1d5d74;                           // 0x001d5d60: bnez $v0, 0x1d5d74
    at = (v1 < 0x1800) ? 1 : 0;                                 // 0x001d5d64: slti $at, $v1, 0x1800
    if (at == 0) goto label_0x1d5d74;                           // 0x001d5d68: beqz $at, 0x1d5d74
    /* nop */                                                   // 0x001d5d6c: nop 
    s5 = 2;                                                     // 0x001d5d70: addiu $s5, $zero, 2
label_0x1d5d74:
    if (s5 != 0) goto label_0x1d5d84;                           // 0x001d5d74: bnez $s5, 0x1d5d84
    v0 = 0x8000 << 16;                                          // 0x001d5d78: lui $v0, 0x8000
    goto label_0x1d5f34;                                        // 0x001d5d7c: b 0x1d5f34
label_0x1d5d84:
    v0 = s0 & v0;                                               // 0x001d5d84: and $v0, $s0, $v0
    if (v0 == 0) goto label_0x1d5d98;                           // 0x001d5d88: beqz $v0, 0x1d5d98
    t0 = 4;                                                     // 0x001d5d8c: addiu $t0, $zero, 4
    goto label_0x1d5db0;                                        // 0x001d5d90: b 0x1d5db0
    v0 = 0x2000 << 16;                                          // 0x001d5d94: lui $v0, 0x2000
label_0x1d5d98:
    v0 = 0x4000 << 16;                                          // 0x001d5d98: lui $v0, 0x4000
    v0 = s0 & v0;                                               // 0x001d5d9c: and $v0, $s0, $v0
    if (v0 == 0) goto label_0x1d5dac;                           // 0x001d5da0: beqz $v0, 0x1d5dac
    t0 = 1;                                                     // 0x001d5da4: addiu $t0, $zero, 1
    t0 = 2;                                                     // 0x001d5da8: addiu $t0, $zero, 2
label_0x1d5dac:
    v0 = 0x2000 << 16;                                          // 0x001d5dac: lui $v0, 0x2000
label_0x1d5db0:
    a0 = s5 & 0xff;                                             // 0x001d5db0: andi $a0, $s5, 0xff
    v1 = s0 & v0;                                               // 0x001d5db4: and $v1, $s0, $v0
    s3 = ((unsigned)0 < (unsigned)v1) ? 1 : 0;                  // 0x001d5dbc: sltu $s3, $zero, $v1
    v0 = s1 & 0xffff;                                           // 0x001d5dc0: andi $v0, $s1, 0xffff
    v1 = s3 << 0xf;                                             // 0x001d5dc4: sll $v1, $s3, 0xf
    a3 = v1 & 0xffff;                                           // 0x001d5dc8: andi $a3, $v1, 0xffff
    t2 = v0 | a3;                                               // 0x001d5dcc: or $t2, $v0, $a3
    func_001d5b70();  // 0x1d5b00                                // 0x001d5dd0: jal 0x1d5b00
    a1 = t2 & 0xffff;                                           // 0x001d5dd4: andi $a1, $t2, 0xffff
    if (s6 == 0) goto label_0x1d5e0c;                           // 0x001d5ddc: beqz $s6, 0x1d5e0c
    /* nop */                                                   // 0x001d5de0: nop 
    v1 = *(uint8_t*)((s6) + 3);                                 // 0x001d5de4: lbu $v1, 3($s6)
    v0 = ~t0;                                                   // 0x001d5de8: not $v0, $t0
    v0 = v1 & v0;                                               // 0x001d5dec: and $v0, $v1, $v0
    v0 = t0 | v0;                                               // 0x001d5df0: or $v0, $t0, $v0
    if (s2 == 0) goto label_0x1d5e5c;                           // 0x001d5df4: beqz $s2, 0x1d5e5c
    *(uint8_t*)((s6) + 3) = v0;                                 // 0x001d5df8: sb $v0, 3($s6)
    v0 = *(uint8_t*)(s6);                                       // 0x001d5dfc: lbu $v0, 0($s6)
    v0 = v0 + 1;                                                // 0x001d5e00: addiu $v0, $v0, 1
    goto label_0x1d5e5c;                                        // 0x001d5e04: b 0x1d5e5c
    *(uint8_t*)(s6) = v0;                                       // 0x001d5e08: sb $v0, 0($s6)
label_0x1d5e0c:
    v0 = 4;                                                     // 0x001d5e0c: addiu $v0, $zero, 4
    if (t0 != v0) goto label_0x1d5e28;                          // 0x001d5e10: bne $t0, $v0, 0x1d5e28
    s4 = 2;                                                     // 0x001d5e14: addiu $s4, $zero, 2
    if (s2 == 0) goto label_0x1d5e2c;                           // 0x001d5e18: beqz $s2, 0x1d5e2c
    goto label_0x1d5f34;                                        // 0x001d5e20: b 0x1d5f34
label_0x1d5e28:
label_0x1d5e2c:
    func_001d5ab0();  // 0x1d5a60                                // 0x001d5e2c: jal 0x1d5a60
    /* nop */                                                   // 0x001d5e30: nop 
    if (s6 != 0) goto label_0x1d5e48;                           // 0x001d5e38: bnez $s6, 0x1d5e48
    /* nop */                                                   // 0x001d5e3c: nop 
    goto label_0x1d5f34;                                        // 0x001d5e40: b 0x1d5f34
label_0x1d5e48:
    *(uint8_t*)((s6) + 3) = t0;                                 // 0x001d5e48: sb $t0, 3($s6)
    v0 = 1;                                                     // 0x001d5e4c: addiu $v0, $zero, 1
    *(uint16_t*)((s6) + 0xa) = t2;                              // 0x001d5e50: sh $t2, 0xa($s6)
    *(uint8_t*)(s6) = v0;                                       // 0x001d5e54: sb $v0, 0($s6)
    *(uint8_t*)((s6) + 8) = s5;                                 // 0x001d5e58: sb $s5, 8($s6)
label_0x1d5e5c:
    v0 = t1 & 0xffff;                                           // 0x001d5e5c: andi $v0, $t1, 0xffff
    a0 = s5 & 0xff;                                             // 0x001d5e60: andi $a0, $s5, 0xff
    a3 = v0 | a3;                                               // 0x001d5e64: or $a3, $v0, $a3
    func_001d5480();  // 0x1d5410                                // 0x001d5e68: jal 0x1d5410
    a1 = a3 & 0xffff;                                           // 0x001d5e6c: andi $a1, $a3, 0xffff
    if (v0 != 0) goto label_0x1d5eb8;                           // 0x001d5e70: bnez $v0, 0x1d5eb8
    a1 = a3 & 0xffff;                                           // 0x001d5e74: andi $a1, $a3, 0xffff
    a0 = s5 & 0xff;                                             // 0x001d5e7c: andi $a0, $s5, 0xff
    func_001d5530();  // 0x1d5480                                // 0x001d5e80: jal 0x1d5480
    s4 = s4 + 1;                                                // 0x001d5e84: addiu $s4, $s4, 1
    v1 = -1;                                                    // 0x001d5e88: addiu $v1, $zero, -1
    if (v0 != v1) goto label_0x1d5e9c;                          // 0x001d5e8c: bne $v0, $v1, 0x1d5e9c
    a0 = v0 << 2;                                               // 0x001d5e90: sll $a0, $v0, 2
    goto label_0x1d5f34;                                        // 0x001d5e94: b 0x1d5f34
label_0x1d5e9c:
    v1 = 0x33 << 16;                                            // 0x001d5e9c: lui $v1, 0x33
    v0 = a0 + v0;                                               // 0x001d5ea0: addu $v0, $a0, $v0
    v1 = v1 + -0x1470;                                          // 0x001d5ea4: addiu $v1, $v1, -0x1470
    v0 = v0 << 2;                                               // 0x001d5ea8: sll $v0, $v0, 2
    v0 = v1 + v0;                                               // 0x001d5eac: addu $v0, $v1, $v0
    goto label_0x1d5ee0;                                        // 0x001d5eb0: b 0x1d5ee0
    a2 = v0 + 2;                                                // 0x001d5eb4: addiu $a2, $v0, 2
label_0x1d5eb8:
    a0 = g_20000010;  // Global at 0x20000010                   // 0x001d5eb8: lbu $a0, 0xf($v0)
    v1 = ~t0;                                                   // 0x001d5ebc: not $v1, $t0
    v1 = a0 & v1;                                               // 0x001d5ec0: and $v1, $a0, $v1
    v1 = t0 | v1;                                               // 0x001d5ec4: or $v1, $t0, $v1
    if (s2 == 0) goto label_0x1d5edc;                           // 0x001d5ec8: beqz $s2, 0x1d5edc
    g_20000010 = v1;  // Global at 0x20000010                   // 0x001d5ecc: sb $v1, 0xf($v0)
    v1 = g_20000001;  // Global at 0x20000001                   // 0x001d5ed0: lbu $v1, 0($v0)
    v1 = v1 + 1;                                                // 0x001d5ed4: addiu $v1, $v1, 1
    g_20000001 = v1;  // Global at 0x20000001                   // 0x001d5ed8: sb $v1, 0($v0)
label_0x1d5edc:
    a2 = v0 + 2;                                                // 0x001d5edc: addiu $a2, $v0, 2
label_0x1d5ee0:
    v0 = 1;                                                     // 0x001d5ee0: addiu $v0, $zero, 1
    if (s5 != v0) goto label_0x1d5ef0;                          // 0x001d5ee4: bne $s5, $v0, 0x1d5ef0
    /* nop */                                                   // 0x001d5ee8: nop 
label_0x1d5ef0:
    a1 = *(int32_t*)((s6) + 4);                                 // 0x001d5ef0: lw $a1, 4($s6)
    v0 = s3 << 7;                                               // 0x001d5ef8: sll $v0, $s3, 7
    t0 = s4 | v0;                                               // 0x001d5f0c: or $t0, $s4, $v0
    func_001d61c0();  // 0x1d5f80                                // 0x001d5f10: jal 0x1d5f80
    if (s2 == 0) goto label_0x1d5f34;                           // 0x001d5f18: beqz $s2, 0x1d5f34
    v0 = 1;                                                     // 0x001d5f1c: addiu $v0, $zero, 1
    a0 = *(int32_t*)((s6) + 4);                                 // 0x001d5f20: lw $a0, 4($s6)
    func_001d5c30();  // 0x1d5b70                                // 0x001d5f28: jal 0x1d5b70
    v0 = 1;                                                     // 0x001d5f30: addiu $v0, $zero, 1
label_0x1d5f34:
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001d5f3c: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001d5f40: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001d5f44: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d5f4c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d5f50: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d5f54: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d5f58: jr $ra
    sp = sp + 0x90;                                             // 0x001d5f5c: addiu $sp, $sp, 0x90
}