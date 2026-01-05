void func_001c6a10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c6a10: addiu $sp, $sp, -0x20
    at = 0x31 << 16;                                            // 0x001c6a14: lui $at, 0x31
    v0 = g_00313890;  // Global at 0x00313890                   // 0x001c6a20: lw $v0, 0x3890($at)
    if (v0 == 0) goto label_0x1c6a3c;                           // 0x001c6a24: beqz $v0, 0x1c6a3c
    at = 0x31 << 16;                                            // 0x001c6a2c: lui $at, 0x31
    v0 = g_00313898;  // Global at 0x00313898                   // 0x001c6a30: lw $v0, 0x3898($at)
    if (v0 != 0) goto label_0x1c6a6c;                           // 0x001c6a34: bnez $v0, 0x1c6a6c
    /* nop */                                                   // 0x001c6a38: nop 
label_0x1c6a3c:
    v0 = 0x33 << 16;                                            // 0x001c6a3c: lui $v0, 0x33
    v1 = 0x34 << 16;                                            // 0x001c6a40: lui $v1, 0x34
    v0 = v0 + 0x1c80;                                           // 0x001c6a44: addiu $v0, $v0, 0x1c80
    at = 0x31 << 16;                                            // 0x001c6a48: lui $at, 0x31
    g_00313890 = v0;  // Global at 0x00313890                   // 0x001c6a4c: sw $v0, 0x3890($at)
    v1 = v1 + -0x6380;                                          // 0x001c6a50: addiu $v1, $v1, -0x6380
    at = 0x31 << 16;                                            // 0x001c6a54: lui $at, 0x31
    v0 = 0x34 << 16;                                            // 0x001c6a58: lui $v0, 0x34
    g_00313894 = v1;  // Global at 0x00313894                   // 0x001c6a5c: sw $v1, 0x3894($at)
    v0 = v0 + 0x1c80;                                           // 0x001c6a60: addiu $v0, $v0, 0x1c80
    at = 0x31 << 16;                                            // 0x001c6a64: lui $at, 0x31
    g_00313898 = v0;  // Global at 0x00313898                   // 0x001c6a68: sw $v0, 0x3898($at)
label_0x1c6a6c:
    at = 0x31 << 16;                                            // 0x001c6a6c: lui $at, 0x31
    a0 = s0 + 0x10;                                             // 0x001c6a70: addiu $a0, $s0, 0x10
    a1 = g_00313890;  // Global at 0x00313890                   // 0x001c6a74: lw $a1, 0x3890($at)
    func_00107ab8();  // 107ab8                                // 0x001c6a78: jal 0x107ab8
    a2 = 0 | 0x8000;                                            // 0x001c6a7c: ori $a2, $zero, 0x8000
    at = 1 << 16;                                               // 0x001c6a80: lui $at, 1
    at = at | 0x10;                                             // 0x001c6a84: ori $at, $at, 0x10
    a0 = s0 + at;                                               // 0x001c6a88: addu $a0, $s0, $at
    at = 0x31 << 16;                                            // 0x001c6a8c: lui $at, 0x31
    a1 = g_00313898;  // Global at 0x00313898                   // 0x001c6a90: lw $a1, 0x3898($at)
    func_00107ab8();  // 107ab8                                // 0x001c6a94: jal 0x107ab8
    a2 = 0x40;                                                  // 0x001c6a98: addiu $a2, $zero, 0x40
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c6aa0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c6aa4: jr $ra
    sp = sp + 0x20;                                             // 0x001c6aa8: addiu $sp, $sp, 0x20
}