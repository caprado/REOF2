void func_001b85b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xb0;                                            // 0x001b85b0: addiu $sp, $sp, -0xb0
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001b85b8: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b85c4: addu.qb $zero, $sp, $s1
    if (a2 != 0) goto label_0x1b85d8;                           // 0x001b85c8: bnez $a2, 0x1b85d8
    goto label_0x1b85ec;                                        // 0x001b85d0: b 0x1b85ec
    a0 = s3 + 0x38;                                             // 0x001b85d4: addiu $a0, $s3, 0x38
label_0x1b85d8:
    v1 = *(int32_t*)((s3) + 0x34);                              // 0x001b85d8: lw $v1, 0x34($s3)
    v0 = a2 << 2;                                               // 0x001b85dc: sll $v0, $a2, 2
    v0 = v0 + v1;                                               // 0x001b85e0: addu $v0, $v0, $v1
    v0 = *(int32_t*)((v0) + 0x820);                             // 0x001b85e4: lw $v0, 0x820($v0)
    a0 = v0 + 0x30;                                             // 0x001b85e8: addiu $a0, $v0, 0x30
label_0x1b85ec:
    FPU_F2 = *(float*)(a0);  // Load float                      // 0x001b85ec: lwc1 $f2, 0($a0)
    FPU_F1 = *(float*)((a0) + 4);  // Load float                // 0x001b85f4: lwc1 $f1, 4($a0)
    v0 = sp + 0x90;                                             // 0x001b85f8: addiu $v0, $sp, 0x90
    FPU_F0 = *(float*)((a0) + 8);  // Load float                // 0x001b85fc: lwc1 $f0, 8($a0)
    v1 = 4;                                                     // 0x001b8604: addiu $v1, $zero, 4
    *(float*)(v0) = FPU_F2;  // Store float                     // 0x001b8608: swc1 $f2, 0($v0)
    *(float*)((v0) + 4) = FPU_F1;  // Store float               // 0x001b860c: swc1 $f1, 4($v0)
    if (s0 == v1) goto label_0x1b8678;                          // 0x001b8610: beq $s0, $v1, 0x1b8678
    *(float*)((v0) + 8) = FPU_F0;  // Store float               // 0x001b8614: swc1 $f0, 8($v0)
    v0 = 3;                                                     // 0x001b8618: addiu $v0, $zero, 3
    if (s0 == v0) goto label_0x1b8670;                          // 0x001b861c: beq $s0, $v0, 0x1b8670
    v0 = 2;                                                     // 0x001b8620: addiu $v0, $zero, 2
    if (s0 == v0) goto label_0x1b8668;                          // 0x001b8624: beq $s0, $v0, 0x1b8668
    /* nop */                                                   // 0x001b8628: nop 
    v0 = 1;                                                     // 0x001b862c: addiu $v0, $zero, 1
    if (s0 == v0) goto label_0x1b8648;                          // 0x001b8630: beq $s0, $v0, 0x1b8648
    a0 = 1;                                                     // 0x001b8634: addiu $a0, $zero, 1
    if (s0 == 0) goto label_0x1b8648;                           // 0x001b8638: beqz $s0, 0x1b8648
    /* nop */                                                   // 0x001b863c: nop 
    goto label_0x1b8694;                                        // 0x001b8640: b 0x1b8694
    v0 = *(uint8_t*)((s3) + 2);                                 // 0x001b8644: lbu $v0, 2($s3)
label_0x1b8648:
    func_001ae5c0();  // 1ae5c0                                // 0x001b8648: jal 0x1ae5c0
    /* nop */                                                   // 0x001b864c: nop 
    v1 = v0 & 0xffff;                                           // 0x001b8650: andi $v1, $v0, 0xffff
    v0 = s0 << 1;                                               // 0x001b8654: sll $v0, $s0, 1
    v1 = v1 & 1;                                                // 0x001b8658: andi $v1, $v1, 1
    v0 = v0 + v1;                                               // 0x001b865c: addu $v0, $v0, $v1
    goto label_0x1b8690;                                        // 0x001b8660: b 0x1b8690
    s1 = v0 & 0xffff;                                           // 0x001b8664: andi $s1, $v0, 0xffff
label_0x1b8668:
    goto label_0x1b8690;                                        // 0x001b8668: b 0x1b8690
    s1 = v1 & 0xffff;                                           // 0x001b866c: andi $s1, $v1, 0xffff
label_0x1b8670:
    goto label_0x1b8690;                                        // 0x001b8670: b 0x1b8690
label_0x1b8678:
    func_001ae5c0();  // 1ae5c0                                // 0x001b8678: jal 0x1ae5c0
    a0 = 1;                                                     // 0x001b867c: addiu $a0, $zero, 1
    v0 = v0 & 0xffff;                                           // 0x001b8680: andi $v0, $v0, 0xffff
    v0 = v0 & 1;                                                // 0x001b8684: andi $v0, $v0, 1
    v0 = v0 + 6;                                                // 0x001b8688: addiu $v0, $v0, 6
    s1 = v0 & 0xffff;                                           // 0x001b868c: andi $s1, $v0, 0xffff
label_0x1b8690:
    v0 = *(uint8_t*)((s3) + 2);                                 // 0x001b8690: lbu $v0, 2($s3)
label_0x1b8694:
    if (v0 != 0) goto label_0x1b86e0;                           // 0x001b8694: bnez $v0, 0x1b86e0
    func_001b87b0();  // 0x1b87b0                               // 0x001b869c: jal 0x1b87b0
    v0 = s1 & 0xffff;                                           // 0x001b86ac: andi $v0, $s1, 0xffff
    v0 = v0 + v1;                                               // 0x001b86b0: addu $v0, $v0, $v1
    v1 = *(uint8_t*)((s3) + 0x54b);                             // 0x001b86b4: lbu $v1, 0x54b($s3)
    s2 = v0 & 0xffff;                                           // 0x001b86b8: andi $s2, $v0, 0xffff
    v0 = 0x2b;                                                  // 0x001b86bc: addiu $v0, $zero, 0x2b
    if (v1 != v0) goto label_0x1b86e8;                          // 0x001b86c0: bne $v1, $v0, 0x1b86e8
    a0 = sp + 0x90;                                             // 0x001b86c4: addiu $a0, $sp, 0x90
    v1 = *(uint8_t*)((s3) + 9);                                 // 0x001b86c8: lbu $v1, 9($s3)
    v0 = 0x6d;                                                  // 0x001b86cc: addiu $v0, $zero, 0x6d
    if (v1 != v0) goto label_0x1b86e4;                          // 0x001b86d0: bne $v1, $v0, 0x1b86e4
    /* nop */                                                   // 0x001b86d4: nop 
    goto label_0x1b86e4;                                        // 0x001b86d8: b 0x1b86e4
label_0x1b86e0:
    s2 = s1 & 0xffff;                                           // 0x001b86e0: andi $s2, $s1, 0xffff
label_0x1b86e4:
    a0 = sp + 0x90;                                             // 0x001b86e4: addiu $a0, $sp, 0x90
label_0x1b86e8:
    func_00546420();  // 0x546420                               // 0x001b86e8: jal 0x546420
    /* nop */                                                   // 0x001b86ec: nop 
    if (s0 == 0) goto label_0x1b8724;                           // 0x001b86f0: beqz $s0, 0x1b8724
    s1 = v0 & 0xffff;                                           // 0x001b86f4: andi $s1, $v0, 0xffff
    a1 = 0x31 << 16;                                            // 0x001b86f8: lui $a1, 0x31
    a0 = sp + 0x50;                                             // 0x001b86fc: addiu $a0, $sp, 0x50
    func_001911e0();  // 1911e0                                // 0x001b8700: jal 0x1911e0
    a1 = a1 + 0x34f0;                                           // 0x001b8704: addiu $a1, $a1, 0x34f0
    FPU_F2 = *(float*)((sp) + 0x80);  // Load float             // 0x001b8708: lwc1 $f2, 0x80($sp)
    FPU_F1 = *(float*)((sp) + 0x84);  // Load float             // 0x001b870c: lwc1 $f1, 0x84($sp)
    FPU_F0 = *(float*)((sp) + 0x88);  // Load float             // 0x001b8710: lwc1 $f0, 0x88($sp)
    *(float*)((sp) + 0xa0) = FPU_F2;  // Store float            // 0x001b8714: swc1 $f2, 0xa0($sp)
    *(float*)((sp) + 0xa4) = FPU_F1;  // Store float            // 0x001b8718: swc1 $f1, 0xa4($sp)
    goto label_0x1b873c;                                        // 0x001b871c: b 0x1b873c
    *(float*)((sp) + 0xa8) = FPU_F0;  // Store float            // 0x001b8720: swc1 $f0, 0xa8($sp)
label_0x1b8724:
    a0 = sp + 0x90;                                             // 0x001b8724: addiu $a0, $sp, 0x90
    v1 = sp + 0xa0;                                             // 0x001b8728: addiu $v1, $sp, 0xa0
    FPU_F0 = *(float*)((a0) + 8);  // Load float                // 0x001b8730: lwc1 $f0, 8($a0)
    *(float*)((v1) + 8) = FPU_F0;  // Store float               // 0x001b8738: swc1 $f0, 8($v1)
label_0x1b873c:
    a2 = *(uint8_t*)((s3) + 3);                                 // 0x001b873c: lbu $a2, 3($s3)
    s0 = s2 & 0xffff;                                           // 0x001b8740: andi $s0, $s2, 0xffff
    t2 = s1 & 0xff;                                             // 0x001b8744: andi $t2, $s1, 0xff
    a0 = 3;                                                     // 0x001b8748: addiu $a0, $zero, 3
    a3 = sp + 0xa0;                                             // 0x001b8750: addiu $a3, $sp, 0xa0
    t0 = 1;                                                     // 0x001b8754: addiu $t0, $zero, 1
    func_001b8b40();  // 1b8b40                                // 0x001b875c: jal 0x1b8b40
    s2 = s1 & 0xffff;                                           // 0x001b8760: andi $s2, $s1, 0xffff
    v1 = s2 >> 8;                                               // 0x001b8764: sra $v1, $s2, 8
    v1 = v1 & 0xffff;                                           // 0x001b8768: andi $v1, $v1, 0xffff
    if (v1 == 0) goto label_0x1b8794;                           // 0x001b876c: beqz $v1, 0x1b8794
    /* nop */                                                   // 0x001b8770: nop 
    a2 = *(uint8_t*)((s3) + 3);                                 // 0x001b8774: lbu $a2, 3($s3)
    t2 = v1 & 0xffff;                                           // 0x001b8778: andi $t2, $v1, 0xffff
    a0 = 3;                                                     // 0x001b8780: addiu $a0, $zero, 3
    a3 = sp + 0xa0;                                             // 0x001b8784: addiu $a3, $sp, 0xa0
    t0 = 1;                                                     // 0x001b8788: addiu $t0, $zero, 1
    func_001b8b40();  // 1b8b40                                // 0x001b878c: jal 0x1b8b40
label_0x1b8794:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b879c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b87a0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b87a4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b87a8: jr $ra
    sp = sp + 0xb0;                                             // 0x001b87ac: addiu $sp, $sp, 0xb0
}