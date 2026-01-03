void func_00145c10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00145c10: addiu $sp, $sp, -0x20
    a1 = 4;                                                     // 0x00145c14: addiu $a1, $zero, 4
    func_001456a8();  // 1456a8                                // 0x00145c20: jal 0x1456a8
    *(uint32_t*)((s0) + 0x17c) = v0;                            // 0x00145c28: sw $v0, 0x17c($s0)
    func_001456a8();  // 1456a8                                // 0x00145c30: jal 0x1456a8
    a1 = 4;                                                     // 0x00145c34: addiu $a1, $zero, 4
    *(uint32_t*)((s0) + 0x180) = v0;                            // 0x00145c38: sw $v0, 0x180($s0)
    func_001456a8();  // 1456a8                                // 0x00145c40: jal 0x1456a8
    a1 = 4;                                                     // 0x00145c44: addiu $a1, $zero, 4
    *(uint32_t*)((s0) + 0x184) = v0;                            // 0x00145c48: sw $v0, 0x184($s0)
    func_001456a8();  // 1456a8                                // 0x00145c50: jal 0x1456a8
    a1 = 4;                                                     // 0x00145c54: addiu $a1, $zero, 4
    *(uint32_t*)((s0) + 0x188) = v0;                            // 0x00145c58: sw $v0, 0x188($s0)
    func_001456a8();  // 1456a8                                // 0x00145c60: jal 0x1456a8
    a1 = 2;                                                     // 0x00145c64: addiu $a1, $zero, 2
    a3 = 0x1000 << 16;                                          // 0x00145c68: lui $a3, 0x1000
    a2 = 0xfffc << 16;                                          // 0x00145c6c: lui $a2, 0xfffc
    a3 = a3 | 0x2010;                                           // 0x00145c70: ori $a3, $a3, 0x2010
    a2 = a2 | 0xffff;                                           // 0x00145c74: ori $a2, $a2, 0xffff
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00145c78: lw $v1, 0($a3)
    v0 = v0 << 0x10;                                            // 0x00145c7c: sll $v0, $v0, 0x10
    a1 = 2;                                                     // 0x00145c84: addiu $a1, $zero, 2
    v1 = v1 & a2;                                               // 0x00145c88: and $v1, $v1, $a2
    v1 = v1 | v0;                                               // 0x00145c8c: or $v1, $v1, $v0
    func_001456a8();  // 1456a8                                // 0x00145c90: jal 0x1456a8
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00145c94: sw $v1, 0($a3)
    v0 = *(int32_t*)((s0) + 0xec);                              // 0x00145c9c: lw $v0, 0xec($s0)
    if (v0 != 0) goto label_0x145cac;                           // 0x00145ca0: bnez $v0, 0x145cac
    *(uint32_t*)((s0) + 0x18c) = v1;                            // 0x00145ca4: sw $v1, 0x18c($s0)
    *(uint32_t*)((s0) + 0xec) = v1;                             // 0x00145ca8: sw $v1, 0xec($s0)
label_0x145cac:
    func_001456a8();  // 1456a8                                // 0x00145cb0: jal 0x1456a8
    a1 = 1;                                                     // 0x00145cb4: addiu $a1, $zero, 1
    *(uint32_t*)((s0) + 0x190) = v0;                            // 0x00145cb8: sw $v0, 0x190($s0)
    func_001456a8();  // 1456a8                                // 0x00145cc0: jal 0x1456a8
    a1 = 1;                                                     // 0x00145cc4: addiu $a1, $zero, 1
    *(uint32_t*)((s0) + 0x194) = v0;                            // 0x00145cc8: sw $v0, 0x194($s0)
    func_001456a8();  // 1456a8                                // 0x00145cd0: jal 0x1456a8
    a1 = 1;                                                     // 0x00145cd4: addiu $a1, $zero, 1
    *(uint32_t*)((s0) + 0x198) = v0;                            // 0x00145cd8: sw $v0, 0x198($s0)
    func_001456a8();  // 1456a8                                // 0x00145ce0: jal 0x1456a8
    a1 = 1;                                                     // 0x00145ce4: addiu $a1, $zero, 1
    a2 = 0x1000 << 16;                                          // 0x00145ce8: lui $a2, 0x1000
    a2 = g_10002010;  // Global at 0x10002010                   // 0x00145cec: lw $a2, 0x2010($a2)
    v1 = 0xffbf << 16;                                          // 0x00145cf0: lui $v1, 0xffbf
    v1 = v1 | 0xffff;                                           // 0x00145cf4: ori $v1, $v1, 0xffff
    v0 = v0 << 0x16;                                            // 0x00145cf8: sll $v0, $v0, 0x16
    a2 = a2 & v1;                                               // 0x00145cfc: and $a2, $a2, $v1
    a2 = a2 | v0;                                               // 0x00145d04: or $a2, $a2, $v0
    a1 = 1;                                                     // 0x00145d08: addiu $a1, $zero, 1
    at = 0x1000 << 16;                                          // 0x00145d0c: lui $at, 0x1000
    func_001456a8();  // 1456a8                                // 0x00145d10: jal 0x1456a8
    g_10002010 = a2;  // Global at 0x10002010                   // 0x00145d14: sw $a2, 0x2010($at)
    a2 = 0x1000 << 16;                                          // 0x00145d18: lui $a2, 0x1000
    a2 = g_10002010;  // Global at 0x10002010                   // 0x00145d1c: lw $a2, 0x2010($a2)
    v1 = 0xffdf << 16;                                          // 0x00145d20: lui $v1, 0xffdf
    v1 = v1 | 0xffff;                                           // 0x00145d24: ori $v1, $v1, 0xffff
    v0 = v0 << 0x15;                                            // 0x00145d28: sll $v0, $v0, 0x15
    a2 = a2 & v1;                                               // 0x00145d2c: and $a2, $a2, $v1
    a2 = a2 | v0;                                               // 0x00145d34: or $a2, $a2, $v0
    a1 = 1;                                                     // 0x00145d38: addiu $a1, $zero, 1
    at = 0x1000 << 16;                                          // 0x00145d3c: lui $at, 0x1000
    func_001456a8();  // 1456a8                                // 0x00145d40: jal 0x1456a8
    g_10002010 = a2;  // Global at 0x10002010                   // 0x00145d44: sw $a2, 0x2010($at)
    a2 = 0x1000 << 16;                                          // 0x00145d48: lui $a2, 0x1000
    a2 = g_10002010;  // Global at 0x10002010                   // 0x00145d4c: lw $a2, 0x2010($a2)
    v1 = 0xffef << 16;                                          // 0x00145d50: lui $v1, 0xffef
    v1 = v1 | 0xffff;                                           // 0x00145d54: ori $v1, $v1, 0xffff
    v0 = v0 << 0x14;                                            // 0x00145d58: sll $v0, $v0, 0x14
    a2 = a2 & v1;                                               // 0x00145d5c: and $a2, $a2, $v1
    a2 = a2 | v0;                                               // 0x00145d64: or $a2, $a2, $v0
    a1 = 1;                                                     // 0x00145d68: addiu $a1, $zero, 1
    at = 0x1000 << 16;                                          // 0x00145d6c: lui $at, 0x1000
    func_001456a8();  // 1456a8                                // 0x00145d70: jal 0x1456a8
    g_10002010 = a2;  // Global at 0x10002010                   // 0x00145d74: sw $a2, 0x2010($at)
    *(uint32_t*)((s0) + 0x19c) = v0;                            // 0x00145d78: sw $v0, 0x19c($s0)
    func_001456a8();  // 1456a8                                // 0x00145d80: jal 0x1456a8
    a1 = 1;                                                     // 0x00145d84: addiu $a1, $zero, 1
    func_001456a8();  // 1456a8                                // 0x00145d8c: jal 0x1456a8
    a1 = 1;                                                     // 0x00145d90: addiu $a1, $zero, 1
    *(uint32_t*)((s0) + 0x1a0) = v0;                            // 0x00145d94: sw $v0, 0x1a0($s0)
    func_001456a8();  // 1456a8                                // 0x00145d9c: jal 0x1456a8
    a1 = 1;                                                     // 0x00145da0: addiu $a1, $zero, 1
    if (v0 == 0) goto label_0x145df4;                           // 0x00145da4: beqz $v0, 0x145df4
    func_001456a8();  // 1456a8                                // 0x00145db0: jal 0x1456a8
    a1 = 1;                                                     // 0x00145db4: addiu $a1, $zero, 1
    func_001456a8();  // 1456a8                                // 0x00145dbc: jal 0x1456a8
    a1 = 3;                                                     // 0x00145dc0: addiu $a1, $zero, 3
    func_001456a8();  // 1456a8                                // 0x00145dc8: jal 0x1456a8
    a1 = 1;                                                     // 0x00145dcc: addiu $a1, $zero, 1
    func_001456a8();  // 1456a8                                // 0x00145dd4: jal 0x1456a8
    a1 = 7;                                                     // 0x00145dd8: addiu $a1, $zero, 7
    a1 = 8;                                                     // 0x00145de8: addiu $a1, $zero, 8
    return func_00145818();  // Tail call                        // 0x00145dec: j 0x1456a8
    sp = sp + 0x20;                                             // 0x00145df0: addiu $sp, $sp, 0x20
label_0x145df4:
    return;                                                     // 0x00145df8: jr $ra
    sp = sp + 0x20;                                             // 0x00145dfc: addiu $sp, $sp, 0x20
}