void func_001d1c60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x90;                                            // 0x001d1c60: addiu $sp, $sp, -0x90
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x001d1c68: dps.w.ph $ac0, $sp, $s7
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001d1c74: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d1c84: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d1c94: addu.qb $zero, $sp, $s1
    func_001d1050();  // 0x1d0fa0                                // 0x001d1ca4: jal 0x1d0fa0
    if (v0 >= 0) goto label_0x1d1ce4;                           // 0x001d1cac: bgez $v0, 0x1d1ce4
    at = 0x33 << 16;                                            // 0x001d1cb0: lui $at, 0x33
    v0 = -0x51;                                                 // 0x001d1cb4: addiu $v0, $zero, -0x51
    v1 = 2;                                                     // 0x001d1cb8: addiu $v1, $zero, 2
    *(uint8_t*)(s7) = v0;                                       // 0x001d1cbc: sb $v0, 0($s7)
    *(uint8_t*)(s6) = v1;                                       // 0x001d1cc0: sb $v1, 0($s6)
    *(uint8_t*)(s5) = 0;                                        // 0x001d1cc8: sb $zero, 0($s5)
    *(uint8_t*)(s4) = 0;                                        // 0x001d1ccc: sb $zero, 0($s4)
    *(uint16_t*)(s3) = 0;                                       // 0x001d1cd0: sh $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d1cd4: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d1cd8: sh $zero, 0($s1)
    goto label_0x1d286c;                                        // 0x001d1cdc: b 0x1d286c
    *(uint16_t*)(s0) = 0;                                       // 0x001d1ce0: sh $zero, 0($s0)
label_0x1d1ce4:
    v1 = g_0032ceac;  // Global at 0x0032ceac                   // 0x001d1ce4: lbu $v1, -0x3154($at)
    at = 0x33 << 16;                                            // 0x001d1ce8: lui $at, 0x33
    v0 = g_0032cead;  // Global at 0x0032cead                   // 0x001d1cec: lbu $v0, -0x3153($at)
    at = (v0 < v1) ? 1 : 0;                                     // 0x001d1cf0: slt $at, $v0, $v1
    if (at == 0) goto label_0x1d1d00;                           // 0x001d1cf4: beqz $at, 0x1d1d00
    /* nop */                                                   // 0x001d1cf8: nop 
    v1 = v0 + 1;                                                // 0x001d1cfc: addiu $v1, $v0, 1
label_0x1d1d00:
    at = 0x33 << 16;                                            // 0x001d1d00: lui $at, 0x33
    a0 = 0x64;                                                  // 0x001d1d04: addiu $a0, $zero, 0x64
    g_0032cead = v1;  // Global at 0x0032cead                   // 0x001d1d08: sb $v1, -0x3153($at)
    v1 = *(int8_t*)(s5);                                        // 0x001d1d0c: lb $v1, 0($s5)
    if (v1 == a0) goto label_0x1d2824;                          // 0x001d1d10: beq $v1, $a0, 0x1d2824
    v0 = 0x63;                                                  // 0x001d1d14: addiu $v0, $zero, 0x63
    if (v1 == v0) goto label_0x1d280c;                          // 0x001d1d18: beq $v1, $v0, 0x1d280c
    /* nop */                                                   // 0x001d1d1c: nop 
    v0 = 0x1f;                                                  // 0x001d1d20: addiu $v0, $zero, 0x1f
    if (v1 == v0) goto label_0x1d27d8;                          // 0x001d1d24: beq $v1, $v0, 0x1d27d8
    at = 0x33 << 16;                                            // 0x001d1d28: lui $at, 0x33
    v0 = 0x1e;                                                  // 0x001d1d2c: addiu $v0, $zero, 0x1e
    if (v1 == v0) goto label_0x1d2748;                          // 0x001d1d30: beq $v1, $v0, 0x1d2748
    a0 = 0x18;                                                  // 0x001d1d38: addiu $a0, $zero, 0x18
    if (v1 == a0) goto label_0x1d2614;                          // 0x001d1d3c: beq $v1, $a0, 0x1d2614
    a0 = 0x17;                                                  // 0x001d1d40: addiu $a0, $zero, 0x17
    if (v1 == a0) goto label_0x1d2494;                          // 0x001d1d44: beq $v1, $a0, 0x1d2494
    /* nop */                                                   // 0x001d1d48: nop 
    a0 = 0x16;                                                  // 0x001d1d4c: addiu $a0, $zero, 0x16
    if (v1 == a0) goto label_0x1d23fc;                          // 0x001d1d50: beq $v1, $a0, 0x1d23fc
    a0 = 0x15;                                                  // 0x001d1d54: addiu $a0, $zero, 0x15
    if (v1 == a0) goto label_0x1d22c0;                          // 0x001d1d58: beq $v1, $a0, 0x1d22c0
    a1 = 0x14;                                                  // 0x001d1d5c: addiu $a1, $zero, 0x14
    if (v1 == a1) goto label_0x1d2248;                          // 0x001d1d60: beq $v1, $a1, 0x1d2248
    at = 0x33 << 16;                                            // 0x001d1d64: lui $at, 0x33
    a0 = 0xd;                                                   // 0x001d1d68: addiu $a0, $zero, 0xd
    if (v1 == a0) goto label_0x1d2128;                          // 0x001d1d6c: beq $v1, $a0, 0x1d2128
    a0 = 0xc;                                                   // 0x001d1d70: addiu $a0, $zero, 0xc
    if (v1 == a0) goto label_0x1d1fe4;                          // 0x001d1d74: beq $v1, $a0, 0x1d1fe4
    /* nop */                                                   // 0x001d1d78: nop 
    v0 = 0xb;                                                   // 0x001d1d7c: addiu $v0, $zero, 0xb
    if (v1 == v0) goto label_0x1d1f8c;                          // 0x001d1d80: beq $v1, $v0, 0x1d1f8c
    a0 = 0xa;                                                   // 0x001d1d84: addiu $a0, $zero, 0xa
    if (v1 == a0) goto label_0x1d1f08;                          // 0x001d1d88: beq $v1, $a0, 0x1d1f08
    at = 0x33 << 16;                                            // 0x001d1d8c: lui $at, 0x33
    v0 = 3;                                                     // 0x001d1d90: addiu $v0, $zero, 3
    if (v1 == v0) goto label_0x1d1e8c;                          // 0x001d1d94: beq $v1, $v0, 0x1d1e8c
    v0 = 6;                                                     // 0x001d1d98: addiu $v0, $zero, 6
    v0 = 2;                                                     // 0x001d1d9c: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1d1e2c;                          // 0x001d1da0: beq $v1, $v0, 0x1d1e2c
    at = 0x33 << 16;                                            // 0x001d1da4: lui $at, 0x33
    v0 = 1;                                                     // 0x001d1da8: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1d1de8;                          // 0x001d1dac: beq $v1, $v0, 0x1d1de8
    /* nop */                                                   // 0x001d1db0: nop 
    if (v1 == 0) goto label_0x1d1dc4;                           // 0x001d1db4: beqz $v1, 0x1d1dc4
    /* nop */                                                   // 0x001d1db8: nop 
    goto label_0x1d286c;                                        // 0x001d1dbc: b 0x1d286c
label_0x1d1dc4:
    v1 = v1 + 1;                                                // 0x001d1dc4: addiu $v1, $v1, 1
    *(uint8_t*)(s5) = v1;                                       // 0x001d1dcc: sb $v1, 0($s5)
    *(uint8_t*)(s4) = 0;                                        // 0x001d1dd0: sb $zero, 0($s4)
    *(uint16_t*)(s3) = 0;                                       // 0x001d1dd4: sh $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d1dd8: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d1ddc: sh $zero, 0($s1)
    goto label_0x1d286c;                                        // 0x001d1de0: b 0x1d286c
    *(uint16_t*)(s0) = 0;                                       // 0x001d1de4: sh $zero, 0($s0)
label_0x1d1de8:
    v1 = *(int16_t*)(s3);                                       // 0x001d1de8: lh $v1, 0($s3)
    v0 = v1 + -1;                                               // 0x001d1dec: addiu $v0, $v1, -1
    at = (0 < v1) ? 1 : 0;                                      // 0x001d1df0: slt $at, $zero, $v1
    if (at == 0) goto label_0x1d1e04;                           // 0x001d1df4: beqz $at, 0x1d1e04
    *(uint16_t*)(s3) = v0;                                      // 0x001d1df8: sh $v0, 0($s3)
    goto label_0x1d286c;                                        // 0x001d1dfc: b 0x1d286c
label_0x1d1e04:
    *(uint16_t*)(s3) = 0;                                       // 0x001d1e04: sh $zero, 0($s3)
    at = 0x33 << 16;                                            // 0x001d1e08: lui $at, 0x33
    g_0032ceae = a0;  // Global at 0x0032ceae                   // 0x001d1e0c: sb $a0, -0x3152($at)
    at = 0x33 << 16;                                            // 0x001d1e14: lui $at, 0x33
    g_0032ceac = 0;  // Global at 0x0032ceac                    // 0x001d1e18: sb $zero, -0x3154($at)
    v1 = *(int8_t*)(s5);                                        // 0x001d1e1c: lb $v1, 0($s5)
    v1 = v1 + 1;                                                // 0x001d1e20: addiu $v1, $v1, 1
    goto label_0x1d286c;                                        // 0x001d1e24: b 0x1d286c
    *(uint8_t*)(s5) = v1;                                       // 0x001d1e28: sb $v1, 0($s5)
label_0x1d1e2c:
    g_0032ceac = v0;  // Global at 0x0032ceac                   // 0x001d1e2c: sb $v0, -0x3154($at)
    v0 = *(int32_t*)((gp) + -0x6260);                           // 0x001d1e30: lw $v0, -0x6260($gp)
    a1 = *(int32_t*)((v0) + 4);                                 // 0x001d1e34: lw $a1, 4($v0)
    func_001c8f60();  // 0x1c8e60                                // 0x001d1e38: jal 0x1c8e60
    a0 = *(int32_t*)(v0);                                       // 0x001d1e3c: lw $a0, 0($v0)
    if (v0 >= 0) goto label_0x1d1e78;                           // 0x001d1e40: bgez $v0, 0x1d1e78
    /* nop */                                                   // 0x001d1e44: nop 
    v0 = -0x52;                                                 // 0x001d1e48: addiu $v0, $zero, -0x52
    v1 = 2;                                                     // 0x001d1e4c: addiu $v1, $zero, 2
    *(uint8_t*)(s7) = v0;                                       // 0x001d1e50: sb $v0, 0($s7)
    *(uint8_t*)(s6) = v1;                                       // 0x001d1e54: sb $v1, 0($s6)
    *(uint8_t*)(s5) = 0;                                        // 0x001d1e5c: sb $zero, 0($s5)
    *(uint8_t*)(s4) = 0;                                        // 0x001d1e60: sb $zero, 0($s4)
    *(uint16_t*)(s3) = 0;                                       // 0x001d1e64: sh $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d1e68: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d1e6c: sh $zero, 0($s1)
    goto label_0x1d286c;                                        // 0x001d1e70: b 0x1d286c
    *(uint16_t*)(s0) = 0;                                       // 0x001d1e74: sh $zero, 0($s0)
label_0x1d1e78:
    v1 = *(int8_t*)(s5);                                        // 0x001d1e78: lb $v1, 0($s5)
    v1 = v1 + 1;                                                // 0x001d1e80: addiu $v1, $v1, 1
    goto label_0x1d286c;                                        // 0x001d1e84: b 0x1d286c
    *(uint8_t*)(s5) = v1;                                       // 0x001d1e88: sb $v1, 0($s5)
label_0x1d1e8c:
    at = 0x33 << 16;                                            // 0x001d1e8c: lui $at, 0x33
    func_001c9da0();  // 0x1c9d70                                // 0x001d1e90: jal 0x1c9d70
    g_0032ceac = v0;  // Global at 0x0032ceac                   // 0x001d1e94: sb $v0, -0x3154($at)
    if (v0 >= 0) goto label_0x1d1ed0;                           // 0x001d1e98: bgez $v0, 0x1d1ed0
    /* nop */                                                   // 0x001d1e9c: nop 
    v0 = -0x52;                                                 // 0x001d1ea0: addiu $v0, $zero, -0x52
    v1 = 2;                                                     // 0x001d1ea4: addiu $v1, $zero, 2
    *(uint8_t*)(s7) = v0;                                       // 0x001d1ea8: sb $v0, 0($s7)
    *(uint8_t*)(s6) = v1;                                       // 0x001d1eac: sb $v1, 0($s6)
    *(uint8_t*)(s5) = 0;                                        // 0x001d1eb4: sb $zero, 0($s5)
    *(uint8_t*)(s4) = 0;                                        // 0x001d1eb8: sb $zero, 0($s4)
    *(uint16_t*)(s3) = 0;                                       // 0x001d1ebc: sh $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d1ec0: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d1ec4: sh $zero, 0($s1)
    goto label_0x1d286c;                                        // 0x001d1ec8: b 0x1d286c
    *(uint16_t*)(s0) = 0;                                       // 0x001d1ecc: sh $zero, 0($s0)
label_0x1d1ed0:
    v1 = *(int8_t*)((gp) + -0x627c);                            // 0x001d1ed0: lb $v1, -0x627c($gp)
    if (v1 == 0) goto label_0x1d1ef8;                           // 0x001d1ed4: beqz $v1, 0x1d1ef8
    v0 = 0xa;                                                   // 0x001d1ed8: addiu $v0, $zero, 0xa
    v0 = 1;                                                     // 0x001d1edc: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1d1ef0;                          // 0x001d1ee0: beq $v1, $v0, 0x1d1ef0
    v0 = 0x14;                                                  // 0x001d1ee4: addiu $v0, $zero, 0x14
    goto label_0x1d1f00;                                        // 0x001d1ee8: b 0x1d1f00
label_0x1d1ef0:
    goto label_0x1d1efc;                                        // 0x001d1ef0: b 0x1d1efc
    *(uint8_t*)(s5) = v0;                                       // 0x001d1ef4: sb $v0, 0($s5)
label_0x1d1ef8:
    *(uint8_t*)(s5) = v0;                                       // 0x001d1ef8: sb $v0, 0($s5)
label_0x1d1efc:
label_0x1d1f00:
    goto label_0x1d2870;                                        // 0x001d1f00: b 0x1d2870
label_0x1d1f08:
    g_0032ceae = a1;  // Global at 0x0032ceae                   // 0x001d1f08: sb $a1, -0x3152($at)
    at = 0x33 << 16;                                            // 0x001d1f0c: lui $at, 0x33
    v0 = g_0032ceac;  // Global at 0x0032ceac                   // 0x001d1f10: lbu $v0, -0x3154($at)
    at = (v0 < 0xa) ? 1 : 0;                                    // 0x001d1f14: slti $at, $v0, 0xa
    if (at == 0) goto label_0x1d1f28;                           // 0x001d1f18: beqz $at, 0x1d1f28
    /* nop */                                                   // 0x001d1f1c: nop 
    at = 0x33 << 16;                                            // 0x001d1f20: lui $at, 0x33
    g_0032ceac = a0;  // Global at 0x0032ceac                   // 0x001d1f24: sb $a0, -0x3154($at)
label_0x1d1f28:
    v1 = *(int32_t*)((gp) + -0x6294);                           // 0x001d1f28: lw $v1, -0x6294($gp)
    a0 = gp + -0x62b0;                                          // 0x001d1f2c: addiu $a0, $gp, -0x62b0
    v0 = *(int32_t*)((gp) + -0x6298);                           // 0x001d1f30: lw $v0, -0x6298($gp)
    *(uint32_t*)((gp) + -0x62b0) = v1;                          // 0x001d1f34: sw $v1, -0x62b0($gp)
    func_001c9de0();  // 0x1c9da0                                // 0x001d1f38: jal 0x1c9da0
    *(uint32_t*)((gp) + -0x62ac) = v0;                          // 0x001d1f3c: sw $v0, -0x62ac($gp)
    if (v0 >= 0) goto label_0x1d1f78;                           // 0x001d1f40: bgez $v0, 0x1d1f78
    /* nop */                                                   // 0x001d1f44: nop 
    v0 = -0x52;                                                 // 0x001d1f48: addiu $v0, $zero, -0x52
    v1 = 2;                                                     // 0x001d1f4c: addiu $v1, $zero, 2
    *(uint8_t*)(s7) = v0;                                       // 0x001d1f50: sb $v0, 0($s7)
    *(uint8_t*)(s6) = v1;                                       // 0x001d1f54: sb $v1, 0($s6)
    *(uint8_t*)(s5) = 0;                                        // 0x001d1f5c: sb $zero, 0($s5)
    *(uint8_t*)(s4) = 0;                                        // 0x001d1f60: sb $zero, 0($s4)
    *(uint16_t*)(s3) = 0;                                       // 0x001d1f64: sh $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d1f68: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d1f6c: sh $zero, 0($s1)
    goto label_0x1d286c;                                        // 0x001d1f70: b 0x1d286c
    *(uint16_t*)(s0) = 0;                                       // 0x001d1f74: sh $zero, 0($s0)
label_0x1d1f78:
    v1 = *(int8_t*)(s5);                                        // 0x001d1f78: lb $v1, 0($s5)
    v1 = v1 + 1;                                                // 0x001d1f80: addiu $v1, $v1, 1
    goto label_0x1d286c;                                        // 0x001d1f84: b 0x1d286c
    *(uint8_t*)(s5) = v1;                                       // 0x001d1f88: sb $v1, 0($s5)
label_0x1d1f8c:
    func_001c9e20();  // 0x1c9de0                                // 0x001d1f8c: jal 0x1c9de0
    a0 = *(uint8_t*)((gp) + -0x628c);                           // 0x001d1f90: lbu $a0, -0x628c($gp)
    if (v0 >= 0) goto label_0x1d1fcc;                           // 0x001d1f94: bgez $v0, 0x1d1fcc
    /* nop */                                                   // 0x001d1f98: nop 
    v0 = -0x52;                                                 // 0x001d1f9c: addiu $v0, $zero, -0x52
    v1 = 2;                                                     // 0x001d1fa0: addiu $v1, $zero, 2
    *(uint8_t*)(s7) = v0;                                       // 0x001d1fa4: sb $v0, 0($s7)
    *(uint8_t*)(s6) = v1;                                       // 0x001d1fa8: sb $v1, 0($s6)
    *(uint8_t*)(s5) = 0;                                        // 0x001d1fb0: sb $zero, 0($s5)
    *(uint8_t*)(s4) = 0;                                        // 0x001d1fb4: sb $zero, 0($s4)
    *(uint16_t*)(s3) = 0;                                       // 0x001d1fb8: sh $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d1fbc: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d1fc0: sh $zero, 0($s1)
    goto label_0x1d286c;                                        // 0x001d1fc4: b 0x1d286c
    *(uint16_t*)(s0) = 0;                                       // 0x001d1fc8: sh $zero, 0($s0)
label_0x1d1fcc:
    v1 = *(int8_t*)(s5);                                        // 0x001d1fcc: lb $v1, 0($s5)
    v1 = v1 + 1;                                                // 0x001d1fd4: addiu $v1, $v1, 1
    *(uint8_t*)(s5) = v1;                                       // 0x001d1fd8: sb $v1, 0($s5)
    goto label_0x1d286c;                                        // 0x001d1fdc: b 0x1d286c
    *(uint16_t*)(s3) = 0;                                       // 0x001d1fe0: sh $zero, 0($s3)
label_0x1d1fe4:
    v1 = *(int16_t*)(s2);                                       // 0x001d1fe4: lh $v1, 0($s2)
    at = (v1 < 0x1f) ? 1 : 0;                                   // 0x001d1fe8: slti $at, $v1, 0x1f
    if (at != 0) goto label_0x1d2024;                           // 0x001d1fec: bnez $at, 0x1d2024
    /* nop */                                                   // 0x001d1ff0: nop 
    v0 = -0x56;                                                 // 0x001d1ff4: addiu $v0, $zero, -0x56
    v1 = 2;                                                     // 0x001d1ff8: addiu $v1, $zero, 2
    *(uint8_t*)(s7) = v0;                                       // 0x001d1ffc: sb $v0, 0($s7)
    *(uint8_t*)(s6) = v1;                                       // 0x001d2000: sb $v1, 0($s6)
    *(uint8_t*)(s5) = 0;                                        // 0x001d2008: sb $zero, 0($s5)
    *(uint8_t*)(s4) = 0;                                        // 0x001d200c: sb $zero, 0($s4)
    *(uint16_t*)(s3) = 0;                                       // 0x001d2010: sh $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d2014: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d2018: sh $zero, 0($s1)
    goto label_0x1d286c;                                        // 0x001d201c: b 0x1d286c
    *(uint16_t*)(s0) = 0;                                       // 0x001d2020: sh $zero, 0($s0)
label_0x1d2024:
    v1 = *(int16_t*)(s3);                                       // 0x001d2024: lh $v1, 0($s3)
    /* divide: v1 / v0 -> hi:lo */                              // 0x001d2028: div $zero, $v1, $v0
    /* nop */                                                   // 0x001d202c: nop 
    /* nop */                                                   // 0x001d2030: nop 
    /* mfhi $v0 */                                              // 0x001d2034
    if (v0 != 0) goto label_0x1d2064;                           // 0x001d2038: bnez $v0, 0x1d2064
    at = 0x33 << 16;                                            // 0x001d203c: lui $at, 0x33
    v1 = g_0032ceae;  // Global at 0x0032ceae                   // 0x001d2040: lbu $v1, -0x3152($at)
    at = 0x33 << 16;                                            // 0x001d2044: lui $at, 0x33
    v0 = g_0032ceac;  // Global at 0x0032ceac                   // 0x001d2048: lbu $v0, -0x3154($at)
    at = (v0 < v1) ? 1 : 0;                                     // 0x001d204c: slt $at, $v0, $v1
    if (at == 0) goto label_0x1d205c;                           // 0x001d2050: beqz $at, 0x1d205c
    /* nop */                                                   // 0x001d2054: nop 
    v1 = v0 + 1;                                                // 0x001d2058: addiu $v1, $v0, 1
label_0x1d205c:
    at = 0x33 << 16;                                            // 0x001d205c: lui $at, 0x33
    g_0032ceac = v1;  // Global at 0x0032ceac                   // 0x001d2060: sb $v1, -0x3154($at)
label_0x1d2064:
    v0 = *(int16_t*)(s3);                                       // 0x001d2064: lh $v0, 0($s3)
    v0 = v0 + 1;                                                // 0x001d2068: addiu $v0, $v0, 1
    func_001c9e50();  // 0x1c9e20                                // 0x001d206c: jal 0x1c9e20
    *(uint16_t*)(s3) = v0;                                      // 0x001d2070: sh $v0, 0($s3)
    if (v0 == 0) goto label_0x1d20c0;                           // 0x001d2074: beqz $v0, 0x1d20c0
    at = 0x33 << 16;                                            // 0x001d2078: lui $at, 0x33
    v1 = 0x46;                                                  // 0x001d207c: addiu $v1, $zero, 0x46
    v0 = g_0032ceac;  // Global at 0x0032ceac                   // 0x001d2080: lbu $v0, -0x3154($at)
    at = 0x33 << 16;                                            // 0x001d2084: lui $at, 0x33
    g_0032ceae = v1;  // Global at 0x0032ceae                   // 0x001d2088: sb $v1, -0x3152($at)
    at = (v0 < 0x14) ? 1 : 0;                                   // 0x001d208c: slti $at, $v0, 0x14
    if (at == 0) goto label_0x1d20a0;                           // 0x001d2090: beqz $at, 0x1d20a0
    v0 = 0x14;                                                  // 0x001d2094: addiu $v0, $zero, 0x14
    at = 0x33 << 16;                                            // 0x001d2098: lui $at, 0x33
    g_0032ceac = v0;  // Global at 0x0032ceac                   // 0x001d209c: sb $v0, -0x3154($at)
label_0x1d20a0:
    a0 = *(int8_t*)(s5);                                        // 0x001d20a0: lb $a0, 0($s5)
    v1 = 0x96;                                                  // 0x001d20a4: addiu $v1, $zero, 0x96
    a0 = a0 + 1;                                                // 0x001d20ac: addiu $a0, $a0, 1
    *(uint8_t*)(s5) = a0;                                       // 0x001d20b0: sb $a0, 0($s5)
    *(uint16_t*)(s3) = v1;                                      // 0x001d20b4: sh $v1, 0($s3)
    goto label_0x1d286c;                                        // 0x001d20b8: b 0x1d286c
    *(uint16_t*)(s1) = 0;                                       // 0x001d20bc: sh $zero, 0($s1)
label_0x1d20c0:
    v0 = *(int16_t*)(s3);                                       // 0x001d20c0: lh $v0, 0($s3)
    at = (v0 < 0x1c3) ? 1 : 0;                                  // 0x001d20c4: slti $at, $v0, 0x1c3
    if (at != 0) goto label_0x1d2120;                           // 0x001d20c8: bnez $at, 0x1d2120
    v0 = *(int16_t*)(s1);                                       // 0x001d20d0: lh $v0, 0($s1)
    v0 = (v0 < 3) ? 1 : 0;                                      // 0x001d20d4: slti $v0, $v0, 3
    if (v0 != 0) goto label_0x1d210c;                           // 0x001d20d8: bnez $v0, 0x1d210c
    v0 = 0x63;                                                  // 0x001d20dc: addiu $v0, $zero, 0x63
    v1 = -0x52;                                                 // 0x001d20e0: addiu $v1, $zero, -0x52
    v0 = 2;                                                     // 0x001d20e4: addiu $v0, $zero, 2
    *(uint8_t*)(s7) = v1;                                       // 0x001d20e8: sb $v1, 0($s7)
    *(uint8_t*)(s6) = v0;                                       // 0x001d20ec: sb $v0, 0($s6)
    *(uint8_t*)(s5) = 0;                                        // 0x001d20f0: sb $zero, 0($s5)
    *(uint8_t*)(s4) = 0;                                        // 0x001d20f4: sb $zero, 0($s4)
    *(uint16_t*)(s3) = 0;                                       // 0x001d20f8: sh $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d20fc: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d2100: sh $zero, 0($s1)
    goto label_0x1d211c;                                        // 0x001d2104: b 0x1d211c
    *(uint16_t*)(s0) = 0;                                       // 0x001d2108: sh $zero, 0($s0)
label_0x1d210c:
    *(uint8_t*)(s5) = v0;                                       // 0x001d210c: sb $v0, 0($s5)
    v0 = *(int16_t*)(s1);                                       // 0x001d2110: lh $v0, 0($s1)
    v0 = v0 + 1;                                                // 0x001d2114: addiu $v0, $v0, 1
    *(uint16_t*)(s1) = v0;                                      // 0x001d2118: sh $v0, 0($s1)
label_0x1d211c:
label_0x1d2120:
    goto label_0x1d286c;                                        // 0x001d2120: b 0x1d286c
    /* nop */                                                   // 0x001d2124: nop 
label_0x1d2128:
    v1 = *(int16_t*)(s2);                                       // 0x001d2128: lh $v1, 0($s2)
    at = (v1 < 0x1f) ? 1 : 0;                                   // 0x001d212c: slti $at, $v1, 0x1f
    if (at != 0) goto label_0x1d2168;                           // 0x001d2130: bnez $at, 0x1d2168
    /* nop */                                                   // 0x001d2134: nop 
    v0 = -0x56;                                                 // 0x001d2138: addiu $v0, $zero, -0x56
    v1 = 2;                                                     // 0x001d213c: addiu $v1, $zero, 2
    *(uint8_t*)(s7) = v0;                                       // 0x001d2140: sb $v0, 0($s7)
    *(uint8_t*)(s6) = v1;                                       // 0x001d2144: sb $v1, 0($s6)
    *(uint8_t*)(s5) = 0;                                        // 0x001d214c: sb $zero, 0($s5)
    *(uint8_t*)(s4) = 0;                                        // 0x001d2150: sb $zero, 0($s4)
    *(uint16_t*)(s3) = 0;                                       // 0x001d2154: sh $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d2158: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d215c: sh $zero, 0($s1)
    goto label_0x1d286c;                                        // 0x001d2160: b 0x1d286c
    *(uint16_t*)(s0) = 0;                                       // 0x001d2164: sh $zero, 0($s0)
label_0x1d2168:
    v1 = *(int16_t*)(s3);                                       // 0x001d2168: lh $v1, 0($s3)
    /* divide: v1 / v0 -> hi:lo */                              // 0x001d216c: div $zero, $v1, $v0
    /* nop */                                                   // 0x001d2170: nop 
    /* nop */                                                   // 0x001d2174: nop 
    /* mfhi $v0 */                                              // 0x001d2178
    if (v0 != 0) goto label_0x1d21a8;                           // 0x001d217c: bnez $v0, 0x1d21a8
    at = 0x33 << 16;                                            // 0x001d2180: lui $at, 0x33
    v1 = g_0032ceae;  // Global at 0x0032ceae                   // 0x001d2184: lbu $v1, -0x3152($at)
    at = 0x33 << 16;                                            // 0x001d2188: lui $at, 0x33
    v0 = g_0032ceac;  // Global at 0x0032ceac                   // 0x001d218c: lbu $v0, -0x3154($at)
    at = (v0 < v1) ? 1 : 0;                                     // 0x001d2190: slt $at, $v0, $v1
    if (at == 0) goto label_0x1d21a0;                           // 0x001d2194: beqz $at, 0x1d21a0
    /* nop */                                                   // 0x001d2198: nop 
    v1 = v0 + 1;                                                // 0x001d219c: addiu $v1, $v0, 1
label_0x1d21a0:
    at = 0x33 << 16;                                            // 0x001d21a0: lui $at, 0x33
    g_0032ceac = v1;  // Global at 0x0032ceac                   // 0x001d21a4: sb $v1, -0x3154($at)
label_0x1d21a8:
    v1 = *(int16_t*)(s3);                                       // 0x001d21a8: lh $v1, 0($s3)
    v0 = v1 + -1;                                               // 0x001d21ac: addiu $v0, $v1, -1
    at = (0 < v1) ? 1 : 0;                                      // 0x001d21b0: slt $at, $zero, $v1
    if (at == 0) goto label_0x1d21c4;                           // 0x001d21b4: beqz $at, 0x1d21c4
    *(uint16_t*)(s3) = v0;                                      // 0x001d21b8: sh $v0, 0($s3)
    goto label_0x1d286c;                                        // 0x001d21bc: b 0x1d286c
label_0x1d21c4:
    *(uint16_t*)(s3) = 0;                                       // 0x001d21c4: sh $zero, 0($s3)
    v0 = 0x64;                                                  // 0x001d21c8: addiu $v0, $zero, 0x64
    at = 0x33 << 16;                                            // 0x001d21cc: lui $at, 0x33
    g_0032ceae = v0;  // Global at 0x0032ceae                   // 0x001d21d0: sb $v0, -0x3152($at)
    at = 0x33 << 16;                                            // 0x001d21d4: lui $at, 0x33
    v0 = g_0032ceac;  // Global at 0x0032ceac                   // 0x001d21d8: lbu $v0, -0x3154($at)
    at = (v0 < 0x46) ? 1 : 0;                                   // 0x001d21dc: slti $at, $v0, 0x46
    if (at == 0) goto label_0x1d21f0;                           // 0x001d21e0: beqz $at, 0x1d21f0
    v0 = 0x46;                                                  // 0x001d21e4: addiu $v0, $zero, 0x46
    at = 0x33 << 16;                                            // 0x001d21e8: lui $at, 0x33
    g_0032ceac = v0;  // Global at 0x0032ceac                   // 0x001d21ec: sb $v0, -0x3154($at)
label_0x1d21f0:
    func_001d0fa0();  // 0x1d0e40                                // 0x001d21f0: jal 0x1d0e40
    /* nop */                                                   // 0x001d21f4: nop 
    a1 = *(int32_t*)((gp) + -0x629c);                           // 0x001d21f8: lw $a1, -0x629c($gp)
    func_001c9fb0();  // 0x1c9f60                                // 0x001d21fc: jal 0x1c9f60
    if (v0 >= 0) goto label_0x1d223c;                           // 0x001d2204: bgez $v0, 0x1d223c
    v1 = 0x1e;                                                  // 0x001d2208: addiu $v1, $zero, 0x1e
    v0 = -0x52;                                                 // 0x001d220c: addiu $v0, $zero, -0x52
    v1 = 2;                                                     // 0x001d2210: addiu $v1, $zero, 2
    *(uint8_t*)(s7) = v0;                                       // 0x001d2214: sb $v0, 0($s7)
    *(uint8_t*)(s6) = v1;                                       // 0x001d2218: sb $v1, 0($s6)
    *(uint8_t*)(s5) = 0;                                        // 0x001d2220: sb $zero, 0($s5)
    *(uint8_t*)(s4) = 0;                                        // 0x001d2224: sb $zero, 0($s4)
    *(uint16_t*)(s3) = 0;                                       // 0x001d2228: sh $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d222c: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d2230: sh $zero, 0($s1)
    goto label_0x1d286c;                                        // 0x001d2234: b 0x1d286c
    *(uint16_t*)(s0) = 0;                                       // 0x001d2238: sh $zero, 0($s0)
label_0x1d223c:
    goto label_0x1d286c;                                        // 0x001d2240: b 0x1d286c
    *(uint8_t*)(s5) = v1;                                       // 0x001d2244: sb $v1, 0($s5)
label_0x1d2248:
    g_0032ceae = a1;  // Global at 0x0032ceae                   // 0x001d2248: sb $a1, -0x3152($at)
    at = 0x33 << 16;                                            // 0x001d224c: lui $at, 0x33
    v0 = g_0032ceac;  // Global at 0x0032ceac                   // 0x001d2250: lbu $v0, -0x3154($at)
    at = (v0 < 0xb) ? 1 : 0;                                    // 0x001d2254: slti $at, $v0, 0xb
    if (at == 0) goto label_0x1d2268;                           // 0x001d2258: beqz $at, 0x1d2268
    v0 = 0xb;                                                   // 0x001d225c: addiu $v0, $zero, 0xb
    at = 0x33 << 16;                                            // 0x001d2260: lui $at, 0x33
    g_0032ceac = v0;  // Global at 0x0032ceac                   // 0x001d2264: sb $v0, -0x3154($at)
label_0x1d2268:
    func_001c9e20();  // 0x1c9de0                                // 0x001d2268: jal 0x1c9de0
    a0 = *(uint8_t*)((gp) + -0x628c);                           // 0x001d226c: lbu $a0, -0x628c($gp)
    if (v0 >= 0) goto label_0x1d22a8;                           // 0x001d2270: bgez $v0, 0x1d22a8
    /* nop */                                                   // 0x001d2274: nop 
    v0 = -0x52;                                                 // 0x001d2278: addiu $v0, $zero, -0x52
    v1 = 2;                                                     // 0x001d227c: addiu $v1, $zero, 2
    *(uint8_t*)(s7) = v0;                                       // 0x001d2280: sb $v0, 0($s7)
    *(uint8_t*)(s6) = v1;                                       // 0x001d2284: sb $v1, 0($s6)
    *(uint8_t*)(s5) = 0;                                        // 0x001d228c: sb $zero, 0($s5)
    *(uint8_t*)(s4) = 0;                                        // 0x001d2290: sb $zero, 0($s4)
    *(uint16_t*)(s3) = 0;                                       // 0x001d2294: sh $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d2298: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d229c: sh $zero, 0($s1)
    goto label_0x1d286c;                                        // 0x001d22a0: b 0x1d286c
    *(uint16_t*)(s0) = 0;                                       // 0x001d22a4: sh $zero, 0($s0)
label_0x1d22a8:
    v1 = *(int8_t*)(s5);                                        // 0x001d22a8: lb $v1, 0($s5)
    v1 = v1 + 1;                                                // 0x001d22b0: addiu $v1, $v1, 1
    *(uint8_t*)(s5) = v1;                                       // 0x001d22b4: sb $v1, 0($s5)
    goto label_0x1d286c;                                        // 0x001d22b8: b 0x1d286c
    *(uint16_t*)(s3) = 0;                                       // 0x001d22bc: sh $zero, 0($s3)
label_0x1d22c0:
    v1 = *(int16_t*)(s2);                                       // 0x001d22c0: lh $v1, 0($s2)
    at = (v1 < 0x1f) ? 1 : 0;                                   // 0x001d22c4: slti $at, $v1, 0x1f
    if (at != 0) goto label_0x1d2300;                           // 0x001d22c8: bnez $at, 0x1d2300
    /* nop */                                                   // 0x001d22cc: nop 
    v0 = -0x56;                                                 // 0x001d22d0: addiu $v0, $zero, -0x56
    v1 = 2;                                                     // 0x001d22d4: addiu $v1, $zero, 2
    *(uint8_t*)(s7) = v0;                                       // 0x001d22d8: sb $v0, 0($s7)
    *(uint8_t*)(s6) = v1;                                       // 0x001d22dc: sb $v1, 0($s6)
    *(uint8_t*)(s5) = 0;                                        // 0x001d22e4: sb $zero, 0($s5)
    *(uint8_t*)(s4) = 0;                                        // 0x001d22e8: sb $zero, 0($s4)
    *(uint16_t*)(s3) = 0;                                       // 0x001d22ec: sh $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d22f0: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d22f4: sh $zero, 0($s1)
    goto label_0x1d286c;                                        // 0x001d22f8: b 0x1d286c
    *(uint16_t*)(s0) = 0;                                       // 0x001d22fc: sh $zero, 0($s0)
label_0x1d2300:
    v1 = *(int16_t*)(s3);                                       // 0x001d2300: lh $v1, 0($s3)
    /* divide: v1 / v0 -> hi:lo */                              // 0x001d2304: div $zero, $v1, $v0
    /* nop */                                                   // 0x001d2308: nop 
    /* nop */                                                   // 0x001d230c: nop 
    /* mfhi $v0 */                                              // 0x001d2310
    if (v0 != 0) goto label_0x1d2340;                           // 0x001d2314: bnez $v0, 0x1d2340
    at = 0x33 << 16;                                            // 0x001d2318: lui $at, 0x33
    v1 = g_0032ceae;  // Global at 0x0032ceae                   // 0x001d231c: lbu $v1, -0x3152($at)
    at = 0x33 << 16;                                            // 0x001d2320: lui $at, 0x33
    v0 = g_0032ceac;  // Global at 0x0032ceac                   // 0x001d2324: lbu $v0, -0x3154($at)
    at = (v0 < v1) ? 1 : 0;                                     // 0x001d2328: slt $at, $v0, $v1
    if (at == 0) goto label_0x1d2338;                           // 0x001d232c: beqz $at, 0x1d2338
    /* nop */                                                   // 0x001d2330: nop 
    v1 = v0 + 1;                                                // 0x001d2334: addiu $v1, $v0, 1
label_0x1d2338:
    at = 0x33 << 16;                                            // 0x001d2338: lui $at, 0x33
    g_0032ceac = v1;  // Global at 0x0032ceac                   // 0x001d233c: sb $v1, -0x3154($at)
label_0x1d2340:
    v0 = *(int16_t*)(s3);                                       // 0x001d2340: lh $v0, 0($s3)
    v0 = v0 + 1;                                                // 0x001d2344: addiu $v0, $v0, 1
    func_001c9e50();  // 0x1c9e20                                // 0x001d2348: jal 0x1c9e20
    *(uint16_t*)(s3) = v0;                                      // 0x001d234c: sh $v0, 0($s3)
    if (v0 == 0) goto label_0x1d2394;                           // 0x001d2350: beqz $v0, 0x1d2394
    at = 0x33 << 16;                                            // 0x001d2354: lui $at, 0x33
    v1 = 0x3c;                                                  // 0x001d2358: addiu $v1, $zero, 0x3c
    v0 = g_0032ceac;  // Global at 0x0032ceac                   // 0x001d235c: lbu $v0, -0x3154($at)
    at = 0x33 << 16;                                            // 0x001d2360: lui $at, 0x33
    g_0032ceae = v1;  // Global at 0x0032ceae                   // 0x001d2364: sb $v1, -0x3152($at)
    at = (v0 < 0x14) ? 1 : 0;                                   // 0x001d2368: slti $at, $v0, 0x14
    if (at == 0) goto label_0x1d237c;                           // 0x001d236c: beqz $at, 0x1d237c
    v0 = 0x14;                                                  // 0x001d2370: addiu $v0, $zero, 0x14
    at = 0x33 << 16;                                            // 0x001d2374: lui $at, 0x33
    g_0032ceac = v0;  // Global at 0x0032ceac                   // 0x001d2378: sb $v0, -0x3154($at)
label_0x1d237c:
    v1 = *(int8_t*)(s5);                                        // 0x001d237c: lb $v1, 0($s5)
    v1 = v1 + 1;                                                // 0x001d2384: addiu $v1, $v1, 1
    *(uint8_t*)(s5) = v1;                                       // 0x001d2388: sb $v1, 0($s5)
    goto label_0x1d286c;                                        // 0x001d238c: b 0x1d286c
    *(uint16_t*)(s3) = 0;                                       // 0x001d2390: sh $zero, 0($s3)
label_0x1d2394:
    v0 = *(int16_t*)(s3);                                       // 0x001d2394: lh $v0, 0($s3)
    at = (v0 < 0x1c3) ? 1 : 0;                                  // 0x001d2398: slti $at, $v0, 0x1c3
    if (at != 0) goto label_0x1d23f4;                           // 0x001d239c: bnez $at, 0x1d23f4
    v0 = *(int16_t*)(s1);                                       // 0x001d23a4: lh $v0, 0($s1)
    v0 = (v0 < 3) ? 1 : 0;                                      // 0x001d23a8: slti $v0, $v0, 3
    if (v0 != 0) goto label_0x1d23e0;                           // 0x001d23ac: bnez $v0, 0x1d23e0
    v0 = 0x63;                                                  // 0x001d23b0: addiu $v0, $zero, 0x63
    v1 = -0x52;                                                 // 0x001d23b4: addiu $v1, $zero, -0x52
    v0 = 2;                                                     // 0x001d23b8: addiu $v0, $zero, 2
    *(uint8_t*)(s7) = v1;                                       // 0x001d23bc: sb $v1, 0($s7)
    *(uint8_t*)(s6) = v0;                                       // 0x001d23c0: sb $v0, 0($s6)
    *(uint8_t*)(s5) = 0;                                        // 0x001d23c4: sb $zero, 0($s5)
    *(uint8_t*)(s4) = 0;                                        // 0x001d23c8: sb $zero, 0($s4)
    *(uint16_t*)(s3) = 0;                                       // 0x001d23cc: sh $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d23d0: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d23d4: sh $zero, 0($s1)
    goto label_0x1d23f0;                                        // 0x001d23d8: b 0x1d23f0
    *(uint16_t*)(s0) = 0;                                       // 0x001d23dc: sh $zero, 0($s0)
label_0x1d23e0:
    *(uint8_t*)(s5) = v0;                                       // 0x001d23e0: sb $v0, 0($s5)
    v0 = *(int16_t*)(s1);                                       // 0x001d23e4: lh $v0, 0($s1)
    v0 = v0 + 1;                                                // 0x001d23e8: addiu $v0, $v0, 1
    *(uint16_t*)(s1) = v0;                                      // 0x001d23ec: sh $v0, 0($s1)
label_0x1d23f0:
label_0x1d23f4:
    goto label_0x1d286c;                                        // 0x001d23f4: b 0x1d286c
    /* nop */                                                   // 0x001d23f8: nop 
label_0x1d23fc:
    func_001ca020();  // 0x1c9ff0                                // 0x001d23fc: jal 0x1c9ff0
    /* nop */                                                   // 0x001d2400: nop 
    if (v0 >= 0) goto label_0x1d243c;                           // 0x001d2404: bgez $v0, 0x1d243c
    v0 = -0x52;                                                 // 0x001d240c: addiu $v0, $zero, -0x52
    v1 = 2;                                                     // 0x001d2410: addiu $v1, $zero, 2
    *(uint8_t*)(s7) = v0;                                       // 0x001d2414: sb $v0, 0($s7)
    *(uint8_t*)(s6) = v1;                                       // 0x001d2418: sb $v1, 0($s6)
    *(uint8_t*)(s5) = 0;                                        // 0x001d2420: sb $zero, 0($s5)
    *(uint8_t*)(s4) = 0;                                        // 0x001d2424: sb $zero, 0($s4)
    *(uint16_t*)(s3) = 0;                                       // 0x001d2428: sh $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d242c: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d2430: sh $zero, 0($s1)
    goto label_0x1d286c;                                        // 0x001d2434: b 0x1d286c
    *(uint16_t*)(s0) = 0;                                       // 0x001d2438: sh $zero, 0($s0)
label_0x1d243c:
    func_001ca080();  // 0x1ca050                                // 0x001d243c: jal 0x1ca050
    a1 = 5;                                                     // 0x001d2440: addiu $a1, $zero, 5
    if (v0 >= 0) goto label_0x1d247c;                           // 0x001d2444: bgez $v0, 0x1d247c
    /* nop */                                                   // 0x001d2448: nop 
    v0 = -0x52;                                                 // 0x001d244c: addiu $v0, $zero, -0x52
    v1 = 2;                                                     // 0x001d2450: addiu $v1, $zero, 2
    *(uint8_t*)(s7) = v0;                                       // 0x001d2454: sb $v0, 0($s7)
    *(uint8_t*)(s6) = v1;                                       // 0x001d2458: sb $v1, 0($s6)
    *(uint8_t*)(s5) = 0;                                        // 0x001d2460: sb $zero, 0($s5)
    *(uint8_t*)(s4) = 0;                                        // 0x001d2464: sb $zero, 0($s4)
    *(uint16_t*)(s3) = 0;                                       // 0x001d2468: sh $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d246c: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d2470: sh $zero, 0($s1)
    goto label_0x1d286c;                                        // 0x001d2474: b 0x1d286c
    *(uint16_t*)(s0) = 0;                                       // 0x001d2478: sh $zero, 0($s0)
label_0x1d247c:
    v1 = *(int8_t*)(s5);                                        // 0x001d247c: lb $v1, 0($s5)
    v1 = v1 + 1;                                                // 0x001d2484: addiu $v1, $v1, 1
    *(uint8_t*)(s5) = v1;                                       // 0x001d2488: sb $v1, 0($s5)
    goto label_0x1d286c;                                        // 0x001d248c: b 0x1d286c
    *(uint16_t*)(s3) = 0;                                       // 0x001d2490: sh $zero, 0($s3)
label_0x1d2494:
    v1 = *(int16_t*)(s2);                                       // 0x001d2494: lh $v1, 0($s2)
    at = (v1 < 0x1f) ? 1 : 0;                                   // 0x001d2498: slti $at, $v1, 0x1f
    if (at != 0) goto label_0x1d24dc;                           // 0x001d249c: bnez $at, 0x1d24dc
    /* nop */                                                   // 0x001d24a0: nop 
    func_001ca050();  // 0x1ca020                                // 0x001d24a4: jal 0x1ca020
    /* nop */                                                   // 0x001d24a8: nop 
    v0 = -0x56;                                                 // 0x001d24ac: addiu $v0, $zero, -0x56
    v1 = 2;                                                     // 0x001d24b0: addiu $v1, $zero, 2
    *(uint8_t*)(s7) = v0;                                       // 0x001d24b4: sb $v0, 0($s7)
    *(uint8_t*)(s6) = v1;                                       // 0x001d24b8: sb $v1, 0($s6)
    *(uint8_t*)(s5) = 0;                                        // 0x001d24c0: sb $zero, 0($s5)
    *(uint8_t*)(s4) = 0;                                        // 0x001d24c4: sb $zero, 0($s4)
    *(uint16_t*)(s3) = 0;                                       // 0x001d24c8: sh $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d24cc: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d24d0: sh $zero, 0($s1)
    goto label_0x1d286c;                                        // 0x001d24d4: b 0x1d286c
    *(uint16_t*)(s0) = 0;                                       // 0x001d24d8: sh $zero, 0($s0)
label_0x1d24dc:
    v1 = *(int16_t*)(s3);                                       // 0x001d24dc: lh $v1, 0($s3)
    /* divide: v1 / v0 -> hi:lo */                              // 0x001d24e0: div $zero, $v1, $v0
    /* nop */                                                   // 0x001d24e4: nop 
    /* nop */                                                   // 0x001d24e8: nop 
    /* mfhi $v0 */                                              // 0x001d24ec
    if (v0 != 0) goto label_0x1d251c;                           // 0x001d24f0: bnez $v0, 0x1d251c
    at = 0x33 << 16;                                            // 0x001d24f4: lui $at, 0x33
    v1 = g_0032ceae;  // Global at 0x0032ceae                   // 0x001d24f8: lbu $v1, -0x3152($at)
    at = 0x33 << 16;                                            // 0x001d24fc: lui $at, 0x33
    v0 = g_0032ceac;  // Global at 0x0032ceac                   // 0x001d2500: lbu $v0, -0x3154($at)
    at = (v0 < v1) ? 1 : 0;                                     // 0x001d2504: slt $at, $v0, $v1
    if (at == 0) goto label_0x1d2514;                           // 0x001d2508: beqz $at, 0x1d2514
    /* nop */                                                   // 0x001d250c: nop 
    v1 = v0 + 1;                                                // 0x001d2510: addiu $v1, $v0, 1
label_0x1d2514:
    at = 0x33 << 16;                                            // 0x001d2514: lui $at, 0x33
    g_0032ceac = v1;  // Global at 0x0032ceac                   // 0x001d2518: sb $v1, -0x3154($at)
label_0x1d251c:
    v0 = *(int16_t*)(s3);                                       // 0x001d251c: lh $v0, 0($s3)
    v0 = v0 + 1;                                                // 0x001d2520: addiu $v0, $v0, 1
    func_001ca0b0();  // 0x1ca080                                // 0x001d2524: jal 0x1ca080
    *(uint16_t*)(s3) = v0;                                      // 0x001d2528: sh $v0, 0($s3)
    if (v0 >= 0) goto label_0x1d259c;                           // 0x001d252c: bgez $v0, 0x1d259c
    v1 = 3;                                                     // 0x001d2530: addiu $v1, $zero, 3
    v0 = *(int16_t*)(s1);                                       // 0x001d2534: lh $v0, 0($s1)
    v0 = (v0 < 3) ? 1 : 0;                                      // 0x001d2538: slti $v0, $v0, 3
    if (v0 != 0) goto label_0x1d2578;                           // 0x001d253c: bnez $v0, 0x1d2578
    /* nop */                                                   // 0x001d2540: nop 
    func_001ca050();  // 0x1ca020                                // 0x001d2544: jal 0x1ca020
    /* nop */                                                   // 0x001d2548: nop 
    v1 = -0x54;                                                 // 0x001d254c: addiu $v1, $zero, -0x54
    v0 = 2;                                                     // 0x001d2550: addiu $v0, $zero, 2
    *(uint8_t*)(s7) = v1;                                       // 0x001d2554: sb $v1, 0($s7)
    *(uint8_t*)(s6) = v0;                                       // 0x001d2558: sb $v0, 0($s6)
    *(uint8_t*)(s5) = 0;                                        // 0x001d255c: sb $zero, 0($s5)
    *(uint8_t*)(s4) = 0;                                        // 0x001d2560: sb $zero, 0($s4)
    *(uint16_t*)(s3) = 0;                                       // 0x001d2564: sh $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d2568: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d256c: sh $zero, 0($s1)
    goto label_0x1d2594;                                        // 0x001d2570: b 0x1d2594
    *(uint16_t*)(s0) = 0;                                       // 0x001d2574: sh $zero, 0($s0)
label_0x1d2578:
    func_001ca050();  // 0x1ca020                                // 0x001d2578: jal 0x1ca020
    /* nop */                                                   // 0x001d257c: nop 
    v0 = 0x63;                                                  // 0x001d2580: addiu $v0, $zero, 0x63
    *(uint8_t*)(s5) = v0;                                       // 0x001d2584: sb $v0, 0($s5)
    v0 = *(int16_t*)(s1);                                       // 0x001d2588: lh $v0, 0($s1)
    v0 = v0 + 1;                                                // 0x001d258c: addiu $v0, $v0, 1
    *(uint16_t*)(s1) = v0;                                      // 0x001d2590: sh $v0, 0($s1)
label_0x1d2594:
    goto label_0x1d286c;                                        // 0x001d2594: b 0x1d286c
label_0x1d259c:
    if (v0 == v1) goto label_0x1d25ac;                          // 0x001d259c: beq $v0, $v1, 0x1d25ac
    at = 0x33 << 16;                                            // 0x001d25a0: lui $at, 0x33
    goto label_0x1d260c;                                        // 0x001d25a4: b 0x1d260c
label_0x1d25ac:
    v1 = 0x46;                                                  // 0x001d25ac: addiu $v1, $zero, 0x46
    v0 = g_0032ceac;  // Global at 0x0032ceac                   // 0x001d25b0: lbu $v0, -0x3154($at)
    at = 0x33 << 16;                                            // 0x001d25b4: lui $at, 0x33
    g_0032ceae = v1;  // Global at 0x0032ceae                   // 0x001d25b8: sb $v1, -0x3152($at)
    at = (v0 < 0x3c) ? 1 : 0;                                   // 0x001d25bc: slti $at, $v0, 0x3c
    if (at == 0) goto label_0x1d25d4;                           // 0x001d25c0: beqz $at, 0x1d25d4
    a0 = gp + -0x62b0;                                          // 0x001d25c4: addiu $a0, $gp, -0x62b0
    v0 = 0x3c;                                                  // 0x001d25c8: addiu $v0, $zero, 0x3c
    at = 0x33 << 16;                                            // 0x001d25cc: lui $at, 0x33
    g_0032ceac = v0;  // Global at 0x0032ceac                   // 0x001d25d0: sb $v0, -0x3154($at)
label_0x1d25d4:
    func_001ca0e0();  // 0x1ca0b0                                // 0x001d25d4: jal 0x1ca0b0
    /* nop */                                                   // 0x001d25d8: nop 
    v1 = *(int32_t*)((gp) + -0x62b0);                           // 0x001d25dc: lw $v1, -0x62b0($gp)
    a0 = gp + -0x62b0;                                          // 0x001d25e0: addiu $a0, $gp, -0x62b0
    v0 = *(int32_t*)((gp) + -0x62ac);                           // 0x001d25e4: lw $v0, -0x62ac($gp)
    *(uint32_t*)((gp) + -0x6294) = v1;                          // 0x001d25e8: sw $v1, -0x6294($gp)
    func_001c9de0();  // 0x1c9da0                                // 0x001d25ec: jal 0x1c9da0
    *(uint32_t*)((gp) + -0x6298) = v0;                          // 0x001d25f0: sw $v0, -0x6298($gp)
    v1 = *(int8_t*)(s5);                                        // 0x001d25f4: lb $v1, 0($s5)
    v0 = 0x5a;                                                  // 0x001d25f8: addiu $v0, $zero, 0x5a
    v1 = v1 + 1;                                                // 0x001d25fc: addiu $v1, $v1, 1
    *(uint8_t*)(s5) = v1;                                       // 0x001d2600: sb $v1, 0($s5)
    *(uint16_t*)(s3) = v0;                                      // 0x001d2604: sh $v0, 0($s3)
label_0x1d260c:
    goto label_0x1d286c;                                        // 0x001d260c: b 0x1d286c
    /* nop */                                                   // 0x001d2610: nop 
label_0x1d2614:
    v1 = *(int16_t*)(s3);                                       // 0x001d2614: lh $v1, 0($s3)
    /* divide: v1 / v0 -> hi:lo */                              // 0x001d2618: div $zero, $v1, $v0
    /* nop */                                                   // 0x001d261c: nop 
    /* nop */                                                   // 0x001d2620: nop 
    /* mfhi $v0 */                                              // 0x001d2624
    if (v0 != 0) goto label_0x1d2654;                           // 0x001d2628: bnez $v0, 0x1d2654
    at = 0x33 << 16;                                            // 0x001d262c: lui $at, 0x33
    v1 = g_0032ceae;  // Global at 0x0032ceae                   // 0x001d2630: lbu $v1, -0x3152($at)
    at = 0x33 << 16;                                            // 0x001d2634: lui $at, 0x33
    v0 = g_0032ceac;  // Global at 0x0032ceac                   // 0x001d2638: lbu $v0, -0x3154($at)
    at = (v0 < v1) ? 1 : 0;                                     // 0x001d263c: slt $at, $v0, $v1
    if (at == 0) goto label_0x1d264c;                           // 0x001d2640: beqz $at, 0x1d264c
    /* nop */                                                   // 0x001d2644: nop 
    v1 = v0 + 1;                                                // 0x001d2648: addiu $v1, $v0, 1
label_0x1d264c:
    at = 0x33 << 16;                                            // 0x001d264c: lui $at, 0x33
    g_0032ceac = v1;  // Global at 0x0032ceac                   // 0x001d2650: sb $v1, -0x3154($at)
label_0x1d2654:
    v0 = *(int16_t*)(s3);                                       // 0x001d2654: lh $v0, 0($s3)
    v0 = v0 + -1;                                               // 0x001d2658: addiu $v0, $v0, -1
    *(uint16_t*)(s3) = v0;                                      // 0x001d265c: sh $v0, 0($s3)
    at = (0 < v0) ? 1 : 0;                                      // 0x001d2668: slt $at, $zero, $v0
    if (at == 0) goto label_0x1d267c;                           // 0x001d266c: beqz $at, 0x1d267c
    goto label_0x1d286c;                                        // 0x001d2674: b 0x1d286c
    /* nop */                                                   // 0x001d2678: nop 
label_0x1d267c:
    *(uint16_t*)(s3) = 0;                                       // 0x001d267c: sh $zero, 0($s3)
    v0 = 0x64;                                                  // 0x001d2680: addiu $v0, $zero, 0x64
    at = 0x33 << 16;                                            // 0x001d2684: lui $at, 0x33
    g_0032ceae = v0;  // Global at 0x0032ceae                   // 0x001d2688: sb $v0, -0x3152($at)
    at = 0x33 << 16;                                            // 0x001d268c: lui $at, 0x33
    v0 = g_0032ceac;  // Global at 0x0032ceac                   // 0x001d2690: lbu $v0, -0x3154($at)
    at = (v0 < 0x46) ? 1 : 0;                                   // 0x001d2694: slti $at, $v0, 0x46
    if (at == 0) goto label_0x1d26a8;                           // 0x001d2698: beqz $at, 0x1d26a8
    v0 = 0x46;                                                  // 0x001d269c: addiu $v0, $zero, 0x46
    at = 0x33 << 16;                                            // 0x001d26a0: lui $at, 0x33
    g_0032ceac = v0;  // Global at 0x0032ceac                   // 0x001d26a4: sb $v0, -0x3154($at)
label_0x1d26a8:
    func_001d0fa0();  // 0x1d0e40                                // 0x001d26a8: jal 0x1d0e40
    /* nop */                                                   // 0x001d26ac: nop 
    func_001ca140();  // 0x1ca110                                // 0x001d26b0: jal 0x1ca110
    a0 = gp + -0x62b0;                                          // 0x001d26b4: addiu $a0, $gp, -0x62b0
    if (v0 >= 0) goto label_0x1d26f0;                           // 0x001d26b8: bgez $v0, 0x1d26f0
    /* nop */                                                   // 0x001d26bc: nop 
    v0 = -0x52;                                                 // 0x001d26c0: addiu $v0, $zero, -0x52
    v1 = 2;                                                     // 0x001d26c4: addiu $v1, $zero, 2
    *(uint8_t*)(s7) = v0;                                       // 0x001d26c8: sb $v0, 0($s7)
    *(uint8_t*)(s6) = v1;                                       // 0x001d26cc: sb $v1, 0($s6)
    *(uint8_t*)(s5) = 0;                                        // 0x001d26d4: sb $zero, 0($s5)
    *(uint8_t*)(s4) = 0;                                        // 0x001d26d8: sb $zero, 0($s4)
    *(uint16_t*)(s3) = 0;                                       // 0x001d26dc: sh $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d26e0: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d26e4: sh $zero, 0($s1)
    goto label_0x1d286c;                                        // 0x001d26e8: b 0x1d286c
    *(uint16_t*)(s0) = 0;                                       // 0x001d26ec: sh $zero, 0($s0)
label_0x1d26f0:
    v0 = *(int32_t*)((gp) + -0x62b0);                           // 0x001d26f0: lw $v0, -0x62b0($gp)
    *(uint32_t*)((gp) + -0x629c) = v0;                          // 0x001d26f4: sw $v0, -0x629c($gp)
    a1 = *(int32_t*)((gp) + -0x629c);                           // 0x001d26f8: lw $a1, -0x629c($gp)
    func_001c9fb0();  // 0x1c9f60                                // 0x001d26fc: jal 0x1c9f60
    if (v0 >= 0) goto label_0x1d273c;                           // 0x001d2704: bgez $v0, 0x1d273c
    v1 = 0x1e;                                                  // 0x001d2708: addiu $v1, $zero, 0x1e
    v0 = -0x52;                                                 // 0x001d270c: addiu $v0, $zero, -0x52
    v1 = 2;                                                     // 0x001d2710: addiu $v1, $zero, 2
    *(uint8_t*)(s7) = v0;                                       // 0x001d2714: sb $v0, 0($s7)
    *(uint8_t*)(s6) = v1;                                       // 0x001d2718: sb $v1, 0($s6)
    *(uint8_t*)(s5) = 0;                                        // 0x001d2720: sb $zero, 0($s5)
    *(uint8_t*)(s4) = 0;                                        // 0x001d2724: sb $zero, 0($s4)
    *(uint16_t*)(s3) = 0;                                       // 0x001d2728: sh $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d272c: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d2730: sh $zero, 0($s1)
    goto label_0x1d286c;                                        // 0x001d2734: b 0x1d286c
    *(uint16_t*)(s0) = 0;                                       // 0x001d2738: sh $zero, 0($s0)
label_0x1d273c:
    goto label_0x1d286c;                                        // 0x001d2740: b 0x1d286c
    *(uint8_t*)(s5) = v1;                                       // 0x001d2744: sb $v1, 0($s5)
label_0x1d2748:
    func_001c9e80();  // 0x1c9e50                                // 0x001d2748: jal 0x1c9e50
    /* nop */                                                   // 0x001d274c: nop 
    a0 = gp + -0x62a8;                                          // 0x001d2750: addiu $a0, $gp, -0x62a8
    func_001c9f00();  // 0x1c9ec0                                // 0x001d2754: jal 0x1c9ec0
    *(uint32_t*)((gp) + -0x62a8) = 0;                           // 0x001d2758: sw $zero, -0x62a8($gp)
    if (v0 < 0) goto label_0x1d2770;                            // 0x001d275c: bltz $v0, 0x1d2770
    /* nop */                                                   // 0x001d2760: nop 
    v0 = *(int32_t*)((gp) + -0x62a8);                           // 0x001d2764: lw $v0, -0x62a8($gp)
    if (v0 != 0) goto label_0x1d27a0;                           // 0x001d2768: bnez $v0, 0x1d27a0
    v1 = 0x64;                                                  // 0x001d276c: addiu $v1, $zero, 0x64
label_0x1d2770:
    v0 = -0x53;                                                 // 0x001d2770: addiu $v0, $zero, -0x53
    v1 = 2;                                                     // 0x001d2774: addiu $v1, $zero, 2
    *(uint8_t*)(s7) = v0;                                       // 0x001d2778: sb $v0, 0($s7)
    *(uint8_t*)(s6) = v1;                                       // 0x001d277c: sb $v1, 0($s6)
    *(uint8_t*)(s5) = 0;                                        // 0x001d2784: sb $zero, 0($s5)
    *(uint8_t*)(s4) = 0;                                        // 0x001d2788: sb $zero, 0($s4)
    *(uint16_t*)(s3) = 0;                                       // 0x001d278c: sh $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d2790: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d2794: sh $zero, 0($s1)
    goto label_0x1d286c;                                        // 0x001d2798: b 0x1d286c
    *(uint16_t*)(s0) = 0;                                       // 0x001d279c: sh $zero, 0($s0)
label_0x1d27a0:
    at = 0x33 << 16;                                            // 0x001d27a0: lui $at, 0x33
    g_0032ceae = v1;  // Global at 0x0032ceae                   // 0x001d27a4: sb $v1, -0x3152($at)
    at = 0x33 << 16;                                            // 0x001d27ac: lui $at, 0x33
    g_0032ceac = v1;  // Global at 0x0032ceac                   // 0x001d27b0: sb $v1, -0x3154($at)
    v1 = *(int8_t*)(s5);                                        // 0x001d27b4: lb $v1, 0($s5)
    v1 = v1 + 1;                                                // 0x001d27b8: addiu $v1, $v1, 1
    *(uint8_t*)(s5) = v1;                                       // 0x001d27bc: sb $v1, 0($s5)
    *(uint8_t*)(s4) = 0;                                        // 0x001d27c0: sb $zero, 0($s4)
    *(uint16_t*)(s3) = 0;                                       // 0x001d27c4: sh $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d27c8: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d27cc: sh $zero, 0($s1)
    goto label_0x1d286c;                                        // 0x001d27d0: b 0x1d286c
    *(uint16_t*)(s0) = 0;                                       // 0x001d27d4: sh $zero, 0($s0)
label_0x1d27d8:
    v0 = g_0032cead;  // Global at 0x0032cead                   // 0x001d27d8: lbu $v0, -0x3153($at)
    if (v0 != a0) goto label_0x1d2804;                          // 0x001d27dc: bne $v0, $a0, 0x1d2804
    *(uint8_t*)(s6) = 0;                                        // 0x001d27e4: sb $zero, 0($s6)
    v0 = 2;                                                     // 0x001d27e8: addiu $v0, $zero, 2
    *(uint8_t*)(s5) = 0;                                        // 0x001d27ec: sb $zero, 0($s5)
    *(uint16_t*)(s3) = 0;                                       // 0x001d27f0: sh $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d27f4: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d27f8: sh $zero, 0($s1)
    goto label_0x1d286c;                                        // 0x001d27fc: b 0x1d286c
    *(uint16_t*)(s0) = 0;                                       // 0x001d2800: sh $zero, 0($s0)
label_0x1d2804:
    goto label_0x1d286c;                                        // 0x001d2804: b 0x1d286c
    /* nop */                                                   // 0x001d2808: nop 
label_0x1d280c:
    v1 = v1 + 1;                                                // 0x001d280c: addiu $v1, $v1, 1
    *(uint8_t*)(s5) = v1;                                       // 0x001d2814: sb $v1, 0($s5)
    *(uint8_t*)(s4) = 0;                                        // 0x001d2818: sb $zero, 0($s4)
    goto label_0x1d286c;                                        // 0x001d281c: b 0x1d286c
    *(uint16_t*)(s3) = 0;                                       // 0x001d2820: sh $zero, 0($s3)
label_0x1d2824:
    func_001d2fa0();  // 0x1d29a0                                // 0x001d2828: jal 0x1d29a0
    if (v0 == 0) goto label_0x1d2868;                           // 0x001d2830: beqz $v0, 0x1d2868
    at = 0x33 << 16;                                            // 0x001d2834: lui $at, 0x33
    v0 = 0xa;                                                   // 0x001d2838: addiu $v0, $zero, 0xa
    g_0032ceac = 0;  // Global at 0x0032ceac                    // 0x001d283c: sb $zero, -0x3154($at)
    v1 = 0x5a;                                                  // 0x001d2840: addiu $v1, $zero, 0x5a
    at = 0x33 << 16;                                            // 0x001d2844: lui $at, 0x33
    g_0032ceae = v0;  // Global at 0x0032ceae                   // 0x001d2848: sb $v0, -0x3152($at)
    v0 = 1;                                                     // 0x001d284c: addiu $v0, $zero, 1
    *(uint8_t*)(s5) = v0;                                       // 0x001d2850: sb $v0, 0($s5)
    *(uint8_t*)(s4) = 0;                                        // 0x001d2854: sb $zero, 0($s4)
    v0 = 5;                                                     // 0x001d2858: addiu $v0, $zero, 5
    *(uint16_t*)(s3) = v1;                                      // 0x001d285c: sh $v1, 0($s3)
    goto label_0x1d286c;                                        // 0x001d2860: b 0x1d286c
    *(uint16_t*)(s2) = 0;                                       // 0x001d2864: sh $zero, 0($s2)
label_0x1d2868:
label_0x1d286c:
label_0x1d2870:
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001d2874: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001d2878: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001d287c: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d2884: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d2888: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d288c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d2890: jr $ra
    sp = sp + 0x90;                                             // 0x001d2894: addiu $sp, $sp, 0x90
}