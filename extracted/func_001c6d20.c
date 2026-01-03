void func_001c6d20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001c6d20: addiu $sp, $sp, -0x30
    v0 = 1 << 16;                                               // 0x001c6d24: lui $v0, 1
    at = 0x31 << 16;                                            // 0x001c6d2c: lui $at, 0x31
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c6d30: addu.qb $zero, $sp, $s1
    s0 = g_0031383c;  // Global at 0x0031383c                   // 0x001c6d40: lw $s0, 0x383c($at)
    a2 = v0 | 0x40;                                             // 0x001c6d44: ori $a2, $v0, 0x40
    func_00107c70();  // 107c70                                // 0x001c6d48: jal 0x107c70
    at = 0x31 << 16;                                            // 0x001c6d50: lui $at, 0x31
    a1 = s1 + 0x10;                                             // 0x001c6d54: addiu $a1, $s1, 0x10
    g_00313890 = s0;  // Global at 0x00313890                   // 0x001c6d58: sw $s0, 0x3890($at)
    a2 = 0 | 0x8000;                                            // 0x001c6d5c: ori $a2, $zero, 0x8000
    at = 0x31 << 16;                                            // 0x001c6d60: lui $at, 0x31
    a0 = g_00313890;  // Global at 0x00313890                   // 0x001c6d64: lw $a0, 0x3890($at)
    v0 = a0 + 0x7fff;                                           // 0x001c6d68: addiu $v0, $a0, 0x7fff
    at = 0x31 << 16;                                            // 0x001c6d6c: lui $at, 0x31
    v0 = v0 + 1;                                                // 0x001c6d70: addiu $v0, $v0, 1
    g_00313898 = v0;  // Global at 0x00313898                   // 0x001c6d74: sw $v0, 0x3898($at)
    at = 0x31 << 16;                                            // 0x001c6d78: lui $at, 0x31
    v0 = g_00313898;  // Global at 0x00313898                   // 0x001c6d7c: lw $v0, 0x3898($at)
    v0 = v0 + 0x100;                                            // 0x001c6d80: addiu $v0, $v0, 0x100
    at = 0x31 << 16;                                            // 0x001c6d84: lui $at, 0x31
    func_00107ab8();  // 107ab8                                // 0x001c6d88: jal 0x107ab8
    g_00313894 = v0;  // Global at 0x00313894                   // 0x001c6d8c: sw $v0, 0x3894($at)
    at = 1 << 16;                                               // 0x001c6d90: lui $at, 1
    at = at | 0x10;                                             // 0x001c6d94: ori $at, $at, 0x10
    a1 = s1 + at;                                               // 0x001c6d98: addu $a1, $s1, $at
    at = 0x31 << 16;                                            // 0x001c6d9c: lui $at, 0x31
    a0 = g_00313898;  // Global at 0x00313898                   // 0x001c6da0: lw $a0, 0x3898($at)
    func_00107ab8();  // 107ab8                                // 0x001c6da4: jal 0x107ab8
    a2 = 0x40;                                                  // 0x001c6da8: addiu $a2, $zero, 0x40
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c6db0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c6db4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c6db8: jr $ra
    sp = sp + 0x30;                                             // 0x001c6dbc: addiu $sp, $sp, 0x30
}