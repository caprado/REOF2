void func_001b3ef0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t4 = 0x30 << 16;                                            // 0x001b3ef0: lui $t4, 0x30
    t3 = 0x30 << 16;                                            // 0x001b3ef4: lui $t3, 0x30
    t4 = t4 + 0x6c00;                                           // 0x001b3ef8: addiu $t4, $t4, 0x6c00
    t3 = t3 + 0x6c10;                                           // 0x001b3efc: addiu $t3, $t3, 0x6c10
label_0x1b3f04:
    v1 = g_00306c10;  // Global at 0x00306c10                   // 0x001b3f04: lh $v1, 0($t3)
    if (v1 == 0) goto label_0x1b3f88;                           // 0x001b3f08: beqz $v1, 0x1b3f88
    /* nop */                                                   // 0x001b3f0c: nop 
    a2 = g_00306c14;  // Global at 0x00306c14                   // 0x001b3f10: lh $a2, 4($t3)
    t2 = t4 + 0x10;                                             // 0x001b3f14: addiu $t2, $t4, 0x10
    v1 = g_00306c18;  // Global at 0x00306c18                   // 0x001b3f18: lbu $v1, 8($t3)
    a3 = g_00306c1b;  // Global at 0x00306c1b                   // 0x001b3f20: lbu $a3, 0xb($t3)
    goto label_0x1b3f7c;                                        // 0x001b3f24: b 0x1b3f7c
    a1 = a2 + v1;                                               // 0x001b3f28: addu $a1, $a2, $v1
label_0x1b3f2c:
    v1 = g_00306c10;  // Global at 0x00306c10                   // 0x001b3f2c: lh $v1, 0($t2)
    if (v1 == 0) goto label_0x1b3f74;                           // 0x001b3f30: beqz $v1, 0x1b3f74
    /* nop */                                                   // 0x001b3f34: nop 
    v1 = g_00306c1b;  // Global at 0x00306c1b                   // 0x001b3f38: lbu $v1, 0xb($t2)
    at = (v1 < a3) ? 1 : 0;                                     // 0x001b3f3c: slt $at, $v1, $a3
    if (at == 0) goto label_0x1b3f74;                           // 0x001b3f40: beqz $at, 0x1b3f74
    /* nop */                                                   // 0x001b3f44: nop 
    a0 = g_00306c14;  // Global at 0x00306c14                   // 0x001b3f48: lh $a0, 4($t2)
    at = (a0 < a1) ? 1 : 0;                                     // 0x001b3f4c: slt $at, $a0, $a1
    if (at == 0) goto label_0x1b3f74;                           // 0x001b3f50: beqz $at, 0x1b3f74
    /* nop */                                                   // 0x001b3f54: nop 
    v1 = g_00306c18;  // Global at 0x00306c18                   // 0x001b3f58: lbu $v1, 8($t2)
    v1 = a0 + v1;                                               // 0x001b3f5c: addu $v1, $a0, $v1
    at = (a2 < v1) ? 1 : 0;                                     // 0x001b3f60: slt $at, $a2, $v1
    if (at == 0) goto label_0x1b3f74;                           // 0x001b3f64: beqz $at, 0x1b3f74
    /* nop */                                                   // 0x001b3f68: nop 
    goto label_0x1b3f88;                                        // 0x001b3f6c: b 0x1b3f88
    g_00306c10 = 0;  // Global at 0x00306c10                    // 0x001b3f70: sh $zero, 0($t3)
label_0x1b3f74:
    t0 = t0 + 1;                                                // 0x001b3f74: addiu $t0, $t0, 1
    t2 = t2 + 0x8c;                                             // 0x001b3f78: addiu $t2, $t2, 0x8c
label_0x1b3f7c:
    v1 = (t0 < 0x20) ? 1 : 0;                                   // 0x001b3f7c: slti $v1, $t0, 0x20
    if (v1 != 0) goto label_0x1b3f2c;                           // 0x001b3f80: bnez $v1, 0x1b3f2c
    /* nop */                                                   // 0x001b3f84: nop 
label_0x1b3f88:
    t1 = t1 + 1;                                                // 0x001b3f88: addiu $t1, $t1, 1
    v1 = (t1 < 0x20) ? 1 : 0;                                   // 0x001b3f8c: slti $v1, $t1, 0x20
    if (v1 != 0) goto label_0x1b3f04;                           // 0x001b3f90: bnez $v1, 0x1b3f04
    t3 = t3 + 0x8c;                                             // 0x001b3f94: addiu $t3, $t3, 0x8c
    return;                                                     // 0x001b3f98: jr $ra
    /* nop */                                                   // 0x001b3f9c: nop 
}