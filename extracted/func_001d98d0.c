void func_001d98d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001d98d0: addiu $sp, $sp, -0x30
    v0 = gp + -0x7ad8;                                          // 0x001d98d4: addiu $v0, $gp, -0x7ad8
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d98dc: addu.qb $zero, $sp, $s1
    v1 = *(int32_t*)((a0) + 4);                                 // 0x001d98e8: lw $v1, 4($a0)
    v1 = v1 << 2;                                               // 0x001d98f0: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d98f4: addu $v0, $v0, $v1
    a1 = g_0021fb30;  // Global at 0x0021fb30                   // 0x001d98f8: lw $a1, 0($v0)
    func_001aefd0();  // 1aefd0                                // 0x001d98fc: jal 0x1aefd0
    a0 = 0x15;                                                  // 0x001d9900: addiu $a0, $zero, 0x15
    v1 = *(int32_t*)((s1) + 4);                                 // 0x001d9904: lw $v1, 4($s1)
    v0 = gp + -0x7ad8;                                          // 0x001d9908: addiu $v0, $gp, -0x7ad8
    a0 = 2;                                                     // 0x001d990c: addiu $a0, $zero, 2
    v1 = v1 << 2;                                               // 0x001d9910: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d9914: addu $v0, $v0, $v1
    v0 = g_0021fb30;  // Global at 0x0021fb30                   // 0x001d9918: lw $v0, 0($v0)
    if (v0 != a0) goto label_0x1d9950;                          // 0x001d991c: bne $v0, $a0, 0x1d9950
    v1 = *(int32_t*)((s1) + 8);                                 // 0x001d9924: lw $v1, 8($s1)
    v0 = 0x22 << 16;                                            // 0x001d9928: lui $v0, 0x22
    v0 = v0 + -0x4f0;                                           // 0x001d992c: addiu $v0, $v0, -0x4f0
    v1 = v1 << 2;                                               // 0x001d9930: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d9934: addu $v0, $v0, $v1
    func_001aefd0();  // 1aefd0                                // 0x001d9938: jal 0x1aefd0
    a1 = g_0021fb10;  // Global at 0x0021fb10                   // 0x001d993c: lw $a1, 0($v0)
    *(uint8_t*)((s0) + 0x8d) = 0;                               // 0x001d9940: sb $zero, 0x8d($s0)
    v0 = *(int32_t*)((s1) + 0x14);                              // 0x001d9944: lw $v0, 0x14($s1)
    goto label_0x1d9978;                                        // 0x001d9948: b 0x1d9978
    *(uint8_t*)((s0) + 0x90) = v0;                              // 0x001d994c: sb $v0, 0x90($s0)
label_0x1d9950:
    func_001aefd0();  // 1aefd0                                // 0x001d9950: jal 0x1aefd0
    /* nop */                                                   // 0x001d9954: nop 
    *(uint8_t*)((s0) + 0x90) = 0;                               // 0x001d9958: sb $zero, 0x90($s0)
    v0 = *(int32_t*)((s1) + 8);                                 // 0x001d995c: lw $v0, 8($s1)
    v0 = v0 & 1;                                                // 0x001d9960: andi $v0, $v0, 1
    if (v0 == 0) goto label_0x1d9974;                           // 0x001d9964: beqz $v0, 0x1d9974
    v0 = 1;                                                     // 0x001d9968: addiu $v0, $zero, 1
    goto label_0x1d9978;                                        // 0x001d996c: b 0x1d9978
    *(uint8_t*)((s0) + 0x8d) = v0;                              // 0x001d9970: sb $v0, 0x8d($s0)
label_0x1d9974:
    *(uint8_t*)((s0) + 0x8d) = 0;                               // 0x001d9974: sb $zero, 0x8d($s0)
label_0x1d9978:
    v1 = *(int32_t*)((s1) + 0x20);                              // 0x001d9978: lw $v1, 0x20($s1)
    v0 = gp + -0x7ad0;                                          // 0x001d997c: addiu $v0, $gp, -0x7ad0
    v1 = v1 << 2;                                               // 0x001d9980: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d9984: addu $v0, $v0, $v1
    a1 = g_0021fb10;  // Global at 0x0021fb10                   // 0x001d9988: lw $a1, 0($v0)
    func_001aefd0();  // 1aefd0                                // 0x001d998c: jal 0x1aefd0
    a0 = 0x12;                                                  // 0x001d9990: addiu $a0, $zero, 0x12
    v1 = *(int32_t*)((s1) + 0x14);                              // 0x001d9994: lw $v1, 0x14($s1)
    v0 = 0x22 << 16;                                            // 0x001d9998: lui $v0, 0x22
    v0 = v0 + -0x520;                                           // 0x001d999c: addiu $v0, $v0, -0x520
    v1 = v1 << 2;                                               // 0x001d99a0: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d99a4: addu $v0, $v0, $v1
    a1 = g_0021fae0;  // Global at 0x0021fae0                   // 0x001d99a8: lw $a1, 0($v0)
    func_001aefd0();  // 1aefd0                                // 0x001d99ac: jal 0x1aefd0
    a0 = 1;                                                     // 0x001d99b0: addiu $a0, $zero, 1
    v1 = *(int32_t*)((s1) + 0x24);                              // 0x001d99b4: lw $v1, 0x24($s1)
    v0 = gp + -0x7ac8;                                          // 0x001d99b8: addiu $v0, $gp, -0x7ac8
    v1 = v1 << 2;                                               // 0x001d99bc: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d99c0: addu $v0, $v0, $v1
    a1 = g_0021fae0;  // Global at 0x0021fae0                   // 0x001d99c4: lw $a1, 0($v0)
    func_001aefd0();  // 1aefd0                                // 0x001d99c8: jal 0x1aefd0
    a0 = 0x66;                                                  // 0x001d99cc: addiu $a0, $zero, 0x66
    v1 = *(int32_t*)((s1) + 0x1c);                              // 0x001d99d0: lw $v1, 0x1c($s1)
    v0 = gp + -0x7ac0;                                          // 0x001d99d4: addiu $v0, $gp, -0x7ac0
    v1 = v1 << 2;                                               // 0x001d99d8: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d99dc: addu $v0, $v0, $v1
    a1 = g_0021fae0;  // Global at 0x0021fae0                   // 0x001d99e0: lw $a1, 0($v0)
    func_001aefd0();  // 1aefd0                                // 0x001d99e4: jal 0x1aefd0
    a0 = 0x62;                                                  // 0x001d99e8: addiu $a0, $zero, 0x62
    v1 = *(int32_t*)((s1) + 0x10);                              // 0x001d99ec: lw $v1, 0x10($s1)
    v0 = gp + -0x7ab8;                                          // 0x001d99f0: addiu $v0, $gp, -0x7ab8
    v1 = v1 << 2;                                               // 0x001d99f4: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d99f8: addu $v0, $v0, $v1
    a1 = g_0021fae0;  // Global at 0x0021fae0                   // 0x001d99fc: lw $a1, 0($v0)
    func_001aefd0();  // 1aefd0                                // 0x001d9a00: jal 0x1aefd0
    a0 = 0xc;                                                   // 0x001d9a04: addiu $a0, $zero, 0xc
    v1 = *(int32_t*)((s1) + 0xc);                               // 0x001d9a08: lw $v1, 0xc($s1)
    v0 = 0x22 << 16;                                            // 0x001d9a0c: lui $v0, 0x22
    v0 = v0 + -0x4d0;                                           // 0x001d9a10: addiu $v0, $v0, -0x4d0
    v1 = v1 << 2;                                               // 0x001d9a14: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d9a18: addu $v0, $v0, $v1
    a1 = g_0021fb30;  // Global at 0x0021fb30                   // 0x001d9a1c: lw $a1, 0($v0)
    func_001aefd0();  // 1aefd0                                // 0x001d9a20: jal 0x1aefd0
    v1 = *(int32_t*)((s1) + 0x28);                              // 0x001d9a28: lw $v1, 0x28($s1)
    if (v1 == 0) goto label_0x1d9a78;                           // 0x001d9a2c: beqz $v1, 0x1d9a78
    a0 = 0x5d;                                                  // 0x001d9a30: addiu $a0, $zero, 0x5d
    v0 = 5;                                                     // 0x001d9a34: addiu $v0, $zero, 5
    if (v1 == v0) goto label_0x1d9a64;                          // 0x001d9a38: beq $v1, $v0, 0x1d9a64
    a0 = 0x5d;                                                  // 0x001d9a3c: addiu $a0, $zero, 0x5d
    v0 = 6;                                                     // 0x001d9a40: addiu $v0, $zero, 6
    if (v1 == v0) goto label_0x1d9a54;                          // 0x001d9a44: beq $v1, $v0, 0x1d9a54
    a0 = 0x5d;                                                  // 0x001d9a48: addiu $a0, $zero, 0x5d
    goto label_0x1d9a74;                                        // 0x001d9a4c: b 0x1d9a74
    /* nop */                                                   // 0x001d9a50: nop 
label_0x1d9a54:
    func_001aefd0();  // 1aefd0                                // 0x001d9a54: jal 0x1aefd0
    a1 = 0x600 << 16;                                           // 0x001d9a58: lui $a1, 0x600
    goto label_0x1d9a84;                                        // 0x001d9a5c: b 0x1d9a84
    v1 = *(int32_t*)((s1) + 0x2c);                              // 0x001d9a60: lw $v1, 0x2c($s1)
label_0x1d9a64:
    func_001aefd0();  // 1aefd0                                // 0x001d9a64: jal 0x1aefd0
    a1 = 0x500 << 16;                                           // 0x001d9a68: lui $a1, 0x500
    goto label_0x1d9a80;                                        // 0x001d9a6c: b 0x1d9a80
    /* nop */                                                   // 0x001d9a70: nop 
label_0x1d9a74:
    a0 = 0x5d;                                                  // 0x001d9a74: addiu $a0, $zero, 0x5d
label_0x1d9a78:
    func_001aefd0();  // 1aefd0                                // 0x001d9a78: jal 0x1aefd0
label_0x1d9a80:
    v1 = *(int32_t*)((s1) + 0x2c);                              // 0x001d9a80: lw $v1, 0x2c($s1)
label_0x1d9a84:
    *(uint8_t*)((s0) + 0x89) = v1;                              // 0x001d9a84: sb $v1, 0x89($s0)
    v1 = *(int32_t*)((s1) + 0x30);                              // 0x001d9a88: lw $v1, 0x30($s1)
    *(uint8_t*)((s0) + 0x8a) = v1;                              // 0x001d9a8c: sb $v1, 0x8a($s0)
    v1 = *(int32_t*)((s1) + 0x34);                              // 0x001d9a90: lw $v1, 0x34($s1)
    *(uint8_t*)((s0) + 0x8b) = v1;                              // 0x001d9a94: sb $v1, 0x8b($s0)
    v1 = *(int32_t*)((s1) + 0x40);                              // 0x001d9a98: lw $v1, 0x40($s1)
    v1 = v1 >> 0x10;                                            // 0x001d9a9c: sra $v1, $v1, 0x10
    *(uint8_t*)((s0) + 0x8c) = v1;                              // 0x001d9aa0: sb $v1, 0x8c($s0)
    v1 = *(int32_t*)((s1) + 0x3c);                              // 0x001d9aa4: lw $v1, 0x3c($s1)
    *(uint8_t*)((s0) + 0x8f) = v1;                              // 0x001d9aa8: sb $v1, 0x8f($s0)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d9ab0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d9ab4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d9ab8: jr $ra
    sp = sp + 0x30;                                             // 0x001d9abc: addiu $sp, $sp, 0x30
}