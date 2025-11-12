void func_001b5d40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = (unsigned)a0 >> 8;                                     // 0x001b5d40: srl $v0, $a0, 8
    a2 = v0 & 0xff;                                             // 0x001b5d44: andi $a2, $v0, 0xff
    at = (a2 < 0xa0) ? 1 : 0;                                   // 0x001b5d48: slti $at, $a2, 0xa0
    if (at == 0) goto label_0x1b5d5c;                           // 0x001b5d4c: beqz $at, 0x1b5d5c
    a1 = a0 & 0xff;                                             // 0x001b5d50: andi $a1, $a0, 0xff
    goto label_0x1b5d60;                                        // 0x001b5d54: b 0x1b5d60
    v0 = 0x71;                                                  // 0x001b5d58: addiu $v0, $zero, 0x71
label_0x1b5d5c:
    v0 = 0xb1;                                                  // 0x001b5d5c: addiu $v0, $zero, 0xb1
label_0x1b5d60:
    v1 = v0 & 0xffff;                                           // 0x001b5d60: andi $v1, $v0, 0xffff
    v1 = a2 - v1;                                               // 0x001b5d64: subu $v1, $a2, $v1
    v0 = a1 & 0xffff;                                           // 0x001b5d68: andi $v0, $a1, 0xffff
    a2 = v1 & 0xffff;                                           // 0x001b5d6c: andi $a2, $v1, 0xffff
    at = (v0 < 0x80) ? 1 : 0;                                   // 0x001b5d70: slti $at, $v0, 0x80
    v1 = a2 << 1;                                               // 0x001b5d74: sll $v1, $a2, 1
    v1 = v1 + 1;                                                // 0x001b5d78: addiu $v1, $v1, 1
    if (at != 0) goto label_0x1b5d8c;                           // 0x001b5d7c: bnez $at, 0x1b5d8c
    a0 = v1 & 0xffff;                                           // 0x001b5d80: andi $a0, $v1, 0xffff
    v0 = a1 + -1;                                               // 0x001b5d84: addiu $v0, $a1, -1
    a1 = v0 & 0xffff;                                           // 0x001b5d88: andi $a1, $v0, 0xffff
label_0x1b5d8c:
    v0 = a1 & 0xffff;                                           // 0x001b5d8c: andi $v0, $a1, 0xffff
    v0 = (v0 < 0x9e) ? 1 : 0;                                   // 0x001b5d90: slti $v0, $v0, 0x9e
    if (v0 != 0) goto label_0x1b5db0;                           // 0x001b5d94: bnez $v0, 0x1b5db0
    v0 = a1 + -0x1f;                                            // 0x001b5d98: addiu $v0, $a1, -0x1f
    v1 = a1 + -0x7d;                                            // 0x001b5d9c: addiu $v1, $a1, -0x7d
    v0 = a0 + 1;                                                // 0x001b5da0: addiu $v0, $a0, 1
    a1 = v1 & 0xffff;                                           // 0x001b5da4: andi $a1, $v1, 0xffff
    goto label_0x1b5db4;                                        // 0x001b5da8: b 0x1b5db4
    a0 = v0 & 0xffff;                                           // 0x001b5dac: andi $a0, $v0, 0xffff
label_0x1b5db0:
    a1 = v0 & 0xffff;                                           // 0x001b5db0: andi $a1, $v0, 0xffff
label_0x1b5db4:
    v1 = a0 & 0xffff;                                           // 0x001b5db4: andi $v1, $a0, 0xffff
    v0 = a1 & 0xffff;                                           // 0x001b5db8: andi $v0, $a1, 0xffff
    v1 = v1 << 8;                                               // 0x001b5dbc: sll $v1, $v1, 8
    return;                                                     // 0x001b5dc0: jr $ra
    v0 = v1 | v0;                                               // 0x001b5dc4: or $v0, $v1, $v0
}