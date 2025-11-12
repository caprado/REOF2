void func_001b4d00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001b4d00: addiu $sp, $sp, -0x60
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001b4d0c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b4d1c: addu.qb $zero, $sp, $s1
    s0 = 0x2b << 16;                                            // 0x001b4d2c: lui $s0, 0x2b
    s0 = s0 + -0x3b70;                                          // 0x001b4d34: addiu $s0, $s0, -0x3b70
    a2 = 0xa8;                                                  // 0x001b4d38: addiu $a2, $zero, 0xa8
    func_00107d30();  // 0x107c70                                // 0x001b4d3c: jal 0x107c70
    a0 = 0x30 << 16;                                            // 0x001b4d44: lui $a0, 0x30
    a0 = a0 + -0x2580;                                          // 0x001b4d4c: addiu $a0, $a0, -0x2580
    func_00107d30();  // 0x107c70                                // 0x001b4d50: jal 0x107c70
    a2 = 0 | 0x9180;                                            // 0x001b4d54: ori $a2, $zero, 0x9180
    a0 = 0x2f << 16;                                            // 0x001b4d58: lui $a0, 0x2f
    a0 = a0 + 0x4900;                                           // 0x001b4d60: addiu $a0, $a0, 0x4900
    func_00107d30();  // 0x107c70                                // 0x001b4d64: jal 0x107c70
    a2 = 0 | 0x9180;                                            // 0x001b4d68: ori $a2, $zero, 0x9180
    at = 0x2b << 16;                                            // 0x001b4d6c: lui $at, 0x2b
    a1 = 0x22 << 16;                                            // 0x001b4d70: lui $a1, 0x22
    g_002ac494 = s4;  // Global at 0x002ac494                   // 0x001b4d74: sw $s4, -0x3b6c($at)
    v0 = 0 | 0x9180;                                            // 0x001b4d78: ori $v0, $zero, 0x9180
    at = 0x2b << 16;                                            // 0x001b4d7c: lui $at, 0x2b
    a1 = a1 + -0x3d00;                                          // 0x001b4d80: addiu $a1, $a1, -0x3d00
    g_002ac52c = v0;  // Global at 0x002ac52c                   // 0x001b4d84: sw $v0, -0x3ad4($at)
    v1 = -0x40;                                                 // 0x001b4d88: addiu $v1, $zero, -0x40
    at = 0x2b << 16;                                            // 0x001b4d8c: lui $at, 0x2b
    v0 = 2 << 16;                                               // 0x001b4d90: lui $v0, 2
    a3 = g_002ac494;  // Global at 0x002ac494                   // 0x001b4d94: lw $a3, -0x3b6c($at)
    v0 = v0 | 0x703f;                                           // 0x001b4d98: ori $v0, $v0, 0x703f
    a0 = s3 + v0;                                               // 0x001b4d9c: addu $a0, $s3, $v0
    a2 = a3 << 1;                                               // 0x001b4da0: sll $a2, $a3, 1
    at = 0x2b << 16;                                            // 0x001b4da4: lui $at, 0x2b
    a2 = a2 + a3;                                               // 0x001b4da8: addu $a2, $a2, $a3
    a2 = a2 << 2;                                               // 0x001b4dac: sll $a2, $a2, 2
    a2 = a2 + a3;                                               // 0x001b4db0: addu $a2, $a2, $a3
    a2 = a2 << 2;                                               // 0x001b4db4: sll $a2, $a2, 2
    a2 = a1 + a2;                                               // 0x001b4db8: addu $a2, $a1, $a2
    a1 = *(int32_t*)(a2);                                       // 0x001b4dbc: lw $a1, 0($a2)
    g_002ac498 = a1;  // Global at 0x002ac498                   // 0x001b4dc0: sw $a1, -0x3b68($at)
    a1 = *(int32_t*)((a2) + 4);                                 // 0x001b4dc4: lw $a1, 4($a2)
    at = 0x2b << 16;                                            // 0x001b4dc8: lui $at, 0x2b
    g_002ac49c = a1;  // Global at 0x002ac49c                   // 0x001b4dcc: sw $a1, -0x3b64($at)
    a1 = *(int32_t*)((a2) + 8);                                 // 0x001b4dd0: lw $a1, 8($a2)
    at = 0x2b << 16;                                            // 0x001b4dd4: lui $at, 0x2b
    g_002ac4a0 = a1;  // Global at 0x002ac4a0                   // 0x001b4dd8: sw $a1, -0x3b60($at)
    a1 = *(int32_t*)((a2) + 0xc);                               // 0x001b4ddc: lw $a1, 0xc($a2)
    at = 0x2b << 16;                                            // 0x001b4de0: lui $at, 0x2b
    g_002ac4a4 = a1;  // Global at 0x002ac4a4                   // 0x001b4de4: sw $a1, -0x3b5c($at)
    a1 = *(int32_t*)((a2) + 0x10);                              // 0x001b4de8: lw $a1, 0x10($a2)
    at = 0x2b << 16;                                            // 0x001b4dec: lui $at, 0x2b
    g_002ac4a8 = a1;  // Global at 0x002ac4a8                   // 0x001b4df0: sw $a1, -0x3b58($at)
    a1 = *(int32_t*)((a2) + 0x1c);                              // 0x001b4df4: lw $a1, 0x1c($a2)
    at = 0x2b << 16;                                            // 0x001b4df8: lui $at, 0x2b
    g_002ac4ac = a1;  // Global at 0x002ac4ac                   // 0x001b4dfc: sw $a1, -0x3b54($at)
    a1 = *(int32_t*)((a2) + 0x20);                              // 0x001b4e00: lw $a1, 0x20($a2)
    at = 0x2b << 16;                                            // 0x001b4e04: lui $at, 0x2b
    g_002ac4b0 = a1;  // Global at 0x002ac4b0                   // 0x001b4e08: sw $a1, -0x3b50($at)
    a1 = *(int32_t*)((a2) + 0x18);                              // 0x001b4e0c: lw $a1, 0x18($a2)
    at = 0x2b << 16;                                            // 0x001b4e10: lui $at, 0x2b
    g_002ac4b4 = a1;  // Global at 0x002ac4b4                   // 0x001b4e14: sw $a1, -0x3b4c($at)
    at = 0x2b << 16;                                            // 0x001b4e18: lui $at, 0x2b
    g_002ac4f0 = s2;  // Global at 0x002ac4f0                   // 0x001b4e1c: sw $s2, -0x3b10($at)
    at = 0x2b << 16;                                            // 0x001b4e20: lui $at, 0x2b
    g_002ac4b8 = s3;  // Global at 0x002ac4b8                   // 0x001b4e24: sw $s3, -0x3b48($at)
    s3 = a0 & v1;                                               // 0x001b4e28: and $s3, $a0, $v1
    at = 0x2b << 16;                                            // 0x001b4e2c: lui $at, 0x2b
    g_002ac4c4 = s3;  // Global at 0x002ac4c4                   // 0x001b4e30: sw $s3, -0x3b3c($at)
    a1 = *(int32_t*)((a2) + 0x14);                              // 0x001b4e34: lw $a1, 0x14($a2)
    at = 0x2b << 16;                                            // 0x001b4e38: lui $at, 0x2b
    a2 = g_002ac4c4;  // Global at 0x002ac4c4                   // 0x001b4e3c: lw $a2, -0x3b3c($at)
    goto label_0x1b4e78;                                        // 0x001b4e40: b 0x1b4e78
label_0x1b4e48:
    a0 = g_0021c300;  // Global at 0x0021c300                   // 0x001b4e48: lbu $a0, 0($a1)
    a3 = a3 + 1;                                                // 0x001b4e4c: addiu $a3, $a3, 1
    v1 = (a3 < 0x10) ? 1 : 0;                                   // 0x001b4e50: slti $v1, $a3, 0x10
    *(uint8_t*)((a2) + 3) = a0;                                 // 0x001b4e54: sb $a0, 3($a2)
    a0 = g_0021c301;  // Global at 0x0021c301                   // 0x001b4e58: lbu $a0, 1($a1)
    *(uint8_t*)((a2) + 2) = a0;                                 // 0x001b4e5c: sb $a0, 2($a2)
    a1 = a1 + 2;                                                // 0x001b4e60: addiu $a1, $a1, 2
    *(uint8_t*)((a2) + 1) = a0;                                 // 0x001b4e64: sb $a0, 1($a2)
    *(uint8_t*)(a2) = a0;                                       // 0x001b4e68: sb $a0, 0($a2)
    if (v1 != 0) goto label_0x1b4e48;                           // 0x001b4e6c: bnez $v1, 0x1b4e48
    a2 = a2 + 4;                                                // 0x001b4e70: addiu $a2, $a2, 4
    v0 = v0 + 1;                                                // 0x001b4e74: addiu $v0, $v0, 1
label_0x1b4e78:
    a0 = g_002ac4b4;  // Global at 0x002ac4b4                   // 0x001b4e78: lw $a0, 0x24($s0)
    v1 = ((unsigned)v0 < (unsigned)a0) ? 1 : 0;                 // 0x001b4e7c: sltu $v1, $v0, $a0
    if (v1 != 0) goto label_0x1b4e48;                           // 0x001b4e80: bnez $v1, 0x1b4e48
    v0 = a0 << 6;                                               // 0x001b4e88: sll $v0, $a0, 6
    g_002ac4e4 = s1;  // Global at 0x002ac4e4                   // 0x001b4e8c: sw $s1, 0x54($s0)
    s3 = s3 + v0;                                               // 0x001b4e90: addu $s3, $s3, $v0
    v0 = s1 + 2;                                                // 0x001b4e94: addiu $v0, $s1, 2
    g_002ac4e8 = v0;  // Global at 0x002ac4e8                   // 0x001b4e98: sw $v0, 0x58($s0)
    v1 = s1 << 2;                                               // 0x001b4ea0: sll $v1, $s1, 2
label_0x1b4ea4:
    v0 = gp + -0x7ce8;                                          // 0x001b4ea4: addiu $v0, $gp, -0x7ce8
    v0 = v0 + v1;                                               // 0x001b4ea8: addu $v0, $v0, $v1
    s2 = s0 + v1;                                               // 0x001b4eac: addu $s2, $s0, $v1
    a0 = g_00020001;  // Global at 0x00020001                   // 0x001b4eb0: lw $a0, 0($v0)
    *(uint32_t*)((s2) + 0x38) = a0;                             // 0x001b4eb4: sw $a0, 0x38($s2)
    func_001b6860();  // 0x1b67a0                                // 0x001b4eb8: jal 0x1b67a0
    a1 = g_002ac49c;  // Global at 0x002ac49c                   // 0x001b4ebc: lw $a1, 0xc($s0)
    func_001b6a60();  // 0x1b69e0                                // 0x001b4ec4: jal 0x1b69e0
    *(uint32_t*)((s2) + 0x40) = v0;                             // 0x001b4ecc: sw $v0, 0x40($s2)
    s1 = s1 + 1;                                                // 0x001b4ed0: addiu $s1, $s1, 1
    v0 = (s1 < 2) ? 1 : 0;                                      // 0x001b4ed4: slti $v0, $s1, 2
    if (v0 != 0) goto label_0x1b4ea4;                           // 0x001b4ed8: bnez $v0, 0x1b4ea4
    v1 = s1 << 2;                                               // 0x001b4edc: sll $v1, $s1, 2
    g_002ac4d8 = 0;  // Global at 0x002ac4d8                    // 0x001b4ee0: sw $zero, 0x48($s0)
    v1 = 0x8080 << 16;                                          // 0x001b4ee4: lui $v1, 0x8080
    a2 = g_002ac4d0;  // Global at 0x002ac4d0                   // 0x001b4ee8: lw $a2, 0x40($s0)
    a1 = 1;                                                     // 0x001b4eec: addiu $a1, $zero, 1
    at = 0x31 << 16;                                            // 0x001b4ef0: lui $at, 0x31
    a0 = 0xa;                                                   // 0x001b4ef4: addiu $a0, $zero, 0xa
    v1 = v1 | 0x8080;                                           // 0x001b4ef8: ori $v1, $v1, 0x8080
    v0 = -1;                                                    // 0x001b4efc: addiu $v0, $zero, -1
    g_002ac4dc = a2;  // Global at 0x002ac4dc                   // 0x001b4f00: sw $a2, 0x4c($s0)
    a2 = g_002ac4b8;  // Global at 0x002ac4b8                   // 0x001b4f04: lw $a2, 0x28($s0)
    a2 = s3 - a2;                                               // 0x001b4f08: subu $a2, $s3, $a2
    g_002ac4ec = a2;  // Global at 0x002ac4ec                   // 0x001b4f0c: sw $a2, 0x5c($s0)
    g_003137ca = a1;  // Global at 0x003137ca                   // 0x001b4f10: sb $a1, 0x37ca($at)
    a1 = g_002ac49c;  // Global at 0x002ac49c                   // 0x001b4f14: lw $a1, 0xc($s0)
    at = 0x2b << 16;                                            // 0x001b4f18: lui $at, 0x2b
    g_002ac4fc = a1;  // Global at 0x002ac4fc                   // 0x001b4f1c: sw $a1, 0x6c($s0)
    g_002ac500 = 0;  // Global at 0x002ac500                    // 0x001b4f20: sw $zero, 0x70($s0)
    g_002ac504 = 0;  // Global at 0x002ac504                    // 0x001b4f24: sw $zero, 0x74($s0)
    g_002ac508 = a0;  // Global at 0x002ac508                   // 0x001b4f28: sw $a0, 0x78($s0)
    g_002ac50c = 0;  // Global at 0x002ac50c                    // 0x001b4f2c: sw $zero, 0x7c($s0)
    g_002ac510 = v1;  // Global at 0x002ac510                   // 0x001b4f30: sw $v1, 0x80($s0)
    g_002ac5c8 = v0;  // Global at 0x002ac5c8                   // 0x001b4f34: sw $v0, -0x3a38($at)
    v0 = g_002ac4b8;  // Global at 0x002ac4b8                   // 0x001b4f38: lw $v0, 0x28($s0)
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001b4f40: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b4f48: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b4f4c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b4f50: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b4f54: jr $ra
    sp = sp + 0x60;                                             // 0x001b4f58: addiu $sp, $sp, 0x60
}