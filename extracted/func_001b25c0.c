void func_001b25c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001b25c0: addiu $sp, $sp, -0x60
    at = 0x31 << 16;                                            // 0x001b25c4: lui $at, 0x31
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001b25d0: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b25d8: addu.qb $zero, $sp, $s1
    v0 = g_003137b3;  // Global at 0x003137b3                   // 0x001b25e4: lbu $v0, 0x37b3($at)
    s0 = 0x2b << 16;                                            // 0x001b25e8: lui $s0, 0x2b
    if (v0 == 0) goto label_0x1b25fc;                           // 0x001b25ec: beqz $v0, 0x1b25fc
    s0 = s0 + -0x5700;                                          // 0x001b25f0: addiu $s0, $s0, -0x5700
    func_001af180();  // 0x1af0d0                                // 0x001b25f4: jal 0x1af0d0
label_0x1b25fc:
    func_00107d30();  // 0x107c70                                // 0x001b2604: jal 0x107c70
    a2 = 0x33c;                                                 // 0x001b2608: addiu $a2, $zero, 0x33c
    func_001af0d0();  // 0x1af020                                // 0x001b260c: jal 0x1af020
    v1 = s1 << 3;                                               // 0x001b2614: sll $v1, $s1, 3
    v0 = 2 << 16;                                               // 0x001b2618: lui $v0, 2
    v1 = v1 + s1;                                               // 0x001b261c: addu $v1, $v1, $s1
    v0 = v0 | 0xb680;                                           // 0x001b2620: ori $v0, $v0, 0xb680
    v1 = v1 << 1;                                               // 0x001b2624: sll $v1, $v1, 1
    v1 = v1 + s1;                                               // 0x001b2628: addu $v1, $v1, $s1
    s2 = v1 << 3;                                               // 0x001b262c: sll $s2, $v1, 3
    s3 = s2 + v0;                                               // 0x001b2630: addu $s3, $s2, $v0
    func_001aefc0();  // 0x1aef60                                // 0x001b2634: jal 0x1aef60
    func_00107d30();  // 0x107c70                                // 0x001b2648: jal 0x107c70
    v0 = s4 + s2;                                               // 0x001b2650: addu $v0, $s4, $s2
    g_002aa910 = s4;  // Global at 0x002aa910                   // 0x001b2654: sw $s4, 0x10($s0)
    g_002aa914 = v0;  // Global at 0x002aa914                   // 0x001b2658: sw $v0, 0x14($s0)
    g_002aa908 = s1;  // Global at 0x002aa908                   // 0x001b2660: sh $s1, 8($s0)
    g_002aa90a = 0;  // Global at 0x002aa90a                    // 0x001b2664: sh $zero, 0xa($s0)
    func_001d5380();  // 0x1d51f0                                // 0x001b2668: jal 0x1d51f0
    g_002aa90c = 0;  // Global at 0x002aa90c                    // 0x001b266c: sh $zero, 0xc($s0)
    v1 = 1;                                                     // 0x001b2670: addiu $v1, $zero, 1
    at = 0x31 << 16;                                            // 0x001b2674: lui $at, 0x31
    g_003137b3 = v1;  // Global at 0x003137b3                   // 0x001b2678: sb $v1, 0x37b3($at)
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001b2680: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b2688: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b268c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b2690: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b2694: jr $ra
    sp = sp + 0x60;                                             // 0x001b2698: addiu $sp, $sp, 0x60
}