void func_00143c70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_20, local_40;
    
    sp = sp + -0xf0;                                            // 0x00143c70: addiu $sp, $sp, -0xf0
    v0 = 1;                                                     // 0x00143c74: addiu $v0, $zero, 1
    func_00145080();  // 0x144f18                                // 0x00143ca4: jal 0x144f18
    local_40 = v0;                                              // 0x00143ca8: sw $v0, 0x40($sp)
    v0 = 0x1000 << 16;                                          // 0x00143cac: lui $v0, 0x1000
    v0 = v0 | 0xb020;                                           // 0x00143cb0: ori $v0, $v0, 0xb020
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00143cb4: lw $v1, 0($v0)
    if (v1 == 0) goto label_0x143dc4;                           // 0x00143cb8: beqz $v1, 0x143dc4
    v0 = 0x1000 << 16;                                          // 0x00143cbc: lui $v0, 0x1000
    v0 = v0 | 0x2010;                                           // 0x00143cc0: ori $v0, $v0, 0x2010
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00143cc4: lw $v1, 0($v0)
    v1 = v1 & 0x4000;                                           // 0x00143cc8: andi $v1, $v1, 0x4000
    if (v1 != 0) goto label_0x143dc8;                           // 0x00143ccc: bnez $v1, 0x143dc8
    v0 = 0x1000 << 16;                                          // 0x00143cd0: lui $v0, 0x1000
    s7 = 0x1000 << 16;                                          // 0x00143cd4: lui $s7, 0x1000
    s0 = 0x1000 << 16;                                          // 0x00143cd8: lui $s0, 0x1000
    s3 = 0x1000 << 16;                                          // 0x00143cdc: lui $s3, 0x1000
    s2 = 0x1000 << 16;                                          // 0x00143ce0: lui $s2, 0x1000
    s4 = 0x1000 << 16;                                          // 0x00143ce4: lui $s4, 0x1000
    s5 = 0x1000 << 16;                                          // 0x00143ce8: lui $s5, 0x1000
    s6 = 0x1000 << 16;                                          // 0x00143cec: lui $s6, 0x1000
    fp = 0xfffe << 16;                                          // 0x00143cf0: lui $fp, 0xfffe
    s7 = s7 | 0xb420;                                           // 0x00143cf4: ori $s7, $s7, 0xb420
    s0 = s0 | 0xb400;                                           // 0x00143cf8: ori $s0, $s0, 0xb400
    s3 = s3 | 0xf590;                                           // 0x00143cfc: ori $s3, $s3, 0xf590
    s2 = s2 | 0xf520;                                           // 0x00143d00: ori $s2, $s2, 0xf520
    s4 = s4 | 0xb020;                                           // 0x00143d04: ori $s4, $s4, 0xb020
    s5 = s5 | 0x2010;                                           // 0x00143d08: ori $s5, $s5, 0x2010
    s6 = s6 | 0xb000;                                           // 0x00143d0c: ori $s6, $s6, 0xb000
    fp = fp | 0xffff;                                           // 0x00143d10: ori $fp, $fp, 0xffff
    /* nop */                                                   // 0x00143d14: nop 
label_0x143d18:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00143d18: lw $v0, 0($s7)
    /* bnezl $v0, 0x143d4c */                                   // 0x00143d1c: bnezl $v0, 0x143d4c
    v0 = *(int32_t*)((s1) + 0x10a0);                            // 0x00143d20: lw $v0, 0x10a0($s1)
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00143d24: lw $v0, 0($s0)
    v0 = v0 & 0x100;                                            // 0x00143d28: andi $v0, $v0, 0x100
    /* bnezl $v0, 0x143d4c */                                   // 0x00143d2c: bnezl $v0, 0x143d4c
    v0 = *(int32_t*)((s1) + 0x10a0);                            // 0x00143d30: lw $v0, 0x10a0($s1)
    a0 = *(int32_t*)((s1) + 0x870);                             // 0x00143d34: lw $a0, 0x870($s1)
    v1 = 1;                                                     // 0x00143d38: addiu $v1, $zero, 1
    func_00147ca0();  // 0x147c28                                // 0x00143d40: jal 0x147c28
    local_0 = v1;                                               // 0x00143d44: sw $v1, 0($sp)
    v0 = *(int32_t*)((s1) + 0x10a0);                            // 0x00143d48: lw $v0, 0x10a0($s1)
    if (v0 == 0) goto label_0x143da8;                           // 0x00143d4c: beqz $v0, 0x143da8
    /* nop */                                                   // 0x00143d50: nop 
    func_0011d378();  // 0x11d320                                // 0x00143d54: jal 0x11d320
    /* nop */                                                   // 0x00143d58: nop 
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00143d5c: lw $v1, 0($s2)
    a0 = 1 << 16;                                               // 0x00143d60: lui $a0, 1
    v1 = v1 | a0;                                               // 0x00143d64: or $v1, $v1, $a0
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00143d68: sw $v1, 0($s3)
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00143d6c: sw $zero, 0($s0)
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00143d70: sw $zero, 0($s6)
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00143d74: lw $v1, 0($s2)
    v1 = v1 & fp;                                               // 0x00143d78: and $v1, $v1, $fp
    if (v0 == 0) goto label_0x143d8c;                           // 0x00143d7c: beqz $v0, 0x143d8c
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00143d80: sw $v1, 0($s3)
    func_0011d390();  // 0x11d378                                // 0x00143d84: jal 0x11d378
    /* nop */                                                   // 0x00143d88: nop 
label_0x143d8c:
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00143d8c: sw $zero, 0($s4)
    v1 = 0x4000 << 16;                                          // 0x00143d90: lui $v1, 0x4000
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00143d94: sw $zero, 0($s7)
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00143d9c: sw $v1, 0($s5)
    goto label_0x143ed8;                                        // 0x00143da0: b 0x143ed8
label_0x143da8:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00143da8: lw $v0, 0($s4)
    if (v0 == 0) goto label_0x143dc8;                           // 0x00143dac: beqz $v0, 0x143dc8
    v0 = 0x1000 << 16;                                          // 0x00143db0: lui $v0, 0x1000
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00143db4: lw $v0, 0($s5)
    v0 = v0 & 0x4000;                                           // 0x00143db8: andi $v0, $v0, 0x4000
    if (v0 == 0) goto label_0x143d18;                           // 0x00143dbc: beqz $v0, 0x143d18
    /* nop */                                                   // 0x00143dc0: nop 
label_0x143dc4:
    v0 = 0x1000 << 16;                                          // 0x00143dc4: lui $v0, 0x1000
label_0x143dc8:
    a0 = 0x1000 << 16;                                          // 0x00143dc8: lui $a0, 0x1000
    v0 = v0 | 0x2020;                                           // 0x00143dd0: ori $v0, $v0, 0x2020
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00143dd4: lw $v0, 0($v0)
    if (a0 >= 0) goto label_0x143e04;                           // 0x00143de0: bgez $a0, 0x143e04
    *(uint32_t*)((s1) + 0x850) = v1;                            // 0x00143de4: sw $v1, 0x850($s1)
    v1 = v0 & 0x1f;                                             // 0x00143de8: andi $v1, $v0, 0x1f
    if (v1 == 0) goto label_0x143dfc;                           // 0x00143dec: beqz $v1, 0x143dfc
    v0 = 0x20;                                                  // 0x00143df0: addiu $v0, $zero, 0x20
    goto label_0x143e08;                                        // 0x00143df4: b 0x143e08
    v0 = v0 - v1;                                               // 0x00143df8: subu $v0, $v0, $v1
label_0x143dfc:
    goto label_0x143e08;                                        // 0x00143dfc: b 0x143e08
label_0x143e04:
    v0 = 0x20;                                                  // 0x00143e04: addiu $v0, $zero, 0x20
label_0x143e08:
    *(uint32_t*)((s1) + 0x854) = v0;                            // 0x00143e08: sw $v0, 0x854($s1)
    v0 = 0x1000 << 16;                                          // 0x00143e0c: lui $v0, 0x1000
    v0 = v0 | 0x2010;                                           // 0x00143e10: ori $v0, $v0, 0x2010
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00143e14: lw $v1, 0($v0)
    v1 = v1 & 0x4000;                                           // 0x00143e18: andi $v1, $v1, 0x4000
    if (v1 == 0) goto label_0x143ed0;                           // 0x00143e1c: beqz $v1, 0x143ed0
    a1 = 0x22 << 16;                                            // 0x00143e20: lui $a1, 0x22
    func_00148588();  // 0x148530                                // 0x00143e28: jal 0x148530
    a1 = &str_00226648;  // "Invalid macroblock_address_increment code(0x%08x)" // 0x00143e2c: addiu $a1, $a1, 0x6648
    s0 = sp + 0x20;                                             // 0x00143e30: addiu $s0, $sp, 0x20
    v0 = 2;                                                     // 0x00143e34: addiu $v0, $zero, 2
    a0 = *(int32_t*)((s1) + 0x870);                             // 0x00143e38: lw $a0, 0x870($s1)
    func_00147ca0();  // 0x147c28                                // 0x00143e40: jal 0x147c28
    local_20 = v0;                                              // 0x00143e44: sw $v0, 0x20($sp)
    v1 = 0x4000 << 16;                                          // 0x00143e48: lui $v1, 0x4000
    a0 = *(int32_t*)((s1) + 0x870);                             // 0x00143e4c: lw $a0, 0x870($s1)
    at = 0x1000 << 16;                                          // 0x00143e50: lui $at, 0x1000
    g_10002010 = v1;  // Global at 0x10002010                   // 0x00143e54: sw $v1, 0x2010($at)
    v0 = 3;                                                     // 0x00143e58: addiu $v0, $zero, 3
    local_20 = v0;                                              // 0x00143e5c: sw $v0, 0x20($sp)
    func_00147ca0();  // 0x147c28                                // 0x00143e60: jal 0x147c28
    func_0011d378();  // 0x11d320                                // 0x00143e68: jal 0x11d320
    /* nop */                                                   // 0x00143e6c: nop 
    a2 = 0x1000 << 16;                                          // 0x00143e70: lui $a2, 0x1000
    a3 = 0x1000 << 16;                                          // 0x00143e74: lui $a3, 0x1000
    a2 = a2 | 0xf520;                                           // 0x00143e78: ori $a2, $a2, 0xf520
    t0 = 1 << 16;                                               // 0x00143e7c: lui $t0, 1
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00143e80: lw $v1, 0($a2)
    a3 = a3 | 0xf590;                                           // 0x00143e84: ori $a3, $a3, 0xf590
    a0 = 0x1000 << 16;                                          // 0x00143e88: lui $a0, 0x1000
    a1 = 0xfffe << 16;                                          // 0x00143e8c: lui $a1, 0xfffe
    v1 = v1 | t0;                                               // 0x00143e90: or $v1, $v1, $t0
    a0 = a0 | 0xb000;                                           // 0x00143e94: ori $a0, $a0, 0xb000
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00143e98: sw $v1, 0($a3)
    a1 = a1 | 0xffff;                                           // 0x00143e9c: ori $a1, $a1, 0xffff
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00143ea0: sw $zero, 0($a0)
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00143ea4: lw $v1, 0($a2)
    v1 = v1 & a1;                                               // 0x00143ea8: and $v1, $v1, $a1
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00143eac: sw $v1, 0($a3)
    if (v0 == 0) goto label_0x143ec4;                           // 0x00143eb0: beqz $v0, 0x143ec4
    v0 = 0x1000 << 16;                                          // 0x00143eb4: lui $v0, 0x1000
    func_0011d390();  // 0x11d378                                // 0x00143eb8: jal 0x11d378
    /* nop */                                                   // 0x00143ebc: nop 
    v0 = 0x1000 << 16;                                          // 0x00143ec0: lui $v0, 0x1000
label_0x143ec4:
    local_40 = 0;                                               // 0x00143ec4: sw $zero, 0x40($sp)
    v0 = v0 | 0xb020;                                           // 0x00143ec8: ori $v0, $v0, 0xb020
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00143ecc: sw $zero, 0($v0)
label_0x143ed0:
    v0 = local_40;                                              // 0x00143ed0: lw $v0, 0x40($sp)
label_0x143ed8:
    return;                                                     // 0x00143efc: jr $ra
    sp = sp + 0xf0;                                             // 0x00143f00: addiu $sp, $sp, 0xf0
}