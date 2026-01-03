void func_001c4810() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c4810: addiu $sp, $sp, -0x20
    a2 = 0x63;                                                  // 0x001c4814: addiu $a2, $zero, 0x63
    a3 = g_001c65f2;  // Global at 0x001c65f2                   // 0x001c4820: lb $a3, 2($a0)
    if (a3 == a2) goto label_0x1c5060;                          // 0x001c4824: beq $a3, $a2, 0x1c5060
    v0 = 0xa;                                                   // 0x001c482c: addiu $v0, $zero, 0xa
    if (a3 == v0) goto label_0x1c4fb8;                          // 0x001c4830: beq $a3, $v0, 0x1c4fb8
    /* nop */                                                   // 0x001c4834: nop 
    v0 = 7;                                                     // 0x001c4838: addiu $v0, $zero, 7
    if (a3 == v0) goto label_0x1c4f08;                          // 0x001c483c: beq $a3, $v0, 0x1c4f08
    /* nop */                                                   // 0x001c4840: nop 
    v0 = 6;                                                     // 0x001c4844: addiu $v0, $zero, 6
    if (a3 == v0) goto label_0x1c4ee8;                          // 0x001c4848: beq $a3, $v0, 0x1c4ee8
    /* nop */                                                   // 0x001c484c: nop 
    a1 = 5;                                                     // 0x001c4850: addiu $a1, $zero, 5
    if (a3 == a1) goto label_0x1c4dcc;                          // 0x001c4854: beq $a3, $a1, 0x1c4dcc
    /* nop */                                                   // 0x001c4858: nop 
    v0 = 4;                                                     // 0x001c485c: addiu $v0, $zero, 4
    if (a3 == v0) goto label_0x1c4d40;                          // 0x001c4860: beq $a3, $v0, 0x1c4d40
    /* nop */                                                   // 0x001c4864: nop 
    v0 = 3;                                                     // 0x001c4868: addiu $v0, $zero, 3
    if (a3 == v0) goto label_0x1c5084;                          // 0x001c486c: beq $a3, $v0, 0x1c5084
    v0 = 1;                                                     // 0x001c4870: addiu $v0, $zero, 1
    a0 = 2;                                                     // 0x001c4874: addiu $a0, $zero, 2
    if (a3 == a0) goto label_0x1c4b70;                          // 0x001c4878: beq $a3, $a0, 0x1c4b70
    /* nop */                                                   // 0x001c487c: nop 
    v1 = 1;                                                     // 0x001c4880: addiu $v1, $zero, 1
    if (a3 == v1) goto label_0x1c4944;                          // 0x001c4884: beq $a3, $v1, 0x1c4944
    /* nop */                                                   // 0x001c4888: nop 
    if (a3 == 0) goto label_0x1c489c;                           // 0x001c488c: beqz $a3, 0x1c489c
    /* nop */                                                   // 0x001c4890: nop 
    goto label_0x1c5080;                                        // 0x001c4894: b 0x1c5080
    /* nop */                                                   // 0x001c4898: nop 
label_0x1c489c:
    v0 = *(int32_t*)((s0) + 0x40);                              // 0x001c489c: lw $v0, 0x40($s0)
    if (v0 != 0) goto label_0x1c48b4;                           // 0x001c48a0: bnez $v0, 0x1c48b4
    /* nop */                                                   // 0x001c48a4: nop 
    *(uint8_t*)((s0) + 2) = a2;                                 // 0x001c48a8: sb $a2, 2($s0)
    goto label_0x1c5080;                                        // 0x001c48ac: b 0x1c5080
    *(uint32_t*)((s0) + 0x34) = a1;                             // 0x001c48b0: sw $a1, 0x34($s0)
label_0x1c48b4:
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c48b4: sb $v1, 2($s0)
    v0 = 8;                                                     // 0x001c48b8: addiu $v0, $zero, 8
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c48bc: sw $v0, 0x2c($s0)
    v0 = *(int32_t*)((s0) + 0x20);                              // 0x001c48c0: lw $v0, 0x20($s0)
    if (v0 != a0) goto label_0x1c4904;                          // 0x001c48c4: bne $v0, $a0, 0x1c4904
    /* nop */                                                   // 0x001c48c8: nop 
    func_001afb40();  // 1afb40                                // 0x001c48cc: jal 0x1afb40
    /* nop */                                                   // 0x001c48d0: nop 
    if (v0 != 0) goto label_0x1c4904;                           // 0x001c48d4: bnez $v0, 0x1c4904
    /* nop */                                                   // 0x001c48d8: nop 
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c48dc: lw $a0, 0x24($s0)
    a1 = *(int32_t*)((s0) + 0xec);                              // 0x001c48e0: lw $a1, 0xec($s0)
    func_001bffd0();  // 1bffd0                                // 0x001c48e4: jal 0x1bffd0
    a2 = 1;                                                     // 0x001c48e8: addiu $a2, $zero, 1
    a0 = 1;                                                     // 0x001c48ec: addiu $a0, $zero, 1
    func_001bfcb0();  // 1bfcb0                                // 0x001c48f0: jal 0x1bfcb0
    v0 = 0xa;                                                   // 0x001c48f8: addiu $v0, $zero, 0xa
    goto label_0x1c5080;                                        // 0x001c48fc: b 0x1c5080
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c4900: sb $v0, 2($s0)
label_0x1c4904:
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c4904: lw $a0, 0x24($s0)
    a1 = *(int32_t*)((s0) + 0xe8);                              // 0x001c4908: lw $a1, 0xe8($s0)
    func_001bffd0();  // 1bffd0                                // 0x001c490c: jal 0x1bffd0
    v1 = *(int32_t*)((s0) + 0x20);                              // 0x001c4914: lw $v1, 0x20($s0)
    v0 = 3;                                                     // 0x001c4918: addiu $v0, $zero, 3
    if (v1 != v0) goto label_0x1c4930;                          // 0x001c491c: bne $v1, $v0, 0x1c4930
    /* nop */                                                   // 0x001c4920: nop 
    v0 = 1;                                                     // 0x001c4924: addiu $v0, $zero, 1
    goto label_0x1c4934;                                        // 0x001c4928: b 0x1c4934
    *(uint32_t*)((s0) + 0xf8) = v0;                             // 0x001c492c: sw $v0, 0xf8($s0)
label_0x1c4930:
    *(uint32_t*)((s0) + 0xf8) = 0;                              // 0x001c4930: sw $zero, 0xf8($s0)
label_0x1c4934:
    func_001c6b00();  // 1c6b00                                // 0x001c4934: jal 0x1c6b00
    goto label_0x1c5080;                                        // 0x001c493c: b 0x1c5080
    /* nop */                                                   // 0x001c4940: nop 
label_0x1c4944:
    func_001c0bc0();  // 1c0bc0                                // 0x001c4944: jal 0x1c0bc0
    /* nop */                                                   // 0x001c4948: nop 
    v1 = -1;                                                    // 0x001c494c: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1c5080;                          // 0x001c4950: beq $v0, $v1, 0x1c5080
    /* nop */                                                   // 0x001c4954: nop 
    if (v0 == 0) goto label_0x1c4a3c;                           // 0x001c4958: beqz $v0, 0x1c4a3c
    /* nop */                                                   // 0x001c495c: nop 
    v1 = -0xfb;                                                 // 0x001c4960: addiu $v1, $zero, -0xfb
    if (v0 == v1) goto label_0x1c4a3c;                          // 0x001c4964: beq $v0, $v1, 0x1c4a3c
    /* nop */                                                   // 0x001c4968: nop 
    v1 = -0xfe;                                                 // 0x001c496c: addiu $v1, $zero, -0xfe
    if (v0 == v1) goto label_0x1c49fc;                          // 0x001c4970: beq $v0, $v1, 0x1c49fc
    v1 = -0x100;                                                // 0x001c4978: addiu $v1, $zero, -0x100
    if (v0 == v1) goto label_0x1c49dc;                          // 0x001c497c: beq $v0, $v1, 0x1c49dc
    /* nop */                                                   // 0x001c4980: nop 
    v1 = -0xfd;                                                 // 0x001c4984: addiu $v1, $zero, -0xfd
    if (v0 == v1) goto label_0x1c499c;                          // 0x001c4988: beq $v0, $v1, 0x1c499c
    goto label_0x1c4af8;                                        // 0x001c4990: b 0x1c4af8
    v1 = v0 & 0xff;                                             // 0x001c4994: andi $v1, $v0, 0xff
label_0x1c499c:
    func_001c6be0();  // 1c6be0                                // 0x001c499c: jal 0x1c6be0
    /* nop */                                                   // 0x001c49a0: nop 
    v1 = 0xa;                                                   // 0x001c49a4: addiu $v1, $zero, 0xa
    v0 = 2;                                                     // 0x001c49a8: addiu $v0, $zero, 2
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c49ac: sw $v1, 0x2c($s0)
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c49b0: sb $v0, 2($s0)
    v1 = 1;                                                     // 0x001c49b4: addiu $v1, $zero, 1
    *(uint8_t*)((s0) + 3) = v1;                                 // 0x001c49b8: sb $v1, 3($s0)
    v0 = 5;                                                     // 0x001c49bc: addiu $v0, $zero, 5
    *(uint32_t*)((s0) + 0x3c) = 0;                              // 0x001c49c0: sw $zero, 0x3c($s0)
    *(uint32_t*)((s0) + 0x30) = v1;                             // 0x001c49c4: sw $v1, 0x30($s0)
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c49c8: sw $v1, 0x38($s0)
    func_001bfc20();  // 1bfc20                                // 0x001c49cc: jal 0x1bfc20
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c49d0: sw $v0, 0x10($s0)
    goto label_0x1c5080;                                        // 0x001c49d4: b 0x1c5080
    *(uint32_t*)((s0) + 0xe0) = 0;                              // 0x001c49d8: sw $zero, 0xe0($s0)
label_0x1c49dc:
    v0 = 9;                                                     // 0x001c49dc: addiu $v0, $zero, 9
    v1 = 6;                                                     // 0x001c49e0: addiu $v1, $zero, 6
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c49e4: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c49e8: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c49ec: sb $v1, 2($s0)
    goto label_0x1c5080;                                        // 0x001c49f0: b 0x1c5080
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c49f4: sw $v0, 0x34($s0)
label_0x1c49fc:
    func_001c6be0();  // 1c6be0                                // 0x001c49fc: jal 0x1c6be0
    /* nop */                                                   // 0x001c4a00: nop 
    v1 = 0xe;                                                   // 0x001c4a04: addiu $v1, $zero, 0xe
    v0 = 2;                                                     // 0x001c4a08: addiu $v0, $zero, 2
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c4a0c: sw $v1, 0x2c($s0)
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c4a10: sb $v0, 2($s0)
    v1 = 1;                                                     // 0x001c4a14: addiu $v1, $zero, 1
    *(uint8_t*)((s0) + 3) = v1;                                 // 0x001c4a18: sb $v1, 3($s0)
    v0 = 5;                                                     // 0x001c4a1c: addiu $v0, $zero, 5
    *(uint32_t*)((s0) + 0x3c) = v1;                             // 0x001c4a20: sw $v1, 0x3c($s0)
    *(uint32_t*)((s0) + 0x30) = v1;                             // 0x001c4a24: sw $v1, 0x30($s0)
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c4a28: sw $v1, 0x38($s0)
    func_001bfc20();  // 1bfc20                                // 0x001c4a2c: jal 0x1bfc20
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c4a30: sw $v0, 0x10($s0)
    goto label_0x1c5080;                                        // 0x001c4a34: b 0x1c5080
    *(uint32_t*)((s0) + 0xe0) = 0;                              // 0x001c4a38: sw $zero, 0xe0($s0)
label_0x1c4a3c:
    v1 = *(int32_t*)((s0) + 0x20);                              // 0x001c4a3c: lw $v1, 0x20($s0)
    v0 = 3;                                                     // 0x001c4a40: addiu $v0, $zero, 3
    if (v1 != v0) goto label_0x1c4a70;                          // 0x001c4a44: bne $v1, $v0, 0x1c4a70
    /* nop */                                                   // 0x001c4a48: nop 
    v1 = 5;                                                     // 0x001c4a4c: addiu $v1, $zero, 5
    v0 = 0x14;                                                  // 0x001c4a50: addiu $v0, $zero, 0x14
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c4a54: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c4a58: sw $v0, 0x2c($s0)
    a1 = *(int32_t*)((s0) + 0xe8);                              // 0x001c4a5c: lw $a1, 0xe8($s0)
    func_001c0320();  // 1c0320                                // 0x001c4a60: jal 0x1c0320
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c4a64: lw $a0, 0x24($s0)
    goto label_0x1c5080;                                        // 0x001c4a68: b 0x1c5080
    /* nop */                                                   // 0x001c4a6c: nop 
label_0x1c4a70:
    func_001c0bf0();  // 1c0bf0                                // 0x001c4a70: jal 0x1c0bf0
    /* nop */                                                   // 0x001c4a74: nop 
    v1 = 0x13;                                                  // 0x001c4a78: addiu $v1, $zero, 0x13
    v0 = 2;                                                     // 0x001c4a7c: addiu $v0, $zero, 2
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c4a80: sw $v1, 0x2c($s0)
    v1 = *(int32_t*)((s0) + 0x20);                              // 0x001c4a84: lw $v1, 0x20($s0)
    if (v1 != v0) goto label_0x1c4ac8;                          // 0x001c4a88: bne $v1, $v0, 0x1c4ac8
    a0 = 2;                                                     // 0x001c4a8c: addiu $a0, $zero, 2
    func_001afb40();  // 1afb40                                // 0x001c4a90: jal 0x1afb40
    /* nop */                                                   // 0x001c4a94: nop 
    if (v0 != 0) goto label_0x1c4ac4;                           // 0x001c4a98: bnez $v0, 0x1c4ac4
    /* nop */                                                   // 0x001c4a9c: nop 
    func_001c7480();  // 1c7480                                // 0x001c4aa0: jal 0x1c7480
    a0 = *(int32_t*)((s0) + 0xec);                              // 0x001c4aa4: lw $a0, 0xec($s0)
    if (v0 == 0) goto label_0x1c4ac4;                           // 0x001c4aa8: beqz $v0, 0x1c4ac4
    /* nop */                                                   // 0x001c4aac: nop 
    a0 = 0x1c << 16;                                            // 0x001c4ab0: lui $a0, 0x1c
    func_001af280();  // 1af280                                // 0x001c4ab4: jal 0x1af280
    a0 = a0 + 0x65f0;                                           // 0x001c4ab8: addiu $a0, $a0, 0x65f0
    v0 = 0x3a;                                                  // 0x001c4abc: addiu $v0, $zero, 0x3a
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c4ac0: sw $v0, 0x2c($s0)
label_0x1c4ac4:
    a0 = 2;                                                     // 0x001c4ac4: addiu $a0, $zero, 2
label_0x1c4ac8:
    v1 = 1;                                                     // 0x001c4ac8: addiu $v1, $zero, 1
    *(uint8_t*)((s0) + 2) = a0;                                 // 0x001c4acc: sb $a0, 2($s0)
    v0 = 5;                                                     // 0x001c4ad0: addiu $v0, $zero, 5
    *(uint8_t*)((s0) + 3) = v1;                                 // 0x001c4ad4: sb $v1, 3($s0)
    *(uint32_t*)((s0) + 0x3c) = a0;                             // 0x001c4ad8: sw $a0, 0x3c($s0)
    *(uint32_t*)((s0) + 0x30) = v1;                             // 0x001c4adc: sw $v1, 0x30($s0)
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c4ae0: sw $v1, 0x38($s0)
    func_001bfc20();  // 1bfc20                                // 0x001c4ae4: jal 0x1bfc20
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c4ae8: sw $v0, 0x10($s0)
    goto label_0x1c5080;                                        // 0x001c4aec: b 0x1c5080
    *(uint32_t*)((s0) + 0xe0) = 0;                              // 0x001c4af0: sw $zero, 0xe0($s0)
label_0x1c4af4:
    v1 = v0 & 0xff;                                             // 0x001c4af4: andi $v1, $v0, 0xff
label_0x1c4af8:
    v0 = 0x63;                                                  // 0x001c4af8: addiu $v0, $zero, 0x63
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c4afc: sb $v0, 2($s0)
    *(uint32_t*)((s0) + 0x34) = v1;                             // 0x001c4b00: sw $v1, 0x34($s0)
    v0 = 4;                                                     // 0x001c4b04: addiu $v0, $zero, 4
    v1 = *(int32_t*)((s0) + 0x34);                              // 0x001c4b08: lw $v1, 0x34($s0)
    if (v1 == v0) goto label_0x1c4b64;                          // 0x001c4b0c: beq $v1, $v0, 0x1c4b64
    /* nop */                                                   // 0x001c4b10: nop 
    v0 = 3;                                                     // 0x001c4b14: addiu $v0, $zero, 3
    if (v1 == v0) goto label_0x1c4b5c;                          // 0x001c4b18: beq $v1, $v0, 0x1c4b5c
    v0 = 7;                                                     // 0x001c4b1c: addiu $v0, $zero, 7
    v0 = 2;                                                     // 0x001c4b20: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1c4b50;                          // 0x001c4b24: beq $v1, $v0, 0x1c4b50
    v0 = 6;                                                     // 0x001c4b28: addiu $v0, $zero, 6
    v0 = 1;                                                     // 0x001c4b2c: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1c4b44;                          // 0x001c4b30: beq $v1, $v0, 0x1c4b44
    v0 = 5;                                                     // 0x001c4b34: addiu $v0, $zero, 5
    goto label_0x1c5080;                                        // 0x001c4b38: b 0x1c5080
    /* nop */                                                   // 0x001c4b3c: nop 
    v0 = 5;                                                     // 0x001c4b40: addiu $v0, $zero, 5
label_0x1c4b44:
    goto label_0x1c5080;                                        // 0x001c4b44: b 0x1c5080
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c4b48: sw $v0, 0x2c($s0)
    v0 = 6;                                                     // 0x001c4b4c: addiu $v0, $zero, 6
label_0x1c4b50:
    goto label_0x1c5080;                                        // 0x001c4b50: b 0x1c5080
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c4b54: sw $v0, 0x2c($s0)
    v0 = 7;                                                     // 0x001c4b58: addiu $v0, $zero, 7
label_0x1c4b5c:
    goto label_0x1c5080;                                        // 0x001c4b5c: b 0x1c5080
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c4b60: sw $v0, 0x2c($s0)
label_0x1c4b64:
    v0 = 0x17;                                                  // 0x001c4b64: addiu $v0, $zero, 0x17
    goto label_0x1c5080;                                        // 0x001c4b68: b 0x1c5080
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c4b6c: sw $v0, 0x2c($s0)
label_0x1c4b70:
    v1 = *(int8_t*)((s0) + 3);                                  // 0x001c4b70: lb $v1, 3($s0)
    v0 = 1;                                                     // 0x001c4b74: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1c4bb0;                          // 0x001c4b78: beq $v1, $v0, 0x1c4bb0
    if (v1 == 0) goto label_0x1c4b90;                           // 0x001c4b80: beqz $v1, 0x1c4b90
    /* nop */                                                   // 0x001c4b84: nop 
    goto label_0x1c5080;                                        // 0x001c4b88: b 0x1c5080
    /* nop */                                                   // 0x001c4b8c: nop 
label_0x1c4b90:
    func_001bfc20();  // 1bfc20                                // 0x001c4b90: jal 0x1bfc20
    /* nop */                                                   // 0x001c4b94: nop 
    *(uint32_t*)((s0) + 0xe0) = 0;                              // 0x001c4b98: sw $zero, 0xe0($s0)
    v0 = *(int8_t*)((s0) + 3);                                  // 0x001c4b9c: lb $v0, 3($s0)
    v0 = v0 + 1;                                                // 0x001c4ba0: addiu $v0, $v0, 1
    goto label_0x1c5080;                                        // 0x001c4ba4: b 0x1c5080
    *(uint8_t*)((s0) + 3) = v0;                                 // 0x001c4ba8: sb $v0, 3($s0)
label_0x1c4bb0:
    func_001c0bd0();  // 1c0bd0                                // 0x001c4bb0: jal 0x1c0bd0
    /* nop */                                                   // 0x001c4bb4: nop 
    if (v0 != 0) goto label_0x1c4bf4;                           // 0x001c4bb8: bnez $v0, 0x1c4bf4
    a0 = 0x1c << 16;                                            // 0x001c4bc0: lui $a0, 0x1c
    func_001af2f0();  // 1af2f0                                // 0x001c4bc4: jal 0x1af2f0
    a0 = a0 + 0x65f0;                                           // 0x001c4bc8: addiu $a0, $a0, 0x65f0
    a0 = 1;                                                     // 0x001c4bcc: addiu $a0, $zero, 1
    v1 = 5;                                                     // 0x001c4bd0: addiu $v1, $zero, 5
    *(uint32_t*)((s0) + 0xe0) = a0;                             // 0x001c4bd4: sw $a0, 0xe0($s0)
    v0 = 6;                                                     // 0x001c4bd8: addiu $v0, $zero, 6
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c4bdc: sw $v1, 0x2c($s0)
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c4be0: sb $v0, 2($s0)
    *(uint32_t*)((s0) + 0x34) = a0;                             // 0x001c4be4: sw $a0, 0x34($s0)
    goto label_0x1c5080;                                        // 0x001c4be8: b 0x1c5080
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x001c4bec: sw $zero, 0x30($s0)
label_0x1c4bf4:
    func_001c47c0();  // 1c47c0                                // 0x001c4bf4: jal 0x1c47c0
    /* nop */                                                   // 0x001c4bf8: nop 
    if (v0 == 0) goto label_0x1c4cd0;                           // 0x001c4bfc: beqz $v0, 0x1c4cd0
    /* nop */                                                   // 0x001c4c00: nop 
    a0 = 0x1c << 16;                                            // 0x001c4c04: lui $a0, 0x1c
    func_001af2f0();  // 1af2f0                                // 0x001c4c08: jal 0x1af2f0
    a0 = a0 + 0x65f0;                                           // 0x001c4c0c: addiu $a0, $a0, 0x65f0
    func_001c7460();  // 1c7460                                // 0x001c4c10: jal 0x1c7460
    /* nop */                                                   // 0x001c4c14: nop 
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x001c4c18: sw $zero, 0x30($s0)
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x001c4c1c: lw $v0, 0x38($s0)
    if (v0 != 0) goto label_0x1c4cc8;                           // 0x001c4c20: bnez $v0, 0x1c4cc8
    v1 = *(int32_t*)((s0) + 0x3c);                              // 0x001c4c28: lw $v1, 0x3c($s0)
    v0 = 2;                                                     // 0x001c4c2c: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1c4c98;                          // 0x001c4c30: beq $v1, $v0, 0x1c4c98
    /* nop */                                                   // 0x001c4c34: nop 
    v0 = 1;                                                     // 0x001c4c38: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1c4c78;                          // 0x001c4c3c: beq $v1, $v0, 0x1c4c78
    /* nop */                                                   // 0x001c4c40: nop 
    if (v1 == 0) goto label_0x1c4c54;                           // 0x001c4c44: beqz $v1, 0x1c4c54
    /* nop */                                                   // 0x001c4c48: nop 
    goto label_0x1c4cb8;                                        // 0x001c4c4c: b 0x1c4cb8
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c4c50: lw $v0, -0x64d8($gp)
label_0x1c4c54:
    v1 = 5;                                                     // 0x001c4c54: addiu $v1, $zero, 5
    v0 = 0x14;                                                  // 0x001c4c58: addiu $v0, $zero, 0x14
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c4c5c: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c4c60: sw $v0, 0x2c($s0)
    a1 = *(int32_t*)((s0) + 0xe8);                              // 0x001c4c64: lw $a1, 0xe8($s0)
    func_001c0320();  // 1c0320                                // 0x001c4c68: jal 0x1c0320
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c4c6c: lw $a0, 0x24($s0)
    goto label_0x1c4cb4;                                        // 0x001c4c70: b 0x1c4cb4
    /* nop */                                                   // 0x001c4c74: nop 
label_0x1c4c78:
    v1 = 4;                                                     // 0x001c4c78: addiu $v1, $zero, 4
    v0 = 0xf;                                                   // 0x001c4c7c: addiu $v0, $zero, 0xf
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c4c80: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c4c84: sw $v0, 0x2c($s0)
    func_001c0720();  // 1c0720                                // 0x001c4c88: jal 0x1c0720
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c4c8c: lw $a0, 0x24($s0)
    goto label_0x1c4cb4;                                        // 0x001c4c90: b 0x1c4cb4
    /* nop */                                                   // 0x001c4c94: nop 
label_0x1c4c98:
    v1 = 5;                                                     // 0x001c4c98: addiu $v1, $zero, 5
    v0 = 0x14;                                                  // 0x001c4c9c: addiu $v0, $zero, 0x14
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c4ca0: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c4ca4: sw $v0, 0x2c($s0)
    a1 = *(int32_t*)((s0) + 0xe8);                              // 0x001c4ca8: lw $a1, 0xe8($s0)
    func_001c0320();  // 1c0320                                // 0x001c4cac: jal 0x1c0320
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c4cb0: lw $a0, 0x24($s0)
label_0x1c4cb4:
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c4cb4: lw $v0, -0x64d8($gp)
label_0x1c4cb8:
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x001c4cb8: sw $v0, 0x14($s0)
    goto label_0x1c5080;                                        // 0x001c4cbc: b 0x1c5080
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c4cc0: sw $v0, 0x10($s0)
label_0x1c4cc8:
    goto label_0x1c5088;                                        // 0x001c4cc8: b 0x1c5088
label_0x1c4cd0:
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x001c4cd0: lw $v0, 0x10($s0)
    if (v0 == 0) goto label_0x1c4ce8;                           // 0x001c4cd4: beqz $v0, 0x1c4ce8
    /* nop */                                                   // 0x001c4cd8: nop 
    v0 = v0 + -1;                                               // 0x001c4cdc: addiu $v0, $v0, -1
    goto label_0x1c5080;                                        // 0x001c4ce0: b 0x1c5080
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c4ce4: sw $v0, 0x10($s0)
label_0x1c4ce8:
    v1 = *(uint16_t*)((s0) + 0xa);                              // 0x001c4ce8: lhu $v1, 0xa($s0)
    v0 = v1 & 8;                                                // 0x001c4cec: andi $v0, $v1, 8
    if (v0 == 0) goto label_0x1c4d08;                           // 0x001c4cf0: beqz $v0, 0x1c4d08
    v0 = v1 & 4;                                                // 0x001c4cf4: andi $v0, $v1, 4
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x001c4cf8: lw $v0, 0x38($s0)
    if (v0 == 0) goto label_0x1c4d20;                           // 0x001c4cfc: beqz $v0, 0x1c4d20
    /* nop */                                                   // 0x001c4d00: nop 
    v0 = v1 & 4;                                                // 0x001c4d04: andi $v0, $v1, 4
label_0x1c4d08:
    if (v0 == 0) goto label_0x1c5080;                           // 0x001c4d08: beqz $v0, 0x1c5080
    /* nop */                                                   // 0x001c4d0c: nop 
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c4d10: lw $v1, 0x38($s0)
    v0 = 1;                                                     // 0x001c4d14: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1c5080;                          // 0x001c4d18: bne $v1, $v0, 0x1c5080
    /* nop */                                                   // 0x001c4d1c: nop 
label_0x1c4d20:
    func_001c7470();  // 1c7470                                // 0x001c4d20: jal 0x1c7470
    /* nop */                                                   // 0x001c4d24: nop 
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c4d28: lw $v1, 0x38($s0)
    v0 = 5;                                                     // 0x001c4d2c: addiu $v0, $zero, 5
    v1 = v1 ^ 1;                                                // 0x001c4d30: xori $v1, $v1, 1
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c4d34: sw $v1, 0x38($s0)
    goto label_0x1c5080;                                        // 0x001c4d38: b 0x1c5080
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c4d3c: sw $v0, 0x10($s0)
label_0x1c4d40:
    func_001c0bc0();  // 1c0bc0                                // 0x001c4d40: jal 0x1c0bc0
    /* nop */                                                   // 0x001c4d44: nop 
    v1 = -1;                                                    // 0x001c4d48: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1c4dc0;                          // 0x001c4d4c: beq $v0, $v1, 0x1c4dc0
    /* nop */                                                   // 0x001c4d50: nop 
    v1 = -0x100;                                                // 0x001c4d54: addiu $v1, $zero, -0x100
    if (v0 == v1) goto label_0x1c4d94;                          // 0x001c4d58: beq $v0, $v1, 0x1c4d94
    /* nop */                                                   // 0x001c4d5c: nop 
    if (v0 == 0) goto label_0x1c4d74;                           // 0x001c4d60: beqz $v0, 0x1c4d74
    v1 = 5;                                                     // 0x001c4d64: addiu $v1, $zero, 5
    goto label_0x1c4db4;                                        // 0x001c4d68: b 0x1c4db4
    v1 = 0x63;                                                  // 0x001c4d6c: addiu $v1, $zero, 0x63
    v1 = 5;                                                     // 0x001c4d70: addiu $v1, $zero, 5
label_0x1c4d74:
    v0 = 0x14;                                                  // 0x001c4d74: addiu $v0, $zero, 0x14
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c4d78: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c4d7c: sw $v0, 0x2c($s0)
    a1 = *(int32_t*)((s0) + 0xe8);                              // 0x001c4d80: lw $a1, 0xe8($s0)
    func_001c0320();  // 1c0320                                // 0x001c4d84: jal 0x1c0320
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c4d88: lw $a0, 0x24($s0)
    goto label_0x1c4dc4;                                        // 0x001c4d8c: b 0x1c4dc4
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c4d90: lw $v0, -0x64d8($gp)
label_0x1c4d94:
    v0 = 0x10;                                                  // 0x001c4d94: addiu $v0, $zero, 0x10
    v1 = 6;                                                     // 0x001c4d98: addiu $v1, $zero, 6
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c4d9c: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c4da0: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c4da4: sb $v1, 2($s0)
    goto label_0x1c4dc0;                                        // 0x001c4da8: b 0x1c4dc0
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c4dac: sw $v0, 0x34($s0)
    v1 = 0x63;                                                  // 0x001c4db0: addiu $v1, $zero, 0x63
label_0x1c4db4:
    v0 = v0 & 0xff;                                             // 0x001c4db4: andi $v0, $v0, 0xff
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c4db8: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c4dbc: sw $v0, 0x34($s0)
label_0x1c4dc0:
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c4dc0: lw $v0, -0x64d8($gp)
label_0x1c4dc4:
    goto label_0x1c5080;                                        // 0x001c4dc4: b 0x1c5080
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x001c4dc8: sw $v0, 0x14($s0)
label_0x1c4dcc:
    func_001c0bc0();  // 1c0bc0                                // 0x001c4dcc: jal 0x1c0bc0
    /* nop */                                                   // 0x001c4dd0: nop 
    v1 = -1;                                                    // 0x001c4dd4: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1c4edc;                          // 0x001c4dd8: beq $v0, $v1, 0x1c4edc
    /* nop */                                                   // 0x001c4ddc: nop 
    v1 = -0xfe;                                                 // 0x001c4de0: addiu $v1, $zero, -0xfe
    if (v0 == v1) goto label_0x1c4eb8;                          // 0x001c4de4: beq $v0, $v1, 0x1c4eb8
    v1 = 0xe;                                                   // 0x001c4de8: addiu $v1, $zero, 0xe
    v1 = -0x100;                                                // 0x001c4dec: addiu $v1, $zero, -0x100
    if (v0 == v1) goto label_0x1c4e98;                          // 0x001c4df0: beq $v0, $v1, 0x1c4e98
    v1 = 0x16;                                                  // 0x001c4df4: addiu $v1, $zero, 0x16
    if (v0 == 0) goto label_0x1c4e0c;                           // 0x001c4df8: beqz $v0, 0x1c4e0c
    v1 = 0x15;                                                  // 0x001c4dfc: addiu $v1, $zero, 0x15
    goto label_0x1c4af4;                                        // 0x001c4e00: b 0x1c4af4
    /* nop */                                                   // 0x001c4e04: nop 
    v1 = 0x15;                                                  // 0x001c4e08: addiu $v1, $zero, 0x15
label_0x1c4e0c:
    v0 = 6;                                                     // 0x001c4e0c: addiu $v0, $zero, 6
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c4e10: sw $v1, 0x2c($s0)
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c4e14: sb $v0, 2($s0)
    func_001c0bf0();  // 1c0bf0                                // 0x001c4e18: jal 0x1c0bf0
    *(uint32_t*)((s0) + 0x34) = 0;                              // 0x001c4e1c: sw $zero, 0x34($s0)
    at = 0x31 << 16;                                            // 0x001c4e20: lui $at, 0x31
    v0 = 3;                                                     // 0x001c4e24: addiu $v0, $zero, 3
    g_0031387c = 0;  // Global at 0x0031387c                    // 0x001c4e28: sb $zero, 0x387c($at)
    v1 = *(int32_t*)((s0) + 0x20);                              // 0x001c4e2c: lw $v1, 0x20($s0)
    if (v1 == v0) goto label_0x1c4e44;                          // 0x001c4e30: beq $v1, $v0, 0x1c4e44
    /* nop */                                                   // 0x001c4e34: nop 
    v0 = 2;                                                     // 0x001c4e38: addiu $v0, $zero, 2
    if (v1 != v0) goto label_0x1c4edc;                          // 0x001c4e3c: bne $v1, $v0, 0x1c4edc
    /* nop */                                                   // 0x001c4e40: nop 
label_0x1c4e44:
    func_001afb40();  // 1afb40                                // 0x001c4e44: jal 0x1afb40
    /* nop */                                                   // 0x001c4e48: nop 
    if (v0 != 0) goto label_0x1c4edc;                           // 0x001c4e4c: bnez $v0, 0x1c4edc
    /* nop */                                                   // 0x001c4e50: nop 
    v1 = 7;                                                     // 0x001c4e54: addiu $v1, $zero, 7
    v0 = 0x14;                                                  // 0x001c4e58: addiu $v0, $zero, 0x14
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c4e5c: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c4e60: sw $v0, 0x2c($s0)
    a1 = *(int32_t*)((s0) + 0xe8);                              // 0x001c4e64: lw $a1, 0xe8($s0)
    func_001c0320();  // 1c0320                                // 0x001c4e68: jal 0x1c0320
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c4e6c: lw $a0, 0x24($s0)
    a0 = 1;                                                     // 0x001c4e70: addiu $a0, $zero, 1
    func_001bfcb0();  // 1bfcb0                                // 0x001c4e74: jal 0x1bfcb0
    v0 = 1;                                                     // 0x001c4e7c: addiu $v0, $zero, 1
    func_001c6b00();  // 1c6b00                                // 0x001c4e84: jal 0x1c6b00
    *(uint32_t*)((s0) + 0xf8) = v0;                             // 0x001c4e88: sw $v0, 0xf8($s0)
    goto label_0x1c4ee0;                                        // 0x001c4e8c: b 0x1c4ee0
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c4e90: lw $v0, -0x64d8($gp)
    v1 = 0x16;                                                  // 0x001c4e94: addiu $v1, $zero, 0x16
label_0x1c4e98:
    v0 = 1;                                                     // 0x001c4e98: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c4e9c: sw $v1, 0x2c($s0)
    v1 = *(int8_t*)((s0) + 2);                                  // 0x001c4ea0: lb $v1, 2($s0)
    v1 = v1 + 1;                                                // 0x001c4ea4: addiu $v1, $v1, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c4ea8: sb $v1, 2($s0)
    goto label_0x1c4edc;                                        // 0x001c4eac: b 0x1c4edc
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c4eb0: sw $v0, 0x34($s0)
    v1 = 0xe;                                                   // 0x001c4eb4: addiu $v1, $zero, 0xe
label_0x1c4eb8:
    v0 = 2;                                                     // 0x001c4eb8: addiu $v0, $zero, 2
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c4ebc: sw $v1, 0x2c($s0)
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c4ec0: sb $v0, 2($s0)
    v1 = 1;                                                     // 0x001c4ec4: addiu $v1, $zero, 1
    *(uint32_t*)((s0) + 0x3c) = v1;                             // 0x001c4ec8: sw $v1, 0x3c($s0)
    v0 = 5;                                                     // 0x001c4ecc: addiu $v0, $zero, 5
    *(uint32_t*)((s0) + 0x30) = v1;                             // 0x001c4ed0: sw $v1, 0x30($s0)
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c4ed4: sw $v1, 0x38($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c4ed8: sw $v0, 0x10($s0)
label_0x1c4edc:
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c4edc: lw $v0, -0x64d8($gp)
label_0x1c4ee0:
    goto label_0x1c5080;                                        // 0x001c4ee0: b 0x1c5080
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x001c4ee4: sw $v0, 0x14($s0)
label_0x1c4ee8:
    v0 = *(uint16_t*)((s0) + 0xa);                              // 0x001c4ee8: lhu $v0, 0xa($s0)
    v0 = v0 & 0xfff0;                                           // 0x001c4eec: andi $v0, $v0, 0xfff0
    if (v0 == 0) goto label_0x1c5080;                           // 0x001c4ef0: beqz $v0, 0x1c5080
    /* nop */                                                   // 0x001c4ef4: nop 
    func_001c7460();  // 1c7460                                // 0x001c4ef8: jal 0x1c7460
    /* nop */                                                   // 0x001c4efc: nop 
    goto label_0x1c5084;                                        // 0x001c4f00: b 0x1c5084
label_0x1c4f08:
    func_001c0bc0();  // 1c0bc0                                // 0x001c4f08: jal 0x1c0bc0
    /* nop */                                                   // 0x001c4f0c: nop 
    v1 = -1;                                                    // 0x001c4f10: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1c4fac;                          // 0x001c4f14: beq $v0, $v1, 0x1c4fac
    /* nop */                                                   // 0x001c4f18: nop 
    v1 = -0xfe;                                                 // 0x001c4f1c: addiu $v1, $zero, -0xfe
    if (v0 == v1) goto label_0x1c4f88;                          // 0x001c4f20: beq $v0, $v1, 0x1c4f88
    v1 = 0xe;                                                   // 0x001c4f24: addiu $v1, $zero, 0xe
    v1 = -0x100;                                                // 0x001c4f28: addiu $v1, $zero, -0x100
    if (v0 == v1) goto label_0x1c4f68;                          // 0x001c4f2c: beq $v0, $v1, 0x1c4f68
    /* nop */                                                   // 0x001c4f30: nop 
    if (v0 == 0) goto label_0x1c4f48;                           // 0x001c4f34: beqz $v0, 0x1c4f48
    v1 = 0x15;                                                  // 0x001c4f38: addiu $v1, $zero, 0x15
    goto label_0x1c4af4;                                        // 0x001c4f3c: b 0x1c4af4
    /* nop */                                                   // 0x001c4f40: nop 
    v1 = 0x15;                                                  // 0x001c4f44: addiu $v1, $zero, 0x15
label_0x1c4f48:
    v0 = 6;                                                     // 0x001c4f48: addiu $v0, $zero, 6
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c4f4c: sw $v1, 0x2c($s0)
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c4f50: sb $v0, 2($s0)
    func_001c0bf0();  // 1c0bf0                                // 0x001c4f54: jal 0x1c0bf0
    *(uint32_t*)((s0) + 0x34) = 0;                              // 0x001c4f58: sw $zero, 0x34($s0)
    at = 0x31 << 16;                                            // 0x001c4f5c: lui $at, 0x31
    goto label_0x1c4fac;                                        // 0x001c4f60: b 0x1c4fac
    g_0031387c = 0;  // Global at 0x0031387c                    // 0x001c4f64: sb $zero, 0x387c($at)
label_0x1c4f68:
    v0 = 0x16;                                                  // 0x001c4f68: addiu $v0, $zero, 0x16
    v1 = 6;                                                     // 0x001c4f6c: addiu $v1, $zero, 6
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c4f70: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c4f74: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c4f78: sb $v1, 2($s0)
    goto label_0x1c4fac;                                        // 0x001c4f7c: b 0x1c4fac
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c4f80: sw $v0, 0x34($s0)
    v1 = 0xe;                                                   // 0x001c4f84: addiu $v1, $zero, 0xe
label_0x1c4f88:
    v0 = 2;                                                     // 0x001c4f88: addiu $v0, $zero, 2
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c4f8c: sw $v1, 0x2c($s0)
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c4f90: sb $v0, 2($s0)
    v1 = 1;                                                     // 0x001c4f94: addiu $v1, $zero, 1
    *(uint32_t*)((s0) + 0x3c) = v1;                             // 0x001c4f98: sw $v1, 0x3c($s0)
    v0 = 5;                                                     // 0x001c4f9c: addiu $v0, $zero, 5
    *(uint32_t*)((s0) + 0x30) = v1;                             // 0x001c4fa0: sw $v1, 0x30($s0)
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c4fa4: sw $v1, 0x38($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c4fa8: sw $v0, 0x10($s0)
label_0x1c4fac:
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c4fac: lw $v0, -0x64d8($gp)
    goto label_0x1c5080;                                        // 0x001c4fb0: b 0x1c5080
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x001c4fb4: sw $v0, 0x14($s0)
label_0x1c4fb8:
    func_001c0bc0();  // 1c0bc0                                // 0x001c4fb8: jal 0x1c0bc0
    /* nop */                                                   // 0x001c4fbc: nop 
    v1 = -1;                                                    // 0x001c4fc0: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1c5054;                          // 0x001c4fc4: beq $v0, $v1, 0x1c5054
    /* nop */                                                   // 0x001c4fc8: nop 
    if (v0 == 0) goto label_0x1c5044;                           // 0x001c4fcc: beqz $v0, 0x1c5044
    v1 = -0xfb;                                                 // 0x001c4fd4: addiu $v1, $zero, -0xfb
    if (v0 == v1) goto label_0x1c5000;                          // 0x001c4fd8: beq $v0, $v1, 0x1c5000
    v1 = 1;                                                     // 0x001c4fdc: addiu $v1, $zero, 1
    v1 = -0x100;                                                // 0x001c4fe0: addiu $v1, $zero, -0x100
    if (v0 == v1) goto label_0x1c4ffc;                          // 0x001c4fe4: beq $v0, $v1, 0x1c4ffc
    /* nop */                                                   // 0x001c4fe8: nop 
    v1 = -0xfe;                                                 // 0x001c4fec: addiu $v1, $zero, -0xfe
    if (v0 == v1) goto label_0x1c4ffc;                          // 0x001c4ff0: beq $v0, $v1, 0x1c4ffc
    /* nop */                                                   // 0x001c4ff4: nop 
    v1 = -0xfd;                                                 // 0x001c4ff8: addiu $v1, $zero, -0xfd
label_0x1c4ffc:
    v1 = 1;                                                     // 0x001c4ffc: addiu $v1, $zero, 1
label_0x1c5000:
    v0 = 8;                                                     // 0x001c5000: addiu $v0, $zero, 8
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c5004: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c5008: sw $v0, 0x2c($s0)
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c500c: lw $a0, 0x24($s0)
    a1 = *(int32_t*)((s0) + 0xe8);                              // 0x001c5010: lw $a1, 0xe8($s0)
    func_001bffd0();  // 1bffd0                                // 0x001c5014: jal 0x1bffd0
    func_001c6b00();  // 1c6b00                                // 0x001c5020: jal 0x1c6b00
    *(uint32_t*)((s0) + 0xf8) = 0;                              // 0x001c5024: sw $zero, 0xf8($s0)
    v0 = 1;                                                     // 0x001c5028: addiu $v0, $zero, 1
    func_001c6b00();  // 1c6b00                                // 0x001c5030: jal 0x1c6b00
    *(uint32_t*)((s0) + 0xf8) = v0;                             // 0x001c5034: sw $v0, 0xf8($s0)
    goto label_0x1c5054;                                        // 0x001c5038: b 0x1c5054
    *(uint32_t*)((s0) + 0xf8) = 0;                              // 0x001c503c: sw $zero, 0xf8($s0)
label_0x1c5044:
    func_001c6e20();  // 1c6e20                                // 0x001c5044: jal 0x1c6e20
    /* nop */                                                   // 0x001c5048: nop 
    goto label_0x1c4ffc;                                        // 0x001c504c: b 0x1c4ffc
    /* nop */                                                   // 0x001c5050: nop 
label_0x1c5054:
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c5054: lw $v0, -0x64d8($gp)
    goto label_0x1c5080;                                        // 0x001c5058: b 0x1c5080
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x001c505c: sw $v0, 0x14($s0)
label_0x1c5060:
    v0 = *(uint16_t*)((s0) + 0xa);                              // 0x001c5060: lhu $v0, 0xa($s0)
    v0 = v0 & 0xfff0;                                           // 0x001c5064: andi $v0, $v0, 0xfff0
    if (v0 == 0) goto label_0x1c5080;                           // 0x001c5068: beqz $v0, 0x1c5080
    /* nop */                                                   // 0x001c506c: nop 
    func_001c7460();  // 1c7460                                // 0x001c5070: jal 0x1c7460
    /* nop */                                                   // 0x001c5074: nop 
    goto label_0x1c5084;                                        // 0x001c5078: b 0x1c5084
label_0x1c5080:
    v0 = 1;                                                     // 0x001c5080: addiu $v0, $zero, 1
label_0x1c5084:
label_0x1c5088:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c5088: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c508c: jr $ra
    sp = sp + 0x20;                                             // 0x001c5090: addiu $sp, $sp, 0x20
}