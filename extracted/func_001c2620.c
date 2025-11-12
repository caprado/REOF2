void func_001c2620() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_f0;
    
    sp = sp + -0x150;                                           // 0x001c2620: addiu $sp, $sp, -0x150
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001c2628: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001c2630: dpa.w.ph $ac0, $sp, $s3
    s3 = 0x31 << 16;                                            // 0x001c2638: lui $s3, 0x31
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c263c: addu.qb $zero, $sp, $s1
    a0 = 0x14;                                                  // 0x001c2650: addiu $a0, $zero, 0x14
    func_001b4ff0();  // 0x1b4fd0                                // 0x001c2654: jal 0x1b4fd0
    s3 = s3 + 0x37a0;                                           // 0x001c2658: addiu $s3, $s3, 0x37a0
    func_001b5050();  // 0x1b5040                                // 0x001c265c: jal 0x1b5040
    v0 = 0x8080 << 16;                                          // 0x001c2664: lui $v0, 0x8080
    func_001b5060();  // 0x1b5050                                // 0x001c2668: jal 0x1b5050
    a0 = v0 | 0x8080;                                           // 0x001c266c: ori $a0, $v0, 0x8080
    goto label_0x1c2770;                                        // 0x001c2670: b 0x1c2770
    a1 = *(int32_t*)(s2);                                       // 0x001c2674: lw $a1, 0($s2)
label_0x1c2678:
    s4 = sp + 0xa0;                                             // 0x001c2678: addiu $s4, $sp, 0xa0
    local_f0 = 0;                                               // 0x001c267c: sb $zero, 0xf0($sp)
    func_0010ae00();  // 0x10ac68                                // 0x001c2680: jal 0x10ac68
label_0x1c2688:
    a1 = 0x24 << 16;                                            // 0x001c2688: lui $a1, 0x24
    func_0010b538();  // 0x10b4b0                                // 0x001c2690: jal 0x10b4b0
    a1 = a1 + 0x36c8;                                           // 0x001c2694: addiu $a1, $a1, 0x36c8
    if (v0 == 0) goto label_0x1c272c;                           // 0x001c2698: beqz $v0, 0x1c272c
    a0 = sp + 0xf0;                                             // 0x001c26a4: addiu $a0, $sp, 0xf0
    func_0010a990();  // 0x10a860                                // 0x001c26a8: jal 0x10a860
    *(uint8_t*)(s5) = 0;                                        // 0x001c26ac: sb $zero, 0($s5)
    a1 = 0x24 << 16;                                            // 0x001c26b0: lui $a1, 0x24
    a0 = sp + 0xf0;                                             // 0x001c26b4: addiu $a0, $sp, 0xf0
    func_0010a990();  // 0x10a860                                // 0x001c26b8: jal 0x10a860
    a1 = a1 + 0x36d0;                                           // 0x001c26bc: addiu $a1, $a1, 0x36d0
    v0 = g_003137a3;  // Global at 0x003137a3                   // 0x001c26c0: lbu $v0, 3($s3)
    if (v0 != 0) goto label_0x1c26f4;                           // 0x001c26c4: bnez $v0, 0x1c26f4
    s4 = s5 + 2;                                                // 0x001c26c8: addiu $s4, $s5, 2
    a1 = 0x24 << 16;                                            // 0x001c26cc: lui $a1, 0x24
    a0 = sp + 0x70;                                             // 0x001c26d0: addiu $a0, $sp, 0x70
    a1 = a1 + 0x36d8;                                           // 0x001c26d4: addiu $a1, $a1, 0x36d8
    func_0010a570();  // 0x10a4d8                                // 0x001c26d8: jal 0x10a4d8
    a2 = 0x480;                                                 // 0x001c26dc: addiu $a2, $zero, 0x480
    a0 = sp + 0x70;                                             // 0x001c26e0: addiu $a0, $sp, 0x70
    func_001c2620();  // 0x1c2590                                // 0x001c26e4: jal 0x1c2590
    a1 = sp + 0x140;                                            // 0x001c26e8: addiu $a1, $sp, 0x140
    goto label_0x1c270c;                                        // 0x001c26ec: b 0x1c270c
    a0 = sp + 0xf0;                                             // 0x001c26f0: addiu $a0, $sp, 0xf0
label_0x1c26f4:
    a1 = 0x24 << 16;                                            // 0x001c26f4: lui $a1, 0x24
    a0 = sp + 0x140;                                            // 0x001c26f8: addiu $a0, $sp, 0x140
    a1 = a1 + 0x36d8;                                           // 0x001c26fc: addiu $a1, $a1, 0x36d8
    func_0010a570();  // 0x10a4d8                                // 0x001c2700: jal 0x10a4d8
    a2 = 0x480;                                                 // 0x001c2704: addiu $a2, $zero, 0x480
    a0 = sp + 0xf0;                                             // 0x001c2708: addiu $a0, $sp, 0xf0
label_0x1c270c:
    func_0010a990();  // 0x10a860                                // 0x001c270c: jal 0x10a860
    a1 = sp + 0x140;                                            // 0x001c2710: addiu $a1, $sp, 0x140
    a1 = 0x24 << 16;                                            // 0x001c2714: lui $a1, 0x24
    a0 = sp + 0xf0;                                             // 0x001c2718: addiu $a0, $sp, 0xf0
    func_0010a990();  // 0x10a860                                // 0x001c271c: jal 0x10a860
    a1 = a1 + 0x36e0;                                           // 0x001c2720: addiu $a1, $a1, 0x36e0
    goto label_0x1c2688;                                        // 0x001c2724: b 0x1c2688
    /* nop */                                                   // 0x001c2728: nop 
label_0x1c272c:
    a1 = 0x24 << 16;                                            // 0x001c272c: lui $a1, 0x24
    func_0010b538();  // 0x10b4b0                                // 0x001c2734: jal 0x10b4b0
    a1 = a1 + 0x36e8;                                           // 0x001c2738: addiu $a1, $a1, 0x36e8
    if (v0 == 0) goto label_0x1c274c;                           // 0x001c273c: beqz $v0, 0x1c274c
    goto label_0x1c2688;                                        // 0x001c2744: b 0x1c2688
    g_80800000 = 0;  // Global at 0x80800000                    // 0x001c2748: sb $zero, 0($v0)
label_0x1c274c:
    func_0010a990();  // 0x10a860                                // 0x001c274c: jal 0x10a860
    a0 = sp + 0xf0;                                             // 0x001c2750: addiu $a0, $sp, 0xf0
    a2 = sp + 0xf0;                                             // 0x001c275c: addiu $a2, $sp, 0xf0
    func_001c2110();  // 0x1c1ff0                                // 0x001c2760: jal 0x1c1ff0
    s0 = s0 + 0x14;                                             // 0x001c2768: addiu $s0, $s0, 0x14
    a1 = *(int32_t*)(s2);                                       // 0x001c276c: lw $a1, 0($s2)
label_0x1c2770:
    if (a1 != 0) goto label_0x1c2678;                           // 0x001c2770: bnez $a1, 0x1c2678
    s2 = s2 + 4;                                                // 0x001c2774: addiu $s2, $s2, 4
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001c277c: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001c2780: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c2788: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c278c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c2790: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c2794: jr $ra
    sp = sp + 0x150;                                            // 0x001c2798: addiu $sp, $sp, 0x150
}