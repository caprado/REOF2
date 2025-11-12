void func_0011f0c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x70;                                            // 0x0011f0c8: addiu $sp, $sp, -0x70
    if (s3 != 0) goto label_0x11f104;                           // 0x0011f0f0: bnez $s3, 0x11f104
    v0 = 0x8000 << 16;                                          // 0x0011f0f8: lui $v0, 0x8000
    goto label_0x11f194;                                        // 0x0011f0fc: b 0x11f194
    v0 = v0 | 0x16;                                             // 0x0011f100: ori $v0, $v0, 0x16
label_0x11f104:
    s2 = 0x25 << 16;                                            // 0x0011f104: lui $s2, 0x25
    s0 = g_00253480;  // Global at 0x00253480                   // 0x0011f108: lw $s0, 0x3480($s2)
    if (s0 == 0) goto label_0x11f11c;                           // 0x0011f10c: beqz $s0, 0x11f11c
    /* nop */                                                   // 0x0011f110: nop 
    v0 = *(int32_t*)(s0);                                       // 0x0011f114: lw $v0, 0($s0)
    g_00253480 = v0;  // Global at 0x00253480                   // 0x0011f118: sw $v0, 0x3480($s2)
label_0x11f11c:
    if (s0 != 0) goto label_0x11f130;                           // 0x0011f11c: bnez $s0, 0x11f130
    /* nop */                                                   // 0x0011f120: nop 
    v0 = 0x8000 << 16;                                          // 0x0011f124: lui $v0, 0x8000
    goto label_0x11f194;                                        // 0x0011f128: b 0x11f194
    v0 = v0 | 0x8005;                                           // 0x0011f12c: ori $v0, $v0, 0x8005
label_0x11f130:
    func_0011e5a0();  // 0x11e530                                // 0x0011f130: jal 0x11e530
    /* nop */                                                   // 0x0011f134: nop 
    if (s1 >= 0) goto label_0x11f15c;                           // 0x0011f13c: bgezl $s1, 0x11f15c
    *(uint32_t*)((s0) + 8) = s3;                                // 0x0011f140: sw $s3, 8($s0)
    v1 = g_00253480;  // Global at 0x00253480                   // 0x0011f144: lw $v1, 0x3480($s2)
    g_00253480 = s0;  // Global at 0x00253480                   // 0x0011f148: sw $s0, 0x3480($s2)
    *(uint32_t*)(s0) = v1;                                      // 0x0011f14c: sw $v1, 0($s0)
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x0011f150: sw $zero, 4($s0)
    goto label_0x11f198;                                        // 0x0011f154: b 0x11f198
label_0x11f15c:
    a2 = 0x12 << 16;                                            // 0x0011f15c: lui $a2, 0x12
    *(uint32_t*)((s0) + 0xc) = s4;                              // 0x0011f160: sw $s4, 0xc($s0)
    a2 = a2 + -0x10c8;                                          // 0x0011f164: addiu $a2, $a2, -0x10c8
    *(uint32_t*)((s0) + 4) = s1;                                // 0x0011f168: sw $s1, 4($s0)
    func_0011ecc0();  // 0x11ebc8                                // 0x0011f174: jal 0x11ebc8
    func_0011e838();  // 0x11e788                                // 0x0011f17c: jal 0x11e788
    v0 = s0 << 4;                                               // 0x0011f184: sll $v0, $s0, 4
    v1 = s1 & 0xfe;                                             // 0x0011f188: andi $v1, $s1, 0xfe
    v0 = v0 | v1;                                               // 0x0011f18c: or $v0, $v0, $v1
    v0 = v0 | 1;                                                // 0x0011f190: ori $v0, $v0, 1
label_0x11f194:
label_0x11f198:
    return;                                                     // 0x0011f1b0: jr $ra
    sp = sp + 0x70;                                             // 0x0011f1b4: addiu $sp, $sp, 0x70
}