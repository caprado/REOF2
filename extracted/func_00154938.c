void func_00154938() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t2 = a0 + 0x128;                                            // 0x00154938: addiu $t2, $a0, 0x128
    a0 = 2;                                                     // 0x0015493c: addiu $a0, $zero, 2
    v1 = *(int32_t*)((t2) + 0x4f4);                             // 0x00154940: lw $v1, 0x4f4($t2)
    *(uint32_t*)((t2) + 0x4dc) = a0;                            // 0x00154948: sw $a0, 0x4dc($t2)
    v0 = -4;                                                    // 0x0015494c: addiu $v0, $zero, -4
    v1 = v1 + 1;                                                // 0x00154950: addiu $v1, $v1, 1
    a3 = t3 & v0;                                               // 0x00154954: and $a3, $t3, $v0
    *(uint32_t*)((t2) + 0x4f4) = v1;                            // 0x00154958: sw $v1, 0x4f4($t2)
    v0 = t3 - a3;                                               // 0x0015495c: subu $v0, $t3, $a3
    t1 = v0 << 3;                                               // 0x00154960: sll $t1, $v0, 3
    t0 = *(int8_t*)(a3);                                        // 0x00154964: lb $t0, 0($a3)
    a3 = a3 + 1;                                                // 0x00154968: addiu $a3, $a3, 1
    v1 = *(uint8_t*)(a3);                                       // 0x0015496c: lbu $v1, 0($a3)
    a3 = a3 + 1;                                                // 0x00154970: addiu $a3, $a3, 1
    a0 = *(uint8_t*)(a3);                                       // 0x00154974: lbu $a0, 0($a3)
    a3 = a3 + 1;                                                // 0x00154978: addiu $a3, $a3, 1
    a1 = *(uint8_t*)(a3);                                       // 0x0015497c: lbu $a1, 0($a3)
    a3 = a3 + 1;                                                // 0x00154980: addiu $a3, $a3, 1
    a2 = *(int8_t*)(a3);                                        // 0x00154984: lb $a2, 0($a3)
    a3 = a3 + 1;                                                // 0x00154988: addiu $a3, $a3, 1
    v0 = *(uint8_t*)(a3);                                       // 0x0015498c: lbu $v0, 0($a3)
    a3 = a3 + 1;                                                // 0x00154990: addiu $a3, $a3, 1
    t0 = t0 << 8;                                               // 0x00154994: sll $t0, $t0, 8
    a2 = a2 << 8;                                               // 0x00154998: sll $a2, $a2, 8
    t0 = t0 | v1;                                               // 0x0015499c: or $t0, $t0, $v1
    v1 = *(uint8_t*)(a3);                                       // 0x001549a0: lbu $v1, 0($a3)
    a2 = a2 | v0;                                               // 0x001549a4: or $a2, $a2, $v0
    t0 = t0 << 8;                                               // 0x001549a8: sll $t0, $t0, 8
    a3 = a3 + 1;                                                // 0x001549ac: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x001549b0: sll $a2, $a2, 8
    t0 = t0 | a0;                                               // 0x001549b4: or $t0, $t0, $a0
    v0 = *(uint8_t*)(a3);                                       // 0x001549b8: lbu $v0, 0($a3)
    a2 = a2 | v1;                                               // 0x001549bc: or $a2, $a2, $v1
    t0 = t0 << 8;                                               // 0x001549c0: sll $t0, $t0, 8
    a2 = a2 << 8;                                               // 0x001549c4: sll $a2, $a2, 8
    t0 = t0 | a1;                                               // 0x001549c8: or $t0, $t0, $a1
    a3 = a3 + 1;                                                // 0x001549cc: addiu $a3, $a3, 1
    a2 = a2 | v0;                                               // 0x001549d0: or $a2, $a2, $v0
    if (t1 == 0) goto label_0x1549f8;                           // 0x001549d4: beqz $t1, 0x1549f8
    t0 = t0 << t1;                                              // 0x001549d8: sllv $t0, $t0, $t1
    v0 = -t1;                                                   // 0x001549dc: negu $v0, $t1
    v0 = (unsigned)a2 >> v0;                                    // 0x001549e0: srlv $v0, $a2, $v0
    v0 = t0 | v0;                                               // 0x001549e4: or $v0, $t0, $v0
    t0 = a2 << t1;                                              // 0x001549e8: sllv $t0, $a2, $t1
    goto label_0x154a00;                                        // 0x001549ec: b 0x154a00
    *(uint32_t*)((t2) + 0xb8) = v0;                             // 0x001549f0: sw $v0, 0xb8($t2)
    /* nop */                                                   // 0x001549f4: nop 
label_0x1549f8:
    *(uint32_t*)((t2) + 0xb8) = t0;                             // 0x001549f8: sw $t0, 0xb8($t2)
label_0x154a00:
    a2 = *(int8_t*)(a3);                                        // 0x00154a00: lb $a2, 0($a3)
    a3 = a3 + 1;                                                // 0x00154a04: addiu $a3, $a3, 1
    v0 = *(uint8_t*)(a3);                                       // 0x00154a08: lbu $v0, 0($a3)
    a3 = a3 + 1;                                                // 0x00154a0c: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00154a10: sll $a2, $a2, 8
    v1 = *(uint8_t*)(a3);                                       // 0x00154a14: lbu $v1, 0($a3)
    a2 = a2 | v0;                                               // 0x00154a18: or $a2, $a2, $v0
    v0 = (t1 < 0x1f) ? 1 : 0;                                   // 0x00154a1c: slti $v0, $t1, 0x1f
    a3 = a3 + 1;                                                // 0x00154a20: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00154a24: sll $a2, $a2, 8
    a0 = *(uint8_t*)(a3);                                       // 0x00154a28: lbu $a0, 0($a3)
    a3 = a3 + 1;                                                // 0x00154a2c: addiu $a3, $a3, 1
    a2 = a2 | v1;                                               // 0x00154a30: or $a2, $a2, $v1
    a2 = a2 << 8;                                               // 0x00154a34: sll $a2, $a2, 8
    if (v0 != 0) goto label_0x154ab0;                           // 0x00154a38: bnez $v0, 0x154ab0
    a2 = a2 | a0;                                               // 0x00154a3c: or $a2, $a2, $a0
    t1 = t1 + -0x1f;                                            // 0x00154a40: addiu $t1, $t1, -0x1f
    if (t1 == 0) goto label_0x154a68;                           // 0x00154a44: beqz $t1, 0x154a68
    v0 = 1;                                                     // 0x00154a48: addiu $v0, $zero, 1
    v0 = v0 - t1;                                               // 0x00154a4c: subu $v0, $v0, $t1
    v0 = (unsigned)a2 >> v0;                                    // 0x00154a50: srlv $v0, $a2, $v0
    t0 = t0 | v0;                                               // 0x00154a54: or $t0, $t0, $v0
    v1 = (unsigned)t0 >> 0x1f;                                  // 0x00154a58: srl $v1, $t0, 0x1f
    t0 = a2 << t1;                                              // 0x00154a5c: sllv $t0, $a2, $t1
    goto label_0x154a74;                                        // 0x00154a60: b 0x154a74
    *(uint32_t*)((t2) + 0xbc) = v1;                             // 0x00154a64: sw $v1, 0xbc($t2)
label_0x154a68:
    v0 = (unsigned)t0 >> 0x1f;                                  // 0x00154a68: srl $v0, $t0, 0x1f
    *(uint32_t*)((t2) + 0xbc) = v0;                             // 0x00154a70: sw $v0, 0xbc($t2)
label_0x154a74:
    a2 = *(int8_t*)(a3);                                        // 0x00154a74: lb $a2, 0($a3)
    a3 = a3 + 1;                                                // 0x00154a78: addiu $a3, $a3, 1
    v0 = *(uint8_t*)(a3);                                       // 0x00154a7c: lbu $v0, 0($a3)
    a3 = a3 + 1;                                                // 0x00154a80: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00154a84: sll $a2, $a2, 8
    v1 = *(uint8_t*)(a3);                                       // 0x00154a88: lbu $v1, 0($a3)
    a2 = a2 | v0;                                               // 0x00154a8c: or $a2, $a2, $v0
    a3 = a3 + 1;                                                // 0x00154a90: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00154a94: sll $a2, $a2, 8
    v0 = *(uint8_t*)(a3);                                       // 0x00154a98: lbu $v0, 0($a3)
    a2 = a2 | v1;                                               // 0x00154a9c: or $a2, $a2, $v1
    a3 = a3 + 1;                                                // 0x00154aa0: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00154aa4: sll $a2, $a2, 8
    goto label_0x154ac0;                                        // 0x00154aa8: b 0x154ac0
    a2 = a2 | v0;                                               // 0x00154aac: or $a2, $a2, $v0
label_0x154ab0:
    v0 = (unsigned)t0 >> 0x1f;                                  // 0x00154ab0: srl $v0, $t0, 0x1f
    t0 = t0 << 1;                                               // 0x00154ab4: sll $t0, $t0, 1
    *(uint32_t*)((t2) + 0xbc) = v0;                             // 0x00154ab8: sw $v0, 0xbc($t2)
    t1 = t1 + 1;                                                // 0x00154abc: addiu $t1, $t1, 1
label_0x154ac0:
    v0 = (t1 < 0x1b) ? 1 : 0;                                   // 0x00154ac0: slti $v0, $t1, 0x1b
    if (v0 != 0) goto label_0x154b40;                           // 0x00154ac4: bnez $v0, 0x154b40
    v0 = (unsigned)t0 >> 0x1b;                                  // 0x00154ac8: srl $v0, $t0, 0x1b
    t1 = t1 + -0x1b;                                            // 0x00154acc: addiu $t1, $t1, -0x1b
    if (t1 == 0) goto label_0x154af8;                           // 0x00154ad0: beqz $t1, 0x154af8
    v0 = 5;                                                     // 0x00154ad4: addiu $v0, $zero, 5
    v0 = v0 - t1;                                               // 0x00154ad8: subu $v0, $v0, $t1
    v0 = (unsigned)a2 >> v0;                                    // 0x00154adc: srlv $v0, $a2, $v0
    t0 = t0 | v0;                                               // 0x00154ae0: or $t0, $t0, $v0
    v1 = (unsigned)t0 >> 0x1b;                                  // 0x00154ae4: srl $v1, $t0, 0x1b
    t0 = a2 << t1;                                              // 0x00154ae8: sllv $t0, $a2, $t1
    goto label_0x154b04;                                        // 0x00154aec: b 0x154b04
    *(uint32_t*)((t2) + 0xc0) = v1;                             // 0x00154af0: sw $v1, 0xc0($t2)
    /* nop */                                                   // 0x00154af4: nop 
label_0x154af8:
    v0 = (unsigned)t0 >> 0x1b;                                  // 0x00154af8: srl $v0, $t0, 0x1b
    *(uint32_t*)((t2) + 0xc0) = v0;                             // 0x00154b00: sw $v0, 0xc0($t2)
label_0x154b04:
    a2 = *(int8_t*)(a3);                                        // 0x00154b04: lb $a2, 0($a3)
    a3 = a3 + 1;                                                // 0x00154b08: addiu $a3, $a3, 1
    v0 = *(uint8_t*)(a3);                                       // 0x00154b0c: lbu $v0, 0($a3)
    a3 = a3 + 1;                                                // 0x00154b10: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00154b14: sll $a2, $a2, 8
    v1 = *(uint8_t*)(a3);                                       // 0x00154b18: lbu $v1, 0($a3)
    a2 = a2 | v0;                                               // 0x00154b1c: or $a2, $a2, $v0
    a3 = a3 + 1;                                                // 0x00154b20: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00154b24: sll $a2, $a2, 8
    v0 = *(uint8_t*)(a3);                                       // 0x00154b28: lbu $v0, 0($a3)
    a2 = a2 | v1;                                               // 0x00154b2c: or $a2, $a2, $v1
    a3 = a3 + 1;                                                // 0x00154b30: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00154b34: sll $a2, $a2, 8
    goto label_0x154b4c;                                        // 0x00154b38: b 0x154b4c
    a2 = a2 | v0;                                               // 0x00154b3c: or $a2, $a2, $v0
label_0x154b40:
    t0 = t0 << 5;                                               // 0x00154b40: sll $t0, $t0, 5
    *(uint32_t*)((t2) + 0xc0) = v0;                             // 0x00154b44: sw $v0, 0xc0($t2)
    t1 = t1 + 5;                                                // 0x00154b48: addiu $t1, $t1, 5
label_0x154b4c:
    v0 = (t1 < 0x1a) ? 1 : 0;                                   // 0x00154b4c: slti $v0, $t1, 0x1a
    if (v0 != 0) goto label_0x154bc8;                           // 0x00154b50: bnez $v0, 0x154bc8
    v0 = (unsigned)t0 >> 0x1a;                                  // 0x00154b54: srl $v0, $t0, 0x1a
    t1 = t1 + -0x1a;                                            // 0x00154b58: addiu $t1, $t1, -0x1a
    if (t1 == 0) goto label_0x154b80;                           // 0x00154b5c: beqz $t1, 0x154b80
    v0 = 6;                                                     // 0x00154b60: addiu $v0, $zero, 6
    v0 = v0 - t1;                                               // 0x00154b64: subu $v0, $v0, $t1
    v0 = (unsigned)a2 >> v0;                                    // 0x00154b68: srlv $v0, $a2, $v0
    t0 = t0 | v0;                                               // 0x00154b6c: or $t0, $t0, $v0
    v1 = (unsigned)t0 >> 0x1a;                                  // 0x00154b70: srl $v1, $t0, 0x1a
    t0 = a2 << t1;                                              // 0x00154b74: sllv $t0, $a2, $t1
    goto label_0x154b8c;                                        // 0x00154b78: b 0x154b8c
    *(uint32_t*)((t2) + 0xc4) = v1;                             // 0x00154b7c: sw $v1, 0xc4($t2)
label_0x154b80:
    v0 = (unsigned)t0 >> 0x1a;                                  // 0x00154b80: srl $v0, $t0, 0x1a
    *(uint32_t*)((t2) + 0xc4) = v0;                             // 0x00154b88: sw $v0, 0xc4($t2)
label_0x154b8c:
    a2 = *(int8_t*)(a3);                                        // 0x00154b8c: lb $a2, 0($a3)
    a3 = a3 + 1;                                                // 0x00154b90: addiu $a3, $a3, 1
    v0 = *(uint8_t*)(a3);                                       // 0x00154b94: lbu $v0, 0($a3)
    a3 = a3 + 1;                                                // 0x00154b98: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00154b9c: sll $a2, $a2, 8
    v1 = *(uint8_t*)(a3);                                       // 0x00154ba0: lbu $v1, 0($a3)
    a2 = a2 | v0;                                               // 0x00154ba4: or $a2, $a2, $v0
    a3 = a3 + 1;                                                // 0x00154ba8: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00154bac: sll $a2, $a2, 8
    v0 = *(uint8_t*)(a3);                                       // 0x00154bb0: lbu $v0, 0($a3)
    a2 = a2 | v1;                                               // 0x00154bb4: or $a2, $a2, $v1
    a3 = a3 + 1;                                                // 0x00154bb8: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00154bbc: sll $a2, $a2, 8
    goto label_0x154bd4;                                        // 0x00154bc0: b 0x154bd4
    a2 = a2 | v0;                                               // 0x00154bc4: or $a2, $a2, $v0
label_0x154bc8:
    t0 = t0 << 6;                                               // 0x00154bc8: sll $t0, $t0, 6
    *(uint32_t*)((t2) + 0xc4) = v0;                             // 0x00154bcc: sw $v0, 0xc4($t2)
    t1 = t1 + 6;                                                // 0x00154bd0: addiu $t1, $t1, 6
label_0x154bd4:
    v0 = (t1 < 0x1f) ? 1 : 0;                                   // 0x00154bd4: slti $v0, $t1, 0x1f
    if (v0 != 0) goto label_0x154c50;                           // 0x00154bd8: bnez $v0, 0x154c50
    v0 = (unsigned)t0 >> 0x1f;                                  // 0x00154bdc: srl $v0, $t0, 0x1f
    t1 = t1 + -0x1f;                                            // 0x00154be0: addiu $t1, $t1, -0x1f
    if (t1 == 0) goto label_0x154c08;                           // 0x00154be4: beqz $t1, 0x154c08
    v0 = 1;                                                     // 0x00154be8: addiu $v0, $zero, 1
    v0 = v0 - t1;                                               // 0x00154bec: subu $v0, $v0, $t1
    v0 = (unsigned)a2 >> v0;                                    // 0x00154bf0: srlv $v0, $a2, $v0
    t0 = t0 | v0;                                               // 0x00154bf4: or $t0, $t0, $v0
    v1 = (unsigned)t0 >> 0x1f;                                  // 0x00154bf8: srl $v1, $t0, 0x1f
    t0 = a2 << t1;                                              // 0x00154bfc: sllv $t0, $a2, $t1
    goto label_0x154c14;                                        // 0x00154c00: b 0x154c14
    *(uint32_t*)((t2) + 0x18) = v1;                             // 0x00154c04: sw $v1, 0x18($t2)
label_0x154c08:
    v0 = (unsigned)t0 >> 0x1f;                                  // 0x00154c08: srl $v0, $t0, 0x1f
    *(uint32_t*)((t2) + 0x18) = v0;                             // 0x00154c10: sw $v0, 0x18($t2)
label_0x154c14:
    a2 = *(int8_t*)(a3);                                        // 0x00154c14: lb $a2, 0($a3)
    a3 = a3 + 1;                                                // 0x00154c18: addiu $a3, $a3, 1
    v0 = *(uint8_t*)(a3);                                       // 0x00154c1c: lbu $v0, 0($a3)
    a3 = a3 + 1;                                                // 0x00154c20: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00154c24: sll $a2, $a2, 8
    v1 = *(uint8_t*)(a3);                                       // 0x00154c28: lbu $v1, 0($a3)
    a2 = a2 | v0;                                               // 0x00154c2c: or $a2, $a2, $v0
    a3 = a3 + 1;                                                // 0x00154c30: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00154c34: sll $a2, $a2, 8
    v0 = *(uint8_t*)(a3);                                       // 0x00154c38: lbu $v0, 0($a3)
    a2 = a2 | v1;                                               // 0x00154c3c: or $a2, $a2, $v1
    a3 = a3 + 1;                                                // 0x00154c40: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00154c44: sll $a2, $a2, 8
    goto label_0x154c5c;                                        // 0x00154c48: b 0x154c5c
    a2 = a2 | v0;                                               // 0x00154c4c: or $a2, $a2, $v0
label_0x154c50:
    t0 = t0 << 1;                                               // 0x00154c50: sll $t0, $t0, 1
    *(uint32_t*)((t2) + 0x18) = v0;                             // 0x00154c54: sw $v0, 0x18($t2)
    t1 = t1 + 1;                                                // 0x00154c58: addiu $t1, $t1, 1
label_0x154c5c:
    v0 = (t1 < 0x1a) ? 1 : 0;                                   // 0x00154c5c: slti $v0, $t1, 0x1a
    if (v0 != 0) goto label_0x154cd8;                           // 0x00154c60: bnez $v0, 0x154cd8
    v0 = (unsigned)t0 >> 0x1a;                                  // 0x00154c64: srl $v0, $t0, 0x1a
    t1 = t1 + -0x1a;                                            // 0x00154c68: addiu $t1, $t1, -0x1a
    if (t1 == 0) goto label_0x154c90;                           // 0x00154c6c: beqz $t1, 0x154c90
    v0 = 6;                                                     // 0x00154c70: addiu $v0, $zero, 6
    v0 = v0 - t1;                                               // 0x00154c74: subu $v0, $v0, $t1
    v0 = (unsigned)a2 >> v0;                                    // 0x00154c78: srlv $v0, $a2, $v0
    t0 = t0 | v0;                                               // 0x00154c7c: or $t0, $t0, $v0
    v1 = (unsigned)t0 >> 0x1a;                                  // 0x00154c80: srl $v1, $t0, 0x1a
    t0 = a2 << t1;                                              // 0x00154c84: sllv $t0, $a2, $t1
    goto label_0x154c9c;                                        // 0x00154c88: b 0x154c9c
    *(uint32_t*)((t2) + 0xc8) = v1;                             // 0x00154c8c: sw $v1, 0xc8($t2)
label_0x154c90:
    v0 = (unsigned)t0 >> 0x1a;                                  // 0x00154c90: srl $v0, $t0, 0x1a
    *(uint32_t*)((t2) + 0xc8) = v0;                             // 0x00154c98: sw $v0, 0xc8($t2)
label_0x154c9c:
    a2 = *(int8_t*)(a3);                                        // 0x00154c9c: lb $a2, 0($a3)
    a3 = a3 + 1;                                                // 0x00154ca0: addiu $a3, $a3, 1
    v0 = *(uint8_t*)(a3);                                       // 0x00154ca4: lbu $v0, 0($a3)
    a3 = a3 + 1;                                                // 0x00154ca8: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00154cac: sll $a2, $a2, 8
    v1 = *(uint8_t*)(a3);                                       // 0x00154cb0: lbu $v1, 0($a3)
    a2 = a2 | v0;                                               // 0x00154cb4: or $a2, $a2, $v0
    a3 = a3 + 1;                                                // 0x00154cb8: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00154cbc: sll $a2, $a2, 8
    v0 = *(uint8_t*)(a3);                                       // 0x00154cc0: lbu $v0, 0($a3)
    a2 = a2 | v1;                                               // 0x00154cc4: or $a2, $a2, $v1
    a3 = a3 + 1;                                                // 0x00154cc8: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00154ccc: sll $a2, $a2, 8
    goto label_0x154ce4;                                        // 0x00154cd0: b 0x154ce4
    a2 = a2 | v0;                                               // 0x00154cd4: or $a2, $a2, $v0
label_0x154cd8:
    t0 = t0 << 6;                                               // 0x00154cd8: sll $t0, $t0, 6
    *(uint32_t*)((t2) + 0xc8) = v0;                             // 0x00154cdc: sw $v0, 0xc8($t2)
    t1 = t1 + 6;                                                // 0x00154ce0: addiu $t1, $t1, 6
label_0x154ce4:
    v0 = (t1 < 0x1a) ? 1 : 0;                                   // 0x00154ce4: slti $v0, $t1, 0x1a
    if (v0 != 0) goto label_0x154d60;                           // 0x00154ce8: bnez $v0, 0x154d60
    v0 = (unsigned)t0 >> 0x1a;                                  // 0x00154cec: srl $v0, $t0, 0x1a
    t1 = t1 + -0x1a;                                            // 0x00154cf0: addiu $t1, $t1, -0x1a
    if (t1 == 0) goto label_0x154d18;                           // 0x00154cf4: beqz $t1, 0x154d18
    v0 = 6;                                                     // 0x00154cf8: addiu $v0, $zero, 6
    v0 = v0 - t1;                                               // 0x00154cfc: subu $v0, $v0, $t1
    v0 = (unsigned)a2 >> v0;                                    // 0x00154d00: srlv $v0, $a2, $v0
    t0 = t0 | v0;                                               // 0x00154d04: or $t0, $t0, $v0
    v1 = (unsigned)t0 >> 0x1a;                                  // 0x00154d08: srl $v1, $t0, 0x1a
    t0 = a2 << t1;                                              // 0x00154d0c: sllv $t0, $a2, $t1
    goto label_0x154d24;                                        // 0x00154d10: b 0x154d24
    *(uint32_t*)((t2) + 0xcc) = v1;                             // 0x00154d14: sw $v1, 0xcc($t2)
label_0x154d18:
    v0 = (unsigned)t0 >> 0x1a;                                  // 0x00154d18: srl $v0, $t0, 0x1a
    *(uint32_t*)((t2) + 0xcc) = v0;                             // 0x00154d20: sw $v0, 0xcc($t2)
label_0x154d24:
    a2 = *(int8_t*)(a3);                                        // 0x00154d24: lb $a2, 0($a3)
    a3 = a3 + 1;                                                // 0x00154d28: addiu $a3, $a3, 1
    v0 = *(uint8_t*)(a3);                                       // 0x00154d2c: lbu $v0, 0($a3)
    a3 = a3 + 1;                                                // 0x00154d30: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00154d34: sll $a2, $a2, 8
    v1 = *(uint8_t*)(a3);                                       // 0x00154d38: lbu $v1, 0($a3)
    a2 = a2 | v0;                                               // 0x00154d3c: or $a2, $a2, $v0
    a3 = a3 + 1;                                                // 0x00154d40: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00154d44: sll $a2, $a2, 8
    v0 = *(uint8_t*)(a3);                                       // 0x00154d48: lbu $v0, 0($a3)
    a2 = a2 | v1;                                               // 0x00154d4c: or $a2, $a2, $v1
    a3 = a3 + 1;                                                // 0x00154d50: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00154d54: sll $a2, $a2, 8
    goto label_0x154d6c;                                        // 0x00154d58: b 0x154d6c
    a2 = a2 | v0;                                               // 0x00154d5c: or $a2, $a2, $v0
label_0x154d60:
    t0 = t0 << 6;                                               // 0x00154d60: sll $t0, $t0, 6
    *(uint32_t*)((t2) + 0xcc) = v0;                             // 0x00154d64: sw $v0, 0xcc($t2)
    t1 = t1 + 6;                                                // 0x00154d68: addiu $t1, $t1, 6
label_0x154d6c:
    v0 = (t1 < 0x1f) ? 1 : 0;                                   // 0x00154d6c: slti $v0, $t1, 0x1f
    if (v0 != 0) goto label_0x154de8;                           // 0x00154d70: bnez $v0, 0x154de8
    v0 = (unsigned)t0 >> 0x1f;                                  // 0x00154d74: srl $v0, $t0, 0x1f
    t1 = t1 + -0x1f;                                            // 0x00154d78: addiu $t1, $t1, -0x1f
    if (t1 == 0) goto label_0x154da0;                           // 0x00154d7c: beqz $t1, 0x154da0
    v0 = 1;                                                     // 0x00154d80: addiu $v0, $zero, 1
    v0 = v0 - t1;                                               // 0x00154d84: subu $v0, $v0, $t1
    v0 = (unsigned)a2 >> v0;                                    // 0x00154d88: srlv $v0, $a2, $v0
    t0 = t0 | v0;                                               // 0x00154d8c: or $t0, $t0, $v0
    v1 = (unsigned)t0 >> 0x1f;                                  // 0x00154d90: srl $v1, $t0, 0x1f
    t0 = a2 << t1;                                              // 0x00154d94: sllv $t0, $a2, $t1
    goto label_0x154dac;                                        // 0x00154d98: b 0x154dac
    *(uint32_t*)((t2) + 0xd0) = v1;                             // 0x00154d9c: sw $v1, 0xd0($t2)
label_0x154da0:
    v0 = (unsigned)t0 >> 0x1f;                                  // 0x00154da0: srl $v0, $t0, 0x1f
    *(uint32_t*)((t2) + 0xd0) = v0;                             // 0x00154da8: sw $v0, 0xd0($t2)
label_0x154dac:
    a2 = *(int8_t*)(a3);                                        // 0x00154dac: lb $a2, 0($a3)
    a3 = a3 + 1;                                                // 0x00154db0: addiu $a3, $a3, 1
    v0 = *(uint8_t*)(a3);                                       // 0x00154db4: lbu $v0, 0($a3)
    a3 = a3 + 1;                                                // 0x00154db8: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00154dbc: sll $a2, $a2, 8
    v1 = *(uint8_t*)(a3);                                       // 0x00154dc0: lbu $v1, 0($a3)
    a2 = a2 | v0;                                               // 0x00154dc4: or $a2, $a2, $v0
    a3 = a3 + 1;                                                // 0x00154dc8: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00154dcc: sll $a2, $a2, 8
    v0 = *(uint8_t*)(a3);                                       // 0x00154dd0: lbu $v0, 0($a3)
    a2 = a2 | v1;                                               // 0x00154dd4: or $a2, $a2, $v1
    a3 = a3 + 1;                                                // 0x00154dd8: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00154ddc: sll $a2, $a2, 8
    goto label_0x154df4;                                        // 0x00154de0: b 0x154df4
    a2 = a2 | v0;                                               // 0x00154de4: or $a2, $a2, $v0
label_0x154de8:
    t0 = t0 << 1;                                               // 0x00154de8: sll $t0, $t0, 1
    *(uint32_t*)((t2) + 0xd0) = v0;                             // 0x00154dec: sw $v0, 0xd0($t2)
    t1 = t1 + 1;                                                // 0x00154df0: addiu $t1, $t1, 1
label_0x154df4:
    v0 = (t1 < 0x1f) ? 1 : 0;                                   // 0x00154df4: slti $v0, $t1, 0x1f
    /* bnezl $v0, 0x154e38 */                                   // 0x00154df8: bnezl $v0, 0x154e38
    v0 = (unsigned)t0 >> 0x1f;                                  // 0x00154dfc: srl $v0, $t0, 0x1f
    t1 = t1 + -0x1f;                                            // 0x00154e00: addiu $t1, $t1, -0x1f
    /* beqzl $t1, 0x154e28 */                                   // 0x00154e04: beqzl $t1, 0x154e28
    v0 = (unsigned)t0 >> 0x1f;                                  // 0x00154e08: srl $v0, $t0, 0x1f
    v0 = 1;                                                     // 0x00154e0c: addiu $v0, $zero, 1
    v0 = v0 - t1;                                               // 0x00154e10: subu $v0, $v0, $t1
    v0 = (unsigned)a2 >> v0;                                    // 0x00154e14: srlv $v0, $a2, $v0
    t0 = t0 | v0;                                               // 0x00154e18: or $t0, $t0, $v0
    v1 = (unsigned)t0 >> 0x1f;                                  // 0x00154e1c: srl $v1, $t0, 0x1f
    goto label_0x154e2c;                                        // 0x00154e20: b 0x154e2c
    *(uint32_t*)((t2) + 0xd4) = v1;                             // 0x00154e24: sw $v1, 0xd4($t2)
    *(uint32_t*)((t2) + 0xd4) = v0;                             // 0x00154e28: sw $v0, 0xd4($t2)
label_0x154e2c:
    goto label_0x154e40;                                        // 0x00154e2c: b 0x154e40
    a3 = a3 + 4;                                                // 0x00154e30: addiu $a3, $a3, 4
    /* nop */                                                   // 0x00154e34: nop 
    t1 = t1 + 1;                                                // 0x00154e38: addiu $t1, $t1, 1
    *(uint32_t*)((t2) + 0xd4) = v0;                             // 0x00154e3c: sw $v0, 0xd4($t2)
label_0x154e40:
    v1 = a3 - t3;                                               // 0x00154e40: subu $v1, $a3, $t3
    v1 = v1 << 3;                                               // 0x00154e44: sll $v1, $v1, 3
    v1 = t1 + v1;                                               // 0x00154e48: addu $v1, $t1, $v1
    v0 = v1 + -0x39;                                            // 0x00154e4c: addiu $v0, $v1, -0x39
    v1 = v1 + -0x32;                                            // 0x00154e50: addiu $v1, $v1, -0x32
    a0 = (v0 < 0) ? 1 : 0;                                      // 0x00154e54: slti $a0, $v0, 0
    if (a0 != 0) v0 = v1;                                       // 0x00154e58: movn $v0, $v1, $a0
    v0 = v0 >> 3;                                               // 0x00154e5c: sra $v0, $v0, 3
    return;                                                     // 0x00154e60: jr $ra
    v0 = t3 + v0;                                               // 0x00154e64: addu $v0, $t3, $v0
}