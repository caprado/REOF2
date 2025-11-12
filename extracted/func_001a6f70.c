void func_001a6f70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x2a << 16;                                            // 0x001a6f70: lui $at, 0x2a
    v0 = 0x7f << 16;                                            // 0x001a6f74: lui $v0, 0x7f
    t4 = g_002a0f78;  // Global at 0x002a0f78                   // 0x001a6f78: lw $t4, 0xf78($at)
    a3 = v0 | 0x7f7f;                                           // 0x001a6f7c: ori $a3, $v0, 0x7f7f
    v0 = 0x2a << 16;                                            // 0x001a6f80: lui $v0, 0x2a
    a2 = 8;                                                     // 0x001a6f84: addiu $a2, $zero, 8
    t3 = a0 & a3;                                               // 0x001a6f88: and $t3, $a0, $a3
    a1 = 0x7f00 << 16;                                          // 0x001a6f8c: lui $a1, 0x7f00
    at = 0x2a << 16;                                            // 0x001a6f90: lui $at, 0x2a
    t2 = g_002a0f70;  // Global at 0x002a0f70                   // 0x001a6f94: lw $t2, 0xf70($at)
    goto label_0x1a6fe0;                                        // 0x001a6f98: b 0x1a6fe0
    v0 = v0 + 0xf80;                                            // 0x001a6f9c: addiu $v0, $v0, 0xf80
label_0x1a6fa0:
    if (v1 != t3) goto label_0x1a6fc4;                          // 0x001a6fa0: bne $v1, $t3, 0x1a6fc4
    v1 = t4 + 1;                                                // 0x001a6fa4: addiu $v1, $t4, 1
    v1 = t0 >> 0x18;                                            // 0x001a6fa8: sra $v1, $t0, 0x18
    if (v1 != a2) goto label_0x1a6fbc;                          // 0x001a6fac: bne $v1, $a2, 0x1a6fbc
    /* nop */                                                   // 0x001a6fb0: nop 
    goto label_0x1a7064;                                        // 0x001a6fb4: b 0x1a7064
label_0x1a6fbc:
    *(uint32_t*)(t1) = a1;                                      // 0x001a6fbc: sw $a1, 0($t1)
    v1 = t4 + 1;                                                // 0x001a6fc0: addiu $v1, $t4, 1
label_0x1a6fc4:
    if (v1 >= 0) goto label_0x1a6fd8;                           // 0x001a6fc4: bgez $v1, 0x1a6fd8
    t4 = v1 & 0x1f;                                             // 0x001a6fc8: andi $t4, $v1, 0x1f
    if (t4 == 0) goto label_0x1a6fd8;                           // 0x001a6fcc: beqz $t4, 0x1a6fd8
    /* nop */                                                   // 0x001a6fd0: nop 
    t4 = t4 + -0x20;                                            // 0x001a6fd4: addiu $t4, $t4, -0x20
label_0x1a6fd8:
    if (t4 == t2) goto label_0x1a7000;                          // 0x001a6fd8: beq $t4, $t2, 0x1a7000
    v1 = t2 << 1;                                               // 0x001a6fdc: sll $v1, $t2, 1
label_0x1a6fe0:
    v1 = t4 << 1;                                               // 0x001a6fe0: sll $v1, $t4, 1
    v1 = v1 + t4;                                               // 0x001a6fe4: addu $v1, $v1, $t4
    v1 = v1 << 2;                                               // 0x001a6fe8: sll $v1, $v1, 2
    t1 = v0 + v1;                                               // 0x001a6fec: addu $t1, $v0, $v1
    t0 = *(int32_t*)(t1);                                       // 0x001a6ff0: lw $t0, 0($t1)
    if (t0 >= 0) goto label_0x1a6fa0;                           // 0x001a6ff4: bgez $t0, 0x1a6fa0
    v1 = t0 & a3;                                               // 0x001a6ff8: and $v1, $t0, $a3
    v1 = t2 << 1;                                               // 0x001a6ffc: sll $v1, $t2, 1
label_0x1a7000:
    v0 = 0x2a << 16;                                            // 0x001a7000: lui $v0, 0x2a
    v1 = v1 + t2;                                               // 0x001a7004: addu $v1, $v1, $t2
    v0 = v0 + 0xf80;                                            // 0x001a7008: addiu $v0, $v0, 0xf80
    v1 = v1 << 2;                                               // 0x001a700c: sll $v1, $v1, 2
    a1 = v0 + v1;                                               // 0x001a7010: addu $a1, $v0, $v1
    v0 = g_7f000000;  // Global at 0x7f000000                   // 0x001a7014: lw $v0, 0($a1)
    if (v0 < 0) goto label_0x1a7028;                            // 0x001a7018: bltz $v0, 0x1a7028
    goto label_0x1a7064;                                        // 0x001a7020: b 0x1a7064
    v0 = -1;                                                    // 0x001a7024: addiu $v0, $zero, -1
label_0x1a7028:
    at = 0x2a << 16;                                            // 0x001a7028: lui $at, 0x2a
    a0 = g_002a0f70;  // Global at 0x002a0f70                   // 0x001a702c: lw $a0, 0xf70($at)
    v0 = 0x800 << 16;                                           // 0x001a7034: lui $v0, 0x800
    v0 = v1 | v0;                                               // 0x001a7038: or $v0, $v1, $v0
    g_7f000000 = v0;  // Global at 0x7f000000                   // 0x001a703c: sw $v0, 0($a1)
    v1 = a0 + 1;                                                // 0x001a7040: addiu $v1, $a0, 1
    if (v1 >= 0) goto label_0x1a7058;                           // 0x001a7044: bgez $v1, 0x1a7058
    v0 = v1 & 0x1f;                                             // 0x001a7048: andi $v0, $v1, 0x1f
    if (v0 == 0) goto label_0x1a7058;                           // 0x001a704c: beqz $v0, 0x1a7058
    /* nop */                                                   // 0x001a7050: nop 
    v0 = v0 + -0x20;                                            // 0x001a7054: addiu $v0, $v0, -0x20
label_0x1a7058:
    at = 0x2a << 16;                                            // 0x001a7058: lui $at, 0x2a
    g_002a0f70 = v0;  // Global at 0x002a0f70                   // 0x001a705c: sw $v0, 0xf70($at)
label_0x1a7064:
    return;                                                     // 0x001a7064: jr $ra
    /* nop */                                                   // 0x001a7068: nop 
}