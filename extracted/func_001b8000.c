void func_001b8000() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    return func_001b8b40();  // Tail call                        // 0x001b8008: j 0x1b8b20
    a0 = 0xc;                                                   // 0x001b800c: addiu $a0, $zero, 0xc
    return func_001b8b40();  // Tail call                        // 0x001b8018: j 0x1b8b20
    a0 = 0xc;                                                   // 0x001b801c: addiu $a0, $zero, 0xc
    at = 0x31 << 16;                                            // 0x001b8020: lui $at, 0x31
    v0 = 0x14;                                                  // 0x001b8024: addiu $v0, $zero, 0x14
    v1 = g_003137ba;  // Global at 0x003137ba                   // 0x001b8028: lhu $v1, 0x37ba($at)
    if (v1 == v0) goto label_0x1b8154;                          // 0x001b802c: beq $v1, $v0, 0x1b8154
    v0 = 0x74 << 16;                                            // 0x001b8030: lui $v0, 0x74
    v0 = 0x1e;                                                  // 0x001b8034: addiu $v0, $zero, 0x1e
    if (v1 == v0) goto label_0x1b813c;                          // 0x001b8038: beq $v1, $v0, 0x1b813c
    /* nop */                                                   // 0x001b803c: nop 
    v0 = 0x1d;                                                  // 0x001b8040: addiu $v0, $zero, 0x1d
    if (v1 == v0) goto label_0x1b813c;                          // 0x001b8044: beq $v1, $v0, 0x1b813c
    /* nop */                                                   // 0x001b8048: nop 
    v0 = 0x1b;                                                  // 0x001b804c: addiu $v0, $zero, 0x1b
    if (v1 == v0) goto label_0x1b813c;                          // 0x001b8050: beq $v1, $v0, 0x1b813c
    /* nop */                                                   // 0x001b8054: nop 
    v0 = 0x1a;                                                  // 0x001b8058: addiu $v0, $zero, 0x1a
    if (v1 == v0) goto label_0x1b8128;                          // 0x001b805c: beq $v1, $v0, 0x1b8128
    v0 = 0x74 << 16;                                            // 0x001b8060: lui $v0, 0x74
    v0 = 0x17;                                                  // 0x001b8064: addiu $v0, $zero, 0x17
    if (v1 == v0) goto label_0x1b8110;                          // 0x001b8068: beq $v1, $v0, 0x1b8110
    /* nop */                                                   // 0x001b806c: nop 
    v0 = 0x16;                                                  // 0x001b8070: addiu $v0, $zero, 0x16
    if (v1 == v0) goto label_0x1b8110;                          // 0x001b8074: beq $v1, $v0, 0x1b8110
    /* nop */                                                   // 0x001b8078: nop 
    v0 = 0x15;                                                  // 0x001b807c: addiu $v0, $zero, 0x15
    if (v1 == v0) goto label_0x1b8110;                          // 0x001b8080: beq $v1, $v0, 0x1b8110
    /* nop */                                                   // 0x001b8084: nop 
    v0 = 0xf;                                                   // 0x001b8088: addiu $v0, $zero, 0xf
    if (v1 == v0) goto label_0x1b80fc;                          // 0x001b808c: beq $v1, $v0, 0x1b80fc
    v0 = 0x74 << 16;                                            // 0x001b8090: lui $v0, 0x74
    v0 = 0xa;                                                   // 0x001b8094: addiu $v0, $zero, 0xa
    if (v1 == v0) goto label_0x1b80e8;                          // 0x001b8098: beq $v1, $v0, 0x1b80e8
    v0 = 0x74 << 16;                                            // 0x001b809c: lui $v0, 0x74
    v0 = 6;                                                     // 0x001b80a0: addiu $v0, $zero, 6
    if (v1 == v0) goto label_0x1b80d4;                          // 0x001b80a4: beq $v1, $v0, 0x1b80d4
    v0 = 0x74 << 16;                                            // 0x001b80a8: lui $v0, 0x74
    v0 = 0x28;                                                  // 0x001b80ac: addiu $v0, $zero, 0x28
    if (v1 == v0) goto label_0x1b80c0;                          // 0x001b80b0: beq $v1, $v0, 0x1b80c0
    v0 = 0x74 << 16;                                            // 0x001b80b4: lui $v0, 0x74
    goto label_0x1b8164;                                        // 0x001b80b8: b 0x1b8164
label_0x1b80c0:
    v1 = a0 << 1;                                               // 0x001b80c0: sll $v1, $a0, 1
    v0 = v0 + -0x2f30;                                          // 0x001b80c4: addiu $v0, $v0, -0x2f30
    v0 = v0 + v1;                                               // 0x001b80c8: addu $v0, $v0, $v1
    goto label_0x1b8164;                                        // 0x001b80cc: b 0x1b8164
    a0 = g_0073d0d0;  // Global at 0x0073d0d0                   // 0x001b80d0: lh $a0, 0($v0)
label_0x1b80d4:
    v1 = a0 << 1;                                               // 0x001b80d4: sll $v1, $a0, 1
    v0 = v0 + -0x2d70;                                          // 0x001b80d8: addiu $v0, $v0, -0x2d70
    v0 = v0 + v1;                                               // 0x001b80dc: addu $v0, $v0, $v1
    goto label_0x1b8164;                                        // 0x001b80e0: b 0x1b8164
    a0 = g_0073a360;  // Global at 0x0073a360                   // 0x001b80e4: lh $a0, 0($v0)
label_0x1b80e8:
    v1 = a0 << 1;                                               // 0x001b80e8: sll $v1, $a0, 1
    v0 = v0 + -0x2bb0;                                          // 0x001b80ec: addiu $v0, $v0, -0x2bb0
    v0 = v0 + v1;                                               // 0x001b80f0: addu $v0, $v0, $v1
    goto label_0x1b8164;                                        // 0x001b80f4: b 0x1b8164
    a0 = g_007377b0;  // Global at 0x007377b0                   // 0x001b80f8: lh $a0, 0($v0)
label_0x1b80fc:
    v1 = a0 << 1;                                               // 0x001b80fc: sll $v1, $a0, 1
    v0 = v0 + -0x29f0;                                          // 0x001b8100: addiu $v0, $v0, -0x29f0
    v0 = v0 + v1;                                               // 0x001b8104: addu $v0, $v0, $v1
    goto label_0x1b8164;                                        // 0x001b8108: b 0x1b8164
    a0 = g_00734dc0;  // Global at 0x00734dc0                   // 0x001b810c: lh $a0, 0($v0)
label_0x1b8110:
    v0 = 0x74 << 16;                                            // 0x001b8110: lui $v0, 0x74
    v1 = a0 << 1;                                               // 0x001b8114: sll $v1, $a0, 1
    v0 = v0 + -0x2670;                                          // 0x001b8118: addiu $v0, $v0, -0x2670
    v0 = v0 + v1;                                               // 0x001b811c: addu $v0, $v0, $v1
    goto label_0x1b8164;                                        // 0x001b8120: b 0x1b8164
    a0 = g_0073d990;  // Global at 0x0073d990                   // 0x001b8124: lh $a0, 0($v0)
label_0x1b8128:
    v1 = a0 << 1;                                               // 0x001b8128: sll $v1, $a0, 1
    v0 = v0 + -0x2830;                                          // 0x001b812c: addiu $v0, $v0, -0x2830
    v0 = v0 + v1;                                               // 0x001b8130: addu $v0, $v0, $v1
    goto label_0x1b8164;                                        // 0x001b8134: b 0x1b8164
    a0 = g_0073b160;  // Global at 0x0073b160                   // 0x001b8138: lh $a0, 0($v0)
label_0x1b813c:
    v0 = 0x74 << 16;                                            // 0x001b813c: lui $v0, 0x74
    v1 = a0 << 1;                                               // 0x001b8140: sll $v1, $a0, 1
    v0 = v0 + -0x24b0;                                          // 0x001b8144: addiu $v0, $v0, -0x24b0
    v0 = v0 + v1;                                               // 0x001b8148: addu $v0, $v0, $v1
    goto label_0x1b8164;                                        // 0x001b814c: b 0x1b8164
    a0 = g_0073db50;  // Global at 0x0073db50                   // 0x001b8150: lh $a0, 0($v0)
label_0x1b8154:
    v1 = a0 << 1;                                               // 0x001b8154: sll $v1, $a0, 1
    v0 = v0 + -0x22f0;                                          // 0x001b8158: addiu $v0, $v0, -0x22f0
    v0 = v0 + v1;                                               // 0x001b815c: addu $v0, $v0, $v1
    a0 = g_0073b860;  // Global at 0x0073b860                   // 0x001b8160: lh $a0, 0($v0)
label_0x1b8164:
    return;                                                     // 0x001b8164: jr $ra
}