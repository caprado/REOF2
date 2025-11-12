void func_001bb0a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001bb0a0: addiu $sp, $sp, -0x10
    v1 = g_00308028;  // Global at 0x00308028                   // 0x001bb0a8: lbu $v1, 8($a0)
    if (v1 != 0) goto label_0x1bb0e4;                           // 0x001bb0ac: bnez $v1, 0x1bb0e4
    at = 0x31 << 16;                                            // 0x001bb0b0: lui $at, 0x31
    v0 = v1 + 1;                                                // 0x001bb0b4: addiu $v0, $v1, 1
    g_00308028 = v0;  // Global at 0x00308028                   // 0x001bb0bc: sb $v0, 8($a0)
    a2 = 0x24;                                                  // 0x001bb0c0: addiu $a2, $zero, 0x24
    a0 = 0x31 << 16;                                            // 0x001bb0c4: lui $a0, 0x31
    func_00107d30();  // 0x107c70                                // 0x001bb0c8: jal 0x107c70
    a0 = a0 + -0x7fe0;                                          // 0x001bb0cc: addiu $a0, $a0, -0x7fe0
    a0 = 0x40;                                                  // 0x001bb0d0: addiu $a0, $zero, 0x40
    func_001bb2c0();  // 0x1bb230                                // 0x001bb0d4: jal 0x1bb230
    goto label_0x1bb224;                                        // 0x001bb0dc: b 0x1bb224
label_0x1bb0e4:
    v1 = 1;                                                     // 0x001bb0e4: addiu $v1, $zero, 1
    a0 = g_00308020;  // Global at 0x00308020                   // 0x001bb0e8: lbu $a0, -0x7fe0($at)
    if (a0 == v1) goto label_0x1bb19c;                          // 0x001bb0ec: beq $a0, $v1, 0x1bb19c
    v1 = 2;                                                     // 0x001bb0f0: addiu $v1, $zero, 2
    if (a0 == v1) goto label_0x1bb10c;                          // 0x001bb0f4: beq $a0, $v1, 0x1bb10c
    at = 0x31 << 16;                                            // 0x001bb0f8: lui $at, 0x31
    if (a0 == 0) goto label_0x1bb220;                           // 0x001bb0fc: beqz $a0, 0x1bb220
    /* nop */                                                   // 0x001bb100: nop 
    goto label_0x1bb220;                                        // 0x001bb104: b 0x1bb220
    /* nop */                                                   // 0x001bb108: nop 
label_0x1bb10c:
    v1 = g_00308024;  // Global at 0x00308024                   // 0x001bb10c: lw $v1, -0x7fdc($at)
    if (v1 <= 0) goto label_0x1bb124;                           // 0x001bb110: blez $v1, 0x1bb124
    /* nop */                                                   // 0x001bb114: nop 
    v1 = v1 + -1;                                               // 0x001bb118: addiu $v1, $v1, -1
    at = 0x31 << 16;                                            // 0x001bb11c: lui $at, 0x31
    g_00308024 = v1;  // Global at 0x00308024                   // 0x001bb120: sw $v1, -0x7fdc($at)
label_0x1bb124:
    at = 0x31 << 16;                                            // 0x001bb124: lui $at, 0x31
    a1 = g_00308024;  // Global at 0x00308024                   // 0x001bb128: lw $a1, -0x7fdc($at)
    if (a1 != 0) goto label_0x1bb140;                           // 0x001bb12c: bnez $a1, 0x1bb140
    at = 0x31 << 16;                                            // 0x001bb130: lui $at, 0x31
    at = 0x31 << 16;                                            // 0x001bb134: lui $at, 0x31
    goto label_0x1bb220;                                        // 0x001bb138: b 0x1bb220
    g_00308020 = 0;  // Global at 0x00308020                    // 0x001bb13c: sb $zero, -0x7fe0($at)
label_0x1bb140:
    v1 = a1 << 8;                                               // 0x001bb140: sll $v1, $a1, 8
    a0 = g_00308028;  // Global at 0x00308028                   // 0x001bb144: lw $a0, -0x7fd8($at)
    a1 = v1 - a1;                                               // 0x001bb148: subu $a1, $v1, $a1
    /* divide: a1 / a0 -> hi:lo */                              // 0x001bb14c: div $zero, $a1, $a0
    at = 0x31 << 16;                                            // 0x001bb150: lui $at, 0x31
    v1 = g_00308034;  // Global at 0x00308034                   // 0x001bb154: lw $v1, -0x7fcc($at)
    at = 0x31 << 16;                                            // 0x001bb15c: lui $at, 0x31
    g_00308034 = v1;  // Global at 0x00308034                   // 0x001bb164: sw $v1, -0x7fcc($at)
    at = 0x31 << 16;                                            // 0x001bb168: lui $at, 0x31
    v1 = g_00308034;  // Global at 0x00308034                   // 0x001bb16c: lw $v1, -0x7fcc($at)
    at = 0x31 << 16;                                            // 0x001bb170: lui $at, 0x31
    /* mflo $a0 */                                              // 0x001bb174
    a0 = a0 & 0xff;                                             // 0x001bb178: andi $a0, $a0, 0xff
    a0 = a0 << 0x18;                                            // 0x001bb17c: sll $a0, $a0, 0x18
    v1 = v1 | a0;                                               // 0x001bb180: or $v1, $v1, $a0
    g_00308034 = v1;  // Global at 0x00308034                   // 0x001bb184: sw $v1, -0x7fcc($at)
    at = 0x31 << 16;                                            // 0x001bb188: lui $at, 0x31
    v1 = g_00308034;  // Global at 0x00308034                   // 0x001bb18c: lw $v1, -0x7fcc($at)
    at = 0x31 << 16;                                            // 0x001bb190: lui $at, 0x31
    goto label_0x1bb220;                                        // 0x001bb194: b 0x1bb220
    g_00308040 = v1;  // Global at 0x00308040                   // 0x001bb198: sw $v1, -0x7fc0($at)
label_0x1bb19c:
    at = 0x31 << 16;                                            // 0x001bb19c: lui $at, 0x31
    v1 = g_00308024;  // Global at 0x00308024                   // 0x001bb1a0: lw $v1, -0x7fdc($at)
    if (v1 <= 0) goto label_0x1bb1b8;                           // 0x001bb1a4: blez $v1, 0x1bb1b8
    /* nop */                                                   // 0x001bb1a8: nop 
    v1 = v1 + -1;                                               // 0x001bb1ac: addiu $v1, $v1, -1
    at = 0x31 << 16;                                            // 0x001bb1b0: lui $at, 0x31
    g_00308024 = v1;  // Global at 0x00308024                   // 0x001bb1b4: sw $v1, -0x7fdc($at)
label_0x1bb1b8:
    at = 0x31 << 16;                                            // 0x001bb1b8: lui $at, 0x31
    a2 = g_00308028;  // Global at 0x00308028                   // 0x001bb1bc: lw $a2, -0x7fd8($at)
    at = 0x31 << 16;                                            // 0x001bb1c0: lui $at, 0x31
    a0 = g_00308024;  // Global at 0x00308024                   // 0x001bb1c4: lw $a0, -0x7fdc($at)
    a1 = a2 - a0;                                               // 0x001bb1c8: subu $a1, $a2, $a0
    at = 0x31 << 16;                                            // 0x001bb1cc: lui $at, 0x31
    a0 = a1 << 8;                                               // 0x001bb1d0: sll $a0, $a1, 8
    v1 = g_00308034;  // Global at 0x00308034                   // 0x001bb1d4: lw $v1, -0x7fcc($at)
    a0 = a0 - a1;                                               // 0x001bb1d8: subu $a0, $a0, $a1
    /* divide: a0 / a2 -> hi:lo */                              // 0x001bb1dc: div $zero, $a0, $a2
    at = 0x31 << 16;                                            // 0x001bb1e4: lui $at, 0x31
    g_00308034 = v1;  // Global at 0x00308034                   // 0x001bb1ec: sw $v1, -0x7fcc($at)
    at = 0x31 << 16;                                            // 0x001bb1f0: lui $at, 0x31
    v1 = g_00308034;  // Global at 0x00308034                   // 0x001bb1f4: lw $v1, -0x7fcc($at)
    at = 0x31 << 16;                                            // 0x001bb1f8: lui $at, 0x31
    /* mflo $a0 */                                              // 0x001bb1fc
    a0 = a0 & 0xff;                                             // 0x001bb200: andi $a0, $a0, 0xff
    a0 = a0 << 0x18;                                            // 0x001bb204: sll $a0, $a0, 0x18
    v1 = v1 | a0;                                               // 0x001bb208: or $v1, $v1, $a0
    g_00308034 = v1;  // Global at 0x00308034                   // 0x001bb20c: sw $v1, -0x7fcc($at)
    at = 0x31 << 16;                                            // 0x001bb210: lui $at, 0x31
    v1 = g_00308034;  // Global at 0x00308034                   // 0x001bb214: lw $v1, -0x7fcc($at)
    at = 0x31 << 16;                                            // 0x001bb218: lui $at, 0x31
    g_00308040 = v1;  // Global at 0x00308040                   // 0x001bb21c: sw $v1, -0x7fc0($at)
label_0x1bb220:
label_0x1bb224:
    return;                                                     // 0x001bb224: jr $ra
    sp = sp + 0x10;                                             // 0x001bb228: addiu $sp, $sp, 0x10
}