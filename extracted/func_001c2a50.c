void func_001c2a50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001c2a50: addiu $sp, $sp, -0x30
    at = 0x31 << 16;                                            // 0x001c2a54: lui $at, 0x31
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c2a5c: addu.qb $zero, $sp, $s1
    v0 = g_003137a0;  // Global at 0x003137a0                   // 0x001c2a68: lbu $v0, 0x37a0($at)
    if (v0 == 0) goto label_0x1c2a8c;                           // 0x001c2a6c: beqz $v0, 0x1c2a8c
    at = 0x31 << 16;                                            // 0x001c2a74: lui $at, 0x31
    v0 = 0x1c << 16;                                            // 0x001c2a78: lui $v0, 0x1c
    v1 = g_003137fc;  // Global at 0x003137fc                   // 0x001c2a7c: lw $v1, 0x37fc($at)
    v0 = v1 + v0;                                               // 0x001c2a80: addu $v0, $v1, $v0
    goto label_0x1c2aa4;                                        // 0x001c2a84: b 0x1c2aa4
    *(uint32_t*)((gp) + -0x62dc) = v0;                          // 0x001c2a88: sw $v0, -0x62dc($gp)
label_0x1c2a8c:
    at = 0x31 << 16;                                            // 0x001c2a8c: lui $at, 0x31
    v0 = 0x2b << 16;                                            // 0x001c2a90: lui $v0, 0x2b
    v1 = g_003137fc;  // Global at 0x003137fc                   // 0x001c2a94: lw $v1, 0x37fc($at)
    v0 = v0 | 0xf000;                                           // 0x001c2a98: ori $v0, $v0, 0xf000
    v0 = v1 + v0;                                               // 0x001c2a9c: addu $v0, $v1, $v0
    *(uint32_t*)((gp) + -0x62dc) = v0;                          // 0x001c2aa0: sw $v0, -0x62dc($gp)
label_0x1c2aa4:
    a0 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2aa4: lw $a0, -0x62dc($gp)
    func_00107c70();  // 107c70                                // 0x001c2aac: jal 0x107c70
    a2 = 0xfc;                                                  // 0x001c2ab0: addiu $a2, $zero, 0xfc
    v1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2ab4: lw $v1, -0x62dc($gp)
    a0 = 4 << 16;                                               // 0x001c2ab8: lui $a0, 4
    v0 = 5;                                                     // 0x001c2abc: addiu $v0, $zero, 5
    *(uint32_t*)((v1) + 0xe4) = v1;                             // 0x001c2ac0: sw $v1, 0xe4($v1)
    a1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2ac4: lw $a1, -0x62dc($gp)
    v1 = g_002437d4;  // Global at 0x002437d4                   // 0x001c2ac8: lw $v1, 0xe4($a1)
    v1 = v1 + 0x100;                                            // 0x001c2acc: addiu $v1, $v1, 0x100
    g_002437d8 = v1;  // Global at 0x002437d8                   // 0x001c2ad0: sw $v1, 0xe8($a1)
    a1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2ad4: lw $a1, -0x62dc($gp)
    v1 = g_002437d8;  // Global at 0x002437d8                   // 0x001c2ad8: lw $v1, 0xe8($a1)
    v1 = v1 + a0;                                               // 0x001c2adc: addu $v1, $v1, $a0
    g_002437dc = v1;  // Global at 0x002437dc                   // 0x001c2ae0: sw $v1, 0xec($a1)
    a1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2ae4: lw $a1, -0x62dc($gp)
    v1 = g_002437dc;  // Global at 0x002437dc                   // 0x001c2ae8: lw $v1, 0xec($a1)
    v1 = v1 + a0;                                               // 0x001c2aec: addu $v1, $v1, $a0
    g_002437e0 = v1;  // Global at 0x002437e0                   // 0x001c2af0: sw $v1, 0xf0($a1)
    v1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2af4: lw $v1, -0x62dc($gp)
    *(uint32_t*)((v1) + 0x20) = s1;                             // 0x001c2af8: sw $s1, 0x20($v1)
    v1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2afc: lw $v1, -0x62dc($gp)
    *(uint32_t*)((v1) + 0x1c) = s0;                             // 0x001c2b00: sw $s0, 0x1c($v1)
    v1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2b04: lw $v1, -0x62dc($gp)
    *(uint32_t*)((v1) + 0xf8) = 0;                              // 0x001c2b08: sw $zero, 0xf8($v1)
    v1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2b0c: lw $v1, -0x62dc($gp)
    v1 = *(int32_t*)((v1) + 0x20);                              // 0x001c2b10: lw $v1, 0x20($v1)
    if (v1 == v0) goto label_0x1c2b2c;                          // 0x001c2b14: beq $v1, $v0, 0x1c2b2c
    a0 = 2;                                                     // 0x001c2b18: addiu $a0, $zero, 2
    func_001bfb20();  // 1bfb20  // check func_001bfb20       // 0x001c2b1c: jal 0x1bfb20
    goto label_0x1c2b38;                                        // 0x001c2b24: b 0x1c2b38
    v1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2b28: lw $v1, -0x62dc($gp)
label_0x1c2b2c:
    func_001bfb20();  // 1bfb20    // check func_001bfb20     // 0x001c2b2c: jal 0x1bfb20
    /* nop */                                                   // 0x001c2b30: nop 
    v1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2b34: lw $v1, -0x62dc($gp)
label_0x1c2b38:
    a0 = *(int32_t*)((v1) + 0x20);                              // 0x001c2b38: lw $a0, 0x20($v1)
    at = ((unsigned)a0 < (unsigned)6) ? 1 : 0;                  // 0x001c2b3c: sltiu $at, $a0, 6
    if (at == 0) goto label_0x1c2e08;                           // 0x001c2b40: beqz $at, 0x1c2e08
    a1 = 0x24 << 16;                                            // 0x001c2b44: lui $a1, 0x24
    a0 = a0 << 2;                                               // 0x001c2b48: sll $a0, $a0, 2
    a1 = a1 + 0x3710;                                           // 0x001c2b4c: addiu $a1, $a1, 0x3710
    a0 = a0 + a1;                                               // 0x001c2b50: addu $a0, $a0, $a1
    a0 = g_00040000;  // Global at 0x00040000                   // 0x001c2b54: lw $a0, 0($a0)
    /* jump to address in a0 */                                 // 0x001c2b58: jr $a0
    /* nop */                                                   // 0x001c2b5c: nop 
    a1 = *(int32_t*)((v1) + 0x1c);                              // 0x001c2b60: lw $a1, 0x1c($v1)
    a0 = 4;                                                     // 0x001c2b64: addiu $a0, $zero, 4
    if (a1 == a0) goto label_0x1c2e08;                          // 0x001c2b68: beq $a1, $a0, 0x1c2e08
    a0 = 3;                                                     // 0x001c2b6c: addiu $a0, $zero, 3
    if (a1 == a0) goto label_0x1c2e08;                          // 0x001c2b70: beq $a1, $a0, 0x1c2e08
    /* nop */                                                   // 0x001c2b74: nop 
    a0 = 2;                                                     // 0x001c2b78: addiu $a0, $zero, 2
    if (a1 == a0) goto label_0x1c2bbc;                          // 0x001c2b7c: beq $a1, $a0, 0x1c2bbc
    a0 = 1;                                                     // 0x001c2b80: addiu $a0, $zero, 1
    a0 = 1;                                                     // 0x001c2b84: addiu $a0, $zero, 1
    if (a1 == a0) goto label_0x1c2bb8;                          // 0x001c2b88: beq $a1, $a0, 0x1c2bb8
    /* nop */                                                   // 0x001c2b8c: nop 
    if (a1 == 0) goto label_0x1c2ba0;                           // 0x001c2b90: beqz $a1, 0x1c2ba0
    /* nop */                                                   // 0x001c2b94: nop 
    goto label_0x1c2e0c;                                        // 0x001c2b98: b 0x1c2e0c
label_0x1c2ba0:
    a1 = 0x50;                                                  // 0x001c2ba0: addiu $a1, $zero, 0x50
    a0 = 0x8c;                                                  // 0x001c2ba4: addiu $a0, $zero, 0x8c
    *(uint32_t*)((v1) + 0xd4) = a1;                             // 0x001c2ba8: sw $a1, 0xd4($v1)
    v1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2bac: lw $v1, -0x62dc($gp)
    goto label_0x1c2e08;                                        // 0x001c2bb0: b 0x1c2e08
    *(uint32_t*)((v1) + 0xd8) = a0;                             // 0x001c2bb4: sw $a0, 0xd8($v1)
label_0x1c2bb8:
    a0 = 1;                                                     // 0x001c2bb8: addiu $a0, $zero, 1
label_0x1c2bbc:
    a1 = 0x50;                                                  // 0x001c2bbc: addiu $a1, $zero, 0x50
    *(uint32_t*)((v1) + 0xdc) = a0;                             // 0x001c2bc0: sw $a0, 0xdc($v1)
    v1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2bc4: lw $v1, -0x62dc($gp)
    a0 = 0x8c;                                                  // 0x001c2bc8: addiu $a0, $zero, 0x8c
    *(uint32_t*)((v1) + 0xd4) = a1;                             // 0x001c2bcc: sw $a1, 0xd4($v1)
    v1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2bd0: lw $v1, -0x62dc($gp)
    goto label_0x1c2e08;                                        // 0x001c2bd4: b 0x1c2e08
    *(uint32_t*)((v1) + 0xd8) = a0;                             // 0x001c2bd8: sw $a0, 0xd8($v1)
    a1 = *(int32_t*)((v1) + 0x1c);                              // 0x001c2bdc: lw $a1, 0x1c($v1)
    a0 = 2;                                                     // 0x001c2be0: addiu $a0, $zero, 2
    if (a1 == a0) goto label_0x1c2c20;                          // 0x001c2be4: beq $a1, $a0, 0x1c2c20
    a0 = 1;                                                     // 0x001c2be8: addiu $a0, $zero, 1
    a0 = 1;                                                     // 0x001c2bec: addiu $a0, $zero, 1
    if (a1 == a0) goto label_0x1c2c1c;                          // 0x001c2bf0: beq $a1, $a0, 0x1c2c1c
    a0 = 3;                                                     // 0x001c2bf4: addiu $a0, $zero, 3
    if (a1 == a0) goto label_0x1c2c1c;                          // 0x001c2bf8: beq $a1, $a0, 0x1c2c1c
    /* nop */                                                   // 0x001c2bfc: nop 
    v1 = 4;                                                     // 0x001c2c00: addiu $v1, $zero, 4
    if (a1 == v1) goto label_0x1c2e08;                          // 0x001c2c04: beq $a1, $v1, 0x1c2e08
    /* nop */                                                   // 0x001c2c08: nop 
    if (a1 == 0) goto label_0x1c2e08;                           // 0x001c2c0c: beqz $a1, 0x1c2e08
    /* nop */                                                   // 0x001c2c10: nop 
    goto label_0x1c2e08;                                        // 0x001c2c14: b 0x1c2e08
    /* nop */                                                   // 0x001c2c18: nop 
label_0x1c2c1c:
    a0 = 1;                                                     // 0x001c2c1c: addiu $a0, $zero, 1
label_0x1c2c20:
    a1 = 0x50;                                                  // 0x001c2c20: addiu $a1, $zero, 0x50
    *(uint32_t*)((v1) + 0xdc) = a0;                             // 0x001c2c24: sw $a0, 0xdc($v1)
    v1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2c28: lw $v1, -0x62dc($gp)
    a0 = 0x8c;                                                  // 0x001c2c2c: addiu $a0, $zero, 0x8c
    *(uint32_t*)((v1) + 0xd4) = a1;                             // 0x001c2c30: sw $a1, 0xd4($v1)
    v1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2c34: lw $v1, -0x62dc($gp)
    goto label_0x1c2e08;                                        // 0x001c2c38: b 0x1c2e08
    *(uint32_t*)((v1) + 0xd8) = a0;                             // 0x001c2c3c: sw $a0, 0xd8($v1)
    a0 = *(int32_t*)((v1) + 0x1c);                              // 0x001c2c40: lw $a0, 0x1c($v1)
    at = ((unsigned)a0 < (unsigned)6) ? 1 : 0;                  // 0x001c2c44: sltiu $at, $a0, 6
    if (at == 0) goto label_0x1c2e08;                           // 0x001c2c48: beqz $at, 0x1c2e08
    a1 = 0x24 << 16;                                            // 0x001c2c4c: lui $a1, 0x24
    a0 = a0 << 2;                                               // 0x001c2c50: sll $a0, $a0, 2
    a1 = a1 + 0x36f0;                                           // 0x001c2c54: addiu $a1, $a1, 0x36f0
    a0 = a0 + a1;                                               // 0x001c2c58: addu $a0, $a0, $a1
    a0 = g_00040000;  // Global at 0x00040000                   // 0x001c2c5c: lw $a0, 0($a0)
    /* jump to address in a0 */                                 // 0x001c2c60: jr $a0
    /* nop */                                                   // 0x001c2c64: nop 
    a0 = 1;                                                     // 0x001c2c68: addiu $a0, $zero, 1
    a1 = 0x50;                                                  // 0x001c2c6c: addiu $a1, $zero, 0x50
    *(uint32_t*)((v1) + 0xdc) = a0;                             // 0x001c2c70: sw $a0, 0xdc($v1)
    v1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2c74: lw $v1, -0x62dc($gp)
    a0 = 0x8c;                                                  // 0x001c2c78: addiu $a0, $zero, 0x8c
    *(uint32_t*)((v1) + 0xd4) = a1;                             // 0x001c2c7c: sw $a1, 0xd4($v1)
    v1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2c80: lw $v1, -0x62dc($gp)
    goto label_0x1c2e08;                                        // 0x001c2c84: b 0x1c2e08
    *(uint32_t*)((v1) + 0xd8) = a0;                             // 0x001c2c88: sw $a0, 0xd8($v1)
    a1 = 0x50;                                                  // 0x001c2c8c: addiu $a1, $zero, 0x50
    a0 = 0x8c;                                                  // 0x001c2c90: addiu $a0, $zero, 0x8c
    *(uint32_t*)((v1) + 0xd4) = a1;                             // 0x001c2c94: sw $a1, 0xd4($v1)
    v1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2c98: lw $v1, -0x62dc($gp)
    goto label_0x1c2e08;                                        // 0x001c2c9c: b 0x1c2e08
    *(uint32_t*)((v1) + 0xd8) = a0;                             // 0x001c2ca0: sw $a0, 0xd8($v1)
    a2 = 1;                                                     // 0x001c2ca4: addiu $a2, $zero, 1
    a0 = 4;                                                     // 0x001c2ca8: addiu $a0, $zero, 4
    *(uint32_t*)((v1) + 0xf8) = a2;                             // 0x001c2cac: sw $a2, 0xf8($v1)
    a3 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2cb0: lw $a3, -0x62dc($gp)
    a1 = *(int32_t*)((a3) + 0x1c);                              // 0x001c2cb4: lw $a1, 0x1c($a3)
    if (a1 == a0) goto label_0x1c2d0c;                          // 0x001c2cb8: beq $a1, $a0, 0x1c2d0c
    /* nop */                                                   // 0x001c2cbc: nop 
    v1 = 2;                                                     // 0x001c2cc0: addiu $v1, $zero, 2
    if (a1 == v1) goto label_0x1c2d10;                          // 0x001c2cc4: beq $a1, $v1, 0x1c2d10
    v1 = 1;                                                     // 0x001c2cc8: addiu $v1, $zero, 1
    if (a1 == a2) goto label_0x1c2cec;                          // 0x001c2ccc: beq $a1, $a2, 0x1c2cec
    v1 = 3;                                                     // 0x001c2cd0: addiu $v1, $zero, 3
    if (a1 == v1) goto label_0x1c2e08;                          // 0x001c2cd4: beq $a1, $v1, 0x1c2e08
    /* nop */                                                   // 0x001c2cd8: nop 
    if (a1 == 0) goto label_0x1c2e08;                           // 0x001c2cdc: beqz $a1, 0x1c2e08
    /* nop */                                                   // 0x001c2ce0: nop 
    goto label_0x1c2e08;                                        // 0x001c2ce4: b 0x1c2e08
    /* nop */                                                   // 0x001c2ce8: nop 
label_0x1c2cec:
    *(uint32_t*)((a3) + 0xdc) = a2;                             // 0x001c2cec: sw $a2, 0xdc($a3)
    a1 = 0x50;                                                  // 0x001c2cf0: addiu $a1, $zero, 0x50
    v1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2cf4: lw $v1, -0x62dc($gp)
    a0 = 0x5c;                                                  // 0x001c2cf8: addiu $a0, $zero, 0x5c
    *(uint32_t*)((v1) + 0xd4) = a1;                             // 0x001c2cfc: sw $a1, 0xd4($v1)
    v1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2d00: lw $v1, -0x62dc($gp)
    goto label_0x1c2e08;                                        // 0x001c2d04: b 0x1c2e08
    *(uint32_t*)((v1) + 0xd8) = a0;                             // 0x001c2d08: sw $a0, 0xd8($v1)
label_0x1c2d0c:
    v1 = 1;                                                     // 0x001c2d0c: addiu $v1, $zero, 1
label_0x1c2d10:
    a1 = 0x50;                                                  // 0x001c2d10: addiu $a1, $zero, 0x50
    *(uint32_t*)((a3) + 0xdc) = v1;                             // 0x001c2d14: sw $v1, 0xdc($a3)
    a0 = 0x60;                                                  // 0x001c2d18: addiu $a0, $zero, 0x60
    v1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2d1c: lw $v1, -0x62dc($gp)
    *(uint32_t*)((v1) + 0xd4) = a1;                             // 0x001c2d20: sw $a1, 0xd4($v1)
    v1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2d24: lw $v1, -0x62dc($gp)
    goto label_0x1c2e08;                                        // 0x001c2d28: b 0x1c2e08
    *(uint32_t*)((v1) + 0xd8) = a0;                             // 0x001c2d2c: sw $a0, 0xd8($v1)
    a1 = 2;                                                     // 0x001c2d30: addiu $a1, $zero, 2
    *(uint32_t*)((v1) + 0xf8) = a1;                             // 0x001c2d34: sw $a1, 0xf8($v1)
    a2 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2d38: lw $a2, -0x62dc($gp)
    a0 = *(int32_t*)((a2) + 0x1c);                              // 0x001c2d3c: lw $a0, 0x1c($a2)
    if (a0 == a1) goto label_0x1c2d98;                          // 0x001c2d40: beq $a0, $a1, 0x1c2d98
    /* nop */                                                   // 0x001c2d44: nop 
    v1 = 1;                                                     // 0x001c2d48: addiu $v1, $zero, 1
    if (a0 == v1) goto label_0x1c2d78;                          // 0x001c2d4c: beq $a0, $v1, 0x1c2d78
    /* nop */                                                   // 0x001c2d50: nop 
    v1 = 4;                                                     // 0x001c2d54: addiu $v1, $zero, 4
    if (a0 == v1) goto label_0x1c2e08;                          // 0x001c2d58: beq $a0, $v1, 0x1c2e08
    v1 = 3;                                                     // 0x001c2d5c: addiu $v1, $zero, 3
    if (a0 == v1) goto label_0x1c2e08;                          // 0x001c2d60: beq $a0, $v1, 0x1c2e08
    /* nop */                                                   // 0x001c2d64: nop 
    if (a0 == 0) goto label_0x1c2e08;                           // 0x001c2d68: beqz $a0, 0x1c2e08
    /* nop */                                                   // 0x001c2d6c: nop 
    goto label_0x1c2e08;                                        // 0x001c2d70: b 0x1c2e08
    /* nop */                                                   // 0x001c2d74: nop 
label_0x1c2d78:
    *(uint32_t*)((a2) + 0xdc) = v1;                             // 0x001c2d78: sw $v1, 0xdc($a2)
    a1 = 0x50;                                                  // 0x001c2d7c: addiu $a1, $zero, 0x50
    v1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2d80: lw $v1, -0x62dc($gp)
    a0 = 0x8c;                                                  // 0x001c2d84: addiu $a0, $zero, 0x8c
    *(uint32_t*)((v1) + 0xd4) = a1;                             // 0x001c2d88: sw $a1, 0xd4($v1)
    v1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2d8c: lw $v1, -0x62dc($gp)
    goto label_0x1c2e08;                                        // 0x001c2d90: b 0x1c2e08
    *(uint32_t*)((v1) + 0xd8) = a0;                             // 0x001c2d94: sw $a0, 0xd8($v1)
label_0x1c2d98:
    v1 = 0x50;                                                  // 0x001c2d98: addiu $v1, $zero, 0x50
    a0 = 0x8c;                                                  // 0x001c2d9c: addiu $a0, $zero, 0x8c
    *(uint32_t*)((a2) + 0xd4) = v1;                             // 0x001c2da0: sw $v1, 0xd4($a2)
    at = 0x31 << 16;                                            // 0x001c2da4: lui $at, 0x31
    v1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2da8: lw $v1, -0x62dc($gp)
    *(uint32_t*)((v1) + 0xd8) = a0;                             // 0x001c2dac: sw $a0, 0xd8($v1)
    g_00313890 = 0;  // Global at 0x00313890                    // 0x001c2db0: sw $zero, 0x3890($at)
    at = 0x31 << 16;                                            // 0x001c2db4: lui $at, 0x31
    g_00313894 = 0;  // Global at 0x00313894                    // 0x001c2db8: sw $zero, 0x3894($at)
    at = 0x31 << 16;                                            // 0x001c2dbc: lui $at, 0x31
    goto label_0x1c2e08;                                        // 0x001c2dc0: b 0x1c2e08
    g_00313898 = 0;  // Global at 0x00313898                    // 0x001c2dc4: sw $zero, 0x3898($at)
    *(uint32_t*)((v1) + 0xf8) = 0;                              // 0x001c2dc8: sw $zero, 0xf8($v1)
    a1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2dcc: lw $a1, -0x62dc($gp)
    v1 = 1;                                                     // 0x001c2dd0: addiu $v1, $zero, 1
    a0 = g_0024370c;  // Global at 0x0024370c                   // 0x001c2dd4: lw $a0, 0x1c($a1)
    if (a0 == v1) goto label_0x1c2df4;                          // 0x001c2dd8: beq $a0, $v1, 0x1c2df4
    /* nop */                                                   // 0x001c2ddc: nop 
    v1 = 2;                                                     // 0x001c2de0: addiu $v1, $zero, 2
    if (a0 == v1) goto label_0x1c2df8;                          // 0x001c2de4: beq $a0, $v1, 0x1c2df8
    v1 = 0x50;                                                  // 0x001c2de8: addiu $v1, $zero, 0x50
    goto label_0x1c2e08;                                        // 0x001c2dec: b 0x1c2e08
    /* nop */                                                   // 0x001c2df0: nop 
label_0x1c2df4:
    v1 = 0x50;                                                  // 0x001c2df4: addiu $v1, $zero, 0x50
label_0x1c2df8:
    a0 = 0x8c;                                                  // 0x001c2df8: addiu $a0, $zero, 0x8c
    g_002437c4 = v1;  // Global at 0x002437c4                   // 0x001c2dfc: sw $v1, 0xd4($a1)
    v1 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c2e00: lw $v1, -0x62dc($gp)
    *(uint32_t*)((v1) + 0xd8) = a0;                             // 0x001c2e04: sw $a0, 0xd8($v1)
label_0x1c2e08:
label_0x1c2e0c:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c2e0c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c2e10: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c2e14: jr $ra
    sp = sp + 0x30;                                             // 0x001c2e18: addiu $sp, $sp, 0x30
}