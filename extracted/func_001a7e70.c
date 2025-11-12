void func_001a7e70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = (a1 < a2) ? 1 : 0;                                     // 0x001a7e70: slt $at, $a1, $a2
    if (at == 0) goto label_0x1a7e88;                           // 0x001a7e74: beqz $at, 0x1a7e88
    v0 = -1;                                                    // 0x001a7e78: addiu $v0, $zero, -1
    at = (a1 < 5) ? 1 : 0;                                      // 0x001a7e7c: slti $at, $a1, 5
    if (at != 0) goto label_0x1a7e90;                           // 0x001a7e80: bnez $at, 0x1a7e90
    at = 0x2a << 16;                                            // 0x001a7e84: lui $at, 0x2a
label_0x1a7e88:
    goto label_0x1a7ef0;                                        // 0x001a7e88: b 0x1a7ef0
    /* nop */                                                   // 0x001a7e8c: nop 
label_0x1a7e90:
    v0 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7e90: lw $v0, 0xf68($at)
    v0 = v0 + a2;                                               // 0x001a7e94: addu $v0, $v0, $a2
    v0 = (v0 < 0x200) ? 1 : 0;                                  // 0x001a7e98: slti $v0, $v0, 0x200
    if (v0 != 0) goto label_0x1a7eac;                           // 0x001a7e9c: bnez $v0, 0x1a7eac
    v1 = 0x2a << 16;                                            // 0x001a7ea0: lui $v1, 0x2a
    goto label_0x1a7ef0;                                        // 0x001a7ea4: b 0x1a7ef0
    v0 = -1;                                                    // 0x001a7ea8: addiu $v0, $zero, -1
label_0x1a7eac:
    a3 = 0x18;                                                  // 0x001a7eac: addiu $a3, $zero, 0x18
    goto label_0x1a7ee4;                                        // 0x001a7eb0: b 0x1a7ee4
    v1 = v1 + 0x11c0;                                           // 0x001a7eb4: addiu $v1, $v1, 0x11c0
label_0x1a7eb8:
    a2 = (unsigned)a0 >> a3;                                    // 0x001a7eb8: srlv $a2, $a0, $a3
    v0 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7ebc: lw $v0, 0xf68($at)
    a3 = a3 + -8;                                               // 0x001a7ec0: addiu $a3, $a3, -8
    a1 = a1 + -1;                                               // 0x001a7ec4: addiu $a1, $a1, -1
    v0 = v1 + v0;                                               // 0x001a7ec8: addu $v0, $v1, $v0
    at = 0x2a << 16;                                            // 0x001a7ecc: lui $at, 0x2a
    *(uint8_t*)(v0) = a2;                                       // 0x001a7ed0: sb $a2, 0($v0)
    v0 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7ed4: lw $v0, 0xf68($at)
    v0 = v0 + 1;                                                // 0x001a7ed8: addiu $v0, $v0, 1
    at = 0x2a << 16;                                            // 0x001a7edc: lui $at, 0x2a
    g_002a0f68 = v0;  // Global at 0x002a0f68                   // 0x001a7ee0: sw $v0, 0xf68($at)
label_0x1a7ee4:
    if (a1 > 0) goto label_0x1a7eb8;                            // 0x001a7ee4: bgtz $a1, 0x1a7eb8
    at = 0x2a << 16;                                            // 0x001a7ee8: lui $at, 0x2a
label_0x1a7ef0:
    return;                                                     // 0x001a7ef0: jr $ra
    /* nop */                                                   // 0x001a7ef4: nop 
}