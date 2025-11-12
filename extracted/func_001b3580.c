void func_001b3580() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001b3580: addiu $sp, $sp, -0x60
    at = 0x31 << 16;                                            // 0x001b3584: lui $at, 0x31
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001b3590: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b3598: addu.qb $zero, $sp, $s1
    v1 = g_00313804;  // Global at 0x00313804                   // 0x001b35a0: lhu $v1, 0x3804($at)
    s0 = 0x2b << 16;                                            // 0x001b35a4: lui $s0, 0x2b
    if (v1 == 0) goto label_0x1b36bc;                           // 0x001b35a8: beqz $v1, 0x1b36bc
    s0 = s0 + -0x3bc0;                                          // 0x001b35ac: addiu $s0, $s0, -0x3bc0
    v1 = g_002ac484;  // Global at 0x002ac484                   // 0x001b35b0: lw $v1, 0x44($s0)
    if (v1 == 0) goto label_0x1b36bc;                           // 0x001b35b4: beqz $v1, 0x1b36bc
    /* nop */                                                   // 0x001b35b8: nop 
    t2 = g_002ac440;  // Global at 0x002ac440                   // 0x001b35bc: lw $t2, 0($s0)
    a2 = g_002ac448;  // Global at 0x002ac448                   // 0x001b35c4: lw $a2, 8($s0)
    a1 = g_002ac44c;  // Global at 0x002ac44c                   // 0x001b35c8: lw $a1, 0xc($s0)
    a0 = g_002ac444;  // Global at 0x002ac444                   // 0x001b35cc: lw $a0, 4($s0)
    goto label_0x1b3680;                                        // 0x001b35d8: b 0x1b3680
label_0x1b35e0:
    a0 = 0xa;                                                   // 0x001b35e0: addiu $a0, $zero, 0xa
    if (a1 != a0) goto label_0x1b3608;                          // 0x001b35e4: bne $a1, $a0, 0x1b3608
    a0 = ((unsigned)s2 < (unsigned)0x280) ? 1 : 0;              // 0x001b35e8: sltiu $a0, $s2, 0x280
    a0 = g_002ac458;  // Global at 0x002ac458                   // 0x001b35ec: lw $a0, 0x18($s0)
    if (a0 != 0) goto label_0x1b35fc;                           // 0x001b35f0: bnez $a0, 0x1b35fc
label_0x1b35fc:
    a0 = g_002ac444;  // Global at 0x002ac444                   // 0x001b35fc: lw $a0, 4($s0)
    goto label_0x1b3680;                                        // 0x001b3600: b 0x1b3680
    s1 = s1 + a0;                                               // 0x001b3604: addu $s1, $s1, $a0
label_0x1b3608:
    if (a0 != 0) goto label_0x1b3624;                           // 0x001b3608: bnez $a0, 0x1b3624
    /* nop */                                                   // 0x001b360c: nop 
    a0 = g_002ac444;  // Global at 0x002ac444                   // 0x001b3610: lw $a0, 4($s0)
    s1 = s1 + a0;                                               // 0x001b3614: addu $s1, $s1, $a0
    at = ((unsigned)s1 < (unsigned)0x1c0) ? 1 : 0;              // 0x001b3618: sltiu $at, $s1, 0x1c0
    if (at == 0) goto label_0x1b368c;                           // 0x001b361c: beqz $at, 0x1b368c
label_0x1b3624:
    a2 = g_002ac48c;  // Global at 0x002ac48c                   // 0x001b3624: lw $a2, 0x4c($s0)
    a0 = g_002ac488;  // Global at 0x002ac488                   // 0x001b3628: lw $a0, 0x48($s0)
    at = ((unsigned)a2 < (unsigned)a0) ? 1 : 0;                 // 0x001b362c: sltu $at, $a2, $a0
    if (at == 0) goto label_0x1b3678;                           // 0x001b3630: beqz $at, 0x1b3678
    a0 = (a1 < 0x10) ? 1 : 0;                                   // 0x001b3634: slti $a0, $a1, 0x10
    if (a0 != 0) goto label_0x1b3678;                           // 0x001b3638: bnez $a0, 0x1b3678
    /* nop */                                                   // 0x001b363c: nop 
    a0 = 0x20;                                                  // 0x001b3640: addiu $a0, $zero, 0x20
    if (a1 == a0) goto label_0x1b3678;                          // 0x001b3644: beq $a1, $a0, 0x1b3678
    /* nop */                                                   // 0x001b3648: nop 
    t1 = g_002ac450;  // Global at 0x002ac450                   // 0x001b364c: lw $t1, 0x10($s0)
    t3 = g_002ac444;  // Global at 0x002ac444                   // 0x001b3654: lw $t3, 4($s0)
    a2 = g_002ac454;  // Global at 0x002ac454                   // 0x001b365c: lw $a2, 0x14($s0)
    func_001b3830();  // 0x1b3710                                // 0x001b3660: jal 0x1b3710
    a0 = g_002ac48c;  // Global at 0x002ac48c                   // 0x001b3668: lw $a0, 0x4c($s0)
    a0 = a0 + 1;                                                // 0x001b3670: addiu $a0, $a0, 1
    g_002ac48c = a0;  // Global at 0x002ac48c                   // 0x001b3674: sw $a0, 0x4c($s0)
label_0x1b3678:
    t2 = g_002ac440;  // Global at 0x002ac440                   // 0x001b3678: lw $t2, 0($s0)
    s2 = s2 + t2;                                               // 0x001b367c: addu $s2, $s2, $t2
label_0x1b3680:
    a1 = *(int8_t*)(s4);                                        // 0x001b3680: lb $a1, 0($s4)
    if (a1 != 0) goto label_0x1b35e0;                           // 0x001b3684: bnez $a1, 0x1b35e0
    s4 = s4 + 1;                                                // 0x001b3688: addiu $s4, $s4, 1
label_0x1b368c:
    /* divide: s2 / t2 -> hi:lo */                              // 0x001b368c: divu $zero, $s2, $t2
    /* nop */                                                   // 0x001b3690: nop 
    /* nop */                                                   // 0x001b3694: nop 
    /* mflo $a0 */                                              // 0x001b3698
    g_002ac448 = a0;  // Global at 0x002ac448                   // 0x001b369c: sw $a0, 8($s0)
    a0 = g_002ac444;  // Global at 0x002ac444                   // 0x001b36a0: lw $a0, 4($s0)
    /* divide: s1 / a0 -> hi:lo */                              // 0x001b36a4: divu $zero, $s1, $a0
    /* nop */                                                   // 0x001b36a8: nop 
    /* nop */                                                   // 0x001b36ac: nop 
    /* mflo $a0 */                                              // 0x001b36b0
    g_002ac44c = a0;  // Global at 0x002ac44c                   // 0x001b36b4: sw $a0, 0xc($s0)
    g_002ac484 = v1;  // Global at 0x002ac484                   // 0x001b36b8: sw $v1, 0x44($s0)
label_0x1b36bc:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001b36c0: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b36c8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b36cc: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b36d0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b36d4: jr $ra
    sp = sp + 0x60;                                             // 0x001b36d8: addiu $sp, $sp, 0x60
}