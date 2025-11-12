void func_001c3870() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c3870: addiu $sp, $sp, -0x20
    v0 = *(int8_t*)((a0) + 2);                                  // 0x001c387c: lb $v0, 2($a0)
    at = ((unsigned)v0 < (unsigned)7) ? 1 : 0;                  // 0x001c3880: sltiu $at, $v0, 7
    if (at == 0) goto label_0x1c3d00;                           // 0x001c3884: beqz $at, 0x1c3d00
    v1 = 0x24 << 16;                                            // 0x001c388c: lui $v1, 0x24
    v0 = v0 << 2;                                               // 0x001c3890: sll $v0, $v0, 2
    v1 = v1 + 0x37d0;                                           // 0x001c3894: addiu $v1, $v1, 0x37d0
    v0 = v0 + v1;                                               // 0x001c3898: addu $v0, $v0, $v1
    v0 = *(int32_t*)(v0);                                       // 0x001c389c: lw $v0, 0($v0)
    /* jump to address in v0 */                                 // 0x001c38a0: jr $v0
    /* nop */                                                   // 0x001c38a4: nop 
    v1 = 1;                                                     // 0x001c38a8: addiu $v1, $zero, 1
    v0 = 8;                                                     // 0x001c38ac: addiu $v0, $zero, 8
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c38b0: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c38b4: sw $v0, 0x2c($s0)
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c38b8: lw $a0, 0x24($s0)
    a1 = *(int32_t*)((s0) + 0xec);                              // 0x001c38bc: lw $a1, 0xec($s0)
    func_001c0090();  // 0x1bffd0                                // 0x001c38c0: jal 0x1bffd0
    func_001c0bd0();  // 0x1c0bc0                                // 0x001c38c8: jal 0x1c0bc0
    /* nop */                                                   // 0x001c38cc: nop 
    v1 = -1;                                                    // 0x001c38d0: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1c3d00;                          // 0x001c38d4: beq $v0, $v1, 0x1c3d00
    v1 = -0xfb;                                                 // 0x001c38d8: addiu $v1, $zero, -0xfb
    if (v0 == v1) goto label_0x1c3994;                          // 0x001c38dc: beq $v0, $v1, 0x1c3994
    /* nop */                                                   // 0x001c38e0: nop 
    if (v0 == 0) goto label_0x1c3964;                           // 0x001c38e4: beqz $v0, 0x1c3964
    v1 = -0xfe;                                                 // 0x001c38e8: addiu $v1, $zero, -0xfe
    if (v0 == v1) goto label_0x1c3948;                          // 0x001c38ec: beq $v0, $v1, 0x1c3948
    /* nop */                                                   // 0x001c38f0: nop 
    v1 = -0x100;                                                // 0x001c38f4: addiu $v1, $zero, -0x100
    if (v0 == v1) goto label_0x1c392c;                          // 0x001c38f8: beq $v0, $v1, 0x1c392c
    v1 = -0xfd;                                                 // 0x001c38fc: addiu $v1, $zero, -0xfd
    if (v0 == v1) goto label_0x1c3910;                          // 0x001c3900: beq $v0, $v1, 0x1c3910
    /* nop */                                                   // 0x001c3904: nop 
    goto label_0x1c39b0;                                        // 0x001c3908: b 0x1c39b0
    a0 = 4;                                                     // 0x001c390c: addiu $a0, $zero, 4
label_0x1c3910:
    v0 = 7;                                                     // 0x001c3910: addiu $v0, $zero, 7
    v1 = 4;                                                     // 0x001c3914: addiu $v1, $zero, 4
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c3918: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c391c: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c3920: sb $v1, 2($s0)
    goto label_0x1c3d00;                                        // 0x001c3924: b 0x1c3d00
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c3928: sw $v0, 0x34($s0)
label_0x1c392c:
    v0 = 9;                                                     // 0x001c392c: addiu $v0, $zero, 9
    v1 = 4;                                                     // 0x001c3930: addiu $v1, $zero, 4
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c3934: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c3938: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c393c: sb $v1, 2($s0)
    goto label_0x1c3d00;                                        // 0x001c3940: b 0x1c3d00
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c3944: sw $v0, 0x34($s0)
label_0x1c3948:
    v0 = 7;                                                     // 0x001c3948: addiu $v0, $zero, 7
    v1 = 4;                                                     // 0x001c394c: addiu $v1, $zero, 4
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c3950: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c3954: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c3958: sb $v1, 2($s0)
    goto label_0x1c3d00;                                        // 0x001c395c: b 0x1c3d00
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c3960: sw $v0, 0x34($s0)
label_0x1c3964:
    v0 = 0x22;                                                  // 0x001c3964: addiu $v0, $zero, 0x22
    v1 = 1;                                                     // 0x001c3968: addiu $v1, $zero, 1
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c396c: sw $v0, 0x2c($s0)
    *(uint32_t*)((s0) + 0x30) = v1;                             // 0x001c3970: sw $v1, 0x30($s0)
    v0 = 5;                                                     // 0x001c3974: addiu $v0, $zero, 5
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c3978: sw $v1, 0x38($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c397c: sw $v0, 0x10($s0)
    v0 = *(int8_t*)((s0) + 2);                                  // 0x001c3980: lb $v0, 2($s0)
    v0 = v0 + 1;                                                // 0x001c3984: addiu $v0, $v0, 1
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c3988: sb $v0, 2($s0)
    goto label_0x1c3d00;                                        // 0x001c398c: b 0x1c3d00
    *(uint8_t*)((s0) + 3) = 0;                                  // 0x001c3990: sb $zero, 3($s0)
label_0x1c3994:
    v0 = 9;                                                     // 0x001c3994: addiu $v0, $zero, 9
    v1 = 4;                                                     // 0x001c3998: addiu $v1, $zero, 4
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c399c: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c39a0: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c39a4: sb $v1, 2($s0)
    goto label_0x1c3d00;                                        // 0x001c39a8: b 0x1c3d00
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c39ac: sw $v0, 0x34($s0)
label_0x1c39b0:
    v1 = v0 & 0xff;                                             // 0x001c39b0: andi $v1, $v0, 0xff
    *(uint8_t*)((s0) + 2) = a0;                                 // 0x001c39b4: sb $a0, 2($s0)
    v0 = 3;                                                     // 0x001c39b8: addiu $v0, $zero, 3
    *(uint32_t*)((s0) + 0x34) = v1;                             // 0x001c39bc: sw $v1, 0x34($s0)
    v1 = *(int32_t*)((s0) + 0x34);                              // 0x001c39c0: lw $v1, 0x34($s0)
    if (v1 == v0) goto label_0x1c3a04;                          // 0x001c39c4: beq $v1, $v0, 0x1c3a04
    /* nop */                                                   // 0x001c39c8: nop 
    if (v1 == a0) goto label_0x1c3a08;                          // 0x001c39cc: beq $v1, $a0, 0x1c3a08
    v0 = 7;                                                     // 0x001c39d0: addiu $v0, $zero, 7
    v0 = 2;                                                     // 0x001c39d4: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1c39fc;                          // 0x001c39d8: beq $v1, $v0, 0x1c39fc
    v0 = 6;                                                     // 0x001c39dc: addiu $v0, $zero, 6
    v0 = 1;                                                     // 0x001c39e0: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1c39f4;                          // 0x001c39e4: beq $v1, $v0, 0x1c39f4
    v0 = 5;                                                     // 0x001c39e8: addiu $v0, $zero, 5
    goto label_0x1c3d04;                                        // 0x001c39ec: b 0x1c3d04
    v0 = 1;                                                     // 0x001c39f0: addiu $v0, $zero, 1
label_0x1c39f4:
    goto label_0x1c3d00;                                        // 0x001c39f4: b 0x1c3d00
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c39f8: sw $v0, 0x2c($s0)
label_0x1c39fc:
    goto label_0x1c3d00;                                        // 0x001c39fc: b 0x1c3d00
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c3a00: sw $v0, 0x2c($s0)
label_0x1c3a04:
    v0 = 7;                                                     // 0x001c3a04: addiu $v0, $zero, 7
label_0x1c3a08:
    goto label_0x1c3d00;                                        // 0x001c3a08: b 0x1c3d00
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c3a0c: sw $v0, 0x2c($s0)
    v1 = *(int8_t*)((s0) + 3);                                  // 0x001c3a10: lb $v1, 3($s0)
    v0 = 1;                                                     // 0x001c3a14: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1c3a4c;                          // 0x001c3a18: beq $v1, $v0, 0x1c3a4c
    if (v1 == 0) goto label_0x1c3a30;                           // 0x001c3a20: beqz $v1, 0x1c3a30
    /* nop */                                                   // 0x001c3a24: nop 
    goto label_0x1c3d00;                                        // 0x001c3a28: b 0x1c3d00
    /* nop */                                                   // 0x001c3a2c: nop 
label_0x1c3a30:
    func_001bfc60();  // 0x1bfc20                                // 0x001c3a30: jal 0x1bfc20
    /* nop */                                                   // 0x001c3a34: nop 
    *(uint32_t*)((s0) + 0xe0) = 0;                              // 0x001c3a38: sw $zero, 0xe0($s0)
    v0 = *(int8_t*)((s0) + 3);                                  // 0x001c3a3c: lb $v0, 3($s0)
    v0 = v0 + 1;                                                // 0x001c3a40: addiu $v0, $v0, 1
    goto label_0x1c3d00;                                        // 0x001c3a44: b 0x1c3d00
    *(uint8_t*)((s0) + 3) = v0;                                 // 0x001c3a48: sb $v0, 3($s0)
label_0x1c3a4c:
    func_001c0bf0();  // 0x1c0bd0                                // 0x001c3a4c: jal 0x1c0bd0
    /* nop */                                                   // 0x001c3a50: nop 
    if (v0 != 0) goto label_0x1c3a7c;                           // 0x001c3a54: bnez $v0, 0x1c3a7c
    a0 = 1;                                                     // 0x001c3a58: addiu $a0, $zero, 1
    v1 = 5;                                                     // 0x001c3a5c: addiu $v1, $zero, 5
    *(uint32_t*)((s0) + 0xe0) = a0;                             // 0x001c3a60: sw $a0, 0xe0($s0)
    v0 = 4;                                                     // 0x001c3a64: addiu $v0, $zero, 4
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c3a68: sw $v1, 0x2c($s0)
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c3a6c: sb $v0, 2($s0)
    *(uint32_t*)((s0) + 0x34) = a0;                             // 0x001c3a70: sw $a0, 0x34($s0)
    goto label_0x1c3d00;                                        // 0x001c3a74: b 0x1c3d00
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x001c3a78: sw $zero, 0x30($s0)
label_0x1c3a7c:
    v1 = *(uint16_t*)((s0) + 0xa);                              // 0x001c3a7c: lhu $v1, 0xa($s0)
    v0 = v1 & 0x20;                                             // 0x001c3a80: andi $v0, $v1, 0x20
    if (v0 == 0) goto label_0x1c3ad0;                           // 0x001c3a84: beqz $v0, 0x1c3ad0
    /* nop */                                                   // 0x001c3a88: nop 
    func_001c7470();  // 0x1c7460                                // 0x001c3a8c: jal 0x1c7460
    /* nop */                                                   // 0x001c3a90: nop 
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x001c3a94: sw $zero, 0x30($s0)
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x001c3a98: lw $v0, 0x38($s0)
    if (v0 != 0) goto label_0x1c3ac8;                           // 0x001c3a9c: bnez $v0, 0x1c3ac8
    a1 = *(int32_t*)((s0) + 0xec);                              // 0x001c3aa4: lw $a1, 0xec($s0)
    func_001bfe40();  // 0x1bfda0                                // 0x001c3aa8: jal 0x1bfda0
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c3aac: lw $a0, 0x24($s0)
    v1 = *(int8_t*)((s0) + 2);                                  // 0x001c3ab0: lb $v1, 2($s0)
    v0 = 3;                                                     // 0x001c3ab4: addiu $v0, $zero, 3
    v1 = v1 + 1;                                                // 0x001c3ab8: addiu $v1, $v1, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c3abc: sb $v1, 2($s0)
    goto label_0x1c3d00;                                        // 0x001c3ac0: b 0x1c3d00
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c3ac4: sw $v0, 0x2c($s0)
label_0x1c3ac8:
    goto label_0x1c3d08;                                        // 0x001c3ac8: b 0x1c3d08
label_0x1c3ad0:
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x001c3ad0: lw $v0, 0x10($s0)
    if (v0 == 0) goto label_0x1c3ae8;                           // 0x001c3ad4: beqz $v0, 0x1c3ae8
    /* nop */                                                   // 0x001c3ad8: nop 
    v0 = v0 + -1;                                               // 0x001c3adc: addiu $v0, $v0, -1
    goto label_0x1c3d00;                                        // 0x001c3ae0: b 0x1c3d00
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c3ae4: sw $v0, 0x10($s0)
label_0x1c3ae8:
    v0 = v1 & 8;                                                // 0x001c3ae8: andi $v0, $v1, 8
    if (v0 == 0) goto label_0x1c3b04;                           // 0x001c3aec: beqz $v0, 0x1c3b04
    v0 = v1 & 4;                                                // 0x001c3af0: andi $v0, $v1, 4
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x001c3af4: lw $v0, 0x38($s0)
    if (v0 == 0) goto label_0x1c3b1c;                           // 0x001c3af8: beqz $v0, 0x1c3b1c
    /* nop */                                                   // 0x001c3afc: nop 
    v0 = v1 & 4;                                                // 0x001c3b00: andi $v0, $v1, 4
label_0x1c3b04:
    if (v0 == 0) goto label_0x1c3d00;                           // 0x001c3b04: beqz $v0, 0x1c3d00
    /* nop */                                                   // 0x001c3b08: nop 
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c3b0c: lw $v1, 0x38($s0)
    v0 = 1;                                                     // 0x001c3b10: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1c3d00;                          // 0x001c3b14: bne $v1, $v0, 0x1c3d00
    /* nop */                                                   // 0x001c3b18: nop 
label_0x1c3b1c:
    func_001c7480();  // 0x1c7470                                // 0x001c3b1c: jal 0x1c7470
    /* nop */                                                   // 0x001c3b20: nop 
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c3b24: lw $v1, 0x38($s0)
    v0 = 5;                                                     // 0x001c3b28: addiu $v0, $zero, 5
    v1 = v1 ^ 1;                                                // 0x001c3b2c: xori $v1, $v1, 1
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c3b30: sw $v1, 0x38($s0)
    goto label_0x1c3d00;                                        // 0x001c3b34: b 0x1c3d00
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c3b38: sw $v0, 0x10($s0)
    func_001c0bd0();  // 0x1c0bc0                                // 0x001c3b3c: jal 0x1c0bc0
    /* nop */                                                   // 0x001c3b40: nop 
    v1 = -1;                                                    // 0x001c3b44: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1c3c60;                          // 0x001c3b48: beq $v0, $v1, 0x1c3c60
    v1 = -0x100;                                                // 0x001c3b4c: addiu $v1, $zero, -0x100
    if (v0 == v1) goto label_0x1c3be4;                          // 0x001c3b50: beq $v0, $v1, 0x1c3be4
    /* nop */                                                   // 0x001c3b54: nop 
    if (v0 == 0) goto label_0x1c3b68;                           // 0x001c3b58: beqz $v0, 0x1c3b68
    goto label_0x1c3bfc;                                        // 0x001c3b60: b 0x1c3bfc
    a0 = 4;                                                     // 0x001c3b64: addiu $a0, $zero, 4
label_0x1c3b68:
    func_001c6e20();  // 0x1c6dc0                                // 0x001c3b68: jal 0x1c6dc0
    /* nop */                                                   // 0x001c3b6c: nop 
    if (v0 != 0) goto label_0x1c3bc4;                           // 0x001c3b70: bnez $v0, 0x1c3bc4
    a0 = 4;                                                     // 0x001c3b74: addiu $a0, $zero, 4
    v1 = *(int32_t*)((s0) + 0x20);                              // 0x001c3b78: lw $v1, 0x20($s0)
    v0 = 1;                                                     // 0x001c3b7c: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1c3bac;                          // 0x001c3b80: bne $v1, $v0, 0x1c3bac
    v0 = 0x20;                                                  // 0x001c3b84: addiu $v0, $zero, 0x20
    a1 = *(int32_t*)((s0) + 0xec);                              // 0x001c3b88: lw $a1, 0xec($s0)
    func_001bfe40();  // 0x1bfda0                                // 0x001c3b8c: jal 0x1bfda0
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c3b90: lw $a0, 0x24($s0)
    a0 = 2;                                                     // 0x001c3b94: addiu $a0, $zero, 2
    func_001bfda0();  // 0x1bfcb0                                // 0x001c3b98: jal 0x1bfcb0
    v0 = 6;                                                     // 0x001c3ba0: addiu $v0, $zero, 6
    goto label_0x1c3c60;                                        // 0x001c3ba4: b 0x1c3c60
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c3ba8: sb $v0, 2($s0)
label_0x1c3bac:
    func_001c0c00();  // 0x1c0bf0                                // 0x001c3bac: jal 0x1c0bf0
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c3bb0: sw $v0, 0x2c($s0)
    *(uint32_t*)((s0) + 0x34) = 0;                              // 0x001c3bb4: sw $zero, 0x34($s0)
    v0 = 5;                                                     // 0x001c3bb8: addiu $v0, $zero, 5
    goto label_0x1c3c60;                                        // 0x001c3bbc: b 0x1c3c60
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c3bc0: sb $v0, 2($s0)
label_0x1c3bc4:
    v1 = 5;                                                     // 0x001c3bc4: addiu $v1, $zero, 5
    *(uint32_t*)((s0) + 0x2c) = a0;                             // 0x001c3bc8: sw $a0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c3bcc: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 0x34) = v1;                             // 0x001c3bd0: sw $v1, 0x34($s0)
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c3bd4: sw $v0, 0x34($s0)
    *(uint32_t*)((s0) + 0xe0) = v0;                             // 0x001c3bd8: sw $v0, 0xe0($s0)
    goto label_0x1c3c60;                                        // 0x001c3bdc: b 0x1c3c60
    *(uint8_t*)((s0) + 2) = a0;                                 // 0x001c3be0: sb $a0, 2($s0)
label_0x1c3be4:
    v1 = 4;                                                     // 0x001c3be4: addiu $v1, $zero, 4
    v0 = 1;                                                     // 0x001c3be8: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c3bec: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c3bf0: sw $v0, 0x34($s0)
    goto label_0x1c3c60;                                        // 0x001c3bf4: b 0x1c3c60
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c3bf8: sw $v1, 0x2c($s0)
label_0x1c3bfc:
    v0 = v0 & 0xff;                                             // 0x001c3bfc: andi $v0, $v0, 0xff
    *(uint8_t*)((s0) + 2) = a0;                                 // 0x001c3c00: sb $a0, 2($s0)
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c3c04: sw $v0, 0x34($s0)
    v1 = *(int32_t*)((s0) + 0x34);                              // 0x001c3c08: lw $v1, 0x34($s0)
    if (v1 == a0) goto label_0x1c3c58;                          // 0x001c3c0c: beq $v1, $a0, 0x1c3c58
    /* nop */                                                   // 0x001c3c10: nop 
    v0 = 3;                                                     // 0x001c3c14: addiu $v0, $zero, 3
    if (v1 == v0) goto label_0x1c3c50;                          // 0x001c3c18: beq $v1, $v0, 0x1c3c50
    v0 = 7;                                                     // 0x001c3c1c: addiu $v0, $zero, 7
    v0 = 2;                                                     // 0x001c3c20: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1c3c48;                          // 0x001c3c24: beq $v1, $v0, 0x1c3c48
    v0 = 6;                                                     // 0x001c3c28: addiu $v0, $zero, 6
    v0 = 1;                                                     // 0x001c3c2c: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1c3c40;                          // 0x001c3c30: beq $v1, $v0, 0x1c3c40
    v0 = 5;                                                     // 0x001c3c34: addiu $v0, $zero, 5
    goto label_0x1c3c64;                                        // 0x001c3c38: b 0x1c3c64
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c3c3c: lw $v0, -0x64d8($gp)
label_0x1c3c40:
    goto label_0x1c3c60;                                        // 0x001c3c40: b 0x1c3c60
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c3c44: sw $v0, 0x2c($s0)
label_0x1c3c48:
    goto label_0x1c3c60;                                        // 0x001c3c48: b 0x1c3c60
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c3c4c: sw $v0, 0x2c($s0)
label_0x1c3c50:
    goto label_0x1c3c60;                                        // 0x001c3c50: b 0x1c3c60
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c3c54: sw $v0, 0x2c($s0)
label_0x1c3c58:
    v0 = 0x17;                                                  // 0x001c3c58: addiu $v0, $zero, 0x17
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c3c5c: sw $v0, 0x2c($s0)
label_0x1c3c60:
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c3c60: lw $v0, -0x64d8($gp)
label_0x1c3c64:
    goto label_0x1c3d00;                                        // 0x001c3c64: b 0x1c3d00
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x001c3c68: sw $v0, 0x14($s0)
    v0 = *(uint16_t*)((s0) + 0xa);                              // 0x001c3c6c: lhu $v0, 0xa($s0)
    v0 = v0 & 0xfff0;                                           // 0x001c3c70: andi $v0, $v0, 0xfff0
    if (v0 == 0) goto label_0x1c3d00;                           // 0x001c3c74: beqz $v0, 0x1c3d00
    at = 0x31 << 16;                                            // 0x001c3c78: lui $at, 0x31
    func_001c7470();  // 0x1c7460                                // 0x001c3c7c: jal 0x1c7460
    g_00313866 = 0;  // Global at 0x00313866                    // 0x001c3c80: sb $zero, 0x3866($at)
    goto label_0x1c3d04;                                        // 0x001c3c84: b 0x1c3d04
    v0 = *(uint16_t*)((s0) + 0xa);                              // 0x001c3c8c: lhu $v0, 0xa($s0)
    v0 = v0 & 0xfff0;                                           // 0x001c3c90: andi $v0, $v0, 0xfff0
    if (v0 == 0) goto label_0x1c3d00;                           // 0x001c3c94: beqz $v0, 0x1c3d00
    /* nop */                                                   // 0x001c3c98: nop 
    func_001c7470();  // 0x1c7460                                // 0x001c3c9c: jal 0x1c7460
    /* nop */                                                   // 0x001c3ca0: nop 
    goto label_0x1c3d04;                                        // 0x001c3ca4: b 0x1c3d04
    func_001c0bd0();  // 0x1c0bc0                                // 0x001c3cac: jal 0x1c0bc0
    /* nop */                                                   // 0x001c3cb0: nop 
    v1 = -1;                                                    // 0x001c3cb4: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1c3cf8;                          // 0x001c3cb8: beq $v0, $v1, 0x1c3cf8
    /* nop */                                                   // 0x001c3cbc: nop 
    if (v0 == 0) goto label_0x1c3cd0;                           // 0x001c3cc0: beqz $v0, 0x1c3cd0
    goto label_0x1c3cdc;                                        // 0x001c3cc8: b 0x1c3cdc
    v0 = 0x20;                                                  // 0x001c3ccc: addiu $v0, $zero, 0x20
label_0x1c3cd0:
    func_001c6ea0();  // 0x1c6e50                                // 0x001c3cd0: jal 0x1c6e50
    /* nop */                                                   // 0x001c3cd4: nop 
    v0 = 0x20;                                                  // 0x001c3cd8: addiu $v0, $zero, 0x20
label_0x1c3cdc:
    func_001c0c00();  // 0x1c0bf0                                // 0x001c3cdc: jal 0x1c0bf0
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c3ce0: sw $v0, 0x2c($s0)
    at = 0x31 << 16;                                            // 0x001c3ce4: lui $at, 0x31
    v0 = 5;                                                     // 0x001c3ce8: addiu $v0, $zero, 5
    g_00315fe4 = 0;  // Global at 0x00315fe4                    // 0x001c3cec: sw $zero, 0x5fe4($at)
    *(uint32_t*)((s0) + 0x34) = 0;                              // 0x001c3cf0: sw $zero, 0x34($s0)
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c3cf4: sb $v0, 2($s0)
label_0x1c3cf8:
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c3cf8: lw $v0, -0x64d8($gp)
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x001c3cfc: sw $v0, 0x14($s0)
label_0x1c3d00:
    v0 = 1;                                                     // 0x001c3d00: addiu $v0, $zero, 1
label_0x1c3d04:
label_0x1c3d08:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c3d08: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c3d0c: jr $ra
    sp = sp + 0x20;                                             // 0x001c3d10: addiu $sp, $sp, 0x20
}