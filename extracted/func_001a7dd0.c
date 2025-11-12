void func_001a7dd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = (a1 < 5) ? 1 : 0;                                      // 0x001a7dd0: slti $at, $a1, 5
    if (at != 0) goto label_0x1a7de4;                           // 0x001a7dd4: bnez $at, 0x1a7de4
    at = 0x2a << 16;                                            // 0x001a7dd8: lui $at, 0x2a
    goto label_0x1a7e60;                                        // 0x001a7ddc: b 0x1a7e60
    v0 = -1;                                                    // 0x001a7de0: addiu $v0, $zero, -1
label_0x1a7de4:
    v0 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7de4: lw $v0, 0xf68($at)
    v0 = v0 + a1;                                               // 0x001a7de8: addu $v0, $v0, $a1
    v0 = (v0 < 0x200) ? 1 : 0;                                  // 0x001a7dec: slti $v0, $v0, 0x200
    if (v0 != 0) goto label_0x1a7e00;                           // 0x001a7df0: bnez $v0, 0x1a7e00
    v1 = 0x2a << 16;                                            // 0x001a7df4: lui $v1, 0x2a
    goto label_0x1a7e60;                                        // 0x001a7df8: b 0x1a7e60
    v0 = -1;                                                    // 0x001a7dfc: addiu $v0, $zero, -1
label_0x1a7e00:
    a3 = 0x18;                                                  // 0x001a7e00: addiu $a3, $zero, 0x18
    goto label_0x1a7e38;                                        // 0x001a7e04: b 0x1a7e38
    v1 = v1 + 0x11c0;                                           // 0x001a7e08: addiu $v1, $v1, 0x11c0
label_0x1a7e0c:
    a2 = (unsigned)a0 >> a3;                                    // 0x001a7e0c: srlv $a2, $a0, $a3
    v0 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7e10: lw $v0, 0xf68($at)
    a3 = a3 + -8;                                               // 0x001a7e14: addiu $a3, $a3, -8
    a1 = a1 + -1;                                               // 0x001a7e18: addiu $a1, $a1, -1
    v0 = v1 + v0;                                               // 0x001a7e1c: addu $v0, $v1, $v0
    at = 0x2a << 16;                                            // 0x001a7e20: lui $at, 0x2a
    *(uint8_t*)(v0) = a2;                                       // 0x001a7e24: sb $a2, 0($v0)
    v0 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7e28: lw $v0, 0xf68($at)
    v0 = v0 + 1;                                                // 0x001a7e2c: addiu $v0, $v0, 1
    at = 0x2a << 16;                                            // 0x001a7e30: lui $at, 0x2a
    g_002a0f68 = v0;  // Global at 0x002a0f68                   // 0x001a7e34: sw $v0, 0xf68($at)
label_0x1a7e38:
    if (a1 > 0) goto label_0x1a7e0c;                            // 0x001a7e38: bgtz $a1, 0x1a7e0c
    at = 0x2a << 16;                                            // 0x001a7e3c: lui $at, 0x2a
    at = 0x2a << 16;                                            // 0x001a7e40: lui $at, 0x2a
    v1 = 0x2a << 16;                                            // 0x001a7e44: lui $v1, 0x2a
    a0 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7e48: lw $a0, 0xf68($at)
    v1 = v1 + 0x11c0;                                           // 0x001a7e4c: addiu $v1, $v1, 0x11c0
    a1 = 0xff;                                                  // 0x001a7e50: addiu $a1, $zero, 0xff
    v1 = v1 + a0;                                               // 0x001a7e58: addu $v1, $v1, $a0
    g_002a11c0 = a1;  // Global at 0x002a11c0                   // 0x001a7e5c: sb $a1, 0($v1)
label_0x1a7e60:
    return;                                                     // 0x001a7e60: jr $ra
    /* nop */                                                   // 0x001a7e64: nop 
}