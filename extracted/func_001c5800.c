void func_001c5800() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c5800: addiu $sp, $sp, -0x20
    v1 = 0x63;                                                  // 0x001c5804: addiu $v1, $zero, 0x63
    a0 = *(int8_t*)((a0) + 2);                                  // 0x001c5814: lb $a0, 2($a0)
    if (a0 == v1) goto label_0x1c5b5c;                          // 0x001c5818: beq $a0, $v1, 0x1c5b5c
    v0 = 3;                                                     // 0x001c581c: addiu $v0, $zero, 3
    if (a0 == v0) goto label_0x1c5ae4;                          // 0x001c5820: beq $a0, $v0, 0x1c5ae4
    /* nop */                                                   // 0x001c5824: nop 
    v0 = 2;                                                     // 0x001c5828: addiu $v0, $zero, 2
    if (a0 == v0) goto label_0x1c59dc;                          // 0x001c582c: beq $a0, $v0, 0x1c59dc
    a2 = 1;                                                     // 0x001c5830: addiu $a2, $zero, 1
    if (a0 == a2) goto label_0x1c5884;                          // 0x001c5834: beq $a0, $a2, 0x1c5884
    /* nop */                                                   // 0x001c5838: nop 
    if (a0 == 0) goto label_0x1c584c;                           // 0x001c583c: beqz $a0, 0x1c584c
    /* nop */                                                   // 0x001c5840: nop 
    goto label_0x1c5b80;                                        // 0x001c5844: b 0x1c5b80
    v0 = 1;                                                     // 0x001c5848: addiu $v0, $zero, 1
label_0x1c584c:
    v0 = *(int32_t*)((s0) + 0x40);                              // 0x001c584c: lw $v0, 0x40($s0)
    if (v0 != 0) goto label_0x1c5868;                           // 0x001c5850: bnez $v0, 0x1c5868
    /* nop */                                                   // 0x001c5854: nop 
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c5858: sb $v1, 2($s0)
    v0 = 5;                                                     // 0x001c585c: addiu $v0, $zero, 5
    goto label_0x1c5b7c;                                        // 0x001c5860: b 0x1c5b7c
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c5864: sw $v0, 0x34($s0)
label_0x1c5868:
    *(uint8_t*)((s0) + 2) = a2;                                 // 0x001c5868: sb $a2, 2($s0)
    v0 = 8;                                                     // 0x001c586c: addiu $v0, $zero, 8
    *(uint32_t*)((s0) + 0xf8) = 0;                              // 0x001c5870: sw $zero, 0xf8($s0)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c5874: sw $v0, 0x2c($s0)
    a1 = *(int32_t*)((s0) + 0xec);                              // 0x001c5878: lw $a1, 0xec($s0)
    func_001c0090();  // 0x1bffd0                                // 0x001c587c: jal 0x1bffd0
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c5880: lw $a0, 0x24($s0)
label_0x1c5884:
    func_001c0bd0();  // 0x1c0bc0                                // 0x001c5884: jal 0x1c0bc0
    /* nop */                                                   // 0x001c5888: nop 
    v1 = -1;                                                    // 0x001c588c: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1c5b7c;                          // 0x001c5890: beq $v0, $v1, 0x1c5b7c
    /* nop */                                                   // 0x001c5894: nop 
    if (v0 == 0) goto label_0x1c5924;                           // 0x001c5898: beqz $v0, 0x1c5924
    v1 = -0xfb;                                                 // 0x001c58a0: addiu $v1, $zero, -0xfb
    if (v0 == v1) goto label_0x1c5908;                          // 0x001c58a4: beq $v0, $v1, 0x1c5908
    v1 = -0x100;                                                // 0x001c58a8: addiu $v1, $zero, -0x100
    if (v0 == v1) goto label_0x1c58ec;                          // 0x001c58ac: beq $v0, $v1, 0x1c58ec
    /* nop */                                                   // 0x001c58b0: nop 
    v1 = -0xfe;                                                 // 0x001c58b4: addiu $v1, $zero, -0xfe
    if (v0 == v1) goto label_0x1c58d0;                          // 0x001c58b8: beq $v0, $v1, 0x1c58d0
    v1 = -0xfd;                                                 // 0x001c58bc: addiu $v1, $zero, -0xfd
    if (v0 == v1) goto label_0x1c58d0;                          // 0x001c58c0: beq $v0, $v1, 0x1c58d0
    /* nop */                                                   // 0x001c58c4: nop 
    goto label_0x1c5980;                                        // 0x001c58c8: b 0x1c5980
    v1 = v0 & 0xff;                                             // 0x001c58cc: andi $v1, $v0, 0xff
label_0x1c58d0:
    v0 = 0x28;                                                  // 0x001c58d0: addiu $v0, $zero, 0x28
    v1 = 0x63;                                                  // 0x001c58d4: addiu $v1, $zero, 0x63
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c58d8: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c58dc: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c58e0: sb $v1, 2($s0)
    goto label_0x1c5b7c;                                        // 0x001c58e4: b 0x1c5b7c
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c58e8: sw $v0, 0x34($s0)
label_0x1c58ec:
    v0 = 9;                                                     // 0x001c58ec: addiu $v0, $zero, 9
    v1 = 0x63;                                                  // 0x001c58f0: addiu $v1, $zero, 0x63
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c58f4: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c58f8: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c58fc: sb $v1, 2($s0)
    goto label_0x1c5b7c;                                        // 0x001c5900: b 0x1c5b7c
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c5904: sw $v0, 0x34($s0)
label_0x1c5908:
    v0 = 9;                                                     // 0x001c5908: addiu $v0, $zero, 9
    v1 = 0x63;                                                  // 0x001c590c: addiu $v1, $zero, 0x63
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c5910: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c5914: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c5918: sb $v1, 2($s0)
    goto label_0x1c5b7c;                                        // 0x001c591c: b 0x1c5b7c
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c5920: sw $v0, 0x34($s0)
label_0x1c5924:
    func_001c6f90();  // 0x1c6f00                                // 0x001c5924: jal 0x1c6f00
    /* nop */                                                   // 0x001c5928: nop 
    if (v0 != 0) goto label_0x1c5960;                           // 0x001c592c: bnez $v0, 0x1c5960
    v1 = 0x2c;                                                  // 0x001c5930: addiu $v1, $zero, 0x2c
    v0 = 2;                                                     // 0x001c5934: addiu $v0, $zero, 2
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c5938: sw $v1, 0x2c($s0)
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c593c: sb $v0, 2($s0)
    v1 = 1;                                                     // 0x001c5940: addiu $v1, $zero, 1
    *(uint32_t*)((s0) + 0x30) = v1;                             // 0x001c5944: sw $v1, 0x30($s0)
    v0 = 5;                                                     // 0x001c5948: addiu $v0, $zero, 5
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c594c: sw $v1, 0x38($s0)
    func_001bfc60();  // 0x1bfc20                                // 0x001c5950: jal 0x1bfc20
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c5954: sw $v0, 0x10($s0)
    goto label_0x1c5b7c;                                        // 0x001c5958: b 0x1c5b7c
    *(uint32_t*)((s0) + 0xe0) = 0;                              // 0x001c595c: sw $zero, 0xe0($s0)
label_0x1c5960:
    v0 = 0x2a;                                                  // 0x001c5960: addiu $v0, $zero, 0x2a
    v1 = 0x63;                                                  // 0x001c5964: addiu $v1, $zero, 0x63
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c5968: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c596c: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c5970: sb $v1, 2($s0)
    goto label_0x1c5b7c;                                        // 0x001c5974: b 0x1c5b7c
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c5978: sw $v0, 0x34($s0)
label_0x1c597c:
    v1 = v0 & 0xff;                                             // 0x001c597c: andi $v1, $v0, 0xff
label_0x1c5980:
    v0 = 0x63;                                                  // 0x001c5980: addiu $v0, $zero, 0x63
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c5984: sb $v0, 2($s0)
    *(uint32_t*)((s0) + 0x34) = v1;                             // 0x001c5988: sw $v1, 0x34($s0)
    v0 = 3;                                                     // 0x001c598c: addiu $v0, $zero, 3
    v1 = *(int32_t*)((s0) + 0x34);                              // 0x001c5990: lw $v1, 0x34($s0)
    if (v1 == v0) goto label_0x1c59d0;                          // 0x001c5994: beq $v1, $v0, 0x1c59d0
    /* nop */                                                   // 0x001c5998: nop 
    v0 = 4;                                                     // 0x001c599c: addiu $v0, $zero, 4
    if (v1 == v0) goto label_0x1c59d4;                          // 0x001c59a0: beq $v1, $v0, 0x1c59d4
    v0 = 0x28;                                                  // 0x001c59a4: addiu $v0, $zero, 0x28
    v0 = 2;                                                     // 0x001c59a8: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1c59d0;                          // 0x001c59ac: beq $v1, $v0, 0x1c59d0
    v0 = 1;                                                     // 0x001c59b0: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1c59c4;                          // 0x001c59b4: beq $v1, $v0, 0x1c59c4
    /* nop */                                                   // 0x001c59b8: nop 
    goto label_0x1c5b7c;                                        // 0x001c59bc: b 0x1c5b7c
    /* nop */                                                   // 0x001c59c0: nop 
label_0x1c59c4:
    v0 = 0x29;                                                  // 0x001c59c4: addiu $v0, $zero, 0x29
    goto label_0x1c5b7c;                                        // 0x001c59c8: b 0x1c5b7c
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c59cc: sw $v0, 0x2c($s0)
label_0x1c59d0:
    v0 = 0x28;                                                  // 0x001c59d0: addiu $v0, $zero, 0x28
label_0x1c59d4:
    goto label_0x1c5b7c;                                        // 0x001c59d4: b 0x1c5b7c
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c59d8: sw $v0, 0x2c($s0)
label_0x1c59dc:
    func_001c0bf0();  // 0x1c0bd0                                // 0x001c59dc: jal 0x1c0bd0
    if (v0 != 0) goto label_0x1c5a10;                           // 0x001c59e4: bnez $v0, 0x1c5a10
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x001c59ec: sw $zero, 0x30($s0)
    v1 = 1;                                                     // 0x001c59f0: addiu $v1, $zero, 1
    *(uint32_t*)((s0) + 0xe0) = v1;                             // 0x001c59f4: sw $v1, 0xe0($s0)
    v0 = 0x44;                                                  // 0x001c59f8: addiu $v0, $zero, 0x44
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c59fc: sw $v0, 0x2c($s0)
    v0 = 0x63;                                                  // 0x001c5a00: addiu $v0, $zero, 0x63
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c5a04: sb $v0, 2($s0)
    goto label_0x1c5b7c;                                        // 0x001c5a08: b 0x1c5b7c
    *(uint32_t*)((s0) + 0x34) = v1;                             // 0x001c5a0c: sw $v1, 0x34($s0)
label_0x1c5a10:
    func_001c4810();  // 0x1c47c0                                // 0x001c5a10: jal 0x1c47c0
    /* nop */                                                   // 0x001c5a14: nop 
    if (v0 == 0) goto label_0x1c5a74;                           // 0x001c5a18: beqz $v0, 0x1c5a74
    /* nop */                                                   // 0x001c5a1c: nop 
    func_001c7470();  // 0x1c7460                                // 0x001c5a20: jal 0x1c7460
    /* nop */                                                   // 0x001c5a24: nop 
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x001c5a28: sw $zero, 0x30($s0)
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x001c5a2c: lw $v0, 0x38($s0)
    if (v0 != 0) goto label_0x1c5a5c;                           // 0x001c5a30: bnez $v0, 0x1c5a5c
    v0 = 0x45;                                                  // 0x001c5a34: addiu $v0, $zero, 0x45
    v1 = 3;                                                     // 0x001c5a38: addiu $v1, $zero, 3
    v0 = 0x2b;                                                  // 0x001c5a3c: addiu $v0, $zero, 0x2b
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c5a40: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c5a44: sw $v0, 0x2c($s0)
    a1 = *(int32_t*)((s0) + 0xe8);                              // 0x001c5a48: lw $a1, 0xe8($s0)
    func_001c03d0();  // 0x1c0320                                // 0x001c5a4c: jal 0x1c0320
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c5a50: lw $a0, 0x24($s0)
    goto label_0x1c5b7c;                                        // 0x001c5a54: b 0x1c5b7c
    /* nop */                                                   // 0x001c5a58: nop 
label_0x1c5a5c:
    v1 = 0x63;                                                  // 0x001c5a5c: addiu $v1, $zero, 0x63
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c5a60: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c5a64: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c5a68: sb $v1, 2($s0)
    goto label_0x1c5b7c;                                        // 0x001c5a6c: b 0x1c5b7c
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c5a70: sw $v0, 0x34($s0)
label_0x1c5a74:
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x001c5a74: lw $v0, 0x10($s0)
    if (v0 == 0) goto label_0x1c5a8c;                           // 0x001c5a78: beqz $v0, 0x1c5a8c
    /* nop */                                                   // 0x001c5a7c: nop 
    v0 = v0 + -1;                                               // 0x001c5a80: addiu $v0, $v0, -1
    goto label_0x1c5b7c;                                        // 0x001c5a84: b 0x1c5b7c
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c5a88: sw $v0, 0x10($s0)
label_0x1c5a8c:
    v1 = *(uint16_t*)((s0) + 0xa);                              // 0x001c5a8c: lhu $v1, 0xa($s0)
    v0 = v1 & 8;                                                // 0x001c5a90: andi $v0, $v1, 8
    if (v0 == 0) goto label_0x1c5aac;                           // 0x001c5a94: beqz $v0, 0x1c5aac
    v0 = v1 & 4;                                                // 0x001c5a98: andi $v0, $v1, 4
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x001c5a9c: lw $v0, 0x38($s0)
    if (v0 == 0) goto label_0x1c5ac4;                           // 0x001c5aa0: beqz $v0, 0x1c5ac4
    /* nop */                                                   // 0x001c5aa4: nop 
    v0 = v1 & 4;                                                // 0x001c5aa8: andi $v0, $v1, 4
label_0x1c5aac:
    if (v0 == 0) goto label_0x1c5b7c;                           // 0x001c5aac: beqz $v0, 0x1c5b7c
    /* nop */                                                   // 0x001c5ab0: nop 
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c5ab4: lw $v1, 0x38($s0)
    v0 = 1;                                                     // 0x001c5ab8: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1c5b7c;                          // 0x001c5abc: bne $v1, $v0, 0x1c5b7c
    /* nop */                                                   // 0x001c5ac0: nop 
label_0x1c5ac4:
    func_001c7480();  // 0x1c7470                                // 0x001c5ac4: jal 0x1c7470
    /* nop */                                                   // 0x001c5ac8: nop 
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c5acc: lw $v1, 0x38($s0)
    v0 = 5;                                                     // 0x001c5ad0: addiu $v0, $zero, 5
    v1 = v1 ^ 1;                                                // 0x001c5ad4: xori $v1, $v1, 1
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c5ad8: sw $v1, 0x38($s0)
    goto label_0x1c5b7c;                                        // 0x001c5adc: b 0x1c5b7c
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c5ae0: sw $v0, 0x10($s0)
label_0x1c5ae4:
    func_001c0bd0();  // 0x1c0bc0                                // 0x001c5ae4: jal 0x1c0bc0
    /* nop */                                                   // 0x001c5ae8: nop 
    v1 = -1;                                                    // 0x001c5aec: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1c5b50;                          // 0x001c5af0: beq $v0, $v1, 0x1c5b50
    v1 = -0xfe;                                                 // 0x001c5af4: addiu $v1, $zero, -0xfe
    if (v0 == v1) goto label_0x1c5b38;                          // 0x001c5af8: beq $v0, $v1, 0x1c5b38
    /* nop */                                                   // 0x001c5afc: nop 
    v1 = -0x100;                                                // 0x001c5b00: addiu $v1, $zero, -0x100
    if (v0 == v1) goto label_0x1c5b38;                          // 0x001c5b04: beq $v0, $v1, 0x1c5b38
    /* nop */                                                   // 0x001c5b08: nop 
    if (v0 == 0) goto label_0x1c5b1c;                           // 0x001c5b0c: beqz $v0, 0x1c5b1c
    /* nop */                                                   // 0x001c5b10: nop 
    goto label_0x1c597c;                                        // 0x001c5b14: b 0x1c597c
    /* nop */                                                   // 0x001c5b18: nop 
label_0x1c5b1c:
    v0 = 0x15;                                                  // 0x001c5b1c: addiu $v0, $zero, 0x15
    v1 = 0x63;                                                  // 0x001c5b20: addiu $v1, $zero, 0x63
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c5b24: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c5b28: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c5b2c: sb $v1, 2($s0)
    goto label_0x1c5b50;                                        // 0x001c5b30: b 0x1c5b50
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c5b34: sw $v0, 0x34($s0)
label_0x1c5b38:
    v0 = 0x16;                                                  // 0x001c5b38: addiu $v0, $zero, 0x16
    v1 = 0x63;                                                  // 0x001c5b3c: addiu $v1, $zero, 0x63
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c5b40: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c5b44: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c5b48: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c5b4c: sw $v0, 0x34($s0)
label_0x1c5b50:
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c5b50: lw $v0, -0x64d8($gp)
    goto label_0x1c5b7c;                                        // 0x001c5b54: b 0x1c5b7c
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x001c5b58: sw $v0, 0x14($s0)
label_0x1c5b5c:
    v0 = *(uint16_t*)((s0) + 0xa);                              // 0x001c5b5c: lhu $v0, 0xa($s0)
    v0 = v0 & 0xfff0;                                           // 0x001c5b60: andi $v0, $v0, 0xfff0
    if (v0 == 0) goto label_0x1c5b7c;                           // 0x001c5b64: beqz $v0, 0x1c5b7c
    /* nop */                                                   // 0x001c5b68: nop 
    func_001c7470();  // 0x1c7460                                // 0x001c5b6c: jal 0x1c7460
    /* nop */                                                   // 0x001c5b70: nop 
    goto label_0x1c5b80;                                        // 0x001c5b74: b 0x1c5b80
label_0x1c5b7c:
    v0 = 1;                                                     // 0x001c5b7c: addiu $v0, $zero, 1
label_0x1c5b80:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c5b84: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c5b88: jr $ra
    sp = sp + 0x20;                                             // 0x001c5b8c: addiu $sp, $sp, 0x20
}