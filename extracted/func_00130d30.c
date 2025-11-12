void func_00130d30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00130d30: addiu $sp, $sp, -0x10
    return func_00127de8();  // Tail call                        // 0x00130d40: j 0x127d90
    sp = sp + 0x10;                                             // 0x00130d44: addiu $sp, $sp, 0x10
    v0 = 0x20 << 16;                                            // 0x00130d48: lui $v0, 0x20
    sp = sp + -0x20;                                            // 0x00130d4c: addiu $sp, $sp, -0x20
    v0 = &str_00201d20;  // "MARK:lsc_obj"                      // 0x00130d50: addiu $v0, $v0, 0x1d20
    func_00107ab8();  // 0x107a20                                // 0x00130d6c: jal 0x107a20
    a2 = 0x60;                                                  // 0x00130d70: addiu $a2, $zero, 0x60
    t0 = 0x20 << 16;                                            // 0x00130d74: lui $t0, 0x20
    a0 = 0x20 << 16;                                            // 0x00130d78: lui $a0, 0x20
    a3 = 0x20 << 16;                                            // 0x00130d7c: lui $a3, 0x20
    a0 = a0 + 0x1d30;                                           // 0x00130d80: addiu $a0, $a0, 0x1d30
    v1 = 0x20 << 16;                                            // 0x00130d84: lui $v1, 0x20
    v0 = 0x20 << 16;                                            // 0x00130d88: lui $v0, 0x20
    v1 = v1 + 0x1d2e;                                           // 0x00130d8c: addiu $v1, $v1, 0x1d2e
    a2 = 0xe8;                                                  // 0x00130d94: addiu $a2, $zero, 0xe8
    t0 = t0 + 0x1d2c;                                           // 0x00130d98: addiu $t0, $t0, 0x1d2c
    a3 = a3 + 0x1d2d;                                           // 0x00130d9c: addiu $a3, $a3, 0x1d2d
    v0 = v0 + 0x1d2f;                                           // 0x00130da0: addiu $v0, $v0, 0x1d2f
    t1 = g_00201d2c;  // Global at 0x00201d2c                   // 0x00130da4: lbu $t1, 0($t0)
    t2 = g_00201d2d;  // Global at 0x00201d2d                   // 0x00130da8: lbu $t2, 0($a3)
    s0 = 0x22 << 16;                                            // 0x00130dac: lui $s0, 0x22
    t0 = g_00201d2e;  // Global at 0x00201d2e                   // 0x00130db0: lbu $t0, 0($v1)
    s0 = s0 + 0x36c0;                                           // 0x00130db4: addiu $s0, $s0, 0x36c0
    func_00107ab8();  // 0x107a20                                // 0x00130db8: jal 0x107a20
    a3 = g_00201d2f;  // Global at 0x00201d2f                   // 0x00130dbc: lbu $a3, 0($v0)
    a0 = 0x13 << 16;                                            // 0x00130dc0: lui $a0, 0x13
    func_00136768();  // 0x136740                                // 0x00130dc8: jal 0x136740
    a0 = a0 + 0xd30;                                            // 0x00130dcc: addiu $a0, $a0, 0xd30
    a1 = 0x14 << 16;                                            // 0x00130dd0: lui $a1, 0x14
    a1 = a1 + -0x6d78;                                          // 0x00130dd4: addiu $a1, $a1, -0x6d78
    func_00135148();  // 0x1350b8                                // 0x00130ddc: jal 0x1350b8
    func_001354b8();  // 0x1353f0                                // 0x00130de4: jal 0x1353f0
    if (s1 == 0) goto label_0x130e30;                           // 0x00130df8: beqz $s1, 0x130e30
    a0 = *(int32_t*)((s1) + 8);                                 // 0x00130e00: lw $a0, 8($s1)
    a1 = *(int32_t*)((s1) + 0xc);                               // 0x00130e04: lw $a1, 0xc($s1)
    a2 = *(int32_t*)((s1) + 0x10);                              // 0x00130e08: lw $a2, 0x10($s1)
    func_0013aad0();  // 0x13aab0                                // 0x00130e0c: jal 0x13aab0
    a3 = *(int32_t*)((s1) + 4);                                 // 0x00130e10: lw $a3, 4($s1)
    a0 = *(int32_t*)(s1);                                       // 0x00130e14: lw $a0, 0($s1)
    return func_0013aba8();  // Tail call                        // 0x00130e24: j 0x13aad0
    sp = sp + 0x20;                                             // 0x00130e28: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00130e2c: nop 
label_0x130e30:
    func_0013aad0();  // 0x13aab0                                // 0x00130e30: jal 0x13aab0
    /* nop */                                                   // 0x00130e34: nop 
    return func_0013aba8();  // Tail call                        // 0x00130e48: j 0x13aad0
    sp = sp + 0x20;                                             // 0x00130e4c: addiu $sp, $sp, 0x20
    sp = sp + -0x10;                                            // 0x00130e50: addiu $sp, $sp, -0x10
    if (v0 == 0) goto label_0x130e88;                           // 0x00130e60: beqz $v0, 0x130e88
    a3 = g_00201d33;  // Global at 0x00201d33                   // 0x00130e68: lw $a3, 4($v0)
    a0 = g_00201d2f;  // Global at 0x00201d2f                   // 0x00130e6c: lw $a0, 0($v0)
    a1 = g_00201d37;  // Global at 0x00201d37                   // 0x00130e70: lw $a1, 8($v0)
    func_0013a920();  // 0x13a770                                // 0x00130e74: jal 0x13a770
    a2 = g_00201d3b;  // Global at 0x00201d3b                   // 0x00130e78: lw $a2, 0xc($v0)
    goto label_0x130e98;                                        // 0x00130e7c: b 0x130e98
    /* nop */                                                   // 0x00130e84: nop 
label_0x130e88:
    func_0013a920();  // 0x13a770                                // 0x00130e90: jal 0x13a770
label_0x130e98:
    return;                                                     // 0x00130ea4: jr $ra
    sp = sp + 0x10;                                             // 0x00130ea8: addiu $sp, $sp, 0x10
}