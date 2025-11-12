void func_001a7190() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x2a << 16;                                            // 0x001a7190: lui $at, 0x2a
    v0 = 0x2a << 16;                                            // 0x001a7194: lui $v0, 0x2a
    a1 = g_002a0f70;  // Global at 0x002a0f70                   // 0x001a7198: lw $a1, 0xf70($at)
    v0 = v0 + 0xf80;                                            // 0x001a719c: addiu $v0, $v0, 0xf80
    v1 = a1 << 1;                                               // 0x001a71a0: sll $v1, $a1, 1
    v1 = v1 + a1;                                               // 0x001a71a4: addu $v1, $v1, $a1
    v1 = v1 << 2;                                               // 0x001a71a8: sll $v1, $v1, 2
    a1 = v0 + v1;                                               // 0x001a71ac: addu $a1, $v0, $v1
    v0 = *(int32_t*)(a1);                                       // 0x001a71b0: lw $v0, 0($a1)
    if (v0 < 0) goto label_0x1a71c4;                            // 0x001a71b4: bltz $v0, 0x1a71c4
    v1 = a0 & 0xffff;                                           // 0x001a71b8: andi $v1, $a0, 0xffff
    goto label_0x1a7208;                                        // 0x001a71bc: b 0x1a7208
    v0 = -1;                                                    // 0x001a71c0: addiu $v0, $zero, -1
label_0x1a71c4:
    v0 = 0x2900 << 16;                                          // 0x001a71c4: lui $v0, 0x2900
    v1 = v1 << 8;                                               // 0x001a71c8: sll $v1, $v1, 8
    at = 0x2a << 16;                                            // 0x001a71cc: lui $at, 0x2a
    v0 = v1 | v0;                                               // 0x001a71d8: or $v0, $v1, $v0
    *(uint32_t*)(a1) = v0;                                      // 0x001a71dc: sw $v0, 0($a1)
    v0 = g_002a0f70;  // Global at 0x002a0f70                   // 0x001a71e0: lw $v0, 0xf70($at)
    v1 = v0 + 1;                                                // 0x001a71e4: addiu $v1, $v0, 1
    if (v1 >= 0) goto label_0x1a71fc;                           // 0x001a71e8: bgez $v1, 0x1a71fc
    v0 = v1 & 0x1f;                                             // 0x001a71ec: andi $v0, $v1, 0x1f
    if (v0 == 0) goto label_0x1a71fc;                           // 0x001a71f0: beqz $v0, 0x1a71fc
    /* nop */                                                   // 0x001a71f4: nop 
    v0 = v0 + -0x20;                                            // 0x001a71f8: addiu $v0, $v0, -0x20
label_0x1a71fc:
    at = 0x2a << 16;                                            // 0x001a71fc: lui $at, 0x2a
    g_002a0f70 = v0;  // Global at 0x002a0f70                   // 0x001a7200: sw $v0, 0xf70($at)
label_0x1a7208:
    return;                                                     // 0x001a7208: jr $ra
    /* nop */                                                   // 0x001a720c: nop 
}