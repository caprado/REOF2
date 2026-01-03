void func_001b4a80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001b4a80: addiu $sp, $sp, -0x60
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001b4a8c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b4a9c: addu.qb $zero, $sp, $s1
    s1 = 0x2b << 16;                                            // 0x001b4aa8: lui $s1, 0x2b
    s1 = s1 + -0x3ac0;                                          // 0x001b4ab0: addiu $s1, $s1, -0x3ac0
    func_00107c70();  // 107c70                                // 0x001b4abc: jal 0x107c70
    a2 = 0xa8;                                                  // 0x001b4ac0: addiu $a2, $zero, 0xa8
    at = 0x2b << 16;                                            // 0x001b4ac4: lui $at, 0x2b
    v0 = 4 << 16;                                               // 0x001b4ac8: lui $v0, 4
    g_002ac544 = s4;  // Global at 0x002ac544                   // 0x001b4acc: sw $s4, -0x3abc($at)
    v0 = v0 | 0x8170;                                           // 0x001b4ad0: ori $v0, $v0, 0x8170
    at = 0x2b << 16;                                            // 0x001b4ad4: lui $at, 0x2b
    a3 = -0x40;                                                 // 0x001b4ad8: addiu $a3, $zero, -0x40
    a1 = g_002ac544;  // Global at 0x002ac544                   // 0x001b4adc: lw $a1, -0x3abc($at)
    a0 = a1 << 1;                                               // 0x001b4ae4: sll $a0, $a1, 1
    at = 0x2b << 16;                                            // 0x001b4ae8: lui $at, 0x2b
    a0 = a0 + a1;                                               // 0x001b4aec: addu $a0, $a0, $a1
    g_002ac5dc = v0;  // Global at 0x002ac5dc                   // 0x001b4af0: sw $v0, -0x3a24($at)
    a0 = a0 << 2;                                               // 0x001b4af4: sll $a0, $a0, 2
    v0 = 0x22 << 16;                                            // 0x001b4af8: lui $v0, 0x22
    a0 = a0 + a1;                                               // 0x001b4afc: addu $a0, $a0, $a1
    v0 = v0 + -0x3d00;                                          // 0x001b4b00: addiu $v0, $v0, -0x3d00
    a0 = a0 << 2;                                               // 0x001b4b04: sll $a0, $a0, 2
    at = 0x2b << 16;                                            // 0x001b4b08: lui $at, 0x2b
    v0 = v0 + a0;                                               // 0x001b4b0c: addu $v0, $v0, $a0
    a0 = g_0021c300;  // Global at 0x0021c300                   // 0x001b4b10: lw $a0, 0($v0)
    g_002ac548 = a0;  // Global at 0x002ac548                   // 0x001b4b14: sw $a0, -0x3ab8($at)
    a0 = g_0021c304;  // Global at 0x0021c304                   // 0x001b4b18: lw $a0, 4($v0)
    at = 0x2b << 16;                                            // 0x001b4b1c: lui $at, 0x2b
    g_002ac54c = a0;  // Global at 0x002ac54c                   // 0x001b4b20: sw $a0, -0x3ab4($at)
    a0 = g_0021c308;  // Global at 0x0021c308                   // 0x001b4b24: lw $a0, 8($v0)
    at = 0x2b << 16;                                            // 0x001b4b28: lui $at, 0x2b
    g_002ac550 = a0;  // Global at 0x002ac550                   // 0x001b4b2c: sw $a0, -0x3ab0($at)
    a0 = g_0021c30c;  // Global at 0x0021c30c                   // 0x001b4b30: lw $a0, 0xc($v0)
    at = 0x2b << 16;                                            // 0x001b4b34: lui $at, 0x2b
    g_002ac554 = a0;  // Global at 0x002ac554                   // 0x001b4b38: sw $a0, -0x3aac($at)
    a0 = g_0021c310;  // Global at 0x0021c310                   // 0x001b4b3c: lw $a0, 0x10($v0)
    at = 0x2b << 16;                                            // 0x001b4b40: lui $at, 0x2b
    g_002ac558 = a0;  // Global at 0x002ac558                   // 0x001b4b44: sw $a0, -0x3aa8($at)
    a0 = g_0021c31c;  // Global at 0x0021c31c                   // 0x001b4b48: lw $a0, 0x1c($v0)
    at = 0x2b << 16;                                            // 0x001b4b4c: lui $at, 0x2b
    g_002ac55c = a0;  // Global at 0x002ac55c                   // 0x001b4b50: sw $a0, -0x3aa4($at)
    a0 = g_0021c320;  // Global at 0x0021c320                   // 0x001b4b54: lw $a0, 0x20($v0)
    at = 0x2b << 16;                                            // 0x001b4b58: lui $at, 0x2b
    g_002ac560 = a0;  // Global at 0x002ac560                   // 0x001b4b5c: sw $a0, -0x3aa0($at)
    a0 = g_0021c318;  // Global at 0x0021c318                   // 0x001b4b60: lw $a0, 0x18($v0)
    at = 0x2b << 16;                                            // 0x001b4b64: lui $at, 0x2b
    g_002ac564 = a0;  // Global at 0x002ac564                   // 0x001b4b68: sw $a0, -0x3a9c($at)
    at = 0x2b << 16;                                            // 0x001b4b6c: lui $at, 0x2b
    g_002ac5a0 = s0;  // Global at 0x002ac5a0                   // 0x001b4b70: sw $s0, -0x3a60($at)
    at = 0x2b << 16;                                            // 0x001b4b74: lui $at, 0x2b
    g_002ac568 = s3;  // Global at 0x002ac568                   // 0x001b4b78: sw $s3, -0x3a98($at)
    a0 = g_0021c324;  // Global at 0x0021c324                   // 0x001b4b7c: lw $a0, 0x24($v0)
    a0 = s3 + a0;                                               // 0x001b4b80: addu $a0, $s3, $a0
    a0 = a0 + 0x3f;                                             // 0x001b4b84: addiu $a0, $a0, 0x3f
    s3 = a0 & a3;                                               // 0x001b4b88: and $s3, $a0, $a3
label_0x1b4b8c:
    a0 = v1 << 2;                                               // 0x001b4b8c: sll $a0, $v1, 2
    a0 = s1 + a0;                                               // 0x001b4b90: addu $a0, $s1, $a0
    v1 = v1 + 1;                                                // 0x001b4b94: addiu $v1, $v1, 1
    *(uint32_t*)((a0) + 0x2c) = s3;                             // 0x001b4b98: sw $s3, 0x2c($a0)
    a2 = g_002ac558;  // Global at 0x002ac558                   // 0x001b4b9c: lw $a2, 0x18($s1)
    a0 = (v1 < 2) ? 1 : 0;                                      // 0x001b4ba0: slti $a0, $v1, 2
    a1 = g_002ac5a0;  // Global at 0x002ac5a0                   // 0x001b4ba4: lw $a1, 0x60($s1)
    a1 = s3 + a1;                                               // 0x001b4bac: addu $a1, $s3, $a1
    a1 = a1 + 0x3f;                                             // 0x001b4bb0: addiu $a1, $a1, 0x3f
    if (a0 != 0) goto label_0x1b4b8c;                           // 0x001b4bb4: bnez $a0, 0x1b4b8c
    s3 = a1 & a3;                                               // 0x001b4bb8: and $s3, $a1, $a3
    g_002ac574 = s3;  // Global at 0x002ac574                   // 0x001b4bbc: sw $s3, 0x34($s1)
    a2 = g_0021c314;  // Global at 0x0021c314                   // 0x001b4bc0: lw $a2, 0x14($v0)
    a3 = g_002ac574;  // Global at 0x002ac574                   // 0x001b4bc4: lw $a3, 0x34($s1)
    goto label_0x1b4c04;                                        // 0x001b4bc8: b 0x1b4c04
label_0x1b4bd0:
label_0x1b4bd4:
    v1 = g_0021c38f;  // Global at 0x0021c38f                   // 0x001b4bd4: lbu $v1, 0($a2)
    a1 = a1 + 1;                                                // 0x001b4bd8: addiu $a1, $a1, 1
    v0 = (a1 < 0x10) ? 1 : 0;                                   // 0x001b4bdc: slti $v0, $a1, 0x10
    *(uint8_t*)((a3) + 3) = v1;                                 // 0x001b4be0: sb $v1, 3($a3)
    v1 = g_0021c390;  // Global at 0x0021c390                   // 0x001b4be4: lbu $v1, 1($a2)
    *(uint8_t*)((a3) + 2) = v1;                                 // 0x001b4be8: sb $v1, 2($a3)
    a2 = a2 + 2;                                                // 0x001b4bec: addiu $a2, $a2, 2
    *(uint8_t*)((a3) + 1) = v1;                                 // 0x001b4bf0: sb $v1, 1($a3)
    *(uint8_t*)(a3) = v1;                                       // 0x001b4bf4: sb $v1, 0($a3)
    if (v0 != 0) goto label_0x1b4bd4;                           // 0x001b4bf8: bnez $v0, 0x1b4bd4
    a3 = a3 + 4;                                                // 0x001b4bfc: addiu $a3, $a3, 4
    a0 = a0 + 1;                                                // 0x001b4c00: addiu $a0, $a0, 1
label_0x1b4c04:
    a1 = g_002ac564;  // Global at 0x002ac564                   // 0x001b4c04: lw $a1, 0x24($s1)
    v0 = ((unsigned)a0 < (unsigned)a1) ? 1 : 0;                 // 0x001b4c08: sltu $v0, $a0, $a1
    if (v0 != 0) goto label_0x1b4bd0;                           // 0x001b4c0c: bnez $v0, 0x1b4bd0
    v0 = a1 << 3;                                               // 0x001b4c10: sll $v0, $a1, 3
    v1 = a1 << 6;                                               // 0x001b4c14: sll $v1, $a1, 6
    v0 = v0 + a1;                                               // 0x001b4c18: addu $v0, $v0, $a1
    s3 = s3 + v1;                                               // 0x001b4c1c: addu $s3, $s3, $v1
    a1 = g_002ac5a0;  // Global at 0x002ac5a0                   // 0x001b4c20: lw $a1, 0x60($s1)
    v0 = v0 << 4;                                               // 0x001b4c24: sll $v0, $v0, 4
    a2 = v0 + 0x8f;                                             // 0x001b4c28: addiu $a2, $v0, 0x8f
    v1 = -0x40;                                                 // 0x001b4c2c: addiu $v1, $zero, -0x40
    v0 = s2 + 2;                                                // 0x001b4c30: addiu $v0, $s2, 2
    g_002ac594 = s2;  // Global at 0x002ac594                   // 0x001b4c38: sw $s2, 0x54($s1)
    a0 = a1 << 3;                                               // 0x001b4c3c: sll $a0, $a1, 3
    a0 = a0 + a1;                                               // 0x001b4c40: addu $a0, $a0, $a1
    g_002ac598 = v0;  // Global at 0x002ac598                   // 0x001b4c44: sw $v0, 0x58($s1)
    v0 = a0 << 5;                                               // 0x001b4c48: sll $v0, $a0, 5
    v0 = a2 + v0;                                               // 0x001b4c4c: addu $v0, $a2, $v0
    s4 = v0 & v1;                                               // 0x001b4c50: and $s4, $v0, $v1
label_0x1b4c54:
    v0 = s0 << 2;                                               // 0x001b4c54: sll $v0, $s0, 2
    s2 = s1 + v0;                                               // 0x001b4c5c: addu $s2, $s1, $v0
    *(uint32_t*)((s2) + 0x38) = s3;                             // 0x001b4c60: sw $s3, 0x38($s2)
    a1 = g_002ac54c;  // Global at 0x002ac54c                   // 0x001b4c64: lw $a1, 0xc($s1)
    func_001b6720();  // 1b6720                                // 0x001b4c68: jal 0x1b6720
    s3 = s3 + s4;                                               // 0x001b4c6c: addu $s3, $s3, $s4
    func_001b69e0();  // 1b69e0                                // 0x001b4c74: jal 0x1b69e0
    *(uint32_t*)((s2) + 0x40) = v0;                             // 0x001b4c7c: sw $v0, 0x40($s2)
    s0 = s0 + 1;                                                // 0x001b4c80: addiu $s0, $s0, 1
    v0 = (s0 < 2) ? 1 : 0;                                      // 0x001b4c84: slti $v0, $s0, 2
    if (v0 != 0) goto label_0x1b4c54;                           // 0x001b4c88: bnez $v0, 0x1b4c54
    /* nop */                                                   // 0x001b4c8c: nop 
    g_002ac588 = 0;  // Global at 0x002ac588                    // 0x001b4c90: sw $zero, 0x48($s1)
    v0 = 0x8080 << 16;                                          // 0x001b4c94: lui $v0, 0x8080
    a1 = g_002ac580;  // Global at 0x002ac580                   // 0x001b4c98: lw $a1, 0x40($s1)
    v1 = -2;                                                    // 0x001b4c9c: addiu $v1, $zero, -2
    v0 = v0 | 0x8080;                                           // 0x001b4ca0: ori $v0, $v0, 0x8080
    g_002ac58c = a1;  // Global at 0x002ac58c                   // 0x001b4ca8: sw $a1, 0x4c($s1)
    a1 = g_002ac568;  // Global at 0x002ac568                   // 0x001b4cac: lw $a1, 0x28($s1)
    a1 = s3 - a1;                                               // 0x001b4cb0: subu $a1, $s3, $a1
    g_002ac59c = a1;  // Global at 0x002ac59c                   // 0x001b4cb4: sw $a1, 0x5c($s1)
    a1 = g_002ac54c;  // Global at 0x002ac54c                   // 0x001b4cb8: lw $a1, 0xc($s1)
    g_002ac5ac = a1;  // Global at 0x002ac5ac                   // 0x001b4cbc: sw $a1, 0x6c($s1)
    g_002ac5b0 = 0;  // Global at 0x002ac5b0                    // 0x001b4cc0: sw $zero, 0x70($s1)
    g_002ac5b4 = 0;  // Global at 0x002ac5b4                    // 0x001b4cc4: sw $zero, 0x74($s1)
    g_002ac5b8 = v1;  // Global at 0x002ac5b8                   // 0x001b4cc8: sw $v1, 0x78($s1)
    g_002ac5bc = 0;  // Global at 0x002ac5bc                    // 0x001b4ccc: sw $zero, 0x7c($s1)
    g_002ac5c0 = v0;  // Global at 0x002ac5c0                   // 0x001b4cd0: sw $v0, 0x80($s1)
    func_001b5060();  // 1b5060                                // 0x001b4cd4: jal 0x1b5060
    g_002ac5c8 = 0;  // Global at 0x002ac5c8                    // 0x001b4cd8: sw $zero, 0x88($s1)
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001b4ce0: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b4ce8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b4cec: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b4cf0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b4cf4: jr $ra
    sp = sp + 0x60;                                             // 0x001b4cf8: addiu $sp, $sp, 0x60
}