void func_001b26f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x2b << 16;                                            // 0x001b26f0: lui $at, 0x2b
    t0 = 0x2b << 16;                                            // 0x001b26f4: lui $t0, 0x2b
    v0 = g_002aa90c;  // Global at 0x002aa90c                   // 0x001b26f8: lh $v0, -0x56f4($at)
    if (v0 != 0) goto label_0x1b270c;                           // 0x001b26fc: bnez $v0, 0x1b270c
    t0 = t0 + -0x5700;                                          // 0x001b2700: addiu $t0, $t0, -0x5700
    goto label_0x1b276c;                                        // 0x001b2704: b 0x1b276c
label_0x1b270c:
    v1 = g_002aa90c;  // Global at 0x002aa90c                   // 0x001b270c: lh $v1, 0xc($t0)
    goto label_0x1b275c;                                        // 0x001b2718: b 0x1b275c
label_0x1b2720:
    v0 = *(uint8_t*)((a0) + 0x274);                             // 0x001b2720: lbu $v0, 0x274($a0)
    if (v0 != 0) goto label_0x1b2758;                           // 0x001b2724: bnez $v0, 0x1b2758
    v0 = a3 << 1;                                               // 0x001b2728: sll $v0, $a3, 1
    v0 = t0 + v0;                                               // 0x001b272c: addu $v0, $t0, $v0
    v0 = *(int16_t*)((v0) + 0x1ac);                             // 0x001b2730: lh $v0, 0x1ac($v0)
    if (v0 != a2) goto label_0x1b2758;                          // 0x001b2734: bne $v0, $a2, 0x1b2758
    /* nop */                                                   // 0x001b2738: nop 
    v1 = a1 & 0xff;                                             // 0x001b273c: andi $v1, $a1, 0xff
    v0 = a3 << 2;                                               // 0x001b2740: sll $v0, $a3, 2
    v1 = v1 + 1;                                                // 0x001b2744: addiu $v1, $v1, 1
    v0 = v0 + t0;                                               // 0x001b2748: addu $v0, $v0, $t0
    *(uint8_t*)((a0) + 0x274) = v1;                             // 0x001b274c: sb $v1, 0x274($a0)
    goto label_0x1b276c;                                        // 0x001b2750: b 0x1b276c
    v0 = *(int32_t*)((v0) + 0x1c);                              // 0x001b2754: lw $v0, 0x1c($v0)
label_0x1b2758:
    a3 = a3 + 1;                                                // 0x001b2758: addiu $a3, $a3, 1
label_0x1b275c:
    v0 = (a3 < v1) ? 1 : 0;                                     // 0x001b275c: slt $v0, $a3, $v1
    if (v0 != 0) goto label_0x1b2720;                           // 0x001b2760: bnez $v0, 0x1b2720
    a0 = t0 + a3;                                               // 0x001b2764: addu $a0, $t0, $a3
label_0x1b276c:
    return;                                                     // 0x001b276c: jr $ra
    /* nop */                                                   // 0x001b2770: nop 
}