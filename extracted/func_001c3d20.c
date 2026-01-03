void func_001c3d20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c3d20: addiu $sp, $sp, -0x20
    a1 = g_001c65f2;  // Global at 0x001c65f2                   // 0x001c3d2c: lb $a1, 2($a0)
    a0 = 0x63;                                                  // 0x001c3d34: addiu $a0, $zero, 0x63
    if (a1 == a0) goto label_0x1c4488;                          // 0x001c3d38: beq $a1, $a0, 0x1c4488
    v0 = 0x62;                                                  // 0x001c3d3c: addiu $v0, $zero, 0x62
    if (a1 == v0) goto label_0x1c4468;                          // 0x001c3d40: beq $a1, $v0, 0x1c4468
    /* nop */                                                   // 0x001c3d44: nop 
    v0 = 0x61;                                                  // 0x001c3d48: addiu $v0, $zero, 0x61
    if (a1 == v0) goto label_0x1c4450;                          // 0x001c3d4c: beq $a1, $v0, 0x1c4450
    v0 = 7;                                                     // 0x001c3d50: addiu $v0, $zero, 7
    if (a1 == v0) goto label_0x1c43a0;                          // 0x001c3d54: beq $a1, $v0, 0x1c43a0
    /* nop */                                                   // 0x001c3d58: nop 
    v0 = 6;                                                     // 0x001c3d5c: addiu $v0, $zero, 6
    if (a1 == v0) goto label_0x1c44ac;                          // 0x001c3d60: beq $a1, $v0, 0x1c44ac
    v0 = 1;                                                     // 0x001c3d64: addiu $v0, $zero, 1
    v1 = 5;                                                     // 0x001c3d68: addiu $v1, $zero, 5
    if (a1 == v1) goto label_0x1c42e0;                          // 0x001c3d6c: beq $a1, $v1, 0x1c42e0
    v0 = 4;                                                     // 0x001c3d70: addiu $v0, $zero, 4
    if (a1 == v0) goto label_0x1c4258;                          // 0x001c3d74: beq $a1, $v0, 0x1c4258
    /* nop */                                                   // 0x001c3d78: nop 
    v0 = 3;                                                     // 0x001c3d7c: addiu $v0, $zero, 3
    if (a1 == v0) goto label_0x1c44a8;                          // 0x001c3d80: beq $a1, $v0, 0x1c44a8
    v0 = 2;                                                     // 0x001c3d84: addiu $v0, $zero, 2
    if (a1 == v0) goto label_0x1c4018;                          // 0x001c3d88: beq $a1, $v0, 0x1c4018
    a2 = 1;                                                     // 0x001c3d8c: addiu $a2, $zero, 1
    if (a1 == a2) goto label_0x1c3df8;                          // 0x001c3d90: beq $a1, $a2, 0x1c3df8
    /* nop */                                                   // 0x001c3d94: nop 
    if (a1 == 0) goto label_0x1c3da8;                           // 0x001c3d98: beqz $a1, 0x1c3da8
    /* nop */                                                   // 0x001c3d9c: nop 
    goto label_0x1c44a8;                                        // 0x001c3da0: b 0x1c44a8
    /* nop */                                                   // 0x001c3da4: nop 
label_0x1c3da8:
    *(uint32_t*)((s0) + 0xf8) = a2;                             // 0x001c3da8: sw $a2, 0xf8($s0)
    v0 = *(int32_t*)((s0) + 0x40);                              // 0x001c3dac: lw $v0, 0x40($s0)
    if (v0 != 0) goto label_0x1c3dc4;                           // 0x001c3db0: bnez $v0, 0x1c3dc4
    /* nop */                                                   // 0x001c3db4: nop 
    *(uint8_t*)((s0) + 2) = a0;                                 // 0x001c3db8: sb $a0, 2($s0)
    goto label_0x1c44a8;                                        // 0x001c3dbc: b 0x1c44a8
    *(uint32_t*)((s0) + 0x34) = v1;                             // 0x001c3dc0: sw $v1, 0x34($s0)
label_0x1c3dc4:
    *(uint8_t*)((s0) + 2) = a2;                                 // 0x001c3dc4: sb $a2, 2($s0)
    v0 = 8;                                                     // 0x001c3dc8: addiu $v0, $zero, 8
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c3dcc: sw $v0, 0x2c($s0)
    a1 = *(int32_t*)((s0) + 0xec);                              // 0x001c3dd0: lw $a1, 0xec($s0)
    func_001bffd0();  // 1bffd0                                // 0x001c3dd4: jal 0x1bffd0
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c3dd8: lw $a0, 0x24($s0)
    a0 = 1;                                                     // 0x001c3ddc: addiu $a0, $zero, 1
    func_001bfcb0();  // 1bfcb0                                // 0x001c3de0: jal 0x1bfcb0
    v0 = 0x3c;                                                  // 0x001c3de8: addiu $v0, $zero, 0x3c
    at = 0x31 << 16;                                            // 0x001c3dec: lui $at, 0x31
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c3df0: sw $v0, 0x10($s0)
    g_00313878 = 0;  // Global at 0x00313878                    // 0x001c3df4: sb $zero, 0x3878($at)
label_0x1c3df8:
    func_001c0bc0();  // 1c0bc0                                // 0x001c3df8: jal 0x1c0bc0
    /* nop */                                                   // 0x001c3dfc: nop 
    v1 = -1;                                                    // 0x001c3e00: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1c400c;                          // 0x001c3e04: beq $v0, $v1, 0x1c400c
    /* nop */                                                   // 0x001c3e08: nop 
    if (v0 == 0) goto label_0x1c3ee0;                           // 0x001c3e0c: beqz $v0, 0x1c3ee0
    v1 = -0xfb;                                                 // 0x001c3e10: addiu $v1, $zero, -0xfb
    if (v0 == v1) goto label_0x1c3f54;                          // 0x001c3e14: beq $v0, $v1, 0x1c3f54
    /* nop */                                                   // 0x001c3e18: nop 
    v1 = -0x100;                                                // 0x001c3e1c: addiu $v1, $zero, -0x100
    if (v0 == v1) goto label_0x1c3ec4;                          // 0x001c3e20: beq $v0, $v1, 0x1c3ec4
    v1 = -0xfe;                                                 // 0x001c3e24: addiu $v1, $zero, -0xfe
    if (v0 == v1) goto label_0x1c3e84;                          // 0x001c3e28: beq $v0, $v1, 0x1c3e84
    /* nop */                                                   // 0x001c3e2c: nop 
    v1 = -0xfd;                                                 // 0x001c3e30: addiu $v1, $zero, -0xfd
    if (v0 == v1) goto label_0x1c3e44;                          // 0x001c3e34: beq $v0, $v1, 0x1c3e44
    /* nop */                                                   // 0x001c3e38: nop 
    goto label_0x1c3fa4;                                        // 0x001c3e3c: b 0x1c3fa4
    v1 = v0 & 0xff;                                             // 0x001c3e40: andi $v1, $v0, 0xff
label_0x1c3e44:
    *(uint32_t*)((s0) + 0xf8) = 0;                              // 0x001c3e44: sw $zero, 0xf8($s0)
    v0 = 0xa;                                                   // 0x001c3e48: addiu $v0, $zero, 0xa
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c3e4c: sw $v0, 0x2c($s0)
    v1 = 1;                                                     // 0x001c3e50: addiu $v1, $zero, 1
    v0 = 2;                                                     // 0x001c3e54: addiu $v0, $zero, 2
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c3e58: sb $v0, 2($s0)
    *(uint8_t*)((s0) + 3) = v1;                                 // 0x001c3e5c: sb $v1, 3($s0)
    v0 = 5;                                                     // 0x001c3e60: addiu $v0, $zero, 5
    *(uint32_t*)((s0) + 0x3c) = 0;                              // 0x001c3e64: sw $zero, 0x3c($s0)
    *(uint32_t*)((s0) + 0x30) = v1;                             // 0x001c3e68: sw $v1, 0x30($s0)
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c3e6c: sw $v1, 0x38($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c3e70: sw $v0, 0x10($s0)
    func_001bfc20();  // 1bfc20                                // 0x001c3e74: jal 0x1bfc20
    *(uint32_t*)((s0) + 0xf8) = 0;                              // 0x001c3e78: sw $zero, 0xf8($s0)
    goto label_0x1c400c;                                        // 0x001c3e7c: b 0x1c400c
    *(uint32_t*)((s0) + 0xe0) = 0;                              // 0x001c3e80: sw $zero, 0xe0($s0)
label_0x1c3e84:
    *(uint32_t*)((s0) + 0xf8) = 0;                              // 0x001c3e84: sw $zero, 0xf8($s0)
    v0 = 0xe;                                                   // 0x001c3e88: addiu $v0, $zero, 0xe
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c3e8c: sw $v0, 0x2c($s0)
    v1 = 1;                                                     // 0x001c3e90: addiu $v1, $zero, 1
    v0 = 2;                                                     // 0x001c3e94: addiu $v0, $zero, 2
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c3e98: sb $v0, 2($s0)
    *(uint8_t*)((s0) + 3) = v1;                                 // 0x001c3e9c: sb $v1, 3($s0)
    v0 = 5;                                                     // 0x001c3ea0: addiu $v0, $zero, 5
    *(uint32_t*)((s0) + 0x3c) = v1;                             // 0x001c3ea4: sw $v1, 0x3c($s0)
    *(uint32_t*)((s0) + 0x30) = v1;                             // 0x001c3ea8: sw $v1, 0x30($s0)
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c3eac: sw $v1, 0x38($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c3eb0: sw $v0, 0x10($s0)
    func_001bfc20();  // 1bfc20                                // 0x001c3eb4: jal 0x1bfc20
    *(uint32_t*)((s0) + 0xf8) = 0;                              // 0x001c3eb8: sw $zero, 0xf8($s0)
    goto label_0x1c400c;                                        // 0x001c3ebc: b 0x1c400c
    *(uint32_t*)((s0) + 0xe0) = 0;                              // 0x001c3ec0: sw $zero, 0xe0($s0)
label_0x1c3ec4:
    v0 = 9;                                                     // 0x001c3ec4: addiu $v0, $zero, 9
    v1 = 0x63;                                                  // 0x001c3ec8: addiu $v1, $zero, 0x63
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c3ecc: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c3ed0: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c3ed4: sb $v1, 2($s0)
    goto label_0x1c400c;                                        // 0x001c3ed8: b 0x1c400c
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c3edc: sw $v0, 0x34($s0)
label_0x1c3ee0:
    func_001c0bf0();  // 1c0bf0                                // 0x001c3ee0: jal 0x1c0bf0
    /* nop */                                                   // 0x001c3ee4: nop 
    func_001c6e20();  // 1c6e20                                // 0x001c3ee8: jal 0x1c6e20
    if (v0 != 0) goto label_0x1c3f54;                           // 0x001c3ef0: bnez $v0, 0x1c3f54
    /* nop */                                                   // 0x001c3ef4: nop 
    func_001c7480();  // 1c7480                                // 0x001c3ef8: jal 0x1c7480
    a0 = *(int32_t*)((s0) + 0xec);                              // 0x001c3efc: lw $a0, 0xec($s0)
    if (v0 == 0) goto label_0x1c3f54;                           // 0x001c3f00: beqz $v0, 0x1c3f54
    /* nop */                                                   // 0x001c3f04: nop 
    v0 = 0x3a;                                                  // 0x001c3f08: addiu $v0, $zero, 0x3a
    a0 = 2;                                                     // 0x001c3f0c: addiu $a0, $zero, 2
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c3f10: sw $v0, 0x2c($s0)
    v1 = 1;                                                     // 0x001c3f14: addiu $v1, $zero, 1
    *(uint8_t*)((s0) + 2) = a0;                                 // 0x001c3f18: sb $a0, 2($s0)
    v0 = 5;                                                     // 0x001c3f1c: addiu $v0, $zero, 5
    *(uint8_t*)((s0) + 3) = v1;                                 // 0x001c3f20: sb $v1, 3($s0)
    *(uint32_t*)((s0) + 0x3c) = a0;                             // 0x001c3f24: sw $a0, 0x3c($s0)
    *(uint32_t*)((s0) + 0x30) = v1;                             // 0x001c3f28: sw $v1, 0x30($s0)
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c3f2c: sw $v1, 0x38($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c3f30: sw $v0, 0x10($s0)
    func_001bfc20();  // 1bfc20                                // 0x001c3f34: jal 0x1bfc20
    *(uint32_t*)((s0) + 0xf8) = v1;                             // 0x001c3f38: sw $v1, 0xf8($s0)
    a0 = 0x1c << 16;                                            // 0x001c3f3c: lui $a0, 0x1c
    *(uint32_t*)((s0) + 0xe0) = 0;                              // 0x001c3f40: sw $zero, 0xe0($s0)
    func_001af280();  // 1af280                                // 0x001c3f44: jal 0x1af280
    a0 = a0 + 0x65f0;                                           // 0x001c3f48: addiu $a0, $a0, 0x65f0
    goto label_0x1c4010;                                        // 0x001c3f4c: b 0x1c4010
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c3f50: lw $v0, -0x64d8($gp)
label_0x1c3f54:
    v0 = 1;                                                     // 0x001c3f54: addiu $v0, $zero, 1
    v1 = 7;                                                     // 0x001c3f58: addiu $v1, $zero, 7
    *(uint32_t*)((s0) + 0xf8) = v0;                             // 0x001c3f5c: sw $v0, 0xf8($s0)
    v0 = 0x3b;                                                  // 0x001c3f64: addiu $v0, $zero, 0x3b
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c3f68: sb $v1, 2($s0)
    func_001c6b00();  // 1c6b00                                // 0x001c3f6c: jal 0x1c6b00
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c3f70: sw $v0, 0x2c($s0)
    a1 = *(int32_t*)((s0) + 0xf8);                              // 0x001c3f74: lw $a1, 0xf8($s0)
    func_001c6af0();  // 1c6af0                                // 0x001c3f78: jal 0x1c6af0
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c3f80: lw $a0, 0x24($s0)
    func_001c0320();  // 1c0320                                // 0x001c3f84: jal 0x1c0320
    a0 = 1;                                                     // 0x001c3f8c: addiu $a0, $zero, 1
    func_001bfcb0();  // 1bfcb0                                // 0x001c3f90: jal 0x1bfcb0
    goto label_0x1c400c;                                        // 0x001c3f98: b 0x1c400c
    /* nop */                                                   // 0x001c3f9c: nop 
label_0x1c3fa0:
    v1 = v0 & 0xff;                                             // 0x001c3fa0: andi $v1, $v0, 0xff
label_0x1c3fa4:
    v0 = 0x63;                                                  // 0x001c3fa4: addiu $v0, $zero, 0x63
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c3fa8: sb $v0, 2($s0)
    *(uint32_t*)((s0) + 0x34) = v1;                             // 0x001c3fac: sw $v1, 0x34($s0)
    v0 = 4;                                                     // 0x001c3fb0: addiu $v0, $zero, 4
    v1 = *(int32_t*)((s0) + 0x34);                              // 0x001c3fb4: lw $v1, 0x34($s0)
    if (v1 == v0) goto label_0x1c4004;                          // 0x001c3fb8: beq $v1, $v0, 0x1c4004
    /* nop */                                                   // 0x001c3fbc: nop 
    v0 = 3;                                                     // 0x001c3fc0: addiu $v0, $zero, 3
    if (v1 == v0) goto label_0x1c3ffc;                          // 0x001c3fc4: beq $v1, $v0, 0x1c3ffc
    v0 = 7;                                                     // 0x001c3fc8: addiu $v0, $zero, 7
    v0 = 2;                                                     // 0x001c3fcc: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1c3ff4;                          // 0x001c3fd0: beq $v1, $v0, 0x1c3ff4
    v0 = 6;                                                     // 0x001c3fd4: addiu $v0, $zero, 6
    v0 = 1;                                                     // 0x001c3fd8: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1c3fec;                          // 0x001c3fdc: beq $v1, $v0, 0x1c3fec
    v0 = 5;                                                     // 0x001c3fe0: addiu $v0, $zero, 5
    goto label_0x1c400c;                                        // 0x001c3fe4: b 0x1c400c
    /* nop */                                                   // 0x001c3fe8: nop 
label_0x1c3fec:
    goto label_0x1c400c;                                        // 0x001c3fec: b 0x1c400c
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c3ff0: sw $v0, 0x2c($s0)
label_0x1c3ff4:
    goto label_0x1c400c;                                        // 0x001c3ff4: b 0x1c400c
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c3ff8: sw $v0, 0x2c($s0)
label_0x1c3ffc:
    goto label_0x1c400c;                                        // 0x001c3ffc: b 0x1c400c
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c4000: sw $v0, 0x2c($s0)
label_0x1c4004:
    v0 = 0x17;                                                  // 0x001c4004: addiu $v0, $zero, 0x17
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c4008: sw $v0, 0x2c($s0)
label_0x1c400c:
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c400c: lw $v0, -0x64d8($gp)
label_0x1c4010:
    goto label_0x1c44a8;                                        // 0x001c4010: b 0x1c44a8
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x001c4014: sw $v0, 0x14($s0)
label_0x1c4018:
    v1 = *(int8_t*)((s0) + 3);                                  // 0x001c4018: lb $v1, 3($s0)
    v0 = 1;                                                     // 0x001c401c: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1c4054;                          // 0x001c4020: beq $v1, $v0, 0x1c4054
    if (v1 == 0) goto label_0x1c4038;                           // 0x001c4028: beqz $v1, 0x1c4038
    /* nop */                                                   // 0x001c402c: nop 
    goto label_0x1c44a8;                                        // 0x001c4030: b 0x1c44a8
    /* nop */                                                   // 0x001c4034: nop 
label_0x1c4038:
    func_001bfc20();  // 1bfc20                                // 0x001c4038: jal 0x1bfc20
    /* nop */                                                   // 0x001c403c: nop 
    *(uint32_t*)((s0) + 0xe0) = 0;                              // 0x001c4040: sw $zero, 0xe0($s0)
    v0 = *(int8_t*)((s0) + 3);                                  // 0x001c4044: lb $v0, 3($s0)
    v0 = v0 + 1;                                                // 0x001c4048: addiu $v0, $v0, 1
    goto label_0x1c44a8;                                        // 0x001c404c: b 0x1c44a8
    *(uint8_t*)((s0) + 3) = v0;                                 // 0x001c4050: sb $v0, 3($s0)
label_0x1c4054:
    func_001c0bd0();  // 1c0bd0                                // 0x001c4054: jal 0x1c0bd0
    /* nop */                                                   // 0x001c4058: nop 
    if (v0 != 0) goto label_0x1c4094;                           // 0x001c405c: bnez $v0, 0x1c4094
    a0 = 0x1c << 16;                                            // 0x001c4064: lui $a0, 0x1c
    func_001af2f0();  // 1af2f0                                // 0x001c4068: jal 0x1af2f0
    a0 = a0 + 0x65f0;                                           // 0x001c406c: addiu $a0, $a0, 0x65f0
    a0 = 1;                                                     // 0x001c4070: addiu $a0, $zero, 1
    v1 = 5;                                                     // 0x001c4074: addiu $v1, $zero, 5
    *(uint32_t*)((s0) + 0xe0) = a0;                             // 0x001c4078: sw $a0, 0xe0($s0)
    v0 = 0x62;                                                  // 0x001c407c: addiu $v0, $zero, 0x62
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c4080: sw $v1, 0x2c($s0)
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c4084: sb $v0, 2($s0)
    *(uint32_t*)((s0) + 0x34) = a0;                             // 0x001c4088: sw $a0, 0x34($s0)
    goto label_0x1c44a8;                                        // 0x001c408c: b 0x1c44a8
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x001c4090: sw $zero, 0x30($s0)
label_0x1c4094:
    func_001c47c0();  // 1c47c0                                // 0x001c4094: jal 0x1c47c0
    /* nop */                                                   // 0x001c4098: nop 
    if (v0 == 0) goto label_0x1c41e8;                           // 0x001c409c: beqz $v0, 0x1c41e8
    /* nop */                                                   // 0x001c40a0: nop 
    func_001c7460();  // 1c7460                                // 0x001c40a4: jal 0x1c7460
    /* nop */                                                   // 0x001c40a8: nop 
    a0 = 0x1c << 16;                                            // 0x001c40ac: lui $a0, 0x1c
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x001c40b0: sw $zero, 0x30($s0)
    func_001af2f0();  // 1af2f0                                // 0x001c40b4: jal 0x1af2f0
    a0 = a0 + 0x65f0;                                           // 0x001c40b8: addiu $a0, $a0, 0x65f0
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x001c40bc: lw $v0, 0x38($s0)
    if (v0 != 0) goto label_0x1c41e0;                           // 0x001c40c0: bnez $v0, 0x1c41e0
    v1 = *(int32_t*)((s0) + 0x3c);                              // 0x001c40c8: lw $v1, 0x3c($s0)
    v0 = 2;                                                     // 0x001c40cc: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1c4190;                          // 0x001c40d0: beq $v1, $v0, 0x1c4190
    v0 = 1;                                                     // 0x001c40d4: addiu $v0, $zero, 1
    v0 = 1;                                                     // 0x001c40d8: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1c4170;                          // 0x001c40dc: beq $v1, $v0, 0x1c4170
    /* nop */                                                   // 0x001c40e0: nop 
    if (v1 == 0) goto label_0x1c40f4;                           // 0x001c40e4: beqz $v1, 0x1c40f4
    /* nop */                                                   // 0x001c40e8: nop 
    goto label_0x1c41d4;                                        // 0x001c40ec: b 0x1c41d4
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c40f0: lw $v0, -0x64d8($gp)
label_0x1c40f4:
    func_001c0bc0();  // 1c0bc0                                // 0x001c40f4: jal 0x1c0bc0
    /* nop */                                                   // 0x001c40f8: nop 
    v1 = -0xfe;                                                 // 0x001c40fc: addiu $v1, $zero, -0xfe
    if (v0 != v1) goto label_0x1c4148;                          // 0x001c4100: bne $v0, $v1, 0x1c4148
    v1 = 5;                                                     // 0x001c4104: addiu $v1, $zero, 5
    *(uint32_t*)((s0) + 0xf8) = 0;                              // 0x001c4108: sw $zero, 0xf8($s0)
    v0 = 0xe;                                                   // 0x001c410c: addiu $v0, $zero, 0xe
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c4110: sw $v0, 0x2c($s0)
    v1 = 1;                                                     // 0x001c4114: addiu $v1, $zero, 1
    v0 = 2;                                                     // 0x001c4118: addiu $v0, $zero, 2
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c411c: sb $v0, 2($s0)
    *(uint8_t*)((s0) + 3) = v1;                                 // 0x001c4120: sb $v1, 3($s0)
    v0 = 5;                                                     // 0x001c4124: addiu $v0, $zero, 5
    *(uint32_t*)((s0) + 0x3c) = v1;                             // 0x001c4128: sw $v1, 0x3c($s0)
    *(uint32_t*)((s0) + 0x30) = v1;                             // 0x001c412c: sw $v1, 0x30($s0)
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c4130: sw $v1, 0x38($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c4134: sw $v0, 0x10($s0)
    func_001bfc20();  // 1bfc20                                // 0x001c4138: jal 0x1bfc20
    *(uint32_t*)((s0) + 0xf8) = 0;                              // 0x001c413c: sw $zero, 0xf8($s0)
    goto label_0x1c41d0;                                        // 0x001c4140: b 0x1c41d0
    *(uint32_t*)((s0) + 0xe0) = 0;                              // 0x001c4144: sw $zero, 0xe0($s0)
label_0x1c4148:
    v0 = 0x14;                                                  // 0x001c4148: addiu $v0, $zero, 0x14
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c414c: sb $v1, 2($s0)
    func_001c6be0();  // 1c6be0                                // 0x001c4154: jal 0x1c6be0
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c4158: sw $v0, 0x2c($s0)
    a1 = *(int32_t*)((s0) + 0xe8);                              // 0x001c415c: lw $a1, 0xe8($s0)
    func_001c0320();  // 1c0320                                // 0x001c4160: jal 0x1c0320
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c4164: lw $a0, 0x24($s0)
    goto label_0x1c41d0;                                        // 0x001c4168: b 0x1c41d0
    /* nop */                                                   // 0x001c416c: nop 
label_0x1c4170:
    v1 = 4;                                                     // 0x001c4170: addiu $v1, $zero, 4
    v0 = 0xf;                                                   // 0x001c4174: addiu $v0, $zero, 0xf
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c4178: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c417c: sw $v0, 0x2c($s0)
    func_001c0720();  // 1c0720                                // 0x001c4180: jal 0x1c0720
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c4184: lw $a0, 0x24($s0)
    goto label_0x1c41d0;                                        // 0x001c4188: b 0x1c41d0
    /* nop */                                                   // 0x001c418c: nop 
label_0x1c4190:
    v1 = 7;                                                     // 0x001c4190: addiu $v1, $zero, 7
    *(uint32_t*)((s0) + 0xf8) = v0;                             // 0x001c4194: sw $v0, 0xf8($s0)
    v0 = 0x3b;                                                  // 0x001c419c: addiu $v0, $zero, 0x3b
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c41a0: sb $v1, 2($s0)
    func_001c6b00();  // 1c6b00                                // 0x001c41a4: jal 0x1c6b00
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c41a8: sw $v0, 0x2c($s0)
    a1 = *(int32_t*)((s0) + 0xf8);                              // 0x001c41ac: lw $a1, 0xf8($s0)
    func_001c6af0();  // 1c6af0                                // 0x001c41b0: jal 0x1c6af0
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c41b8: lw $a0, 0x24($s0)
    func_001c0320();  // 1c0320                                // 0x001c41bc: jal 0x1c0320
    a0 = 1;                                                     // 0x001c41c4: addiu $a0, $zero, 1
    func_001bfcb0();  // 1bfcb0                                // 0x001c41c8: jal 0x1bfcb0
label_0x1c41d0:
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c41d0: lw $v0, -0x64d8($gp)
label_0x1c41d4:
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x001c41d4: sw $v0, 0x14($s0)
    goto label_0x1c44a8;                                        // 0x001c41d8: b 0x1c44a8
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c41dc: sw $v0, 0x10($s0)
label_0x1c41e0:
    goto label_0x1c44b0;                                        // 0x001c41e0: b 0x1c44b0
label_0x1c41e8:
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x001c41e8: lw $v0, 0x10($s0)
    if (v0 == 0) goto label_0x1c4200;                           // 0x001c41ec: beqz $v0, 0x1c4200
    /* nop */                                                   // 0x001c41f0: nop 
    v0 = v0 + -1;                                               // 0x001c41f4: addiu $v0, $v0, -1
    goto label_0x1c44a8;                                        // 0x001c41f8: b 0x1c44a8
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c41fc: sw $v0, 0x10($s0)
label_0x1c4200:
    v1 = *(uint16_t*)((s0) + 0xa);                              // 0x001c4200: lhu $v1, 0xa($s0)
    v0 = v1 & 8;                                                // 0x001c4204: andi $v0, $v1, 8
    if (v0 == 0) goto label_0x1c4220;                           // 0x001c4208: beqz $v0, 0x1c4220
    v0 = v1 & 4;                                                // 0x001c420c: andi $v0, $v1, 4
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x001c4210: lw $v0, 0x38($s0)
    if (v0 == 0) goto label_0x1c4238;                           // 0x001c4214: beqz $v0, 0x1c4238
    /* nop */                                                   // 0x001c4218: nop 
    v0 = v1 & 4;                                                // 0x001c421c: andi $v0, $v1, 4
label_0x1c4220:
    if (v0 == 0) goto label_0x1c44a8;                           // 0x001c4220: beqz $v0, 0x1c44a8
    /* nop */                                                   // 0x001c4224: nop 
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c4228: lw $v1, 0x38($s0)
    v0 = 1;                                                     // 0x001c422c: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1c44a8;                          // 0x001c4230: bne $v1, $v0, 0x1c44a8
    /* nop */                                                   // 0x001c4234: nop 
label_0x1c4238:
    func_001c7470();  // 1c7470                                // 0x001c4238: jal 0x1c7470
    /* nop */                                                   // 0x001c423c: nop 
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c4240: lw $v1, 0x38($s0)
    v0 = 5;                                                     // 0x001c4244: addiu $v0, $zero, 5
    v1 = v1 ^ 1;                                                // 0x001c4248: xori $v1, $v1, 1
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c424c: sw $v1, 0x38($s0)
    goto label_0x1c44a8;                                        // 0x001c4250: b 0x1c44a8
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c4254: sw $v0, 0x10($s0)
label_0x1c4258:
    func_001c0bc0();  // 1c0bc0                                // 0x001c4258: jal 0x1c0bc0
    /* nop */                                                   // 0x001c425c: nop 
    v1 = -1;                                                    // 0x001c4260: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1c42d4;                          // 0x001c4264: beq $v0, $v1, 0x1c42d4
    v1 = -0x100;                                                // 0x001c4268: addiu $v1, $zero, -0x100
    if (v0 == v1) goto label_0x1c42ac;                          // 0x001c426c: beq $v0, $v1, 0x1c42ac
    /* nop */                                                   // 0x001c4270: nop 
    if (v0 == 0) goto label_0x1c4284;                           // 0x001c4274: beqz $v0, 0x1c4284
    v1 = 5;                                                     // 0x001c4278: addiu $v1, $zero, 5
    goto label_0x1c42c8;                                        // 0x001c427c: b 0x1c42c8
    v1 = 0x63;                                                  // 0x001c4280: addiu $v1, $zero, 0x63
label_0x1c4284:
    v0 = 0x14;                                                  // 0x001c4284: addiu $v0, $zero, 0x14
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c4288: sb $v1, 2($s0)
    func_001c6be0();  // 1c6be0                                // 0x001c4290: jal 0x1c6be0
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c4294: sw $v0, 0x2c($s0)
    a1 = *(int32_t*)((s0) + 0xe8);                              // 0x001c4298: lw $a1, 0xe8($s0)
    func_001c0320();  // 1c0320                                // 0x001c429c: jal 0x1c0320
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c42a0: lw $a0, 0x24($s0)
    goto label_0x1c42d8;                                        // 0x001c42a4: b 0x1c42d8
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c42a8: lw $v0, -0x64d8($gp)
label_0x1c42ac:
    v0 = 0x10;                                                  // 0x001c42ac: addiu $v0, $zero, 0x10
    v1 = 0x62;                                                  // 0x001c42b0: addiu $v1, $zero, 0x62
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c42b4: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c42b8: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c42bc: sb $v1, 2($s0)
    goto label_0x1c42d4;                                        // 0x001c42c0: b 0x1c42d4
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c42c4: sw $v0, 0x34($s0)
label_0x1c42c8:
    v0 = v0 & 0xff;                                             // 0x001c42c8: andi $v0, $v0, 0xff
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c42cc: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c42d0: sw $v0, 0x34($s0)
label_0x1c42d4:
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c42d4: lw $v0, -0x64d8($gp)
label_0x1c42d8:
    goto label_0x1c44a8;                                        // 0x001c42d8: b 0x1c44a8
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x001c42dc: sw $v0, 0x14($s0)
label_0x1c42e0:
    func_001c0bc0();  // 1c0bc0                                // 0x001c42e0: jal 0x1c0bc0
    /* nop */                                                   // 0x001c42e4: nop 
    v1 = -1;                                                    // 0x001c42e8: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1c4394;                          // 0x001c42ec: beq $v0, $v1, 0x1c4394
    v1 = -0xfe;                                                 // 0x001c42f0: addiu $v1, $zero, -0xfe
    if (v0 == v1) goto label_0x1c436c;                          // 0x001c42f4: beq $v0, $v1, 0x1c436c
    /* nop */                                                   // 0x001c42f8: nop 
    v1 = -0x100;                                                // 0x001c42fc: addiu $v1, $zero, -0x100
    if (v0 == v1) goto label_0x1c4350;                          // 0x001c4300: beq $v0, $v1, 0x1c4350
    /* nop */                                                   // 0x001c4304: nop 
    if (v0 == 0) goto label_0x1c4318;                           // 0x001c4308: beqz $v0, 0x1c4318
    v1 = 1;                                                     // 0x001c430c: addiu $v1, $zero, 1
    goto label_0x1c3fa0;                                        // 0x001c4310: b 0x1c3fa0
    /* nop */                                                   // 0x001c4314: nop 
label_0x1c4318:
    v0 = 7;                                                     // 0x001c4318: addiu $v0, $zero, 7
    *(uint32_t*)((s0) + 0xf8) = v1;                             // 0x001c431c: sw $v1, 0xf8($s0)
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c4320: sb $v0, 2($s0)
    a1 = *(int32_t*)((s0) + 0xf8);                              // 0x001c4324: lw $a1, 0xf8($s0)
    func_001c6af0();  // 1c6af0                                // 0x001c4328: jal 0x1c6af0
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c4330: lw $a0, 0x24($s0)
    func_001c0320();  // 1c0320                                // 0x001c4334: jal 0x1c0320
    a0 = 1;                                                     // 0x001c433c: addiu $a0, $zero, 1
    func_001bfcb0();  // 1bfcb0                                // 0x001c4340: jal 0x1bfcb0
    goto label_0x1c4394;                                        // 0x001c4348: b 0x1c4394
    *(uint32_t*)((s0) + 0x34) = 0;                              // 0x001c434c: sw $zero, 0x34($s0)
label_0x1c4350:
    v0 = 0x16;                                                  // 0x001c4350: addiu $v0, $zero, 0x16
    v1 = 0x62;                                                  // 0x001c4354: addiu $v1, $zero, 0x62
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c4358: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c435c: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c4360: sb $v1, 2($s0)
    goto label_0x1c4394;                                        // 0x001c4364: b 0x1c4394
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c4368: sw $v0, 0x34($s0)
label_0x1c436c:
    v1 = 0xe;                                                   // 0x001c436c: addiu $v1, $zero, 0xe
    v0 = 2;                                                     // 0x001c4370: addiu $v0, $zero, 2
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c4374: sw $v1, 0x2c($s0)
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c4378: sb $v0, 2($s0)
    v1 = 1;                                                     // 0x001c437c: addiu $v1, $zero, 1
    *(uint32_t*)((s0) + 0x3c) = v1;                             // 0x001c4380: sw $v1, 0x3c($s0)
    v0 = 5;                                                     // 0x001c4384: addiu $v0, $zero, 5
    *(uint32_t*)((s0) + 0x30) = v1;                             // 0x001c4388: sw $v1, 0x30($s0)
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c438c: sw $v1, 0x38($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c4390: sw $v0, 0x10($s0)
label_0x1c4394:
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c4394: lw $v0, -0x64d8($gp)
    goto label_0x1c44a8;                                        // 0x001c4398: b 0x1c44a8
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x001c439c: sw $v0, 0x14($s0)
label_0x1c43a0:
    func_001c0bc0();  // 1c0bc0                                // 0x001c43a0: jal 0x1c0bc0
    /* nop */                                                   // 0x001c43a4: nop 
    v1 = -1;                                                    // 0x001c43a8: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1c4444;                          // 0x001c43ac: beq $v0, $v1, 0x1c4444
    v1 = -0xfe;                                                 // 0x001c43b0: addiu $v1, $zero, -0xfe
    if (v0 == v1) goto label_0x1c441c;                          // 0x001c43b4: beq $v0, $v1, 0x1c441c
    /* nop */                                                   // 0x001c43b8: nop 
    v1 = -0x100;                                                // 0x001c43bc: addiu $v1, $zero, -0x100
    if (v0 == v1) goto label_0x1c4400;                          // 0x001c43c0: beq $v0, $v1, 0x1c4400
    /* nop */                                                   // 0x001c43c4: nop 
    if (v0 == 0) goto label_0x1c43d8;                           // 0x001c43c8: beqz $v0, 0x1c43d8
    v1 = 0x3f;                                                  // 0x001c43cc: addiu $v1, $zero, 0x3f
    goto label_0x1c3fa0;                                        // 0x001c43d0: b 0x1c3fa0
    /* nop */                                                   // 0x001c43d4: nop 
label_0x1c43d8:
    v0 = 0x61;                                                  // 0x001c43d8: addiu $v0, $zero, 0x61
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c43dc: sw $v1, 0x2c($s0)
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c43e0: sb $v0, 2($s0)
    func_001c0bf0();  // 1c0bf0                                // 0x001c43e4: jal 0x1c0bf0
    *(uint32_t*)((s0) + 0x34) = 0;                              // 0x001c43e8: sw $zero, 0x34($s0)
    at = 0x31 << 16;                                            // 0x001c43ec: lui $at, 0x31
    v0 = 0x1e;                                                  // 0x001c43f0: addiu $v0, $zero, 0x1e
    g_0031387c = 0;  // Global at 0x0031387c                    // 0x001c43f4: sb $zero, 0x387c($at)
    goto label_0x1c4444;                                        // 0x001c43f8: b 0x1c4444
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c43fc: sw $v0, 0x10($s0)
label_0x1c4400:
    v0 = 0x16;                                                  // 0x001c4400: addiu $v0, $zero, 0x16
    v1 = 0x62;                                                  // 0x001c4404: addiu $v1, $zero, 0x62
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c4408: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c440c: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c4410: sb $v1, 2($s0)
    goto label_0x1c4444;                                        // 0x001c4414: b 0x1c4444
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c4418: sw $v0, 0x34($s0)
label_0x1c441c:
    v1 = 0xe;                                                   // 0x001c441c: addiu $v1, $zero, 0xe
    v0 = 2;                                                     // 0x001c4420: addiu $v0, $zero, 2
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c4424: sw $v1, 0x2c($s0)
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c4428: sb $v0, 2($s0)
    v1 = 1;                                                     // 0x001c442c: addiu $v1, $zero, 1
    *(uint32_t*)((s0) + 0x3c) = v1;                             // 0x001c4430: sw $v1, 0x3c($s0)
    v0 = 5;                                                     // 0x001c4434: addiu $v0, $zero, 5
    *(uint32_t*)((s0) + 0x30) = v1;                             // 0x001c4438: sw $v1, 0x30($s0)
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c443c: sw $v1, 0x38($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c4440: sw $v0, 0x10($s0)
label_0x1c4444:
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c4444: lw $v0, -0x64d8($gp)
    goto label_0x1c44a8;                                        // 0x001c4448: b 0x1c44a8
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x001c444c: sw $v0, 0x14($s0)
label_0x1c4450:
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x001c4450: lw $v0, 0x10($s0)
    v0 = v0 + -1;                                               // 0x001c4454: addiu $v0, $v0, -1
    if (v0 != 0) goto label_0x1c44a8;                           // 0x001c4458: bnez $v0, 0x1c44a8
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c445c: sw $v0, 0x10($s0)
    goto label_0x1c44ac;                                        // 0x001c4460: b 0x1c44ac
label_0x1c4468:
    v0 = *(uint16_t*)((s0) + 0xa);                              // 0x001c4468: lhu $v0, 0xa($s0)
    v0 = v0 & 0xfff0;                                           // 0x001c446c: andi $v0, $v0, 0xfff0
    if (v0 == 0) goto label_0x1c44a8;                           // 0x001c4470: beqz $v0, 0x1c44a8
    /* nop */                                                   // 0x001c4474: nop 
    func_001c7460();  // 1c7460                                // 0x001c4478: jal 0x1c7460
    /* nop */                                                   // 0x001c447c: nop 
    goto label_0x1c44ac;                                        // 0x001c4480: b 0x1c44ac
label_0x1c4488:
    v0 = *(uint16_t*)((s0) + 0xa);                              // 0x001c4488: lhu $v0, 0xa($s0)
    v0 = v0 & 0xfff0;                                           // 0x001c448c: andi $v0, $v0, 0xfff0
    if (v0 == 0) goto label_0x1c44a8;                           // 0x001c4490: beqz $v0, 0x1c44a8
    /* nop */                                                   // 0x001c4494: nop 
    func_001c7460();  // 1c7460                                // 0x001c4498: jal 0x1c7460
    /* nop */                                                   // 0x001c449c: nop 
    goto label_0x1c44ac;                                        // 0x001c44a0: b 0x1c44ac
label_0x1c44a8:
    v0 = 1;                                                     // 0x001c44a8: addiu $v0, $zero, 1
label_0x1c44ac:
label_0x1c44b0:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c44b0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c44b4: jr $ra
    sp = sp + 0x20;                                             // 0x001c44b8: addiu $sp, $sp, 0x20
}