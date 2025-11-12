void func_00197a10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00197a10: addiu $sp, $sp, -0x40
    v0 = 2;                                                     // 0x00197a14: addiu $v0, $zero, 2
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x00197a20: addu.qb $zero, $sp, $s1
    if (s1 == v0) goto label_0x197a48;                          // 0x00197a2c: beq $s1, $v0, 0x197a48
    a0 = 0x30;                                                  // 0x00197a34: addiu $a0, $zero, 0x30
    func_0018dca0();  // 0x18dc30                                // 0x00197a38: jal 0x18dc30
    a1 = 0x10;                                                  // 0x00197a3c: addiu $a1, $zero, 0x10
    goto label_0x197a58;                                        // 0x00197a40: b 0x197a58
    a3 = 2;                                                     // 0x00197a44: addiu $a3, $zero, 2
label_0x197a48:
    a0 = 0x40;                                                  // 0x00197a48: addiu $a0, $zero, 0x40
    func_0018dca0();  // 0x18dc30                                // 0x00197a4c: jal 0x18dc30
    a1 = 0x10;                                                  // 0x00197a50: addiu $a1, $zero, 0x10
    a3 = 3;                                                     // 0x00197a54: addiu $a3, $zero, 3
label_0x197a58:
    a0 = 0x7000 << 16;                                          // 0x00197a58: lui $a0, 0x7000
    v1 = 0x8000 << 16;                                          // 0x00197a5c: lui $v1, 0x8000
    a0 = a3 + a0;                                               // 0x00197a60: addu $a0, $a3, $a0
    a1 = 0x1300 << 16;                                          // 0x00197a64: lui $a1, 0x1300
    a0 = a0 | v1;                                               // 0x00197a68: or $a0, $a0, $v1
    v1 = 0x5000 << 16;                                          // 0x00197a70: lui $v1, 0x5000
    a0 = a3 | v1;                                               // 0x00197a78: or $a0, $a3, $v1
    v1 = a3 + -1;                                               // 0x00197a80: addiu $v1, $a3, -1
    *(uint32_t*)((v0) + 8) = a1;                                // 0x00197a84: sw $a1, 8($v0)
    *(uint32_t*)((v0) + 0xc) = a0;                              // 0x00197a8c: sw $a0, 0xc($v0)
    v1 = 0x1000 << 16;                                          // 0x00197a90: lui $v1, 0x1000
    v1 = 0 | 0x8000;                                            // 0x00197a9c: ori $v1, $zero, 0x8000
    a0 = v1 | a0;                                               // 0x00197aa0: or $a0, $v1, $a0
    a0 = a1 | a0;                                               // 0x00197aa4: or $a0, $a1, $a0
    v1 = 0xe;                                                   // 0x00197aa8: addiu $v1, $zero, 0xe
    a1 = s2 & 0xc00;                                            // 0x00197ab0: andi $a1, $s2, 0xc00
    if (a1 != 0) goto label_0x197d2c;                           // 0x00197ab4: bnez $a1, 0x197d2c
    v1 = s2 & 0xf;                                              // 0x00197abc: andi $v1, $s2, 0xf
    at = ((unsigned)v1 < (unsigned)6) ? 1 : 0;                  // 0x00197ac0: sltiu $at, $v1, 6
    if (at == 0) goto label_0x197d24;                           // 0x00197ac4: beqz $at, 0x197d24
    a0 = 0x23 << 16;                                            // 0x00197ac8: lui $a0, 0x23
    v1 = v1 << 2;                                               // 0x00197acc: sll $v1, $v1, 2
    a0 = a0 + -0x5b60;                                          // 0x00197ad0: addiu $a0, $a0, -0x5b60
    v1 = v1 + a0;                                               // 0x00197ad4: addu $v1, $v1, $a0
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00197ad8: lw $v1, 0($v1)
    /* jump to address in v1 */                                 // 0x00197adc: jr $v1
    /* nop */                                                   // 0x00197ae0: nop 
    a0 = s2 & 0xf0;                                             // 0x00197ae4: andi $a0, $s2, 0xf0
    v1 = 0x50;                                                  // 0x00197ae8: addiu $v1, $zero, 0x50
    if (a0 == v1) goto label_0x197b70;                          // 0x00197aec: beq $a0, $v1, 0x197b70
    s0 = 0x16;                                                  // 0x00197af0: addiu $s0, $zero, 0x16
    v1 = 0x40;                                                  // 0x00197af4: addiu $v1, $zero, 0x40
    if (a0 == v1) goto label_0x197b68;                          // 0x00197af8: beq $a0, $v1, 0x197b68
    s0 = 0x19;                                                  // 0x00197afc: addiu $s0, $zero, 0x19
    v1 = 0x30;                                                  // 0x00197b00: addiu $v1, $zero, 0x30
    if (a0 == v1) goto label_0x197b60;                          // 0x00197b04: beq $a0, $v1, 0x197b60
    s0 = 6;                                                     // 0x00197b08: addiu $s0, $zero, 6
    v1 = 0x20;                                                  // 0x00197b0c: addiu $v1, $zero, 0x20
    if (a0 == v1) goto label_0x197b58;                          // 0x00197b10: beq $a0, $v1, 0x197b58
    s0 = 9;                                                     // 0x00197b14: addiu $s0, $zero, 9
    if (a0 == 0) goto label_0x197b44;                           // 0x00197b18: beqz $a0, 0x197b44
    v1 = 0x10;                                                  // 0x00197b1c: addiu $v1, $zero, 0x10
    if (a0 == v1) goto label_0x197b30;                          // 0x00197b20: beq $a0, $v1, 0x197b30
    /* nop */                                                   // 0x00197b24: nop 
    goto label_0x197b78;                                        // 0x00197b28: b 0x197b78
label_0x197b30:
    a0 = 0x80;                                                  // 0x00197b30: addiu $a0, $zero, 0x80
    v1 = 0x68;                                                  // 0x00197b34: addiu $v1, $zero, 0x68
    goto label_0x198074;                                        // 0x00197b3c: b 0x198074
    s0 = v1 | a0;                                               // 0x00197b40: or $s0, $v1, $a0
label_0x197b44:
    a0 = 0x80;                                                  // 0x00197b44: addiu $a0, $zero, 0x80
    v1 = 0xa8;                                                  // 0x00197b48: addiu $v1, $zero, 0xa8
    goto label_0x198074;                                        // 0x00197b50: b 0x198074
    s0 = v1 | a0;                                               // 0x00197b54: or $s0, $v1, $a0
label_0x197b58:
    goto label_0x198078;                                        // 0x00197b58: b 0x198078
    v1 = 0x100 << 16;                                           // 0x00197b5c: lui $v1, 0x100
label_0x197b60:
    goto label_0x198074;                                        // 0x00197b60: b 0x198074
    /* nop */                                                   // 0x00197b64: nop 
label_0x197b68:
    goto label_0x198074;                                        // 0x00197b68: b 0x198074
    /* nop */                                                   // 0x00197b6c: nop 
label_0x197b70:
    goto label_0x198074;                                        // 0x00197b70: b 0x198074
    /* nop */                                                   // 0x00197b74: nop 
label_0x197b78:
    goto label_0x198114;                                        // 0x00197b78: b 0x198114
    a0 = s2 & 0xf0;                                             // 0x00197b80: andi $a0, $s2, 0xf0
    v1 = 0x50;                                                  // 0x00197b84: addiu $v1, $zero, 0x50
    if (a0 == v1) goto label_0x197c0c;                          // 0x00197b88: beq $a0, $v1, 0x197c0c
    s0 = 0x56;                                                  // 0x00197b8c: addiu $s0, $zero, 0x56
    v1 = 0x40;                                                  // 0x00197b90: addiu $v1, $zero, 0x40
    if (a0 == v1) goto label_0x197c04;                          // 0x00197b94: beq $a0, $v1, 0x197c04
    s0 = 0x99;                                                  // 0x00197b98: addiu $s0, $zero, 0x99
    v1 = 0x30;                                                  // 0x00197b9c: addiu $v1, $zero, 0x30
    if (a0 == v1) goto label_0x197bfc;                          // 0x00197ba0: beq $a0, $v1, 0x197bfc
    s0 = 0x46;                                                  // 0x00197ba4: addiu $s0, $zero, 0x46
    v1 = 0x20;                                                  // 0x00197ba8: addiu $v1, $zero, 0x20
    if (a0 == v1) goto label_0x197bf4;                          // 0x00197bac: beq $a0, $v1, 0x197bf4
    s0 = 0x89;                                                  // 0x00197bb0: addiu $s0, $zero, 0x89
    if (a0 == 0) goto label_0x197be0;                           // 0x00197bb4: beqz $a0, 0x197be0
    v1 = 0x10;                                                  // 0x00197bb8: addiu $v1, $zero, 0x10
    if (a0 == v1) goto label_0x197bcc;                          // 0x00197bbc: beq $a0, $v1, 0x197bcc
    /* nop */                                                   // 0x00197bc0: nop 
    goto label_0x197c14;                                        // 0x00197bc4: b 0x197c14
label_0x197bcc:
    a0 = 0x80;                                                  // 0x00197bcc: addiu $a0, $zero, 0x80
    v1 = 0x6a;                                                  // 0x00197bd0: addiu $v1, $zero, 0x6a
    goto label_0x198074;                                        // 0x00197bd8: b 0x198074
    s0 = v1 | a0;                                               // 0x00197bdc: or $s0, $v1, $a0
label_0x197be0:
    a0 = 0x80;                                                  // 0x00197be0: addiu $a0, $zero, 0x80
    v1 = 0xaa;                                                  // 0x00197be4: addiu $v1, $zero, 0xaa
    goto label_0x198074;                                        // 0x00197bec: b 0x198074
    s0 = v1 | a0;                                               // 0x00197bf0: or $s0, $v1, $a0
label_0x197bf4:
    goto label_0x198074;                                        // 0x00197bf4: b 0x198074
    /* nop */                                                   // 0x00197bf8: nop 
label_0x197bfc:
    goto label_0x198074;                                        // 0x00197bfc: b 0x198074
    /* nop */                                                   // 0x00197c00: nop 
label_0x197c04:
    goto label_0x198074;                                        // 0x00197c04: b 0x198074
    /* nop */                                                   // 0x00197c08: nop 
label_0x197c0c:
    goto label_0x198074;                                        // 0x00197c0c: b 0x198074
    /* nop */                                                   // 0x00197c10: nop 
label_0x197c14:
    goto label_0x198110;                                        // 0x00197c14: b 0x198110
    /* nop */                                                   // 0x00197c18: nop 
    a0 = s2 & 0xf0;                                             // 0x00197c1c: andi $a0, $s2, 0xf0
    v1 = 0x30;                                                  // 0x00197c20: addiu $v1, $zero, 0x30
    if (a0 == v1) goto label_0x197c58;                          // 0x00197c24: beq $a0, $v1, 0x197c58
    s0 = 0x44;                                                  // 0x00197c28: addiu $s0, $zero, 0x44
    if (a0 == 0) goto label_0x197c50;                           // 0x00197c2c: beqz $a0, 0x197c50
    s0 = 0x88;                                                  // 0x00197c30: addiu $s0, $zero, 0x88
    v1 = 0x10;                                                  // 0x00197c34: addiu $v1, $zero, 0x10
    if (a0 == v1) goto label_0x197c48;                          // 0x00197c38: beq $a0, $v1, 0x197c48
    s0 = 0x48;                                                  // 0x00197c3c: addiu $s0, $zero, 0x48
    goto label_0x197c60;                                        // 0x00197c40: b 0x197c60
label_0x197c48:
    goto label_0x198074;                                        // 0x00197c48: b 0x198074
    /* nop */                                                   // 0x00197c4c: nop 
label_0x197c50:
    goto label_0x198074;                                        // 0x00197c50: b 0x198074
    /* nop */                                                   // 0x00197c54: nop 
label_0x197c58:
    goto label_0x198074;                                        // 0x00197c58: b 0x198074
    /* nop */                                                   // 0x00197c5c: nop 
label_0x197c60:
    goto label_0x198110;                                        // 0x00197c60: b 0x198110
    /* nop */                                                   // 0x00197c64: nop 
    a0 = s2 & 0xf0;                                             // 0x00197c68: andi $a0, $s2, 0xf0
    v1 = 0x20;                                                  // 0x00197c6c: addiu $v1, $zero, 0x20
    if (a0 == v1) goto label_0x197c90;                          // 0x00197c70: beq $a0, $v1, 0x197c90
    s0 = 1;                                                     // 0x00197c74: addiu $s0, $zero, 1
    if (a0 == 0) goto label_0x197c88;                           // 0x00197c78: beqz $a0, 0x197c88
    s0 = 2;                                                     // 0x00197c7c: addiu $s0, $zero, 2
    goto label_0x197c98;                                        // 0x00197c80: b 0x197c98
label_0x197c88:
    goto label_0x198074;                                        // 0x00197c88: b 0x198074
    /* nop */                                                   // 0x00197c8c: nop 
label_0x197c90:
    goto label_0x198074;                                        // 0x00197c90: b 0x198074
    /* nop */                                                   // 0x00197c94: nop 
label_0x197c98:
    goto label_0x198110;                                        // 0x00197c98: b 0x198110
    /* nop */                                                   // 0x00197c9c: nop 
    a0 = s2 & 0xf0;                                             // 0x00197ca0: andi $a0, $s2, 0xf0
    v1 = 0x50;                                                  // 0x00197ca4: addiu $v1, $zero, 0x50
    if (a0 == v1) goto label_0x197cdc;                          // 0x00197ca8: beq $a0, $v1, 0x197cdc
    s0 = 0x54;                                                  // 0x00197cac: addiu $s0, $zero, 0x54
    if (a0 == 0) goto label_0x197cd4;                           // 0x00197cb0: beqz $a0, 0x197cd4
    s0 = 0x98;                                                  // 0x00197cb4: addiu $s0, $zero, 0x98
    v1 = 0x10;                                                  // 0x00197cb8: addiu $v1, $zero, 0x10
    if (a0 == v1) goto label_0x197ccc;                          // 0x00197cbc: beq $a0, $v1, 0x197ccc
    s0 = 0x58;                                                  // 0x00197cc0: addiu $s0, $zero, 0x58
    goto label_0x197ce4;                                        // 0x00197cc4: b 0x197ce4
label_0x197ccc:
    goto label_0x198074;                                        // 0x00197ccc: b 0x198074
    /* nop */                                                   // 0x00197cd0: nop 
label_0x197cd4:
    goto label_0x198074;                                        // 0x00197cd4: b 0x198074
    /* nop */                                                   // 0x00197cd8: nop 
label_0x197cdc:
    goto label_0x198074;                                        // 0x00197cdc: b 0x198074
    /* nop */                                                   // 0x00197ce0: nop 
label_0x197ce4:
    goto label_0x198110;                                        // 0x00197ce4: b 0x198110
    /* nop */                                                   // 0x00197ce8: nop 
    a0 = s2 & 0xf0;                                             // 0x00197cec: andi $a0, $s2, 0xf0
    v1 = 0x40;                                                  // 0x00197cf0: addiu $v1, $zero, 0x40
    if (a0 == v1) goto label_0x197d14;                          // 0x00197cf4: beq $a0, $v1, 0x197d14
    s0 = 0x11;                                                  // 0x00197cf8: addiu $s0, $zero, 0x11
    if (a0 == 0) goto label_0x197d0c;                           // 0x00197cfc: beqz $a0, 0x197d0c
    s0 = 0x12;                                                  // 0x00197d00: addiu $s0, $zero, 0x12
    goto label_0x197d1c;                                        // 0x00197d04: b 0x197d1c
label_0x197d0c:
    goto label_0x198074;                                        // 0x00197d0c: b 0x198074
    /* nop */                                                   // 0x00197d10: nop 
label_0x197d14:
    goto label_0x198074;                                        // 0x00197d14: b 0x198074
    /* nop */                                                   // 0x00197d18: nop 
label_0x197d1c:
    goto label_0x198110;                                        // 0x00197d1c: b 0x198110
    /* nop */                                                   // 0x00197d20: nop 
label_0x197d24:
    goto label_0x198110;                                        // 0x00197d24: b 0x198110
label_0x197d2c:
    v1 = 0x400;                                                 // 0x00197d2c: addiu $v1, $zero, 0x400
    if (a1 != v1) goto label_0x197ee0;                          // 0x00197d30: bne $a1, $v1, 0x197ee0
    v1 = 0x800;                                                 // 0x00197d34: addiu $v1, $zero, 0x800
    v1 = s2 & 0xf;                                              // 0x00197d38: andi $v1, $s2, 0xf
    at = ((unsigned)v1 < (unsigned)6) ? 1 : 0;                  // 0x00197d3c: sltiu $at, $v1, 6
    if (at == 0) goto label_0x197ed8;                           // 0x00197d40: beqz $at, 0x197ed8
    a0 = 0x23 << 16;                                            // 0x00197d44: lui $a0, 0x23
    v1 = v1 << 2;                                               // 0x00197d48: sll $v1, $v1, 2
    a0 = a0 + -0x5b80;                                          // 0x00197d4c: addiu $a0, $a0, -0x5b80
    v1 = v1 + a0;                                               // 0x00197d50: addu $v1, $v1, $a0
    v1 = g_01000000;  // Global at 0x01000000                   // 0x00197d54: lw $v1, 0($v1)
    /* jump to address in v1 */                                 // 0x00197d58: jr $v1
    /* nop */                                                   // 0x00197d5c: nop 
    a0 = s2 & 0xf0;                                             // 0x00197d60: andi $a0, $s2, 0xf0
    if (a0 == 0) goto label_0x197d90;                           // 0x00197d64: beqz $a0, 0x197d90
    v1 = 0x10;                                                  // 0x00197d68: addiu $v1, $zero, 0x10
    if (a0 == v1) goto label_0x197d7c;                          // 0x00197d6c: beq $a0, $v1, 0x197d7c
    /* nop */                                                   // 0x00197d70: nop 
    goto label_0x197da4;                                        // 0x00197d74: b 0x197da4
label_0x197d7c:
    a0 = 0x80;                                                  // 0x00197d7c: addiu $a0, $zero, 0x80
    v1 = 0xa4;                                                  // 0x00197d80: addiu $v1, $zero, 0xa4
    goto label_0x198074;                                        // 0x00197d88: b 0x198074
    s0 = v1 | a0;                                               // 0x00197d8c: or $s0, $v1, $a0
label_0x197d90:
    a0 = 0x80;                                                  // 0x00197d90: addiu $a0, $zero, 0x80
    v1 = 0x2a;                                                  // 0x00197d94: addiu $v1, $zero, 0x2a
    goto label_0x198074;                                        // 0x00197d9c: b 0x198074
    s0 = v1 | a0;                                               // 0x00197da0: or $s0, $v1, $a0
label_0x197da4:
    goto label_0x198110;                                        // 0x00197da4: b 0x198110
    /* nop */                                                   // 0x00197da8: nop 
    a0 = s2 & 0xf0;                                             // 0x00197dac: andi $a0, $s2, 0xf0
    v1 = 0x40;                                                  // 0x00197db0: addiu $v1, $zero, 0x40
    if (a0 == v1) goto label_0x197e10;                          // 0x00197db4: beq $a0, $v1, 0x197e10
    s0 = 0x96;                                                  // 0x00197db8: addiu $s0, $zero, 0x96
    v1 = 0x20;                                                  // 0x00197dbc: addiu $v1, $zero, 0x20
    if (a0 == v1) goto label_0x197e08;                          // 0x00197dc0: beq $a0, $v1, 0x197e08
    s0 = 0x86;                                                  // 0x00197dc4: addiu $s0, $zero, 0x86
    if (a0 == 0) goto label_0x197df4;                           // 0x00197dc8: beqz $a0, 0x197df4
    v1 = 0x10;                                                  // 0x00197dcc: addiu $v1, $zero, 0x10
    if (a0 == v1) goto label_0x197de0;                          // 0x00197dd0: beq $a0, $v1, 0x197de0
    /* nop */                                                   // 0x00197dd4: nop 
    goto label_0x197e18;                                        // 0x00197dd8: b 0x197e18
label_0x197de0:
    a0 = 0x80;                                                  // 0x00197de0: addiu $a0, $zero, 0x80
    v1 = 0xa6;                                                  // 0x00197de4: addiu $v1, $zero, 0xa6
    goto label_0x198074;                                        // 0x00197dec: b 0x198074
    s0 = v1 | a0;                                               // 0x00197df0: or $s0, $v1, $a0
label_0x197df4:
    a0 = 0x80;                                                  // 0x00197df4: addiu $a0, $zero, 0x80
    v1 = 0xaa;                                                  // 0x00197df8: addiu $v1, $zero, 0xaa
    goto label_0x198074;                                        // 0x00197e00: b 0x198074
    s0 = v1 | a0;                                               // 0x00197e04: or $s0, $v1, $a0
label_0x197e08:
    goto label_0x198074;                                        // 0x00197e08: b 0x198074
    /* nop */                                                   // 0x00197e0c: nop 
label_0x197e10:
    goto label_0x198074;                                        // 0x00197e10: b 0x198074
    /* nop */                                                   // 0x00197e14: nop 
label_0x197e18:
    goto label_0x198110;                                        // 0x00197e18: b 0x198110
    /* nop */                                                   // 0x00197e1c: nop 
    a0 = s2 & 0xf0;                                             // 0x00197e20: andi $a0, $s2, 0xf0
    v1 = 0x20;                                                  // 0x00197e24: addiu $v1, $zero, 0x20
    if (a0 == v1) goto label_0x197e48;                          // 0x00197e28: beq $a0, $v1, 0x197e48
    s0 = 0x84;                                                  // 0x00197e2c: addiu $s0, $zero, 0x84
    if (a0 == 0) goto label_0x197e40;                           // 0x00197e30: beqz $a0, 0x197e40
    s0 = 0x88;                                                  // 0x00197e34: addiu $s0, $zero, 0x88
    goto label_0x197e50;                                        // 0x00197e38: b 0x197e50
label_0x197e40:
    goto label_0x198074;                                        // 0x00197e40: b 0x198074
    /* nop */                                                   // 0x00197e44: nop 
label_0x197e48:
    goto label_0x198074;                                        // 0x00197e48: b 0x198074
    /* nop */                                                   // 0x00197e4c: nop 
label_0x197e50:
    goto label_0x198110;                                        // 0x00197e50: b 0x198110
    /* nop */                                                   // 0x00197e54: nop 
    v1 = s2 & 0xf0;                                             // 0x00197e58: andi $v1, $s2, 0xf0
    if (v1 == 0) goto label_0x197e6c;                           // 0x00197e5c: beqz $v1, 0x197e6c
    s0 = 2;                                                     // 0x00197e60: addiu $s0, $zero, 2
    goto label_0x197e74;                                        // 0x00197e64: b 0x197e74
label_0x197e6c:
    goto label_0x198074;                                        // 0x00197e6c: b 0x198074
    /* nop */                                                   // 0x00197e70: nop 
label_0x197e74:
    goto label_0x198110;                                        // 0x00197e74: b 0x198110
    /* nop */                                                   // 0x00197e78: nop 
    a0 = s2 & 0xf0;                                             // 0x00197e7c: andi $a0, $s2, 0xf0
    v1 = 0x40;                                                  // 0x00197e80: addiu $v1, $zero, 0x40
    if (a0 == v1) goto label_0x197ea4;                          // 0x00197e84: beq $a0, $v1, 0x197ea4
    s0 = 0x94;                                                  // 0x00197e88: addiu $s0, $zero, 0x94
    if (a0 == 0) goto label_0x197e9c;                           // 0x00197e8c: beqz $a0, 0x197e9c
    s0 = 0x98;                                                  // 0x00197e90: addiu $s0, $zero, 0x98
    goto label_0x197eac;                                        // 0x00197e94: b 0x197eac
label_0x197e9c:
    goto label_0x198074;                                        // 0x00197e9c: b 0x198074
    /* nop */                                                   // 0x00197ea0: nop 
label_0x197ea4:
    goto label_0x198074;                                        // 0x00197ea4: b 0x198074
    /* nop */                                                   // 0x00197ea8: nop 
label_0x197eac:
    goto label_0x198110;                                        // 0x00197eac: b 0x198110
    /* nop */                                                   // 0x00197eb0: nop 
    v1 = s2 & 0xf0;                                             // 0x00197eb4: andi $v1, $s2, 0xf0
    if (v1 == 0) goto label_0x197ec8;                           // 0x00197eb8: beqz $v1, 0x197ec8
    s0 = 0x56;                                                  // 0x00197ebc: addiu $s0, $zero, 0x56
    goto label_0x197ed0;                                        // 0x00197ec0: b 0x197ed0
label_0x197ec8:
    goto label_0x198074;                                        // 0x00197ec8: b 0x198074
    /* nop */                                                   // 0x00197ecc: nop 
label_0x197ed0:
    goto label_0x198110;                                        // 0x00197ed0: b 0x198110
    /* nop */                                                   // 0x00197ed4: nop 
label_0x197ed8:
    goto label_0x198110;                                        // 0x00197ed8: b 0x198110
label_0x197ee0:
    if (a1 != v1) goto label_0x198074;                          // 0x00197ee0: bne $a1, $v1, 0x198074
    a0 = s2 & 0xf;                                              // 0x00197ee4: andi $a0, $s2, 0xf
    v1 = 4;                                                     // 0x00197ee8: addiu $v1, $zero, 4
    if (a0 == v1) goto label_0x198034;                          // 0x00197eec: beq $a0, $v1, 0x198034
    v1 = 2;                                                     // 0x00197ef0: addiu $v1, $zero, 2
    if (a0 == v1) goto label_0x197ffc;                          // 0x00197ef4: beq $a0, $v1, 0x197ffc
    /* nop */                                                   // 0x00197ef8: nop 
    if (a0 == 0) goto label_0x197f60;                           // 0x00197efc: beqz $a0, 0x197f60
    v1 = 1;                                                     // 0x00197f00: addiu $v1, $zero, 1
    if (a0 == v1) goto label_0x197f14;                          // 0x00197f04: beq $a0, $v1, 0x197f14
    /* nop */                                                   // 0x00197f08: nop 
    goto label_0x19806c;                                        // 0x00197f0c: b 0x19806c
label_0x197f14:
    a0 = s2 & 0xf0;                                             // 0x00197f14: andi $a0, $s2, 0xf0
    if (a0 == 0) goto label_0x197f44;                           // 0x00197f18: beqz $a0, 0x197f44
    v1 = 0x10;                                                  // 0x00197f1c: addiu $v1, $zero, 0x10
    if (a0 == v1) goto label_0x197f30;                          // 0x00197f20: beq $a0, $v1, 0x197f30
    /* nop */                                                   // 0x00197f24: nop 
    goto label_0x197f58;                                        // 0x00197f28: b 0x197f58
label_0x197f30:
    a0 = 0x80;                                                  // 0x00197f30: addiu $a0, $zero, 0x80
    v1 = 0xa1;                                                  // 0x00197f34: addiu $v1, $zero, 0xa1
    goto label_0x198074;                                        // 0x00197f3c: b 0x198074
    s0 = v1 | a0;                                               // 0x00197f40: or $s0, $v1, $a0
label_0x197f44:
    a0 = 0x80;                                                  // 0x00197f44: addiu $a0, $zero, 0x80
    v1 = 0xa2;                                                  // 0x00197f48: addiu $v1, $zero, 0xa2
    goto label_0x198074;                                        // 0x00197f50: b 0x198074
    s0 = v1 | a0;                                               // 0x00197f54: or $s0, $v1, $a0
label_0x197f58:
    goto label_0x198110;                                        // 0x00197f58: b 0x198110
    /* nop */                                                   // 0x00197f5c: nop 
label_0x197f60:
    a0 = s2 & 0xf0;                                             // 0x00197f60: andi $a0, $s2, 0xf0
    v1 = 0x50;                                                  // 0x00197f64: addiu $v1, $zero, 0x50
    if (a0 == v1) goto label_0x197fec;                          // 0x00197f68: beq $a0, $v1, 0x197fec
    s0 = 0x56;                                                  // 0x00197f6c: addiu $s0, $zero, 0x56
    v1 = 0x40;                                                  // 0x00197f70: addiu $v1, $zero, 0x40
    if (a0 == v1) goto label_0x197fe4;                          // 0x00197f74: beq $a0, $v1, 0x197fe4
    s0 = 0x99;                                                  // 0x00197f78: addiu $s0, $zero, 0x99
    v1 = 0x30;                                                  // 0x00197f7c: addiu $v1, $zero, 0x30
    if (a0 == v1) goto label_0x197fdc;                          // 0x00197f80: beq $a0, $v1, 0x197fdc
    s0 = 0x46;                                                  // 0x00197f84: addiu $s0, $zero, 0x46
    v1 = 0x20;                                                  // 0x00197f88: addiu $v1, $zero, 0x20
    if (a0 == v1) goto label_0x197fd4;                          // 0x00197f8c: beq $a0, $v1, 0x197fd4
    s0 = 0x89;                                                  // 0x00197f90: addiu $s0, $zero, 0x89
    if (a0 == 0) goto label_0x197fc0;                           // 0x00197f94: beqz $a0, 0x197fc0
    v1 = 0x10;                                                  // 0x00197f98: addiu $v1, $zero, 0x10
    if (a0 == v1) goto label_0x197fac;                          // 0x00197f9c: beq $a0, $v1, 0x197fac
    /* nop */                                                   // 0x00197fa0: nop 
    goto label_0x197ff4;                                        // 0x00197fa4: b 0x197ff4
label_0x197fac:
    a0 = 0x80;                                                  // 0x00197fac: addiu $a0, $zero, 0x80
    v1 = 0xa9;                                                  // 0x00197fb0: addiu $v1, $zero, 0xa9
    goto label_0x198074;                                        // 0x00197fb8: b 0x198074
    s0 = v1 | a0;                                               // 0x00197fbc: or $s0, $v1, $a0
label_0x197fc0:
    a0 = 0x80;                                                  // 0x00197fc0: addiu $a0, $zero, 0x80
    v1 = 0xaa;                                                  // 0x00197fc4: addiu $v1, $zero, 0xaa
    goto label_0x198074;                                        // 0x00197fcc: b 0x198074
    s0 = v1 | a0;                                               // 0x00197fd0: or $s0, $v1, $a0
label_0x197fd4:
    goto label_0x198074;                                        // 0x00197fd4: b 0x198074
    /* nop */                                                   // 0x00197fd8: nop 
label_0x197fdc:
    goto label_0x198074;                                        // 0x00197fdc: b 0x198074
    /* nop */                                                   // 0x00197fe0: nop 
label_0x197fe4:
    goto label_0x198074;                                        // 0x00197fe4: b 0x198074
    /* nop */                                                   // 0x00197fe8: nop 
label_0x197fec:
    goto label_0x198074;                                        // 0x00197fec: b 0x198074
    /* nop */                                                   // 0x00197ff0: nop 
label_0x197ff4:
    goto label_0x198110;                                        // 0x00197ff4: b 0x198110
    /* nop */                                                   // 0x00197ff8: nop 
label_0x197ffc:
    a0 = s2 & 0xf0;                                             // 0x00197ffc: andi $a0, $s2, 0xf0
    v1 = 0x20;                                                  // 0x00198000: addiu $v1, $zero, 0x20
    if (a0 == v1) goto label_0x198024;                          // 0x00198004: beq $a0, $v1, 0x198024
    s0 = 0x81;                                                  // 0x00198008: addiu $s0, $zero, 0x81
    if (a0 == 0) goto label_0x19801c;                           // 0x0019800c: beqz $a0, 0x19801c
    s0 = 0x82;                                                  // 0x00198010: addiu $s0, $zero, 0x82
    goto label_0x19802c;                                        // 0x00198014: b 0x19802c
label_0x19801c:
    goto label_0x198074;                                        // 0x0019801c: b 0x198074
    /* nop */                                                   // 0x00198020: nop 
label_0x198024:
    goto label_0x198074;                                        // 0x00198024: b 0x198074
    /* nop */                                                   // 0x00198028: nop 
label_0x19802c:
    goto label_0x198110;                                        // 0x0019802c: b 0x198110
    /* nop */                                                   // 0x00198030: nop 
label_0x198034:
    a0 = s2 & 0xf0;                                             // 0x00198034: andi $a0, $s2, 0xf0
    v1 = 0x40;                                                  // 0x00198038: addiu $v1, $zero, 0x40
    if (a0 == v1) goto label_0x19805c;                          // 0x0019803c: beq $a0, $v1, 0x19805c
    s0 = 0x91;                                                  // 0x00198040: addiu $s0, $zero, 0x91
    if (a0 == 0) goto label_0x198054;                           // 0x00198044: beqz $a0, 0x198054
    s0 = 0x92;                                                  // 0x00198048: addiu $s0, $zero, 0x92
    goto label_0x198064;                                        // 0x0019804c: b 0x198064
label_0x198054:
    goto label_0x198074;                                        // 0x00198054: b 0x198074
    /* nop */                                                   // 0x00198058: nop 
label_0x19805c:
    goto label_0x198074;                                        // 0x0019805c: b 0x198074
    /* nop */                                                   // 0x00198060: nop 
label_0x198064:
    goto label_0x198110;                                        // 0x00198064: b 0x198110
    /* nop */                                                   // 0x00198068: nop 
label_0x19806c:
    goto label_0x198110;                                        // 0x0019806c: b 0x198110
    /* nop */                                                   // 0x00198070: nop 
label_0x198074:
    v1 = 0x100 << 16;                                           // 0x00198074: lui $v1, 0x100
label_0x198078:
    v1 = s2 & v1;                                               // 0x00198078: and $v1, $s2, $v1
    if (v1 != 0) goto label_0x198098;                           // 0x0019807c: bnez $v1, 0x198098
    v1 = 2;                                                     // 0x00198080: addiu $v1, $zero, 2
    a0 = 0x80;                                                  // 0x00198084: addiu $a0, $zero, 0x80
    v1 = 0xa8;                                                  // 0x00198088: addiu $v1, $zero, 0xa8
    s0 = v1 | a0;                                               // 0x00198090: or $s0, $v1, $a0
    v1 = 2;                                                     // 0x00198094: addiu $v1, $zero, 2
label_0x198098:
    if (s1 == v1) goto label_0x1980d8;                          // 0x00198098: beq $s1, $v1, 0x1980d8
    v1 = 1;                                                     // 0x0019809c: addiu $v1, $zero, 1
    if (s1 == v1) goto label_0x1980c8;                          // 0x001980a0: beq $s1, $v1, 0x1980c8
    /* nop */                                                   // 0x001980a4: nop 
    if (s1 == 0) goto label_0x1980b8;                           // 0x001980a8: beqz $s1, 0x1980b8
    /* nop */                                                   // 0x001980ac: nop 
    goto label_0x1980f4;                                        // 0x001980b0: b 0x1980f4
label_0x1980b8:
    v1 = 0x42;                                                  // 0x001980bc: addiu $v1, $zero, 0x42
    goto label_0x1980f0;                                        // 0x001980c0: b 0x1980f0
label_0x1980c8:
    v1 = 0x43;                                                  // 0x001980cc: addiu $v1, $zero, 0x43
    goto label_0x1980f0;                                        // 0x001980d0: b 0x1980f0
label_0x1980d8:
    v1 = 0x42;                                                  // 0x001980dc: addiu $v1, $zero, 0x42
    v1 = 0x43;                                                  // 0x001980e4: addiu $v1, $zero, 0x43
label_0x1980f0:
label_0x1980f4:
    a3 = 0x29 << 16;                                            // 0x001980f4: lui $a3, 0x29
    func_0018cff0();  // 0x18ce40                                // 0x00198104: jal 0x18ce40
    a3 = a3 + -0x350;                                           // 0x00198108: addiu $a3, $a3, -0x350
    v0 = 1;                                                     // 0x0019810c: addiu $v0, $zero, 1
label_0x198110:
label_0x198114:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x00198114: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x00198118: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019811c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00198120: jr $ra
    sp = sp + 0x40;                                             // 0x00198124: addiu $sp, $sp, 0x40
}