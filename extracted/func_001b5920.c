void func_001b5920() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001b5920: addiu $sp, $sp, -0x20
    at = 0x2b << 16;                                            // 0x001b5924: lui $at, 0x2b
    v0 = g_002ac540;  // Global at 0x002ac540                   // 0x001b5930: lw $v0, -0x3ac0($at)
    s0 = 0x2b << 16;                                            // 0x001b5934: lui $s0, 0x2b
    if (v0 == 0) goto label_0x1b594c;                           // 0x001b5938: beqz $v0, 0x1b594c
    s0 = s0 + -0x3ac0;                                          // 0x001b593c: addiu $s0, $s0, -0x3ac0
    v0 = g_002ac5dc;  // Global at 0x002ac5dc                   // 0x001b5940: lw $v0, 0x9c($s0)
    goto label_0x1b5b00;                                        // 0x001b5944: b 0x1b5b00
    g_002ac590 = v0;  // Global at 0x002ac590                   // 0x001b5948: sw $v0, 0x50($s0)
label_0x1b594c:
    v1 = g_002ac544;  // Global at 0x002ac544                   // 0x001b594c: lw $v1, 4($s0)
    v0 = 7;                                                     // 0x001b5950: addiu $v0, $zero, 7
    if (v1 != v0) goto label_0x1b596c;                          // 0x001b5954: bne $v1, $v0, 0x1b596c
    a0 = 0x5f;                                                  // 0x001b5958: addiu $a0, $zero, 0x5f
    func_001b7490();  // 0x1b7390                                // 0x001b595c: jal 0x1b7390
    /* nop */                                                   // 0x001b5960: nop 
    goto label_0x1b5c50;                                        // 0x001b5964: b 0x1b5c50
label_0x1b596c:
    func_001972e0();  // 0x196050                                // 0x001b596c: jal 0x196050
    a1 = 5;                                                     // 0x001b5970: addiu $a1, $zero, 5
    a0 = 0x60;                                                  // 0x001b5974: addiu $a0, $zero, 0x60
    func_001972e0();  // 0x196050                                // 0x001b5978: jal 0x196050
    a0 = 0x6c;                                                  // 0x001b5980: addiu $a0, $zero, 0x6c
    func_001972e0();  // 0x196050                                // 0x001b5984: jal 0x196050
    at = 0x31 << 16;                                            // 0x001b598c: lui $at, 0x31
    v1 = g_003137b6;  // Global at 0x003137b6                   // 0x001b5990: lbu $v1, 0x37b6($at)
    if (v1 != 0) goto label_0x1b59a8;                           // 0x001b5994: bnez $v1, 0x1b59a8
    at = 0x31 << 16;                                            // 0x001b5998: lui $at, 0x31
    v1 = g_003137ca;  // Global at 0x003137ca                   // 0x001b599c: lbu $v1, 0x37ca($at)
    if (v1 == 0) goto label_0x1b5c4c;                           // 0x001b59a0: beqz $v1, 0x1b5c4c
    /* nop */                                                   // 0x001b59a4: nop 
label_0x1b59a8:
    v0 = g_002ac5c8;  // Global at 0x002ac5c8                   // 0x001b59a8: lw $v0, 0x88($s0)
    if (v0 <= 0) goto label_0x1b5b38;                           // 0x001b59ac: blez $v0, 0x1b5b38
    at = 0x31 << 16;                                            // 0x001b59b0: lui $at, 0x31
    at = 0x31 << 16;                                            // 0x001b59b4: lui $at, 0x31
    v0 = g_003137ca;  // Global at 0x003137ca                   // 0x001b59b8: lbu $v0, 0x37ca($at)
    if (v0 == 0) goto label_0x1b5aac;                           // 0x001b59bc: beqz $v0, 0x1b5aac
    at = 0x29 << 16;                                            // 0x001b59c0: lui $at, 0x29
    s0 = 0x2b << 16;                                            // 0x001b59c4: lui $s0, 0x2b
    v0 = g_0028fcc4;  // Global at 0x0028fcc4                   // 0x001b59c8: lw $v0, -0x33c($at)
    if (v0 != 0) goto label_0x1b59e4;                           // 0x001b59cc: bnez $v0, 0x1b59e4
    s0 = s0 + -0x3b70;                                          // 0x001b59d0: addiu $s0, $s0, -0x3b70
    at = 0x29 << 16;                                            // 0x001b59d4: lui $at, 0x29
    v0 = g_0028fcc8;  // Global at 0x0028fcc8                   // 0x001b59d8: lw $v0, -0x338($at)
    if (v0 == 0) goto label_0x1b59ec;                           // 0x001b59dc: beqz $v0, 0x1b59ec
    /* nop */                                                   // 0x001b59e0: nop 
label_0x1b59e4:
    func_0018d530();  // 0x18d4c0                                // 0x001b59e4: jal 0x18d4c0
    /* nop */                                                   // 0x001b59e8: nop 
label_0x1b59ec:
    func_001b5470();  // 0x1b5400                                // 0x001b59ec: jal 0x1b5400
    /* nop */                                                   // 0x001b59f0: nop 
    at = 0x29 << 16;                                            // 0x001b59f4: lui $at, 0x29
    a1 = -0x41;                                                 // 0x001b59f8: addiu $a1, $zero, -0x41
    t0 = g_0029033c;  // Global at 0x0029033c                   // 0x001b59fc: lw $t0, 0x33c($at)
    v0 = -0x81;                                                 // 0x001b5a04: addiu $v0, $zero, -0x81
    a3 = *(uint8_t*)(t0);                                       // 0x001b5a10: lbu $a3, 0($t0)
    at = 0x29 << 16;                                            // 0x001b5a14: lui $at, 0x29
    a1 = a3 & a1;                                               // 0x001b5a18: and $a1, $a3, $a1
    a1 = a1 | a2;                                               // 0x001b5a1c: or $a1, $a1, $a2
    *(uint8_t*)(t0) = a1;                                       // 0x001b5a20: sb $a1, 0($t0)
    a2 = g_0029033c;  // Global at 0x0029033c                   // 0x001b5a24: lw $a2, 0x33c($at)
    a1 = *(uint8_t*)(a2);                                       // 0x001b5a28: lbu $a1, 0($a2)
    v0 = a1 & v0;                                               // 0x001b5a2c: and $v0, $a1, $v0
    v0 = v0 | v1;                                               // 0x001b5a30: or $v0, $v0, $v1
    iFlushCache();  // 0x114560                                 // 0x001b5a34: jal 0x114560
    *(uint8_t*)(a2) = v0;                                       // 0x001b5a38: sb $v0, 0($a2)
label_0x1b5a3c:
    at = 0x1001 << 16;                                          // 0x001b5a3c: lui $at, 0x1001
    v0 = g_1000a000;  // Global at 0x1000a000                   // 0x001b5a40: lw $v0, -0x6000($at)
    v0 = v0 & 0x100;                                            // 0x001b5a44: andi $v0, $v0, 0x100
    /* nop */                                                   // 0x001b5a48: nop 
    /* nop */                                                   // 0x001b5a4c: nop 
    if (v0 != 0) goto label_0x1b5a3c;                           // 0x001b5a50: bnez $v0, 0x1b5a3c
    /* nop */                                                   // 0x001b5a54: nop 
    v0 = g_002ac4d8;  // Global at 0x002ac4d8                   // 0x001b5a58: lw $v0, 0x48($s0)
    at = 0x29 << 16;                                            // 0x001b5a5c: lui $at, 0x29
    v0 = v0 << 2;                                               // 0x001b5a60: sll $v0, $v0, 2
    v0 = v0 + s0;                                               // 0x001b5a64: addu $v0, $v0, $s0
    a1 = g_f0000039;  // Global at 0xf0000039                   // 0x001b5a68: lw $a1, 0x38($v0)
    func_00103418();  // 0x1033b0                                // 0x001b5a6c: jal 0x1033b0
    a0 = g_0029033c;  // Global at 0x0029033c                   // 0x001b5a70: lw $a0, 0x33c($at)
    v0 = g_002ac4d8;  // Global at 0x002ac4d8                   // 0x001b5a74: lw $v0, 0x48($s0)
    v0 = v0 ^ 1;                                                // 0x001b5a78: xori $v0, $v0, 1
    g_002ac4d8 = v0;  // Global at 0x002ac4d8                   // 0x001b5a7c: sw $v0, 0x48($s0)
    v0 = g_002ac4d8;  // Global at 0x002ac4d8                   // 0x001b5a80: lw $v0, 0x48($s0)
    v0 = v0 << 2;                                               // 0x001b5a84: sll $v0, $v0, 2
    v0 = v0 + s0;                                               // 0x001b5a88: addu $v0, $v0, $s0
    v0 = g_f0000041;  // Global at 0xf0000041                   // 0x001b5a8c: lw $v0, 0x40($v0)
    g_002ac4dc = v0;  // Global at 0x002ac4dc                   // 0x001b5a90: sw $v0, 0x4c($s0)
    v0 = g_002ac4f4;  // Global at 0x002ac4f4                   // 0x001b5a94: lw $v0, 0x64($s0)
    g_002ac4f8 = v0;  // Global at 0x002ac4f8                   // 0x001b5a98: sw $v0, 0x68($s0)
    func_001aefd0();  // 0x1aefc0                                // 0x001b5a9c: jal 0x1aefc0
    g_002ac4f4 = 0;  // Global at 0x002ac4f4                    // 0x001b5aa0: sw $zero, 0x64($s0)
    goto label_0x1b5c4c;                                        // 0x001b5aa4: b 0x1b5c4c
    /* nop */                                                   // 0x001b5aa8: nop 
label_0x1b5aac:
    v0 = g_002ac4f4;  // Global at 0x002ac4f4                   // 0x001b5aac: lw $v0, 0x64($s0)
    if (v0 == 0) goto label_0x1b5b00;                           // 0x001b5ab0: beqz $v0, 0x1b5b00
    /* nop */                                                   // 0x001b5ab4: nop 
    v1 = g_002ac4dc;  // Global at 0x002ac4dc                   // 0x001b5ab8: lw $v1, 0x4c($s0)
    v0 = 0xf000 << 16;                                          // 0x001b5abc: lui $v0, 0xf000
    a1 = 0x29 << 16;                                            // 0x001b5ac0: lui $a1, 0x29
    a1 = a1 + -0x350;                                           // 0x001b5ac4: addiu $a1, $a1, -0x350
    *(uint32_t*)(v1) = v0;                                      // 0x001b5ac8: sw $v0, 0($v1)
    *(uint32_t*)((v1) + 4) = 0;                                 // 0x001b5acc: sw $zero, 4($v1)
    *(uint32_t*)((v1) + 8) = 0;                                 // 0x001b5ad0: sw $zero, 8($v1)
    *(uint32_t*)((v1) + 0xc) = 0;                               // 0x001b5ad4: sw $zero, 0xc($v1)
    v0 = g_002ac4d8;  // Global at 0x002ac4d8                   // 0x001b5ad8: lw $v0, 0x48($s0)
    v0 = v0 << 2;                                               // 0x001b5adc: sll $v0, $v0, 2
    v0 = v0 + s0;                                               // 0x001b5ae0: addu $v0, $v0, $s0
    v0 = g_f0000038;  // Global at 0xf0000038                   // 0x001b5ae4: lw $v0, 0x38($v0)
    func_0018ce40();  // 0x18cd80                                // 0x001b5aec: jal 0x18cd80
    a0 = 0x6c;                                                  // 0x001b5af4: addiu $a0, $zero, 0x6c
    func_001972e0();  // 0x196050                                // 0x001b5af8: jal 0x196050
    a1 = 1;                                                     // 0x001b5afc: addiu $a1, $zero, 1
label_0x1b5b00:
    v0 = g_002ac4d8;  // Global at 0x002ac4d8                   // 0x001b5b00: lw $v0, 0x48($s0)
    v0 = v0 ^ 1;                                                // 0x001b5b04: xori $v0, $v0, 1
    g_002ac4d8 = v0;  // Global at 0x002ac4d8                   // 0x001b5b08: sw $v0, 0x48($s0)
    v0 = g_002ac4d8;  // Global at 0x002ac4d8                   // 0x001b5b0c: lw $v0, 0x48($s0)
    v0 = v0 << 2;                                               // 0x001b5b10: sll $v0, $v0, 2
    v0 = v0 + s0;                                               // 0x001b5b14: addu $v0, $v0, $s0
    v0 = g_f0000040;  // Global at 0xf0000040                   // 0x001b5b18: lw $v0, 0x40($v0)
    g_002ac4dc = v0;  // Global at 0x002ac4dc                   // 0x001b5b1c: sw $v0, 0x4c($s0)
    v0 = g_002ac4f4;  // Global at 0x002ac4f4                   // 0x001b5b20: lw $v0, 0x64($s0)
    g_002ac4f8 = v0;  // Global at 0x002ac4f8                   // 0x001b5b24: sw $v0, 0x68($s0)
    func_001aefd0();  // 0x1aefc0                                // 0x001b5b28: jal 0x1aefc0
    g_002ac4f4 = 0;  // Global at 0x002ac4f4                    // 0x001b5b2c: sw $zero, 0x64($s0)
    goto label_0x1b5c4c;                                        // 0x001b5b30: b 0x1b5c4c
    /* nop */                                                   // 0x001b5b34: nop 
label_0x1b5b38:
    v0 = g_002937ca;  // Global at 0x002937ca                   // 0x001b5b38: lbu $v0, 0x37ca($at)
    if (v0 == 0) goto label_0x1b5c28;                           // 0x001b5b3c: beqz $v0, 0x1b5c28
    /* nop */                                                   // 0x001b5b40: nop 
    at = 0x29 << 16;                                            // 0x001b5b44: lui $at, 0x29
    s0 = 0x2b << 16;                                            // 0x001b5b48: lui $s0, 0x2b
    v0 = g_0028fcc4;  // Global at 0x0028fcc4                   // 0x001b5b4c: lw $v0, -0x33c($at)
    if (v0 != 0) goto label_0x1b5b68;                           // 0x001b5b50: bnez $v0, 0x1b5b68
    s0 = s0 + -0x3b70;                                          // 0x001b5b54: addiu $s0, $s0, -0x3b70
    at = 0x29 << 16;                                            // 0x001b5b58: lui $at, 0x29
    v0 = g_0028fcc8;  // Global at 0x0028fcc8                   // 0x001b5b5c: lw $v0, -0x338($at)
    if (v0 == 0) goto label_0x1b5b70;                           // 0x001b5b60: beqz $v0, 0x1b5b70
    /* nop */                                                   // 0x001b5b64: nop 
label_0x1b5b68:
    func_0018d530();  // 0x18d4c0                                // 0x001b5b68: jal 0x18d4c0
    /* nop */                                                   // 0x001b5b6c: nop 
label_0x1b5b70:
    func_001b5470();  // 0x1b5400                                // 0x001b5b70: jal 0x1b5400
    /* nop */                                                   // 0x001b5b74: nop 
    at = 0x29 << 16;                                            // 0x001b5b78: lui $at, 0x29
    a1 = -0x41;                                                 // 0x001b5b7c: addiu $a1, $zero, -0x41
    t0 = g_0029033c;  // Global at 0x0029033c                   // 0x001b5b80: lw $t0, 0x33c($at)
    v0 = -0x81;                                                 // 0x001b5b88: addiu $v0, $zero, -0x81
    a3 = *(uint8_t*)(t0);                                       // 0x001b5b94: lbu $a3, 0($t0)
    at = 0x29 << 16;                                            // 0x001b5b98: lui $at, 0x29
    a1 = a3 & a1;                                               // 0x001b5b9c: and $a1, $a3, $a1
    a1 = a1 | a2;                                               // 0x001b5ba0: or $a1, $a1, $a2
    *(uint8_t*)(t0) = a1;                                       // 0x001b5ba4: sb $a1, 0($t0)
    a2 = g_0029033c;  // Global at 0x0029033c                   // 0x001b5ba8: lw $a2, 0x33c($at)
    a1 = *(uint8_t*)(a2);                                       // 0x001b5bac: lbu $a1, 0($a2)
    v0 = a1 & v0;                                               // 0x001b5bb0: and $v0, $a1, $v0
    v0 = v0 | v1;                                               // 0x001b5bb4: or $v0, $v0, $v1
    iFlushCache();  // 0x114560                                 // 0x001b5bb8: jal 0x114560
    *(uint8_t*)(a2) = v0;                                       // 0x001b5bbc: sb $v0, 0($a2)
label_0x1b5bc0:
    at = 0x1001 << 16;                                          // 0x001b5bc0: lui $at, 0x1001
    v0 = g_1000a000;  // Global at 0x1000a000                   // 0x001b5bc4: lw $v0, -0x6000($at)
    v0 = v0 & 0x100;                                            // 0x001b5bc8: andi $v0, $v0, 0x100
    /* nop */                                                   // 0x001b5bcc: nop 
    /* nop */                                                   // 0x001b5bd0: nop 
    if (v0 != 0) goto label_0x1b5bc0;                           // 0x001b5bd4: bnez $v0, 0x1b5bc0
    /* nop */                                                   // 0x001b5bd8: nop 
    v0 = g_002ac4d8;  // Global at 0x002ac4d8                   // 0x001b5bdc: lw $v0, 0x48($s0)
    at = 0x29 << 16;                                            // 0x001b5be0: lui $at, 0x29
    v0 = v0 << 2;                                               // 0x001b5be4: sll $v0, $v0, 2
    v0 = v0 + s0;                                               // 0x001b5be8: addu $v0, $v0, $s0
    a1 = g_f0000038;  // Global at 0xf0000038                   // 0x001b5bec: lw $a1, 0x38($v0)
    func_00103418();  // 0x1033b0                                // 0x001b5bf0: jal 0x1033b0
    a0 = g_0029033c;  // Global at 0x0029033c                   // 0x001b5bf4: lw $a0, 0x33c($at)
    v0 = g_002ac4d8;  // Global at 0x002ac4d8                   // 0x001b5bf8: lw $v0, 0x48($s0)
    v0 = v0 ^ 1;                                                // 0x001b5bfc: xori $v0, $v0, 1
    g_002ac4d8 = v0;  // Global at 0x002ac4d8                   // 0x001b5c00: sw $v0, 0x48($s0)
    v0 = g_002ac4d8;  // Global at 0x002ac4d8                   // 0x001b5c04: lw $v0, 0x48($s0)
    v0 = v0 << 2;                                               // 0x001b5c08: sll $v0, $v0, 2
    v0 = v0 + s0;                                               // 0x001b5c0c: addu $v0, $v0, $s0
    v0 = g_f0000040;  // Global at 0xf0000040                   // 0x001b5c10: lw $v0, 0x40($v0)
    g_002ac4dc = v0;  // Global at 0x002ac4dc                   // 0x001b5c14: sw $v0, 0x4c($s0)
    v0 = g_002ac4f4;  // Global at 0x002ac4f4                   // 0x001b5c18: lw $v0, 0x64($s0)
    g_002ac4f8 = v0;  // Global at 0x002ac4f8                   // 0x001b5c1c: sw $v0, 0x68($s0)
    goto label_0x1b5c44;                                        // 0x001b5c20: b 0x1b5c44
    g_002ac4f4 = 0;  // Global at 0x002ac4f4                    // 0x001b5c24: sw $zero, 0x64($s0)
label_0x1b5c28:
    at = 0x2b << 16;                                            // 0x001b5c28: lui $at, 0x2b
    v0 = g_002ac5c8;  // Global at 0x002ac5c8                   // 0x001b5c2c: lw $v0, -0x3a38($at)
    if (v0 != 0) goto label_0x1b5c44;                           // 0x001b5c30: bnez $v0, 0x1b5c44
    /* nop */                                                   // 0x001b5c34: nop 
    v0 = v0 + 1;                                                // 0x001b5c38: addiu $v0, $v0, 1
    at = 0x2b << 16;                                            // 0x001b5c3c: lui $at, 0x2b
    g_002ac5c8 = v0;  // Global at 0x002ac5c8                   // 0x001b5c40: sw $v0, -0x3a38($at)
label_0x1b5c44:
    func_001aefd0();  // 0x1aefc0                                // 0x001b5c44: jal 0x1aefc0
    /* nop */                                                   // 0x001b5c48: nop 
label_0x1b5c4c:
label_0x1b5c50:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b5c50: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b5c54: jr $ra
    sp = sp + 0x20;                                             // 0x001b5c58: addiu $sp, $sp, 0x20
}