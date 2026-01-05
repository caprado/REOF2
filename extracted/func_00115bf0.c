void func_00115bf0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00115bf0: addiu $sp, $sp, -0x40
    s1 = 0x1f << 16;                                            // 0x00115bf8: lui $s1, 0x1f
    a1 = g_001f0340;  // Global at 0x001f0340                   // 0x00115c00: lw $a1, 0x340($s1)
    v0 = (a1 < 0x7e) ? 1 : 0;                                   // 0x00115c0c: slti $v0, $a1, 0x7e
    if (v0 != 0) goto label_0x115c38;                           // 0x00115c10: bnez $v0, 0x115c38
    s2 = 0x25 << 16;                                            // 0x00115c18: lui $s2, 0x25
    g_001f0340 = 0;  // Global at 0x001f0340                    // 0x00115c1c: sw $zero, 0x340($s1)
    v0 = s2 + -0x3a40;                                          // 0x00115c20: addiu $v0, $s2, -0x3a40
    func_00115640();  // 115640                                // 0x00115c28: jal 0x115640
    g_0024c63f = 0;  // Global at 0x0024c63f                    // 0x00115c2c: sb $zero, 0x7f($v0)
    goto label_0x115c3c;                                        // 0x00115c30: b 0x115c3c
    a1 = g_001f0340;  // Global at 0x001f0340                   // 0x00115c34: lw $a1, 0x340($s1)
label_0x115c38:
    s2 = 0x25 << 16;                                            // 0x00115c38: lui $s2, 0x25
label_0x115c3c:
    v0 = 0xa;                                                   // 0x00115c3c: addiu $v0, $zero, 0xa
    if (s0 != v0) goto label_0x115c78;                          // 0x00115c40: bne $s0, $v0, 0x115c78
    v0 = s2 + -0x3a40;                                          // 0x00115c44: addiu $v0, $s2, -0x3a40
    a0 = s2 + -0x3a40;                                          // 0x00115c48: addiu $a0, $s2, -0x3a40
    g_001f0340 = 0;  // Global at 0x001f0340                    // 0x00115c4c: sw $zero, 0x340($s1)
    v0 = a1 + a0;                                               // 0x00115c50: addu $v0, $a1, $a0
    g_0024c5c0 = s0;  // Global at 0x0024c5c0                   // 0x00115c58: sb $s0, 0($v0)
    *(uint8_t*)((v1) + 1) = 0;                                  // 0x00115c6c: sb $zero, 1($v1)
    return func_00115668();  // Tail call                        // 0x00115c70: j 0x115640
    sp = sp + 0x40;                                             // 0x00115c74: addiu $sp, $sp, 0x40
label_0x115c78:
    v1 = a1 + 1;                                                // 0x00115c78: addiu $v1, $a1, 1
    g_001f0340 = v1;  // Global at 0x001f0340                   // 0x00115c7c: sw $v1, 0x340($s1)
    v0 = a1 + v0;                                               // 0x00115c80: addu $v0, $a1, $v0
    g_0024c5c0 = s0;  // Global at 0x0024c5c0                   // 0x00115c84: sb $s0, 0($v0)
    return;                                                     // 0x00115c98: jr $ra
    sp = sp + 0x40;                                             // 0x00115c9c: addiu $sp, $sp, 0x40
}