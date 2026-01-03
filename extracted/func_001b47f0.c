void func_001b47f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001b47f0: addiu $sp, $sp, -0x60
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001b47fc: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b480c: addu.qb $zero, $sp, $s1
    s0 = 0x2b << 16;                                            // 0x001b481c: lui $s0, 0x2b
    s0 = s0 + -0x3ac0;                                          // 0x001b4824: addiu $s0, $s0, -0x3ac0
    a2 = 0xa8;                                                  // 0x001b4828: addiu $a2, $zero, 0xa8
    func_00107c70();  // 107c70                                // 0x001b482c: jal 0x107c70
    a0 = 0x2d << 16;                                            // 0x001b4834: lui $a0, 0x2d
    v0 = 2 << 16;                                               // 0x001b4838: lui $v0, 2
    a0 = a0 + 0x780;                                            // 0x001b483c: addiu $a0, $a0, 0x780
    func_00107c70();  // 107c70                                // 0x001b4844: jal 0x107c70
    a2 = v0 | 0x4170;                                           // 0x001b4848: ori $a2, $v0, 0x4170
    a0 = 0x2b << 16;                                            // 0x001b484c: lui $a0, 0x2b
    v0 = 2 << 16;                                               // 0x001b4850: lui $v0, 2
    a0 = a0 + -0x3a00;                                          // 0x001b4854: addiu $a0, $a0, -0x3a00
    func_00107c70();  // 107c70                                // 0x001b485c: jal 0x107c70
    a2 = v0 | 0x4170;                                           // 0x001b4860: ori $a2, $v0, 0x4170
    at = 0x2b << 16;                                            // 0x001b4864: lui $at, 0x2b
    v0 = 2 << 16;                                               // 0x001b4868: lui $v0, 2
    g_002ac544 = s4;  // Global at 0x002ac544                   // 0x001b486c: sw $s4, -0x3abc($at)
    v0 = v0 | 0x4170;                                           // 0x001b4870: ori $v0, $v0, 0x4170
    at = 0x2b << 16;                                            // 0x001b4874: lui $at, 0x2b
    a3 = -0x40;                                                 // 0x001b4878: addiu $a3, $zero, -0x40
    a1 = g_002ac544;  // Global at 0x002ac544                   // 0x001b487c: lw $a1, -0x3abc($at)
    a0 = a1 << 1;                                               // 0x001b4884: sll $a0, $a1, 1
    at = 0x2b << 16;                                            // 0x001b4888: lui $at, 0x2b
    a0 = a0 + a1;                                               // 0x001b488c: addu $a0, $a0, $a1
    g_002ac5dc = v0;  // Global at 0x002ac5dc                   // 0x001b4890: sw $v0, -0x3a24($at)
    a0 = a0 << 2;                                               // 0x001b4894: sll $a0, $a0, 2
    v0 = 0x22 << 16;                                            // 0x001b4898: lui $v0, 0x22
    a0 = a0 + a1;                                               // 0x001b489c: addu $a0, $a0, $a1
    v0 = v0 + -0x3d00;                                          // 0x001b48a0: addiu $v0, $v0, -0x3d00
    a0 = a0 << 2;                                               // 0x001b48a4: sll $a0, $a0, 2
    at = 0x2b << 16;                                            // 0x001b48a8: lui $at, 0x2b
    v0 = v0 + a0;                                               // 0x001b48ac: addu $v0, $v0, $a0
    a0 = g_0021c300;  // Global at 0x0021c300                   // 0x001b48b0: lw $a0, 0($v0)
    g_002ac548 = a0;  // Global at 0x002ac548                   // 0x001b48b4: sw $a0, -0x3ab8($at)
    a0 = g_0021c304;  // Global at 0x0021c304                   // 0x001b48b8: lw $a0, 4($v0)
    at = 0x2b << 16;                                            // 0x001b48bc: lui $at, 0x2b
    g_002ac54c = a0;  // Global at 0x002ac54c                   // 0x001b48c0: sw $a0, -0x3ab4($at)
    a0 = g_0021c308;  // Global at 0x0021c308                   // 0x001b48c4: lw $a0, 8($v0)
    at = 0x2b << 16;                                            // 0x001b48c8: lui $at, 0x2b
    g_002ac550 = a0;  // Global at 0x002ac550                   // 0x001b48cc: sw $a0, -0x3ab0($at)
    a0 = g_0021c30c;  // Global at 0x0021c30c                   // 0x001b48d0: lw $a0, 0xc($v0)
    at = 0x2b << 16;                                            // 0x001b48d4: lui $at, 0x2b
    g_002ac554 = a0;  // Global at 0x002ac554                   // 0x001b48d8: sw $a0, -0x3aac($at)
    a0 = g_0021c310;  // Global at 0x0021c310                   // 0x001b48dc: lw $a0, 0x10($v0)
    at = 0x2b << 16;                                            // 0x001b48e0: lui $at, 0x2b
    g_002ac558 = a0;  // Global at 0x002ac558                   // 0x001b48e4: sw $a0, -0x3aa8($at)
    a0 = g_0021c31c;  // Global at 0x0021c31c                   // 0x001b48e8: lw $a0, 0x1c($v0)
    at = 0x2b << 16;                                            // 0x001b48ec: lui $at, 0x2b
    g_002ac55c = a0;  // Global at 0x002ac55c                   // 0x001b48f0: sw $a0, -0x3aa4($at)
    a0 = g_0021c320;  // Global at 0x0021c320                   // 0x001b48f4: lw $a0, 0x20($v0)
    at = 0x2b << 16;                                            // 0x001b48f8: lui $at, 0x2b
    g_002ac560 = a0;  // Global at 0x002ac560                   // 0x001b48fc: sw $a0, -0x3aa0($at)
    a0 = g_0021c318;  // Global at 0x0021c318                   // 0x001b4900: lw $a0, 0x18($v0)
    at = 0x2b << 16;                                            // 0x001b4904: lui $at, 0x2b
    g_002ac564 = a0;  // Global at 0x002ac564                   // 0x001b4908: sw $a0, -0x3a9c($at)
    at = 0x2b << 16;                                            // 0x001b490c: lui $at, 0x2b
    g_002ac5a0 = s2;  // Global at 0x002ac5a0                   // 0x001b4910: sw $s2, -0x3a60($at)
    at = 0x2b << 16;                                            // 0x001b4914: lui $at, 0x2b
    g_002ac568 = s3;  // Global at 0x002ac568                   // 0x001b4918: sw $s3, -0x3a98($at)
    a0 = g_0021c324;  // Global at 0x0021c324                   // 0x001b491c: lw $a0, 0x24($v0)
    a0 = s3 + a0;                                               // 0x001b4920: addu $a0, $s3, $a0
    a0 = a0 + 0x3f;                                             // 0x001b4924: addiu $a0, $a0, 0x3f
    s3 = a0 & a3;                                               // 0x001b4928: and $s3, $a0, $a3
label_0x1b492c:
    a0 = v1 << 2;                                               // 0x001b492c: sll $a0, $v1, 2
    a0 = s0 + a0;                                               // 0x001b4930: addu $a0, $s0, $a0
    v1 = v1 + 1;                                                // 0x001b4934: addiu $v1, $v1, 1
    g_002ac66b = s3;  // Global at 0x002ac66b                   // 0x001b4938: sw $s3, 0x2c($a0)
    a2 = g_002ac558;  // Global at 0x002ac558                   // 0x001b493c: lw $a2, 0x18($s0)
    a0 = (v1 < 2) ? 1 : 0;                                      // 0x001b4940: slti $a0, $v1, 2
    a1 = g_002ac5a0;  // Global at 0x002ac5a0                   // 0x001b4944: lw $a1, 0x60($s0)
    a1 = s3 + a1;                                               // 0x001b494c: addu $a1, $s3, $a1
    a1 = a1 + 0x3f;                                             // 0x001b4950: addiu $a1, $a1, 0x3f
    if (a0 != 0) goto label_0x1b492c;                           // 0x001b4954: bnez $a0, 0x1b492c
    s3 = a1 & a3;                                               // 0x001b4958: and $s3, $a1, $a3
    g_002ac574 = s3;  // Global at 0x002ac574                   // 0x001b495c: sw $s3, 0x34($s0)
    a1 = g_0021c314;  // Global at 0x0021c314                   // 0x001b4960: lw $a1, 0x14($v0)
    a2 = g_002ac574;  // Global at 0x002ac574                   // 0x001b4964: lw $a2, 0x34($s0)
    goto label_0x1b49a0;                                        // 0x001b4968: b 0x1b49a0
label_0x1b4970:
    v1 = *(uint8_t*)(a1);                                       // 0x001b4970: lbu $v1, 0($a1)
    a3 = a3 + 1;                                                // 0x001b4974: addiu $a3, $a3, 1
    v0 = (a3 < 0x10) ? 1 : 0;                                   // 0x001b4978: slti $v0, $a3, 0x10
    *(uint8_t*)((a2) + 3) = v1;                                 // 0x001b497c: sb $v1, 3($a2)
    v1 = *(uint8_t*)((a1) + 1);                                 // 0x001b4980: lbu $v1, 1($a1)
    *(uint8_t*)((a2) + 2) = v1;                                 // 0x001b4984: sb $v1, 2($a2)
    a1 = a1 + 2;                                                // 0x001b4988: addiu $a1, $a1, 2
    *(uint8_t*)((a2) + 1) = v1;                                 // 0x001b498c: sb $v1, 1($a2)
    *(uint8_t*)(a2) = v1;                                       // 0x001b4990: sb $v1, 0($a2)
    if (v0 != 0) goto label_0x1b4970;                           // 0x001b4994: bnez $v0, 0x1b4970
    a2 = a2 + 4;                                                // 0x001b4998: addiu $a2, $a2, 4
    a0 = a0 + 1;                                                // 0x001b499c: addiu $a0, $a0, 1
label_0x1b49a0:
    v1 = g_002ac564;  // Global at 0x002ac564                   // 0x001b49a0: lw $v1, 0x24($s0)
    v0 = ((unsigned)a0 < (unsigned)v1) ? 1 : 0;                 // 0x001b49a4: sltu $v0, $a0, $v1
    if (v0 != 0) goto label_0x1b4970;                           // 0x001b49a8: bnez $v0, 0x1b4970
    v0 = v1 << 6;                                               // 0x001b49b0: sll $v0, $v1, 6
    g_002ac594 = s1;  // Global at 0x002ac594                   // 0x001b49b4: sw $s1, 0x54($s0)
    s3 = s3 + v0;                                               // 0x001b49b8: addu $s3, $s3, $v0
    v0 = s1 + 2;                                                // 0x001b49bc: addiu $v0, $s1, 2
    g_002ac598 = v0;  // Global at 0x002ac598                   // 0x001b49c0: sw $v0, 0x58($s0)
    v1 = s1 << 2;                                               // 0x001b49c8: sll $v1, $s1, 2
label_0x1b49cc:
    v0 = gp + -0x7ce0;                                          // 0x001b49cc: addiu $v0, $gp, -0x7ce0
    v0 = v0 + v1;                                               // 0x001b49d0: addu $v0, $v0, $v1
    s2 = s0 + v1;                                               // 0x001b49d4: addu $s2, $s0, $v1
    a0 = g_0021c300;  // Global at 0x0021c300                   // 0x001b49d8: lw $a0, 0($v0)
    *(uint32_t*)((s2) + 0x38) = a0;                             // 0x001b49dc: sw $a0, 0x38($s2)
    func_001b6720();  // 1b6720                                // 0x001b49e0: jal 0x1b6720
    a1 = g_002ac54c;  // Global at 0x002ac54c                   // 0x001b49e4: lw $a1, 0xc($s0)
    func_001b69e0();  // 1b69e0                                // 0x001b49ec: jal 0x1b69e0
    *(uint32_t*)((s2) + 0x40) = v0;                             // 0x001b49f4: sw $v0, 0x40($s2)
    s1 = s1 + 1;                                                // 0x001b49f8: addiu $s1, $s1, 1
    v0 = (s1 < 2) ? 1 : 0;                                      // 0x001b49fc: slti $v0, $s1, 2
    if (v0 != 0) goto label_0x1b49cc;                           // 0x001b4a00: bnez $v0, 0x1b49cc
    v1 = s1 << 2;                                               // 0x001b4a04: sll $v1, $s1, 2
    g_002ac588 = 0;  // Global at 0x002ac588                    // 0x001b4a08: sw $zero, 0x48($s0)
    v0 = 0x8080 << 16;                                          // 0x001b4a0c: lui $v0, 0x8080
    a1 = g_002ac580;  // Global at 0x002ac580                   // 0x001b4a10: lw $a1, 0x40($s0)
    v1 = -2;                                                    // 0x001b4a14: addiu $v1, $zero, -2
    v0 = v0 | 0x8080;                                           // 0x001b4a18: ori $v0, $v0, 0x8080
    g_002ac58c = a1;  // Global at 0x002ac58c                   // 0x001b4a20: sw $a1, 0x4c($s0)
    a1 = g_002ac568;  // Global at 0x002ac568                   // 0x001b4a24: lw $a1, 0x28($s0)
    a1 = s3 - a1;                                               // 0x001b4a28: subu $a1, $s3, $a1
    g_002ac59c = a1;  // Global at 0x002ac59c                   // 0x001b4a2c: sw $a1, 0x5c($s0)
    a1 = g_002ac54c;  // Global at 0x002ac54c                   // 0x001b4a30: lw $a1, 0xc($s0)
    g_002ac5ac = a1;  // Global at 0x002ac5ac                   // 0x001b4a34: sw $a1, 0x6c($s0)
    g_002ac5b0 = 0;  // Global at 0x002ac5b0                    // 0x001b4a38: sw $zero, 0x70($s0)
    g_002ac5b4 = 0;  // Global at 0x002ac5b4                    // 0x001b4a3c: sw $zero, 0x74($s0)
    g_002ac5b8 = v1;  // Global at 0x002ac5b8                   // 0x001b4a40: sw $v1, 0x78($s0)
    g_002ac5bc = 0;  // Global at 0x002ac5bc                    // 0x001b4a44: sw $zero, 0x7c($s0)
    g_002ac5c0 = v0;  // Global at 0x002ac5c0                   // 0x001b4a48: sw $v0, 0x80($s0)
    func_001b5060();  // 1b5060                                // 0x001b4a4c: jal 0x1b5060
    g_002ac5c8 = 0;  // Global at 0x002ac5c8                    // 0x001b4a50: sw $zero, 0x88($s0)
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001b4a58: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b4a60: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b4a64: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b4a68: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b4a6c: jr $ra
    sp = sp + 0x60;                                             // 0x001b4a70: addiu $sp, $sp, 0x60
}