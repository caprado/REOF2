void func_001b3710() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (a1 >= 0) goto label_0x1b3724;                           // 0x001b3710: bgez $a1, 0x1b3724
    v0 = a1 & 0xf;                                              // 0x001b3714: andi $v0, $a1, 0xf
    if (v0 == 0) goto label_0x1b3728;                           // 0x001b3718: beqz $v0, 0x1b3728
    t4 = v0 << 3;                                               // 0x001b371c: sll $t4, $v0, 3
    v0 = v0 + -0x10;                                            // 0x001b3720: addiu $v0, $v0, -0x10
label_0x1b3724:
    t4 = v0 << 3;                                               // 0x001b3724: sll $t4, $v0, 3
label_0x1b3728:
    if (a1 >= 0) goto label_0x1b3738;                           // 0x001b3728: bgez $a1, 0x1b3738
    v1 = a1 >> 4;                                               // 0x001b372c: sra $v1, $a1, 4
    v0 = a1 + 0xf;                                              // 0x001b3730: addiu $v0, $a1, 0xf
    v1 = v0 >> 4;                                               // 0x001b3734: sra $v1, $v0, 4
label_0x1b3738:
    a2 = a3 + t2;                                               // 0x001b3740: addu $a2, $a3, $t2
    a3 = a3 << 4;                                               // 0x001b3748: sll $a3, $a3, 4
    a2 = a2 << 4;                                               // 0x001b374c: sll $a2, $a2, 4
    a3 = a3 + 0x6c00;                                           // 0x001b3750: addiu $a3, $a3, 0x6c00
    a2 = a2 + 0x6c00;                                           // 0x001b3754: addiu $a2, $a2, 0x6c00
    a2 = t0 + t3;                                               // 0x001b3768: addu $a2, $t0, $t3
    t0 = t0 << 4;                                               // 0x001b3770: sll $t0, $t0, 4
    a2 = a2 << 4;                                               // 0x001b3774: sll $a2, $a2, 4
    t0 = t0 + 0x7200;                                           // 0x001b3778: addiu $t0, $t0, 0x7200
    a2 = a2 + 0x7200;                                           // 0x001b377c: addiu $a2, $a2, 0x7200
    t0 = t1 | t0;                                               // 0x001b3798: or $t0, $t1, $t0
    a2 = a3 | a2;                                               // 0x001b379c: or $a2, $a3, $a2
    a3 = a1 | t0;                                               // 0x001b37a0: or $a3, $a1, $t0
    a1 = a1 | a2;                                               // 0x001b37a8: or $a1, $a1, $a2
    t0 = v1 << 3;                                               // 0x001b37ac: sll $t0, $v1, 3
    a2 = v1 << 7;                                               // 0x001b37b0: sll $a2, $v1, 7
    v1 = t0 + 8;                                                // 0x001b37b4: addiu $v1, $t0, 8
    t0 = 0x3f80 << 16;                                          // 0x001b37bc: lui $t0, 0x3f80
    v1 = v1 << 4;                                               // 0x001b37c0: sll $v1, $v1, 4
    v0 = v0 | t1;                                               // 0x001b37cc: or $v0, $v0, $t1
    t0 = t4 << 4;                                               // 0x001b37d0: sll $t0, $t4, 4
    a2 = t0 | a2;                                               // 0x001b37d8: or $a2, $t0, $a2
    v0 = t4 + 8;                                                // 0x001b37dc: addiu $v0, $t4, 8
    v0 = v0 << 4;                                               // 0x001b37e4: sll $v0, $v0, 4
    v0 = v0 | v1;                                               // 0x001b37ec: or $v0, $v0, $v1
    v0 = a0 + 0x30;                                             // 0x001b37f4: addiu $v0, $a0, 0x30
    return;                                                     // 0x001b37f8: jr $ra
}