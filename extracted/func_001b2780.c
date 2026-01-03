void func_001b2780() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001b2780: addiu $sp, $sp, -0x40
    at = 0x31 << 16;                                            // 0x001b2784: lui $at, 0x31
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b2790: addu.qb $zero, $sp, $s1
    v0 = g_003137b3;  // Global at 0x003137b3                   // 0x001b279c: lbu $v0, 0x37b3($at)
    if (v0 != 0) goto label_0x1b27b4;                           // 0x001b27a0: bnez $v0, 0x1b27b4
    a0 = 0x24 << 16;                                            // 0x001b27a8: lui $a0, 0x24
    func_001b3400();  // 1b3400                                // 0x001b27ac: jal 0x1b3400
    a0 = &str_0023db90;  // "PULL MODEL_WORK FAIL"              // 0x001b27b0: addiu $a0, $a0, -0x2470
label_0x1b27b4:
    func_001b26f0();  // 1b26f0                                // 0x001b27b8: jal 0x1b26f0
    if (v0 == 0) goto label_0x1b27d0;                           // 0x001b27c0: beqz $v0, 0x1b27d0
    at = 0x2b << 16;                                            // 0x001b27c4: lui $at, 0x2b
    goto label_0x1b2880;                                        // 0x001b27c8: b 0x1b2880
label_0x1b27d0:
    s0 = 0x2b << 16;                                            // 0x001b27d0: lui $s0, 0x2b
    v1 = g_002aa90c;  // Global at 0x002aa90c                   // 0x001b27d4: lh $v1, -0x56f4($at)
    v0 = 0x64;                                                  // 0x001b27d8: addiu $v0, $zero, 0x64
    if (v1 != v0) goto label_0x1b27f0;                          // 0x001b27dc: bne $v1, $v0, 0x1b27f0
    s0 = s0 + -0x5700;                                          // 0x001b27e0: addiu $s0, $s0, -0x5700
    a0 = 0x24 << 16;                                            // 0x001b27e4: lui $a0, 0x24
    func_001b3400();  // 1b3400                                // 0x001b27e8: jal 0x1b3400
    a0 = &str_0023dbb0;  // "DATA\\ROM\\FONT\\SCE20I22.GF"      // 0x001b27ec: addiu $a0, $a0, -0x2450
label_0x1b27f0:
    v1 = g_002aa908;  // Global at 0x002aa908                   // 0x001b27f0: lh $v1, 8($s0)
    v0 = g_002aa90a;  // Global at 0x002aa90a                   // 0x001b27f4: lh $v0, 0xa($s0)
    v0 = v1 - v0;                                               // 0x001b27f8: subu $v0, $v1, $v0
    at = (v0 < s2) ? 1 : 0;                                     // 0x001b27fc: slt $at, $v0, $s2
    if (at == 0) goto label_0x1b2810;                           // 0x001b2800: beqz $at, 0x1b2810
    a0 = 0x24 << 16;                                            // 0x001b2804: lui $a0, 0x24
    func_001b3400();  // 1b3400                                // 0x001b2808: jal 0x1b3400
    a0 = &str_0023dbb0;  // "DATA\\ROM\\FONT\\SCE20I22.GF"      // 0x001b280c: addiu $a0, $a0, -0x2450
label_0x1b2810:
    a3 = g_002aa90a;  // Global at 0x002aa90a                   // 0x001b2810: lh $a3, 0xa($s0)
    v0 = s1 & 0xff;                                             // 0x001b2814: andi $v0, $s1, 0xff
    a0 = v0 + 1;                                                // 0x001b2818: addiu $a0, $v0, 1
    t0 = g_002aa90c;  // Global at 0x002aa90c                   // 0x001b2820: lh $t0, 0xc($s0)
    v0 = g_002aa910;  // Global at 0x002aa910                   // 0x001b2828: lw $v0, 0x10($s0)
    v1 = a3 << 3;                                               // 0x001b282c: sll $v1, $a3, 3
    v1 = v1 + a3;                                               // 0x001b2830: addu $v1, $v1, $a3
    a1 = v1 << 1;                                               // 0x001b2834: sll $a1, $v1, 1
    a1 = a1 + a3;                                               // 0x001b2838: addu $a1, $a1, $a3
    v1 = t0 << 2;                                               // 0x001b283c: sll $v1, $t0, 2
    a3 = v1 + s0;                                               // 0x001b2840: addu $a3, $v1, $s0
    a1 = a1 << 3;                                               // 0x001b2844: sll $a1, $a1, 3
    v0 = v0 + a1;                                               // 0x001b2848: addu $v0, $v0, $a1
    v1 = t0 << 1;                                               // 0x001b284c: sll $v1, $t0, 1
    a1 = v1 + s0;                                               // 0x001b2850: addu $a1, $v1, $s0
    *(uint32_t*)((a3) + 0x1c) = v0;                             // 0x001b2854: sw $v0, 0x1c($a3)
    v1 = t0 + s0;                                               // 0x001b2858: addu $v1, $t0, $s0
    *(uint16_t*)((a1) + 0x1ac) = s2;                            // 0x001b285c: sh $s2, 0x1ac($a1)
    *(uint8_t*)((v1) + 0x274) = a0;                             // 0x001b2860: sb $a0, 0x274($v1)
    v1 = g_002aa90a;  // Global at 0x002aa90a                   // 0x001b2864: lh $v1, 0xa($s0)
    v1 = v1 + a2;                                               // 0x001b2868: addu $v1, $v1, $a2
    g_002aa90a = v1;  // Global at 0x002aa90a                   // 0x001b286c: sh $v1, 0xa($s0)
    v1 = g_002aa90c;  // Global at 0x002aa90c                   // 0x001b2870: lh $v1, 0xc($s0)
    v1 = v1 + 1;                                                // 0x001b2874: addiu $v1, $v1, 1
    g_002aa90c = v1;  // Global at 0x002aa90c                   // 0x001b2878: sh $v1, 0xc($s0)
label_0x1b2880:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b2880: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b2884: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b2888: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b288c: jr $ra
    sp = sp + 0x40;                                             // 0x001b2890: addiu $sp, $sp, 0x40
}