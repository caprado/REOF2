void func_00151980() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00151980: addiu $sp, $sp, -0x40
    v0 = -4;                                                    // 0x00151984: addiu $v0, $zero, -4
    s4 = a0 + 0x128;                                            // 0x00151994: addiu $s4, $a0, 0x128
    s1 = s5 & v0;                                               // 0x001519a4: and $s1, $s5, $v0
    v0 = s5 - s1;                                               // 0x001519ac: subu $v0, $s5, $s1
    s3 = v0 << 3;                                               // 0x001519b4: sll $s3, $v0, 3
    v1 = *(int32_t*)((s4) + 0x4f0);                             // 0x001519b8: lw $v1, 0x4f0($s4)
    v1 = v1 + 1;                                                // 0x001519bc: addiu $v1, $v1, 1
    *(uint32_t*)((s4) + 0x4f0) = v1;                            // 0x001519c0: sw $v1, 0x4f0($s4)
    s2 = *(int8_t*)(s1);                                        // 0x001519c4: lb $s2, 0($s1)
    s1 = s1 + 1;                                                // 0x001519c8: addiu $s1, $s1, 1
    v1 = *(uint8_t*)(s1);                                       // 0x001519cc: lbu $v1, 0($s1)
    s1 = s1 + 1;                                                // 0x001519d0: addiu $s1, $s1, 1
    a0 = *(uint8_t*)(s1);                                       // 0x001519d4: lbu $a0, 0($s1)
    s1 = s1 + 1;                                                // 0x001519d8: addiu $s1, $s1, 1
    a1 = *(uint8_t*)(s1);                                       // 0x001519dc: lbu $a1, 0($s1)
    s1 = s1 + 1;                                                // 0x001519e0: addiu $s1, $s1, 1
    s0 = *(int8_t*)(s1);                                        // 0x001519e4: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x001519e8: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x001519ec: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x001519f0: addiu $s1, $s1, 1
    s2 = s2 << 8;                                               // 0x001519f4: sll $s2, $s2, 8
    s0 = s0 << 8;                                               // 0x001519f8: sll $s0, $s0, 8
    s2 = s2 | v1;                                               // 0x001519fc: or $s2, $s2, $v1
    v1 = *(uint8_t*)(s1);                                       // 0x00151a00: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00151a04: or $s0, $s0, $v0
    s2 = s2 << 8;                                               // 0x00151a08: sll $s2, $s2, 8
    s1 = s1 + 1;                                                // 0x00151a0c: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151a10: sll $s0, $s0, 8
    s2 = s2 | a0;                                               // 0x00151a14: or $s2, $s2, $a0
    v0 = *(uint8_t*)(s1);                                       // 0x00151a18: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00151a1c: or $s0, $s0, $v1
    s2 = s2 << 8;                                               // 0x00151a20: sll $s2, $s2, 8
    s0 = s0 << 8;                                               // 0x00151a24: sll $s0, $s0, 8
    s2 = s2 | a1;                                               // 0x00151a28: or $s2, $s2, $a1
    s1 = s1 + 1;                                                // 0x00151a2c: addiu $s1, $s1, 1
    s0 = s0 | v0;                                               // 0x00151a30: or $s0, $s0, $v0
    if (s3 == 0) goto label_0x151a58;                           // 0x00151a34: beqz $s3, 0x151a58
    s2 = s2 << s3;                                              // 0x00151a38: sllv $s2, $s2, $s3
    v0 = -s3;                                                   // 0x00151a3c: negu $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00151a40: srlv $v0, $s0, $v0
    v0 = s2 | v0;                                               // 0x00151a44: or $v0, $s2, $v0
    s2 = s0 << s3;                                              // 0x00151a48: sllv $s2, $s0, $s3
    goto label_0x151a60;                                        // 0x00151a4c: b 0x151a60
    *(uint32_t*)((s4) + 0x34) = v0;                             // 0x00151a50: sw $v0, 0x34($s4)
    /* nop */                                                   // 0x00151a54: nop 
label_0x151a58:
    *(uint32_t*)((s4) + 0x34) = s2;                             // 0x00151a58: sw $s2, 0x34($s4)
label_0x151a60:
    s0 = *(int8_t*)(s1);                                        // 0x00151a60: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00151a64: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00151a68: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00151a6c: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151a70: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00151a74: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00151a78: or $s0, $s0, $v0
    v0 = (s3 < 0x1c) ? 1 : 0;                                   // 0x00151a7c: slti $v0, $s3, 0x1c
    s1 = s1 + 1;                                                // 0x00151a80: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151a84: sll $s0, $s0, 8
    a0 = *(uint8_t*)(s1);                                       // 0x00151a88: lbu $a0, 0($s1)
    s1 = s1 + 1;                                                // 0x00151a8c: addiu $s1, $s1, 1
    s0 = s0 | v1;                                               // 0x00151a90: or $s0, $s0, $v1
    s0 = s0 << 8;                                               // 0x00151a94: sll $s0, $s0, 8
    if (v0 != 0) goto label_0x151b10;                           // 0x00151a98: bnez $v0, 0x151b10
    s0 = s0 | a0;                                               // 0x00151a9c: or $s0, $s0, $a0
    s3 = s3 + -0x1c;                                            // 0x00151aa0: addiu $s3, $s3, -0x1c
    if (s3 == 0) goto label_0x151ac8;                           // 0x00151aa4: beqz $s3, 0x151ac8
    v0 = 4;                                                     // 0x00151aa8: addiu $v0, $zero, 4
    v0 = v0 - s3;                                               // 0x00151aac: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00151ab0: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00151ab4: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1c;                                  // 0x00151ab8: srl $v1, $s2, 0x1c
    s2 = s0 << s3;                                              // 0x00151abc: sllv $s2, $s0, $s3
    goto label_0x151ad4;                                        // 0x00151ac0: b 0x151ad4
    *(uint32_t*)((s4) + 0x40) = v1;                             // 0x00151ac4: sw $v1, 0x40($s4)
label_0x151ac8:
    v0 = (unsigned)s2 >> 0x1c;                                  // 0x00151ac8: srl $v0, $s2, 0x1c
    *(uint32_t*)((s4) + 0x40) = v0;                             // 0x00151ad0: sw $v0, 0x40($s4)
label_0x151ad4:
    s0 = *(int8_t*)(s1);                                        // 0x00151ad4: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00151ad8: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00151adc: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00151ae0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151ae4: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00151ae8: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00151aec: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00151af0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151af4: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00151af8: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00151afc: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00151b00: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151b04: sll $s0, $s0, 8
    goto label_0x151b20;                                        // 0x00151b08: b 0x151b20
    s0 = s0 | v0;                                               // 0x00151b0c: or $s0, $s0, $v0
label_0x151b10:
    v0 = (unsigned)s2 >> 0x1c;                                  // 0x00151b10: srl $v0, $s2, 0x1c
    s2 = s2 << 4;                                               // 0x00151b14: sll $s2, $s2, 4
    *(uint32_t*)((s4) + 0x40) = v0;                             // 0x00151b18: sw $v0, 0x40($s4)
    s3 = s3 + 4;                                                // 0x00151b1c: addiu $s3, $s3, 4
label_0x151b20:
    a0 = *(int32_t*)((s4) + 0x4dc);                             // 0x00151b20: lw $a0, 0x4dc($s4)
    v0 = 1;                                                     // 0x00151b24: addiu $v0, $zero, 1
    if (a0 == v0) goto label_0x151b58;                          // 0x00151b28: beq $a0, $v0, 0x151b58
    v1 = *(int32_t*)((s4) + 0x40);                              // 0x00151b2c: lw $v1, 0x40($s4)
    v0 = v1 + -1;                                               // 0x00151b30: addiu $v0, $v1, -1
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x00151b34: sltiu $v0, $v0, 2
    /* bnezl $v0, 0x151b60 */                                   // 0x00151b38: bnezl $v0, 0x151b60
    v1 = v1 + -1;                                               // 0x00151b3c: addiu $v1, $v1, -1
    v0 = 5;                                                     // 0x00151b40: addiu $v0, $zero, 5
    if (v1 == v0) goto label_0x151b5c;                          // 0x00151b44: beq $v1, $v0, 0x151b5c
    v0 = 3;                                                     // 0x00151b48: addiu $v0, $zero, 3
    goto label_0x151b60;                                        // 0x00151b4c: b 0x151b60
    v1 = v1 + -1;                                               // 0x00151b50: addiu $v1, $v1, -1
    /* nop */                                                   // 0x00151b54: nop 
label_0x151b58:
    v0 = 3;                                                     // 0x00151b58: addiu $v0, $zero, 3
label_0x151b5c:
    v1 = v1 + -1;                                               // 0x00151b5c: addiu $v1, $v1, -1
label_0x151b60:
    v0 = ((unsigned)v1 < (unsigned)0xa) ? 1 : 0;                // 0x00151b60: sltiu $v0, $v1, 0xa
    /* beqzl $v0, 0x1548ec */                                   // 0x00151b64: beqzl $v0, 0x1548ec
    v1 = s1 - s5;                                               // 0x00151b68: subu $v1, $s1, $s5
    v0 = v1 << 2;                                               // 0x00151b6c: sll $v0, $v1, 2
    v1 = 0x22 << 16;                                            // 0x00151b70: lui $v1, 0x22
    v1 = v1 + v0;                                               // 0x00151b74: addu $v1, $v1, $v0
    v1 = g_00226d00;  // Global at 0x00226d00                   // 0x00151b78: lw $v1, 0x6d00($v1)
    /* jump to address in v1 */                                 // 0x00151b7c: jr $v1
    /* nop */                                                   // 0x00151b80: nop 
    /* nop */                                                   // 0x00151b84: nop 
    v0 = (s3 < 0x18) ? 1 : 0;                                   // 0x00151b88: slti $v0, $s3, 0x18
    if (v0 != 0) goto label_0x151c08;                           // 0x00151b8c: bnez $v0, 0x151c08
    v0 = (unsigned)s2 >> 0x18;                                  // 0x00151b90: srl $v0, $s2, 0x18
    s3 = s3 + -0x18;                                            // 0x00151b94: addiu $s3, $s3, -0x18
    if (s3 == 0) goto label_0x151bc0;                           // 0x00151b98: beqz $s3, 0x151bc0
    v0 = 8;                                                     // 0x00151b9c: addiu $v0, $zero, 8
    v0 = v0 - s3;                                               // 0x00151ba0: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00151ba4: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00151ba8: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x18;                                  // 0x00151bac: srl $v1, $s2, 0x18
    s2 = s0 << s3;                                              // 0x00151bb0: sllv $s2, $s0, $s3
    goto label_0x151bcc;                                        // 0x00151bb4: b 0x151bcc
    *(uint32_t*)((s4) + 0x44) = v1;                             // 0x00151bb8: sw $v1, 0x44($s4)
    /* nop */                                                   // 0x00151bbc: nop 
label_0x151bc0:
    v0 = (unsigned)s2 >> 0x18;                                  // 0x00151bc0: srl $v0, $s2, 0x18
    *(uint32_t*)((s4) + 0x44) = v0;                             // 0x00151bc8: sw $v0, 0x44($s4)
label_0x151bcc:
    s0 = *(int8_t*)(s1);                                        // 0x00151bcc: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00151bd0: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00151bd4: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00151bd8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151bdc: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00151be0: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00151be4: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00151be8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151bec: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00151bf0: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00151bf4: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00151bf8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151bfc: sll $s0, $s0, 8
    goto label_0x151c14;                                        // 0x00151c00: b 0x151c14
    s0 = s0 | v0;                                               // 0x00151c04: or $s0, $s0, $v0
label_0x151c08:
    s2 = s2 << 8;                                               // 0x00151c08: sll $s2, $s2, 8
    *(uint32_t*)((s4) + 0x44) = v0;                             // 0x00151c0c: sw $v0, 0x44($s4)
    s3 = s3 + 8;                                                // 0x00151c10: addiu $s3, $s3, 8
label_0x151c14:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00151c14: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x151c90;                           // 0x00151c18: bnez $v0, 0x151c90
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00151c1c: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00151c20: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x151c48;                           // 0x00151c24: beqz $s3, 0x151c48
    v0 = 1;                                                     // 0x00151c28: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x00151c2c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00151c30: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00151c34: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x00151c38: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x00151c3c: sllv $s2, $s0, $s3
    goto label_0x151c54;                                        // 0x00151c40: b 0x151c54
    *(uint32_t*)((s4) + 0x48) = v1;                             // 0x00151c44: sw $v1, 0x48($s4)
label_0x151c48:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00151c48: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x48) = v0;                             // 0x00151c50: sw $v0, 0x48($s4)
label_0x151c54:
    s0 = *(int8_t*)(s1);                                        // 0x00151c54: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00151c58: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00151c5c: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00151c60: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151c64: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00151c68: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00151c6c: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00151c70: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151c74: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00151c78: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00151c7c: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00151c80: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151c84: sll $s0, $s0, 8
    goto label_0x151c9c;                                        // 0x00151c88: b 0x151c9c
    s0 = s0 | v0;                                               // 0x00151c8c: or $s0, $s0, $v0
label_0x151c90:
    s2 = s2 << 1;                                               // 0x00151c90: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x48) = v0;                             // 0x00151c94: sw $v0, 0x48($s4)
    s3 = s3 + 1;                                                // 0x00151c98: addiu $s3, $s3, 1
label_0x151c9c:
    v0 = (s3 < 0x1e) ? 1 : 0;                                   // 0x00151c9c: slti $v0, $s3, 0x1e
    if (v0 != 0) goto label_0x151d18;                           // 0x00151ca0: bnez $v0, 0x151d18
    v0 = (unsigned)s2 >> 0x1e;                                  // 0x00151ca4: srl $v0, $s2, 0x1e
    s3 = s3 + -0x1e;                                            // 0x00151ca8: addiu $s3, $s3, -0x1e
    if (s3 == 0) goto label_0x151cd0;                           // 0x00151cac: beqz $s3, 0x151cd0
    v0 = 2;                                                     // 0x00151cb0: addiu $v0, $zero, 2
    v0 = v0 - s3;                                               // 0x00151cb4: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00151cb8: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00151cbc: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1e;                                  // 0x00151cc0: srl $v1, $s2, 0x1e
    s2 = s0 << s3;                                              // 0x00151cc4: sllv $s2, $s0, $s3
    goto label_0x151cdc;                                        // 0x00151cc8: b 0x151cdc
    *(uint32_t*)((s4) + 0x4c) = v1;                             // 0x00151ccc: sw $v1, 0x4c($s4)
label_0x151cd0:
    v0 = (unsigned)s2 >> 0x1e;                                  // 0x00151cd0: srl $v0, $s2, 0x1e
    *(uint32_t*)((s4) + 0x4c) = v0;                             // 0x00151cd8: sw $v0, 0x4c($s4)
label_0x151cdc:
    s0 = *(int8_t*)(s1);                                        // 0x00151cdc: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00151ce0: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00151ce4: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00151ce8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151cec: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00151cf0: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00151cf4: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00151cf8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151cfc: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00151d00: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00151d04: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00151d08: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151d0c: sll $s0, $s0, 8
    goto label_0x151d24;                                        // 0x00151d10: b 0x151d24
    s0 = s0 | v0;                                               // 0x00151d14: or $s0, $s0, $v0
label_0x151d18:
    s2 = s2 << 2;                                               // 0x00151d18: sll $s2, $s2, 2
    *(uint32_t*)((s4) + 0x4c) = v0;                             // 0x00151d1c: sw $v0, 0x4c($s4)
    s3 = s3 + 2;                                                // 0x00151d20: addiu $s3, $s3, 2
label_0x151d24:
    v0 = (s3 < 0x1e) ? 1 : 0;                                   // 0x00151d24: slti $v0, $s3, 0x1e
    if (v0 != 0) goto label_0x151da0;                           // 0x00151d28: bnez $v0, 0x151da0
    v0 = (unsigned)s2 >> 0x1e;                                  // 0x00151d2c: srl $v0, $s2, 0x1e
    s3 = s3 + -0x1e;                                            // 0x00151d30: addiu $s3, $s3, -0x1e
    if (s3 == 0) goto label_0x151d58;                           // 0x00151d34: beqz $s3, 0x151d58
    v0 = 2;                                                     // 0x00151d38: addiu $v0, $zero, 2
    v0 = v0 - s3;                                               // 0x00151d3c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00151d40: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00151d44: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1e;                                  // 0x00151d48: srl $v1, $s2, 0x1e
    s2 = s0 << s3;                                              // 0x00151d4c: sllv $s2, $s0, $s3
    goto label_0x151d64;                                        // 0x00151d50: b 0x151d64
    *(uint32_t*)((s4) + 0x50) = v1;                             // 0x00151d54: sw $v1, 0x50($s4)
label_0x151d58:
    v0 = (unsigned)s2 >> 0x1e;                                  // 0x00151d58: srl $v0, $s2, 0x1e
    *(uint32_t*)((s4) + 0x50) = v0;                             // 0x00151d60: sw $v0, 0x50($s4)
label_0x151d64:
    s0 = *(int8_t*)(s1);                                        // 0x00151d64: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00151d68: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00151d6c: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00151d70: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151d74: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00151d78: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00151d7c: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00151d80: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151d84: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00151d88: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00151d8c: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00151d90: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151d94: sll $s0, $s0, 8
    goto label_0x151dac;                                        // 0x00151d98: b 0x151dac
    s0 = s0 | v0;                                               // 0x00151d9c: or $s0, $s0, $v0
label_0x151da0:
    s2 = s2 << 2;                                               // 0x00151da0: sll $s2, $s2, 2
    *(uint32_t*)((s4) + 0x50) = v0;                             // 0x00151da4: sw $v0, 0x50($s4)
    s3 = s3 + 2;                                                // 0x00151da8: addiu $s3, $s3, 2
label_0x151dac:
    v0 = (s3 < 0x1e) ? 1 : 0;                                   // 0x00151dac: slti $v0, $s3, 0x1e
    if (v0 != 0) goto label_0x151e28;                           // 0x00151db0: bnez $v0, 0x151e28
    v0 = (unsigned)s2 >> 0x1e;                                  // 0x00151db4: srl $v0, $s2, 0x1e
    s3 = s3 + -0x1e;                                            // 0x00151db8: addiu $s3, $s3, -0x1e
    if (s3 == 0) goto label_0x151de0;                           // 0x00151dbc: beqz $s3, 0x151de0
    v0 = 2;                                                     // 0x00151dc0: addiu $v0, $zero, 2
    v0 = v0 - s3;                                               // 0x00151dc4: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00151dc8: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00151dcc: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1e;                                  // 0x00151dd0: srl $v1, $s2, 0x1e
    s2 = s0 << s3;                                              // 0x00151dd4: sllv $s2, $s0, $s3
    goto label_0x151dec;                                        // 0x00151dd8: b 0x151dec
    *(uint32_t*)((s4) + 0x54) = v1;                             // 0x00151ddc: sw $v1, 0x54($s4)
label_0x151de0:
    v0 = (unsigned)s2 >> 0x1e;                                  // 0x00151de0: srl $v0, $s2, 0x1e
    *(uint32_t*)((s4) + 0x54) = v0;                             // 0x00151de8: sw $v0, 0x54($s4)
label_0x151dec:
    s0 = *(int8_t*)(s1);                                        // 0x00151dec: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00151df0: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00151df4: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00151df8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151dfc: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00151e00: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00151e04: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00151e08: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151e0c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00151e10: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00151e14: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00151e18: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151e1c: sll $s0, $s0, 8
    goto label_0x151e34;                                        // 0x00151e20: b 0x151e34
    s0 = s0 | v0;                                               // 0x00151e24: or $s0, $s0, $v0
label_0x151e28:
    s2 = s2 << 2;                                               // 0x00151e28: sll $s2, $s2, 2
    *(uint32_t*)((s4) + 0x54) = v0;                             // 0x00151e2c: sw $v0, 0x54($s4)
    s3 = s3 + 2;                                                // 0x00151e30: addiu $s3, $s3, 2
label_0x151e34:
    v0 = (s3 < 0x14) ? 1 : 0;                                   // 0x00151e34: slti $v0, $s3, 0x14
    if (v0 != 0) goto label_0x151eb0;                           // 0x00151e38: bnez $v0, 0x151eb0
    v0 = (unsigned)s2 >> 0x14;                                  // 0x00151e3c: srl $v0, $s2, 0x14
    s3 = s3 + -0x14;                                            // 0x00151e40: addiu $s3, $s3, -0x14
    if (s3 == 0) goto label_0x151e68;                           // 0x00151e44: beqz $s3, 0x151e68
    v0 = 0xc;                                                   // 0x00151e48: addiu $v0, $zero, 0xc
    v0 = v0 - s3;                                               // 0x00151e4c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00151e50: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00151e54: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x14;                                  // 0x00151e58: srl $v1, $s2, 0x14
    s2 = s0 << s3;                                              // 0x00151e5c: sllv $s2, $s0, $s3
    goto label_0x151e74;                                        // 0x00151e60: b 0x151e74
    *(uint32_t*)((s4) + 0x58) = v1;                             // 0x00151e64: sw $v1, 0x58($s4)
label_0x151e68:
    v0 = (unsigned)s2 >> 0x14;                                  // 0x00151e68: srl $v0, $s2, 0x14
    *(uint32_t*)((s4) + 0x58) = v0;                             // 0x00151e70: sw $v0, 0x58($s4)
label_0x151e74:
    s0 = *(int8_t*)(s1);                                        // 0x00151e74: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00151e78: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00151e7c: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00151e80: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151e84: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00151e88: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00151e8c: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00151e90: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151e94: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00151e98: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00151e9c: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00151ea0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151ea4: sll $s0, $s0, 8
    goto label_0x151ebc;                                        // 0x00151ea8: b 0x151ebc
    s0 = s0 | v0;                                               // 0x00151eac: or $s0, $s0, $v0
label_0x151eb0:
    s2 = s2 << 0xc;                                             // 0x00151eb0: sll $s2, $s2, 0xc
    *(uint32_t*)((s4) + 0x58) = v0;                             // 0x00151eb4: sw $v0, 0x58($s4)
    s3 = s3 + 0xc;                                              // 0x00151eb8: addiu $s3, $s3, 0xc
label_0x151ebc:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00151ebc: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x151f38;                           // 0x00151ec0: bnez $v0, 0x151f38
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00151ec4: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00151ec8: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x151ef0;                           // 0x00151ecc: beqz $s3, 0x151ef0
    v0 = 1;                                                     // 0x00151ed0: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x00151ed4: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00151ed8: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00151edc: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x00151ee0: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x00151ee4: sllv $s2, $s0, $s3
    goto label_0x151efc;                                        // 0x00151ee8: b 0x151efc
    *(uint32_t*)((s4) + 0x18) = v1;                             // 0x00151eec: sw $v1, 0x18($s4)
label_0x151ef0:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00151ef0: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x18) = v0;                             // 0x00151ef8: sw $v0, 0x18($s4)
label_0x151efc:
    s0 = *(int8_t*)(s1);                                        // 0x00151efc: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00151f00: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00151f04: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00151f08: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151f0c: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00151f10: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00151f14: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00151f18: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151f1c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00151f20: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00151f24: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00151f28: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151f2c: sll $s0, $s0, 8
    goto label_0x151f44;                                        // 0x00151f30: b 0x151f44
    s0 = s0 | v0;                                               // 0x00151f34: or $s0, $s0, $v0
label_0x151f38:
    s2 = s2 << 1;                                               // 0x00151f38: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x18) = v0;                             // 0x00151f3c: sw $v0, 0x18($s4)
    s3 = s3 + 1;                                                // 0x00151f40: addiu $s3, $s3, 1
label_0x151f44:
    v0 = (s3 < 0x18) ? 1 : 0;                                   // 0x00151f44: slti $v0, $s3, 0x18
    if (v0 != 0) goto label_0x151fc0;                           // 0x00151f48: bnez $v0, 0x151fc0
    v0 = (unsigned)s2 >> 0x18;                                  // 0x00151f4c: srl $v0, $s2, 0x18
    s3 = s3 + -0x18;                                            // 0x00151f50: addiu $s3, $s3, -0x18
    if (s3 == 0) goto label_0x151f78;                           // 0x00151f54: beqz $s3, 0x151f78
    v0 = 8;                                                     // 0x00151f58: addiu $v0, $zero, 8
    v0 = v0 - s3;                                               // 0x00151f5c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00151f60: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00151f64: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x18;                                  // 0x00151f68: srl $v1, $s2, 0x18
    s2 = s0 << s3;                                              // 0x00151f6c: sllv $s2, $s0, $s3
    goto label_0x151f84;                                        // 0x00151f70: b 0x151f84
    *(uint32_t*)((s4) + 0x5c) = v1;                             // 0x00151f74: sw $v1, 0x5c($s4)
label_0x151f78:
    v0 = (unsigned)s2 >> 0x18;                                  // 0x00151f78: srl $v0, $s2, 0x18
    *(uint32_t*)((s4) + 0x5c) = v0;                             // 0x00151f80: sw $v0, 0x5c($s4)
label_0x151f84:
    s0 = *(int8_t*)(s1);                                        // 0x00151f84: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00151f88: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00151f8c: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00151f90: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151f94: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00151f98: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00151f9c: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00151fa0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151fa4: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00151fa8: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00151fac: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00151fb0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00151fb4: sll $s0, $s0, 8
    goto label_0x151fcc;                                        // 0x00151fb8: b 0x151fcc
    s0 = s0 | v0;                                               // 0x00151fbc: or $s0, $s0, $v0
label_0x151fc0:
    s2 = s2 << 8;                                               // 0x00151fc0: sll $s2, $s2, 8
    *(uint32_t*)((s4) + 0x5c) = v0;                             // 0x00151fc4: sw $v0, 0x5c($s4)
    s3 = s3 + 8;                                                // 0x00151fc8: addiu $s3, $s3, 8
label_0x151fcc:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00151fcc: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x152048;                           // 0x00151fd0: bnez $v0, 0x152048
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00151fd4: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00151fd8: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x152000;                           // 0x00151fdc: beqz $s3, 0x152000
    v0 = 1;                                                     // 0x00151fe0: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x00151fe4: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00151fe8: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00151fec: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x00151ff0: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x00151ff4: sllv $s2, $s0, $s3
    goto label_0x15200c;                                        // 0x00151ff8: b 0x15200c
    *(uint32_t*)((s4) + 0x60) = v1;                             // 0x00151ffc: sw $v1, 0x60($s4)
label_0x152000:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00152000: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x60) = v0;                             // 0x00152008: sw $v0, 0x60($s4)
label_0x15200c:
    s0 = *(int8_t*)(s1);                                        // 0x0015200c: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152010: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00152014: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152018: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015201c: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00152020: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00152024: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00152028: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015202c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00152030: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00152034: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00152038: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015203c: sll $s0, $s0, 8
    goto label_0x152054;                                        // 0x00152040: b 0x152054
    s0 = s0 | v0;                                               // 0x00152044: or $s0, $s0, $v0
label_0x152048:
    s2 = s2 << 1;                                               // 0x00152048: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x60) = v0;                             // 0x0015204c: sw $v0, 0x60($s4)
    s3 = s3 + 1;                                                // 0x00152050: addiu $s3, $s3, 1
label_0x152054:
    v0 = (s3 < 0x1e) ? 1 : 0;                                   // 0x00152054: slti $v0, $s3, 0x1e
    if (v0 != 0) goto label_0x1520d0;                           // 0x00152058: bnez $v0, 0x1520d0
    v0 = (unsigned)s2 >> 0x1e;                                  // 0x0015205c: srl $v0, $s2, 0x1e
    s3 = s3 + -0x1e;                                            // 0x00152060: addiu $s3, $s3, -0x1e
    if (s3 == 0) goto label_0x152088;                           // 0x00152064: beqz $s3, 0x152088
    v0 = 2;                                                     // 0x00152068: addiu $v0, $zero, 2
    v0 = v0 - s3;                                               // 0x0015206c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00152070: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00152074: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1e;                                  // 0x00152078: srl $v1, $s2, 0x1e
    s2 = s0 << s3;                                              // 0x0015207c: sllv $s2, $s0, $s3
    goto label_0x152094;                                        // 0x00152080: b 0x152094
    *(uint32_t*)((s4) + 0x64) = v1;                             // 0x00152084: sw $v1, 0x64($s4)
label_0x152088:
    v0 = (unsigned)s2 >> 0x1e;                                  // 0x00152088: srl $v0, $s2, 0x1e
    *(uint32_t*)((s4) + 0x64) = v0;                             // 0x00152090: sw $v0, 0x64($s4)
label_0x152094:
    s0 = *(int8_t*)(s1);                                        // 0x00152094: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152098: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x0015209c: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x001520a0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001520a4: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x001520a8: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x001520ac: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x001520b0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001520b4: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x001520b8: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x001520bc: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x001520c0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001520c4: sll $s0, $s0, 8
    goto label_0x1520dc;                                        // 0x001520c8: b 0x1520dc
    s0 = s0 | v0;                                               // 0x001520cc: or $s0, $s0, $v0
label_0x1520d0:
    s2 = s2 << 2;                                               // 0x001520d0: sll $s2, $s2, 2
    *(uint32_t*)((s4) + 0x64) = v0;                             // 0x001520d4: sw $v0, 0x64($s4)
    s3 = s3 + 2;                                                // 0x001520d8: addiu $s3, $s3, 2
label_0x1520dc:
    v0 = (s3 < 0x1b) ? 1 : 0;                                   // 0x001520dc: slti $v0, $s3, 0x1b
    if (v0 != 0) goto label_0x152120;                           // 0x001520e0: bnez $v0, 0x152120
    v0 = (unsigned)s2 >> 0x1b;                                  // 0x001520e4: srl $v0, $s2, 0x1b
    s3 = s3 + -0x1b;                                            // 0x001520e8: addiu $s3, $s3, -0x1b
    if (s3 == 0) goto label_0x152110;                           // 0x001520ec: beqz $s3, 0x152110
    v0 = 5;                                                     // 0x001520f0: addiu $v0, $zero, 5
    v0 = v0 - s3;                                               // 0x001520f4: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x001520f8: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x001520fc: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1b;                                  // 0x00152100: srl $v1, $s2, 0x1b
    goto label_0x152118;                                        // 0x00152104: b 0x152118
    *(uint32_t*)((s4) + 0x68) = v1;                             // 0x00152108: sw $v1, 0x68($s4)
    /* nop */                                                   // 0x0015210c: nop 
label_0x152110:
    v0 = (unsigned)s2 >> 0x1b;                                  // 0x00152110: srl $v0, $s2, 0x1b
    *(uint32_t*)((s4) + 0x68) = v0;                             // 0x00152114: sw $v0, 0x68($s4)
label_0x152118:
    goto label_0x152128;                                        // 0x00152118: b 0x152128
    s1 = s1 + 4;                                                // 0x0015211c: addiu $s1, $s1, 4
label_0x152120:
    s3 = s3 + 5;                                                // 0x00152120: addiu $s3, $s3, 5
    *(uint32_t*)((s4) + 0x68) = v0;                             // 0x00152124: sw $v0, 0x68($s4)
label_0x152128:
    v0 = *(int32_t*)((s4) + 0x4c);                              // 0x00152128: lw $v0, 0x4c($s4)
    v0 = v0 << 2;                                               // 0x00152130: sll $v0, $v0, 2
    v1 = 0x22 << 16;                                            // 0x00152134: lui $v1, 0x22
    v1 = v1 + v0;                                               // 0x00152138: addu $v1, $v1, $v0
    v1 = g_00226c50;  // Global at 0x00226c50                   // 0x0015213c: lw $v1, 0x6c50($v1)
    func_00150b90();  // 0x150ac8                                // 0x00152140: jal 0x150ac8
    *(uint32_t*)((s4) + 0x338) = v1;                            // 0x00152144: sw $v1, 0x338($s4)
    func_00150d30();  // 0x150b90                                // 0x00152148: jal 0x150b90
    a0 = *(int32_t*)((s4) + 0x58);                              // 0x00152150: lw $a0, 0x58($s4)
    v0 = *(int32_t*)((s4) + 0x10);                              // 0x00152154: lw $v0, 0x10($s4)
    v1 = *(int32_t*)((s4) + 0x5c);                              // 0x00152158: lw $v1, 0x5c($s4)
    a0 = a0 << 0x12;                                            // 0x0015215c: sll $a0, $a0, 0x12
    v0 = v0 << 3;                                               // 0x00152160: sll $v0, $v0, 3
    a1 = *(int32_t*)((s4) + 0x14);                              // 0x00152164: lw $a1, 0x14($s4)
    a2 = *(int32_t*)((s4) + 0x1c);                              // 0x00152168: lw $a2, 0x1c($s4)
    v1 = v1 << 0xa;                                             // 0x0015216c: sll $v1, $v1, 0xa
    s2 = 0x22 << 16;                                            // 0x00152170: lui $s2, 0x22
    s2 = s2 + v0;                                               // 0x00152174: addu $s2, $s2, $v0
    a0 = a0 | a1;                                               // 0x0015217c: or $a0, $a0, $a1
    s0 = *(int32_t*)((s4) + 0x64);                              // 0x00152180: lw $s0, 0x64($s4)
    v1 = v1 | a2;                                               // 0x00152184: or $v1, $v1, $a2
    *(uint32_t*)((s4) + 0x2f8) = a0;                            // 0x00152188: sw $a0, 0x2f8($s4)
    s0 = s0 + 1;                                                // 0x0015218c: addiu $s0, $s0, 1
    *(uint32_t*)((s4) + 0x2fc) = v1;                            // 0x00152190: sw $v1, 0x2fc($s4)
    func_00112048();  // 0x111f90                                // 0x00152198: jal 0x111f90
    if (s0 >= 0) goto label_0x1521b8;                           // 0x001521a0: bgez $s0, 0x1521b8
    /* nop */                                                   // 0x001521a4: nop 
    a1 = 0 | 0x83e0;                                            // 0x001521a8: ori $a1, $zero, 0x83e0
    func_001119f0();  // 0x111998                                // 0x001521b0: jal 0x111998
label_0x1521b8:
    func_00111ce0();  // 0x111a58                                // 0x001521bc: jal 0x111a58
    s0 = *(int32_t*)((s4) + 0x68);                              // 0x001521c4: lw $s0, 0x68($s4)
    s0 = s0 + 1;                                                // 0x001521cc: addiu $s0, $s0, 1
    func_00112048();  // 0x111f90                                // 0x001521d0: jal 0x111f90
    if (s0 >= 0) goto label_0x1521f0;                           // 0x001521d8: bgez $s0, 0x1521f0
    /* nop */                                                   // 0x001521dc: nop 
    a1 = 0 | 0x83e0;                                            // 0x001521e0: ori $a1, $zero, 0x83e0
    func_001119f0();  // 0x111998                                // 0x001521e8: jal 0x111998
label_0x1521f0:
    func_00111e20();  // 0x111ce0                                // 0x001521f4: jal 0x111ce0
    goto label_0x1548ec;                                        // 0x00152200: b 0x1548ec
    v1 = s1 - s5;                                               // 0x00152204: subu $v1, $s1, $s5
    v0 = (s3 < 0x1d) ? 1 : 0;                                   // 0x00152208: slti $v0, $s3, 0x1d
    if (v0 != 0) goto label_0x152288;                           // 0x0015220c: bnez $v0, 0x152288
    v0 = (unsigned)s2 >> 0x1d;                                  // 0x00152210: srl $v0, $s2, 0x1d
    s3 = s3 + -0x1d;                                            // 0x00152214: addiu $s3, $s3, -0x1d
    if (s3 == 0) goto label_0x152240;                           // 0x00152218: beqz $s3, 0x152240
    v0 = 3;                                                     // 0x0015221c: addiu $v0, $zero, 3
    v0 = v0 - s3;                                               // 0x00152220: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00152224: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00152228: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1d;                                  // 0x0015222c: srl $v1, $s2, 0x1d
    s2 = s0 << s3;                                              // 0x00152230: sllv $s2, $s0, $s3
    goto label_0x15224c;                                        // 0x00152234: b 0x15224c
    *(uint32_t*)((s4) + 0x6c) = v1;                             // 0x00152238: sw $v1, 0x6c($s4)
    /* nop */                                                   // 0x0015223c: nop 
label_0x152240:
    v0 = (unsigned)s2 >> 0x1d;                                  // 0x00152240: srl $v0, $s2, 0x1d
    *(uint32_t*)((s4) + 0x6c) = v0;                             // 0x00152248: sw $v0, 0x6c($s4)
label_0x15224c:
    s0 = *(int8_t*)(s1);                                        // 0x0015224c: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152250: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00152254: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152258: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015225c: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00152260: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00152264: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00152268: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015226c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00152270: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00152274: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00152278: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015227c: sll $s0, $s0, 8
    goto label_0x152294;                                        // 0x00152280: b 0x152294
    s0 = s0 | v0;                                               // 0x00152284: or $s0, $s0, $v0
label_0x152288:
    s2 = s2 << 3;                                               // 0x00152288: sll $s2, $s2, 3
    *(uint32_t*)((s4) + 0x6c) = v0;                             // 0x0015228c: sw $v0, 0x6c($s4)
    s3 = s3 + 3;                                                // 0x00152290: addiu $s3, $s3, 3
label_0x152294:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00152294: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x152310;                           // 0x00152298: bnez $v0, 0x152310
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x0015229c: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x001522a0: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x1522c8;                           // 0x001522a4: beqz $s3, 0x1522c8
    v0 = 1;                                                     // 0x001522a8: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x001522ac: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x001522b0: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x001522b4: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x001522b8: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x001522bc: sllv $s2, $s0, $s3
    goto label_0x1522d4;                                        // 0x001522c0: b 0x1522d4
    *(uint32_t*)((s4) + 0x70) = v1;                             // 0x001522c4: sw $v1, 0x70($s4)
label_0x1522c8:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x001522c8: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x70) = v0;                             // 0x001522d0: sw $v0, 0x70($s4)
label_0x1522d4:
    s0 = *(int8_t*)(s1);                                        // 0x001522d4: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x001522d8: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x001522dc: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x001522e0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001522e4: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x001522e8: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x001522ec: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x001522f0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001522f4: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x001522f8: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x001522fc: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00152300: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152304: sll $s0, $s0, 8
    goto label_0x15231c;                                        // 0x00152308: b 0x15231c
    s0 = s0 | v0;                                               // 0x0015230c: or $s0, $s0, $v0
label_0x152310:
    s2 = s2 << 1;                                               // 0x00152310: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x70) = v0;                             // 0x00152314: sw $v0, 0x70($s4)
    s3 = s3 + 1;                                                // 0x00152318: addiu $s3, $s3, 1
label_0x15231c:
    v0 = *(int32_t*)((s4) + 0x70);                              // 0x0015231c: lw $v0, 0x70($s4)
    if (v0 == 0) goto label_0x1524bc;                           // 0x00152320: beqz $v0, 0x1524bc
    v0 = (s3 < 0x18) ? 1 : 0;                                   // 0x00152324: slti $v0, $s3, 0x18
    if (v0 != 0) goto label_0x1523a0;                           // 0x00152328: bnez $v0, 0x1523a0
    v0 = (unsigned)s2 >> 0x18;                                  // 0x0015232c: srl $v0, $s2, 0x18
    s3 = s3 + -0x18;                                            // 0x00152330: addiu $s3, $s3, -0x18
    if (s3 == 0) goto label_0x152358;                           // 0x00152334: beqz $s3, 0x152358
    v0 = 8;                                                     // 0x00152338: addiu $v0, $zero, 8
    v0 = v0 - s3;                                               // 0x0015233c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00152340: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00152344: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x18;                                  // 0x00152348: srl $v1, $s2, 0x18
    s2 = s0 << s3;                                              // 0x0015234c: sllv $s2, $s0, $s3
    goto label_0x152364;                                        // 0x00152350: b 0x152364
    *(uint32_t*)((s4) + 0x74) = v1;                             // 0x00152354: sw $v1, 0x74($s4)
label_0x152358:
    v0 = (unsigned)s2 >> 0x18;                                  // 0x00152358: srl $v0, $s2, 0x18
    *(uint32_t*)((s4) + 0x74) = v0;                             // 0x00152360: sw $v0, 0x74($s4)
label_0x152364:
    s0 = *(int8_t*)(s1);                                        // 0x00152364: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152368: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x0015236c: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152370: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152374: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00152378: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x0015237c: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00152380: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152384: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00152388: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x0015238c: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00152390: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152394: sll $s0, $s0, 8
    goto label_0x1523ac;                                        // 0x00152398: b 0x1523ac
    s0 = s0 | v0;                                               // 0x0015239c: or $s0, $s0, $v0
label_0x1523a0:
    s2 = s2 << 8;                                               // 0x001523a0: sll $s2, $s2, 8
    *(uint32_t*)((s4) + 0x74) = v0;                             // 0x001523a4: sw $v0, 0x74($s4)
    s3 = s3 + 8;                                                // 0x001523a8: addiu $s3, $s3, 8
label_0x1523ac:
    v0 = (s3 < 0x18) ? 1 : 0;                                   // 0x001523ac: slti $v0, $s3, 0x18
    if (v0 != 0) goto label_0x152428;                           // 0x001523b0: bnez $v0, 0x152428
    v0 = (unsigned)s2 >> 0x18;                                  // 0x001523b4: srl $v0, $s2, 0x18
    s3 = s3 + -0x18;                                            // 0x001523b8: addiu $s3, $s3, -0x18
    if (s3 == 0) goto label_0x1523e0;                           // 0x001523bc: beqz $s3, 0x1523e0
    v0 = 8;                                                     // 0x001523c0: addiu $v0, $zero, 8
    v0 = v0 - s3;                                               // 0x001523c4: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x001523c8: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x001523cc: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x18;                                  // 0x001523d0: srl $v1, $s2, 0x18
    s2 = s0 << s3;                                              // 0x001523d4: sllv $s2, $s0, $s3
    goto label_0x1523ec;                                        // 0x001523d8: b 0x1523ec
    *(uint32_t*)((s4) + 0x78) = v1;                             // 0x001523dc: sw $v1, 0x78($s4)
label_0x1523e0:
    v0 = (unsigned)s2 >> 0x18;                                  // 0x001523e0: srl $v0, $s2, 0x18
    *(uint32_t*)((s4) + 0x78) = v0;                             // 0x001523e8: sw $v0, 0x78($s4)
label_0x1523ec:
    s0 = *(int8_t*)(s1);                                        // 0x001523ec: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x001523f0: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x001523f4: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x001523f8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001523fc: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00152400: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00152404: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00152408: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015240c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00152410: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00152414: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00152418: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015241c: sll $s0, $s0, 8
    goto label_0x152434;                                        // 0x00152420: b 0x152434
    s0 = s0 | v0;                                               // 0x00152424: or $s0, $s0, $v0
label_0x152428:
    s2 = s2 << 8;                                               // 0x00152428: sll $s2, $s2, 8
    *(uint32_t*)((s4) + 0x78) = v0;                             // 0x0015242c: sw $v0, 0x78($s4)
    s3 = s3 + 8;                                                // 0x00152430: addiu $s3, $s3, 8
label_0x152434:
    v0 = (s3 < 0x18) ? 1 : 0;                                   // 0x00152434: slti $v0, $s3, 0x18
    if (v0 != 0) goto label_0x1524b0;                           // 0x00152438: bnez $v0, 0x1524b0
    v0 = (unsigned)s2 >> 0x18;                                  // 0x0015243c: srl $v0, $s2, 0x18
    s3 = s3 + -0x18;                                            // 0x00152440: addiu $s3, $s3, -0x18
    if (s3 == 0) goto label_0x152468;                           // 0x00152444: beqz $s3, 0x152468
    v0 = 8;                                                     // 0x00152448: addiu $v0, $zero, 8
    v0 = v0 - s3;                                               // 0x0015244c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00152450: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00152454: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x18;                                  // 0x00152458: srl $v1, $s2, 0x18
    s2 = s0 << s3;                                              // 0x0015245c: sllv $s2, $s0, $s3
    goto label_0x152474;                                        // 0x00152460: b 0x152474
    *(uint32_t*)((s4) + 0x7c) = v1;                             // 0x00152464: sw $v1, 0x7c($s4)
label_0x152468:
    v0 = (unsigned)s2 >> 0x18;                                  // 0x00152468: srl $v0, $s2, 0x18
    *(uint32_t*)((s4) + 0x7c) = v0;                             // 0x00152470: sw $v0, 0x7c($s4)
label_0x152474:
    s0 = *(int8_t*)(s1);                                        // 0x00152474: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152478: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x0015247c: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152480: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152484: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00152488: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x0015248c: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00152490: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152494: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00152498: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x0015249c: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x001524a0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001524a4: sll $s0, $s0, 8
    goto label_0x1524bc;                                        // 0x001524a8: b 0x1524bc
    s0 = s0 | v0;                                               // 0x001524ac: or $s0, $s0, $v0
label_0x1524b0:
    s2 = s2 << 8;                                               // 0x001524b0: sll $s2, $s2, 8
    *(uint32_t*)((s4) + 0x7c) = v0;                             // 0x001524b4: sw $v0, 0x7c($s4)
    s3 = s3 + 8;                                                // 0x001524b8: addiu $s3, $s3, 8
label_0x1524bc:
    v0 = (s3 < 0x12) ? 1 : 0;                                   // 0x001524bc: slti $v0, $s3, 0x12
    if (v0 != 0) goto label_0x152538;                           // 0x001524c0: bnez $v0, 0x152538
    v0 = (unsigned)s2 >> 0x12;                                  // 0x001524c4: srl $v0, $s2, 0x12
    s3 = s3 + -0x12;                                            // 0x001524c8: addiu $s3, $s3, -0x12
    if (s3 == 0) goto label_0x1524f0;                           // 0x001524cc: beqz $s3, 0x1524f0
    v0 = 0xe;                                                   // 0x001524d0: addiu $v0, $zero, 0xe
    v0 = v0 - s3;                                               // 0x001524d4: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x001524d8: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x001524dc: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x12;                                  // 0x001524e0: srl $v1, $s2, 0x12
    s2 = s0 << s3;                                              // 0x001524e4: sllv $s2, $s0, $s3
    goto label_0x1524fc;                                        // 0x001524e8: b 0x1524fc
    *(uint32_t*)((s4) + 0x80) = v1;                             // 0x001524ec: sw $v1, 0x80($s4)
label_0x1524f0:
    v0 = (unsigned)s2 >> 0x12;                                  // 0x001524f0: srl $v0, $s2, 0x12
    *(uint32_t*)((s4) + 0x80) = v0;                             // 0x001524f8: sw $v0, 0x80($s4)
label_0x1524fc:
    s0 = *(int8_t*)(s1);                                        // 0x001524fc: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152500: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00152504: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152508: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015250c: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00152510: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00152514: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00152518: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015251c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00152520: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00152524: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00152528: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015252c: sll $s0, $s0, 8
    goto label_0x152544;                                        // 0x00152530: b 0x152544
    s0 = s0 | v0;                                               // 0x00152534: or $s0, $s0, $v0
label_0x152538:
    s2 = s2 << 0xe;                                             // 0x00152538: sll $s2, $s2, 0xe
    *(uint32_t*)((s4) + 0x80) = v0;                             // 0x0015253c: sw $v0, 0x80($s4)
    s3 = s3 + 0xe;                                              // 0x00152540: addiu $s3, $s3, 0xe
label_0x152544:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00152544: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x1525c0;                           // 0x00152548: bnez $v0, 0x1525c0
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x0015254c: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00152550: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x152578;                           // 0x00152554: beqz $s3, 0x152578
    v0 = 1;                                                     // 0x00152558: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x0015255c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00152560: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00152564: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x00152568: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x0015256c: sllv $s2, $s0, $s3
    goto label_0x152584;                                        // 0x00152570: b 0x152584
    *(uint32_t*)((s4) + 0x18) = v1;                             // 0x00152574: sw $v1, 0x18($s4)
label_0x152578:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00152578: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x18) = v0;                             // 0x00152580: sw $v0, 0x18($s4)
label_0x152584:
    s0 = *(int8_t*)(s1);                                        // 0x00152584: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152588: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x0015258c: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152590: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152594: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00152598: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x0015259c: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x001525a0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001525a4: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x001525a8: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x001525ac: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x001525b0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001525b4: sll $s0, $s0, 8
    goto label_0x1525cc;                                        // 0x001525b8: b 0x1525cc
    s0 = s0 | v0;                                               // 0x001525bc: or $s0, $s0, $v0
label_0x1525c0:
    s2 = s2 << 1;                                               // 0x001525c0: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x18) = v0;                             // 0x001525c4: sw $v0, 0x18($s4)
    s3 = s3 + 1;                                                // 0x001525c8: addiu $s3, $s3, 1
label_0x1525cc:
    v0 = (s3 < 0x12) ? 1 : 0;                                   // 0x001525cc: slti $v0, $s3, 0x12
    if (v0 != 0) goto label_0x152610;                           // 0x001525d0: bnez $v0, 0x152610
    v0 = (unsigned)s2 >> 0x12;                                  // 0x001525d4: srl $v0, $s2, 0x12
    s3 = s3 + -0x12;                                            // 0x001525d8: addiu $s3, $s3, -0x12
    if (s3 == 0) goto label_0x152600;                           // 0x001525dc: beqz $s3, 0x152600
    v0 = 0xe;                                                   // 0x001525e0: addiu $v0, $zero, 0xe
    v0 = v0 - s3;                                               // 0x001525e4: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x001525e8: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x001525ec: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x12;                                  // 0x001525f0: srl $v1, $s2, 0x12
    goto label_0x152608;                                        // 0x001525f4: b 0x152608
    *(uint32_t*)((s4) + 0x84) = v1;                             // 0x001525f8: sw $v1, 0x84($s4)
    /* nop */                                                   // 0x001525fc: nop 
label_0x152600:
    v0 = (unsigned)s2 >> 0x12;                                  // 0x00152600: srl $v0, $s2, 0x12
    *(uint32_t*)((s4) + 0x84) = v0;                             // 0x00152604: sw $v0, 0x84($s4)
label_0x152608:
    goto label_0x152618;                                        // 0x00152608: b 0x152618
    s1 = s1 + 4;                                                // 0x0015260c: addiu $s1, $s1, 4
label_0x152610:
    s3 = s3 + 0xe;                                              // 0x00152610: addiu $s3, $s3, 0xe
    *(uint32_t*)((s4) + 0x84) = v0;                             // 0x00152614: sw $v0, 0x84($s4)
label_0x152618:
    func_00150d30();  // 0x150b90                                // 0x00152618: jal 0x150b90
    goto label_0x1548ec;                                        // 0x00152620: b 0x1548ec
    v1 = s1 - s5;                                               // 0x00152624: subu $v1, $s1, $s5
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00152628: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x1526a8;                           // 0x0015262c: bnez $v0, 0x1526a8
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00152630: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00152634: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x152660;                           // 0x00152638: beqz $s3, 0x152660
    v0 = 1;                                                     // 0x0015263c: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x00152640: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00152644: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00152648: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x0015264c: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x00152650: sllv $s2, $s0, $s3
    goto label_0x15266c;                                        // 0x00152654: b 0x15266c
    *(uint32_t*)((s4) + 0x24) = v1;                             // 0x00152658: sw $v1, 0x24($s4)
    /* nop */                                                   // 0x0015265c: nop 
label_0x152660:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00152660: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x24) = v0;                             // 0x00152668: sw $v0, 0x24($s4)
label_0x15266c:
    s0 = *(int8_t*)(s1);                                        // 0x0015266c: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152670: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00152674: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152678: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015267c: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00152680: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00152684: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00152688: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015268c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00152690: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00152694: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00152698: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015269c: sll $s0, $s0, 8
    goto label_0x1526b4;                                        // 0x001526a0: b 0x1526b4
    s0 = s0 | v0;                                               // 0x001526a4: or $s0, $s0, $v0
label_0x1526a8:
    s2 = s2 << 1;                                               // 0x001526a8: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x24) = v0;                             // 0x001526ac: sw $v0, 0x24($s4)
    s3 = s3 + 1;                                                // 0x001526b0: addiu $s3, $s3, 1
label_0x1526b4:
    v0 = *(int32_t*)((s4) + 0x24);                              // 0x001526b4: lw $v0, 0x24($s4)
    if (v0 == 0) goto label_0x152724;                           // 0x001526b8: beqz $v0, 0x152724
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x001526bc: slti $v0, $s3, 0x1f
    a0 = 0x3f;                                                  // 0x001526c0: addiu $a0, $zero, 0x3f
    s3 = s3 + 8;                                                // 0x001526c4: addiu $s3, $s3, 8
label_0x1526c8:
    v0 = (s3 < 0x20) ? 1 : 0;                                   // 0x001526c8: slti $v0, $s3, 0x20
    /* bnezl $v0, 0x152714 */                                   // 0x001526cc: bnezl $v0, 0x152714
    s2 = s2 << 8;                                               // 0x001526d0: sll $s2, $s2, 8
    s3 = s3 + -0x20;                                            // 0x001526d4: addiu $s3, $s3, -0x20
    s2 = s0 << s3;                                              // 0x001526d8: sllv $s2, $s0, $s3
    s0 = *(int8_t*)(s1);                                        // 0x001526dc: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x001526e0: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x001526e4: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x001526e8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001526ec: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x001526f0: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x001526f4: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x001526f8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001526fc: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00152700: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00152704: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00152708: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015270c: sll $s0, $s0, 8
    s0 = s0 | v0;                                               // 0x00152710: or $s0, $s0, $v0
    a0 = a0 + -1;                                               // 0x00152714: addiu $a0, $a0, -1
    if (a0 >= 0) goto label_0x1526c8;                           // 0x00152718: bgezl $a0, 0x1526c8
    s3 = s3 + 8;                                                // 0x0015271c: addiu $s3, $s3, 8
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00152720: slti $v0, $s3, 0x1f
label_0x152724:
    if (v0 != 0) goto label_0x1527a0;                           // 0x00152724: bnez $v0, 0x1527a0
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00152728: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x0015272c: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x152758;                           // 0x00152730: beqz $s3, 0x152758
    v0 = 1;                                                     // 0x00152734: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x00152738: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x0015273c: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00152740: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x00152744: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x00152748: sllv $s2, $s0, $s3
    goto label_0x152764;                                        // 0x0015274c: b 0x152764
    *(uint32_t*)((s4) + 0x28) = v1;                             // 0x00152750: sw $v1, 0x28($s4)
    /* nop */                                                   // 0x00152754: nop 
label_0x152758:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00152758: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x28) = v0;                             // 0x00152760: sw $v0, 0x28($s4)
label_0x152764:
    s0 = *(int8_t*)(s1);                                        // 0x00152764: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152768: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x0015276c: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152770: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152774: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00152778: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x0015277c: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00152780: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152784: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00152788: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x0015278c: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00152790: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152794: sll $s0, $s0, 8
    goto label_0x1527ac;                                        // 0x00152798: b 0x1527ac
    s0 = s0 | v0;                                               // 0x0015279c: or $s0, $s0, $v0
label_0x1527a0:
    s2 = s2 << 1;                                               // 0x001527a0: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x28) = v0;                             // 0x001527a4: sw $v0, 0x28($s4)
    s3 = s3 + 1;                                                // 0x001527a8: addiu $s3, $s3, 1
label_0x1527ac:
    v0 = *(int32_t*)((s4) + 0x28);                              // 0x001527ac: lw $v0, 0x28($s4)
    if (v0 == 0) goto label_0x15281c;                           // 0x001527b0: beqz $v0, 0x15281c
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x001527b4: slti $v0, $s3, 0x1f
    a0 = 0x3f;                                                  // 0x001527b8: addiu $a0, $zero, 0x3f
    s3 = s3 + 8;                                                // 0x001527bc: addiu $s3, $s3, 8
label_0x1527c0:
    v0 = (s3 < 0x20) ? 1 : 0;                                   // 0x001527c0: slti $v0, $s3, 0x20
    /* bnezl $v0, 0x15280c */                                   // 0x001527c4: bnezl $v0, 0x15280c
    s2 = s2 << 8;                                               // 0x001527c8: sll $s2, $s2, 8
    s3 = s3 + -0x20;                                            // 0x001527cc: addiu $s3, $s3, -0x20
    s2 = s0 << s3;                                              // 0x001527d0: sllv $s2, $s0, $s3
    s0 = *(int8_t*)(s1);                                        // 0x001527d4: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x001527d8: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x001527dc: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x001527e0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001527e4: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x001527e8: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x001527ec: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x001527f0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001527f4: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x001527f8: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x001527fc: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00152800: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152804: sll $s0, $s0, 8
    s0 = s0 | v0;                                               // 0x00152808: or $s0, $s0, $v0
    a0 = a0 + -1;                                               // 0x0015280c: addiu $a0, $a0, -1
    if (a0 >= 0) goto label_0x1527c0;                           // 0x00152810: bgezl $a0, 0x1527c0
    s3 = s3 + 8;                                                // 0x00152814: addiu $s3, $s3, 8
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00152818: slti $v0, $s3, 0x1f
label_0x15281c:
    if (v0 != 0) goto label_0x152898;                           // 0x0015281c: bnez $v0, 0x152898
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00152820: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00152824: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x152850;                           // 0x00152828: beqz $s3, 0x152850
    v0 = 1;                                                     // 0x0015282c: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x00152830: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00152834: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00152838: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x0015283c: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x00152840: sllv $s2, $s0, $s3
    goto label_0x15285c;                                        // 0x00152844: b 0x15285c
    *(uint32_t*)((s4) + 0x158) = v1;                            // 0x00152848: sw $v1, 0x158($s4)
    /* nop */                                                   // 0x0015284c: nop 
label_0x152850:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00152850: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x158) = v0;                            // 0x00152858: sw $v0, 0x158($s4)
label_0x15285c:
    s0 = *(int8_t*)(s1);                                        // 0x0015285c: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152860: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00152864: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152868: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015286c: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00152870: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00152874: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00152878: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015287c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00152880: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00152884: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00152888: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015288c: sll $s0, $s0, 8
    goto label_0x1528a4;                                        // 0x00152890: b 0x1528a4
    s0 = s0 | v0;                                               // 0x00152894: or $s0, $s0, $v0
label_0x152898:
    s2 = s2 << 1;                                               // 0x00152898: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x158) = v0;                            // 0x0015289c: sw $v0, 0x158($s4)
    s3 = s3 + 1;                                                // 0x001528a0: addiu $s3, $s3, 1
label_0x1528a4:
    v0 = *(int32_t*)((s4) + 0x158);                             // 0x001528a4: lw $v0, 0x158($s4)
    if (v0 == 0) goto label_0x152914;                           // 0x001528a8: beqz $v0, 0x152914
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x001528ac: slti $v0, $s3, 0x1f
    a0 = 0x3f;                                                  // 0x001528b0: addiu $a0, $zero, 0x3f
    s3 = s3 + 8;                                                // 0x001528b4: addiu $s3, $s3, 8
label_0x1528b8:
    v0 = (s3 < 0x20) ? 1 : 0;                                   // 0x001528b8: slti $v0, $s3, 0x20
    /* bnezl $v0, 0x152904 */                                   // 0x001528bc: bnezl $v0, 0x152904
    s2 = s2 << 8;                                               // 0x001528c0: sll $s2, $s2, 8
    s3 = s3 + -0x20;                                            // 0x001528c4: addiu $s3, $s3, -0x20
    s2 = s0 << s3;                                              // 0x001528c8: sllv $s2, $s0, $s3
    s0 = *(int8_t*)(s1);                                        // 0x001528cc: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x001528d0: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x001528d4: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x001528d8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001528dc: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x001528e0: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x001528e4: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x001528e8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001528ec: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x001528f0: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x001528f4: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x001528f8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001528fc: sll $s0, $s0, 8
    s0 = s0 | v0;                                               // 0x00152900: or $s0, $s0, $v0
    a0 = a0 + -1;                                               // 0x00152904: addiu $a0, $a0, -1
    if (a0 >= 0) goto label_0x1528b8;                           // 0x00152908: bgezl $a0, 0x1528b8
    s3 = s3 + 8;                                                // 0x0015290c: addiu $s3, $s3, 8
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00152910: slti $v0, $s3, 0x1f
label_0x152914:
    if (v0 != 0) goto label_0x152950;                           // 0x00152914: bnez $v0, 0x152950
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00152918: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x0015291c: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x152940;                           // 0x00152920: beqz $s3, 0x152940
    v0 = 1;                                                     // 0x00152924: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x00152928: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x0015292c: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00152930: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x00152934: srl $v1, $s2, 0x1f
    goto label_0x152948;                                        // 0x00152938: b 0x152948
    *(uint32_t*)((s4) + 0x15c) = v1;                            // 0x0015293c: sw $v1, 0x15c($s4)
label_0x152940:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00152940: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x15c) = v0;                            // 0x00152944: sw $v0, 0x15c($s4)
label_0x152948:
    goto label_0x152958;                                        // 0x00152948: b 0x152958
    s1 = s1 + 4;                                                // 0x0015294c: addiu $s1, $s1, 4
label_0x152950:
    s3 = s3 + 1;                                                // 0x00152950: addiu $s3, $s3, 1
    *(uint32_t*)((s4) + 0x15c) = v0;                            // 0x00152954: sw $v0, 0x15c($s4)
label_0x152958:
    v0 = *(int32_t*)((s4) + 0x15c);                             // 0x00152958: lw $v0, 0x15c($s4)
    if (v0 == 0) goto label_0x152994;                           // 0x0015295c: beqz $v0, 0x152994
    /* nop */                                                   // 0x00152960: nop 
    v1 = 0x3f;                                                  // 0x00152964: addiu $v1, $zero, 0x3f
    s3 = s3 + 8;                                                // 0x00152968: addiu $s3, $s3, 8
    /* nop */                                                   // 0x0015296c: nop 
label_0x152970:
    v0 = (s3 < 0x20) ? 1 : 0;                                   // 0x00152970: slti $v0, $s3, 0x20
    if (v0 != 0) goto label_0x152984;                           // 0x00152974: bnez $v0, 0x152984
    v1 = v1 + -1;                                               // 0x00152978: addiu $v1, $v1, -1
    s3 = s3 + -0x20;                                            // 0x0015297c: addiu $s3, $s3, -0x20
    s1 = s1 + 4;                                                // 0x00152980: addiu $s1, $s1, 4
label_0x152984:
    /* nop */                                                   // 0x00152984: nop 
    /* nop */                                                   // 0x00152988: nop 
    if (v1 >= 0) goto label_0x152970;                           // 0x0015298c: bgezl $v1, 0x152970
    s3 = s3 + 8;                                                // 0x00152990: addiu $s3, $s3, 8
label_0x152994:
    func_00150df8();  // 0x150df0                                // 0x00152994: jal 0x150df0
    goto label_0x1548ec;                                        // 0x0015299c: b 0x1548ec
    v1 = s1 - s5;                                               // 0x001529a0: subu $v1, $s1, $s5
    /* nop */                                                   // 0x001529a4: nop 
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x001529a8: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x152a28;                           // 0x001529ac: bnez $v0, 0x152a28
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x001529b0: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x001529b4: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x1529e0;                           // 0x001529b8: beqz $s3, 0x1529e0
    v0 = 1;                                                     // 0x001529bc: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x001529c0: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x001529c4: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x001529c8: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x001529cc: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x001529d0: sllv $s2, $s0, $s3
    goto label_0x1529ec;                                        // 0x001529d4: b 0x1529ec
    *(uint32_t*)((s4) + 0x19c) = v1;                            // 0x001529d8: sw $v1, 0x19c($s4)
    /* nop */                                                   // 0x001529dc: nop 
label_0x1529e0:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x001529e0: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x19c) = v0;                            // 0x001529e8: sw $v0, 0x19c($s4)
label_0x1529ec:
    s0 = *(int8_t*)(s1);                                        // 0x001529ec: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x001529f0: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x001529f4: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x001529f8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001529fc: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00152a00: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00152a04: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00152a08: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152a0c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00152a10: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00152a14: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00152a18: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152a1c: sll $s0, $s0, 8
    goto label_0x152a34;                                        // 0x00152a20: b 0x152a34
    s0 = s0 | v0;                                               // 0x00152a24: or $s0, $s0, $v0
label_0x152a28:
    s2 = s2 << 1;                                               // 0x00152a28: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x19c) = v0;                            // 0x00152a2c: sw $v0, 0x19c($s4)
    s3 = s3 + 1;                                                // 0x00152a30: addiu $s3, $s3, 1
label_0x152a34:
    v0 = (s3 < 0x18) ? 1 : 0;                                   // 0x00152a34: slti $v0, $s3, 0x18
    if (v0 != 0) goto label_0x152ab0;                           // 0x00152a38: bnez $v0, 0x152ab0
    v0 = (unsigned)s2 >> 0x18;                                  // 0x00152a3c: srl $v0, $s2, 0x18
    s3 = s3 + -0x18;                                            // 0x00152a40: addiu $s3, $s3, -0x18
    if (s3 == 0) goto label_0x152a68;                           // 0x00152a44: beqz $s3, 0x152a68
    v0 = 8;                                                     // 0x00152a48: addiu $v0, $zero, 8
    v0 = v0 - s3;                                               // 0x00152a4c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00152a50: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00152a54: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x18;                                  // 0x00152a58: srl $v1, $s2, 0x18
    s2 = s0 << s3;                                              // 0x00152a5c: sllv $s2, $s0, $s3
    goto label_0x152a74;                                        // 0x00152a60: b 0x152a74
    *(uint32_t*)((s4) + 0x1a0) = v1;                            // 0x00152a64: sw $v1, 0x1a0($s4)
label_0x152a68:
    v0 = (unsigned)s2 >> 0x18;                                  // 0x00152a68: srl $v0, $s2, 0x18
    *(uint32_t*)((s4) + 0x1a0) = v0;                            // 0x00152a70: sw $v0, 0x1a0($s4)
label_0x152a74:
    s0 = *(int8_t*)(s1);                                        // 0x00152a74: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152a78: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00152a7c: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152a80: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152a84: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00152a88: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00152a8c: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00152a90: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152a94: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00152a98: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00152a9c: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00152aa0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152aa4: sll $s0, $s0, 8
    goto label_0x152abc;                                        // 0x00152aa8: b 0x152abc
    s0 = s0 | v0;                                               // 0x00152aac: or $s0, $s0, $v0
label_0x152ab0:
    s2 = s2 << 8;                                               // 0x00152ab0: sll $s2, $s2, 8
    *(uint32_t*)((s4) + 0x1a0) = v0;                            // 0x00152ab4: sw $v0, 0x1a0($s4)
    s3 = s3 + 8;                                                // 0x00152ab8: addiu $s3, $s3, 8
label_0x152abc:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00152abc: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x152b38;                           // 0x00152ac0: bnez $v0, 0x152b38
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00152ac4: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00152ac8: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x152af0;                           // 0x00152acc: beqz $s3, 0x152af0
    v0 = 1;                                                     // 0x00152ad0: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x00152ad4: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00152ad8: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00152adc: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x00152ae0: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x00152ae4: sllv $s2, $s0, $s3
    goto label_0x152afc;                                        // 0x00152ae8: b 0x152afc
    *(uint32_t*)((s4) + 0x1a4) = v1;                            // 0x00152aec: sw $v1, 0x1a4($s4)
label_0x152af0:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00152af0: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x1a4) = v0;                            // 0x00152af8: sw $v0, 0x1a4($s4)
label_0x152afc:
    s0 = *(int8_t*)(s1);                                        // 0x00152afc: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152b00: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00152b04: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152b08: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152b0c: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00152b10: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00152b14: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00152b18: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152b1c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00152b20: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00152b24: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00152b28: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152b2c: sll $s0, $s0, 8
    goto label_0x152b44;                                        // 0x00152b30: b 0x152b44
    s0 = s0 | v0;                                               // 0x00152b34: or $s0, $s0, $v0
label_0x152b38:
    s2 = s2 << 1;                                               // 0x00152b38: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x1a4) = v0;                            // 0x00152b3c: sw $v0, 0x1a4($s4)
    s3 = s3 + 1;                                                // 0x00152b40: addiu $s3, $s3, 1
label_0x152b44:
    v0 = (s3 < 0x19) ? 1 : 0;                                   // 0x00152b44: slti $v0, $s3, 0x19
    if (v0 != 0) goto label_0x152bc0;                           // 0x00152b48: bnez $v0, 0x152bc0
    v0 = (unsigned)s2 >> 0x19;                                  // 0x00152b4c: srl $v0, $s2, 0x19
    s3 = s3 + -0x19;                                            // 0x00152b50: addiu $s3, $s3, -0x19
    if (s3 == 0) goto label_0x152b78;                           // 0x00152b54: beqz $s3, 0x152b78
    v0 = 7;                                                     // 0x00152b58: addiu $v0, $zero, 7
    v0 = v0 - s3;                                               // 0x00152b5c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00152b60: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00152b64: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x19;                                  // 0x00152b68: srl $v1, $s2, 0x19
    s2 = s0 << s3;                                              // 0x00152b6c: sllv $s2, $s0, $s3
    goto label_0x152b84;                                        // 0x00152b70: b 0x152b84
    *(uint32_t*)((s4) + 0x1a8) = v1;                            // 0x00152b74: sw $v1, 0x1a8($s4)
label_0x152b78:
    v0 = (unsigned)s2 >> 0x19;                                  // 0x00152b78: srl $v0, $s2, 0x19
    *(uint32_t*)((s4) + 0x1a8) = v0;                            // 0x00152b80: sw $v0, 0x1a8($s4)
label_0x152b84:
    s0 = *(int8_t*)(s1);                                        // 0x00152b84: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152b88: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00152b8c: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152b90: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152b94: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00152b98: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00152b9c: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00152ba0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152ba4: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00152ba8: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00152bac: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00152bb0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152bb4: sll $s0, $s0, 8
    goto label_0x152bcc;                                        // 0x00152bb8: b 0x152bcc
    s0 = s0 | v0;                                               // 0x00152bbc: or $s0, $s0, $v0
label_0x152bc0:
    s2 = s2 << 7;                                               // 0x00152bc0: sll $s2, $s2, 7
    *(uint32_t*)((s4) + 0x1a8) = v0;                            // 0x00152bc4: sw $v0, 0x1a8($s4)
    s3 = s3 + 7;                                                // 0x00152bc8: addiu $s3, $s3, 7
label_0x152bcc:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00152bcc: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x152c48;                           // 0x00152bd0: bnez $v0, 0x152c48
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00152bd4: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00152bd8: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x152c00;                           // 0x00152bdc: beqz $s3, 0x152c00
    v0 = 1;                                                     // 0x00152be0: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x00152be4: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00152be8: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00152bec: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x00152bf0: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x00152bf4: sllv $s2, $s0, $s3
    goto label_0x152c0c;                                        // 0x00152bf8: b 0x152c0c
    *(uint32_t*)((s4) + 0x18) = v1;                             // 0x00152bfc: sw $v1, 0x18($s4)
label_0x152c00:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00152c00: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x18) = v0;                             // 0x00152c08: sw $v0, 0x18($s4)
label_0x152c0c:
    s0 = *(int8_t*)(s1);                                        // 0x00152c0c: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152c10: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00152c14: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152c18: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152c1c: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00152c20: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00152c24: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00152c28: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152c2c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00152c30: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00152c34: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00152c38: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152c3c: sll $s0, $s0, 8
    goto label_0x152c54;                                        // 0x00152c40: b 0x152c54
    s0 = s0 | v0;                                               // 0x00152c44: or $s0, $s0, $v0
label_0x152c48:
    s2 = s2 << 1;                                               // 0x00152c48: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x18) = v0;                             // 0x00152c4c: sw $v0, 0x18($s4)
    s3 = s3 + 1;                                                // 0x00152c50: addiu $s3, $s3, 1
label_0x152c54:
    v0 = (s3 < 0xc) ? 1 : 0;                                    // 0x00152c54: slti $v0, $s3, 0xc
    if (v0 != 0) goto label_0x152cd0;                           // 0x00152c58: bnez $v0, 0x152cd0
    v0 = (unsigned)s2 >> 0xc;                                   // 0x00152c5c: srl $v0, $s2, 0xc
    s3 = s3 + -0xc;                                             // 0x00152c60: addiu $s3, $s3, -0xc
    if (s3 == 0) goto label_0x152c88;                           // 0x00152c64: beqz $s3, 0x152c88
    v0 = 0x14;                                                  // 0x00152c68: addiu $v0, $zero, 0x14
    v0 = v0 - s3;                                               // 0x00152c6c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00152c70: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00152c74: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0xc;                                   // 0x00152c78: srl $v1, $s2, 0xc
    s2 = s0 << s3;                                              // 0x00152c7c: sllv $s2, $s0, $s3
    goto label_0x152c94;                                        // 0x00152c80: b 0x152c94
    *(uint32_t*)((s4) + 0x1ac) = v1;                            // 0x00152c84: sw $v1, 0x1ac($s4)
label_0x152c88:
    v0 = (unsigned)s2 >> 0xc;                                   // 0x00152c88: srl $v0, $s2, 0xc
    *(uint32_t*)((s4) + 0x1ac) = v0;                            // 0x00152c90: sw $v0, 0x1ac($s4)
label_0x152c94:
    s0 = *(int8_t*)(s1);                                        // 0x00152c94: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152c98: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00152c9c: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152ca0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152ca4: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00152ca8: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00152cac: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00152cb0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152cb4: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00152cb8: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00152cbc: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00152cc0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152cc4: sll $s0, $s0, 8
    goto label_0x152cdc;                                        // 0x00152cc8: b 0x152cdc
    s0 = s0 | v0;                                               // 0x00152ccc: or $s0, $s0, $v0
label_0x152cd0:
    s2 = s2 << 0x14;                                            // 0x00152cd0: sll $s2, $s2, 0x14
    *(uint32_t*)((s4) + 0x1ac) = v0;                            // 0x00152cd4: sw $v0, 0x1ac($s4)
    s3 = s3 + 0x14;                                             // 0x00152cd8: addiu $s3, $s3, 0x14
label_0x152cdc:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00152cdc: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x152d58;                           // 0x00152ce0: bnez $v0, 0x152d58
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00152ce4: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00152ce8: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x152d10;                           // 0x00152cec: beqz $s3, 0x152d10
    v0 = 1;                                                     // 0x00152cf0: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x00152cf4: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00152cf8: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00152cfc: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x00152d00: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x00152d04: sllv $s2, $s0, $s3
    goto label_0x152d1c;                                        // 0x00152d08: b 0x152d1c
    *(uint32_t*)((s4) + 0x18) = v1;                             // 0x00152d0c: sw $v1, 0x18($s4)
label_0x152d10:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00152d10: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x18) = v0;                             // 0x00152d18: sw $v0, 0x18($s4)
label_0x152d1c:
    s0 = *(int8_t*)(s1);                                        // 0x00152d1c: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152d20: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00152d24: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152d28: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152d2c: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00152d30: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00152d34: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00152d38: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152d3c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00152d40: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00152d44: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00152d48: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152d4c: sll $s0, $s0, 8
    goto label_0x152d64;                                        // 0x00152d50: b 0x152d64
    s0 = s0 | v0;                                               // 0x00152d54: or $s0, $s0, $v0
label_0x152d58:
    s2 = s2 << 1;                                               // 0x00152d58: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x18) = v0;                             // 0x00152d5c: sw $v0, 0x18($s4)
    s3 = s3 + 1;                                                // 0x00152d60: addiu $s3, $s3, 1
label_0x152d64:
    v0 = (s3 < 0xa) ? 1 : 0;                                    // 0x00152d64: slti $v0, $s3, 0xa
    if (v0 != 0) goto label_0x152de0;                           // 0x00152d68: bnez $v0, 0x152de0
    v0 = (unsigned)s2 >> 0xa;                                   // 0x00152d6c: srl $v0, $s2, 0xa
    s3 = s3 + -0xa;                                             // 0x00152d70: addiu $s3, $s3, -0xa
    if (s3 == 0) goto label_0x152d98;                           // 0x00152d74: beqz $s3, 0x152d98
    v0 = 0x16;                                                  // 0x00152d78: addiu $v0, $zero, 0x16
    v0 = v0 - s3;                                               // 0x00152d7c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00152d80: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00152d84: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0xa;                                   // 0x00152d88: srl $v1, $s2, 0xa
    s2 = s0 << s3;                                              // 0x00152d8c: sllv $s2, $s0, $s3
    goto label_0x152da4;                                        // 0x00152d90: b 0x152da4
    *(uint32_t*)((s4) + 0x1b0) = v1;                            // 0x00152d94: sw $v1, 0x1b0($s4)
label_0x152d98:
    v0 = (unsigned)s2 >> 0xa;                                   // 0x00152d98: srl $v0, $s2, 0xa
    *(uint32_t*)((s4) + 0x1b0) = v0;                            // 0x00152da0: sw $v0, 0x1b0($s4)
label_0x152da4:
    s0 = *(int8_t*)(s1);                                        // 0x00152da4: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152da8: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00152dac: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152db0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152db4: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00152db8: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00152dbc: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00152dc0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152dc4: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00152dc8: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00152dcc: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00152dd0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152dd4: sll $s0, $s0, 8
    goto label_0x152dec;                                        // 0x00152dd8: b 0x152dec
    s0 = s0 | v0;                                               // 0x00152ddc: or $s0, $s0, $v0
label_0x152de0:
    s2 = s2 << 0x16;                                            // 0x00152de0: sll $s2, $s2, 0x16
    *(uint32_t*)((s4) + 0x1b0) = v0;                            // 0x00152de4: sw $v0, 0x1b0($s4)
    s3 = s3 + 0x16;                                             // 0x00152de8: addiu $s3, $s3, 0x16
label_0x152dec:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00152dec: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x152e68;                           // 0x00152df0: bnez $v0, 0x152e68
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00152df4: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00152df8: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x152e20;                           // 0x00152dfc: beqz $s3, 0x152e20
    v0 = 1;                                                     // 0x00152e00: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x00152e04: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00152e08: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00152e0c: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x00152e10: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x00152e14: sllv $s2, $s0, $s3
    goto label_0x152e2c;                                        // 0x00152e18: b 0x152e2c
    *(uint32_t*)((s4) + 0x18) = v1;                             // 0x00152e1c: sw $v1, 0x18($s4)
label_0x152e20:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00152e20: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x18) = v0;                             // 0x00152e28: sw $v0, 0x18($s4)
label_0x152e2c:
    s0 = *(int8_t*)(s1);                                        // 0x00152e2c: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152e30: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00152e34: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152e38: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152e3c: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00152e40: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00152e44: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00152e48: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152e4c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00152e50: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00152e54: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00152e58: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152e5c: sll $s0, $s0, 8
    goto label_0x152e74;                                        // 0x00152e60: b 0x152e74
    s0 = s0 | v0;                                               // 0x00152e64: or $s0, $s0, $v0
label_0x152e68:
    s2 = s2 << 1;                                               // 0x00152e68: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x18) = v0;                             // 0x00152e6c: sw $v0, 0x18($s4)
    s3 = s3 + 1;                                                // 0x00152e70: addiu $s3, $s3, 1
label_0x152e74:
    v0 = (s3 < 0xa) ? 1 : 0;                                    // 0x00152e74: slti $v0, $s3, 0xa
    if (v0 != 0) goto label_0x152eb8;                           // 0x00152e78: bnez $v0, 0x152eb8
    v0 = (unsigned)s2 >> 0xa;                                   // 0x00152e7c: srl $v0, $s2, 0xa
    s3 = s3 + -0xa;                                             // 0x00152e80: addiu $s3, $s3, -0xa
    if (s3 == 0) goto label_0x152ea8;                           // 0x00152e84: beqz $s3, 0x152ea8
    v0 = 0x16;                                                  // 0x00152e88: addiu $v0, $zero, 0x16
    v0 = v0 - s3;                                               // 0x00152e8c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00152e90: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00152e94: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0xa;                                   // 0x00152e98: srl $v1, $s2, 0xa
    goto label_0x1548d8;                                        // 0x00152e9c: b 0x1548d8
    *(uint32_t*)((s4) + 0x1b4) = v1;                            // 0x00152ea0: sw $v1, 0x1b4($s4)
    /* nop */                                                   // 0x00152ea4: nop 
label_0x152ea8:
    v0 = (unsigned)s2 >> 0xa;                                   // 0x00152ea8: srl $v0, $s2, 0xa
    goto label_0x1548d8;                                        // 0x00152eac: b 0x1548d8
    *(uint32_t*)((s4) + 0x1b4) = v0;                            // 0x00152eb0: sw $v0, 0x1b4($s4)
    /* nop */                                                   // 0x00152eb4: nop 
label_0x152eb8:
    s3 = s3 + 0x16;                                             // 0x00152eb8: addiu $s3, $s3, 0x16
    goto label_0x1548e8;                                        // 0x00152ebc: b 0x1548e8
    *(uint32_t*)((s4) + 0x1b4) = v0;                            // 0x00152ec0: sw $v0, 0x1b4($s4)
    /* nop */                                                   // 0x00152ec4: nop 
    v0 = 1;                                                     // 0x00152ec8: addiu $v0, $zero, 1
    v1 = (s3 < 0x1e) ? 1 : 0;                                   // 0x00152ecc: slti $v1, $s3, 0x1e
    if (v1 != 0) goto label_0x152f48;                           // 0x00152ed0: bnez $v1, 0x152f48
    *(uint32_t*)((s4) + 0x330) = v0;                            // 0x00152ed4: sw $v0, 0x330($s4)
    s3 = s3 + -0x1e;                                            // 0x00152ed8: addiu $s3, $s3, -0x1e
    if (s3 == 0) goto label_0x152f00;                           // 0x00152edc: beqz $s3, 0x152f00
    v0 = 2;                                                     // 0x00152ee0: addiu $v0, $zero, 2
    v0 = v0 - s3;                                               // 0x00152ee4: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00152ee8: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00152eec: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1e;                                  // 0x00152ef0: srl $v1, $s2, 0x1e
    s2 = s0 << s3;                                              // 0x00152ef4: sllv $s2, $s0, $s3
    goto label_0x152f0c;                                        // 0x00152ef8: b 0x152f0c
    *(uint32_t*)((s4) + 0x88) = v1;                             // 0x00152efc: sw $v1, 0x88($s4)
label_0x152f00:
    v0 = (unsigned)s2 >> 0x1e;                                  // 0x00152f00: srl $v0, $s2, 0x1e
    *(uint32_t*)((s4) + 0x88) = v0;                             // 0x00152f08: sw $v0, 0x88($s4)
label_0x152f0c:
    s0 = *(int8_t*)(s1);                                        // 0x00152f0c: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152f10: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00152f14: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152f18: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152f1c: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00152f20: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00152f24: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00152f28: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152f2c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00152f30: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00152f34: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00152f38: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152f3c: sll $s0, $s0, 8
    goto label_0x152f58;                                        // 0x00152f40: b 0x152f58
    s0 = s0 | v0;                                               // 0x00152f44: or $s0, $s0, $v0
label_0x152f48:
    v0 = (unsigned)s2 >> 0x1e;                                  // 0x00152f48: srl $v0, $s2, 0x1e
    s2 = s2 << 2;                                               // 0x00152f4c: sll $s2, $s2, 2
    *(uint32_t*)((s4) + 0x88) = v0;                             // 0x00152f50: sw $v0, 0x88($s4)
    s3 = s3 + 2;                                                // 0x00152f54: addiu $s3, $s3, 2
label_0x152f58:
    v0 = (s3 < 0x1c) ? 1 : 0;                                   // 0x00152f58: slti $v0, $s3, 0x1c
    if (v0 != 0) goto label_0x152fd8;                           // 0x00152f5c: bnez $v0, 0x152fd8
    v0 = (unsigned)s2 >> 0x1c;                                  // 0x00152f60: srl $v0, $s2, 0x1c
    s3 = s3 + -0x1c;                                            // 0x00152f64: addiu $s3, $s3, -0x1c
    if (s3 == 0) goto label_0x152f90;                           // 0x00152f68: beqz $s3, 0x152f90
    v0 = 4;                                                     // 0x00152f6c: addiu $v0, $zero, 4
    v0 = v0 - s3;                                               // 0x00152f70: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00152f74: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00152f78: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1c;                                  // 0x00152f7c: srl $v1, $s2, 0x1c
    s2 = s0 << s3;                                              // 0x00152f80: sllv $s2, $s0, $s3
    goto label_0x152f9c;                                        // 0x00152f84: b 0x152f9c
    *(uint32_t*)((s4) + 0x8c) = v1;                             // 0x00152f88: sw $v1, 0x8c($s4)
    /* nop */                                                   // 0x00152f8c: nop 
label_0x152f90:
    v0 = (unsigned)s2 >> 0x1c;                                  // 0x00152f90: srl $v0, $s2, 0x1c
    *(uint32_t*)((s4) + 0x8c) = v0;                             // 0x00152f98: sw $v0, 0x8c($s4)
label_0x152f9c:
    s0 = *(int8_t*)(s1);                                        // 0x00152f9c: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152fa0: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00152fa4: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00152fa8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152fac: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00152fb0: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00152fb4: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00152fb8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152fbc: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00152fc0: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00152fc4: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00152fc8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00152fcc: sll $s0, $s0, 8
    goto label_0x152fe4;                                        // 0x00152fd0: b 0x152fe4
    s0 = s0 | v0;                                               // 0x00152fd4: or $s0, $s0, $v0
label_0x152fd8:
    s2 = s2 << 4;                                               // 0x00152fd8: sll $s2, $s2, 4
    *(uint32_t*)((s4) + 0x8c) = v0;                             // 0x00152fdc: sw $v0, 0x8c($s4)
    s3 = s3 + 4;                                                // 0x00152fe0: addiu $s3, $s3, 4
label_0x152fe4:
    v1 = *(int32_t*)((s4) + 0x88);                              // 0x00152fe4: lw $v1, 0x88($s4)
    a0 = 1;                                                     // 0x00152fe8: addiu $a0, $zero, 1
    if (v1 != a0) goto label_0x153378;                          // 0x00152fec: bne $v1, $a0, 0x153378
    v0 = 3;                                                     // 0x00152ff0: addiu $v0, $zero, 3
    v0 = (s3 < 0x12) ? 1 : 0;                                   // 0x00152ff4: slti $v0, $s3, 0x12
    if (v0 != 0) goto label_0x153070;                           // 0x00152ff8: bnez $v0, 0x153070
    v0 = (unsigned)s2 >> 0x12;                                  // 0x00152ffc: srl $v0, $s2, 0x12
    s3 = s3 + -0x12;                                            // 0x00153000: addiu $s3, $s3, -0x12
    if (s3 == 0) goto label_0x153028;                           // 0x00153004: beqz $s3, 0x153028
    v0 = 0xe;                                                   // 0x00153008: addiu $v0, $zero, 0xe
    v0 = v0 - s3;                                               // 0x0015300c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00153010: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00153014: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x12;                                  // 0x00153018: srl $v1, $s2, 0x12
    s2 = s0 << s3;                                              // 0x0015301c: sllv $s2, $s0, $s3
    goto label_0x153034;                                        // 0x00153020: b 0x153034
    *(uint32_t*)((s4) + 0x90) = v1;                             // 0x00153024: sw $v1, 0x90($s4)
label_0x153028:
    v0 = (unsigned)s2 >> 0x12;                                  // 0x00153028: srl $v0, $s2, 0x12
    *(uint32_t*)((s4) + 0x90) = v0;                             // 0x00153030: sw $v0, 0x90($s4)
label_0x153034:
    s0 = *(int8_t*)(s1);                                        // 0x00153034: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153038: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x0015303c: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153040: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153044: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00153048: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x0015304c: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00153050: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153054: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00153058: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x0015305c: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00153060: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153064: sll $s0, $s0, 8
    goto label_0x15307c;                                        // 0x00153068: b 0x15307c
    s0 = s0 | v0;                                               // 0x0015306c: or $s0, $s0, $v0
label_0x153070:
    s2 = s2 << 0xe;                                             // 0x00153070: sll $s2, $s2, 0xe
    *(uint32_t*)((s4) + 0x90) = v0;                             // 0x00153074: sw $v0, 0x90($s4)
    s3 = s3 + 0xe;                                              // 0x00153078: addiu $s3, $s3, 0xe
label_0x15307c:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x0015307c: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x1530f8;                           // 0x00153080: bnez $v0, 0x1530f8
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153084: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00153088: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x1530b0;                           // 0x0015308c: beqz $s3, 0x1530b0
    v0 = 1;                                                     // 0x00153090: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x00153094: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00153098: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x0015309c: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x001530a0: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x001530a4: sllv $s2, $s0, $s3
    goto label_0x1530bc;                                        // 0x001530a8: b 0x1530bc
    *(uint32_t*)((s4) + 0x18) = v1;                             // 0x001530ac: sw $v1, 0x18($s4)
label_0x1530b0:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x001530b0: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x18) = v0;                             // 0x001530b8: sw $v0, 0x18($s4)
label_0x1530bc:
    s0 = *(int8_t*)(s1);                                        // 0x001530bc: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x001530c0: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x001530c4: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x001530c8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001530cc: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x001530d0: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x001530d4: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x001530d8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001530dc: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x001530e0: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x001530e4: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x001530e8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001530ec: sll $s0, $s0, 8
    goto label_0x153104;                                        // 0x001530f0: b 0x153104
    s0 = s0 | v0;                                               // 0x001530f4: or $s0, $s0, $v0
label_0x1530f8:
    s2 = s2 << 1;                                               // 0x001530f8: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x18) = v0;                             // 0x001530fc: sw $v0, 0x18($s4)
    s3 = s3 + 1;                                                // 0x00153100: addiu $s3, $s3, 1
label_0x153104:
    v0 = (s3 < 0x12) ? 1 : 0;                                   // 0x00153104: slti $v0, $s3, 0x12
    if (v0 != 0) goto label_0x153180;                           // 0x00153108: bnez $v0, 0x153180
    v0 = (unsigned)s2 >> 0x12;                                  // 0x0015310c: srl $v0, $s2, 0x12
    s3 = s3 + -0x12;                                            // 0x00153110: addiu $s3, $s3, -0x12
    if (s3 == 0) goto label_0x153138;                           // 0x00153114: beqz $s3, 0x153138
    v0 = 0xe;                                                   // 0x00153118: addiu $v0, $zero, 0xe
    v0 = v0 - s3;                                               // 0x0015311c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00153120: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00153124: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x12;                                  // 0x00153128: srl $v1, $s2, 0x12
    s2 = s0 << s3;                                              // 0x0015312c: sllv $s2, $s0, $s3
    goto label_0x153144;                                        // 0x00153130: b 0x153144
    *(uint32_t*)((s4) + 0x94) = v1;                             // 0x00153134: sw $v1, 0x94($s4)
label_0x153138:
    v0 = (unsigned)s2 >> 0x12;                                  // 0x00153138: srl $v0, $s2, 0x12
    *(uint32_t*)((s4) + 0x94) = v0;                             // 0x00153140: sw $v0, 0x94($s4)
label_0x153144:
    s0 = *(int8_t*)(s1);                                        // 0x00153144: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153148: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x0015314c: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153150: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153154: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00153158: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x0015315c: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00153160: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153164: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00153168: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x0015316c: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00153170: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153174: sll $s0, $s0, 8
    goto label_0x15318c;                                        // 0x00153178: b 0x15318c
    s0 = s0 | v0;                                               // 0x0015317c: or $s0, $s0, $v0
label_0x153180:
    s2 = s2 << 0xe;                                             // 0x00153180: sll $s2, $s2, 0xe
    *(uint32_t*)((s4) + 0x94) = v0;                             // 0x00153184: sw $v0, 0x94($s4)
    s3 = s3 + 0xe;                                              // 0x00153188: addiu $s3, $s3, 0xe
label_0x15318c:
    v0 = (s3 < 0x1b) ? 1 : 0;                                   // 0x0015318c: slti $v0, $s3, 0x1b
    if (v0 != 0) goto label_0x153208;                           // 0x00153190: bnez $v0, 0x153208
    v0 = (unsigned)s2 >> 0x1b;                                  // 0x00153194: srl $v0, $s2, 0x1b
    s3 = s3 + -0x1b;                                            // 0x00153198: addiu $s3, $s3, -0x1b
    if (s3 == 0) goto label_0x1531c0;                           // 0x0015319c: beqz $s3, 0x1531c0
    v0 = 5;                                                     // 0x001531a0: addiu $v0, $zero, 5
    v0 = v0 - s3;                                               // 0x001531a4: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x001531a8: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x001531ac: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1b;                                  // 0x001531b0: srl $v1, $s2, 0x1b
    s2 = s0 << s3;                                              // 0x001531b4: sllv $s2, $s0, $s3
    goto label_0x1531cc;                                        // 0x001531b8: b 0x1531cc
    *(uint32_t*)((s4) + 0x98) = v1;                             // 0x001531bc: sw $v1, 0x98($s4)
label_0x1531c0:
    v0 = (unsigned)s2 >> 0x1b;                                  // 0x001531c0: srl $v0, $s2, 0x1b
    *(uint32_t*)((s4) + 0x98) = v0;                             // 0x001531c8: sw $v0, 0x98($s4)
label_0x1531cc:
    s0 = *(int8_t*)(s1);                                        // 0x001531cc: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x001531d0: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x001531d4: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x001531d8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001531dc: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x001531e0: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x001531e4: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x001531e8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001531ec: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x001531f0: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x001531f4: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x001531f8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001531fc: sll $s0, $s0, 8
    goto label_0x153214;                                        // 0x00153200: b 0x153214
    s0 = s0 | v0;                                               // 0x00153204: or $s0, $s0, $v0
label_0x153208:
    s2 = s2 << 5;                                               // 0x00153208: sll $s2, $s2, 5
    *(uint32_t*)((s4) + 0x98) = v0;                             // 0x0015320c: sw $v0, 0x98($s4)
    s3 = s3 + 5;                                                // 0x00153210: addiu $s3, $s3, 5
label_0x153214:
    v0 = (s3 < 0x1b) ? 1 : 0;                                   // 0x00153214: slti $v0, $s3, 0x1b
    if (v0 != 0) goto label_0x153290;                           // 0x00153218: bnez $v0, 0x153290
    v0 = (unsigned)s2 >> 0x1b;                                  // 0x0015321c: srl $v0, $s2, 0x1b
    s3 = s3 + -0x1b;                                            // 0x00153220: addiu $s3, $s3, -0x1b
    if (s3 == 0) goto label_0x153248;                           // 0x00153224: beqz $s3, 0x153248
    v0 = 5;                                                     // 0x00153228: addiu $v0, $zero, 5
    v0 = v0 - s3;                                               // 0x0015322c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00153230: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00153234: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1b;                                  // 0x00153238: srl $v1, $s2, 0x1b
    s2 = s0 << s3;                                              // 0x0015323c: sllv $s2, $s0, $s3
    goto label_0x153254;                                        // 0x00153240: b 0x153254
    *(uint32_t*)((s4) + 0x9c) = v1;                             // 0x00153244: sw $v1, 0x9c($s4)
label_0x153248:
    v0 = (unsigned)s2 >> 0x1b;                                  // 0x00153248: srl $v0, $s2, 0x1b
    *(uint32_t*)((s4) + 0x9c) = v0;                             // 0x00153250: sw $v0, 0x9c($s4)
label_0x153254:
    s0 = *(int8_t*)(s1);                                        // 0x00153254: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153258: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x0015325c: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153260: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153264: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00153268: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x0015326c: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00153270: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153274: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00153278: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x0015327c: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00153280: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153284: sll $s0, $s0, 8
    goto label_0x15329c;                                        // 0x00153288: b 0x15329c
    s0 = s0 | v0;                                               // 0x0015328c: or $s0, $s0, $v0
label_0x153290:
    s2 = s2 << 5;                                               // 0x00153290: sll $s2, $s2, 5
    *(uint32_t*)((s4) + 0x9c) = v0;                             // 0x00153294: sw $v0, 0x9c($s4)
    s3 = s3 + 5;                                                // 0x00153298: addiu $s3, $s3, 5
label_0x15329c:
    v0 = (s3 < 0x1b) ? 1 : 0;                                   // 0x0015329c: slti $v0, $s3, 0x1b
    if (v0 != 0) goto label_0x153318;                           // 0x001532a0: bnez $v0, 0x153318
    v0 = (unsigned)s2 >> 0x1b;                                  // 0x001532a4: srl $v0, $s2, 0x1b
    s3 = s3 + -0x1b;                                            // 0x001532a8: addiu $s3, $s3, -0x1b
    if (s3 == 0) goto label_0x1532d0;                           // 0x001532ac: beqz $s3, 0x1532d0
    v0 = 5;                                                     // 0x001532b0: addiu $v0, $zero, 5
    v0 = v0 - s3;                                               // 0x001532b4: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x001532b8: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x001532bc: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1b;                                  // 0x001532c0: srl $v1, $s2, 0x1b
    s2 = s0 << s3;                                              // 0x001532c4: sllv $s2, $s0, $s3
    goto label_0x1532dc;                                        // 0x001532c8: b 0x1532dc
    *(uint32_t*)((s4) + 0xa0) = v1;                             // 0x001532cc: sw $v1, 0xa0($s4)
label_0x1532d0:
    v0 = (unsigned)s2 >> 0x1b;                                  // 0x001532d0: srl $v0, $s2, 0x1b
    *(uint32_t*)((s4) + 0xa0) = v0;                             // 0x001532d8: sw $v0, 0xa0($s4)
label_0x1532dc:
    s0 = *(int8_t*)(s1);                                        // 0x001532dc: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x001532e0: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x001532e4: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x001532e8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001532ec: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x001532f0: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x001532f4: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x001532f8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001532fc: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00153300: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00153304: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00153308: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015330c: sll $s0, $s0, 8
    goto label_0x153324;                                        // 0x00153310: b 0x153324
    s0 = s0 | v0;                                               // 0x00153314: or $s0, $s0, $v0
label_0x153318:
    s2 = s2 << 5;                                               // 0x00153318: sll $s2, $s2, 5
    *(uint32_t*)((s4) + 0xa0) = v0;                             // 0x0015331c: sw $v0, 0xa0($s4)
    s3 = s3 + 5;                                                // 0x00153320: addiu $s3, $s3, 5
label_0x153324:
    v0 = (s3 < 0x1b) ? 1 : 0;                                   // 0x00153324: slti $v0, $s3, 0x1b
    if (v0 != 0) goto label_0x153368;                           // 0x00153328: bnez $v0, 0x153368
    v0 = (unsigned)s2 >> 0x1b;                                  // 0x0015332c: srl $v0, $s2, 0x1b
    s3 = s3 + -0x1b;                                            // 0x00153330: addiu $s3, $s3, -0x1b
    if (s3 == 0) goto label_0x153358;                           // 0x00153334: beqz $s3, 0x153358
    v0 = 5;                                                     // 0x00153338: addiu $v0, $zero, 5
    v0 = v0 - s3;                                               // 0x0015333c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00153340: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00153344: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1b;                                  // 0x00153348: srl $v1, $s2, 0x1b
    goto label_0x1548d8;                                        // 0x0015334c: b 0x1548d8
    *(uint32_t*)((s4) + 0xa4) = v1;                             // 0x00153350: sw $v1, 0xa4($s4)
    /* nop */                                                   // 0x00153354: nop 
label_0x153358:
    v0 = (unsigned)s2 >> 0x1b;                                  // 0x00153358: srl $v0, $s2, 0x1b
    goto label_0x1548d8;                                        // 0x0015335c: b 0x1548d8
    *(uint32_t*)((s4) + 0xa4) = v0;                             // 0x00153360: sw $v0, 0xa4($s4)
    /* nop */                                                   // 0x00153364: nop 
label_0x153368:
    s3 = s3 + 5;                                                // 0x00153368: addiu $s3, $s3, 5
    goto label_0x1548e8;                                        // 0x0015336c: b 0x1548e8
    *(uint32_t*)((s4) + 0xa4) = v0;                             // 0x00153370: sw $v0, 0xa4($s4)
    /* nop */                                                   // 0x00153374: nop 
label_0x153378:
    if (v1 != v0) goto label_0x1548ec;                          // 0x00153378: bnel $v1, $v0, 0x1548ec
    v1 = s1 - s5;                                               // 0x0015337c: subu $v1, $s1, $s5
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00153380: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x1533f8;                           // 0x00153384: bnez $v0, 0x1533f8
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153388: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x0015338c: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x1533b0;                           // 0x00153390: beqz $s3, 0x1533b0
    v0 = a0 - s3;                                               // 0x00153394: subu $v0, $a0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00153398: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x0015339c: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x001533a0: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x001533a4: sllv $s2, $s0, $s3
    goto label_0x1533bc;                                        // 0x001533a8: b 0x1533bc
    *(uint32_t*)((s4) + 0xa8) = v1;                             // 0x001533ac: sw $v1, 0xa8($s4)
label_0x1533b0:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x001533b0: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0xa8) = v0;                             // 0x001533b8: sw $v0, 0xa8($s4)
label_0x1533bc:
    s0 = *(int8_t*)(s1);                                        // 0x001533bc: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x001533c0: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x001533c4: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x001533c8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001533cc: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x001533d0: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x001533d4: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x001533d8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001533dc: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x001533e0: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x001533e4: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x001533e8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001533ec: sll $s0, $s0, 8
    goto label_0x153404;                                        // 0x001533f0: b 0x153404
    s0 = s0 | v0;                                               // 0x001533f4: or $s0, $s0, $v0
label_0x1533f8:
    s2 = s2 << 1;                                               // 0x001533f8: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0xa8) = v0;                             // 0x001533fc: sw $v0, 0xa8($s4)
    s3 = s3 + 1;                                                // 0x00153400: addiu $s3, $s3, 1
label_0x153404:
    v0 = *(int32_t*)((s4) + 0xa8);                              // 0x00153404: lw $v0, 0xa8($s4)
    if (v0 == 0) goto label_0x153494;                           // 0x00153408: beqz $v0, 0x153494
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x0015340c: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x153488;                           // 0x00153410: bnez $v0, 0x153488
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153414: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00153418: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x153440;                           // 0x0015341c: beqz $s3, 0x153440
    v0 = 1;                                                     // 0x00153420: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x00153424: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00153428: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x0015342c: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x00153430: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x00153434: sllv $s2, $s0, $s3
    goto label_0x15344c;                                        // 0x00153438: b 0x15344c
    *(uint32_t*)((s4) + 0xac) = v1;                             // 0x0015343c: sw $v1, 0xac($s4)
label_0x153440:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153440: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0xac) = v0;                             // 0x00153448: sw $v0, 0xac($s4)
label_0x15344c:
    s0 = *(int8_t*)(s1);                                        // 0x0015344c: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153450: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00153454: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153458: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015345c: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00153460: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00153464: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00153468: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015346c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00153470: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00153474: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00153478: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015347c: sll $s0, $s0, 8
    goto label_0x153494;                                        // 0x00153480: b 0x153494
    s0 = s0 | v0;                                               // 0x00153484: or $s0, $s0, $v0
label_0x153488:
    s2 = s2 << 1;                                               // 0x00153488: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0xac) = v0;                             // 0x0015348c: sw $v0, 0xac($s4)
    s3 = s3 + 1;                                                // 0x00153490: addiu $s3, $s3, 1
label_0x153494:
    v0 = (s3 < 0x1d) ? 1 : 0;                                   // 0x00153494: slti $v0, $s3, 0x1d
    if (v0 != 0) goto label_0x153510;                           // 0x00153498: bnez $v0, 0x153510
    v0 = (unsigned)s2 >> 0x1d;                                  // 0x0015349c: srl $v0, $s2, 0x1d
    s3 = s3 + -0x1d;                                            // 0x001534a0: addiu $s3, $s3, -0x1d
    if (s3 == 0) goto label_0x1534c8;                           // 0x001534a4: beqz $s3, 0x1534c8
    v0 = 3;                                                     // 0x001534a8: addiu $v0, $zero, 3
    v0 = v0 - s3;                                               // 0x001534ac: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x001534b0: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x001534b4: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1d;                                  // 0x001534b8: srl $v1, $s2, 0x1d
    s2 = s0 << s3;                                              // 0x001534bc: sllv $s2, $s0, $s3
    goto label_0x1534d4;                                        // 0x001534c0: b 0x1534d4
    *(uint32_t*)((s4) + 0xb0) = v1;                             // 0x001534c4: sw $v1, 0xb0($s4)
label_0x1534c8:
    v0 = (unsigned)s2 >> 0x1d;                                  // 0x001534c8: srl $v0, $s2, 0x1d
    *(uint32_t*)((s4) + 0xb0) = v0;                             // 0x001534d0: sw $v0, 0xb0($s4)
label_0x1534d4:
    s0 = *(int8_t*)(s1);                                        // 0x001534d4: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x001534d8: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x001534dc: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x001534e0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001534e4: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x001534e8: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x001534ec: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x001534f0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001534f4: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x001534f8: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x001534fc: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00153500: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153504: sll $s0, $s0, 8
    goto label_0x15351c;                                        // 0x00153508: b 0x15351c
    s0 = s0 | v0;                                               // 0x0015350c: or $s0, $s0, $v0
label_0x153510:
    s2 = s2 << 3;                                               // 0x00153510: sll $s2, $s2, 3
    *(uint32_t*)((s4) + 0xb0) = v0;                             // 0x00153514: sw $v0, 0xb0($s4)
    s3 = s3 + 3;                                                // 0x00153518: addiu $s3, $s3, 3
label_0x15351c:
    v0 = (s3 < 0x1d) ? 1 : 0;                                   // 0x0015351c: slti $v0, $s3, 0x1d
    if (v0 != 0) goto label_0x153560;                           // 0x00153520: bnez $v0, 0x153560
    v0 = (unsigned)s2 >> 0x1d;                                  // 0x00153524: srl $v0, $s2, 0x1d
    s3 = s3 + -0x1d;                                            // 0x00153528: addiu $s3, $s3, -0x1d
    if (s3 == 0) goto label_0x153550;                           // 0x0015352c: beqz $s3, 0x153550
    v0 = 3;                                                     // 0x00153530: addiu $v0, $zero, 3
    v0 = v0 - s3;                                               // 0x00153534: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00153538: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x0015353c: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1d;                                  // 0x00153540: srl $v1, $s2, 0x1d
    goto label_0x1548d8;                                        // 0x00153544: b 0x1548d8
    *(uint32_t*)((s4) + 0xb4) = v1;                             // 0x00153548: sw $v1, 0xb4($s4)
    /* nop */                                                   // 0x0015354c: nop 
label_0x153550:
    v0 = (unsigned)s2 >> 0x1d;                                  // 0x00153550: srl $v0, $s2, 0x1d
    goto label_0x1548d8;                                        // 0x00153554: b 0x1548d8
    *(uint32_t*)((s4) + 0xb4) = v0;                             // 0x00153558: sw $v0, 0xb4($s4)
    /* nop */                                                   // 0x0015355c: nop 
label_0x153560:
    s3 = s3 + 3;                                                // 0x00153560: addiu $s3, $s3, 3
    goto label_0x1548e8;                                        // 0x00153564: b 0x1548e8
    *(uint32_t*)((s4) + 0xb4) = v0;                             // 0x00153568: sw $v0, 0xb4($s4)
    /* nop */                                                   // 0x0015356c: nop 
    func_00150d80();  // 0x150d30                                // 0x00153570: jal 0x150d30
    v0 = *(int32_t*)((s4) + 0x38);                              // 0x00153578: lw $v0, 0x38($s4)
    if (v0 <= 0) goto label_0x1548e8;                           // 0x0015357c: blez $v0, 0x1548e8
    t0 = 0x10;                                                  // 0x00153584: addiu $t0, $zero, 0x10
    a3 = 1;                                                     // 0x00153588: addiu $a3, $zero, 1
    a1 = s4 + 0x16c;                                            // 0x0015358c: addiu $a1, $s4, 0x16c
    a0 = s4 + 0x160;                                            // 0x00153590: addiu $a0, $s4, 0x160
    /* nop */                                                   // 0x00153594: nop 
label_0x153598:
    v0 = (s3 < 0x10) ? 1 : 0;                                   // 0x00153598: slti $v0, $s3, 0x10
    if (v0 != 0) goto label_0x153610;                           // 0x0015359c: bnez $v0, 0x153610
    v0 = (unsigned)s2 >> 0x10;                                  // 0x001535a0: srl $v0, $s2, 0x10
    s3 = s3 + -0x10;                                            // 0x001535a4: addiu $s3, $s3, -0x10
    if (s3 == 0) goto label_0x1535c8;                           // 0x001535a8: beqz $s3, 0x1535c8
    v0 = t0 - s3;                                               // 0x001535ac: subu $v0, $t0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x001535b0: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x001535b4: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x10;                                  // 0x001535b8: srl $v1, $s2, 0x10
    s2 = s0 << s3;                                              // 0x001535bc: sllv $s2, $s0, $s3
    goto label_0x1535d4;                                        // 0x001535c0: b 0x1535d4
    *(uint32_t*)(a0) = v1;                                      // 0x001535c4: sw $v1, 0($a0)
label_0x1535c8:
    v0 = (unsigned)s2 >> 0x10;                                  // 0x001535c8: srl $v0, $s2, 0x10
    *(uint32_t*)(a0) = v0;                                      // 0x001535d0: sw $v0, 0($a0)
label_0x1535d4:
    s0 = *(int8_t*)(s1);                                        // 0x001535d4: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x001535d8: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x001535dc: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x001535e0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001535e4: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x001535e8: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x001535ec: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x001535f0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001535f4: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x001535f8: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x001535fc: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00153600: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153604: sll $s0, $s0, 8
    goto label_0x15361c;                                        // 0x00153608: b 0x15361c
    s0 = s0 | v0;                                               // 0x0015360c: or $s0, $s0, $v0
label_0x153610:
    s2 = s2 << 0x10;                                            // 0x00153610: sll $s2, $s2, 0x10
    *(uint32_t*)(a0) = v0;                                      // 0x00153614: sw $v0, 0($a0)
    s3 = s3 + 0x10;                                             // 0x00153618: addiu $s3, $s3, 0x10
label_0x15361c:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x0015361c: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x153698;                           // 0x00153620: bnez $v0, 0x153698
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153624: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00153628: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x153650;                           // 0x0015362c: beqz $s3, 0x153650
    v0 = a3 - s3;                                               // 0x00153630: subu $v0, $a3, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00153634: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00153638: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x0015363c: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x00153640: sllv $s2, $s0, $s3
    goto label_0x15365c;                                        // 0x00153644: b 0x15365c
    *(uint32_t*)((s4) + 0x18) = v1;                             // 0x00153648: sw $v1, 0x18($s4)
    /* nop */                                                   // 0x0015364c: nop 
label_0x153650:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153650: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x18) = v0;                             // 0x00153658: sw $v0, 0x18($s4)
label_0x15365c:
    s0 = *(int8_t*)(s1);                                        // 0x0015365c: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153660: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00153664: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153668: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015366c: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00153670: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00153674: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00153678: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015367c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00153680: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00153684: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00153688: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015368c: sll $s0, $s0, 8
    goto label_0x1536a4;                                        // 0x00153690: b 0x1536a4
    s0 = s0 | v0;                                               // 0x00153694: or $s0, $s0, $v0
label_0x153698:
    s2 = s2 << 1;                                               // 0x00153698: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x18) = v0;                             // 0x0015369c: sw $v0, 0x18($s4)
    s3 = s3 + 1;                                                // 0x001536a0: addiu $s3, $s3, 1
label_0x1536a4:
    v0 = (s3 < 0x10) ? 1 : 0;                                   // 0x001536a4: slti $v0, $s3, 0x10
    if (v0 != 0) goto label_0x153720;                           // 0x001536a8: bnez $v0, 0x153720
    v0 = (unsigned)s2 >> 0x10;                                  // 0x001536ac: srl $v0, $s2, 0x10
    s3 = s3 + -0x10;                                            // 0x001536b0: addiu $s3, $s3, -0x10
    if (s3 == 0) goto label_0x1536d8;                           // 0x001536b4: beqz $s3, 0x1536d8
    v0 = t0 - s3;                                               // 0x001536b8: subu $v0, $t0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x001536bc: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x001536c0: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x10;                                  // 0x001536c4: srl $v1, $s2, 0x10
    s2 = s0 << s3;                                              // 0x001536c8: sllv $s2, $s0, $s3
    goto label_0x1536e4;                                        // 0x001536cc: b 0x1536e4
    *(uint32_t*)(a1) = v1;                                      // 0x001536d0: sw $v1, 0($a1)
    /* nop */                                                   // 0x001536d4: nop 
label_0x1536d8:
    v0 = (unsigned)s2 >> 0x10;                                  // 0x001536d8: srl $v0, $s2, 0x10
    *(uint32_t*)(a1) = v0;                                      // 0x001536e0: sw $v0, 0($a1)
label_0x1536e4:
    s0 = *(int8_t*)(s1);                                        // 0x001536e4: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x001536e8: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x001536ec: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x001536f0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001536f4: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x001536f8: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x001536fc: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00153700: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153704: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00153708: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x0015370c: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00153710: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153714: sll $s0, $s0, 8
    goto label_0x15372c;                                        // 0x00153718: b 0x15372c
    s0 = s0 | v0;                                               // 0x0015371c: or $s0, $s0, $v0
label_0x153720:
    s2 = s2 << 0x10;                                            // 0x00153720: sll $s2, $s2, 0x10
    *(uint32_t*)(a1) = v0;                                      // 0x00153724: sw $v0, 0($a1)
    s3 = s3 + 0x10;                                             // 0x00153728: addiu $s3, $s3, 0x10
label_0x15372c:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x0015372c: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x1537a8;                           // 0x00153730: bnez $v0, 0x1537a8
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153734: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00153738: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x153760;                           // 0x0015373c: beqz $s3, 0x153760
    v0 = a3 - s3;                                               // 0x00153740: subu $v0, $a3, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00153744: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00153748: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x0015374c: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x00153750: sllv $s2, $s0, $s3
    goto label_0x15376c;                                        // 0x00153754: b 0x15376c
    *(uint32_t*)((s4) + 0x18) = v1;                             // 0x00153758: sw $v1, 0x18($s4)
    /* nop */                                                   // 0x0015375c: nop 
label_0x153760:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153760: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x18) = v0;                             // 0x00153768: sw $v0, 0x18($s4)
label_0x15376c:
    s0 = *(int8_t*)(s1);                                        // 0x0015376c: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153770: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00153774: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153778: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015377c: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00153780: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00153784: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00153788: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015378c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00153790: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00153794: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00153798: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015379c: sll $s0, $s0, 8
    goto label_0x1537b4;                                        // 0x001537a0: b 0x1537b4
    s0 = s0 | v0;                                               // 0x001537a4: or $s0, $s0, $v0
label_0x1537a8:
    s2 = s2 << 1;                                               // 0x001537a8: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x18) = v0;                             // 0x001537ac: sw $v0, 0x18($s4)
    s3 = s3 + 1;                                                // 0x001537b0: addiu $s3, $s3, 1
label_0x1537b4:
    v0 = *(int32_t*)((s4) + 0x38);                              // 0x001537b4: lw $v0, 0x38($s4)
    a2 = a2 + 1;                                                // 0x001537b8: addiu $a2, $a2, 1
    a1 = a1 + 4;                                                // 0x001537bc: addiu $a1, $a1, 4
    v0 = (a2 < v0) ? 1 : 0;                                     // 0x001537c0: slt $v0, $a2, $v0
    if (v0 != 0) goto label_0x153598;                           // 0x001537c4: bnez $v0, 0x153598
    a0 = a0 + 4;                                                // 0x001537c8: addiu $a0, $a0, 4
    goto label_0x1548ec;                                        // 0x001537cc: b 0x1548ec
    v1 = s1 - s5;                                               // 0x001537d0: subu $v1, $s1, $s5
    /* nop */                                                   // 0x001537d4: nop 
    v0 = (s3 < 0x1c) ? 1 : 0;                                   // 0x001537d8: slti $v0, $s3, 0x1c
    if (v0 != 0) goto label_0x153858;                           // 0x001537dc: bnez $v0, 0x153858
    v0 = (unsigned)s2 >> 0x1c;                                  // 0x001537e0: srl $v0, $s2, 0x1c
    s3 = s3 + -0x1c;                                            // 0x001537e4: addiu $s3, $s3, -0x1c
    if (s3 == 0) goto label_0x153810;                           // 0x001537e8: beqz $s3, 0x153810
    v0 = 4;                                                     // 0x001537ec: addiu $v0, $zero, 4
    v0 = v0 - s3;                                               // 0x001537f0: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x001537f4: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x001537f8: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1c;                                  // 0x001537fc: srl $v1, $s2, 0x1c
    s2 = s0 << s3;                                              // 0x00153800: sllv $s2, $s0, $s3
    goto label_0x15381c;                                        // 0x00153804: b 0x15381c
    *(uint32_t*)((s4) + 0x104) = v1;                            // 0x00153808: sw $v1, 0x104($s4)
    /* nop */                                                   // 0x0015380c: nop 
label_0x153810:
    v0 = (unsigned)s2 >> 0x1c;                                  // 0x00153810: srl $v0, $s2, 0x1c
    *(uint32_t*)((s4) + 0x104) = v0;                            // 0x00153818: sw $v0, 0x104($s4)
label_0x15381c:
    s0 = *(int8_t*)(s1);                                        // 0x0015381c: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153820: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00153824: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153828: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015382c: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00153830: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00153834: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00153838: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015383c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00153840: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00153844: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00153848: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015384c: sll $s0, $s0, 8
    goto label_0x153864;                                        // 0x00153850: b 0x153864
    s0 = s0 | v0;                                               // 0x00153854: or $s0, $s0, $v0
label_0x153858:
    s2 = s2 << 4;                                               // 0x00153858: sll $s2, $s2, 4
    *(uint32_t*)((s4) + 0x104) = v0;                            // 0x0015385c: sw $v0, 0x104($s4)
    s3 = s3 + 4;                                                // 0x00153860: addiu $s3, $s3, 4
label_0x153864:
    v0 = (s3 < 0x1c) ? 1 : 0;                                   // 0x00153864: slti $v0, $s3, 0x1c
    if (v0 != 0) goto label_0x1538e0;                           // 0x00153868: bnez $v0, 0x1538e0
    v0 = (unsigned)s2 >> 0x1c;                                  // 0x0015386c: srl $v0, $s2, 0x1c
    s3 = s3 + -0x1c;                                            // 0x00153870: addiu $s3, $s3, -0x1c
    if (s3 == 0) goto label_0x153898;                           // 0x00153874: beqz $s3, 0x153898
    v0 = 4;                                                     // 0x00153878: addiu $v0, $zero, 4
    v0 = v0 - s3;                                               // 0x0015387c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00153880: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00153884: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1c;                                  // 0x00153888: srl $v1, $s2, 0x1c
    s2 = s0 << s3;                                              // 0x0015388c: sllv $s2, $s0, $s3
    goto label_0x1538a4;                                        // 0x00153890: b 0x1538a4
    *(uint32_t*)((s4) + 0x108) = v1;                            // 0x00153894: sw $v1, 0x108($s4)
label_0x153898:
    v0 = (unsigned)s2 >> 0x1c;                                  // 0x00153898: srl $v0, $s2, 0x1c
    *(uint32_t*)((s4) + 0x108) = v0;                            // 0x001538a0: sw $v0, 0x108($s4)
label_0x1538a4:
    s0 = *(int8_t*)(s1);                                        // 0x001538a4: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x001538a8: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x001538ac: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x001538b0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001538b4: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x001538b8: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x001538bc: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x001538c0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001538c4: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x001538c8: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x001538cc: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x001538d0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001538d4: sll $s0, $s0, 8
    goto label_0x1538ec;                                        // 0x001538d8: b 0x1538ec
    s0 = s0 | v0;                                               // 0x001538dc: or $s0, $s0, $v0
label_0x1538e0:
    s2 = s2 << 4;                                               // 0x001538e0: sll $s2, $s2, 4
    *(uint32_t*)((s4) + 0x108) = v0;                            // 0x001538e4: sw $v0, 0x108($s4)
    s3 = s3 + 4;                                                // 0x001538e8: addiu $s3, $s3, 4
label_0x1538ec:
    v0 = (s3 < 0x1c) ? 1 : 0;                                   // 0x001538ec: slti $v0, $s3, 0x1c
    if (v0 != 0) goto label_0x153968;                           // 0x001538f0: bnez $v0, 0x153968
    v0 = (unsigned)s2 >> 0x1c;                                  // 0x001538f4: srl $v0, $s2, 0x1c
    s3 = s3 + -0x1c;                                            // 0x001538f8: addiu $s3, $s3, -0x1c
    if (s3 == 0) goto label_0x153920;                           // 0x001538fc: beqz $s3, 0x153920
    v0 = 4;                                                     // 0x00153900: addiu $v0, $zero, 4
    v0 = v0 - s3;                                               // 0x00153904: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00153908: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x0015390c: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1c;                                  // 0x00153910: srl $v1, $s2, 0x1c
    s2 = s0 << s3;                                              // 0x00153914: sllv $s2, $s0, $s3
    goto label_0x15392c;                                        // 0x00153918: b 0x15392c
    *(uint32_t*)((s4) + 0x10c) = v1;                            // 0x0015391c: sw $v1, 0x10c($s4)
label_0x153920:
    v0 = (unsigned)s2 >> 0x1c;                                  // 0x00153920: srl $v0, $s2, 0x1c
    *(uint32_t*)((s4) + 0x10c) = v0;                            // 0x00153928: sw $v0, 0x10c($s4)
label_0x15392c:
    s0 = *(int8_t*)(s1);                                        // 0x0015392c: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153930: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00153934: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153938: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015393c: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00153940: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00153944: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00153948: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015394c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00153950: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00153954: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00153958: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015395c: sll $s0, $s0, 8
    goto label_0x153974;                                        // 0x00153960: b 0x153974
    s0 = s0 | v0;                                               // 0x00153964: or $s0, $s0, $v0
label_0x153968:
    s2 = s2 << 4;                                               // 0x00153968: sll $s2, $s2, 4
    *(uint32_t*)((s4) + 0x10c) = v0;                            // 0x0015396c: sw $v0, 0x10c($s4)
    s3 = s3 + 4;                                                // 0x00153970: addiu $s3, $s3, 4
label_0x153974:
    v0 = (s3 < 0x1c) ? 1 : 0;                                   // 0x00153974: slti $v0, $s3, 0x1c
    if (v0 != 0) goto label_0x1539f0;                           // 0x00153978: bnez $v0, 0x1539f0
    v0 = (unsigned)s2 >> 0x1c;                                  // 0x0015397c: srl $v0, $s2, 0x1c
    s3 = s3 + -0x1c;                                            // 0x00153980: addiu $s3, $s3, -0x1c
    if (s3 == 0) goto label_0x1539a8;                           // 0x00153984: beqz $s3, 0x1539a8
    v0 = 4;                                                     // 0x00153988: addiu $v0, $zero, 4
    v0 = v0 - s3;                                               // 0x0015398c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00153990: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00153994: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1c;                                  // 0x00153998: srl $v1, $s2, 0x1c
    s2 = s0 << s3;                                              // 0x0015399c: sllv $s2, $s0, $s3
    goto label_0x1539b4;                                        // 0x001539a0: b 0x1539b4
    *(uint32_t*)((s4) + 0x110) = v1;                            // 0x001539a4: sw $v1, 0x110($s4)
label_0x1539a8:
    v0 = (unsigned)s2 >> 0x1c;                                  // 0x001539a8: srl $v0, $s2, 0x1c
    *(uint32_t*)((s4) + 0x110) = v0;                            // 0x001539b0: sw $v0, 0x110($s4)
label_0x1539b4:
    s0 = *(int8_t*)(s1);                                        // 0x001539b4: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x001539b8: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x001539bc: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x001539c0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001539c4: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x001539c8: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x001539cc: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x001539d0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001539d4: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x001539d8: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x001539dc: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x001539e0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001539e4: sll $s0, $s0, 8
    goto label_0x1539fc;                                        // 0x001539e8: b 0x1539fc
    s0 = s0 | v0;                                               // 0x001539ec: or $s0, $s0, $v0
label_0x1539f0:
    s2 = s2 << 4;                                               // 0x001539f0: sll $s2, $s2, 4
    *(uint32_t*)((s4) + 0x110) = v0;                            // 0x001539f4: sw $v0, 0x110($s4)
    s3 = s3 + 4;                                                // 0x001539f8: addiu $s3, $s3, 4
label_0x1539fc:
    v0 = (s3 < 0x1e) ? 1 : 0;                                   // 0x001539fc: slti $v0, $s3, 0x1e
    if (v0 != 0) goto label_0x153a78;                           // 0x00153a00: bnez $v0, 0x153a78
    v0 = (unsigned)s2 >> 0x1e;                                  // 0x00153a04: srl $v0, $s2, 0x1e
    s3 = s3 + -0x1e;                                            // 0x00153a08: addiu $s3, $s3, -0x1e
    if (s3 == 0) goto label_0x153a30;                           // 0x00153a0c: beqz $s3, 0x153a30
    v0 = 2;                                                     // 0x00153a10: addiu $v0, $zero, 2
    v0 = v0 - s3;                                               // 0x00153a14: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00153a18: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00153a1c: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1e;                                  // 0x00153a20: srl $v1, $s2, 0x1e
    s2 = s0 << s3;                                              // 0x00153a24: sllv $s2, $s0, $s3
    goto label_0x153a3c;                                        // 0x00153a28: b 0x153a3c
    *(uint32_t*)((s4) + 0x114) = v1;                            // 0x00153a2c: sw $v1, 0x114($s4)
label_0x153a30:
    v0 = (unsigned)s2 >> 0x1e;                                  // 0x00153a30: srl $v0, $s2, 0x1e
    *(uint32_t*)((s4) + 0x114) = v0;                            // 0x00153a38: sw $v0, 0x114($s4)
label_0x153a3c:
    s0 = *(int8_t*)(s1);                                        // 0x00153a3c: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153a40: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00153a44: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153a48: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153a4c: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00153a50: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00153a54: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00153a58: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153a5c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00153a60: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00153a64: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00153a68: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153a6c: sll $s0, $s0, 8
    goto label_0x153a84;                                        // 0x00153a70: b 0x153a84
    s0 = s0 | v0;                                               // 0x00153a74: or $s0, $s0, $v0
label_0x153a78:
    s2 = s2 << 2;                                               // 0x00153a78: sll $s2, $s2, 2
    *(uint32_t*)((s4) + 0x114) = v0;                            // 0x00153a7c: sw $v0, 0x114($s4)
    s3 = s3 + 2;                                                // 0x00153a80: addiu $s3, $s3, 2
label_0x153a84:
    v0 = (s3 < 0x1e) ? 1 : 0;                                   // 0x00153a84: slti $v0, $s3, 0x1e
    if (v0 != 0) goto label_0x153b00;                           // 0x00153a88: bnez $v0, 0x153b00
    v0 = (unsigned)s2 >> 0x1e;                                  // 0x00153a8c: srl $v0, $s2, 0x1e
    s3 = s3 + -0x1e;                                            // 0x00153a90: addiu $s3, $s3, -0x1e
    if (s3 == 0) goto label_0x153ab8;                           // 0x00153a94: beqz $s3, 0x153ab8
    v0 = 2;                                                     // 0x00153a98: addiu $v0, $zero, 2
    v0 = v0 - s3;                                               // 0x00153a9c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00153aa0: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00153aa4: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1e;                                  // 0x00153aa8: srl $v1, $s2, 0x1e
    s2 = s0 << s3;                                              // 0x00153aac: sllv $s2, $s0, $s3
    goto label_0x153ac4;                                        // 0x00153ab0: b 0x153ac4
    *(uint32_t*)((s4) + 0x118) = v1;                            // 0x00153ab4: sw $v1, 0x118($s4)
label_0x153ab8:
    v0 = (unsigned)s2 >> 0x1e;                                  // 0x00153ab8: srl $v0, $s2, 0x1e
    *(uint32_t*)((s4) + 0x118) = v0;                            // 0x00153ac0: sw $v0, 0x118($s4)
label_0x153ac4:
    s0 = *(int8_t*)(s1);                                        // 0x00153ac4: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153ac8: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00153acc: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153ad0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153ad4: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00153ad8: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00153adc: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00153ae0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153ae4: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00153ae8: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00153aec: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00153af0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153af4: sll $s0, $s0, 8
    goto label_0x153b0c;                                        // 0x00153af8: b 0x153b0c
    s0 = s0 | v0;                                               // 0x00153afc: or $s0, $s0, $v0
label_0x153b00:
    s2 = s2 << 2;                                               // 0x00153b00: sll $s2, $s2, 2
    *(uint32_t*)((s4) + 0x118) = v0;                            // 0x00153b04: sw $v0, 0x118($s4)
    s3 = s3 + 2;                                                // 0x00153b08: addiu $s3, $s3, 2
label_0x153b0c:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00153b0c: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x153b88;                           // 0x00153b10: bnez $v0, 0x153b88
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153b14: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00153b18: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x153b40;                           // 0x00153b1c: beqz $s3, 0x153b40
    v0 = 1;                                                     // 0x00153b20: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x00153b24: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00153b28: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00153b2c: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x00153b30: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x00153b34: sllv $s2, $s0, $s3
    goto label_0x153b4c;                                        // 0x00153b38: b 0x153b4c
    *(uint32_t*)((s4) + 0x11c) = v1;                            // 0x00153b3c: sw $v1, 0x11c($s4)
label_0x153b40:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153b40: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x11c) = v0;                            // 0x00153b48: sw $v0, 0x11c($s4)
label_0x153b4c:
    s0 = *(int8_t*)(s1);                                        // 0x00153b4c: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153b50: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00153b54: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153b58: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153b5c: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00153b60: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00153b64: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00153b68: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153b6c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00153b70: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00153b74: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00153b78: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153b7c: sll $s0, $s0, 8
    goto label_0x153b94;                                        // 0x00153b80: b 0x153b94
    s0 = s0 | v0;                                               // 0x00153b84: or $s0, $s0, $v0
label_0x153b88:
    s2 = s2 << 1;                                               // 0x00153b88: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x11c) = v0;                            // 0x00153b8c: sw $v0, 0x11c($s4)
    s3 = s3 + 1;                                                // 0x00153b90: addiu $s3, $s3, 1
label_0x153b94:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00153b94: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x153c10;                           // 0x00153b98: bnez $v0, 0x153c10
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153b9c: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00153ba0: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x153bc8;                           // 0x00153ba4: beqz $s3, 0x153bc8
    v0 = 1;                                                     // 0x00153ba8: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x00153bac: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00153bb0: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00153bb4: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x00153bb8: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x00153bbc: sllv $s2, $s0, $s3
    goto label_0x153bd4;                                        // 0x00153bc0: b 0x153bd4
    *(uint32_t*)((s4) + 0x120) = v1;                            // 0x00153bc4: sw $v1, 0x120($s4)
label_0x153bc8:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153bc8: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x120) = v0;                            // 0x00153bd0: sw $v0, 0x120($s4)
label_0x153bd4:
    s0 = *(int8_t*)(s1);                                        // 0x00153bd4: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153bd8: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00153bdc: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153be0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153be4: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00153be8: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00153bec: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00153bf0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153bf4: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00153bf8: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00153bfc: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00153c00: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153c04: sll $s0, $s0, 8
    goto label_0x153c1c;                                        // 0x00153c08: b 0x153c1c
    s0 = s0 | v0;                                               // 0x00153c0c: or $s0, $s0, $v0
label_0x153c10:
    s2 = s2 << 1;                                               // 0x00153c10: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x120) = v0;                            // 0x00153c14: sw $v0, 0x120($s4)
    s3 = s3 + 1;                                                // 0x00153c18: addiu $s3, $s3, 1
label_0x153c1c:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00153c1c: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x153c98;                           // 0x00153c20: bnez $v0, 0x153c98
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153c24: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00153c28: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x153c50;                           // 0x00153c2c: beqz $s3, 0x153c50
    v0 = 1;                                                     // 0x00153c30: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x00153c34: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00153c38: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00153c3c: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x00153c40: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x00153c44: sllv $s2, $s0, $s3
    goto label_0x153c5c;                                        // 0x00153c48: b 0x153c5c
    *(uint32_t*)((s4) + 0x124) = v1;                            // 0x00153c4c: sw $v1, 0x124($s4)
label_0x153c50:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153c50: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x124) = v0;                            // 0x00153c58: sw $v0, 0x124($s4)
label_0x153c5c:
    s0 = *(int8_t*)(s1);                                        // 0x00153c5c: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153c60: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00153c64: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153c68: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153c6c: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00153c70: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00153c74: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00153c78: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153c7c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00153c80: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00153c84: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00153c88: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153c8c: sll $s0, $s0, 8
    goto label_0x153ca4;                                        // 0x00153c90: b 0x153ca4
    s0 = s0 | v0;                                               // 0x00153c94: or $s0, $s0, $v0
label_0x153c98:
    s2 = s2 << 1;                                               // 0x00153c98: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x124) = v0;                            // 0x00153c9c: sw $v0, 0x124($s4)
    s3 = s3 + 1;                                                // 0x00153ca0: addiu $s3, $s3, 1
label_0x153ca4:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00153ca4: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x153d20;                           // 0x00153ca8: bnez $v0, 0x153d20
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153cac: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00153cb0: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x153cd8;                           // 0x00153cb4: beqz $s3, 0x153cd8
    v0 = 1;                                                     // 0x00153cb8: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x00153cbc: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00153cc0: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00153cc4: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x00153cc8: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x00153ccc: sllv $s2, $s0, $s3
    goto label_0x153ce4;                                        // 0x00153cd0: b 0x153ce4
    *(uint32_t*)((s4) + 0x128) = v1;                            // 0x00153cd4: sw $v1, 0x128($s4)
label_0x153cd8:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153cd8: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x128) = v0;                            // 0x00153ce0: sw $v0, 0x128($s4)
label_0x153ce4:
    s0 = *(int8_t*)(s1);                                        // 0x00153ce4: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153ce8: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00153cec: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153cf0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153cf4: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00153cf8: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00153cfc: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00153d00: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153d04: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00153d08: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00153d0c: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00153d10: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153d14: sll $s0, $s0, 8
    goto label_0x153d2c;                                        // 0x00153d18: b 0x153d2c
    s0 = s0 | v0;                                               // 0x00153d1c: or $s0, $s0, $v0
label_0x153d20:
    s2 = s2 << 1;                                               // 0x00153d20: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x128) = v0;                            // 0x00153d24: sw $v0, 0x128($s4)
    s3 = s3 + 1;                                                // 0x00153d28: addiu $s3, $s3, 1
label_0x153d2c:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00153d2c: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x153da8;                           // 0x00153d30: bnez $v0, 0x153da8
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153d34: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00153d38: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x153d60;                           // 0x00153d3c: beqz $s3, 0x153d60
    v0 = 1;                                                     // 0x00153d40: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x00153d44: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00153d48: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00153d4c: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x00153d50: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x00153d54: sllv $s2, $s0, $s3
    goto label_0x153d6c;                                        // 0x00153d58: b 0x153d6c
    *(uint32_t*)((s4) + 0x12c) = v1;                            // 0x00153d5c: sw $v1, 0x12c($s4)
label_0x153d60:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153d60: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x12c) = v0;                            // 0x00153d68: sw $v0, 0x12c($s4)
label_0x153d6c:
    s0 = *(int8_t*)(s1);                                        // 0x00153d6c: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153d70: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00153d74: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153d78: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153d7c: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00153d80: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00153d84: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00153d88: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153d8c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00153d90: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00153d94: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00153d98: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153d9c: sll $s0, $s0, 8
    goto label_0x153db4;                                        // 0x00153da0: b 0x153db4
    s0 = s0 | v0;                                               // 0x00153da4: or $s0, $s0, $v0
label_0x153da8:
    s2 = s2 << 1;                                               // 0x00153da8: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x12c) = v0;                            // 0x00153dac: sw $v0, 0x12c($s4)
    s3 = s3 + 1;                                                // 0x00153db0: addiu $s3, $s3, 1
label_0x153db4:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00153db4: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x153e30;                           // 0x00153db8: bnez $v0, 0x153e30
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153dbc: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00153dc0: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x153de8;                           // 0x00153dc4: beqz $s3, 0x153de8
    v0 = 1;                                                     // 0x00153dc8: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x00153dcc: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00153dd0: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00153dd4: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x00153dd8: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x00153ddc: sllv $s2, $s0, $s3
    goto label_0x153df4;                                        // 0x00153de0: b 0x153df4
    *(uint32_t*)((s4) + 0x130) = v1;                            // 0x00153de4: sw $v1, 0x130($s4)
label_0x153de8:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153de8: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x130) = v0;                            // 0x00153df0: sw $v0, 0x130($s4)
label_0x153df4:
    s0 = *(int8_t*)(s1);                                        // 0x00153df4: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153df8: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00153dfc: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153e00: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153e04: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00153e08: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00153e0c: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00153e10: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153e14: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00153e18: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00153e1c: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00153e20: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153e24: sll $s0, $s0, 8
    goto label_0x153e3c;                                        // 0x00153e28: b 0x153e3c
    s0 = s0 | v0;                                               // 0x00153e2c: or $s0, $s0, $v0
label_0x153e30:
    s2 = s2 << 1;                                               // 0x00153e30: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x130) = v0;                            // 0x00153e34: sw $v0, 0x130($s4)
    s3 = s3 + 1;                                                // 0x00153e38: addiu $s3, $s3, 1
label_0x153e3c:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00153e3c: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x153eb8;                           // 0x00153e40: bnez $v0, 0x153eb8
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153e44: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00153e48: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x153e70;                           // 0x00153e4c: beqz $s3, 0x153e70
    v0 = 1;                                                     // 0x00153e50: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x00153e54: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00153e58: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00153e5c: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x00153e60: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x00153e64: sllv $s2, $s0, $s3
    goto label_0x153e7c;                                        // 0x00153e68: b 0x153e7c
    *(uint32_t*)((s4) + 0x134) = v1;                            // 0x00153e6c: sw $v1, 0x134($s4)
label_0x153e70:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153e70: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x134) = v0;                            // 0x00153e78: sw $v0, 0x134($s4)
label_0x153e7c:
    s0 = *(int8_t*)(s1);                                        // 0x00153e7c: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153e80: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00153e84: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153e88: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153e8c: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00153e90: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00153e94: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00153e98: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153e9c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00153ea0: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00153ea4: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00153ea8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153eac: sll $s0, $s0, 8
    goto label_0x153ec4;                                        // 0x00153eb0: b 0x153ec4
    s0 = s0 | v0;                                               // 0x00153eb4: or $s0, $s0, $v0
label_0x153eb8:
    s2 = s2 << 1;                                               // 0x00153eb8: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x134) = v0;                            // 0x00153ebc: sw $v0, 0x134($s4)
    s3 = s3 + 1;                                                // 0x00153ec0: addiu $s3, $s3, 1
label_0x153ec4:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00153ec4: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x153f40;                           // 0x00153ec8: bnez $v0, 0x153f40
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153ecc: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00153ed0: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x153ef8;                           // 0x00153ed4: beqz $s3, 0x153ef8
    v0 = 1;                                                     // 0x00153ed8: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x00153edc: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00153ee0: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00153ee4: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x00153ee8: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x00153eec: sllv $s2, $s0, $s3
    goto label_0x153f04;                                        // 0x00153ef0: b 0x153f04
    *(uint32_t*)((s4) + 0x138) = v1;                            // 0x00153ef4: sw $v1, 0x138($s4)
label_0x153ef8:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153ef8: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x138) = v0;                            // 0x00153f00: sw $v0, 0x138($s4)
label_0x153f04:
    s0 = *(int8_t*)(s1);                                        // 0x00153f04: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153f08: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00153f0c: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153f10: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153f14: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00153f18: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00153f1c: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00153f20: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153f24: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00153f28: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00153f2c: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00153f30: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153f34: sll $s0, $s0, 8
    goto label_0x153f4c;                                        // 0x00153f38: b 0x153f4c
    s0 = s0 | v0;                                               // 0x00153f3c: or $s0, $s0, $v0
label_0x153f40:
    s2 = s2 << 1;                                               // 0x00153f40: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x138) = v0;                            // 0x00153f44: sw $v0, 0x138($s4)
    s3 = s3 + 1;                                                // 0x00153f48: addiu $s3, $s3, 1
label_0x153f4c:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00153f4c: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x153fc8;                           // 0x00153f50: bnez $v0, 0x153fc8
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153f54: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00153f58: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x153f80;                           // 0x00153f5c: beqz $s3, 0x153f80
    v0 = 1;                                                     // 0x00153f60: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x00153f64: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00153f68: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00153f6c: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x00153f70: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x00153f74: sllv $s2, $s0, $s3
    goto label_0x153f8c;                                        // 0x00153f78: b 0x153f8c
    *(uint32_t*)((s4) + 0x13c) = v1;                            // 0x00153f7c: sw $v1, 0x13c($s4)
label_0x153f80:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153f80: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x13c) = v0;                            // 0x00153f88: sw $v0, 0x13c($s4)
label_0x153f8c:
    s0 = *(int8_t*)(s1);                                        // 0x00153f8c: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153f90: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00153f94: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00153f98: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153f9c: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00153fa0: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00153fa4: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00153fa8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153fac: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00153fb0: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00153fb4: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00153fb8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00153fbc: sll $s0, $s0, 8
    goto label_0x153fd4;                                        // 0x00153fc0: b 0x153fd4
    s0 = s0 | v0;                                               // 0x00153fc4: or $s0, $s0, $v0
label_0x153fc8:
    s2 = s2 << 1;                                               // 0x00153fc8: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x13c) = v0;                            // 0x00153fcc: sw $v0, 0x13c($s4)
    s3 = s3 + 1;                                                // 0x00153fd0: addiu $s3, $s3, 1
label_0x153fd4:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00153fd4: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x154050;                           // 0x00153fd8: bnez $v0, 0x154050
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00153fdc: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00153fe0: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x154008;                           // 0x00153fe4: beqz $s3, 0x154008
    v0 = 1;                                                     // 0x00153fe8: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x00153fec: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00153ff0: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00153ff4: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x00153ff8: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x00153ffc: sllv $s2, $s0, $s3
    goto label_0x154014;                                        // 0x00154000: b 0x154014
    *(uint32_t*)((s4) + 0x140) = v1;                            // 0x00154004: sw $v1, 0x140($s4)
label_0x154008:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00154008: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x140) = v0;                            // 0x00154010: sw $v0, 0x140($s4)
label_0x154014:
    s0 = *(int8_t*)(s1);                                        // 0x00154014: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00154018: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x0015401c: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00154020: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00154024: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00154028: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x0015402c: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00154030: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00154034: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00154038: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x0015403c: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00154040: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00154044: sll $s0, $s0, 8
    goto label_0x15405c;                                        // 0x00154048: b 0x15405c
    s0 = s0 | v0;                                               // 0x0015404c: or $s0, $s0, $v0
label_0x154050:
    s2 = s2 << 1;                                               // 0x00154050: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x140) = v0;                            // 0x00154054: sw $v0, 0x140($s4)
    s3 = s3 + 1;                                                // 0x00154058: addiu $s3, $s3, 1
label_0x15405c:
    v0 = *(int32_t*)((s4) + 0x140);                             // 0x0015405c: lw $v0, 0x140($s4)
    if (v0 == 0) goto label_0x1542d0;                           // 0x00154060: beqz $v0, 0x1542d0
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00154064: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x1540e0;                           // 0x00154068: bnez $v0, 0x1540e0
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x0015406c: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00154070: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x154098;                           // 0x00154074: beqz $s3, 0x154098
    v0 = 1;                                                     // 0x00154078: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x0015407c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00154080: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00154084: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x00154088: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x0015408c: sllv $s2, $s0, $s3
    goto label_0x1540a4;                                        // 0x00154090: b 0x1540a4
    *(uint32_t*)((s4) + 0x144) = v1;                            // 0x00154094: sw $v1, 0x144($s4)
label_0x154098:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00154098: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x144) = v0;                            // 0x001540a0: sw $v0, 0x144($s4)
label_0x1540a4:
    s0 = *(int8_t*)(s1);                                        // 0x001540a4: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x001540a8: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x001540ac: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x001540b0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001540b4: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x001540b8: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x001540bc: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x001540c0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001540c4: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x001540c8: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x001540cc: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x001540d0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001540d4: sll $s0, $s0, 8
    goto label_0x1540ec;                                        // 0x001540d8: b 0x1540ec
    s0 = s0 | v0;                                               // 0x001540dc: or $s0, $s0, $v0
label_0x1540e0:
    s2 = s2 << 1;                                               // 0x001540e0: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x144) = v0;                            // 0x001540e4: sw $v0, 0x144($s4)
    s3 = s3 + 1;                                                // 0x001540e8: addiu $s3, $s3, 1
label_0x1540ec:
    v0 = (s3 < 0x1d) ? 1 : 0;                                   // 0x001540ec: slti $v0, $s3, 0x1d
    if (v0 != 0) goto label_0x154168;                           // 0x001540f0: bnez $v0, 0x154168
    v0 = (unsigned)s2 >> 0x1d;                                  // 0x001540f4: srl $v0, $s2, 0x1d
    s3 = s3 + -0x1d;                                            // 0x001540f8: addiu $s3, $s3, -0x1d
    if (s3 == 0) goto label_0x154120;                           // 0x001540fc: beqz $s3, 0x154120
    v0 = 3;                                                     // 0x00154100: addiu $v0, $zero, 3
    v0 = v0 - s3;                                               // 0x00154104: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00154108: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x0015410c: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1d;                                  // 0x00154110: srl $v1, $s2, 0x1d
    s2 = s0 << s3;                                              // 0x00154114: sllv $s2, $s0, $s3
    goto label_0x15412c;                                        // 0x00154118: b 0x15412c
    *(uint32_t*)((s4) + 0x148) = v1;                            // 0x0015411c: sw $v1, 0x148($s4)
label_0x154120:
    v0 = (unsigned)s2 >> 0x1d;                                  // 0x00154120: srl $v0, $s2, 0x1d
    *(uint32_t*)((s4) + 0x148) = v0;                            // 0x00154128: sw $v0, 0x148($s4)
label_0x15412c:
    s0 = *(int8_t*)(s1);                                        // 0x0015412c: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00154130: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00154134: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00154138: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015413c: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00154140: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00154144: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00154148: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015414c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00154150: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00154154: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00154158: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015415c: sll $s0, $s0, 8
    goto label_0x154174;                                        // 0x00154160: b 0x154174
    s0 = s0 | v0;                                               // 0x00154164: or $s0, $s0, $v0
label_0x154168:
    s2 = s2 << 3;                                               // 0x00154168: sll $s2, $s2, 3
    *(uint32_t*)((s4) + 0x148) = v0;                            // 0x0015416c: sw $v0, 0x148($s4)
    s3 = s3 + 3;                                                // 0x00154170: addiu $s3, $s3, 3
label_0x154174:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00154174: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x1541f0;                           // 0x00154178: bnez $v0, 0x1541f0
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x0015417c: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00154180: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x1541a8;                           // 0x00154184: beqz $s3, 0x1541a8
    v0 = 1;                                                     // 0x00154188: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x0015418c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00154190: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00154194: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x00154198: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x0015419c: sllv $s2, $s0, $s3
    goto label_0x1541b4;                                        // 0x001541a0: b 0x1541b4
    *(uint32_t*)((s4) + 0x14c) = v1;                            // 0x001541a4: sw $v1, 0x14c($s4)
label_0x1541a8:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x001541a8: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x14c) = v0;                            // 0x001541b0: sw $v0, 0x14c($s4)
label_0x1541b4:
    s0 = *(int8_t*)(s1);                                        // 0x001541b4: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x001541b8: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x001541bc: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x001541c0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001541c4: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x001541c8: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x001541cc: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x001541d0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001541d4: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x001541d8: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x001541dc: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x001541e0: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001541e4: sll $s0, $s0, 8
    goto label_0x1541fc;                                        // 0x001541e8: b 0x1541fc
    s0 = s0 | v0;                                               // 0x001541ec: or $s0, $s0, $v0
label_0x1541f0:
    s2 = s2 << 1;                                               // 0x001541f0: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x14c) = v0;                            // 0x001541f4: sw $v0, 0x14c($s4)
    s3 = s3 + 1;                                                // 0x001541f8: addiu $s3, $s3, 1
label_0x1541fc:
    v0 = (s3 < 0x19) ? 1 : 0;                                   // 0x001541fc: slti $v0, $s3, 0x19
    if (v0 != 0) goto label_0x154278;                           // 0x00154200: bnez $v0, 0x154278
    v0 = (unsigned)s2 >> 0x19;                                  // 0x00154204: srl $v0, $s2, 0x19
    s3 = s3 + -0x19;                                            // 0x00154208: addiu $s3, $s3, -0x19
    if (s3 == 0) goto label_0x154230;                           // 0x0015420c: beqz $s3, 0x154230
    v0 = 7;                                                     // 0x00154210: addiu $v0, $zero, 7
    v0 = v0 - s3;                                               // 0x00154214: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00154218: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x0015421c: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x19;                                  // 0x00154220: srl $v1, $s2, 0x19
    s2 = s0 << s3;                                              // 0x00154224: sllv $s2, $s0, $s3
    goto label_0x15423c;                                        // 0x00154228: b 0x15423c
    *(uint32_t*)((s4) + 0x150) = v1;                            // 0x0015422c: sw $v1, 0x150($s4)
label_0x154230:
    v0 = (unsigned)s2 >> 0x19;                                  // 0x00154230: srl $v0, $s2, 0x19
    *(uint32_t*)((s4) + 0x150) = v0;                            // 0x00154238: sw $v0, 0x150($s4)
label_0x15423c:
    s0 = *(int8_t*)(s1);                                        // 0x0015423c: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00154240: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00154244: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00154248: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015424c: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00154250: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00154254: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00154258: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015425c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00154260: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00154264: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00154268: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015426c: sll $s0, $s0, 8
    goto label_0x154284;                                        // 0x00154270: b 0x154284
    s0 = s0 | v0;                                               // 0x00154274: or $s0, $s0, $v0
label_0x154278:
    s2 = s2 << 7;                                               // 0x00154278: sll $s2, $s2, 7
    *(uint32_t*)((s4) + 0x150) = v0;                            // 0x0015427c: sw $v0, 0x150($s4)
    s3 = s3 + 7;                                                // 0x00154280: addiu $s3, $s3, 7
label_0x154284:
    v0 = (s3 < 0x18) ? 1 : 0;                                   // 0x00154284: slti $v0, $s3, 0x18
    if (v0 != 0) goto label_0x1542c8;                           // 0x00154288: bnez $v0, 0x1542c8
    v0 = (unsigned)s2 >> 0x18;                                  // 0x0015428c: srl $v0, $s2, 0x18
    s3 = s3 + -0x18;                                            // 0x00154290: addiu $s3, $s3, -0x18
    if (s3 == 0) goto label_0x1542b8;                           // 0x00154294: beqz $s3, 0x1542b8
    v0 = 8;                                                     // 0x00154298: addiu $v0, $zero, 8
    v0 = v0 - s3;                                               // 0x0015429c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x001542a0: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x001542a4: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x18;                                  // 0x001542a8: srl $v1, $s2, 0x18
    goto label_0x1542c0;                                        // 0x001542ac: b 0x1542c0
    *(uint32_t*)((s4) + 0x154) = v1;                            // 0x001542b0: sw $v1, 0x154($s4)
    /* nop */                                                   // 0x001542b4: nop 
label_0x1542b8:
    v0 = (unsigned)s2 >> 0x18;                                  // 0x001542b8: srl $v0, $s2, 0x18
    *(uint32_t*)((s4) + 0x154) = v0;                            // 0x001542bc: sw $v0, 0x154($s4)
label_0x1542c0:
    goto label_0x1542d0;                                        // 0x001542c0: b 0x1542d0
    s1 = s1 + 4;                                                // 0x001542c4: addiu $s1, $s1, 4
label_0x1542c8:
    s3 = s3 + 8;                                                // 0x001542c8: addiu $s3, $s3, 8
    *(uint32_t*)((s4) + 0x154) = v0;                            // 0x001542cc: sw $v0, 0x154($s4)
label_0x1542d0:
    func_00150b90();  // 0x150ac8                                // 0x001542d0: jal 0x150ac8
    func_00150df0();  // 0x150d80                                // 0x001542d8: jal 0x150d80
    goto label_0x1548ec;                                        // 0x001542e0: b 0x1548ec
    v1 = s1 - s5;                                               // 0x001542e4: subu $v1, $s1, $s5
    v0 = 1;                                                     // 0x001542e8: addiu $v0, $zero, 1
    v1 = (s3 < 0x16) ? 1 : 0;                                   // 0x001542ec: slti $v1, $s3, 0x16
    if (v1 != 0) goto label_0x154368;                           // 0x001542f0: bnez $v1, 0x154368
    *(uint32_t*)((s4) + 0x334) = v0;                            // 0x001542f4: sw $v0, 0x334($s4)
    s3 = s3 + -0x16;                                            // 0x001542f8: addiu $s3, $s3, -0x16
    if (s3 == 0) goto label_0x154320;                           // 0x001542fc: beqz $s3, 0x154320
    v0 = 0xa;                                                   // 0x00154300: addiu $v0, $zero, 0xa
    v0 = v0 - s3;                                               // 0x00154304: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00154308: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x0015430c: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x16;                                  // 0x00154310: srl $v1, $s2, 0x16
    s2 = s0 << s3;                                              // 0x00154314: sllv $s2, $s0, $s3
    goto label_0x15432c;                                        // 0x00154318: b 0x15432c
    *(uint32_t*)((s4) + 0x184) = v1;                            // 0x0015431c: sw $v1, 0x184($s4)
label_0x154320:
    v0 = (unsigned)s2 >> 0x16;                                  // 0x00154320: srl $v0, $s2, 0x16
    *(uint32_t*)((s4) + 0x184) = v0;                            // 0x00154328: sw $v0, 0x184($s4)
label_0x15432c:
    s0 = *(int8_t*)(s1);                                        // 0x0015432c: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00154330: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x00154334: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00154338: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015433c: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00154340: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x00154344: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00154348: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015434c: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00154350: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00154354: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00154358: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015435c: sll $s0, $s0, 8
    goto label_0x154378;                                        // 0x00154360: b 0x154378
    s0 = s0 | v0;                                               // 0x00154364: or $s0, $s0, $v0
label_0x154368:
    v0 = (unsigned)s2 >> 0x16;                                  // 0x00154368: srl $v0, $s2, 0x16
    s2 = s2 << 0xa;                                             // 0x0015436c: sll $s2, $s2, 0xa
    *(uint32_t*)((s4) + 0x184) = v0;                            // 0x00154370: sw $v0, 0x184($s4)
    s3 = s3 + 0xa;                                              // 0x00154374: addiu $s3, $s3, 0xa
label_0x154378:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00154378: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x1543f8;                           // 0x0015437c: bnez $v0, 0x1543f8
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00154380: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00154384: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x1543b0;                           // 0x00154388: beqz $s3, 0x1543b0
    v0 = 1;                                                     // 0x0015438c: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x00154390: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00154394: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00154398: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x0015439c: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x001543a0: sllv $s2, $s0, $s3
    goto label_0x1543bc;                                        // 0x001543a4: b 0x1543bc
    *(uint32_t*)((s4) + 0x18) = v1;                             // 0x001543a8: sw $v1, 0x18($s4)
    /* nop */                                                   // 0x001543ac: nop 
label_0x1543b0:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x001543b0: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x18) = v0;                             // 0x001543b8: sw $v0, 0x18($s4)
label_0x1543bc:
    s0 = *(int8_t*)(s1);                                        // 0x001543bc: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x001543c0: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x001543c4: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x001543c8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001543cc: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x001543d0: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x001543d4: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x001543d8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001543dc: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x001543e0: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x001543e4: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x001543e8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001543ec: sll $s0, $s0, 8
    goto label_0x154404;                                        // 0x001543f0: b 0x154404
    s0 = s0 | v0;                                               // 0x001543f4: or $s0, $s0, $v0
label_0x1543f8:
    s2 = s2 << 1;                                               // 0x001543f8: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x18) = v0;                             // 0x001543fc: sw $v0, 0x18($s4)
    s3 = s3 + 1;                                                // 0x00154400: addiu $s3, $s3, 1
label_0x154404:
    v0 = (s3 < 0x11) ? 1 : 0;                                   // 0x00154404: slti $v0, $s3, 0x11
    if (v0 != 0) goto label_0x154480;                           // 0x00154408: bnez $v0, 0x154480
    v0 = (unsigned)s2 >> 0x11;                                  // 0x0015440c: srl $v0, $s2, 0x11
    s3 = s3 + -0x11;                                            // 0x00154410: addiu $s3, $s3, -0x11
    if (s3 == 0) goto label_0x154438;                           // 0x00154414: beqz $s3, 0x154438
    v0 = 0xf;                                                   // 0x00154418: addiu $v0, $zero, 0xf
    v0 = v0 - s3;                                               // 0x0015441c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00154420: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00154424: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x11;                                  // 0x00154428: srl $v1, $s2, 0x11
    s2 = s0 << s3;                                              // 0x0015442c: sllv $s2, $s0, $s3
    goto label_0x154444;                                        // 0x00154430: b 0x154444
    *(uint32_t*)((s4) + 0x188) = v1;                            // 0x00154434: sw $v1, 0x188($s4)
label_0x154438:
    v0 = (unsigned)s2 >> 0x11;                                  // 0x00154438: srl $v0, $s2, 0x11
    *(uint32_t*)((s4) + 0x188) = v0;                            // 0x00154440: sw $v0, 0x188($s4)
label_0x154444:
    s0 = *(int8_t*)(s1);                                        // 0x00154444: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00154448: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x0015444c: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00154450: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00154454: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00154458: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x0015445c: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00154460: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00154464: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00154468: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x0015446c: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00154470: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00154474: sll $s0, $s0, 8
    goto label_0x15448c;                                        // 0x00154478: b 0x15448c
    s0 = s0 | v0;                                               // 0x0015447c: or $s0, $s0, $v0
label_0x154480:
    s2 = s2 << 0xf;                                             // 0x00154480: sll $s2, $s2, 0xf
    *(uint32_t*)((s4) + 0x188) = v0;                            // 0x00154484: sw $v0, 0x188($s4)
    s3 = s3 + 0xf;                                              // 0x00154488: addiu $s3, $s3, 0xf
label_0x15448c:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x0015448c: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x154508;                           // 0x00154490: bnez $v0, 0x154508
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00154494: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00154498: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x1544c0;                           // 0x0015449c: beqz $s3, 0x1544c0
    v0 = 1;                                                     // 0x001544a0: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x001544a4: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x001544a8: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x001544ac: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x001544b0: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x001544b4: sllv $s2, $s0, $s3
    goto label_0x1544cc;                                        // 0x001544b8: b 0x1544cc
    *(uint32_t*)((s4) + 0x18) = v1;                             // 0x001544bc: sw $v1, 0x18($s4)
label_0x1544c0:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x001544c0: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x18) = v0;                             // 0x001544c8: sw $v0, 0x18($s4)
label_0x1544cc:
    s0 = *(int8_t*)(s1);                                        // 0x001544cc: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x001544d0: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x001544d4: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x001544d8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001544dc: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x001544e0: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x001544e4: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x001544e8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001544ec: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x001544f0: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x001544f4: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x001544f8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001544fc: sll $s0, $s0, 8
    goto label_0x154514;                                        // 0x00154500: b 0x154514
    s0 = s0 | v0;                                               // 0x00154504: or $s0, $s0, $v0
label_0x154508:
    s2 = s2 << 1;                                               // 0x00154508: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x18) = v0;                             // 0x0015450c: sw $v0, 0x18($s4)
    s3 = s3 + 1;                                                // 0x00154510: addiu $s3, $s3, 1
label_0x154514:
    v0 = (s3 < 0x11) ? 1 : 0;                                   // 0x00154514: slti $v0, $s3, 0x11
    if (v0 != 0) goto label_0x154590;                           // 0x00154518: bnez $v0, 0x154590
    v0 = (unsigned)s2 >> 0x11;                                  // 0x0015451c: srl $v0, $s2, 0x11
    s3 = s3 + -0x11;                                            // 0x00154520: addiu $s3, $s3, -0x11
    if (s3 == 0) goto label_0x154548;                           // 0x00154524: beqz $s3, 0x154548
    v0 = 0xf;                                                   // 0x00154528: addiu $v0, $zero, 0xf
    v0 = v0 - s3;                                               // 0x0015452c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00154530: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00154534: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x11;                                  // 0x00154538: srl $v1, $s2, 0x11
    s2 = s0 << s3;                                              // 0x0015453c: sllv $s2, $s0, $s3
    goto label_0x154554;                                        // 0x00154540: b 0x154554
    *(uint32_t*)((s4) + 0x18c) = v1;                            // 0x00154544: sw $v1, 0x18c($s4)
label_0x154548:
    v0 = (unsigned)s2 >> 0x11;                                  // 0x00154548: srl $v0, $s2, 0x11
    *(uint32_t*)((s4) + 0x18c) = v0;                            // 0x00154550: sw $v0, 0x18c($s4)
label_0x154554:
    s0 = *(int8_t*)(s1);                                        // 0x00154554: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00154558: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x0015455c: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00154560: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00154564: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00154568: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x0015456c: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00154570: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00154574: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00154578: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x0015457c: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00154580: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00154584: sll $s0, $s0, 8
    goto label_0x15459c;                                        // 0x00154588: b 0x15459c
    s0 = s0 | v0;                                               // 0x0015458c: or $s0, $s0, $v0
label_0x154590:
    s2 = s2 << 0xf;                                             // 0x00154590: sll $s2, $s2, 0xf
    *(uint32_t*)((s4) + 0x18c) = v0;                            // 0x00154594: sw $v0, 0x18c($s4)
    s3 = s3 + 0xf;                                              // 0x00154598: addiu $s3, $s3, 0xf
label_0x15459c:
    v0 = (s3 < 0x1e) ? 1 : 0;                                   // 0x0015459c: slti $v0, $s3, 0x1e
    if (v0 != 0) goto label_0x154618;                           // 0x001545a0: bnez $v0, 0x154618
    v0 = (unsigned)s2 >> 0x1e;                                  // 0x001545a4: srl $v0, $s2, 0x1e
    s3 = s3 + -0x1e;                                            // 0x001545a8: addiu $s3, $s3, -0x1e
    if (s3 == 0) goto label_0x1545d0;                           // 0x001545ac: beqz $s3, 0x1545d0
    v0 = 2;                                                     // 0x001545b0: addiu $v0, $zero, 2
    v0 = v0 - s3;                                               // 0x001545b4: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x001545b8: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x001545bc: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1e;                                  // 0x001545c0: srl $v1, $s2, 0x1e
    s2 = s0 << s3;                                              // 0x001545c4: sllv $s2, $s0, $s3
    goto label_0x1545dc;                                        // 0x001545c8: b 0x1545dc
    *(uint32_t*)((s4) + 0x190) = v1;                            // 0x001545cc: sw $v1, 0x190($s4)
label_0x1545d0:
    v0 = (unsigned)s2 >> 0x1e;                                  // 0x001545d0: srl $v0, $s2, 0x1e
    *(uint32_t*)((s4) + 0x190) = v0;                            // 0x001545d8: sw $v0, 0x190($s4)
label_0x1545dc:
    s0 = *(int8_t*)(s1);                                        // 0x001545dc: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x001545e0: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x001545e4: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x001545e8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001545ec: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x001545f0: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x001545f4: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x001545f8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001545fc: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00154600: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x00154604: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00154608: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x0015460c: sll $s0, $s0, 8
    goto label_0x154624;                                        // 0x00154610: b 0x154624
    s0 = s0 | v0;                                               // 0x00154614: or $s0, $s0, $v0
label_0x154618:
    s2 = s2 << 2;                                               // 0x00154618: sll $s2, $s2, 2
    *(uint32_t*)((s4) + 0x190) = v0;                            // 0x0015461c: sw $v0, 0x190($s4)
    s3 = s3 + 2;                                                // 0x00154620: addiu $s3, $s3, 2
label_0x154624:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00154624: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x1546a0;                           // 0x00154628: bnez $v0, 0x1546a0
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x0015462c: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00154630: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x154658;                           // 0x00154634: beqz $s3, 0x154658
    v0 = 1;                                                     // 0x00154638: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x0015463c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00154640: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00154644: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x00154648: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x0015464c: sllv $s2, $s0, $s3
    goto label_0x154664;                                        // 0x00154650: b 0x154664
    *(uint32_t*)((s4) + 0x194) = v1;                            // 0x00154654: sw $v1, 0x194($s4)
label_0x154658:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00154658: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x194) = v0;                            // 0x00154660: sw $v0, 0x194($s4)
label_0x154664:
    s0 = *(int8_t*)(s1);                                        // 0x00154664: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00154668: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x0015466c: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00154670: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00154674: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00154678: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x0015467c: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00154680: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00154684: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00154688: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x0015468c: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00154690: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00154694: sll $s0, $s0, 8
    goto label_0x1546ac;                                        // 0x00154698: b 0x1546ac
    s0 = s0 | v0;                                               // 0x0015469c: or $s0, $s0, $v0
label_0x1546a0:
    s2 = s2 << 1;                                               // 0x001546a0: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x194) = v0;                            // 0x001546a4: sw $v0, 0x194($s4)
    s3 = s3 + 1;                                                // 0x001546a8: addiu $s3, $s3, 1
label_0x1546ac:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x001546ac: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x1546f0;                           // 0x001546b0: bnez $v0, 0x1546f0
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x001546b4: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x001546b8: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x1546e0;                           // 0x001546bc: beqz $s3, 0x1546e0
    v0 = 1;                                                     // 0x001546c0: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x001546c4: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x001546c8: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x001546cc: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x001546d0: srl $v1, $s2, 0x1f
    goto label_0x1548d8;                                        // 0x001546d4: b 0x1548d8
    *(uint32_t*)((s4) + 0x198) = v1;                            // 0x001546d8: sw $v1, 0x198($s4)
    /* nop */                                                   // 0x001546dc: nop 
label_0x1546e0:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x001546e0: srl $v0, $s2, 0x1f
    goto label_0x1548d8;                                        // 0x001546e4: b 0x1548d8
    *(uint32_t*)((s4) + 0x198) = v0;                            // 0x001546e8: sw $v0, 0x198($s4)
    /* nop */                                                   // 0x001546ec: nop 
label_0x1546f0:
    s3 = s3 + 1;                                                // 0x001546f0: addiu $s3, $s3, 1
    goto label_0x1548e8;                                        // 0x001546f4: b 0x1548e8
    *(uint32_t*)((s4) + 0x198) = v0;                            // 0x001546f8: sw $v0, 0x198($s4)
    /* nop */                                                   // 0x001546fc: nop 
    v0 = (s3 < 0x1e) ? 1 : 0;                                   // 0x00154700: slti $v0, $s3, 0x1e
    if (v0 != 0) goto label_0x154780;                           // 0x00154704: bnez $v0, 0x154780
    v0 = (unsigned)s2 >> 0x1e;                                  // 0x00154708: srl $v0, $s2, 0x1e
    s3 = s3 + -0x1e;                                            // 0x0015470c: addiu $s3, $s3, -0x1e
    if (s3 == 0) goto label_0x154738;                           // 0x00154710: beqz $s3, 0x154738
    v0 = 2;                                                     // 0x00154714: addiu $v0, $zero, 2
    v0 = v0 - s3;                                               // 0x00154718: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x0015471c: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00154720: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1e;                                  // 0x00154724: srl $v1, $s2, 0x1e
    s2 = s0 << s3;                                              // 0x00154728: sllv $s2, $s0, $s3
    goto label_0x154744;                                        // 0x0015472c: b 0x154744
    *(uint32_t*)((s4) + 0x178) = v1;                            // 0x00154730: sw $v1, 0x178($s4)
    /* nop */                                                   // 0x00154734: nop 
label_0x154738:
    v0 = (unsigned)s2 >> 0x1e;                                  // 0x00154738: srl $v0, $s2, 0x1e
    *(uint32_t*)((s4) + 0x178) = v0;                            // 0x00154740: sw $v0, 0x178($s4)
label_0x154744:
    s0 = *(int8_t*)(s1);                                        // 0x00154744: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00154748: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x0015474c: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00154750: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00154754: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00154758: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x0015475c: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00154760: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00154764: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00154768: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x0015476c: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00154770: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00154774: sll $s0, $s0, 8
    goto label_0x15478c;                                        // 0x00154778: b 0x15478c
    s0 = s0 | v0;                                               // 0x0015477c: or $s0, $s0, $v0
label_0x154780:
    s2 = s2 << 2;                                               // 0x00154780: sll $s2, $s2, 2
    *(uint32_t*)((s4) + 0x178) = v0;                            // 0x00154784: sw $v0, 0x178($s4)
    s3 = s3 + 2;                                                // 0x00154788: addiu $s3, $s3, 2
label_0x15478c:
    v0 = (s3 < 0x16) ? 1 : 0;                                   // 0x0015478c: slti $v0, $s3, 0x16
    if (v0 != 0) goto label_0x154808;                           // 0x00154790: bnez $v0, 0x154808
    v0 = (unsigned)s2 >> 0x16;                                  // 0x00154794: srl $v0, $s2, 0x16
    s3 = s3 + -0x16;                                            // 0x00154798: addiu $s3, $s3, -0x16
    if (s3 == 0) goto label_0x1547c0;                           // 0x0015479c: beqz $s3, 0x1547c0
    v0 = 0xa;                                                   // 0x001547a0: addiu $v0, $zero, 0xa
    v0 = v0 - s3;                                               // 0x001547a4: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x001547a8: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x001547ac: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x16;                                  // 0x001547b0: srl $v1, $s2, 0x16
    s2 = s0 << s3;                                              // 0x001547b4: sllv $s2, $s0, $s3
    goto label_0x1547cc;                                        // 0x001547b8: b 0x1547cc
    *(uint32_t*)((s4) + 0x17c) = v1;                            // 0x001547bc: sw $v1, 0x17c($s4)
label_0x1547c0:
    v0 = (unsigned)s2 >> 0x16;                                  // 0x001547c0: srl $v0, $s2, 0x16
    *(uint32_t*)((s4) + 0x17c) = v0;                            // 0x001547c8: sw $v0, 0x17c($s4)
label_0x1547cc:
    s0 = *(int8_t*)(s1);                                        // 0x001547cc: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x001547d0: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x001547d4: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x001547d8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001547dc: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x001547e0: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x001547e4: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x001547e8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001547ec: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x001547f0: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x001547f4: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x001547f8: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x001547fc: sll $s0, $s0, 8
    goto label_0x154814;                                        // 0x00154800: b 0x154814
    s0 = s0 | v0;                                               // 0x00154804: or $s0, $s0, $v0
label_0x154808:
    s2 = s2 << 0xa;                                             // 0x00154808: sll $s2, $s2, 0xa
    *(uint32_t*)((s4) + 0x17c) = v0;                            // 0x0015480c: sw $v0, 0x17c($s4)
    s3 = s3 + 0xa;                                              // 0x00154810: addiu $s3, $s3, 0xa
label_0x154814:
    v0 = (s3 < 0x1f) ? 1 : 0;                                   // 0x00154814: slti $v0, $s3, 0x1f
    if (v0 != 0) goto label_0x154890;                           // 0x00154818: bnez $v0, 0x154890
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x0015481c: srl $v0, $s2, 0x1f
    s3 = s3 + -0x1f;                                            // 0x00154820: addiu $s3, $s3, -0x1f
    if (s3 == 0) goto label_0x154848;                           // 0x00154824: beqz $s3, 0x154848
    v0 = 1;                                                     // 0x00154828: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x0015482c: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x00154830: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x00154834: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x1f;                                  // 0x00154838: srl $v1, $s2, 0x1f
    s2 = s0 << s3;                                              // 0x0015483c: sllv $s2, $s0, $s3
    goto label_0x154854;                                        // 0x00154840: b 0x154854
    *(uint32_t*)((s4) + 0x18) = v1;                             // 0x00154844: sw $v1, 0x18($s4)
label_0x154848:
    v0 = (unsigned)s2 >> 0x1f;                                  // 0x00154848: srl $v0, $s2, 0x1f
    *(uint32_t*)((s4) + 0x18) = v0;                             // 0x00154850: sw $v0, 0x18($s4)
label_0x154854:
    s0 = *(int8_t*)(s1);                                        // 0x00154854: lb $s0, 0($s1)
    s1 = s1 + 1;                                                // 0x00154858: addiu $s1, $s1, 1
    v0 = *(uint8_t*)(s1);                                       // 0x0015485c: lbu $v0, 0($s1)
    s1 = s1 + 1;                                                // 0x00154860: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00154864: sll $s0, $s0, 8
    v1 = *(uint8_t*)(s1);                                       // 0x00154868: lbu $v1, 0($s1)
    s0 = s0 | v0;                                               // 0x0015486c: or $s0, $s0, $v0
    s1 = s1 + 1;                                                // 0x00154870: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00154874: sll $s0, $s0, 8
    v0 = *(uint8_t*)(s1);                                       // 0x00154878: lbu $v0, 0($s1)
    s0 = s0 | v1;                                               // 0x0015487c: or $s0, $s0, $v1
    s1 = s1 + 1;                                                // 0x00154880: addiu $s1, $s1, 1
    s0 = s0 << 8;                                               // 0x00154884: sll $s0, $s0, 8
    goto label_0x15489c;                                        // 0x00154888: b 0x15489c
    s0 = s0 | v0;                                               // 0x0015488c: or $s0, $s0, $v0
label_0x154890:
    s2 = s2 << 1;                                               // 0x00154890: sll $s2, $s2, 1
    *(uint32_t*)((s4) + 0x18) = v0;                             // 0x00154894: sw $v0, 0x18($s4)
    s3 = s3 + 1;                                                // 0x00154898: addiu $s3, $s3, 1
label_0x15489c:
    v0 = (s3 < 0x16) ? 1 : 0;                                   // 0x0015489c: slti $v0, $s3, 0x16
    if (v0 != 0) goto label_0x1548e0;                           // 0x001548a0: bnez $v0, 0x1548e0
    v0 = (unsigned)s2 >> 0x16;                                  // 0x001548a4: srl $v0, $s2, 0x16
    s3 = s3 + -0x16;                                            // 0x001548a8: addiu $s3, $s3, -0x16
    if (s3 == 0) goto label_0x1548d0;                           // 0x001548ac: beqz $s3, 0x1548d0
    v0 = 0xa;                                                   // 0x001548b0: addiu $v0, $zero, 0xa
    v0 = v0 - s3;                                               // 0x001548b4: subu $v0, $v0, $s3
    v0 = (unsigned)s0 >> v0;                                    // 0x001548b8: srlv $v0, $s0, $v0
    s2 = s2 | v0;                                               // 0x001548bc: or $s2, $s2, $v0
    v1 = (unsigned)s2 >> 0x16;                                  // 0x001548c0: srl $v1, $s2, 0x16
    goto label_0x1548d8;                                        // 0x001548c4: b 0x1548d8
    *(uint32_t*)((s4) + 0x180) = v1;                            // 0x001548c8: sw $v1, 0x180($s4)
    /* nop */                                                   // 0x001548cc: nop 
label_0x1548d0:
    v0 = (unsigned)s2 >> 0x16;                                  // 0x001548d0: srl $v0, $s2, 0x16
    *(uint32_t*)((s4) + 0x180) = v0;                            // 0x001548d4: sw $v0, 0x180($s4)
label_0x1548d8:
    goto label_0x1548e8;                                        // 0x001548d8: b 0x1548e8
    s1 = s1 + 4;                                                // 0x001548dc: addiu $s1, $s1, 4
label_0x1548e0:
    s3 = s3 + 0xa;                                              // 0x001548e0: addiu $s3, $s3, 0xa
    *(uint32_t*)((s4) + 0x180) = v0;                            // 0x001548e4: sw $v0, 0x180($s4)
label_0x1548e8:
    v1 = s1 - s5;                                               // 0x001548e8: subu $v1, $s1, $s5
label_0x1548ec:
    v1 = v1 << 3;                                               // 0x001548f0: sll $v1, $v1, 3
    *(uint32_t*)((s4) + 0x32c) = 0;                             // 0x001548f4: sw $zero, 0x32c($s4)
    v1 = s3 + v1;                                               // 0x001548f8: addu $v1, $s3, $v1
    v0 = v1 + -0x39;                                            // 0x00154900: addiu $v0, $v1, -0x39
    v1 = v1 + -0x32;                                            // 0x00154904: addiu $v1, $v1, -0x32
    a0 = (v0 < 0) ? 1 : 0;                                      // 0x00154908: slti $a0, $v0, 0
    *(uint32_t*)((s4) + 0x328) = 0;                             // 0x0015490c: sw $zero, 0x328($s4)
    if (a0 != 0) v0 = v1;                                       // 0x00154910: movn $v0, $v1, $a0
    v0 = v0 >> 3;                                               // 0x00154918: sra $v0, $v0, 3
    v0 = s5 + v0;                                               // 0x00154920: addu $v0, $s5, $v0
    return;                                                     // 0x00154930: jr $ra
    sp = sp + 0x40;                                             // 0x00154934: addiu $sp, $sp, 0x40
}