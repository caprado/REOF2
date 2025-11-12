void func_001a7c50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = (a1 < 9) ? 1 : 0;                                      // 0x001a7c50: slti $at, $a1, 9
    if (at != 0) goto label_0x1a7c64;                           // 0x001a7c54: bnez $at, 0x1a7c64
    at = 0x2a << 16;                                            // 0x001a7c58: lui $at, 0x2a
    goto label_0x1a7dc8;                                        // 0x001a7c5c: b 0x1a7dc8
    v0 = -1;                                                    // 0x001a7c60: addiu $v0, $zero, -1
label_0x1a7c64:
    v0 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7c64: lw $v0, 0xf68($at)
    v0 = v0 + a1;                                               // 0x001a7c68: addu $v0, $v0, $a1
    v0 = (v0 < 0x200) ? 1 : 0;                                  // 0x001a7c6c: slti $v0, $v0, 0x200
    if (v0 != 0) goto label_0x1a7c80;                           // 0x001a7c70: bnez $v0, 0x1a7c80
    v1 = 0x2a << 16;                                            // 0x001a7c74: lui $v1, 0x2a
    goto label_0x1a7dc8;                                        // 0x001a7c78: b 0x1a7dc8
    v0 = -1;                                                    // 0x001a7c7c: addiu $v0, $zero, -1
label_0x1a7c80:
    t4 = 0x18;                                                  // 0x001a7c80: addiu $t4, $zero, 0x18
    t3 = 4;                                                     // 0x001a7c84: addiu $t3, $zero, 4
    goto label_0x1a7cc0;                                        // 0x001a7c88: b 0x1a7cc0
    v1 = v1 + 0x11c0;                                           // 0x001a7c8c: addiu $v1, $v1, 0x11c0
label_0x1a7c90:
    t2 = (unsigned)a0 >> t4;                                    // 0x001a7c90: srlv $t2, $a0, $t4
    v0 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7c94: lw $v0, 0xf68($at)
    t4 = t4 + -8;                                               // 0x001a7c98: addiu $t4, $t4, -8
    t3 = t3 + -1;                                               // 0x001a7c9c: addiu $t3, $t3, -1
    a1 = a1 + -1;                                               // 0x001a7ca0: addiu $a1, $a1, -1
    v0 = v1 + v0;                                               // 0x001a7ca4: addu $v0, $v1, $v0
    at = 0x2a << 16;                                            // 0x001a7ca8: lui $at, 0x2a
    g_002a11c1 = t2;  // Global at 0x002a11c1                   // 0x001a7cac: sb $t2, 0($v0)
    v0 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7cb0: lw $v0, 0xf68($at)
    v0 = v0 + 1;                                                // 0x001a7cb4: addiu $v0, $v0, 1
    at = 0x2a << 16;                                            // 0x001a7cb8: lui $at, 0x2a
    g_002a0f68 = v0;  // Global at 0x002a0f68                   // 0x001a7cbc: sw $v0, 0xf68($at)
label_0x1a7cc0:
    if (t3 <= 0) goto label_0x1a7cd0;                           // 0x001a7cc0: blez $t3, 0x1a7cd0
    if (a1 > 0) goto label_0x1a7c90;                            // 0x001a7cc8: bgtz $a1, 0x1a7c90
    at = 0x2a << 16;                                            // 0x001a7ccc: lui $at, 0x2a
label_0x1a7cd0:
    if (v0 <= 0) goto label_0x1a7d04;                           // 0x001a7cd0: blez $v0, 0x1a7d04
    a1 = v0 + -1;                                               // 0x001a7cd4: addiu $a1, $v0, -1
    at = 0x2a << 16;                                            // 0x001a7cd8: lui $at, 0x2a
    v0 = 0x2a << 16;                                            // 0x001a7cdc: lui $v0, 0x2a
    v1 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7ce0: lw $v1, 0xf68($at)
    v0 = v0 + 0x11c0;                                           // 0x001a7ce4: addiu $v0, $v0, 0x11c0
    v0 = v0 + v1;                                               // 0x001a7ce8: addu $v0, $v0, $v1
    at = 0x2a << 16;                                            // 0x001a7cec: lui $at, 0x2a
    g_002a11c0 = a2;  // Global at 0x002a11c0                   // 0x001a7cf0: sb $a2, 0($v0)
    v0 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7cf4: lw $v0, 0xf68($at)
    v0 = v0 + 1;                                                // 0x001a7cf8: addiu $v0, $v0, 1
    at = 0x2a << 16;                                            // 0x001a7cfc: lui $at, 0x2a
    g_002a0f68 = v0;  // Global at 0x002a0f68                   // 0x001a7d00: sw $v0, 0xf68($at)
label_0x1a7d04:
    if (v0 <= 0) goto label_0x1a7d3c;                           // 0x001a7d08: blez $v0, 0x1a7d3c
    a1 = v0 + -1;                                               // 0x001a7d0c: addiu $a1, $v0, -1
    at = 0x2a << 16;                                            // 0x001a7d10: lui $at, 0x2a
    v0 = 0x2a << 16;                                            // 0x001a7d14: lui $v0, 0x2a
    v1 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7d18: lw $v1, 0xf68($at)
    v0 = v0 + 0x11c0;                                           // 0x001a7d1c: addiu $v0, $v0, 0x11c0
    v0 = v0 + v1;                                               // 0x001a7d20: addu $v0, $v0, $v1
    at = 0x2a << 16;                                            // 0x001a7d24: lui $at, 0x2a
    g_002a11c0 = a3;  // Global at 0x002a11c0                   // 0x001a7d28: sb $a3, 0($v0)
    v0 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7d2c: lw $v0, 0xf68($at)
    v0 = v0 + 1;                                                // 0x001a7d30: addiu $v0, $v0, 1
    at = 0x2a << 16;                                            // 0x001a7d34: lui $at, 0x2a
    g_002a0f68 = v0;  // Global at 0x002a0f68                   // 0x001a7d38: sw $v0, 0xf68($at)
label_0x1a7d3c:
    if (v0 <= 0) goto label_0x1a7d74;                           // 0x001a7d40: blez $v0, 0x1a7d74
    a1 = v0 + -1;                                               // 0x001a7d44: addiu $a1, $v0, -1
    at = 0x2a << 16;                                            // 0x001a7d48: lui $at, 0x2a
    v0 = 0x2a << 16;                                            // 0x001a7d4c: lui $v0, 0x2a
    v1 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7d50: lw $v1, 0xf68($at)
    v0 = v0 + 0x11c0;                                           // 0x001a7d54: addiu $v0, $v0, 0x11c0
    v0 = v0 + v1;                                               // 0x001a7d58: addu $v0, $v0, $v1
    at = 0x2a << 16;                                            // 0x001a7d5c: lui $at, 0x2a
    g_002a11c0 = t0;  // Global at 0x002a11c0                   // 0x001a7d60: sb $t0, 0($v0)
    v0 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7d64: lw $v0, 0xf68($at)
    v0 = v0 + 1;                                                // 0x001a7d68: addiu $v0, $v0, 1
    at = 0x2a << 16;                                            // 0x001a7d6c: lui $at, 0x2a
    g_002a0f68 = v0;  // Global at 0x002a0f68                   // 0x001a7d70: sw $v0, 0xf68($at)
label_0x1a7d74:
    if (a1 <= 0) goto label_0x1a7da8;                           // 0x001a7d74: blez $a1, 0x1a7da8
    /* nop */                                                   // 0x001a7d78: nop 
    at = 0x2a << 16;                                            // 0x001a7d7c: lui $at, 0x2a
    v0 = 0x2a << 16;                                            // 0x001a7d80: lui $v0, 0x2a
    v1 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7d84: lw $v1, 0xf68($at)
    v0 = v0 + 0x11c0;                                           // 0x001a7d88: addiu $v0, $v0, 0x11c0
    v0 = v0 + v1;                                               // 0x001a7d8c: addu $v0, $v0, $v1
    at = 0x2a << 16;                                            // 0x001a7d90: lui $at, 0x2a
    g_002a11c0 = t1;  // Global at 0x002a11c0                   // 0x001a7d94: sb $t1, 0($v0)
    v0 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7d98: lw $v0, 0xf68($at)
    v0 = v0 + 1;                                                // 0x001a7d9c: addiu $v0, $v0, 1
    at = 0x2a << 16;                                            // 0x001a7da0: lui $at, 0x2a
    g_002a0f68 = v0;  // Global at 0x002a0f68                   // 0x001a7da4: sw $v0, 0xf68($at)
label_0x1a7da8:
    at = 0x2a << 16;                                            // 0x001a7da8: lui $at, 0x2a
    v1 = 0x2a << 16;                                            // 0x001a7dac: lui $v1, 0x2a
    a0 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7db0: lw $a0, 0xf68($at)
    v1 = v1 + 0x11c0;                                           // 0x001a7db4: addiu $v1, $v1, 0x11c0
    a1 = 0xff;                                                  // 0x001a7db8: addiu $a1, $zero, 0xff
    v1 = v1 + a0;                                               // 0x001a7dc0: addu $v1, $v1, $a0
    g_002a11c0 = a1;  // Global at 0x002a11c0                   // 0x001a7dc4: sb $a1, 0($v1)
label_0x1a7dc8:
    return;                                                     // 0x001a7dc8: jr $ra
    /* nop */                                                   // 0x001a7dcc: nop 
}