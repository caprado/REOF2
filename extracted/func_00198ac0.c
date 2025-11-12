void func_00198ac0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = -1;                                                    // 0x00198ac0: addiu $v1, $zero, -1
    *(uint32_t*)((a0) + 0x48) = v1;                             // 0x00198ac4: sw $v1, 0x48($a0)
    *(uint32_t*)((a0) + 0x4c) = 0;                              // 0x00198ac8: sw $zero, 0x4c($a0)
    v1 = 0xff00 << 16;                                          // 0x00198acc: lui $v1, 0xff00
    a2 = *(int32_t*)((a0) + 0xc);                               // 0x00198ad0: lw $a2, 0xc($a0)
    a3 = *(int32_t*)((a0) + 4);                                 // 0x00198ad4: lw $a3, 4($a0)
    a1 = *(int32_t*)((a0) + 8);                                 // 0x00198ad8: lw $a1, 8($a0)
    v1 = a2 & v1;                                               // 0x00198adc: and $v1, $a2, $v1
    if (v1 == 0) goto label_0x198af8;                           // 0x00198ae8: beqz $v1, 0x198af8
    a1 = a3 | a1;                                               // 0x00198aec: or $a1, $a3, $a1
    goto label_0x1991b8;                                        // 0x00198af0: b 0x1991b8
    /* nop */                                                   // 0x00198af4: nop 
label_0x198af8:
    v1 = 2 << 16;                                               // 0x00198af8: lui $v1, 2
    a3 = v1 | 0x4080;                                           // 0x00198afc: ori $a3, $v1, 0x4080
    if (a2 == a3) goto label_0x199180;                          // 0x00198b00: beq $a2, $a3, 0x199180
    a3 = v1 | 0x4380;                                           // 0x00198b04: ori $a3, $v1, 0x4380
    if (a2 == a3) goto label_0x199144;                          // 0x00198b08: beq $a2, $a3, 0x199144
    /* nop */                                                   // 0x00198b0c: nop 
    a3 = v1 | 0xc380;                                           // 0x00198b10: ori $a3, $v1, 0xc380
    if (a2 == a3) goto label_0x199108;                          // 0x00198b14: beq $a2, $a3, 0x199108
    a3 = v1 | 0x8802;                                           // 0x00198b18: ori $a3, $v1, 0x8802
    if (a2 == a3) goto label_0x199098;                          // 0x00198b1c: beq $a2, $a3, 0x199098
    /* nop */                                                   // 0x00198b20: nop 
    a3 = v1 | 0xc802;                                           // 0x00198b24: ori $a3, $v1, 0xc802
    if (a2 == a3) goto label_0x199028;                          // 0x00198b28: beq $a2, $a3, 0x199028
    a3 = v1 | 0xc822;                                           // 0x00198b2c: ori $a3, $v1, 0xc822
    if (a2 == a3) goto label_0x198fb8;                          // 0x00198b30: beq $a2, $a3, 0x198fb8
    /* nop */                                                   // 0x00198b34: nop 
    a3 = 0 | 0xc802;                                            // 0x00198b38: ori $a3, $zero, 0xc802
    if (a2 == a3) goto label_0x198f7c;                          // 0x00198b3c: beq $a2, $a3, 0x198f7c
    a3 = 0 | 0x8882;                                            // 0x00198b40: ori $a3, $zero, 0x8882
    if (a2 == a3) goto label_0x198f0c;                          // 0x00198b44: beq $a2, $a3, 0x198f0c
    /* nop */                                                   // 0x00198b48: nop 
    a3 = v1 | 0xc080;                                           // 0x00198b4c: ori $a3, $v1, 0xc080
    if (a2 == a3) goto label_0x198ed0;                          // 0x00198b50: beq $a2, $a3, 0x198ed0
    a3 = v1 | 0xc000;                                           // 0x00198b54: ori $a3, $v1, 0xc000
    if (a2 == a3) goto label_0x198e94;                          // 0x00198b58: beq $a2, $a3, 0x198e94
    /* nop */                                                   // 0x00198b5c: nop 
    a3 = 0 | 0xc202;                                            // 0x00198b60: ori $a3, $zero, 0xc202
    if (a2 == a3) goto label_0x198e24;                          // 0x00198b64: beq $a2, $a3, 0x198e24
    a3 = v1 | 0x4000;                                           // 0x00198b68: ori $a3, $v1, 0x4000
    if (a2 == a3) goto label_0x198de8;                          // 0x00198b6c: beq $a2, $a3, 0x198de8
    /* nop */                                                   // 0x00198b70: nop 
    a3 = 0x4000;                                                // 0x00198b74: addiu $a3, $zero, 0x4000
    if (a2 == a3) goto label_0x198dac;                          // 0x00198b78: beq $a2, $a3, 0x198dac
    a3 = 0x4002;                                                // 0x00198b7c: addiu $a3, $zero, 0x4002
    if (a2 == a3) goto label_0x198d70;                          // 0x00198b80: beq $a2, $a3, 0x198d70
    /* nop */                                                   // 0x00198b84: nop 
    a3 = 0x4202;                                                // 0x00198b88: addiu $a3, $zero, 0x4202
    if (a2 == a3) goto label_0x198d34;                          // 0x00198b8c: beq $a2, $a3, 0x198d34
    /* nop */                                                   // 0x00198b90: nop 
    if (a2 == v1) goto label_0x198cd0;                          // 0x00198b94: beq $a2, $v1, 0x198cd0
    a3 = 0x12 << 16;                                            // 0x00198b98: lui $a3, 0x12
    a3 = 2;                                                     // 0x00198b9c: addiu $a3, $zero, 2
    if (a2 == a3) goto label_0x198c6c;                          // 0x00198ba0: beq $a2, $a3, 0x198c6c
    a3 = 0x12 << 16;                                            // 0x00198ba4: lui $a3, 0x12
    a3 = 0 | 0x8802;                                            // 0x00198ba8: ori $a3, $zero, 0x8802
    if (a2 == a3) goto label_0x198bfc;                          // 0x00198bac: beq $a2, $a3, 0x198bfc
    a3 = v1 | 0x80;                                             // 0x00198bb0: ori $a3, $v1, 0x80
    if (a2 == a3) goto label_0x198bc4;                          // 0x00198bb4: beq $a2, $a3, 0x198bc4
    /* nop */                                                   // 0x00198bb8: nop 
    goto label_0x1991b8;                                        // 0x00198bbc: b 0x1991b8
    /* nop */                                                   // 0x00198bc0: nop 
label_0x198bc4:
    a2 = 0x12 << 16;                                            // 0x00198bc4: lui $a2, 0x12
    a2 = a2 | 0x1035;                                           // 0x00198bc8: ori $a2, $a2, 0x1035
    if (a1 == a2) goto label_0x198be8;                          // 0x00198bcc: beq $a1, $a2, 0x198be8
    /* nop */                                                   // 0x00198bd0: nop 
    v1 = v1 | 0x1035;                                           // 0x00198bd4: ori $v1, $v1, 0x1035
    if (a1 == v1) goto label_0x198be8;                          // 0x00198bd8: beq $a1, $v1, 0x198be8
    /* nop */                                                   // 0x00198bdc: nop 
    goto label_0x1991b8;                                        // 0x00198be0: b 0x1991b8
    /* nop */                                                   // 0x00198be4: nop 
label_0x198be8:
    v1 = 0x21 << 16;                                            // 0x00198be8: lui $v1, 0x21
    *(uint32_t*)((a0) + 0x48) = 0;                              // 0x00198bec: sw $zero, 0x48($a0)
    v1 = v1 + 0x67e0;                                           // 0x00198bf0: addiu $v1, $v1, 0x67e0
    goto label_0x1991b8;                                        // 0x00198bf4: b 0x1991b8
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x00198bf8: sw $v1, 0x4c($a0)
label_0x198bfc:
    a2 = 0x22 << 16;                                            // 0x00198bfc: lui $a2, 0x22
    a2 = a2 | 0x1135;                                           // 0x00198c00: ori $a2, $a2, 0x1135
    if (a1 == a2) goto label_0x198c54;                          // 0x00198c04: beq $a1, $a2, 0x198c54
    a2 = 0x32 << 16;                                            // 0x00198c08: lui $a2, 0x32
    a2 = a2 | 0x1135;                                           // 0x00198c0c: ori $a2, $a2, 0x1135
    if (a1 == a2) goto label_0x198c54;                          // 0x00198c10: beq $a1, $a2, 0x198c54
    /* nop */                                                   // 0x00198c14: nop 
    a2 = 0x12 << 16;                                            // 0x00198c18: lui $a2, 0x12
    a2 = a2 | 0x1035;                                           // 0x00198c1c: ori $a2, $a2, 0x1035
    if (a1 == a2) goto label_0x198c3c;                          // 0x00198c20: beq $a1, $a2, 0x198c3c
    /* nop */                                                   // 0x00198c24: nop 
    v1 = v1 | 0x1035;                                           // 0x00198c28: ori $v1, $v1, 0x1035
    if (a1 == v1) goto label_0x198c3c;                          // 0x00198c2c: beq $a1, $v1, 0x198c3c
    /* nop */                                                   // 0x00198c30: nop 
    goto label_0x1991b8;                                        // 0x00198c34: b 0x1991b8
    /* nop */                                                   // 0x00198c38: nop 
label_0x198c3c:
    a1 = 1;                                                     // 0x00198c3c: addiu $a1, $zero, 1
    v1 = 0x21 << 16;                                            // 0x00198c40: lui $v1, 0x21
    v1 = v1 + 0x6810;                                           // 0x00198c44: addiu $v1, $v1, 0x6810
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x00198c48: sw $a1, 0x48($a0)
    goto label_0x1991b8;                                        // 0x00198c4c: b 0x1991b8
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x00198c50: sw $v1, 0x4c($a0)
label_0x198c54:
    a1 = 2;                                                     // 0x00198c54: addiu $a1, $zero, 2
    v1 = 0x21 << 16;                                            // 0x00198c58: lui $v1, 0x21
    v1 = v1 + 0x6850;                                           // 0x00198c5c: addiu $v1, $v1, 0x6850
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x00198c60: sw $a1, 0x48($a0)
    goto label_0x1991b8;                                        // 0x00198c64: b 0x1991b8
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x00198c68: sw $v1, 0x4c($a0)
label_0x198c6c:
    a2 = a3 | 0x1025;                                           // 0x00198c6c: ori $a2, $a3, 0x1025
    if (a1 == a2) goto label_0x198cb8;                          // 0x00198c70: beq $a1, $a2, 0x198cb8
    a2 = v1 | 0x1025;                                           // 0x00198c74: ori $a2, $v1, 0x1025
    if (a1 == a2) goto label_0x198cb8;                          // 0x00198c78: beq $a1, $a2, 0x198cb8
    /* nop */                                                   // 0x00198c7c: nop 
    a2 = a3 | 0x1035;                                           // 0x00198c80: ori $a2, $a3, 0x1035
    if (a1 == a2) goto label_0x198ca0;                          // 0x00198c84: beq $a1, $a2, 0x198ca0
    /* nop */                                                   // 0x00198c88: nop 
    v1 = v1 | 0x1035;                                           // 0x00198c8c: ori $v1, $v1, 0x1035
    if (a1 == v1) goto label_0x198ca0;                          // 0x00198c90: beq $a1, $v1, 0x198ca0
    /* nop */                                                   // 0x00198c94: nop 
    goto label_0x1991b8;                                        // 0x00198c98: b 0x1991b8
    /* nop */                                                   // 0x00198c9c: nop 
label_0x198ca0:
    a1 = 3;                                                     // 0x00198ca0: addiu $a1, $zero, 3
    v1 = 0x21 << 16;                                            // 0x00198ca4: lui $v1, 0x21
    v1 = v1 + 0x6880;                                           // 0x00198ca8: addiu $v1, $v1, 0x6880
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x00198cac: sw $a1, 0x48($a0)
    goto label_0x1991b8;                                        // 0x00198cb0: b 0x1991b8
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x00198cb4: sw $v1, 0x4c($a0)
label_0x198cb8:
    a1 = 4;                                                     // 0x00198cb8: addiu $a1, $zero, 4
    v1 = 0x21 << 16;                                            // 0x00198cbc: lui $v1, 0x21
    v1 = v1 + 0x68b0;                                           // 0x00198cc0: addiu $v1, $v1, 0x68b0
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x00198cc4: sw $a1, 0x48($a0)
    goto label_0x1991b8;                                        // 0x00198cc8: b 0x1991b8
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x00198ccc: sw $v1, 0x4c($a0)
label_0x198cd0:
    a2 = a3 | 0x1025;                                           // 0x00198cd0: ori $a2, $a3, 0x1025
    if (a1 == a2) goto label_0x198d1c;                          // 0x00198cd4: beq $a1, $a2, 0x198d1c
    a2 = v1 | 0x1025;                                           // 0x00198cd8: ori $a2, $v1, 0x1025
    if (a1 == a2) goto label_0x198d1c;                          // 0x00198cdc: beq $a1, $a2, 0x198d1c
    /* nop */                                                   // 0x00198ce0: nop 
    a2 = a3 | 0x1035;                                           // 0x00198ce4: ori $a2, $a3, 0x1035
    if (a1 == a2) goto label_0x198d04;                          // 0x00198ce8: beq $a1, $a2, 0x198d04
    /* nop */                                                   // 0x00198cec: nop 
    v1 = v1 | 0x1035;                                           // 0x00198cf0: ori $v1, $v1, 0x1035
    if (a1 == v1) goto label_0x198d04;                          // 0x00198cf4: beq $a1, $v1, 0x198d04
    /* nop */                                                   // 0x00198cf8: nop 
    goto label_0x1991b8;                                        // 0x00198cfc: b 0x1991b8
    /* nop */                                                   // 0x00198d00: nop 
label_0x198d04:
    a1 = 5;                                                     // 0x00198d04: addiu $a1, $zero, 5
    v1 = 0x21 << 16;                                            // 0x00198d08: lui $v1, 0x21
    v1 = v1 + 0x68e0;                                           // 0x00198d0c: addiu $v1, $v1, 0x68e0
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x00198d10: sw $a1, 0x48($a0)
    goto label_0x1991b8;                                        // 0x00198d14: b 0x1991b8
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x00198d18: sw $v1, 0x4c($a0)
label_0x198d1c:
    a1 = 6;                                                     // 0x00198d1c: addiu $a1, $zero, 6
    v1 = 0x21 << 16;                                            // 0x00198d20: lui $v1, 0x21
    v1 = v1 + 0x6910;                                           // 0x00198d24: addiu $v1, $v1, 0x6910
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x00198d28: sw $a1, 0x48($a0)
    goto label_0x1991b8;                                        // 0x00198d2c: b 0x1991b8
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x00198d30: sw $v1, 0x4c($a0)
label_0x198d34:
    a2 = 0x12 << 16;                                            // 0x00198d34: lui $a2, 0x12
    a2 = a2 | 0x1035;                                           // 0x00198d38: ori $a2, $a2, 0x1035
    if (a1 == a2) goto label_0x198d58;                          // 0x00198d3c: beq $a1, $a2, 0x198d58
    /* nop */                                                   // 0x00198d40: nop 
    v1 = v1 | 0x1035;                                           // 0x00198d44: ori $v1, $v1, 0x1035
    if (a1 == v1) goto label_0x198d58;                          // 0x00198d48: beq $a1, $v1, 0x198d58
    /* nop */                                                   // 0x00198d4c: nop 
    goto label_0x1991b8;                                        // 0x00198d50: b 0x1991b8
    /* nop */                                                   // 0x00198d54: nop 
label_0x198d58:
    a1 = 7;                                                     // 0x00198d58: addiu $a1, $zero, 7
    v1 = 0x21 << 16;                                            // 0x00198d5c: lui $v1, 0x21
    v1 = v1 + 0x6940;                                           // 0x00198d60: addiu $v1, $v1, 0x6940
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x00198d64: sw $a1, 0x48($a0)
    goto label_0x1991b8;                                        // 0x00198d68: b 0x1991b8
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x00198d6c: sw $v1, 0x4c($a0)
label_0x198d70:
    a2 = 0x12 << 16;                                            // 0x00198d70: lui $a2, 0x12
    a2 = a2 | 0x1035;                                           // 0x00198d74: ori $a2, $a2, 0x1035
    if (a1 == a2) goto label_0x198d94;                          // 0x00198d78: beq $a1, $a2, 0x198d94
    /* nop */                                                   // 0x00198d7c: nop 
    v1 = v1 | 0x1035;                                           // 0x00198d80: ori $v1, $v1, 0x1035
    if (a1 == v1) goto label_0x198d94;                          // 0x00198d84: beq $a1, $v1, 0x198d94
    /* nop */                                                   // 0x00198d88: nop 
    goto label_0x1991b8;                                        // 0x00198d8c: b 0x1991b8
    /* nop */                                                   // 0x00198d90: nop 
label_0x198d94:
    a1 = 8;                                                     // 0x00198d94: addiu $a1, $zero, 8
    v1 = 0x21 << 16;                                            // 0x00198d98: lui $v1, 0x21
    v1 = v1 + 0x6970;                                           // 0x00198d9c: addiu $v1, $v1, 0x6970
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x00198da0: sw $a1, 0x48($a0)
    goto label_0x1991b8;                                        // 0x00198da4: b 0x1991b8
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x00198da8: sw $v1, 0x4c($a0)
label_0x198dac:
    a2 = 0x12 << 16;                                            // 0x00198dac: lui $a2, 0x12
    a2 = a2 | 0x1035;                                           // 0x00198db0: ori $a2, $a2, 0x1035
    if (a1 == a2) goto label_0x198dd0;                          // 0x00198db4: beq $a1, $a2, 0x198dd0
    /* nop */                                                   // 0x00198db8: nop 
    v1 = v1 | 0x1035;                                           // 0x00198dbc: ori $v1, $v1, 0x1035
    if (a1 == v1) goto label_0x198dd0;                          // 0x00198dc0: beq $a1, $v1, 0x198dd0
    /* nop */                                                   // 0x00198dc4: nop 
    goto label_0x1991b8;                                        // 0x00198dc8: b 0x1991b8
    /* nop */                                                   // 0x00198dcc: nop 
label_0x198dd0:
    a1 = 9;                                                     // 0x00198dd0: addiu $a1, $zero, 9
    v1 = 0x21 << 16;                                            // 0x00198dd4: lui $v1, 0x21
    v1 = v1 + 0x69a0;                                           // 0x00198dd8: addiu $v1, $v1, 0x69a0
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x00198ddc: sw $a1, 0x48($a0)
    goto label_0x1991b8;                                        // 0x00198de0: b 0x1991b8
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x00198de4: sw $v1, 0x4c($a0)
label_0x198de8:
    a2 = 0x12 << 16;                                            // 0x00198de8: lui $a2, 0x12
    a2 = a2 | 0x1035;                                           // 0x00198dec: ori $a2, $a2, 0x1035
    if (a1 == a2) goto label_0x198e0c;                          // 0x00198df0: beq $a1, $a2, 0x198e0c
    /* nop */                                                   // 0x00198df4: nop 
    v1 = v1 | 0x1035;                                           // 0x00198df8: ori $v1, $v1, 0x1035
    if (a1 == v1) goto label_0x198e0c;                          // 0x00198dfc: beq $a1, $v1, 0x198e0c
    /* nop */                                                   // 0x00198e00: nop 
    goto label_0x1991b8;                                        // 0x00198e04: b 0x1991b8
    /* nop */                                                   // 0x00198e08: nop 
label_0x198e0c:
    a1 = 0xa;                                                   // 0x00198e0c: addiu $a1, $zero, 0xa
    v1 = 0x21 << 16;                                            // 0x00198e10: lui $v1, 0x21
    v1 = v1 + 0x69d0;                                           // 0x00198e14: addiu $v1, $v1, 0x69d0
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x00198e18: sw $a1, 0x48($a0)
    goto label_0x1991b8;                                        // 0x00198e1c: b 0x1991b8
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x00198e20: sw $v1, 0x4c($a0)
label_0x198e24:
    a2 = 0x22 << 16;                                            // 0x00198e24: lui $a2, 0x22
    a2 = a2 | 0x1135;                                           // 0x00198e28: ori $a2, $a2, 0x1135
    if (a1 == a2) goto label_0x198e7c;                          // 0x00198e2c: beq $a1, $a2, 0x198e7c
    a2 = 0x32 << 16;                                            // 0x00198e30: lui $a2, 0x32
    a2 = a2 | 0x1135;                                           // 0x00198e34: ori $a2, $a2, 0x1135
    if (a1 == a2) goto label_0x198e7c;                          // 0x00198e38: beq $a1, $a2, 0x198e7c
    /* nop */                                                   // 0x00198e3c: nop 
    a2 = 0x12 << 16;                                            // 0x00198e40: lui $a2, 0x12
    a2 = a2 | 0x1035;                                           // 0x00198e44: ori $a2, $a2, 0x1035
    if (a1 == a2) goto label_0x198e64;                          // 0x00198e48: beq $a1, $a2, 0x198e64
    /* nop */                                                   // 0x00198e4c: nop 
    v1 = v1 | 0x1035;                                           // 0x00198e50: ori $v1, $v1, 0x1035
    if (a1 == v1) goto label_0x198e64;                          // 0x00198e54: beq $a1, $v1, 0x198e64
    /* nop */                                                   // 0x00198e58: nop 
    goto label_0x1991b8;                                        // 0x00198e5c: b 0x1991b8
    /* nop */                                                   // 0x00198e60: nop 
label_0x198e64:
    a1 = 0xb;                                                   // 0x00198e64: addiu $a1, $zero, 0xb
    v1 = 0x21 << 16;                                            // 0x00198e68: lui $v1, 0x21
    v1 = v1 + 0x6a00;                                           // 0x00198e6c: addiu $v1, $v1, 0x6a00
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x00198e70: sw $a1, 0x48($a0)
    goto label_0x1991b8;                                        // 0x00198e74: b 0x1991b8
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x00198e78: sw $v1, 0x4c($a0)
label_0x198e7c:
    a1 = 0xc;                                                   // 0x00198e7c: addiu $a1, $zero, 0xc
    v1 = 0x21 << 16;                                            // 0x00198e80: lui $v1, 0x21
    v1 = v1 + 0x6a40;                                           // 0x00198e84: addiu $v1, $v1, 0x6a40
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x00198e88: sw $a1, 0x48($a0)
    goto label_0x1991b8;                                        // 0x00198e8c: b 0x1991b8
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x00198e90: sw $v1, 0x4c($a0)
label_0x198e94:
    a2 = 0x12 << 16;                                            // 0x00198e94: lui $a2, 0x12
    a2 = a2 | 0x1035;                                           // 0x00198e98: ori $a2, $a2, 0x1035
    if (a1 == a2) goto label_0x198eb8;                          // 0x00198e9c: beq $a1, $a2, 0x198eb8
    /* nop */                                                   // 0x00198ea0: nop 
    v1 = v1 | 0x1035;                                           // 0x00198ea4: ori $v1, $v1, 0x1035
    if (a1 == v1) goto label_0x198eb8;                          // 0x00198ea8: beq $a1, $v1, 0x198eb8
    /* nop */                                                   // 0x00198eac: nop 
    goto label_0x1991b8;                                        // 0x00198eb0: b 0x1991b8
    /* nop */                                                   // 0x00198eb4: nop 
label_0x198eb8:
    a1 = 0xd;                                                   // 0x00198eb8: addiu $a1, $zero, 0xd
    v1 = 0x21 << 16;                                            // 0x00198ebc: lui $v1, 0x21
    v1 = v1 + 0x6a70;                                           // 0x00198ec0: addiu $v1, $v1, 0x6a70
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x00198ec4: sw $a1, 0x48($a0)
    goto label_0x1991b8;                                        // 0x00198ec8: b 0x1991b8
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x00198ecc: sw $v1, 0x4c($a0)
label_0x198ed0:
    a2 = 0x12 << 16;                                            // 0x00198ed0: lui $a2, 0x12
    a2 = a2 | 0x1035;                                           // 0x00198ed4: ori $a2, $a2, 0x1035
    if (a1 == a2) goto label_0x198ef4;                          // 0x00198ed8: beq $a1, $a2, 0x198ef4
    /* nop */                                                   // 0x00198edc: nop 
    v1 = v1 | 0x1035;                                           // 0x00198ee0: ori $v1, $v1, 0x1035
    if (a1 == v1) goto label_0x198ef4;                          // 0x00198ee4: beq $a1, $v1, 0x198ef4
    /* nop */                                                   // 0x00198ee8: nop 
    goto label_0x1991b8;                                        // 0x00198eec: b 0x1991b8
    /* nop */                                                   // 0x00198ef0: nop 
label_0x198ef4:
    a1 = 0xe;                                                   // 0x00198ef4: addiu $a1, $zero, 0xe
    v1 = 0x21 << 16;                                            // 0x00198ef8: lui $v1, 0x21
    v1 = v1 + 0x6aa0;                                           // 0x00198efc: addiu $v1, $v1, 0x6aa0
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x00198f00: sw $a1, 0x48($a0)
    goto label_0x1991b8;                                        // 0x00198f04: b 0x1991b8
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x00198f08: sw $v1, 0x4c($a0)
label_0x198f0c:
    a2 = 0x22 << 16;                                            // 0x00198f0c: lui $a2, 0x22
    a2 = a2 | 0x1135;                                           // 0x00198f10: ori $a2, $a2, 0x1135
    if (a1 == a2) goto label_0x198f64;                          // 0x00198f14: beq $a1, $a2, 0x198f64
    a2 = 0x32 << 16;                                            // 0x00198f18: lui $a2, 0x32
    a2 = a2 | 0x1135;                                           // 0x00198f1c: ori $a2, $a2, 0x1135
    if (a1 == a2) goto label_0x198f64;                          // 0x00198f20: beq $a1, $a2, 0x198f64
    /* nop */                                                   // 0x00198f24: nop 
    a2 = 0x12 << 16;                                            // 0x00198f28: lui $a2, 0x12
    a2 = a2 | 0x1035;                                           // 0x00198f2c: ori $a2, $a2, 0x1035
    if (a1 == a2) goto label_0x198f4c;                          // 0x00198f30: beq $a1, $a2, 0x198f4c
    /* nop */                                                   // 0x00198f34: nop 
    v1 = v1 | 0x1035;                                           // 0x00198f38: ori $v1, $v1, 0x1035
    if (a1 == v1) goto label_0x198f4c;                          // 0x00198f3c: beq $a1, $v1, 0x198f4c
    /* nop */                                                   // 0x00198f40: nop 
    goto label_0x1991b8;                                        // 0x00198f44: b 0x1991b8
    /* nop */                                                   // 0x00198f48: nop 
label_0x198f4c:
    a1 = 0xf;                                                   // 0x00198f4c: addiu $a1, $zero, 0xf
    v1 = 0x21 << 16;                                            // 0x00198f50: lui $v1, 0x21
    v1 = v1 + 0x6ad0;                                           // 0x00198f54: addiu $v1, $v1, 0x6ad0
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x00198f58: sw $a1, 0x48($a0)
    goto label_0x1991b8;                                        // 0x00198f5c: b 0x1991b8
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x00198f60: sw $v1, 0x4c($a0)
label_0x198f64:
    a1 = 0x10;                                                  // 0x00198f64: addiu $a1, $zero, 0x10
    v1 = 0x21 << 16;                                            // 0x00198f68: lui $v1, 0x21
    v1 = v1 + 0x6b10;                                           // 0x00198f6c: addiu $v1, $v1, 0x6b10
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x00198f70: sw $a1, 0x48($a0)
    goto label_0x1991b8;                                        // 0x00198f74: b 0x1991b8
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x00198f78: sw $v1, 0x4c($a0)
label_0x198f7c:
    v1 = 0x22 << 16;                                            // 0x00198f7c: lui $v1, 0x22
    v1 = v1 | 0x1135;                                           // 0x00198f80: ori $v1, $v1, 0x1135
    if (a1 == v1) goto label_0x198fa0;                          // 0x00198f84: beq $a1, $v1, 0x198fa0
    v1 = 0x32 << 16;                                            // 0x00198f88: lui $v1, 0x32
    v1 = v1 | 0x1135;                                           // 0x00198f8c: ori $v1, $v1, 0x1135
    if (a1 == v1) goto label_0x198fa0;                          // 0x00198f90: beq $a1, $v1, 0x198fa0
    /* nop */                                                   // 0x00198f94: nop 
    goto label_0x1991b8;                                        // 0x00198f98: b 0x1991b8
    /* nop */                                                   // 0x00198f9c: nop 
label_0x198fa0:
    a1 = 0x11;                                                  // 0x00198fa0: addiu $a1, $zero, 0x11
    v1 = 0x21 << 16;                                            // 0x00198fa4: lui $v1, 0x21
    v1 = v1 + 0x6b50;                                           // 0x00198fa8: addiu $v1, $v1, 0x6b50
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x00198fac: sw $a1, 0x48($a0)
    goto label_0x1991b8;                                        // 0x00198fb0: b 0x1991b8
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x00198fb4: sw $v1, 0x4c($a0)
label_0x198fb8:
    a2 = 0x22 << 16;                                            // 0x00198fb8: lui $a2, 0x22
    a2 = a2 | 0x1135;                                           // 0x00198fbc: ori $a2, $a2, 0x1135
    if (a1 == a2) goto label_0x199010;                          // 0x00198fc0: beq $a1, $a2, 0x199010
    a2 = 0x32 << 16;                                            // 0x00198fc4: lui $a2, 0x32
    a2 = a2 | 0x1135;                                           // 0x00198fc8: ori $a2, $a2, 0x1135
    if (a1 == a2) goto label_0x199010;                          // 0x00198fcc: beq $a1, $a2, 0x199010
    /* nop */                                                   // 0x00198fd0: nop 
    a2 = 0x12 << 16;                                            // 0x00198fd4: lui $a2, 0x12
    a2 = a2 | 0x1035;                                           // 0x00198fd8: ori $a2, $a2, 0x1035
    if (a1 == a2) goto label_0x198ff8;                          // 0x00198fdc: beq $a1, $a2, 0x198ff8
    /* nop */                                                   // 0x00198fe0: nop 
    v1 = v1 | 0x1035;                                           // 0x00198fe4: ori $v1, $v1, 0x1035
    if (a1 == v1) goto label_0x198ff8;                          // 0x00198fe8: beq $a1, $v1, 0x198ff8
    /* nop */                                                   // 0x00198fec: nop 
    goto label_0x1991b8;                                        // 0x00198ff0: b 0x1991b8
    /* nop */                                                   // 0x00198ff4: nop 
label_0x198ff8:
    a1 = 0x12;                                                  // 0x00198ff8: addiu $a1, $zero, 0x12
    v1 = 0x21 << 16;                                            // 0x00198ffc: lui $v1, 0x21
    v1 = v1 + 0x6b80;                                           // 0x00199000: addiu $v1, $v1, 0x6b80
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x00199004: sw $a1, 0x48($a0)
    goto label_0x1991b8;                                        // 0x00199008: b 0x1991b8
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x0019900c: sw $v1, 0x4c($a0)
label_0x199010:
    a1 = 0x13;                                                  // 0x00199010: addiu $a1, $zero, 0x13
    v1 = 0x21 << 16;                                            // 0x00199014: lui $v1, 0x21
    v1 = v1 + 0x6bc0;                                           // 0x00199018: addiu $v1, $v1, 0x6bc0
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x0019901c: sw $a1, 0x48($a0)
    goto label_0x1991b8;                                        // 0x00199020: b 0x1991b8
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x00199024: sw $v1, 0x4c($a0)
label_0x199028:
    a2 = 0x22 << 16;                                            // 0x00199028: lui $a2, 0x22
    a2 = a2 | 0x1135;                                           // 0x0019902c: ori $a2, $a2, 0x1135
    if (a1 == a2) goto label_0x199080;                          // 0x00199030: beq $a1, $a2, 0x199080
    a2 = 0x32 << 16;                                            // 0x00199034: lui $a2, 0x32
    a2 = a2 | 0x1135;                                           // 0x00199038: ori $a2, $a2, 0x1135
    if (a1 == a2) goto label_0x199080;                          // 0x0019903c: beq $a1, $a2, 0x199080
    /* nop */                                                   // 0x00199040: nop 
    a2 = 0x12 << 16;                                            // 0x00199044: lui $a2, 0x12
    a2 = a2 | 0x1035;                                           // 0x00199048: ori $a2, $a2, 0x1035
    if (a1 == a2) goto label_0x199068;                          // 0x0019904c: beq $a1, $a2, 0x199068
    /* nop */                                                   // 0x00199050: nop 
    v1 = v1 | 0x1035;                                           // 0x00199054: ori $v1, $v1, 0x1035
    if (a1 == v1) goto label_0x199068;                          // 0x00199058: beq $a1, $v1, 0x199068
    /* nop */                                                   // 0x0019905c: nop 
    goto label_0x1991b8;                                        // 0x00199060: b 0x1991b8
    /* nop */                                                   // 0x00199064: nop 
label_0x199068:
    a1 = 0x14;                                                  // 0x00199068: addiu $a1, $zero, 0x14
    v1 = 0x21 << 16;                                            // 0x0019906c: lui $v1, 0x21
    v1 = v1 + 0x6bf0;                                           // 0x00199070: addiu $v1, $v1, 0x6bf0
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x00199074: sw $a1, 0x48($a0)
    goto label_0x1991b8;                                        // 0x00199078: b 0x1991b8
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x0019907c: sw $v1, 0x4c($a0)
label_0x199080:
    a1 = 0x15;                                                  // 0x00199080: addiu $a1, $zero, 0x15
    v1 = 0x21 << 16;                                            // 0x00199084: lui $v1, 0x21
    v1 = v1 + 0x6c30;                                           // 0x00199088: addiu $v1, $v1, 0x6c30
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x0019908c: sw $a1, 0x48($a0)
    goto label_0x1991b8;                                        // 0x00199090: b 0x1991b8
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x00199094: sw $v1, 0x4c($a0)
label_0x199098:
    a2 = 0x22 << 16;                                            // 0x00199098: lui $a2, 0x22
    a2 = a2 | 0x1135;                                           // 0x0019909c: ori $a2, $a2, 0x1135
    if (a1 == a2) goto label_0x1990f0;                          // 0x001990a0: beq $a1, $a2, 0x1990f0
    a2 = 0x32 << 16;                                            // 0x001990a4: lui $a2, 0x32
    a2 = a2 | 0x1135;                                           // 0x001990a8: ori $a2, $a2, 0x1135
    if (a1 == a2) goto label_0x1990f0;                          // 0x001990ac: beq $a1, $a2, 0x1990f0
    /* nop */                                                   // 0x001990b0: nop 
    a2 = 0x12 << 16;                                            // 0x001990b4: lui $a2, 0x12
    a2 = a2 | 0x1035;                                           // 0x001990b8: ori $a2, $a2, 0x1035
    if (a1 == a2) goto label_0x1990d8;                          // 0x001990bc: beq $a1, $a2, 0x1990d8
    /* nop */                                                   // 0x001990c0: nop 
    v1 = v1 | 0x1035;                                           // 0x001990c4: ori $v1, $v1, 0x1035
    if (a1 == v1) goto label_0x1990d8;                          // 0x001990c8: beq $a1, $v1, 0x1990d8
    /* nop */                                                   // 0x001990cc: nop 
    goto label_0x1991b8;                                        // 0x001990d0: b 0x1991b8
    /* nop */                                                   // 0x001990d4: nop 
label_0x1990d8:
    a1 = 0x16;                                                  // 0x001990d8: addiu $a1, $zero, 0x16
    v1 = 0x21 << 16;                                            // 0x001990dc: lui $v1, 0x21
    v1 = v1 + 0x6c60;                                           // 0x001990e0: addiu $v1, $v1, 0x6c60
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x001990e4: sw $a1, 0x48($a0)
    goto label_0x1991b8;                                        // 0x001990e8: b 0x1991b8
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x001990ec: sw $v1, 0x4c($a0)
label_0x1990f0:
    a1 = 0x17;                                                  // 0x001990f0: addiu $a1, $zero, 0x17
    v1 = 0x21 << 16;                                            // 0x001990f4: lui $v1, 0x21
    v1 = v1 + 0x6ca0;                                           // 0x001990f8: addiu $v1, $v1, 0x6ca0
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x001990fc: sw $a1, 0x48($a0)
    goto label_0x1991b8;                                        // 0x00199100: b 0x1991b8
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x00199104: sw $v1, 0x4c($a0)
label_0x199108:
    a2 = 0x12 << 16;                                            // 0x00199108: lui $a2, 0x12
    a2 = a2 | 0x1035;                                           // 0x0019910c: ori $a2, $a2, 0x1035
    if (a1 == a2) goto label_0x19912c;                          // 0x00199110: beq $a1, $a2, 0x19912c
    /* nop */                                                   // 0x00199114: nop 
    v1 = v1 | 0x1035;                                           // 0x00199118: ori $v1, $v1, 0x1035
    if (a1 == v1) goto label_0x19912c;                          // 0x0019911c: beq $a1, $v1, 0x19912c
    /* nop */                                                   // 0x00199120: nop 
    goto label_0x1991b8;                                        // 0x00199124: b 0x1991b8
    /* nop */                                                   // 0x00199128: nop 
label_0x19912c:
    a1 = 0x18;                                                  // 0x0019912c: addiu $a1, $zero, 0x18
    v1 = 0x21 << 16;                                            // 0x00199130: lui $v1, 0x21
    v1 = v1 + 0x6cd0;                                           // 0x00199134: addiu $v1, $v1, 0x6cd0
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x00199138: sw $a1, 0x48($a0)
    goto label_0x1991b8;                                        // 0x0019913c: b 0x1991b8
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x00199140: sw $v1, 0x4c($a0)
label_0x199144:
    a2 = 0x12 << 16;                                            // 0x00199144: lui $a2, 0x12
    a2 = a2 | 0x1035;                                           // 0x00199148: ori $a2, $a2, 0x1035
    if (a1 == a2) goto label_0x199168;                          // 0x0019914c: beq $a1, $a2, 0x199168
    /* nop */                                                   // 0x00199150: nop 
    v1 = v1 | 0x1035;                                           // 0x00199154: ori $v1, $v1, 0x1035
    if (a1 == v1) goto label_0x199168;                          // 0x00199158: beq $a1, $v1, 0x199168
    /* nop */                                                   // 0x0019915c: nop 
    goto label_0x1991b8;                                        // 0x00199160: b 0x1991b8
    /* nop */                                                   // 0x00199164: nop 
label_0x199168:
    a1 = 0x19;                                                  // 0x00199168: addiu $a1, $zero, 0x19
    v1 = 0x21 << 16;                                            // 0x0019916c: lui $v1, 0x21
    v1 = v1 + 0x6d00;                                           // 0x00199170: addiu $v1, $v1, 0x6d00
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x00199174: sw $a1, 0x48($a0)
    goto label_0x1991b8;                                        // 0x00199178: b 0x1991b8
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x0019917c: sw $v1, 0x4c($a0)
label_0x199180:
    a2 = 0x12 << 16;                                            // 0x00199180: lui $a2, 0x12
    a2 = a2 | 0x1035;                                           // 0x00199184: ori $a2, $a2, 0x1035
    if (a1 == a2) goto label_0x1991a4;                          // 0x00199188: beq $a1, $a2, 0x1991a4
    /* nop */                                                   // 0x0019918c: nop 
    v1 = v1 | 0x1035;                                           // 0x00199190: ori $v1, $v1, 0x1035
    if (a1 == v1) goto label_0x1991a4;                          // 0x00199194: beq $a1, $v1, 0x1991a4
    /* nop */                                                   // 0x00199198: nop 
    goto label_0x1991b8;                                        // 0x0019919c: b 0x1991b8
    /* nop */                                                   // 0x001991a0: nop 
label_0x1991a4:
    a1 = 0x1a;                                                  // 0x001991a4: addiu $a1, $zero, 0x1a
    v1 = 0x21 << 16;                                            // 0x001991a8: lui $v1, 0x21
    v1 = v1 + 0x6d30;                                           // 0x001991ac: addiu $v1, $v1, 0x6d30
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x001991b0: sw $a1, 0x48($a0)
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x001991b4: sw $v1, 0x4c($a0)
label_0x1991b8:
    return;                                                     // 0x001991b8: jr $ra
    /* nop */                                                   // 0x001991bc: nop 
}