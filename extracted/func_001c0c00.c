void func_001c0c00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x31 << 16;                                            // 0x001c0c00: lui $at, 0x31
    v0 = 0x22 << 16;                                            // 0x001c0c04: lui $v0, 0x22
    v1 = g_00316094;  // Global at 0x00316094                   // 0x001c0c08: lw $v1, 0x6094($at)
    v0 = v0 + -0x30e8;                                          // 0x001c0c0c: addiu $v0, $v0, -0x30e8
    v1 = v1 << 2;                                               // 0x001c0c10: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001c0c14: addu $v0, $v0, $v1
    if (a0 == 0) goto label_0x1c0c80;                           // 0x001c0c18: beqz $a0, 0x1c0c80
    a2 = g_0021cf18;  // Global at 0x0021cf18                   // 0x001c0c1c: lw $a2, 0($v0)
    a1 = *(int32_t*)((a0) + 4);                                 // 0x001c0c20: lw $a1, 4($a0)
    goto label_0x1c0c74;                                        // 0x001c0c2c: b 0x1c0c74
    a0 = a0 + 8;                                                // 0x001c0c30: addiu $a0, $a0, 8
label_0x1c0c34:
    if (a1 <= 0) goto label_0x1c0c80;                           // 0x001c0c34: blez $a1, 0x1c0c80
    v0 = a3 << 4;                                               // 0x001c0c38: sll $v0, $a3, 4
    v1 = a2 + v0;                                               // 0x001c0c3c: addu $v1, $a2, $v0
    v0 = g_0021d31f;  // Global at 0x0021d31f                   // 0x001c0c40: lw $v0, 8($v1)
    if (v0 == 0) goto label_0x1c0c70;                           // 0x001c0c44: beqz $v0, 0x1c0c70
    /* nop */                                                   // 0x001c0c48: nop 
    v0 = *(int32_t*)(a0);                                       // 0x001c0c4c: lw $v0, 0($a0)
    a1 = a1 + -1;                                               // 0x001c0c50: addiu $a1, $a1, -1
    g_0021d327 = v0;  // Global at 0x0021d327                   // 0x001c0c54: sw $v0, 0x10($v1)
    v0 = g_0021d327;  // Global at 0x0021d327                   // 0x001c0c58: lw $v0, 0x10($v1)
    v0 = v0 + t0;                                               // 0x001c0c5c: addu $v0, $v0, $t0
    g_0021d327 = v0;  // Global at 0x0021d327                   // 0x001c0c60: sw $v0, 0x10($v1)
    v0 = *(int32_t*)((a0) + 4);                                 // 0x001c0c64: lw $v0, 4($a0)
    g_0021d32b = v0;  // Global at 0x0021d32b                   // 0x001c0c68: sw $v0, 0x14($v1)
    a0 = a0 + 8;                                                // 0x001c0c6c: addiu $a0, $a0, 8
label_0x1c0c70:
    a3 = a3 + 1;                                                // 0x001c0c70: addiu $a3, $a3, 1
label_0x1c0c74:
    v0 = (a3 < 4) ? 1 : 0;                                      // 0x001c0c74: slti $v0, $a3, 4
    if (v0 != 0) goto label_0x1c0c34;                           // 0x001c0c78: bnez $v0, 0x1c0c34
    /* nop */                                                   // 0x001c0c7c: nop 
label_0x1c0c80:
    v0 = a0 << 4;                                               // 0x001c0c8c: sll $v0, $a0, 4
label_0x1c0c90:
    v1 = a2 + v0;                                               // 0x001c0c90: addu $v1, $a2, $v0
    v0 = g_0021d31f;  // Global at 0x0021d31f                   // 0x001c0c94: lw $v0, 8($v1)
    if (v0 == 0) goto label_0x1c0cc0;                           // 0x001c0c98: beqz $v0, 0x1c0cc0
    /* nop */                                                   // 0x001c0c9c: nop 
    v0 = g_0021d32b;  // Global at 0x0021d32b                   // 0x001c0ca0: lw $v0, 0x14($v1)
    v1 = v0 + 0x3ff;                                            // 0x001c0ca4: addiu $v1, $v0, 0x3ff
    if (v1 >= 0) goto label_0x1c0cb8;                           // 0x001c0ca8: bgez $v1, 0x1c0cb8
    v0 = v1 >> 0xa;                                             // 0x001c0cac: sra $v0, $v1, 0xa
    v0 = v1 + 0x3ff;                                            // 0x001c0cb0: addiu $v0, $v1, 0x3ff
    v0 = v0 >> 0xa;                                             // 0x001c0cb4: sra $v0, $v0, 0xa
label_0x1c0cb8:
    a3 = a3 + v0;                                               // 0x001c0cb8: addu $a3, $a3, $v0
    a1 = a1 + 1;                                                // 0x001c0cbc: addiu $a1, $a1, 1
label_0x1c0cc0:
    a0 = a0 + 1;                                                // 0x001c0cc0: addiu $a0, $a0, 1
    v0 = (a0 < 7) ? 1 : 0;                                      // 0x001c0cc4: slti $v0, $a0, 7
    if (v0 != 0) goto label_0x1c0c90;                           // 0x001c0cc8: bnez $v0, 0x1c0c90
    v0 = a0 << 4;                                               // 0x001c0ccc: sll $v0, $a0, 4
    v1 = a1 + 1;                                                // 0x001c0cd0: addiu $v1, $a1, 1
    if (v1 >= 0) goto label_0x1c0ce4;                           // 0x001c0cd4: bgez $v1, 0x1c0ce4
    v0 = v1 >> 1;                                               // 0x001c0cd8: sra $v0, $v1, 1
    v0 = v1 + 1;                                                // 0x001c0cdc: addiu $v0, $v1, 1
    v0 = v0 >> 1;                                               // 0x001c0ce0: sra $v0, $v0, 1
label_0x1c0ce4:
    a3 = a3 + v0;                                               // 0x001c0ce4: addu $a3, $a3, $v0
    v0 = a3 + 2;                                                // 0x001c0ce8: addiu $v0, $a3, 2
    return;                                                     // 0x001c0cec: jr $ra
    *(uint32_t*)((a2) + 0x80) = v0;                             // 0x001c0cf0: sw $v0, 0x80($a2)
}