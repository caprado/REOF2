void func_00127d68() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00127d68: addiu $sp, $sp, -0x10
    v0 = 0x1f << 16;                                            // 0x00127d6c: lui $v0, 0x1f
    v1 = 0x1f << 16;                                            // 0x00127d74: lui $v1, 0x1f
    g_001f2db0 = a0;  // Global at 0x001f2db0                   // 0x00127d78: sw $a0, 0x2db0($v0)
    g_001f2db4 = a1;  // Global at 0x001f2db4                   // 0x00127d80: sw $a1, 0x2db4($v1)
    return func_00141a70();  // Tail call                       // 0x00127d84: j 0x141a70
    sp = sp + 0x10;                                             // 0x00127d88: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00127d8c: nop 
    sp = sp + -0x10;                                            // 0x00127d90: addiu $sp, $sp, -0x10
    v0 = 0x1f << 16;                                            // 0x00127d94: lui $v0, 0x1f
    s0 = v0 + 0x2db8;                                           // 0x00127d9c: addiu $s0, $v0, 0x2db8
    func_0010b460();  // 0x10b2a0                                // 0x00127dac: jal 0x10b2a0
    a2 = 0xff;                                                  // 0x00127db0: addiu $a2, $zero, 0xff
    v1 = 0x1f << 16;                                            // 0x00127db4: lui $v1, 0x1f
    v1 = g_001f2db0;  // Global at 0x001f2db0                   // 0x00127db8: lw $v1, 0x2db0($v1)
    if (v1 == 0) goto label_0x127dd0;                           // 0x00127dbc: beqz $v1, 0x127dd0
    v0 = 0x1f << 16;                                            // 0x00127dc4: lui $v0, 0x1f
    /* call function at address in v1 */                        // 0x00127dc8: jalr $v1
    a0 = g_001f2db4;  // Global at 0x001f2db4                   // 0x00127dcc: lw $a0, 0x2db4($v0)
label_0x127dd0:
    return func_00141568();  // Tail call                        // 0x00127ddc: j 0x1414c0
    sp = sp + 0x10;                                             // 0x00127de0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00127de4: nop 
    sp = sp + -0x20;                                            // 0x00127de8: addiu $sp, $sp, -0x20
    v0 = 0x1f << 16;                                            // 0x00127dec: lui $v0, 0x1f
    s1 = v0 + 0x2db8;                                           // 0x00127df4: addiu $s1, $v0, 0x2db8
    a2 = 0xff;                                                  // 0x00127e00: addiu $a2, $zero, 0xff
    func_0010b460();  // 0x10b2a0                                // 0x00127e0c: jal 0x10b2a0
    func_0010b0e8();  // 0x10af38                                // 0x00127e1c: jal 0x10af38
    a2 = 0xff;                                                  // 0x00127e20: addiu $a2, $zero, 0xff
    v1 = 0x1f << 16;                                            // 0x00127e24: lui $v1, 0x1f
    v1 = g_001f2db0;  // Global at 0x001f2db0                   // 0x00127e28: lw $v1, 0x2db0($v1)
    if (v1 == 0) goto label_0x127e40;                           // 0x00127e2c: beqz $v1, 0x127e40
    v0 = 0x1f << 16;                                            // 0x00127e34: lui $v0, 0x1f
    /* call function at address in v1 */                        // 0x00127e38: jalr $v1
    a0 = g_001f2db4;  // Global at 0x001f2db4                   // 0x00127e3c: lw $a0, 0x2db4($v0)
label_0x127e40:
    return func_00141568();  // Tail call                        // 0x00127e50: j 0x1414c0
    sp = sp + 0x20;                                             // 0x00127e54: addiu $sp, $sp, 0x20
    v0 = 0xa;                                                   // 0x00127e58: addiu $v0, $zero, 0xa
    sp = sp + -0x20;                                            // 0x00127e5c: addiu $sp, $sp, -0x20
    /* divide: a0 / v0 -> hi:lo */                              // 0x00127e60: div $zero, $a0, $v0
    v1 = 0xa;                                                   // 0x00127e68: addiu $v1, $zero, 0xa
    /* beqzl $v0, 0x127e8c */                                   // 0x00127e84: beqzl $v0, 0x127e8c
    /* break (trap) */                                          // 0x00127e88: break 0, 7
    /* mflo $t0 */                                              // 0x00127e8c
    /* mfhi $a3 */                                              // 0x00127e90
    g_001f2db8 = a3;  // Global at 0x001f2db8                   // 0x00127e98: sb $a3, 0($s0)
    /* bnezl $a0, 0x127eb0 */                                   // 0x00127e9c: bnezl $a0, 0x127eb0
    a1 = a1 + 1;                                                // 0x00127ea0: addiu $a1, $a1, 1
    goto label_0x127eec;                                        // 0x00127ea4: b 0x127eec
    g_001f2db8 = 0;  // Global at 0x001f2db8                    // 0x00127ea8: sb $zero, 0($s0)
    /* nop */                                                   // 0x00127eac: nop 
    v0 = (a1 < 0x20) ? 1 : 0;                                   // 0x00127eb0: slti $v0, $a1, 0x20
    if (v0 == 0) goto label_0x127eec;                           // 0x00127eb4: beqz $v0, 0x127eec
    a2 = s0 + a1;                                               // 0x00127eb8: addu $a2, $s0, $a1
    v0 = 0xa;                                                   // 0x00127ebc: addiu $v0, $zero, 0xa
    v1 = 0xa;                                                   // 0x00127ec0: addiu $v1, $zero, 0xa
    /* divide: a0 / v0 -> hi:lo */                              // 0x00127ec4: div $zero, $a0, $v0
    /* beqzl $v0, 0x127ed0 */                                   // 0x00127ec8: beqzl $v0, 0x127ed0
    /* break (trap) */                                          // 0x00127ecc: break 0, 7
    /* mflo $t0 */                                              // 0x00127ed0
    /* mfhi $a3 */                                              // 0x00127ed4
    g_0024fffe = a3;  // Global at 0x0024fffe                   // 0x00127edc: sb $a3, 0($a2)
    /* bnezl $a0, 0x127eb0 */                                   // 0x00127ee0: bnezl $a0, 0x127eb0
    a1 = a1 + 1;                                                // 0x00127ee4: addiu $a1, $a1, 1
    g_0024fffe = 0;  // Global at 0x0024fffe                    // 0x00127ee8: sb $zero, 0($a2)
label_0x127eec:
    v0 = 0x25 << 16;                                            // 0x00127eec: lui $v0, 0x25
    s1 = v0 + 0x3688;                                           // 0x00127ef0: addiu $s1, $v0, 0x3688
    func_0010af38();  // 0x10ae00                                // 0x00127ef4: jal 0x10ae00
    v0 = s2 + -1;                                               // 0x00127f00: addiu $v0, $s2, -1
    v1 = (a3 < v0) ? 1 : 0;                                     // 0x00127f04: slt $v1, $a3, $v0
    if (v1 == 0) a3 = v0;                                       // 0x00127f08: movz $a3, $v0, $v1
    if (a3 <= 0) goto label_0x127f3c;                           // 0x00127f0c: blez $a3, 0x127f3c
    v0 = a3 + s1;                                               // 0x00127f14: addu $v0, $a3, $s1
    a2 = v0 + -1;                                               // 0x00127f18: addiu $a2, $v0, -1
    /* nop */                                                   // 0x00127f1c: nop 
label_0x127f20:
    a0 = s0 + a1;                                               // 0x00127f20: addu $a0, $s0, $a1
    a1 = a1 + 1;                                                // 0x00127f24: addiu $a1, $a1, 1
    v1 = g_0024ffff;  // Global at 0x0024ffff                   // 0x00127f28: lbu $v1, 0($a2)
    a2 = a2 + -1;                                               // 0x00127f2c: addiu $a2, $a2, -1
    v0 = (a1 < a3) ? 1 : 0;                                     // 0x00127f30: slt $v0, $a1, $a3
    if (v0 != 0) goto label_0x127f20;                           // 0x00127f34: bnez $v0, 0x127f20
    *(uint8_t*)(a0) = v1;                                       // 0x00127f38: sb $v1, 0($a0)
label_0x127f3c:
    v0 = s0 + a1;                                               // 0x00127f3c: addu $v0, $s0, $a1
    g_00250000 = 0;  // Global at 0x00250000                    // 0x00127f50: sb $zero, 0($v0)
    return;                                                     // 0x00127f54: jr $ra
    sp = sp + 0x20;                                             // 0x00127f58: addiu $sp, $sp, 0x20
}