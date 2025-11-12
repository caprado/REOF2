void func_001b08b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001b08b0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b08b8: addu.qb $zero, $sp, $s1
    func_001afb80();  // 0x1afb40                                // 0x001b08c4: jal 0x1afb40
    v1 = 1;                                                     // 0x001b08cc: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x1b08f0;                          // 0x001b08d0: bne $v0, $v1, 0x1b08f0
    at = 0x49 << 16;                                            // 0x001b08d4: lui $at, 0x49
    a0 = *(uint8_t*)((s0) + 3);                                 // 0x001b08d8: lbu $a0, 3($s0)
    v1 = g_004912bd;  // Global at 0x004912bd                   // 0x001b08dc: lbu $v1, 0x12bd($at)
    if (a0 == v1) goto label_0x1b0924;                          // 0x001b08e0: beq $a0, $v1, 0x1b0924
    goto label_0x1b0ac4;                                        // 0x001b08e8: b 0x1b0ac4
label_0x1b08f0:
    func_001afb40();  // 0x1afb10                                // 0x001b08f0: jal 0x1afb10
    /* nop */                                                   // 0x001b08f4: nop 
    if (v0 != 0) goto label_0x1b0914;                           // 0x001b08f8: bnez $v0, 0x1b0914
    /* nop */                                                   // 0x001b08fc: nop 
    a0 = *(uint8_t*)((s0) + 3);                                 // 0x001b0900: lbu $a0, 3($s0)
    v1 = gp + -0x63b0;                                          // 0x001b0904: addiu $v1, $gp, -0x63b0
    v1 = v1 + a0;                                               // 0x001b0908: addu $v1, $v1, $a0
    goto label_0x1b0920;                                        // 0x001b090c: b 0x1b0920
    s1 = g_0031364a;  // Global at 0x0031364a                   // 0x001b0910: lb $s1, 0($v1)
label_0x1b0914:
    v1 = *(uint8_t*)((s0) + 0xbb4);                             // 0x001b0914: lbu $v1, 0xbb4($s0)
    if (v1 != 0) goto label_0x1b0ac0;                           // 0x001b0918: bnez $v1, 0x1b0ac0
    /* nop */                                                   // 0x001b091c: nop 
label_0x1b0920:
label_0x1b0924:
    a0 = -1;                                                    // 0x001b0924: addiu $a0, $zero, -1
    if (v1 == a0) goto label_0x1b0ac0;                          // 0x001b092c: beq $v1, $a0, 0x1b0ac0
    /* nop */                                                   // 0x001b0930: nop 
    t2 = *(int32_t*)((s0) + 0xf98);                             // 0x001b0934: lw $t2, 0xf98($s0)
    a0 = v1 << 1;                                               // 0x001b0938: sll $a0, $v1, 1
    a3 = a0 + v1;                                               // 0x001b093c: addu $a3, $a0, $v1
    a2 = 0x31 << 16;                                            // 0x001b0940: lui $a2, 0x31
    t1 = 0x22 << 16;                                            // 0x001b0944: lui $t1, 0x22
    t0 = 0x22 << 16;                                            // 0x001b0948: lui $t0, 0x22
    at = 0x31 << 16;                                            // 0x001b094c: lui $at, 0x31
    a2 = a2 + 0x3628;                                           // 0x001b0950: addiu $a2, $a2, 0x3628
    a3 = a3 << 4;                                               // 0x001b0954: sll $a3, $a3, 4
    t1 = t1 + -0x3ea0;                                          // 0x001b0958: addiu $t1, $t1, -0x3ea0
    a2 = a2 + a3;                                               // 0x001b095c: addu $a2, $a2, $a3
    t0 = t0 + -0x3e9c;                                          // 0x001b0960: addiu $t0, $t0, -0x3e9c
    *(uint32_t*)((s0) + 0xf9c) = t2;                            // 0x001b0964: sw $t2, 0xf9c($s0)
    a3 = 0x22 << 16;                                            // 0x001b0968: lui $a3, 0x22
    t2 = *(int32_t*)((s0) + 0xf94);                             // 0x001b096c: lw $t2, 0xf94($s0)
    a3 = a3 + -0x3e98;                                          // 0x001b0970: addiu $a3, $a3, -0x3e98
    a1 = s0 + 0xf88;                                            // 0x001b0974: addiu $a1, $s0, 0xf88
    *(uint32_t*)((s0) + 0xf98) = t2;                            // 0x001b0978: sw $t2, 0xf98($s0)
    t2 = *(int32_t*)((s0) + 0xf90);                             // 0x001b097c: lw $t2, 0xf90($s0)
    *(uint32_t*)((s0) + 0xf94) = t2;                            // 0x001b0980: sw $t2, 0xf94($s0)
    t3 = g_003137cc;  // Global at 0x003137cc                   // 0x001b0984: lbu $t3, 0x37cc($at)
    t4 = g_00313628;  // Global at 0x00313628                   // 0x001b0988: lw $t4, 0($a2)
    t2 = t3 << 1;                                               // 0x001b098c: sll $t2, $t3, 1
    t2 = t2 + t3;                                               // 0x001b0990: addu $t2, $t2, $t3
    a2 = t4 & 0x100;                                            // 0x001b0994: andi $a2, $t4, 0x100
    t2 = t2 << 2;                                               // 0x001b0998: sll $t2, $t2, 2
    t1 = t1 + t2;                                               // 0x001b099c: addu $t1, $t1, $t2
    t0 = t0 + t2;                                               // 0x001b09a0: addu $t0, $t0, $t2
    a3 = a3 + t2;                                               // 0x001b09a4: addu $a3, $a3, $t2
    t1 = g_0021c160;  // Global at 0x0021c160                   // 0x001b09a8: lw $t1, 0($t1)
    t0 = g_0021c164;  // Global at 0x0021c164                   // 0x001b09ac: lw $t0, 0($t0)
    a3 = g_0021c168;  // Global at 0x0021c168                   // 0x001b09b0: lw $a3, 0($a3)
    if (a2 == 0) goto label_0x1b09c0;                           // 0x001b09b4: beqz $a2, 0x1b09c0
    a0 = a0 | t1;                                               // 0x001b09bc: or $a0, $a0, $t1
label_0x1b09c0:
    a2 = t4 & 0x10;                                             // 0x001b09c0: andi $a2, $t4, 0x10
    if (a2 == 0) goto label_0x1b09d0;                           // 0x001b09c4: beqz $a2, 0x1b09d0
    a2 = t4 & 0x20;                                             // 0x001b09c8: andi $a2, $t4, 0x20
    a0 = a0 | t0;                                               // 0x001b09cc: or $a0, $a0, $t0
label_0x1b09d0:
    if (a2 == 0) goto label_0x1b09dc;                           // 0x001b09d0: beqz $a2, 0x1b09dc
    /* nop */                                                   // 0x001b09d4: nop 
    a0 = a0 | a3;                                               // 0x001b09d8: or $a0, $a0, $a3
label_0x1b09dc:
    a3 = -0x131;                                                // 0x001b09dc: addiu $a3, $zero, -0x131
    a2 = v1 << 1;                                               // 0x001b09e0: sll $a2, $v1, 1
    a3 = t4 & a3;                                               // 0x001b09e4: and $a3, $t4, $a3
    v1 = a2 + v1;                                               // 0x001b09e8: addu $v1, $a2, $v1
    a0 = a3 | a0;                                               // 0x001b09ec: or $a0, $a3, $a0
    t6 = v1 << 4;                                               // 0x001b09f0: sll $t6, $v1, 4
    *(uint32_t*)((a1) + 8) = a0;                                // 0x001b09f4: sw $a0, 8($a1)
    v1 = 0x31 << 16;                                            // 0x001b09f8: lui $v1, 0x31
    a2 = *(int32_t*)((a1) + 0xc);                               // 0x001b09fc: lw $a2, 0xc($a1)
    v1 = v1 + 0x3644;                                           // 0x001b0a00: addiu $v1, $v1, 0x3644
    a0 = *(int32_t*)((a1) + 8);                                 // 0x001b0a04: lw $a0, 8($a1)
    t3 = v1 + t6;                                               // 0x001b0a08: addu $t3, $v1, $t6
    v1 = 0x31 << 16;                                            // 0x001b0a0c: lui $v1, 0x31
    v1 = v1 + 0x3646;                                           // 0x001b0a10: addiu $v1, $v1, 0x3646
    t2 = v1 + t6;                                               // 0x001b0a14: addu $t2, $v1, $t6
    v1 = 0x31 << 16;                                            // 0x001b0a18: lui $v1, 0x31
    t4 = ~a2;                                                   // 0x001b0a1c: not $t4, $a2
    v1 = v1 + 0x364c;                                           // 0x001b0a20: addiu $v1, $v1, 0x364c
    a0 = a0 & t4;                                               // 0x001b0a24: and $a0, $a0, $t4
    t1 = v1 + t6;                                               // 0x001b0a28: addu $t1, $v1, $t6
    *(uint32_t*)(a1) = a0;                                      // 0x001b0a2c: sw $a0, 0($a1)
    v1 = 0x31 << 16;                                            // 0x001b0a30: lui $v1, 0x31
    t5 = *(int32_t*)((a1) + 8);                                 // 0x001b0a34: lw $t5, 8($a1)
    v1 = v1 + 0x364e;                                           // 0x001b0a38: addiu $v1, $v1, 0x364e
    t4 = *(int32_t*)((a1) + 0xc);                               // 0x001b0a3c: lw $t4, 0xc($a1)
    t0 = v1 + t6;                                               // 0x001b0a40: addu $t0, $v1, $t6
    v1 = 0x31 << 16;                                            // 0x001b0a44: lui $v1, 0x31
    v1 = v1 + 0x3640;                                           // 0x001b0a48: addiu $v1, $v1, 0x3640
    a3 = v1 + t6;                                               // 0x001b0a4c: addu $a3, $v1, $t6
    v1 = 0x31 << 16;                                            // 0x001b0a50: lui $v1, 0x31
    t5 = ~t5;                                                   // 0x001b0a54: not $t5, $t5
    v1 = v1 + 0x3648;                                           // 0x001b0a58: addiu $v1, $v1, 0x3648
    t4 = t4 & t5;                                               // 0x001b0a5c: and $t4, $t4, $t5
    a2 = v1 + t6;                                               // 0x001b0a60: addu $a2, $v1, $t6
    *(uint32_t*)((a1) + 4) = t4;                                // 0x001b0a64: sw $t4, 4($a1)
    v1 = 0x31 << 16;                                            // 0x001b0a68: lui $v1, 0x31
    t3 = *(int16_t*)(t3);                                       // 0x001b0a6c: lh $t3, 0($t3)
    v1 = v1 + 0x3642;                                           // 0x001b0a70: addiu $v1, $v1, 0x3642
    a0 = v1 + t6;                                               // 0x001b0a74: addu $a0, $v1, $t6
    v1 = 0x31 << 16;                                            // 0x001b0a78: lui $v1, 0x31
    v1 = v1 + 0x364a;                                           // 0x001b0a7c: addiu $v1, $v1, 0x364a
    v1 = v1 + t6;                                               // 0x001b0a80: addu $v1, $v1, $t6
    *(uint16_t*)((a1) + 0x24) = t3;                             // 0x001b0a84: sh $t3, 0x24($a1)
    t2 = *(int16_t*)(t2);                                       // 0x001b0a88: lh $t2, 0($t2)
    *(uint16_t*)((a1) + 0x26) = t2;                             // 0x001b0a8c: sh $t2, 0x26($a1)
    t1 = g_0021c160;  // Global at 0x0021c160                   // 0x001b0a90: lh $t1, 0($t1)
    *(uint16_t*)((a1) + 0x2c) = t1;                             // 0x001b0a94: sh $t1, 0x2c($a1)
    t0 = g_0021c164;  // Global at 0x0021c164                   // 0x001b0a98: lh $t0, 0($t0)
    *(uint16_t*)((a1) + 0x2e) = t0;                             // 0x001b0a9c: sh $t0, 0x2e($a1)
    a3 = g_0021c168;  // Global at 0x0021c168                   // 0x001b0aa0: lh $a3, 0($a3)
    *(uint16_t*)((a1) + 0x20) = a3;                             // 0x001b0aa4: sh $a3, 0x20($a1)
    a2 = g_00313628;  // Global at 0x00313628                   // 0x001b0aa8: lh $a2, 0($a2)
    *(uint16_t*)((a1) + 0x28) = a2;                             // 0x001b0aac: sh $a2, 0x28($a1)
    a0 = *(int16_t*)(a0);                                       // 0x001b0ab0: lh $a0, 0($a0)
    *(uint16_t*)((a1) + 0x22) = a0;                             // 0x001b0ab4: sh $a0, 0x22($a1)
    v1 = g_0031364a;  // Global at 0x0031364a                   // 0x001b0ab8: lh $v1, 0($v1)
    *(uint16_t*)((a1) + 0x2a) = v1;                             // 0x001b0abc: sh $v1, 0x2a($a1)
label_0x1b0ac0:
label_0x1b0ac4:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b0ac4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b0ac8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b0acc: jr $ra
    sp = sp + 0x30;                                             // 0x001b0ad0: addiu $sp, $sp, 0x30
}