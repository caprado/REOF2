void func_001d96b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xf0;                                            // 0x001d96b0: addiu $sp, $sp, -0xf0
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001d96b8: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d96c4: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d96d4: addu.qb $zero, $sp, $s1
    func_001a2e50();  // 0x1a2df0                                // 0x001d96dc: jal 0x1a2df0
    v1 = s0 & 0xff;                                             // 0x001d96e4: andi $v1, $s0, 0xff
    *(uint16_t*)((s5) + 0x812) = v0;                            // 0x001d96e8: sh $v0, 0x812($s5)
    a0 = v1 << 2;                                               // 0x001d96ec: sll $a0, $v1, 2
    v1 = 0x22 << 16;                                            // 0x001d96f4: lui $v1, 0x22
    v1 = v1 + -0x540;                                           // 0x001d96f8: addiu $v1, $v1, -0x540
    goto label_0x1d9898;                                        // 0x001d96fc: b 0x1d9898
    s1 = v1 + a0;                                               // 0x001d9700: addu $s1, $v1, $a0
label_0x1d9704:
    v0 = s3 << 3;                                               // 0x001d9704: sll $v0, $s3, 3
    v0 = v0 + s3;                                               // 0x001d970c: addu $v0, $v0, $s3
    v0 = v0 << 1;                                               // 0x001d9714: sll $v0, $v0, 1
    v0 = v0 + s3;                                               // 0x001d9718: addu $v0, $v0, $s3
    func_001a3140();  // 0x1a30f0                                // 0x001d971c: jal 0x1a30f0
    s0 = v0 << 3;                                               // 0x001d9720: sll $s0, $v0, 3
    v1 = *(int32_t*)((s5) + 0x808);                             // 0x001d9724: lw $v1, 0x808($s5)
    v1 = v1 + s0;                                               // 0x001d9730: addu $v1, $v1, $s0
    g_0021fac4 = v0;  // Global at 0x0021fac4                   // 0x001d9734: sw $v0, 4($v1)
    v0 = *(int32_t*)((s5) + 0x808);                             // 0x001d9738: lw $v0, 0x808($s5)
    v0 = v0 + s0;                                               // 0x001d973c: addu $v0, $v0, $s0
    func_001a31d0();  // 0x1a3140                                // 0x001d9740: jal 0x1a3140
    a2 = v0 + 8;                                                // 0x001d9744: addiu $a2, $v0, 8
    goto label_0x1d9794;                                        // 0x001d9748: b 0x1d9794
label_0x1d9750:
    v1 = s2 + 0x3a;                                             // 0x001d9750: addiu $v1, $s2, 0x3a
    v0 = a0 + v0;                                               // 0x001d9754: addu $v0, $a0, $v0
    a0 = v1 & 0xff;                                             // 0x001d9758: andi $a0, $v1, 0xff
    v1 = g_004c4298;  // Global at 0x004c4298                   // 0x001d975c: lw $v1, 8($v0)
    v1 = v1 << 1;                                               // 0x001d9760: sll $v1, $v1, 1
    v0 = 0x4c << 16;                                            // 0x001d9764: lui $v0, 0x4c
    v1 = s5 + v1;                                               // 0x001d9768: addu $v1, $s5, $v1
    v0 = v0 + 0x4290;                                           // 0x001d976c: addiu $v0, $v0, 0x4290
    a1 = g_0021fac8;  // Global at 0x0021fac8                   // 0x001d9770: lhu $a1, 8($v1)
    v1 = a1 << 3;                                               // 0x001d9774: sll $v1, $a1, 3
    v1 = v1 + a1;                                               // 0x001d9778: addu $v1, $v1, $a1
    v1 = v1 << 1;                                               // 0x001d977c: sll $v1, $v1, 1
    v1 = v1 + a1;                                               // 0x001d9780: addu $v1, $v1, $a1
    v1 = v1 << 2;                                               // 0x001d9784: sll $v1, $v1, 2
    func_001aefe0();  // 0x1aefd0                                // 0x001d9788: jal 0x1aefd0
    a1 = v0 + v1;                                               // 0x001d978c: addu $a1, $v0, $v1
    s2 = s2 + 1;                                                // 0x001d9790: addiu $s2, $s2, 1
label_0x1d9794:
    v0 = *(int32_t*)((s5) + 0x808);                             // 0x001d9794: lw $v0, 0x808($s5)
    a0 = s0 + v0;                                               // 0x001d9798: addu $a0, $s0, $v0
    v0 = *(int32_t*)((a0) + 4);                                 // 0x001d979c: lw $v0, 4($a0)
    v0 = (s2 < v0) ? 1 : 0;                                     // 0x001d97a0: slt $v0, $s2, $v0
    if (v0 != 0) goto label_0x1d9750;                           // 0x001d97a4: bnez $v0, 0x1d9750
    v0 = s2 << 2;                                               // 0x001d97a8: sll $v0, $s2, 2
    a0 = sp + 0x70;                                             // 0x001d97ac: addiu $a0, $sp, 0x70
    func_001a2df0();  // 0x1a2cd0                                // 0x001d97b4: jal 0x1a2cd0
    if (v0 < 0) goto label_0x1d97e8;                            // 0x001d97bc: bltz $v0, 0x1d97e8
    /* nop */                                                   // 0x001d97c0: nop 
    v0 = *(int32_t*)((s5) + 0x808);                             // 0x001d97c4: lw $v0, 0x808($s5)
    a0 = sp + 0x70;                                             // 0x001d97c8: addiu $a0, $sp, 0x70
    func_001d9ac0();  // 0x1d98d0                                // 0x001d97cc: jal 0x1d98d0
    a1 = v0 + s0;                                               // 0x001d97d0: addu $a1, $v0, $s0
    v0 = *(int32_t*)((s5) + 0x808);                             // 0x001d97d4: lw $v0, 0x808($s5)
    v1 = 1;                                                     // 0x001d97d8: addiu $v1, $zero, 1
    v0 = v0 + s0;                                               // 0x001d97dc: addu $v0, $v0, $s0
    goto label_0x1d97f4;                                        // 0x001d97e0: b 0x1d97f4
    g_004c4318 = v1;  // Global at 0x004c4318                   // 0x001d97e4: sb $v1, 0x88($v0)
label_0x1d97e8:
    v0 = *(int32_t*)((s5) + 0x808);                             // 0x001d97e8: lw $v0, 0x808($s5)
    v0 = v0 + s0;                                               // 0x001d97ec: addu $v0, $v0, $s0
    g_004c4318 = 0;  // Global at 0x004c4318                    // 0x001d97f0: sb $zero, 0x88($v0)
label_0x1d97f4:
    func_0018da80();  // 0x18da60                                // 0x001d97f4: jal 0x18da60
    a0 = sp + 0xe8;                                             // 0x001d97f8: addiu $a0, $sp, 0xe8
    a0 = sp + 0xc0;                                             // 0x001d97fc: addiu $a0, $sp, 0xc0
    func_001a3ad0();  // 0x1a39d0                                // 0x001d9804: jal 0x1a39d0
    if (v0 == 0) goto label_0x1d9850;                           // 0x001d980c: beqz $v0, 0x1d9850
    /* nop */                                                   // 0x001d9810: nop 
    a1 = *(int32_t*)(s1);                                       // 0x001d9814: lw $a1, 0($s1)
    func_00189d00();  // 0x189b70                                // 0x001d9818: jal 0x189b70
    a0 = sp + 0xc0;                                             // 0x001d981c: addiu $a0, $sp, 0xc0
    v1 = *(int32_t*)((s5) + 0x808);                             // 0x001d9820: lw $v1, 0x808($s5)
    v1 = v1 + s0;                                               // 0x001d9824: addu $v1, $v1, $s0
    g_0021fac0 = v0;  // Global at 0x0021fac0                   // 0x001d9828: sw $v0, 0($v1)
    v0 = *(int32_t*)((s5) + 0x808);                             // 0x001d982c: lw $v0, 0x808($s5)
    v0 = v0 + s0;                                               // 0x001d9830: addu $v0, $v0, $s0
    a0 = g_004c4290;  // Global at 0x004c4290                   // 0x001d9834: lw $a0, 0($v0)
    if (a0 == 0) goto label_0x1d9860;                           // 0x001d9838: beqz $a0, 0x1d9860
    /* nop */                                                   // 0x001d983c: nop 
    func_001b0db0();  // 0x1b0d60                                // 0x001d9840: jal 0x1b0d60
    /* nop */                                                   // 0x001d9844: nop 
    goto label_0x1d9864;                                        // 0x001d9848: b 0x1d9864
    v1 = *(int32_t*)((s5) + 0x818);                             // 0x001d984c: lw $v1, 0x818($s5)
label_0x1d9850:
    v0 = *(int32_t*)((s5) + 0x808);                             // 0x001d9850: lw $v0, 0x808($s5)
    v1 = -1;                                                    // 0x001d9854: addiu $v1, $zero, -1
    v0 = v0 + s0;                                               // 0x001d9858: addu $v0, $v0, $s0
    g_004c4290 = v1;  // Global at 0x004c4290                   // 0x001d985c: sw $v1, 0($v0)
label_0x1d9860:
    v1 = *(int32_t*)((s5) + 0x818);                             // 0x001d9860: lw $v1, 0x818($s5)
label_0x1d9864:
    if (v1 == 0) goto label_0x1d988c;                           // 0x001d9864: beqz $v1, 0x1d988c
    a0 = sp + 0xe8;                                             // 0x001d9868: addiu $a0, $sp, 0xe8
    v0 = s3 << 5;                                               // 0x001d986c: sll $v0, $s3, 5
    v0 = v0 + s3;                                               // 0x001d9874: addu $v0, $v0, $s3
    v0 = v0 << 1;                                               // 0x001d987c: sll $v0, $v0, 1
    func_001a2cd0();  // 0x1a2c30                                // 0x001d9880: jal 0x1a2c30
    a0 = v1 + v0;                                               // 0x001d9884: addu $a0, $v1, $v0
    a0 = sp + 0xe8;                                             // 0x001d9888: addiu $a0, $sp, 0xe8
label_0x1d988c:
    func_0018da90();  // 0x18da80                                // 0x001d988c: jal 0x18da80
    /* nop */                                                   // 0x001d9890: nop 
    s3 = s3 + 1;                                                // 0x001d9894: addiu $s3, $s3, 1
label_0x1d9898:
    v1 = *(uint16_t*)((s5) + 0x812);                            // 0x001d9898: lhu $v1, 0x812($s5)
    v1 = (s3 < v1) ? 1 : 0;                                     // 0x001d989c: slt $v1, $s3, $v1
    if (v1 != 0) goto label_0x1d9704;                           // 0x001d98a0: bnez $v1, 0x1d9704
    /* nop */                                                   // 0x001d98a4: nop 
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001d98ac: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001d98b0: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d98b8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d98bc: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d98c0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d98c4: jr $ra
    sp = sp + 0xf0;                                             // 0x001d98c8: addiu $sp, $sp, 0xf0
}