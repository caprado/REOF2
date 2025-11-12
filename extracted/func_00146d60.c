void func_00146d60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00146d60: addiu $sp, $sp, -0x40
    a1 = 0x140;                                                 // 0x00146d64: addiu $a1, $zero, 0x140
    v0 = 0xfff << 16;                                           // 0x00146d6c: lui $v0, 0xfff
    s2 = 0x25 << 16;                                            // 0x00146d74: lui $s2, 0x25
    a0 = s2 + 0x6180;                                           // 0x00146d84: addiu $a0, $s2, 0x6180
    v0 = v0 | 0xffff;                                           // 0x00146d88: ori $v0, $v0, 0xffff
    t8 = *(int32_t*)((s0) + 0x828);                             // 0x00146d90: lw $t8, 0x828($s0)
    a0 = a0 & v0;                                               // 0x00146d94: and $a0, $a0, $v0
    /* multiply: t8 * a1 -> hi:lo */                            // 0x00146d98: mult $ac3, $t8, $a1
    a1 = v1 + s0;                                               // 0x00146d9c: addu $a1, $v1, $s0
    v1 = 0x2000 << 16;                                          // 0x00146da0: lui $v1, 0x2000
    t4 = *(int32_t*)((a1) + 0x6d4);                             // 0x00146da4: lw $t4, 0x6d4($a1)
    if (t4 <= 0) goto label_0x146e40;                           // 0x00146da8: blez $t4, 0x146e40
    t2 = a0 | v1;                                               // 0x00146dac: or $t2, $a0, $v1
    t7 = s0 + 0x5b0;                                            // 0x00146db0: addiu $t7, $s0, 0x5b0
    t6 = s0 + 0x5c0;                                            // 0x00146db4: addiu $t6, $s0, 0x5c0
    t5 = t4 + -1;                                               // 0x00146db8: addiu $t5, $t4, -1
    s1 = s0 + 0x5a8;                                            // 0x00146dbc: addiu $s1, $s0, 0x5a8
label_0x146dc0:
    v1 = 0x140;                                                 // 0x00146dc0: addiu $v1, $zero, 0x140
    v0 = t3 ^ t5;                                               // 0x00146dc4: xor $v0, $t3, $t5
    /* multiply: t8 * v1 -> hi:lo */                            // 0x00146dc8: mult $ac3, $t8, $v1
    a0 = t3 << 2;                                               // 0x00146dcc: sll $a0, $t3, 2
    a1 = 3;                                                     // 0x00146dd0: addiu $a1, $zero, 3
    a2 = 0xfff << 16;                                           // 0x00146dd4: lui $a2, 0xfff
    if (v0 == 0) a1 = 0;                                        // 0x00146dd8: movz $a1, $zero, $v0
    a2 = a2 | 0xffff;                                           // 0x00146ddc: ori $a2, $a2, 0xffff
    t1 = 0x3000 << 16;                                          // 0x00146de4: lui $t1, 0x3000
    t1 = t1 | 0x30;                                             // 0x00146de8: ori $t1, $t1, 0x30
    a0 = a0 + v1;                                               // 0x00146dec: addu $a0, $a0, $v1
    t0 = 0x30;                                                  // 0x00146df0: addiu $t0, $zero, 0x30
    v0 = t6 + a0;                                               // 0x00146df4: addu $v0, $t6, $a0
    t3 = t3 + 1;                                                // 0x00146df8: addiu $t3, $t3, 1
    v1 = g_0fff0000;  // Global at 0x0fff0000                   // 0x00146dfc: lw $v1, 0($v0)
    a0 = t7 + a0;                                               // 0x00146e00: addu $a0, $t7, $a0
    v0 = g_00256180;  // Global at 0x00256180                   // 0x00146e04: lw $v0, 0($a0)
    a3 = (t3 < t4) ? 1 : 0;                                     // 0x00146e08: slt $a3, $t3, $t4
    v1 = v1 & a2;                                               // 0x00146e0c: and $v1, $v1, $a2
    v0 = v0 & a2;                                               // 0x00146e10: and $v0, $v0, $a2
    v1 = v1 | a1;                                               // 0x00146e18: or $v1, $v1, $a1
    v0 = v0 | t1;                                               // 0x00146e20: or $v0, $v0, $t1
    v1 = v1 | t0;                                               // 0x00146e24: or $v1, $v1, $t0
    if (a3 != 0) goto label_0x146dc0;                           // 0x00146e30: bnez $a3, 0x146dc0
    t2 = t2 + 0x20;                                             // 0x00146e34: addiu $t2, $t2, 0x20
    goto label_0x146e44;                                        // 0x00146e38: b 0x146e44
    /* nop */                                                   // 0x00146e3c: nop 
label_0x146e40:
    s1 = s0 + 0x5a8;                                            // 0x00146e40: addiu $s1, $s0, 0x5a8
label_0x146e44:
    func_0011d378();  // 0x11d320                                // 0x00146e44: jal 0x11d320
    /* nop */                                                   // 0x00146e48: nop 
    /* memory sync */                                           // 0x00146e4c: sync 
    a2 = *(int32_t*)((s0) + 0x828);                             // 0x00146e50: lw $a2, 0x828($s0)
    v1 = 0x140;                                                 // 0x00146e54: addiu $v1, $zero, 0x140
    a3 = 0x1000 << 16;                                          // 0x00146e58: lui $a3, 0x1000
    t0 = 0x1000 << 16;                                          // 0x00146e5c: lui $t0, 0x1000
    a3 = a3 | 0xd480;                                           // 0x00146e64: ori $a3, $a3, 0xd480
    t2 = s2 + 0x6180;                                           // 0x00146e68: addiu $t2, $s2, 0x6180
    t0 = t0 | 0xd430;                                           // 0x00146e6c: ori $t0, $t0, 0xd430
    v1 = 0x1000 << 16;                                          // 0x00146e70: lui $v1, 0x1000
    t1 = 0x105;                                                 // 0x00146e74: addiu $t1, $zero, 0x105
    v1 = v1 | 0xd420;                                           // 0x00146e78: ori $v1, $v1, 0xd420
    a2 = a0 + s1;                                               // 0x00146e7c: addu $a2, $a0, $s1
    a1 = g_0fff0000;  // Global at 0x0fff0000                   // 0x00146e80: lw $a1, 0($a2)
    a0 = 0x1000 << 16;                                          // 0x00146e84: lui $a0, 0x1000
    a0 = a0 | 0xd400;                                           // 0x00146e88: ori $a0, $a0, 0xd400
    g_10000000 = a1;  // Global at 0x10000000                   // 0x00146e8c: sw $a1, 0($a3)
    g_10000000 = t2;  // Global at 0x10000000                   // 0x00146e90: sw $t2, 0($t0)
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00146e94: sw $zero, 0($v1)
    g_10000000 = t1;  // Global at 0x10000000                   // 0x00146e98: sw $t1, 0($a0)
    if (v0 == 0) goto label_0x146eb8;                           // 0x00146e9c: beqz $v0, 0x146eb8
    return func_0011d390();  // Tail call                        // 0x00146eb0: j 0x11d378
    sp = sp + 0x40;                                             // 0x00146eb4: addiu $sp, $sp, 0x40
label_0x146eb8:
    return;                                                     // 0x00146ec4: jr $ra
    sp = sp + 0x40;                                             // 0x00146ec8: addiu $sp, $sp, 0x40
}