void func_00186ca8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00186ca8: addiu $sp, $sp, -0x40
    a1 = 0xff;                                                  // 0x00186cac: addiu $a1, $zero, 0xff
    a2 = 0x800;                                                 // 0x00186cb4: addiu $a2, $zero, 0x800
    s2 = 0x28 << 16;                                            // 0x00186cbc: lui $s2, 0x28
    s0 = s2 + -0x37c0;                                          // 0x00186cc8: addiu $s0, $s2, -0x37c0
    func_00107c70();  // 107c70                                // 0x00186cd0: jal 0x107c70
    a0 = 0x184;                                                 // 0x00186cd8: addiu $a0, $zero, 0x184
    v1 = 0x21 << 16;                                            // 0x00186cdc: lui $v1, 0x21
    v1 = v1 + 0x6018;                                           // 0x00186ce4: addiu $v1, $v1, 0x6018
    v1 = a0 + v1;                                               // 0x00186ce8: addu $v1, $a0, $v1
    v0 = v1 | s0;                                               // 0x00186cec: or $v0, $v1, $s0
    v0 = v0 & 7;                                                // 0x00186cf0: andi $v0, $v0, 7
    if (v0 == 0) goto label_0x186d58;                           // 0x00186cf4: beqz $v0, 0x186d58
    v0 = v1 + 0x180;                                            // 0x00186cf8: addiu $v0, $v1, 0x180
label_0x186cfc:
    v1 = v1 + 0x20;                                             // 0x00186d3c: addiu $v1, $v1, 0x20
    s0 = s0 + 0x20;                                             // 0x00186d40: addiu $s0, $s0, 0x20
    /* nop */                                                   // 0x00186d44: nop 
    if (v1 != v0) goto label_0x186cfc;                          // 0x00186d48: bne $v1, $v0, 0x186cfc
    /* nop */                                                   // 0x00186d4c: nop 
    goto label_0x186d8c;                                        // 0x00186d50: b 0x186d8c
    /* nop */                                                   // 0x00186d54: nop 
label_0x186d58:
    v1 = v1 + 0x20;                                             // 0x00186d78: addiu $v1, $v1, 0x20
    s0 = s0 + 0x20;                                             // 0x00186d7c: addiu $s0, $s0, 0x20
    /* nop */                                                   // 0x00186d80: nop 
    if (v1 != v0) goto label_0x186d58;                          // 0x00186d84: bne $v1, $v0, 0x186d58
    /* nop */                                                   // 0x00186d88: nop 
label_0x186d8c:
    t0 = g_00216058;  // Global at 0x00216058                   // 0x00186d8c: lw $t0, 0($v1)
    a1 = s2 + -0x37c0;                                          // 0x00186d94: addiu $a1, $s2, -0x37c0
    g_0027c880 = t0;  // Global at 0x0027c880                   // 0x00186d98: sw $t0, 0($s0)
    func_00188138();  // 188138                                // 0x00186da0: jal 0x188138
    a3 = 1;                                                     // 0x00186da4: addiu $a3, $zero, 1
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x00186dac: sltu $v0, $zero, $v0
    return;                                                     // 0x00186dbc: jr $ra
    sp = sp + 0x40;                                             // 0x00186dc0: addiu $sp, $sp, 0x40
}