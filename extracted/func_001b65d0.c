void func_001b65d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_3c;
    
    sp = sp + -0x40;                                            // 0x001b65d0: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b65d8: addu.qb $zero, $sp, $s1
    local_3c = a0;                                              // 0x001b65e0: sw $a0, 0x3c($sp)
    s0 = 0x2b << 16;                                            // 0x001b65e4: lui $s0, 0x2b
    v0 = local_3c;                                              // 0x001b65e8: lw $v0, 0x3c($sp)
    v1 = *(uint8_t*)(v0);                                       // 0x001b65ec: lbu $v1, 0($v0)
    if (v1 != 0) goto label_0x1b6600;                           // 0x001b65f0: bnez $v1, 0x1b6600
    s0 = s0 + -0x3ac0;                                          // 0x001b65f4: addiu $s0, $s0, -0x3ac0
    goto label_0x1b6700;                                        // 0x001b65f8: b 0x1b6700
label_0x1b6600:
    v0 = g_002ac548;  // Global at 0x002ac548                   // 0x001b6600: lw $v0, 8($s0)
    s1 = 2;                                                     // 0x001b6604: addiu $s1, $zero, 2
    if (v0 == s1) goto label_0x1b664c;                          // 0x001b6608: beq $v0, $s1, 0x1b664c
    at = ((unsigned)v1 < (unsigned)0x80) ? 1 : 0;               // 0x001b660c: sltiu $at, $v1, 0x80
    v0 = ((unsigned)v1 < (unsigned)0x80) ? 1 : 0;               // 0x001b6610: sltiu $v0, $v1, 0x80
    if (v0 != 0) goto label_0x1b6628;                           // 0x001b6614: bnez $v0, 0x1b6628
    v0 = ((unsigned)v1 < (unsigned)0xe0) ? 1 : 0;               // 0x001b6618: sltiu $v0, $v1, 0xe0
    at = ((unsigned)v1 < (unsigned)0xc0) ? 1 : 0;               // 0x001b661c: sltiu $at, $v1, 0xc0
    if (at != 0) goto label_0x1b6638;                           // 0x001b6620: bnez $at, 0x1b6638
    /* nop */                                                   // 0x001b6624: nop 
label_0x1b6628:
    if (v0 != 0) goto label_0x1b6640;                           // 0x001b6628: bnez $v0, 0x1b6640
    at = ((unsigned)v1 < (unsigned)0x100) ? 1 : 0;              // 0x001b662c: sltiu $at, $v1, 0x100
    if (at == 0) goto label_0x1b6644;                           // 0x001b6630: beqz $at, 0x1b6644
    v0 = 1;                                                     // 0x001b6634: addiu $v0, $zero, 1
label_0x1b6638:
    goto label_0x1b6700;                                        // 0x001b6638: b 0x1b6700
    v0 = 0x12;                                                  // 0x001b663c: addiu $v0, $zero, 0x12
label_0x1b6640:
    v0 = 1;                                                     // 0x001b6640: addiu $v0, $zero, 1
label_0x1b6644:
    goto label_0x1b6704;                                        // 0x001b6644: b 0x1b6704
label_0x1b664c:
    if (at == 0) goto label_0x1b665c;                           // 0x001b664c: beqz $at, 0x1b665c
    v0 = ((unsigned)v1 < (unsigned)0xc0) ? 1 : 0;               // 0x001b6650: sltiu $v0, $v1, 0xc0
    goto label_0x1b669c;                                        // 0x001b6654: b 0x1b669c
    s1 = 1;                                                     // 0x001b6658: addiu $s1, $zero, 1
label_0x1b665c:
    if (v0 != 0) goto label_0x1b6674;                           // 0x001b665c: bnez $v0, 0x1b6674
    at = ((unsigned)v1 < (unsigned)0xe0) ? 1 : 0;               // 0x001b6660: sltiu $at, $v1, 0xe0
    if (at == 0) goto label_0x1b6678;                           // 0x001b6664: beqz $at, 0x1b6678
    v0 = ((unsigned)v1 < (unsigned)0xe0) ? 1 : 0;               // 0x001b6668: sltiu $v0, $v1, 0xe0
    goto label_0x1b66a0;                                        // 0x001b666c: b 0x1b66a0
    a0 = sp + 0x3c;                                             // 0x001b6670: addiu $a0, $sp, 0x3c
label_0x1b6674:
    v0 = ((unsigned)v1 < (unsigned)0xe0) ? 1 : 0;               // 0x001b6674: sltiu $v0, $v1, 0xe0
label_0x1b6678:
    if (v0 != 0) goto label_0x1b6694;                           // 0x001b6678: bnez $v0, 0x1b6694
    v0 = 1;                                                     // 0x001b667c: addiu $v0, $zero, 1
    at = ((unsigned)v1 < (unsigned)0xf0) ? 1 : 0;               // 0x001b6680: sltiu $at, $v1, 0xf0
    if (at == 0) goto label_0x1b6694;                           // 0x001b6684: beqz $at, 0x1b6694
    s1 = 3;                                                     // 0x001b6688: addiu $s1, $zero, 3
    goto label_0x1b669c;                                        // 0x001b668c: b 0x1b669c
    /* nop */                                                   // 0x001b6690: nop 
label_0x1b6694:
    goto label_0x1b6700;                                        // 0x001b6694: b 0x1b6700
    /* nop */                                                   // 0x001b6698: nop 
label_0x1b669c:
    a0 = sp + 0x3c;                                             // 0x001b669c: addiu $a0, $sp, 0x3c
label_0x1b66a0:
    func_001b5fa0();  // 1b5fa0                                // 0x001b66a0: jal 0x1b5fa0
    /* nop */                                                   // 0x001b66a4: nop 
    v1 = g_002ac5d4;  // Global at 0x002ac5d4                   // 0x001b66a8: lw $v1, 0x94($s0)
    if (v1 != 0) goto label_0x1b66dc;                           // 0x001b66ac: bnez $v1, 0x1b66dc
    at = ((unsigned)v0 < (unsigned)0x10) ? 1 : 0;               // 0x001b66b4: sltiu $at, $v0, 0x10
    if (at == 0) goto label_0x1b66c8;                           // 0x001b66b8: beqz $at, 0x1b66c8
    at = ((unsigned)v0 < (unsigned)0x80) ? 1 : 0;               // 0x001b66bc: sltiu $at, $v0, 0x80
    goto label_0x1b6700;                                        // 0x001b66c0: b 0x1b6700
    v0 = s1 | 0x10;                                             // 0x001b66c4: ori $v0, $s1, 0x10
label_0x1b66c8:
    if (at == 0) goto label_0x1b66d8;                           // 0x001b66c8: beqz $at, 0x1b66d8
    /* nop */                                                   // 0x001b66cc: nop 
    goto label_0x1b6700;                                        // 0x001b66d0: b 0x1b6700
label_0x1b66d8:
label_0x1b66dc:
    func_001b60d0();  // 1b60d0                                // 0x001b66dc: jal 0x1b60d0
    func_001b6140();  // 1b6140                                // 0x001b66e8: jal 0x1b6140
    if (v0 != 0) goto label_0x1b66fc;                           // 0x001b66f0: bnez $v0, 0x1b66fc
    /* nop */                                                   // 0x001b66f4: nop 
    s1 = s1 | 0x10;                                             // 0x001b66f8: ori $s1, $s1, 0x10
label_0x1b66fc:
label_0x1b6700:
label_0x1b6704:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b6704: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b6708: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b670c: jr $ra
    sp = sp + 0x40;                                             // 0x001b6710: addiu $sp, $sp, 0x40
}