void func_001acf00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001acf00: addiu $sp, $sp, -0x30
    at = 0x2a << 16;                                            // 0x001acf04: lui $at, 0x2a
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001acf0c: addu.qb $zero, $sp, $s1
    a1 = g_002a522c;  // Global at 0x002a522c                   // 0x001acf14: lw $a1, 0x522c($at)
    v0 = *(int32_t*)((a0) + 8);                                 // 0x001acf1c: lw $v0, 8($a0)
    a2 = *(int32_t*)((a0) + 0xc);                               // 0x001acf20: lw $a2, 0xc($a0)
    at = 0x2a << 16;                                            // 0x001acf24: lui $at, 0x2a
    v1 = g_002a5224;  // Global at 0x002a5224                   // 0x001acf28: lw $v1, 0x5224($at)
    s1 = a1 + v1;                                               // 0x001acf2c: addu $s1, $a1, $v1
    a1 = a0 + v0;                                               // 0x001acf30: addu $a1, $a0, $v0
    func_00107ab8();  // 107ab8                                // 0x001acf34: jal 0x107ab8
    at = 0x2a << 16;                                            // 0x001acf3c: lui $at, 0x2a
    v0 = 0x2a << 16;                                            // 0x001acf40: lui $v0, 0x2a
    v1 = g_002a5210;  // Global at 0x002a5210                   // 0x001acf44: lw $v1, 0x5210($at)
    v0 = v0 + 0x5214;                                           // 0x001acf48: addiu $v0, $v0, 0x5214
    v1 = v1 << 2;                                               // 0x001acf4c: sll $v1, $v1, 2
    at = 0x2a << 16;                                            // 0x001acf50: lui $at, 0x2a
    v0 = v0 + v1;                                               // 0x001acf54: addu $v0, $v0, $v1
    g_002a5214 = s1;  // Global at 0x002a5214                   // 0x001acf58: sw $s1, 0($v0)
    a0 = g_002a5230;  // Global at 0x002a5230                   // 0x001acf5c: lw $a0, 0x5230($at)
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x001acf60: lw $v0, 0x10($s0)
    a2 = *(int32_t*)((s0) + 0x14);                              // 0x001acf64: lw $a2, 0x14($s0)
    at = 0x2a << 16;                                            // 0x001acf68: lui $at, 0x2a
    v1 = g_002a5228;  // Global at 0x002a5228                   // 0x001acf6c: lw $v1, 0x5228($at)
    a1 = s0 + v0;                                               // 0x001acf70: addu $a1, $s0, $v0
    func_00107ab8();  // 107ab8                                // 0x001acf74: jal 0x107ab8
    a0 = a0 + v1;                                               // 0x001acf78: addu $a0, $a0, $v1
    at = 0x2a << 16;                                            // 0x001acf7c: lui $at, 0x2a
    a0 = *(int32_t*)((s0) + 0xc);                               // 0x001acf80: lw $a0, 0xc($s0)
    a2 = g_002a5224;  // Global at 0x002a5224                   // 0x001acf84: lw $a2, 0x5224($at)
    at = 0x2a << 16;                                            // 0x001acf88: lui $at, 0x2a
    a0 = a2 + a0;                                               // 0x001acf8c: addu $a0, $a2, $a0
    a1 = g_002a5228;  // Global at 0x002a5228                   // 0x001acf90: lw $a1, 0x5228($at)
    at = 0x2a << 16;                                            // 0x001acf94: lui $at, 0x2a
    v1 = g_002a5210;  // Global at 0x002a5210                   // 0x001acf98: lw $v1, 0x5210($at)
    at = 0x2a << 16;                                            // 0x001acf9c: lui $at, 0x2a
    v1 = v1 + 1;                                                // 0x001acfa0: addiu $v1, $v1, 1
    g_002a5224 = a0;  // Global at 0x002a5224                   // 0x001acfa4: sw $a0, 0x5224($at)
    a0 = *(int32_t*)((s0) + 0x14);                              // 0x001acfa8: lw $a0, 0x14($s0)
    at = 0x2a << 16;                                            // 0x001acfac: lui $at, 0x2a
    g_002a5210 = v1;  // Global at 0x002a5210                   // 0x001acfb0: sw $v1, 0x5210($at)
    a0 = a1 + a0;                                               // 0x001acfb4: addu $a0, $a1, $a0
    at = 0x2a << 16;                                            // 0x001acfb8: lui $at, 0x2a
    g_002a5228 = a0;  // Global at 0x002a5228                   // 0x001acfbc: sw $a0, 0x5228($at)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001acfc4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001acfc8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001acfcc: jr $ra
    sp = sp + 0x30;                                             // 0x001acfd0: addiu $sp, $sp, 0x30
}