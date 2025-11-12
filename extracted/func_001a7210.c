void func_001a7210() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x2a << 16;                                            // 0x001a7210: lui $at, 0x2a
    v0 = 0x2a << 16;                                            // 0x001a7214: lui $v0, 0x2a
    a2 = g_002a0f70;  // Global at 0x002a0f70                   // 0x001a7218: lw $a2, 0xf70($at)
    v0 = v0 + 0xf80;                                            // 0x001a721c: addiu $v0, $v0, 0xf80
    v1 = a2 << 1;                                               // 0x001a7220: sll $v1, $a2, 1
    v1 = v1 + a2;                                               // 0x001a7224: addu $v1, $v1, $a2
    v1 = v1 << 2;                                               // 0x001a7228: sll $v1, $v1, 2
    a2 = v0 + v1;                                               // 0x001a722c: addu $a2, $v0, $v1
    v0 = *(int32_t*)(a2);                                       // 0x001a7230: lw $v0, 0($a2)
    if (v0 < 0) goto label_0x1a7244;                            // 0x001a7234: bltz $v0, 0x1a7244
    v0 = a0 & 0xff;                                             // 0x001a7238: andi $v0, $a0, 0xff
    goto label_0x1a7290;                                        // 0x001a723c: b 0x1a7290
    v0 = -1;                                                    // 0x001a7240: addiu $v0, $zero, -1
label_0x1a7244:
    v1 = a1 & 0xffff;                                           // 0x001a7244: andi $v1, $a1, 0xffff
    a0 = v0 << 0x10;                                            // 0x001a7248: sll $a0, $v0, 0x10
    at = 0x2a << 16;                                            // 0x001a724c: lui $at, 0x2a
    v1 = a0 | v1;                                               // 0x001a7250: or $v1, $a0, $v1
    v0 = 0x4c00 << 16;                                          // 0x001a7254: lui $v0, 0x4c00
    v0 = v1 | v0;                                               // 0x001a7260: or $v0, $v1, $v0
    *(uint32_t*)(a2) = v0;                                      // 0x001a7264: sw $v0, 0($a2)
    v0 = g_002a0f70;  // Global at 0x002a0f70                   // 0x001a7268: lw $v0, 0xf70($at)
    v1 = v0 + 1;                                                // 0x001a726c: addiu $v1, $v0, 1
    if (v1 >= 0) goto label_0x1a7284;                           // 0x001a7270: bgez $v1, 0x1a7284
    v0 = v1 & 0x1f;                                             // 0x001a7274: andi $v0, $v1, 0x1f
    if (v0 == 0) goto label_0x1a7284;                           // 0x001a7278: beqz $v0, 0x1a7284
    /* nop */                                                   // 0x001a727c: nop 
    v0 = v0 + -0x20;                                            // 0x001a7280: addiu $v0, $v0, -0x20
label_0x1a7284:
    at = 0x2a << 16;                                            // 0x001a7284: lui $at, 0x2a
    g_002a0f70 = v0;  // Global at 0x002a0f70                   // 0x001a7288: sw $v0, 0xf70($at)
label_0x1a7290:
    return;                                                     // 0x001a7290: jr $ra
    /* nop */                                                   // 0x001a7294: nop 
}