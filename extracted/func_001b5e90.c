void func_001b5e90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = a0 & 0xff;                                             // 0x001b5e90: andi $v1, $a0, 0xff
    at = (v1 < 0x21) ? 1 : 0;                                   // 0x001b5e94: slti $at, $v1, 0x21
    if (at == 0) goto label_0x1b5ea8;                           // 0x001b5e98: beqz $at, 0x1b5ea8
    at = (v1 < 0x7f) ? 1 : 0;                                   // 0x001b5e9c: slti $at, $v1, 0x7f
    goto label_0x1b5f3c;                                        // 0x001b5ea0: b 0x1b5f3c
    v0 = 0 | 0x8140;                                            // 0x001b5ea4: ori $v0, $zero, 0x8140
label_0x1b5ea8:
    if (at == 0) goto label_0x1b5eb8;                           // 0x001b5ea8: beqz $at, 0x1b5eb8
    v0 = v1 + 0x7fff;                                           // 0x001b5eac: addiu $v0, $v1, 0x7fff
    goto label_0x1b5f3c;                                        // 0x001b5eb0: b 0x1b5f3c
    v0 = v0 + 0x6d7f;                                           // 0x001b5eb4: addiu $v0, $v0, 0x6d7f
label_0x1b5eb8:
    at = (v1 < 0xa1) ? 1 : 0;                                   // 0x001b5eb8: slti $at, $v1, 0xa1
    if (at == 0) goto label_0x1b5ecc;                           // 0x001b5ebc: beqz $at, 0x1b5ecc
    at = (v1 < 0xa6) ? 1 : 0;                                   // 0x001b5ec0: slti $at, $v1, 0xa6
    goto label_0x1b5f3c;                                        // 0x001b5ec4: b 0x1b5f3c
    v0 = 0 | 0x8140;                                            // 0x001b5ec8: ori $v0, $zero, 0x8140
label_0x1b5ecc:
    if (at == 0) goto label_0x1b5ef0;                           // 0x001b5ecc: beqz $at, 0x1b5ef0
    v0 = 0xb0;                                                  // 0x001b5ed0: addiu $v0, $zero, 0xb0
    v0 = 0x22 << 16;                                            // 0x001b5ed4: lui $v0, 0x22
    v0 = v0 + -0x3b91;                                          // 0x001b5ed8: addiu $v0, $v0, -0x3b91
    v0 = v0 + v1;                                               // 0x001b5edc: addu $v0, $v0, $v1
    v0 = g_0021c46f;  // Global at 0x0021c46f                   // 0x001b5ee0: lbu $v0, 0($v0)
    v0 = v0 + 0x7fff;                                           // 0x001b5ee4: addiu $v0, $v0, 0x7fff
    goto label_0x1b5f3c;                                        // 0x001b5ee8: b 0x1b5f3c
    v0 = v0 + 0x6e01;                                           // 0x001b5eec: addiu $v0, $v0, 0x6e01
label_0x1b5ef0:
    if (v1 != v0) goto label_0x1b5f00;                          // 0x001b5ef0: bne $v1, $v0, 0x1b5f00
    /* nop */                                                   // 0x001b5ef4: nop 
    goto label_0x1b5f3c;                                        // 0x001b5ef8: b 0x1b5f3c
    v0 = 0 | 0xeeba;                                            // 0x001b5efc: ori $v0, $zero, 0xeeba
label_0x1b5f00:
    v0 = 0xde;                                                  // 0x001b5f00: addiu $v0, $zero, 0xde
    if (v1 != v0) goto label_0x1b5f14;                          // 0x001b5f04: bne $v1, $v0, 0x1b5f14
    v0 = 0xdf;                                                  // 0x001b5f08: addiu $v0, $zero, 0xdf
    goto label_0x1b5f3c;                                        // 0x001b5f0c: b 0x1b5f3c
    v0 = 0 | 0xeeaa;                                            // 0x001b5f10: ori $v0, $zero, 0xeeaa
label_0x1b5f14:
    if (v1 != v0) goto label_0x1b5f24;                          // 0x001b5f14: bne $v1, $v0, 0x1b5f24
    /* nop */                                                   // 0x001b5f18: nop 
    goto label_0x1b5f3c;                                        // 0x001b5f1c: b 0x1b5f3c
    v0 = 0 | 0xeea9;                                            // 0x001b5f20: ori $v0, $zero, 0xeea9
label_0x1b5f24:
    v0 = 0x22 << 16;                                            // 0x001b5f24: lui $v0, 0x22
    v0 = v0 + -0x3b86;                                          // 0x001b5f28: addiu $v0, $v0, -0x3b86
    v0 = v0 + v1;                                               // 0x001b5f2c: addu $v0, $v0, $v1
    v0 = g_0021c47a;  // Global at 0x0021c47a                   // 0x001b5f30: lbu $v0, 0($v0)
    v0 = v0 + 0x7fff;                                           // 0x001b5f34: addiu $v0, $v0, 0x7fff
    v0 = v0 + 0x6f01;                                           // 0x001b5f38: addiu $v0, $v0, 0x6f01
label_0x1b5f3c:
    return;                                                     // 0x001b5f3c: jr $ra
    /* nop */                                                   // 0x001b5f40: nop 
}