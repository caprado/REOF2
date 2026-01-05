void func_001d29a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001d29a0: addiu $sp, $sp, -0x30
    a3 = 0x24 << 16;                                            // 0x001d29a4: lui $a3, 0x24
    a3 = &str_00243b40;  // "data\\rom\\eff_mov\\eff_%03d.mov"  // 0x001d29ac: addiu $a3, $a3, 0x3b40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d29b0: addu.qb $zero, $sp, $s1
    a0 = 1;                                                     // 0x001d29c0: addiu $a0, $zero, 1
    a1 = 0x1a;                                                  // 0x001d29c4: addiu $a1, $zero, 0x1a
    func_001d09d0();  // 1d09d0                                // 0x001d29c8: jal 0x1d09d0
    v1 = *(int8_t*)(s1);                                        // 0x001d29d0: lb $v1, 0($s1)
    a0 = 0x14;                                                  // 0x001d29d4: addiu $a0, $zero, 0x14
    if (v1 == a0) goto label_0x1d2f4c;                          // 0x001d29d8: beq $v1, $a0, 0x1d2f4c
    /* nop */                                                   // 0x001d29dc: nop 
    v0 = 0xa;                                                   // 0x001d29e0: addiu $v0, $zero, 0xa
    if (v1 == v0) goto label_0x1d2f1c;                          // 0x001d29e4: beq $v1, $v0, 0x1d2f1c
    /* nop */                                                   // 0x001d29e8: nop 
    v0 = 9;                                                     // 0x001d29ec: addiu $v0, $zero, 9
    if (v1 == v0) goto label_0x1d2edc;                          // 0x001d29f0: beq $v1, $v0, 0x1d2edc
    /* nop */                                                   // 0x001d29f4: nop 
    v0 = 8;                                                     // 0x001d29f8: addiu $v0, $zero, 8
    if (v1 == v0) goto label_0x1d2e1c;                          // 0x001d29fc: beq $v1, $v0, 0x1d2e1c
    /* nop */                                                   // 0x001d2a00: nop 
    v0 = 7;                                                     // 0x001d2a04: addiu $v0, $zero, 7
    if (v1 == v0) goto label_0x1d2d90;                          // 0x001d2a08: beq $v1, $v0, 0x1d2d90
    /* nop */                                                   // 0x001d2a0c: nop 
    v0 = 6;                                                     // 0x001d2a10: addiu $v0, $zero, 6
    if (v1 == v0) goto label_0x1d2cc4;                          // 0x001d2a14: beq $v1, $v0, 0x1d2cc4
    /* nop */                                                   // 0x001d2a18: nop 
    a1 = 5;                                                     // 0x001d2a1c: addiu $a1, $zero, 5
    if (v1 == a1) goto label_0x1d2c64;                          // 0x001d2a20: beq $v1, $a1, 0x1d2c64
    /* nop */                                                   // 0x001d2a24: nop 
    v0 = 4;                                                     // 0x001d2a28: addiu $v0, $zero, 4
    if (v1 == v0) goto label_0x1d2c14;                          // 0x001d2a2c: beq $v1, $v0, 0x1d2c14
    /* nop */                                                   // 0x001d2a30: nop 
    v0 = 3;                                                     // 0x001d2a34: addiu $v0, $zero, 3
    if (v1 == v0) goto label_0x1d2b5c;                          // 0x001d2a38: beq $v1, $v0, 0x1d2b5c
    /* nop */                                                   // 0x001d2a3c: nop 
    v0 = 2;                                                     // 0x001d2a40: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1d2b0c;                          // 0x001d2a44: beq $v1, $v0, 0x1d2b0c
    /* nop */                                                   // 0x001d2a48: nop 
    v0 = 1;                                                     // 0x001d2a4c: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1d2ac8;                          // 0x001d2a50: beq $v1, $v0, 0x1d2ac8
    /* nop */                                                   // 0x001d2a54: nop 
    if (v1 == 0) goto label_0x1d2a68;                           // 0x001d2a58: beqz $v1, 0x1d2a68
    /* nop */                                                   // 0x001d2a5c: nop 
    goto label_0x1d2f80;                                        // 0x001d2a60: b 0x1d2f80
label_0x1d2a68:
    func_001c8cc0();  // 1c8cc0                                // 0x001d2a68: jal 0x1c8cc0
    /* nop */                                                   // 0x001d2a6c: nop 
    if (v0 != 0) goto label_0x1d2a88;                           // 0x001d2a70: bnez $v0, 0x1d2a88
    /* nop */                                                   // 0x001d2a74: nop 
    v0 = 0x14;                                                  // 0x001d2a78: addiu $v0, $zero, 0x14
    *(uint8_t*)(s1) = v0;                                       // 0x001d2a7c: sb $v0, 0($s1)
    goto label_0x1d2ac0;                                        // 0x001d2a80: b 0x1d2ac0
    *(uint16_t*)(s0) = 0;                                       // 0x001d2a84: sh $zero, 0($s0)
label_0x1d2a88:
    func_001c8cc0();  // 1c8cc0                                // 0x001d2a88: jal 0x1c8cc0
    /* nop */                                                   // 0x001d2a8c: nop 
    v1 = 3;                                                     // 0x001d2a90: addiu $v1, $zero, 3
    if (v0 != v1) goto label_0x1d2ab4;                          // 0x001d2a94: bne $v0, $v1, 0x1d2ab4
    /* nop */                                                   // 0x001d2a98: nop 
    v1 = *(int8_t*)(s1);                                        // 0x001d2a9c: lb $v1, 0($s1)
    v1 = v1 + 1;                                                // 0x001d2aa4: addiu $v1, $v1, 1
    *(uint8_t*)(s1) = v1;                                       // 0x001d2aa8: sb $v1, 0($s1)
    goto label_0x1d2f80;                                        // 0x001d2aac: b 0x1d2f80
    *(uint16_t*)(s0) = 0;                                       // 0x001d2ab0: sh $zero, 0($s0)
label_0x1d2ab4:
    v0 = 2;                                                     // 0x001d2ab4: addiu $v0, $zero, 2
    *(uint8_t*)(s1) = v0;                                       // 0x001d2ab8: sb $v0, 0($s1)
    *(uint16_t*)(s0) = 0;                                       // 0x001d2abc: sh $zero, 0($s0)
label_0x1d2ac0:
    goto label_0x1d2f80;                                        // 0x001d2ac0: b 0x1d2f80
label_0x1d2ac8:
    a0 = 0x33 << 16;                                            // 0x001d2ac8: lui $a0, 0x33
    func_001c9280();  // 1c9280                                // 0x001d2acc: jal 0x1c9280
    a0 = a0 + -0x41ac;                                          // 0x001d2ad0: addiu $a0, $a0, -0x41ac
    a0 = 0x33 << 16;                                            // 0x001d2ad4: lui $a0, 0x33
    a0 = a0 + -0x41b0;                                          // 0x001d2adc: addiu $a0, $a0, -0x41b0
    func_00107c70();  // 107c70                                // 0x001d2ae0: jal 0x107c70
    a2 = 0x2c;                                                  // 0x001d2ae4: addiu $a2, $zero, 0x2c
    v1 = -1;                                                    // 0x001d2ae8: addiu $v1, $zero, -1
    at = 0x33 << 16;                                            // 0x001d2aec: lui $at, 0x33
    g_0032be54 = v1;  // Global at 0x0032be54                   // 0x001d2af0: sw $v1, -0x41ac($at)
    v1 = *(int8_t*)(s1);                                        // 0x001d2af8: lb $v1, 0($s1)
    v1 = v1 + 1;                                                // 0x001d2afc: addiu $v1, $v1, 1
    *(uint8_t*)(s1) = v1;                                       // 0x001d2b00: sb $v1, 0($s1)
    goto label_0x1d2f80;                                        // 0x001d2b04: b 0x1d2f80
    *(uint16_t*)(s0) = 0;                                       // 0x001d2b08: sh $zero, 0($s0)
label_0x1d2b0c:
    v1 = *(int16_t*)(s0);                                       // 0x001d2b0c: lh $v1, 0($s0)
    v0 = v1 + -1;                                               // 0x001d2b10: addiu $v0, $v1, -1
    at = (0 < v1) ? 1 : 0;                                      // 0x001d2b14: slt $at, $zero, $v1
    if (at == 0) goto label_0x1d2b28;                           // 0x001d2b18: beqz $at, 0x1d2b28
    *(uint16_t*)(s0) = v0;                                      // 0x001d2b1c: sh $v0, 0($s0)
    goto label_0x1d2f80;                                        // 0x001d2b20: b 0x1d2f80
label_0x1d2b28:
    func_001c8cc0();  // 1c8cc0                                // 0x001d2b28: jal 0x1c8cc0
    *(uint16_t*)(s0) = 0;                                       // 0x001d2b2c: sh $zero, 0($s0)
    v1 = 2;                                                     // 0x001d2b30: addiu $v1, $zero, 2
    if (v0 != v1) goto label_0x1d2b48;                          // 0x001d2b34: bne $v0, $v1, 0x1d2b48
    /* nop */                                                   // 0x001d2b38: nop 
    v0 = 6;                                                     // 0x001d2b3c: addiu $v0, $zero, 6
    goto label_0x1d2b54;                                        // 0x001d2b40: b 0x1d2b54
    *(uint8_t*)(s1) = v0;                                       // 0x001d2b44: sb $v0, 0($s1)
label_0x1d2b48:
    v0 = *(int8_t*)(s1);                                        // 0x001d2b48: lb $v0, 0($s1)
    v0 = v0 + 1;                                                // 0x001d2b4c: addiu $v0, $v0, 1
    *(uint8_t*)(s1) = v0;                                       // 0x001d2b50: sb $v0, 0($s1)
label_0x1d2b54:
    goto label_0x1d2f80;                                        // 0x001d2b54: b 0x1d2f80
label_0x1d2b5c:
    func_001c9410();  // 1c9410                                // 0x001d2b5c: jal 0x1c9410
    /* nop */                                                   // 0x001d2b60: nop 
    v0 = *(int32_t*)((gp) + -0x6260);                           // 0x001d2b64: lw $v0, -0x6260($gp)
    a0 = 1;                                                     // 0x001d2b68: addiu $a0, $zero, 1
    v0 = *(int32_t*)(v0);                                       // 0x001d2b6c: lw $v0, 0($v0)
    if (v0 != a0) goto label_0x1d2bf8;                          // 0x001d2b70: bne $v0, $a0, 0x1d2bf8
    /* nop */                                                   // 0x001d2b74: nop 
    v1 = *(int8_t*)((gp) + -0x627c);                            // 0x001d2b78: lb $v1, -0x627c($gp)
    v0 = 2;                                                     // 0x001d2b7c: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1d2be4;                          // 0x001d2b80: beq $v1, $v0, 0x1d2be4
    /* nop */                                                   // 0x001d2b84: nop 
    if (v1 == a0) goto label_0x1d2bc0;                          // 0x001d2b88: beq $v1, $a0, 0x1d2bc0
    /* nop */                                                   // 0x001d2b8c: nop 
    if (v1 == 0) goto label_0x1d2ba0;                           // 0x001d2b90: beqz $v1, 0x1d2ba0
    /* nop */                                                   // 0x001d2b94: nop 
    goto label_0x1d2c0c;                                        // 0x001d2b98: b 0x1d2c0c
label_0x1d2ba0:
    a1 = *(int32_t*)((gp) + -0x629c);                           // 0x001d2ba0: lw $a1, -0x629c($gp)
    func_001c9fb0();  // 1c9fb0                                // 0x001d2ba4: jal 0x1c9fb0
    func_001c9e80();  // 1c9e80                                // 0x001d2bac: jal 0x1c9e80
    v0 = 6;                                                     // 0x001d2bb4: addiu $v0, $zero, 6
    goto label_0x1d2c08;                                        // 0x001d2bb8: b 0x1d2c08
    *(uint8_t*)(s1) = v0;                                       // 0x001d2bbc: sb $v0, 0($s1)
label_0x1d2bc0:
    a1 = *(int32_t*)((gp) + -0x629c);                           // 0x001d2bc0: lw $a1, -0x629c($gp)
    func_001c9fb0();  // 1c9fb0                                // 0x001d2bc4: jal 0x1c9fb0
    func_001c9e80();  // 1c9e80                                // 0x001d2bcc: jal 0x1c9e80
    v0 = *(int8_t*)(s1);                                        // 0x001d2bd4: lb $v0, 0($s1)
    v0 = v0 + 1;                                                // 0x001d2bd8: addiu $v0, $v0, 1
    goto label_0x1d2c08;                                        // 0x001d2bdc: b 0x1d2c08
    *(uint8_t*)(s1) = v0;                                       // 0x001d2be0: sb $v0, 0($s1)
label_0x1d2be4:
    func_001c9ae0();  // 1c9ae0                                // 0x001d2be4: jal 0x1c9ae0
    v0 = 6;                                                     // 0x001d2bec: addiu $v0, $zero, 6
    goto label_0x1d2c08;                                        // 0x001d2bf0: b 0x1d2c08
    *(uint8_t*)(s1) = v0;                                       // 0x001d2bf4: sb $v0, 0($s1)
label_0x1d2bf8:
    func_001c9ae0();  // 1c9ae0                                // 0x001d2bf8: jal 0x1c9ae0
    v0 = 6;                                                     // 0x001d2c00: addiu $v0, $zero, 6
    *(uint8_t*)(s1) = v0;                                       // 0x001d2c04: sb $v0, 0($s1)
label_0x1d2c08:
label_0x1d2c0c:
    goto label_0x1d2f84;                                        // 0x001d2c0c: b 0x1d2f84
label_0x1d2c14:
    v0 = *(int32_t*)((gp) + -0x6294);                           // 0x001d2c14: lw $v0, -0x6294($gp)
    a0 = gp + -0x62b0;                                          // 0x001d2c18: addiu $a0, $gp, -0x62b0
    *(uint32_t*)((gp) + -0x62ac) = 0;                           // 0x001d2c1c: sw $zero, -0x62ac($gp)
    func_001ca140();  // 1ca140                                // 0x001d2c20: jal 0x1ca140
    *(uint32_t*)((gp) + -0x62b0) = v0;                          // 0x001d2c24: sw $v0, -0x62b0($gp)
    if (v0 == 0) goto label_0x1d2c48;                           // 0x001d2c28: beqz $v0, 0x1d2c48
    /* nop */                                                   // 0x001d2c2c: nop 
    func_001ca020();  // 1ca020                                // 0x001d2c30: jal 0x1ca020
    /* nop */                                                   // 0x001d2c34: nop 
    v0 = *(int8_t*)(s1);                                        // 0x001d2c38: lb $v0, 0($s1)
    v0 = v0 + 2;                                                // 0x001d2c3c: addiu $v0, $v0, 2
    goto label_0x1d2c5c;                                        // 0x001d2c40: b 0x1d2c5c
    *(uint8_t*)(s1) = v0;                                       // 0x001d2c44: sb $v0, 0($s1)
label_0x1d2c48:
    v1 = *(int8_t*)(s1);                                        // 0x001d2c48: lb $v1, 0($s1)
    v0 = 0x12c;                                                 // 0x001d2c4c: addiu $v0, $zero, 0x12c
    v1 = v1 + 1;                                                // 0x001d2c50: addiu $v1, $v1, 1
    *(uint8_t*)(s1) = v1;                                       // 0x001d2c54: sb $v1, 0($s1)
    *(uint16_t*)(s0) = v0;                                      // 0x001d2c58: sh $v0, 0($s0)
label_0x1d2c5c:
    goto label_0x1d2f80;                                        // 0x001d2c5c: b 0x1d2f80
label_0x1d2c64:
    func_001ca080();  // 1ca080                                // 0x001d2c64: jal 0x1ca080
    /* nop */                                                   // 0x001d2c68: nop 
    v1 = -1;                                                    // 0x001d2c6c: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1d2ca4;                          // 0x001d2c70: beq $v0, $v1, 0x1d2ca4
    /* nop */                                                   // 0x001d2c74: nop 
    v1 = -2;                                                    // 0x001d2c78: addiu $v1, $zero, -2
    if (v0 == v1) goto label_0x1d2ca4;                          // 0x001d2c7c: beq $v0, $v1, 0x1d2ca4
    /* nop */                                                   // 0x001d2c80: nop 
    if (v0 == 0) goto label_0x1d2ca4;                           // 0x001d2c84: beqz $v0, 0x1d2ca4
    /* nop */                                                   // 0x001d2c88: nop 
    v0 = *(int16_t*)(s0);                                       // 0x001d2c8c: lh $v0, 0($s0)
    v1 = v0 + -1;                                               // 0x001d2c90: addiu $v1, $v0, -1
    v0 = (0 < v0) ? 1 : 0;                                      // 0x001d2c94: slt $v0, $zero, $v0
    if (v0 != 0) goto label_0x1d2cbc;                           // 0x001d2c98: bnez $v0, 0x1d2cbc
    *(uint16_t*)(s0) = v1;                                      // 0x001d2c9c: sh $v1, 0($s0)
    *(uint16_t*)(s0) = 0;                                       // 0x001d2ca0: sh $zero, 0($s0)
label_0x1d2ca4:
    func_001ca020();  // 1ca020                                // 0x001d2ca4: jal 0x1ca020
    /* nop */                                                   // 0x001d2ca8: nop 
    v0 = *(int8_t*)(s1);                                        // 0x001d2cac: lb $v0, 0($s1)
    v0 = v0 + 1;                                                // 0x001d2cb0: addiu $v0, $v0, 1
    *(uint8_t*)(s1) = v0;                                       // 0x001d2cb4: sb $v0, 0($s1)
    *(uint16_t*)(s0) = 0;                                       // 0x001d2cb8: sh $zero, 0($s0)
label_0x1d2cbc:
    goto label_0x1d2f80;                                        // 0x001d2cbc: b 0x1d2f80
label_0x1d2cc4:
    v1 = *(int32_t*)((gp) + -0x6260);                           // 0x001d2cc4: lw $v1, -0x6260($gp)
    v0 = 1;                                                     // 0x001d2cc8: addiu $v0, $zero, 1
    v1 = *(int32_t*)(v1);                                       // 0x001d2ccc: lw $v1, 0($v1)
    if (v1 == v0) goto label_0x1d2d1c;                          // 0x001d2cd0: beq $v1, $v0, 0x1d2d1c
    /* nop */                                                   // 0x001d2cd4: nop 
    v0 = 3;                                                     // 0x001d2cd8: addiu $v0, $zero, 3
    if (v1 == v0) goto label_0x1d2cfc;                          // 0x001d2cdc: beq $v1, $v0, 0x1d2cfc
    v0 = 2;                                                     // 0x001d2ce4: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1d2cf8;                          // 0x001d2ce8: beq $v1, $v0, 0x1d2cf8
    /* nop */                                                   // 0x001d2cec: nop 
    goto label_0x1d2d88;                                        // 0x001d2cf0: b 0x1d2d88
label_0x1d2cf8:
label_0x1d2cfc:
    func_001c9d10();  // 1c9d10                                // 0x001d2cfc: jal 0x1c9d10
    /* nop */                                                   // 0x001d2d00: nop 
    v0 = 0x12c;                                                 // 0x001d2d04: addiu $v0, $zero, 0x12c
    *(uint16_t*)(s0) = v0;                                      // 0x001d2d08: sh $v0, 0($s0)
    v0 = *(int8_t*)(s1);                                        // 0x001d2d0c: lb $v0, 0($s1)
    v0 = v0 + 1;                                                // 0x001d2d10: addiu $v0, $v0, 1
    goto label_0x1d2d84;                                        // 0x001d2d14: b 0x1d2d84
    *(uint8_t*)(s1) = v0;                                       // 0x001d2d18: sb $v0, 0($s1)
label_0x1d2d1c:
    v1 = *(int8_t*)((gp) + -0x627c);                            // 0x001d2d1c: lb $v1, -0x627c($gp)
    if (v1 == 0) goto label_0x1d2d68;                           // 0x001d2d20: beqz $v1, 0x1d2d68
    /* nop */                                                   // 0x001d2d24: nop 
    if (v1 == v0) goto label_0x1d2d68;                          // 0x001d2d28: beq $v1, $v0, 0x1d2d68
    /* nop */                                                   // 0x001d2d2c: nop 
    v0 = 2;                                                     // 0x001d2d30: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1d2d48;                          // 0x001d2d34: beq $v1, $v0, 0x1d2d48
    goto label_0x1d2d84;                                        // 0x001d2d3c: b 0x1d2d84
    /* nop */                                                   // 0x001d2d40: nop 
label_0x1d2d48:
    func_001c9d10();  // 1c9d10                                // 0x001d2d48: jal 0x1c9d10
    /* nop */                                                   // 0x001d2d4c: nop 
    v0 = 0x12c;                                                 // 0x001d2d50: addiu $v0, $zero, 0x12c
    *(uint16_t*)(s0) = v0;                                      // 0x001d2d54: sh $v0, 0($s0)
    v0 = *(int8_t*)(s1);                                        // 0x001d2d58: lb $v0, 0($s1)
    v0 = v0 + 1;                                                // 0x001d2d5c: addiu $v0, $v0, 1
    goto label_0x1d2d84;                                        // 0x001d2d60: b 0x1d2d84
    *(uint8_t*)(s1) = v0;                                       // 0x001d2d64: sb $v0, 0($s1)
label_0x1d2d68:
    func_001c9f00();  // 1c9f00                                // 0x001d2d68: jal 0x1c9f00
    /* nop */                                                   // 0x001d2d6c: nop 
    v0 = 0x1e;                                                  // 0x001d2d70: addiu $v0, $zero, 0x1e
    *(uint16_t*)(s0) = v0;                                      // 0x001d2d74: sh $v0, 0($s0)
    v0 = *(int8_t*)(s1);                                        // 0x001d2d78: lb $v0, 0($s1)
    v0 = v0 + 2;                                                // 0x001d2d7c: addiu $v0, $v0, 2
    *(uint8_t*)(s1) = v0;                                       // 0x001d2d80: sb $v0, 0($s1)
label_0x1d2d84:
label_0x1d2d88:
    goto label_0x1d2f80;                                        // 0x001d2d88: b 0x1d2f80
    /* nop */                                                   // 0x001d2d8c: nop 
label_0x1d2d90:
    v0 = *(int16_t*)(s0);                                       // 0x001d2d90: lh $v0, 0($s0)
    v0 = v0 + -1;                                               // 0x001d2d94: addiu $v0, $v0, -1
    *(uint16_t*)(s0) = v0;                                      // 0x001d2d98: sh $v0, 0($s0)
    v1 = *(int16_t*)(s0);                                       // 0x001d2d9c: lh $v1, 0($s0)
    at = (v1 < 0) ? 1 : 0;                                      // 0x001d2da0: slti $at, $v1, 0
    if (at == 0) goto label_0x1d2dc4;                           // 0x001d2da4: beqz $at, 0x1d2dc4
    v0 = 0x1e;                                                  // 0x001d2da8: addiu $v0, $zero, 0x1e
    v0 = *(int8_t*)(s1);                                        // 0x001d2dac: lb $v0, 0($s1)
    v0 = v0 + 1;                                                // 0x001d2db0: addiu $v0, $v0, 1
    *(uint8_t*)(s1) = v0;                                       // 0x001d2db4: sb $v0, 0($s1)
    goto label_0x1d2e10;                                        // 0x001d2db8: b 0x1d2e10
    *(uint16_t*)(s0) = 0;                                       // 0x001d2dbc: sh $zero, 0($s0)
    v0 = 0x1e;                                                  // 0x001d2dc0: addiu $v0, $zero, 0x1e
label_0x1d2dc4:
    /* divide: v1 / v0 -> hi:lo */                              // 0x001d2dc4: div $zero, $v1, $v0
    /* nop */                                                   // 0x001d2dc8: nop 
    /* nop */                                                   // 0x001d2dcc: nop 
    /* mfhi $v0 */                                              // 0x001d2dd0
    if (v0 != 0) goto label_0x1d2e14;                           // 0x001d2dd4: bnez $v0, 0x1d2e14
    a0 = 0x33 << 16;                                            // 0x001d2ddc: lui $a0, 0x33
    func_001c9b00();  // 1c9b00                                // 0x001d2de0: jal 0x1c9b00
    a0 = a0 + -0x41d0;                                          // 0x001d2de4: addiu $a0, $a0, -0x41d0
    at = 0x33 << 16;                                            // 0x001d2de8: lui $at, 0x33
    v1 = g_0032be3c;  // Global at 0x0032be3c                   // 0x001d2dec: lh $v1, -0x41c4($at)
    if (v1 == 0) goto label_0x1d2e00;                           // 0x001d2df0: beqz $v1, 0x1d2e00
    /* nop */                                                   // 0x001d2df4: nop 
    if (v0 >= 0) goto label_0x1d2e10;                           // 0x001d2df8: bgez $v0, 0x1d2e10
    /* nop */                                                   // 0x001d2dfc: nop 
label_0x1d2e00:
    v0 = *(int8_t*)(s1);                                        // 0x001d2e00: lb $v0, 0($s1)
    v0 = v0 + 1;                                                // 0x001d2e04: addiu $v0, $v0, 1
    *(uint8_t*)(s1) = v0;                                       // 0x001d2e08: sb $v0, 0($s1)
    *(uint16_t*)(s0) = 0;                                       // 0x001d2e0c: sh $zero, 0($s0)
label_0x1d2e10:
label_0x1d2e14:
    goto label_0x1d2f80;                                        // 0x001d2e14: b 0x1d2f80
    /* nop */                                                   // 0x001d2e18: nop 
label_0x1d2e1c:
    v1 = *(int16_t*)(s0);                                       // 0x001d2e1c: lh $v1, 0($s0)
    v0 = v1 + -1;                                               // 0x001d2e20: addiu $v0, $v1, -1
    at = (0 < v1) ? 1 : 0;                                      // 0x001d2e24: slt $at, $zero, $v1
    if (at == 0) goto label_0x1d2e38;                           // 0x001d2e28: beqz $at, 0x1d2e38
    *(uint16_t*)(s0) = v0;                                      // 0x001d2e2c: sh $v0, 0($s0)
    goto label_0x1d2f80;                                        // 0x001d2e30: b 0x1d2f80
label_0x1d2e38:
    *(uint16_t*)(s0) = 0;                                       // 0x001d2e38: sh $zero, 0($s0)
    v0 = 1;                                                     // 0x001d2e3c: addiu $v0, $zero, 1
    v1 = *(int32_t*)((gp) + -0x6260);                           // 0x001d2e40: lw $v1, -0x6260($gp)
    v1 = *(int32_t*)(v1);                                       // 0x001d2e44: lw $v1, 0($v1)
    if (v1 == v0) goto label_0x1d2e80;                          // 0x001d2e48: beq $v1, $v0, 0x1d2e80
    /* nop */                                                   // 0x001d2e4c: nop 
    v0 = 3;                                                     // 0x001d2e50: addiu $v0, $zero, 3
    if (v1 == v0) goto label_0x1d2e70;                          // 0x001d2e54: beq $v1, $v0, 0x1d2e70
    /* nop */                                                   // 0x001d2e58: nop 
    v0 = 2;                                                     // 0x001d2e5c: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1d2e70;                          // 0x001d2e60: beq $v1, $v0, 0x1d2e70
    /* nop */                                                   // 0x001d2e64: nop 
    goto label_0x1d2ec4;                                        // 0x001d2e68: b 0x1d2ec4
    a0 = *(int8_t*)(s1);                                        // 0x001d2e6c: lb $a0, 0($s1)
label_0x1d2e70:
    func_001c9d40();  // 1c9d40                                // 0x001d2e70: jal 0x1c9d40
    /* nop */                                                   // 0x001d2e74: nop 
    goto label_0x1d2ec0;                                        // 0x001d2e78: b 0x1d2ec0
    /* nop */                                                   // 0x001d2e7c: nop 
label_0x1d2e80:
    v1 = *(int8_t*)((gp) + -0x627c);                            // 0x001d2e80: lb $v1, -0x627c($gp)
    if (v1 == 0) goto label_0x1d2eb8;                           // 0x001d2e84: beqz $v1, 0x1d2eb8
    /* nop */                                                   // 0x001d2e88: nop 
    if (v1 == v0) goto label_0x1d2eb8;                          // 0x001d2e8c: beq $v1, $v0, 0x1d2eb8
    /* nop */                                                   // 0x001d2e90: nop 
    v0 = 2;                                                     // 0x001d2e94: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1d2ea8;                          // 0x001d2e98: beq $v1, $v0, 0x1d2ea8
    /* nop */                                                   // 0x001d2e9c: nop 
    goto label_0x1d2ec0;                                        // 0x001d2ea0: b 0x1d2ec0
    /* nop */                                                   // 0x001d2ea4: nop 
label_0x1d2ea8:
    func_001c9d40();  // 1c9d40                                // 0x001d2ea8: jal 0x1c9d40
    /* nop */                                                   // 0x001d2eac: nop 
    goto label_0x1d2ec0;                                        // 0x001d2eb0: b 0x1d2ec0
    /* nop */                                                   // 0x001d2eb4: nop 
label_0x1d2eb8:
    func_001c9f30();  // 1c9f30                                // 0x001d2eb8: jal 0x1c9f30
    /* nop */                                                   // 0x001d2ebc: nop 
label_0x1d2ec0:
    a0 = *(int8_t*)(s1);                                        // 0x001d2ec0: lb $a0, 0($s1)
label_0x1d2ec4:
    v1 = 0x14;                                                  // 0x001d2ec4: addiu $v1, $zero, 0x14
    a0 = a0 + 1;                                                // 0x001d2ecc: addiu $a0, $a0, 1
    *(uint8_t*)(s1) = a0;                                       // 0x001d2ed0: sb $a0, 0($s1)
    goto label_0x1d2f80;                                        // 0x001d2ed4: b 0x1d2f80
    *(uint16_t*)(s0) = v1;                                      // 0x001d2ed8: sh $v1, 0($s0)
label_0x1d2edc:
    v1 = *(int16_t*)(s0);                                       // 0x001d2edc: lh $v1, 0($s0)
    v0 = v1 + -1;                                               // 0x001d2ee0: addiu $v0, $v1, -1
    at = (0 < v1) ? 1 : 0;                                      // 0x001d2ee4: slt $at, $zero, $v1
    if (at == 0) goto label_0x1d2ef8;                           // 0x001d2ee8: beqz $at, 0x1d2ef8
    *(uint16_t*)(s0) = v0;                                      // 0x001d2eec: sh $v0, 0($s0)
    goto label_0x1d2f80;                                        // 0x001d2ef0: b 0x1d2f80
label_0x1d2ef8:
    func_001c9370();  // 1c9370                                // 0x001d2ef8: jal 0x1c9370
    *(uint16_t*)(s0) = 0;                                       // 0x001d2efc: sh $zero, 0($s0)
    a0 = *(int8_t*)(s1);                                        // 0x001d2f00: lb $a0, 0($s1)
    v1 = 0x14;                                                  // 0x001d2f04: addiu $v1, $zero, 0x14
    a0 = a0 + 1;                                                // 0x001d2f0c: addiu $a0, $a0, 1
    *(uint8_t*)(s1) = a0;                                       // 0x001d2f10: sb $a0, 0($s1)
    goto label_0x1d2f80;                                        // 0x001d2f14: b 0x1d2f80
    *(uint16_t*)(s0) = v1;                                      // 0x001d2f18: sh $v1, 0($s0)
label_0x1d2f1c:
    v1 = *(int16_t*)(s0);                                       // 0x001d2f1c: lh $v1, 0($s0)
    v0 = v1 + -1;                                               // 0x001d2f20: addiu $v0, $v1, -1
    at = (0 < v1) ? 1 : 0;                                      // 0x001d2f24: slt $at, $zero, $v1
    if (at == 0) goto label_0x1d2f38;                           // 0x001d2f28: beqz $at, 0x1d2f38
    *(uint16_t*)(s0) = v0;                                      // 0x001d2f2c: sh $v0, 0($s0)
    goto label_0x1d2f80;                                        // 0x001d2f30: b 0x1d2f80
label_0x1d2f38:
    *(uint16_t*)(s0) = 0;                                       // 0x001d2f38: sh $zero, 0($s0)
    *(uint8_t*)(s1) = a0;                                       // 0x001d2f40: sb $a0, 0($s1)
    goto label_0x1d2f80;                                        // 0x001d2f44: b 0x1d2f80
    *(uint16_t*)(s0) = 0;                                       // 0x001d2f48: sh $zero, 0($s0)
label_0x1d2f4c:
    v1 = *(int16_t*)(s0);                                       // 0x001d2f4c: lh $v1, 0($s0)
    v0 = v1 + -1;                                               // 0x001d2f50: addiu $v0, $v1, -1
    at = (0 < v1) ? 1 : 0;                                      // 0x001d2f54: slt $at, $zero, $v1
    if (at == 0) goto label_0x1d2f68;                           // 0x001d2f58: beqz $at, 0x1d2f68
    *(uint16_t*)(s0) = v0;                                      // 0x001d2f5c: sh $v0, 0($s0)
    goto label_0x1d2f80;                                        // 0x001d2f60: b 0x1d2f80
label_0x1d2f68:
    *(uint16_t*)(s0) = 0;                                       // 0x001d2f68: sh $zero, 0($s0)
    v0 = 1;                                                     // 0x001d2f6c: addiu $v0, $zero, 1
    *(uint8_t*)(s1) = 0;                                        // 0x001d2f70: sb $zero, 0($s1)
    goto label_0x1d2f80;                                        // 0x001d2f74: b 0x1d2f80
    *(uint16_t*)(s0) = 0;                                       // 0x001d2f78: sh $zero, 0($s0)
label_0x1d2f80:
label_0x1d2f84:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d2f84: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d2f88: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d2f8c: jr $ra
    sp = sp + 0x30;                                             // 0x001d2f90: addiu $sp, $sp, 0x30
}