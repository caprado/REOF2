void func_001a5cf0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = a0 << 1;                                               // 0x001a5cf0: sll $v1, $a0, 1
    sp = sp + -0x20;                                            // 0x001a5cf4: addiu $sp, $sp, -0x20
    v0 = 0x2a << 16;                                            // 0x001a5cf8: lui $v0, 0x2a
    v1 = v1 + a0;                                               // 0x001a5cfc: addu $v1, $v1, $a0
    v0 = v0 + 0xf20;                                            // 0x001a5d04: addiu $v0, $v0, 0xf20
    v1 = v1 << 3;                                               // 0x001a5d08: sll $v1, $v1, 3
    v0 = v0 + v1;                                               // 0x001a5d10: addu $v0, $v0, $v1
    v0 = g_002a0f20;  // Global at 0x002a0f20                   // 0x001a5d14: lbu $v0, 0($v0)
    if (v0 != 0) goto label_0x1a5d28;                           // 0x001a5d18: bnez $v0, 0x1a5d28
    goto label_0x1a6014;                                        // 0x001a5d20: b 0x1a6014
label_0x1a5d28:
    func_001a6310();  // 1a6310                                // 0x001a5d28: jal 0x1a6310
    /* nop */                                                   // 0x001a5d2c: nop 
    v0 = 0x2a << 16;                                            // 0x001a5d30: lui $v0, 0x2a
    a2 = s0 << 5;                                               // 0x001a5d34: sll $a2, $s0, 5
    v0 = v0 + 0xf00;                                            // 0x001a5d38: addiu $v0, $v0, 0xf00
    a3 = v0 + a2;                                               // 0x001a5d3c: addu $a3, $v0, $a2
    v1 = *(uint8_t*)(a3);                                       // 0x001a5d40: lbu $v1, 0($a3)
    v0 = 0xff;                                                  // 0x001a5d44: addiu $v0, $zero, 0xff
    if (v1 != v0) goto label_0x1a5db4;                          // 0x001a5d48: bne $v1, $v0, 0x1a5db4
    v1 = s0 << 3;                                               // 0x001a5d4c: sll $v1, $s0, 3
    v0 = s0 << 3;                                               // 0x001a5d50: sll $v0, $s0, 3
    a0 = 0x2a << 16;                                            // 0x001a5d54: lui $a0, 0x2a
    v0 = v0 + s0;                                               // 0x001a5d58: addu $v0, $v0, $s0
    v1 = 0x2a << 16;                                            // 0x001a5d5c: lui $v1, 0x2a
    a2 = v0 << 2;                                               // 0x001a5d60: sll $a2, $v0, 2
    a0 = a0 + 0xf48;                                            // 0x001a5d64: addiu $a0, $a0, 0xf48
    v0 = 0x2a << 16;                                            // 0x001a5d68: lui $v0, 0x2a
    a1 = a0 + a2;                                               // 0x001a5d6c: addu $a1, $a0, $a2
    v1 = v1 + 0xf4c;                                            // 0x001a5d70: addiu $v1, $v1, 0xf4c
    v0 = v0 + 0xf4e;                                            // 0x001a5d74: addiu $v0, $v0, 0xf4e
    a0 = v1 + a2;                                               // 0x001a5d78: addu $a0, $v1, $a2
    *(uint32_t*)(a1) = 0;                                       // 0x001a5d7c: sw $zero, 0($a1)
    v1 = v0 + a2;                                               // 0x001a5d80: addu $v1, $v0, $a2
    g_002a0f48 = 0;  // Global at 0x002a0f48                    // 0x001a5d84: sh $zero, 0($a0)
    v0 = 0x2a << 16;                                            // 0x001a5d88: lui $v0, 0x2a
    g_002a0f4c = 0;  // Global at 0x002a0f4c                    // 0x001a5d8c: sh $zero, 0($v1)
    v0 = v0 + 0xf58;                                            // 0x001a5d90: addiu $v0, $v0, 0xf58
    v0 = v0 + a2;                                               // 0x001a5d94: addu $v0, $v0, $a2
    g_002a0f58 = 0;  // Global at 0x002a0f58                    // 0x001a5d98: sh $zero, 0($v0)
    v0 = 0x2a << 16;                                            // 0x001a5d9c: lui $v0, 0x2a
    v0 = v0 + 0xf5a;                                            // 0x001a5da0: addiu $v0, $v0, 0xf5a
    v1 = v0 + a2;                                               // 0x001a5da4: addu $v1, $v0, $a2
    v0 = 1;                                                     // 0x001a5da8: addiu $v0, $zero, 1
    goto label_0x1a6014;                                        // 0x001a5dac: b 0x1a6014
    g_002a0f4c = 0;  // Global at 0x002a0f4c                    // 0x001a5db0: sh $zero, 0($v1)
label_0x1a5db4:
    v0 = 0x2a << 16;                                            // 0x001a5db4: lui $v0, 0x2a
    v1 = v1 + s0;                                               // 0x001a5db8: addu $v1, $v1, $s0
    v0 = v0 + 0xf42;                                            // 0x001a5dbc: addiu $v0, $v0, 0xf42
    a1 = v1 << 2;                                               // 0x001a5dc0: sll $a1, $v1, 2
    t0 = v0 + a1;                                               // 0x001a5dc4: addu $t0, $v0, $a1
    v0 = *(uint16_t*)(t0);                                      // 0x001a5dc8: lhu $v0, 0($t0)
    if (v0 == 0) goto label_0x1a5de8;                           // 0x001a5dcc: beqz $v0, 0x1a5de8
    /* nop */                                                   // 0x001a5dd0: nop 
    v0 = v0 & 1;                                                // 0x001a5dd4: andi $v0, $v0, 1
    if (v0 != 0) goto label_0x1a5de8;                           // 0x001a5dd8: bnez $v0, 0x1a5de8
    /* nop */                                                   // 0x001a5ddc: nop 
    v0 = 0 | 0x8000;                                            // 0x001a5de0: ori $v0, $zero, 0x8000
    *(uint16_t*)(t0) = v0;                                      // 0x001a5de4: sh $v0, 0($t0)
label_0x1a5de8:
    v1 = 0x2a << 16;                                            // 0x001a5de8: lui $v1, 0x2a
    v0 = 0x20;                                                  // 0x001a5dec: addiu $v0, $zero, 0x20
    v1 = v1 + 0xf02;                                            // 0x001a5df0: addiu $v1, $v1, 0xf02
    a0 = v1 + a2;                                               // 0x001a5df4: addu $a0, $v1, $a2
    v1 = g_002a0f48;  // Global at 0x002a0f48                   // 0x001a5df8: lhu $v1, 0($a0)
    v1 = ~v1;                                                   // 0x001a5dfc: not $v1, $v1
    g_002a0f48 = v1;  // Global at 0x002a0f48                   // 0x001a5e00: sh $v1, 0($a0)
    v1 = *(uint16_t*)(t0);                                      // 0x001a5e04: lhu $v1, 0($t0)
    if (v1 == v0) goto label_0x1a5e54;                          // 0x001a5e08: beq $v1, $v0, 0x1a5e54
    /* nop */                                                   // 0x001a5e0c: nop 
    v0 = 0x10;                                                  // 0x001a5e10: addiu $v0, $zero, 0x10
    if (v1 == v0) goto label_0x1a5e54;                          // 0x001a5e14: beq $v1, $v0, 0x1a5e54
    /* nop */                                                   // 0x001a5e18: nop 
    v0 = 8;                                                     // 0x001a5e1c: addiu $v0, $zero, 8
    if (v1 == v0) goto label_0x1a5e54;                          // 0x001a5e20: beq $v1, $v0, 0x1a5e54
    /* nop */                                                   // 0x001a5e24: nop 
    v0 = 4;                                                     // 0x001a5e28: addiu $v0, $zero, 4
    if (v1 == v0) goto label_0x1a5e54;                          // 0x001a5e2c: beq $v1, $v0, 0x1a5e54
    /* nop */                                                   // 0x001a5e30: nop 
    v0 = 2;                                                     // 0x001a5e34: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1a5e54;                          // 0x001a5e38: beq $v1, $v0, 0x1a5e54
    /* nop */                                                   // 0x001a5e3c: nop 
    v0 = 1;                                                     // 0x001a5e40: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1a5e54;                          // 0x001a5e44: beq $v1, $v0, 0x1a5e54
    /* nop */                                                   // 0x001a5e48: nop 
    goto label_0x1a5fc4;                                        // 0x001a5e4c: b 0x1a5fc4
    v1 = 0x2a << 16;                                            // 0x001a5e50: lui $v1, 0x2a
label_0x1a5e54:
    v0 = 0x2a << 16;                                            // 0x001a5e54: lui $v0, 0x2a
    v1 = s0 << 7;                                               // 0x001a5e58: sll $v1, $s0, 7
    v0 = v0 + 0xe40;                                            // 0x001a5e5c: addiu $v0, $v0, 0xe40
    t0 = v0 + v1;                                               // 0x001a5e64: addu $t0, $v0, $v1
    v0 = a3 + 2;                                                // 0x001a5e6c: addiu $v0, $a3, 2
    a0 = g_002a0e40;  // Global at 0x002a0e40                   // 0x001a5e70: lhu $a0, 0($v0)
    v1 = 0x23 << 16;                                            // 0x001a5e74: lui $v1, 0x23
    v1 = v1 + -0x5d30;                                          // 0x001a5e78: addiu $v1, $v1, -0x5d30
    v0 = t2 << 3;                                               // 0x001a5e7c: sll $v0, $t2, 3
label_0x1a5e80:
    v0 = t0 + v0;                                               // 0x001a5e80: addu $v0, $t0, $v0
    v0 = g_002a0e40;  // Global at 0x002a0e40                   // 0x001a5e84: lw $v0, 0($v0)
    v0 = a0 & v0;                                               // 0x001a5e88: and $v0, $a0, $v0
    if (v0 == 0) goto label_0x1a5ea0;                           // 0x001a5e8c: beqz $v0, 0x1a5ea0
    v0 = t2 << 2;                                               // 0x001a5e90: sll $v0, $t2, 2
    v0 = v1 + v0;                                               // 0x001a5e94: addu $v0, $v1, $v0
    v0 = g_002a0e40;  // Global at 0x002a0e40                   // 0x001a5e98: lw $v0, 0($v0)
    t1 = t1 | v0;                                               // 0x001a5e9c: or $t1, $t1, $v0
label_0x1a5ea0:
    t2 = t2 + 1;                                                // 0x001a5ea0: addiu $t2, $t2, 1
    v0 = (t2 < 0x10) ? 1 : 0;                                   // 0x001a5ea4: slti $v0, $t2, 0x10
    if (v0 != 0) goto label_0x1a5e80;                           // 0x001a5ea8: bnez $v0, 0x1a5e80
    v0 = t2 << 3;                                               // 0x001a5eac: sll $v0, $t2, 3
    v1 = 0x2a << 16;                                            // 0x001a5eb0: lui $v1, 0x2a
    v0 = 0x2a << 16;                                            // 0x001a5eb4: lui $v0, 0x2a
    v1 = v1 + 0xf48;                                            // 0x001a5eb8: addiu $v1, $v1, 0xf48
    v0 = v0 + 0xf41;                                            // 0x001a5ebc: addiu $v0, $v0, 0xf41
    v1 = v1 + a1;                                               // 0x001a5ec0: addu $v1, $v1, $a1
    t0 = v0 + a1;                                               // 0x001a5ec4: addu $t0, $v0, $a1
    g_002a0f48 = t1;  // Global at 0x002a0f48                   // 0x001a5ec8: sw $t1, 0($v1)
    v0 = *(uint8_t*)(t0);                                       // 0x001a5ecc: lbu $v0, 0($t0)
    v0 = v0 & 0x20;                                             // 0x001a5ed0: andi $v0, $v0, 0x20
    if (v0 == 0) goto label_0x1a5f20;                           // 0x001a5ed4: beqz $v0, 0x1a5f20
    v0 = 0x2a << 16;                                            // 0x001a5ed8: lui $v0, 0x2a
    v0 = v0 + 0xf06;                                            // 0x001a5edc: addiu $v0, $v0, 0xf06
    v0 = v0 + a2;                                               // 0x001a5ee0: addu $v0, $v0, $a2
    func_001a5c40();  // 1a5c40                                // 0x001a5ee4: jal 0x1a5c40
    a0 = g_002a0f06;  // Global at 0x002a0f06                   // 0x001a5ee8: lbu $a0, 0($v0)
    a0 = 0x2a << 16;                                            // 0x001a5eec: lui $a0, 0x2a
    v1 = 0x2a << 16;                                            // 0x001a5ef0: lui $v1, 0x2a
    a0 = a0 + 0xf4c;                                            // 0x001a5ef4: addiu $a0, $a0, 0xf4c
    v1 = v1 + 0xf07;                                            // 0x001a5ef8: addiu $v1, $v1, 0xf07
    a0 = a0 + a1;                                               // 0x001a5efc: addu $a0, $a0, $a1
    v1 = v1 + a2;                                               // 0x001a5f00: addu $v1, $v1, $a2
    g_002a0f4c = v0;  // Global at 0x002a0f4c                   // 0x001a5f04: sh $v0, 0($a0)
    func_001a5c40();  // 1a5c40                                // 0x001a5f08: jal 0x1a5c40
    a0 = g_002a0f07;  // Global at 0x002a0f07                   // 0x001a5f0c: lbu $a0, 0($v1)
    v1 = 0x2a << 16;                                            // 0x001a5f10: lui $v1, 0x2a
    v1 = v1 + 0xf4e;                                            // 0x001a5f14: addiu $v1, $v1, 0xf4e
    v1 = v1 + a1;                                               // 0x001a5f18: addu $v1, $v1, $a1
    g_002a0f4e = v0;  // Global at 0x002a0f4e                   // 0x001a5f1c: sh $v0, 0($v1)
label_0x1a5f20:
    v0 = *(uint8_t*)(t0);                                       // 0x001a5f20: lbu $v0, 0($t0)
    v0 = v0 & 0x40;                                             // 0x001a5f24: andi $v0, $v0, 0x40
    if (v0 == 0) goto label_0x1a5f78;                           // 0x001a5f28: beqz $v0, 0x1a5f78
    /* nop */                                                   // 0x001a5f2c: nop 
    v0 = 0x2a << 16;                                            // 0x001a5f30: lui $v0, 0x2a
    v0 = v0 + 0xf04;                                            // 0x001a5f34: addiu $v0, $v0, 0xf04
    v0 = v0 + a2;                                               // 0x001a5f38: addu $v0, $v0, $a2
    func_001a5c40();  // 1a5c40                                // 0x001a5f3c: jal 0x1a5c40
    a0 = g_002a0f04;  // Global at 0x002a0f04                   // 0x001a5f40: lbu $a0, 0($v0)
    a0 = 0x2a << 16;                                            // 0x001a5f44: lui $a0, 0x2a
    v1 = 0x2a << 16;                                            // 0x001a5f48: lui $v1, 0x2a
    a0 = a0 + 0xf58;                                            // 0x001a5f4c: addiu $a0, $a0, 0xf58
    v1 = v1 + 0xf05;                                            // 0x001a5f50: addiu $v1, $v1, 0xf05
    a0 = a0 + a1;                                               // 0x001a5f54: addu $a0, $a0, $a1
    v1 = v1 + a2;                                               // 0x001a5f58: addu $v1, $v1, $a2
    g_002a0f58 = v0;  // Global at 0x002a0f58                   // 0x001a5f5c: sh $v0, 0($a0)
    func_001a5c40();  // 1a5c40                                // 0x001a5f60: jal 0x1a5c40
    a0 = g_002a0f05;  // Global at 0x002a0f05                   // 0x001a5f64: lbu $a0, 0($v1)
    v1 = 0x2a << 16;                                            // 0x001a5f68: lui $v1, 0x2a
    v1 = v1 + 0xf5a;                                            // 0x001a5f6c: addiu $v1, $v1, 0xf5a
    v1 = v1 + a1;                                               // 0x001a5f70: addu $v1, $v1, $a1
    g_002a0f5a = v0;  // Global at 0x002a0f5a                   // 0x001a5f74: sh $v0, 0($v1)
label_0x1a5f78:
    v0 = 0x2a << 16;                                            // 0x001a5f78: lui $v0, 0x2a
    a0 = 8;                                                     // 0x001a5f7c: addiu $a0, $zero, 8
    v0 = v0 + 0xee0;                                            // 0x001a5f80: addiu $v0, $v0, 0xee0
    a1 = v0 + a2;                                               // 0x001a5f84: addu $a1, $v0, $a2
label_0x1a5f88:
    v1 = *(int16_t*)(a3);                                       // 0x001a5f88: lh $v1, 0($a3)
    a0 = a0 + -1;                                               // 0x001a5f8c: addiu $a0, $a0, -1
    v0 = *(int16_t*)((a3) + 2);                                 // 0x001a5f90: lh $v0, 2($a3)
    *(uint16_t*)(a1) = v1;                                      // 0x001a5f94: sh $v1, 0($a1)
    a3 = a3 + 4;                                                // 0x001a5f98: addiu $a3, $a3, 4
    *(uint16_t*)((a1) + 2) = v0;                                // 0x001a5f9c: sh $v0, 2($a1)
    if (a0 > 0) goto label_0x1a5f88;                            // 0x001a5fa0: bgtz $a0, 0x1a5f88
    a1 = a1 + 4;                                                // 0x001a5fa4: addiu $a1, $a1, 4
    v0 = 0x2a << 16;                                            // 0x001a5fa8: lui $v0, 0x2a
    v0 = v0 + 0xee2;                                            // 0x001a5fac: addiu $v0, $v0, 0xee2
    v1 = v0 + a2;                                               // 0x001a5fb0: addu $v1, $v0, $a2
    v0 = g_002a0f5a;  // Global at 0x002a0f5a                   // 0x001a5fb4: lhu $v0, 0($v1)
    v0 = ~v0;                                                   // 0x001a5fb8: not $v0, $v0
    goto label_0x1a6010;                                        // 0x001a5fbc: b 0x1a6010
    g_002a0f5a = v0;  // Global at 0x002a0f5a                   // 0x001a5fc0: sh $v0, 0($v1)
label_0x1a5fc4:
    v0 = 0x2a << 16;                                            // 0x001a5fc4: lui $v0, 0x2a
    v1 = v1 + 0xf48;                                            // 0x001a5fc8: addiu $v1, $v1, 0xf48
    v0 = v0 + 0xf4c;                                            // 0x001a5fcc: addiu $v0, $v0, 0xf4c
    a0 = v1 + a1;                                               // 0x001a5fd0: addu $a0, $v1, $a1
    v1 = v0 + a1;                                               // 0x001a5fd4: addu $v1, $v0, $a1
    g_002a0f57 = 0;  // Global at 0x002a0f57                    // 0x001a5fd8: sw $zero, 0($a0)
    v0 = 0x2a << 16;                                            // 0x001a5fdc: lui $v0, 0x2a
    g_002a1ea2 = 0;  // Global at 0x002a1ea2                    // 0x001a5fe0: sh $zero, 0($v1)
    v0 = v0 + 0xf4e;                                            // 0x001a5fe4: addiu $v0, $v0, 0xf4e
    v0 = v0 + a1;                                               // 0x001a5fe8: addu $v0, $v0, $a1
    g_002a0f4e = 0;  // Global at 0x002a0f4e                    // 0x001a5fec: sh $zero, 0($v0)
    v0 = 0x2a << 16;                                            // 0x001a5ff0: lui $v0, 0x2a
    v0 = v0 + 0xf58;                                            // 0x001a5ff4: addiu $v0, $v0, 0xf58
    v1 = v0 + a1;                                               // 0x001a5ff8: addu $v1, $v0, $a1
    v0 = 0x2a << 16;                                            // 0x001a5ffc: lui $v0, 0x2a
    g_002a1ea2 = 0;  // Global at 0x002a1ea2                    // 0x001a6000: sh $zero, 0($v1)
    v0 = v0 + 0xf5a;                                            // 0x001a6004: addiu $v0, $v0, 0xf5a
    v0 = v0 + a1;                                               // 0x001a6008: addu $v0, $v0, $a1
    g_002a0f5a = 0;  // Global at 0x002a0f5a                    // 0x001a600c: sh $zero, 0($v0)
label_0x1a6010:
    v0 = 1;                                                     // 0x001a6010: addiu $v0, $zero, 1
label_0x1a6014:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a6018: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a601c: jr $ra
    sp = sp + 0x20;                                             // 0x001a6020: addiu $sp, $sp, 0x20
}