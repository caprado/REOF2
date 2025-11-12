void func_001a7b80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x2a << 16;                                            // 0x001a7b80: lui $at, 0x2a
    v0 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7b84: lw $v0, 0xf68($at)
    v0 = v0 + 8;                                                // 0x001a7b88: addiu $v0, $v0, 8
    v0 = (v0 < 0x200) ? 1 : 0;                                  // 0x001a7b8c: slti $v0, $v0, 0x200
    if (v0 != 0) goto label_0x1a7ba0;                           // 0x001a7b90: bnez $v0, 0x1a7ba0
    v0 = -1;                                                    // 0x001a7b94: addiu $v0, $zero, -1
    goto label_0x1a7c48;                                        // 0x001a7b98: b 0x1a7c48
    /* nop */                                                   // 0x001a7b9c: nop 
label_0x1a7ba0:
    a2 = *(int32_t*)(a0);                                       // 0x001a7ba0: lw $a2, 0($a0)
    t0 = 0x18;                                                  // 0x001a7ba4: addiu $t0, $zero, 0x18
    a3 = 4;                                                     // 0x001a7ba8: addiu $a3, $zero, 4
    v1 = 0x2a << 16;                                            // 0x001a7bac: lui $v1, 0x2a
    v1 = v1 + 0x11c0;                                           // 0x001a7bb0: addiu $v1, $v1, 0x11c0
label_0x1a7bb4:
    at = 0x2a << 16;                                            // 0x001a7bb4: lui $at, 0x2a
    a1 = (unsigned)a2 >> t0;                                    // 0x001a7bb8: srlv $a1, $a2, $t0
    v0 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7bbc: lw $v0, 0xf68($at)
    a3 = a3 + -1;                                               // 0x001a7bc0: addiu $a3, $a3, -1
    t0 = t0 + -8;                                               // 0x001a7bc4: addiu $t0, $t0, -8
    v0 = v1 + v0;                                               // 0x001a7bc8: addu $v0, $v1, $v0
    at = 0x2a << 16;                                            // 0x001a7bcc: lui $at, 0x2a
    *(uint8_t*)(v0) = a1;                                       // 0x001a7bd0: sb $a1, 0($v0)
    v0 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7bd4: lw $v0, 0xf68($at)
    v0 = v0 + 1;                                                // 0x001a7bd8: addiu $v0, $v0, 1
    at = 0x2a << 16;                                            // 0x001a7bdc: lui $at, 0x2a
    if (a3 > 0) goto label_0x1a7bb4;                            // 0x001a7be0: bgtz $a3, 0x1a7bb4
    g_002a0f68 = v0;  // Global at 0x002a0f68                   // 0x001a7be4: sw $v0, 0xf68($at)
    a3 = *(int32_t*)((a0) + 4);                                 // 0x001a7be8: lw $a3, 4($a0)
    a2 = 0x10;                                                  // 0x001a7bec: addiu $a2, $zero, 0x10
    a0 = 3;                                                     // 0x001a7bf0: addiu $a0, $zero, 3
    a1 = 0x2a << 16;                                            // 0x001a7bf4: lui $a1, 0x2a
    a1 = a1 + 0x11c0;                                           // 0x001a7bf8: addiu $a1, $a1, 0x11c0
label_0x1a7bfc:
    at = 0x2a << 16;                                            // 0x001a7bfc: lui $at, 0x2a
    v1 = (unsigned)a3 >> a2;                                    // 0x001a7c00: srlv $v1, $a3, $a2
    v0 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7c04: lw $v0, 0xf68($at)
    a0 = a0 + -1;                                               // 0x001a7c08: addiu $a0, $a0, -1
    a2 = a2 + -8;                                               // 0x001a7c0c: addiu $a2, $a2, -8
    v0 = a1 + v0;                                               // 0x001a7c10: addu $v0, $a1, $v0
    at = 0x2a << 16;                                            // 0x001a7c14: lui $at, 0x2a
    *(uint8_t*)(v0) = v1;                                       // 0x001a7c18: sb $v1, 0($v0)
    v0 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7c1c: lw $v0, 0xf68($at)
    v0 = v0 + 1;                                                // 0x001a7c20: addiu $v0, $v0, 1
    at = 0x2a << 16;                                            // 0x001a7c24: lui $at, 0x2a
    if (a0 > 0) goto label_0x1a7bfc;                            // 0x001a7c28: bgtz $a0, 0x1a7bfc
    g_002a0f68 = v0;  // Global at 0x002a0f68                   // 0x001a7c2c: sw $v0, 0xf68($at)
    at = 0x2a << 16;                                            // 0x001a7c30: lui $at, 0x2a
    a0 = 0xff;                                                  // 0x001a7c34: addiu $a0, $zero, 0xff
    v1 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7c38: lw $v1, 0xf68($at)
    v1 = a1 + v1;                                               // 0x001a7c40: addu $v1, $a1, $v1
    g_002a11c0 = a0;  // Global at 0x002a11c0                   // 0x001a7c44: sb $a0, 0($v1)
label_0x1a7c48:
    return;                                                     // 0x001a7c48: jr $ra
    /* nop */                                                   // 0x001a7c4c: nop 
}