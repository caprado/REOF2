void func_001b5c60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = (unsigned)a0 >> 8;                                     // 0x001b5c60: srl $v0, $a0, 8
    a1 = v0 & 0xff;                                             // 0x001b5c64: andi $a1, $v0, 0xff
    v0 = (a1 < 0x81) ? 1 : 0;                                   // 0x001b5c68: slti $v0, $a1, 0x81
    if (v0 != 0) goto label_0x1b5c88;                           // 0x001b5c6c: bnez $v0, 0x1b5c88
    a0 = a0 & 0xff;                                             // 0x001b5c70: andi $a0, $a0, 0xff
    at = (a1 < 0xa0) ? 1 : 0;                                   // 0x001b5c74: slti $at, $a1, 0xa0
    if (at == 0) goto label_0x1b5c8c;                           // 0x001b5c78: beqz $at, 0x1b5c8c
    v0 = (a1 < 0xe0) ? 1 : 0;                                   // 0x001b5c7c: slti $v0, $a1, 0xe0
    goto label_0x1b5ca8;                                        // 0x001b5c80: b 0x1b5ca8
    a1 = a1 + -0x81;                                            // 0x001b5c84: addiu $a1, $a1, -0x81
label_0x1b5c88:
    v0 = (a1 < 0xe0) ? 1 : 0;                                   // 0x001b5c88: slti $v0, $a1, 0xe0
label_0x1b5c8c:
    if (v0 != 0) goto label_0x1b5cac;                           // 0x001b5c8c: bnez $v0, 0x1b5cac
    at = (a1 < 0xf0) ? 1 : 0;                                   // 0x001b5c94: slti $at, $a1, 0xf0
    if (at == 0) goto label_0x1b5ca8;                           // 0x001b5c98: beqz $at, 0x1b5ca8
label_0x1b5ca8:
label_0x1b5cac:
    v0 = (v1 < 0x40) ? 1 : 0;                                   // 0x001b5cb0: slti $v0, $v1, 0x40
    if (v0 != 0) goto label_0x1b5cd0;                           // 0x001b5cb4: bnez $v0, 0x1b5cd0
    a1 = a1 << 1;                                               // 0x001b5cb8: sll $a1, $a1, 1
    at = (v1 < 0x7f) ? 1 : 0;                                   // 0x001b5cbc: slti $at, $v1, 0x7f
    if (at == 0) goto label_0x1b5cd4;                           // 0x001b5cc0: beqz $at, 0x1b5cd4
    v0 = (v1 < 0x80) ? 1 : 0;                                   // 0x001b5cc4: slti $v0, $v1, 0x80
    goto label_0x1b5d10;                                        // 0x001b5cc8: b 0x1b5d10
    a0 = a0 + -0x40;                                            // 0x001b5ccc: addiu $a0, $a0, -0x40
label_0x1b5cd0:
    v0 = (v1 < 0x80) ? 1 : 0;                                   // 0x001b5cd0: slti $v0, $v1, 0x80
label_0x1b5cd4:
    if (v0 != 0) goto label_0x1b5cf8;                           // 0x001b5cd4: bnez $v0, 0x1b5cf8
    v0 = (v1 < 0x9f) ? 1 : 0;                                   // 0x001b5cd8: slti $v0, $v1, 0x9f
    at = (v1 < 0x9f) ? 1 : 0;                                   // 0x001b5cdc: slti $at, $v1, 0x9f
    if (at == 0) goto label_0x1b5cf8;                           // 0x001b5ce0: beqz $at, 0x1b5cf8
    /* nop */                                                   // 0x001b5ce4: nop 
    goto label_0x1b5d10;                                        // 0x001b5cf0: b 0x1b5d10
label_0x1b5cf8:
    if (v0 != 0) goto label_0x1b5d10;                           // 0x001b5cf8: bnez $v0, 0x1b5d10
    at = (v1 < 0xfd) ? 1 : 0;                                   // 0x001b5cfc: slti $at, $v1, 0xfd
    if (at == 0) goto label_0x1b5d14;                           // 0x001b5d00: beqz $at, 0x1b5d14
    a0 = a0 + -0x9f;                                            // 0x001b5d08: addiu $a0, $a0, -0x9f
    a1 = a1 + 1;                                                // 0x001b5d0c: addiu $a1, $a1, 1
label_0x1b5d10:
label_0x1b5d14:
    return;                                                     // 0x001b5d34: jr $ra
}