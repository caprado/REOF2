void func_00122da0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00122da0: addiu $sp, $sp, -0x30
    s0 = 0x4d52 << 16;                                          // 0x00122dac: lui $s0, 0x4d52
    s1 = 0xff << 16;                                            // 0x00122db4: lui $s1, 0xff
    s0 = s0 | 0x4f46;                                           // 0x00122dd8: ori $s0, $s0, 0x4f46
    t7 = *(uint8_t*)(t8);                                       // 0x00122ddc: lbu $t7, 0($t8)
    t6 = *(uint8_t*)((t8) + 3);                                 // 0x00122de0: lbu $t6, 3($t8)
    t4 = *(uint8_t*)((t8) + 2);                                 // 0x00122de4: lbu $t4, 2($t8)
    t5 = *(uint8_t*)((t8) + 1);                                 // 0x00122de8: lbu $t5, 1($t8)
    t8 = t8 + 4;                                                // 0x00122dec: addiu $t8, $t8, 4
    a1 = *(uint8_t*)((t8) + 3);                                 // 0x00122df0: lbu $a1, 3($t8)
    t6 = t6 << 0x18;                                            // 0x00122df4: sll $t6, $t6, 0x18
    v1 = *(uint8_t*)((t8) + 2);                                 // 0x00122df8: lbu $v1, 2($t8)
    t5 = t5 << 8;                                               // 0x00122dfc: sll $t5, $t5, 8
    a0 = *(uint8_t*)((t8) + 1);                                 // 0x00122e00: lbu $a0, 1($t8)
    a1 = a1 << 0x18;                                            // 0x00122e04: sll $a1, $a1, 0x18
    v0 = *(uint8_t*)(t8);                                       // 0x00122e08: lbu $v0, 0($t8)
    t8 = t8 + 4;                                                // 0x00122e0c: addiu $t8, $t8, 4
    a0 = a0 << 8;                                               // 0x00122e10: sll $a0, $a0, 8
    v1 = v1 << 0x10;                                            // 0x00122e14: sll $v1, $v1, 0x10
    v0 = v0 | a1;                                               // 0x00122e18: or $v0, $v0, $a1
    a1 = *(uint8_t*)((t8) + 2);                                 // 0x00122e1c: lbu $a1, 2($t8)
    v1 = v1 | a0;                                               // 0x00122e20: or $v1, $v1, $a0
    t3 = *(uint8_t*)((t8) + 3);                                 // 0x00122e24: lbu $t3, 3($t8)
    t9 = v0 | v1;                                               // 0x00122e28: or $t9, $v0, $v1
    t2 = *(uint8_t*)((t8) + 1);                                 // 0x00122e2c: lbu $t2, 1($t8)
    v1 = t9 >> 8;                                               // 0x00122e30: sra $v1, $t9, 8
    a0 = (unsigned)t9 >> 0x18;                                  // 0x00122e34: srl $a0, $t9, 0x18
    v0 = t9 << 8;                                               // 0x00122e38: sll $v0, $t9, 8
    t1 = *(uint8_t*)(t8);                                       // 0x00122e3c: lbu $t1, 0($t8)
    t4 = t4 << 0x10;                                            // 0x00122e40: sll $t4, $t4, 0x10
    v1 = v1 & 0xff00;                                           // 0x00122e44: andi $v1, $v1, 0xff00
    v0 = v0 & s1;                                               // 0x00122e48: and $v0, $v0, $s1
    t7 = t7 | t6;                                               // 0x00122e50: or $t7, $t7, $t6
    t4 = t4 | t5;                                               // 0x00122e58: or $t4, $t4, $t5
    a0 = a0 | v1;                                               // 0x00122e60: or $a0, $a0, $v1
    t3 = t3 << 0x18;                                            // 0x00122e64: sll $t3, $t3, 0x18
    a1 = a1 << 0x10;                                            // 0x00122e68: sll $a1, $a1, 0x10
    t2 = t2 << 8;                                               // 0x00122e6c: sll $t2, $t2, 8
    a0 = a0 | v0;                                               // 0x00122e70: or $a0, $a0, $v0
    v0 = t9 << 0x18;                                            // 0x00122e74: sll $v0, $t9, 0x18
    t1 = t1 | t3;                                               // 0x00122e78: or $t1, $t1, $t3
    a1 = a1 | t2;                                               // 0x00122e7c: or $a1, $a1, $t2
    t7 = t7 | t4;                                               // 0x00122e80: or $t7, $t7, $t4
    t9 = a0 | v0;                                               // 0x00122e84: or $t9, $a0, $v0
    t1 = t1 | a1;                                               // 0x00122e88: or $t1, $t1, $a1
    t8 = t8 + 4;                                                // 0x00122e8c: addiu $t8, $t8, 4
    if (t7 != s0) goto label_0x12310c;                          // 0x00122e90: bne $t7, $s0, 0x12310c
    v0 = 0x4646 << 16;                                          // 0x00122e98: lui $v0, 0x4646
    v0 = v0 | 0x4941;                                           // 0x00122e9c: ori $v0, $v0, 0x4941
    if (t1 == v0) goto label_0x122eb0;                          // 0x00122ea0: beql $t1, $v0, 0x122eb0
    v0 = t8 + t9;                                               // 0x00122ea4: addu $v0, $t8, $t9
    goto label_0x12310c;                                        // 0x00122ea8: b 0x12310c
label_0x122eb0:
    t3 = v0 + -4;                                               // 0x00122eb0: addiu $t3, $v0, -4
    v1 = ((unsigned)t8 < (unsigned)t3) ? 1 : 0;                 // 0x00122eb4: sltu $v1, $t8, $t3
    if (v1 == 0) goto label_0x12310c;                           // 0x00122eb8: beqz $v1, 0x12310c
    t4 = 0xff << 16;                                            // 0x00122ec0: lui $t4, 0xff
    s0 = -0x100;                                                // 0x00122ec4: addiu $s0, $zero, -0x100
    t1 = *(uint8_t*)(t8);                                       // 0x00122ec8: lbu $t1, 0($t8)
    /* nop */                                                   // 0x00122ecc: nop 
    t2 = 0x444e << 16;                                          // 0x00122ed0: lui $t2, 0x444e
    t0 = *(uint8_t*)((t8) + 3);                                 // 0x00122ed4: lbu $t0, 3($t8)
    t2 = t2 | 0x5353;                                           // 0x00122ed8: ori $t2, $t2, 0x5353
    a2 = *(uint8_t*)((t8) + 2);                                 // 0x00122edc: lbu $a2, 2($t8)
    a3 = *(uint8_t*)((t8) + 1);                                 // 0x00122ee0: lbu $a3, 1($t8)
    t8 = t8 + 4;                                                // 0x00122ee4: addiu $t8, $t8, 4
    a1 = *(uint8_t*)((t8) + 3);                                 // 0x00122ee8: lbu $a1, 3($t8)
    t0 = t0 << 0x18;                                            // 0x00122eec: sll $t0, $t0, 0x18
    v1 = *(uint8_t*)((t8) + 2);                                 // 0x00122ef0: lbu $v1, 2($t8)
    a2 = a2 << 0x10;                                            // 0x00122ef4: sll $a2, $a2, 0x10
    a0 = *(uint8_t*)((t8) + 1);                                 // 0x00122ef8: lbu $a0, 1($t8)
    a1 = a1 << 0x18;                                            // 0x00122efc: sll $a1, $a1, 0x18
    v0 = *(uint8_t*)(t8);                                       // 0x00122f00: lbu $v0, 0($t8)
    t8 = t8 + 4;                                                // 0x00122f04: addiu $t8, $t8, 4
    a0 = a0 << 8;                                               // 0x00122f08: sll $a0, $a0, 8
    v1 = v1 << 0x10;                                            // 0x00122f0c: sll $v1, $v1, 0x10
    v1 = v1 | a0;                                               // 0x00122f10: or $v1, $v1, $a0
    v0 = v0 | a1;                                               // 0x00122f14: or $v0, $v0, $a1
    t9 = v0 | v1;                                               // 0x00122f18: or $t9, $v0, $v1
    a3 = a3 << 8;                                               // 0x00122f1c: sll $a3, $a3, 8
    v1 = t9 >> 8;                                               // 0x00122f20: sra $v1, $t9, 8
    a0 = (unsigned)t9 >> 0x18;                                  // 0x00122f24: srl $a0, $t9, 0x18
    v0 = t9 << 8;                                               // 0x00122f28: sll $v0, $t9, 8
    v1 = v1 & 0xff00;                                           // 0x00122f2c: andi $v1, $v1, 0xff00
    v0 = v0 & t4;                                               // 0x00122f30: and $v0, $v0, $t4
    t1 = t1 | t0;                                               // 0x00122f34: or $t1, $t1, $t0
    a2 = a2 | a3;                                               // 0x00122f38: or $a2, $a2, $a3
    a0 = a0 | v1;                                               // 0x00122f3c: or $a0, $a0, $v1
    a0 = a0 | v0;                                               // 0x00122f40: or $a0, $a0, $v0
    v0 = t9 << 0x18;                                            // 0x00122f44: sll $v0, $t9, 0x18
    t7 = t1 | a2;                                               // 0x00122f48: or $t7, $t1, $a2
    if (t7 == t2) goto label_0x123080;                          // 0x00122f4c: beq $t7, $t2, 0x123080
    t9 = a0 | v0;                                               // 0x00122f50: or $t9, $a0, $v0
    v0 = 0x4d4d << 16;                                          // 0x00122f54: lui $v0, 0x4d4d
    v0 = v0 | 0x4f43;                                           // 0x00122f58: ori $v0, $v0, 0x4f43
    if (t7 != v0) goto label_0x1230f0;                          // 0x00122f5c: bne $t7, $v0, 0x1230f0
    v0 = t9 + 1;                                                // 0x00122f60: addiu $v0, $t9, 1
    if (t5 != 0) goto label_0x123100;                           // 0x00122f64: bnez $t5, 0x123100
    v0 = ((unsigned)t8 < (unsigned)t3) ? 1 : 0;                 // 0x00122f68: sltu $v0, $t8, $t3
    v0 = (t9 < 0x12) ? 1 : 0;                                   // 0x00122f6c: slti $v0, $t9, 0x12
    if (v0 != 0) goto label_0x12310c;                           // 0x00122f70: bnez $v0, 0x12310c
    a0 = *(uint8_t*)((t8) + 1);                                 // 0x00122f78: lbu $a0, 1($t8)
    a2 = 0x400e;                                                // 0x00122f7c: addiu $a2, $zero, 0x400e
    v0 = *(uint8_t*)(t8);                                       // 0x00122f80: lbu $v0, 0($t8)
    t8 = t8 + 2;                                                // 0x00122f84: addiu $t8, $t8, 2
    a0 = a0 << 8;                                               // 0x00122f88: sll $a0, $a0, 8
    t5 = 1;                                                     // 0x00122f8c: addiu $t5, $zero, 1
    v0 = v0 | a0;                                               // 0x00122f90: or $v0, $v0, $a0
    v1 = v0 << 8;                                               // 0x00122f94: sll $v1, $v0, 8
    v0 = (unsigned)v0 >> 8;                                     // 0x00122f98: srl $v0, $v0, 8
    v1 = v1 & 0xff00;                                           // 0x00122f9c: andi $v1, $v1, 0xff00
    v0 = v0 | v1;                                               // 0x00122fa0: or $v0, $v0, $v1
    *(uint32_t*)(s4) = v0;                                      // 0x00122fa4: sw $v0, 0($s4)
    a1 = *(uint8_t*)((t8) + 3);                                 // 0x00122fa8: lbu $a1, 3($t8)
    v0 = *(uint8_t*)((t8) + 2);                                 // 0x00122fac: lbu $v0, 2($t8)
    a0 = *(uint8_t*)((t8) + 1);                                 // 0x00122fb0: lbu $a0, 1($t8)
    a1 = a1 << 0x18;                                            // 0x00122fb4: sll $a1, $a1, 0x18
    v1 = *(uint8_t*)(t8);                                       // 0x00122fb8: lbu $v1, 0($t8)
    t8 = t8 + 4;                                                // 0x00122fbc: addiu $t8, $t8, 4
    a0 = a0 << 8;                                               // 0x00122fc0: sll $a0, $a0, 8
    v0 = v0 << 0x10;                                            // 0x00122fc4: sll $v0, $v0, 0x10
    v0 = v0 | a0;                                               // 0x00122fc8: or $v0, $v0, $a0
    v1 = v1 | a1;                                               // 0x00122fcc: or $v1, $v1, $a1
    v1 = v1 | v0;                                               // 0x00122fd0: or $v1, $v1, $v0
    a1 = v1 >> 8;                                               // 0x00122fd4: sra $a1, $v1, 8
    a0 = v1 << 8;                                               // 0x00122fd8: sll $a0, $v1, 8
    a1 = a1 & 0xff00;                                           // 0x00122fdc: andi $a1, $a1, 0xff00
    v0 = (unsigned)v1 >> 0x18;                                  // 0x00122fe0: srl $v0, $v1, 0x18
    a0 = a0 & t4;                                               // 0x00122fe4: and $a0, $a0, $t4
    v1 = v1 << 0x18;                                            // 0x00122fe8: sll $v1, $v1, 0x18
    a0 = a0 | a1;                                               // 0x00122fec: or $a0, $a0, $a1
    v0 = v0 | v1;                                               // 0x00122ff0: or $v0, $v0, $v1
    v0 = v0 | a0;                                               // 0x00122ff4: or $v0, $v0, $a0
    *(uint32_t*)(s2) = v0;                                      // 0x00122ff8: sw $v0, 0($s2)
    a0 = *(uint8_t*)((t8) + 1);                                 // 0x00122ffc: lbu $a0, 1($t8)
    v0 = *(uint8_t*)(t8);                                       // 0x00123000: lbu $v0, 0($t8)
    t8 = t8 + 2;                                                // 0x00123004: addiu $t8, $t8, 2
    a0 = a0 << 8;                                               // 0x00123008: sll $a0, $a0, 8
    v0 = v0 | a0;                                               // 0x0012300c: or $v0, $v0, $a0
    v1 = v0 << 8;                                               // 0x00123010: sll $v1, $v0, 8
    v0 = (unsigned)v0 >> 8;                                     // 0x00123014: srl $v0, $v0, 8
    v1 = v1 & 0xff00;                                           // 0x00123018: andi $v1, $v1, 0xff00
    v0 = v0 | v1;                                               // 0x0012301c: or $v0, $v0, $v1
    *(uint32_t*)(s3) = v0;                                      // 0x00123020: sw $v0, 0($s3)
    a1 = *(uint8_t*)(t8);                                       // 0x00123024: lbu $a1, 0($t8)
    a0 = *(uint8_t*)((t8) + 1);                                 // 0x00123028: lbu $a0, 1($t8)
    t8 = t8 + 2;                                                // 0x0012302c: addiu $t8, $t8, 2
    v1 = *(uint8_t*)((t8) + 1);                                 // 0x00123030: lbu $v1, 1($t8)
    v0 = *(uint8_t*)(t8);                                       // 0x00123034: lbu $v0, 0($t8)
    t8 = t8 + 8;                                                // 0x00123038: addiu $t8, $t8, 8
    v1 = v1 << 8;                                               // 0x0012303c: sll $v1, $v1, 8
    a0 = a0 << 8;                                               // 0x00123040: sll $a0, $a0, 8
    v0 = v0 | v1;                                               // 0x00123044: or $v0, $v0, $v1
    a1 = a1 | a0;                                               // 0x00123048: or $a1, $a1, $a0
    v1 = v0 << 8;                                               // 0x0012304c: sll $v1, $v0, 8
    v0 = (unsigned)v0 >> 8;                                     // 0x00123050: srl $v0, $v0, 8
    v1 = v1 & s0;                                               // 0x00123054: and $v1, $v1, $s0
    a1 = (unsigned)a1 >> 8;                                     // 0x00123058: srl $a1, $a1, 8
    v0 = v0 | v1;                                               // 0x0012305c: or $v0, $v0, $v1
    a2 = a2 - a1;                                               // 0x00123060: subu $a2, $a2, $a1
    v0 = v0 & 0xffff;                                           // 0x00123064: andi $v0, $v0, 0xffff
    v0 = v0 >> a2;                                              // 0x00123068: srav $v0, $v0, $a2
    if (t6 == 0) goto label_0x1230fc;                           // 0x0012306c: beqz $t6, 0x1230fc
    *(uint32_t*)(s5) = v0;                                      // 0x00123070: sw $v0, 0($s5)
    goto label_0x12310c;                                        // 0x00123074: b 0x12310c
    /* nop */                                                   // 0x0012307c: nop 
label_0x123080:
    if (t6 != 0) goto label_0x123100;                           // 0x00123080: bnez $t6, 0x123100
    v0 = ((unsigned)t8 < (unsigned)t3) ? 1 : 0;                 // 0x00123084: sltu $v0, $t8, $t3
    a1 = *(uint8_t*)((t8) + 3);                                 // 0x00123088: lbu $a1, 3($t8)
    t6 = 1;                                                     // 0x0012308c: addiu $t6, $zero, 1
    v0 = *(uint8_t*)((t8) + 2);                                 // 0x00123090: lbu $v0, 2($t8)
    a0 = *(uint8_t*)((t8) + 1);                                 // 0x00123094: lbu $a0, 1($t8)
    a1 = a1 << 0x18;                                            // 0x00123098: sll $a1, $a1, 0x18
    v1 = *(uint8_t*)(t8);                                       // 0x0012309c: lbu $v1, 0($t8)
    t8 = t8 + 4;                                                // 0x001230a0: addiu $t8, $t8, 4
    a0 = a0 << 8;                                               // 0x001230a4: sll $a0, $a0, 8
    v0 = v0 << 0x10;                                            // 0x001230a8: sll $v0, $v0, 0x10
    v1 = v1 | a1;                                               // 0x001230ac: or $v1, $v1, $a1
    v0 = v0 | a0;                                               // 0x001230b0: or $v0, $v0, $a0
    v0 = v1 | v0;                                               // 0x001230b4: or $v0, $v1, $v0
    a1 = (unsigned)v0 >> 8;                                     // 0x001230b8: srl $a1, $v0, 8
    a0 = v0 << 8;                                               // 0x001230bc: sll $a0, $v0, 8
    v1 = (unsigned)v0 >> 0x18;                                  // 0x001230c0: srl $v1, $v0, 0x18
    v0 = v0 << 0x18;                                            // 0x001230c4: sll $v0, $v0, 0x18
    a0 = a0 & t4;                                               // 0x001230c8: and $a0, $a0, $t4
    a1 = a1 & 0xff00;                                           // 0x001230cc: andi $a1, $a1, 0xff00
    v1 = v1 | v0;                                               // 0x001230d0: or $v1, $v1, $v0
    a0 = a0 | a1;                                               // 0x001230d4: or $a0, $a0, $a1
    v0 = v1 | a0;                                               // 0x001230d8: or $v0, $v1, $a0
    if (t5 == 0) goto label_0x1230fc;                           // 0x001230dc: beqz $t5, 0x1230fc
    s1 = t8 + v0;                                               // 0x001230e0: addu $s1, $t8, $v0
    goto label_0x12310c;                                        // 0x001230e4: b 0x12310c
    /* nop */                                                   // 0x001230ec: nop 
label_0x1230f0:
    v1 = -2;                                                    // 0x001230f0: addiu $v1, $zero, -2
    v0 = v0 & v1;                                               // 0x001230f4: and $v0, $v0, $v1
    t8 = t8 + v0;                                               // 0x001230f8: addu $t8, $t8, $v0
label_0x1230fc:
    v0 = ((unsigned)t8 < (unsigned)t3) ? 1 : 0;                 // 0x001230fc: sltu $v0, $t8, $t3
label_0x123100:
    /* bnezl $v0, 0x122ed0 */                                   // 0x00123100: bnezl $v0, 0x122ed0
    t1 = *(uint8_t*)(t8);                                       // 0x00123104: lbu $t1, 0($t8)
label_0x12310c:
    return;                                                     // 0x00123124: jr $ra
    sp = sp + 0x30;                                             // 0x00123128: addiu $sp, $sp, 0x30
}