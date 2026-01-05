void func_001058e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001058e0: addiu $sp, $sp, -0x20
    if (s0 == 0) goto label_0x105bc0;                           // 0x001058f4: beqz $s0, 0x105bc0
    func_00107d30();  // 107d30                                // 0x001058fc: jal 0x107d30
    /* nop */                                                   // 0x00105900: nop 
    t1 = s0 + -8;                                               // 0x00105904: addiu $t1, $s0, -8
    a2 = *(int32_t*)((t1) + 4);                                 // 0x00105908: lw $a2, 4($t1)
    v0 = -2;                                                    // 0x0010590c: addiu $v0, $zero, -2
    t4 = 0x1f << 16;                                            // 0x00105910: lui $t4, 0x1f
    a0 = -4;                                                    // 0x00105914: addiu $a0, $zero, -4
    t0 = a2 & v0;                                               // 0x00105918: and $t0, $a2, $v0
    t2 = t4 + -0x200;                                           // 0x0010591c: addiu $t2, $t4, -0x200
    a1 = t1 + t0;                                               // 0x00105920: addu $a1, $t1, $t0
    v1 = g_001efe08;  // Global at 0x001efe08                   // 0x00105924: lw $v1, 8($t2)
    v0 = g_001efe88;  // Global at 0x001efe88                   // 0x00105928: lw $v0, 4($a1)
    if (a1 != v1) goto label_0x1059a8;                          // 0x0010592c: bne $a1, $v1, 0x1059a8
    a0 = v0 & a0;                                               // 0x00105930: and $a0, $v0, $a0
    v0 = a2 & 1;                                                // 0x00105934: andi $v0, $a2, 1
    if (v0 != 0) goto label_0x10595c;                           // 0x00105938: bnez $v0, 0x10595c
    t0 = t0 + a0;                                               // 0x0010593c: addu $t0, $t0, $a0
    v1 = *(int32_t*)(t1);                                       // 0x00105940: lw $v1, 0($t1)
    t1 = t1 - v1;                                               // 0x00105944: subu $t1, $t1, $v1
    t0 = t0 + v1;                                               // 0x00105948: addu $t0, $t0, $v1
    a3 = *(int32_t*)((t1) + 0xc);                               // 0x0010594c: lw $a3, 0xc($t1)
    a2 = *(int32_t*)((t1) + 8);                                 // 0x00105950: lw $a2, 8($t1)
    *(uint32_t*)((a2) + 0xc) = a3;                              // 0x00105954: sw $a3, 0xc($a2)
    *(uint32_t*)((a3) + 8) = a2;                                // 0x00105958: sw $a2, 8($a3)
label_0x10595c:
    v1 = t0 | 1;                                                // 0x0010595c: ori $v1, $t0, 1
    g_001efe08 = t1;  // Global at 0x001efe08                   // 0x00105960: sw $t1, 8($t2)
    *(uint32_t*)((t1) + 4) = v1;                                // 0x00105964: sw $v1, 4($t1)
    a0 = 0x1f << 16;                                            // 0x00105968: lui $a0, 0x1f
    v0 = ((unsigned)v0 < (unsigned)v1) ? 1 : 0;                 // 0x00105978: sltu $v0, $v0, $v1
    if (v0 != 0) goto label_0x105994;                           // 0x0010597c: bnez $v0, 0x105994
    v0 = 0x1f << 16;                                            // 0x00105984: lui $v0, 0x1f
    func_00105bd8();  // 105bd8                                // 0x00105988: jal 0x105bd8
    a1 = g_001f0210;  // Global at 0x001f0210                   // 0x0010598c: lw $a1, 0x210($v0)
label_0x105994:
    return func_00107e00();  // Tail call                        // 0x001059a0: j 0x107db0
    sp = sp + 0x20;                                             // 0x001059a4: addiu $sp, $sp, 0x20
label_0x1059a8:
    v0 = a2 & 1;                                                // 0x001059a8: andi $v0, $a2, 1
    g_001efe88 = a0;  // Global at 0x001efe88                   // 0x001059ac: sw $a0, 4($a1)
    if (v0 != 0) goto label_0x1059ec;                           // 0x001059b0: bnez $v0, 0x1059ec
    v1 = *(int32_t*)(t1);                                       // 0x001059b8: lw $v1, 0($t1)
    v0 = t2 + 8;                                                // 0x001059bc: addiu $v0, $t2, 8
    t1 = t1 - v1;                                               // 0x001059c0: subu $t1, $t1, $v1
    t0 = t0 + v1;                                               // 0x001059c4: addu $t0, $t0, $v1
    v1 = *(int32_t*)((t1) + 8);                                 // 0x001059c8: lw $v1, 8($t1)
    if (v1 != v0) goto label_0x1059e0;                          // 0x001059cc: bnel $v1, $v0, 0x1059e0
    a3 = *(int32_t*)((t1) + 0xc);                               // 0x001059d0: lw $a3, 0xc($t1)
    goto label_0x1059ec;                                        // 0x001059d4: b 0x1059ec
    t3 = 1;                                                     // 0x001059d8: addiu $t3, $zero, 1
    /* nop */                                                   // 0x001059dc: nop 
label_0x1059e0:
    *(uint32_t*)((a2) + 0xc) = a3;                              // 0x001059e4: sw $a3, 0xc($a2)
    *(uint32_t*)((a3) + 8) = a2;                                // 0x001059e8: sw $a2, 8($a3)
label_0x1059ec:
    v1 = a1 + a0;                                               // 0x001059ec: addu $v1, $a1, $a0
    v0 = *(int32_t*)((v1) + 4);                                 // 0x001059f0: lw $v0, 4($v1)
    v0 = v0 & 1;                                                // 0x001059f4: andi $v0, $v0, 1
    if (v0 != 0) goto label_0x105a50;                           // 0x001059f8: bnez $v0, 0x105a50
    v0 = t0 | 1;                                                // 0x001059fc: ori $v0, $t0, 1
    if (t3 != 0) goto label_0x105a38;                           // 0x00105a00: bnez $t3, 0x105a38
    t0 = t0 + a0;                                               // 0x00105a04: addu $t0, $t0, $a0
    v0 = 0x1f << 16;                                            // 0x00105a08: lui $v0, 0x1f
    v1 = g_001efe8c;  // Global at 0x001efe8c                   // 0x00105a0c: lw $v1, 8($a1)
    v0 = v0 + -0x1f0;                                           // 0x00105a10: addiu $v0, $v0, -0x1f0
    v0 = v0 + -8;                                               // 0x00105a14: addiu $v0, $v0, -8
    if (v1 != v0) goto label_0x105a40;                          // 0x00105a18: bnel $v1, $v0, 0x105a40
    a3 = g_001efe90;  // Global at 0x001efe90                   // 0x00105a1c: lw $a3, 0xc($a1)
    *(uint32_t*)((v1) + 0xc) = t1;                              // 0x00105a20: sw $t1, 0xc($v1)
    t3 = 1;                                                     // 0x00105a24: addiu $t3, $zero, 1
    *(uint32_t*)((v1) + 8) = t1;                                // 0x00105a28: sw $t1, 8($v1)
    *(uint32_t*)((t1) + 8) = v1;                                // 0x00105a2c: sw $v1, 8($t1)
    goto label_0x105a4c;                                        // 0x00105a30: b 0x105a4c
    *(uint32_t*)((t1) + 0xc) = v1;                              // 0x00105a34: sw $v1, 0xc($t1)
label_0x105a38:
    v1 = g_001efe8c;  // Global at 0x001efe8c                   // 0x00105a38: lw $v1, 8($a1)
    a3 = g_001efe90;  // Global at 0x001efe90                   // 0x00105a3c: lw $a3, 0xc($a1)
label_0x105a40:
    *(uint32_t*)((a2) + 0xc) = a3;                              // 0x00105a44: sw $a3, 0xc($a2)
    *(uint32_t*)((a3) + 8) = a2;                                // 0x00105a48: sw $a2, 8($a3)
label_0x105a4c:
    v0 = t0 | 1;                                                // 0x00105a4c: ori $v0, $t0, 1
label_0x105a50:
    v1 = t1 + t0;                                               // 0x00105a50: addu $v1, $t1, $t0
    *(uint32_t*)((t1) + 4) = v0;                                // 0x00105a54: sw $v0, 4($t1)
    if (t3 != 0) goto label_0x105ba8;                           // 0x00105a58: bnez $t3, 0x105ba8
    *(uint32_t*)(v1) = t0;                                      // 0x00105a5c: sw $t0, 0($v1)
    v0 = ((unsigned)t0 < (unsigned)0x200) ? 1 : 0;              // 0x00105a60: sltiu $v0, $t0, 0x200
    /* beqzl $v0, 0x105ab0 */                                   // 0x00105a64: beqzl $v0, 0x105ab0
    v1 = (unsigned)t0 >> 9;                                     // 0x00105a68: srl $v1, $t0, 9
    a1 = (unsigned)t0 >> 3;                                     // 0x00105a6c: srl $a1, $t0, 3
    a0 = t4 + -0x200;                                           // 0x00105a70: addiu $a0, $t4, -0x200
    v1 = a1 << 3;                                               // 0x00105a74: sll $v1, $a1, 3
    a1 = (unsigned)a1 >> 2;                                     // 0x00105a78: srl $a1, $a1, 2
    v0 = 1;                                                     // 0x00105a7c: addiu $v0, $zero, 1
    a3 = v1 + a0;                                               // 0x00105a80: addu $a3, $v1, $a0
    v1 = g_001efe04;  // Global at 0x001efe04                   // 0x00105a88: lw $v1, 4($a0)
    a2 = *(int32_t*)((a3) + 8);                                 // 0x00105a8c: lw $a2, 8($a3)
    v1 = v1 | v0;                                               // 0x00105a98: or $v1, $v1, $v0
    *(uint32_t*)((t1) + 0xc) = a3;                              // 0x00105a9c: sw $a3, 0xc($t1)
    *(uint32_t*)((t1) + 8) = a2;                                // 0x00105aa0: sw $a2, 8($t1)
    goto label_0x105ba0;                                        // 0x00105aa4: b 0x105ba0
    g_001efe04 = v1;  // Global at 0x001efe04                   // 0x00105aa8: sw $v1, 4($a0)
    /* nop */                                                   // 0x00105aac: nop 
    if (v1 == 0) goto label_0x105b18;                           // 0x00105ab0: beqz $v1, 0x105b18
    a1 = (unsigned)t0 >> 3;                                     // 0x00105ab4: srl $a1, $t0, 3
    v0 = ((unsigned)v1 < (unsigned)5) ? 1 : 0;                  // 0x00105ab8: sltiu $v0, $v1, 5
    if (v0 == 0) goto label_0x105ad0;                           // 0x00105abc: beqz $v0, 0x105ad0
    v0 = ((unsigned)v1 < (unsigned)0x15) ? 1 : 0;               // 0x00105ac0: sltiu $v0, $v1, 0x15
    v0 = (unsigned)t0 >> 6;                                     // 0x00105ac4: srl $v0, $t0, 6
    goto label_0x105b18;                                        // 0x00105ac8: b 0x105b18
    a1 = v0 + 0x38;                                             // 0x00105acc: addiu $a1, $v0, 0x38
label_0x105ad0:
    if (v0 != 0) goto label_0x105b18;                           // 0x00105ad0: bnez $v0, 0x105b18
    a1 = v1 + 0x5b;                                             // 0x00105ad4: addiu $a1, $v1, 0x5b
    v0 = ((unsigned)v1 < (unsigned)0x55) ? 1 : 0;               // 0x00105ad8: sltiu $v0, $v1, 0x55
    if (v0 == 0) goto label_0x105af0;                           // 0x00105adc: beqz $v0, 0x105af0
    v0 = ((unsigned)v1 < (unsigned)0x155) ? 1 : 0;              // 0x00105ae0: sltiu $v0, $v1, 0x155
    v0 = (unsigned)t0 >> 0xc;                                   // 0x00105ae4: srl $v0, $t0, 0xc
    goto label_0x105b18;                                        // 0x00105ae8: b 0x105b18
    a1 = v0 + 0x6e;                                             // 0x00105aec: addiu $a1, $v0, 0x6e
label_0x105af0:
    if (v0 == 0) goto label_0x105b08;                           // 0x00105af0: beqz $v0, 0x105b08
    v0 = ((unsigned)v1 < (unsigned)0x555) ? 1 : 0;              // 0x00105af4: sltiu $v0, $v1, 0x555
    v0 = (unsigned)t0 >> 0xf;                                   // 0x00105af8: srl $v0, $t0, 0xf
    goto label_0x105b18;                                        // 0x00105afc: b 0x105b18
    a1 = v0 + 0x77;                                             // 0x00105b00: addiu $a1, $v0, 0x77
    /* nop */                                                   // 0x00105b04: nop 
label_0x105b08:
    /* beqzl $v0, 0x105b18 */                                   // 0x00105b08: beqzl $v0, 0x105b18
    a1 = 0x7e;                                                  // 0x00105b0c: addiu $a1, $zero, 0x7e
    v0 = (unsigned)t0 >> 0x12;                                  // 0x00105b10: srl $v0, $t0, 0x12
    a1 = v0 + 0x7c;                                             // 0x00105b14: addiu $a1, $v0, 0x7c
label_0x105b18:
    v0 = 0x1f << 16;                                            // 0x00105b18: lui $v0, 0x1f
    v1 = a1 << 3;                                               // 0x00105b1c: sll $v1, $a1, 3
    v0 = v0 + -0x1f8;                                           // 0x00105b20: addiu $v0, $v0, -0x1f8
    t2 = v0 + -8;                                               // 0x00105b24: addiu $t2, $v0, -8
    a3 = v1 + t2;                                               // 0x00105b28: addu $a3, $v1, $t2
    a2 = *(int32_t*)((a3) + 8);                                 // 0x00105b2c: lw $a2, 8($a3)
    if (a2 != a3) goto label_0x105b68;                          // 0x00105b30: bnel $a2, $a3, 0x105b68
    v0 = *(int32_t*)((a2) + 4);                                 // 0x00105b34: lw $v0, 4($a2)
    a0 = a1 + 3;                                                // 0x00105b38: addiu $a0, $a1, 3
    v1 = (a1 < 0) ? 1 : 0;                                      // 0x00105b3c: slti $v1, $a1, 0
    if (v1 != 0) a1 = a0;                                       // 0x00105b40: movn $a1, $a0, $v1
    v1 = g_001efe04;  // Global at 0x001efe04                   // 0x00105b44: lw $v1, 4($t2)
    v0 = 1;                                                     // 0x00105b48: addiu $v0, $zero, 1
    a0 = a1 >> 2;                                               // 0x00105b4c: sra $a0, $a1, 2
    v1 = v1 | v0;                                               // 0x00105b5c: or $v1, $v1, $v0
    goto label_0x105b98;                                        // 0x00105b60: b 0x105b98
    g_001efe04 = v1;  // Global at 0x001efe04                   // 0x00105b64: sw $v1, 4($t2)
label_0x105b68:
    goto label_0x105b7c;                                        // 0x00105b68: b 0x105b7c
    v1 = -4;                                                    // 0x00105b6c: addiu $v1, $zero, -4
    if (a2 == a3) goto label_0x105b98;                          // 0x00105b70: beql $a2, $a3, 0x105b98
    a3 = *(int32_t*)((a2) + 0xc);                               // 0x00105b74: lw $a3, 0xc($a2)
    v0 = *(int32_t*)((a2) + 4);                                 // 0x00105b78: lw $v0, 4($a2)
label_0x105b7c:
    v0 = v0 & v1;                                               // 0x00105b7c: and $v0, $v0, $v1
    v0 = ((unsigned)t0 < (unsigned)v0) ? 1 : 0;                 // 0x00105b80: sltu $v0, $t0, $v0
    /* nop */                                                   // 0x00105b84: nop 
    /* nop */                                                   // 0x00105b88: nop 
    /* bnezl $v0, 0x105b70 */                                   // 0x00105b8c: bnezl $v0, 0x105b70
    a2 = *(int32_t*)((a2) + 8);                                 // 0x00105b90: lw $a2, 8($a2)
    a3 = *(int32_t*)((a2) + 0xc);                               // 0x00105b94: lw $a3, 0xc($a2)
label_0x105b98:
    *(uint32_t*)((t1) + 0xc) = a3;                              // 0x00105b98: sw $a3, 0xc($t1)
    *(uint32_t*)((t1) + 8) = a2;                                // 0x00105b9c: sw $a2, 8($t1)
label_0x105ba0:
    *(uint32_t*)((a3) + 8) = t1;                                // 0x00105ba0: sw $t1, 8($a3)
    *(uint32_t*)((a2) + 0xc) = t1;                              // 0x00105ba4: sw $t1, 0xc($a2)
label_0x105ba8:
    return func_00107e00();  // Tail call                        // 0x00105bb8: j 0x107db0
    sp = sp + 0x20;                                             // 0x00105bbc: addiu $sp, $sp, 0x20
label_0x105bc0:
    return;                                                     // 0x00105bcc: jr $ra
    sp = sp + 0x20;                                             // 0x00105bd0: addiu $sp, $sp, 0x20
}