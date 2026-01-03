/** @category: memory/allocation @status: complete @author: caprado */
void func_001a0c10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001a0c10: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001a0c18: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a0c24: addu.qb $zero, $sp, $s1
    v1 = *(int32_t*)((a0) + 0x18);                              // 0x001a0c30: lw $v1, 0x18($a0)
    v0 = a1 + v1;                                               // 0x001a0c34: addu $v0, $a1, $v1
    v1 = v1 + -1;                                               // 0x001a0c38: addiu $v1, $v1, -1
    v0 = v0 + -1;                                               // 0x001a0c3c: addiu $v0, $v0, -1
    v1 = ~v1;                                                   // 0x001a0c40: not $v1, $v1
    func_001a1310();  // 0x1a12a0                                // 0x001a0c44: jal 0x1a12a0
    s0 = v1 & v0;                                               // 0x001a0c48: and $s0, $v1, $v0
    a3 = 0 | 0xffff;                                            // 0x001a0c50: ori $a3, $zero, 0xffff
    if (s1 != a3) goto label_0x1a0c64;                          // 0x001a0c54: bne $s1, $a3, 0x1a0c64
    /* nop */                                                   // 0x001a0c58: nop 
    goto label_0x1a0ef4;                                        // 0x001a0c5c: b 0x1a0ef4
label_0x1a0c64:
    v0 = *(int32_t*)((s3) + 0x24);                              // 0x001a0c64: lw $v0, 0x24($s3)
    if (v0 != a3) goto label_0x1a0c84;                          // 0x001a0c68: bne $v0, $a3, 0x1a0c84
    v1 = v0 << 4;                                               // 0x001a0c6c: sll $v1, $v0, 4
    func_001a0f10();  // 0x1a0ab0                                // 0x001a0c74: jal 0x1a0ab0
    goto label_0x1a0ef8;                                        // 0x001a0c7c: b 0x1a0ef8
label_0x1a0c84:
    a0 = *(int32_t*)((s3) + 0xc);                               // 0x001a0c84: lw $a0, 0xc($s3)
    v0 = *(int32_t*)((s3) + 8);                                 // 0x001a0c88: lw $v0, 8($s3)
    if (a0 == 0) goto label_0x1a0e68;                           // 0x001a0c8c: beqz $a0, 0x1a0e68
    v1 = v0 + v1;                                               // 0x001a0c90: addu $v1, $v0, $v1
    goto label_0x1a0d38;                                        // 0x001a0c94: b 0x1a0d38
    a0 = *(uint16_t*)((v1) + 0xe);                              // 0x001a0c98: lhu $a0, 0xe($v1)
label_0x1a0c9c:
    a2 = *(int32_t*)(v1);                                       // 0x001a0c9c: lw $a2, 0($v1)
    a0 = a0 & 0xffff;                                           // 0x001a0ca0: andi $a0, $a0, 0xffff
    a1 = *(int32_t*)((v1) + 4);                                 // 0x001a0ca4: lw $a1, 4($v1)
    a0 = a0 << 4;                                               // 0x001a0ca8: sll $a0, $a0, 4
    t1 = v0 + a0;                                               // 0x001a0cac: addu $t1, $v0, $a0
    t0 = *(int32_t*)((s3) + 0x18);                              // 0x001a0cb0: lw $t0, 0x18($s3)
    v1 = *(int32_t*)(t1);                                       // 0x001a0cb4: lw $v1, 0($t1)
    a1 = a2 + a1;                                               // 0x001a0cb8: addu $a1, $a2, $a1
    a0 = t0 + -1;                                               // 0x001a0cbc: addiu $a0, $t0, -1
    a1 = t0 + a1;                                               // 0x001a0cc0: addu $a1, $t0, $a1
    a0 = ~a0;                                                   // 0x001a0cc4: not $a0, $a0
    a1 = a1 + -1;                                               // 0x001a0cc8: addiu $a1, $a1, -1
    t0 = a0 & a1;                                               // 0x001a0ccc: and $t0, $a0, $a1
    v1 = v1 - t0;                                               // 0x001a0cd0: subu $v1, $v1, $t0
    at = ((unsigned)v1 < (unsigned)s0) ? 1 : 0;                 // 0x001a0cd4: sltu $at, $v1, $s0
    if (at != 0) goto label_0x1a0d30;                           // 0x001a0cd8: bnez $at, 0x1a0d30
    a2 = s1 << 4;                                               // 0x001a0cdc: sll $a2, $s1, 4
    v0 = a2 + v0;                                               // 0x001a0ce4: addu $v0, $a2, $v0
    *(uint16_t*)((v0) + 0xa) = 0;                               // 0x001a0cec: sh $zero, 0xa($v0)
    v0 = *(int32_t*)((s3) + 8);                                 // 0x001a0cf0: lw $v0, 8($s3)
    v0 = a2 + v0;                                               // 0x001a0cf4: addu $v0, $a2, $v0
    *(uint32_t*)((v0) + 4) = s2;                                // 0x001a0cf8: sw $s2, 4($v0)
    v0 = *(int32_t*)((s3) + 8);                                 // 0x001a0cfc: lw $v0, 8($s3)
    v1 = *(int32_t*)((s3) + 0x18);                              // 0x001a0d00: lw $v1, 0x18($s3)
    v0 = a2 + v0;                                               // 0x001a0d04: addu $v0, $a2, $v0
    *(uint16_t*)((v0) + 8) = v1;                                // 0x001a0d08: sh $v1, 8($v0)
    v0 = *(int32_t*)((s3) + 8);                                 // 0x001a0d0c: lw $v0, 8($s3)
    v0 = v0 + a2;                                               // 0x001a0d10: addu $v0, $v0, $a2
    *(uint32_t*)(v0) = t0;                                      // 0x001a0d14: sw $t0, 0($v0)
    v0 = *(int32_t*)((s3) + 0x1c);                              // 0x001a0d18: lw $v0, 0x1c($s3)
    v0 = v0 + s2;                                               // 0x001a0d1c: addu $v0, $v0, $s2
    func_001a1440();  // 0x1a1310                                // 0x001a0d20: jal 0x1a1310
    *(uint32_t*)((s3) + 0x1c) = v0;                             // 0x001a0d24: sw $v0, 0x1c($s3)
    goto label_0x1a0ef4;                                        // 0x001a0d28: b 0x1a0ef4
    v0 = s1 + 1;                                                // 0x001a0d2c: addiu $v0, $s1, 1
label_0x1a0d30:
    a0 = *(uint16_t*)((v1) + 0xe);                              // 0x001a0d34: lhu $a0, 0xe($v1)
label_0x1a0d38:
    if (a0 != a3) goto label_0x1a0c9c;                          // 0x001a0d38: bne $a0, $a3, 0x1a0c9c
    /* nop */                                                   // 0x001a0d3c: nop 
    a2 = *(int32_t*)(v1);                                       // 0x001a0d40: lw $a2, 0($v1)
    a1 = *(int32_t*)((v1) + 4);                                 // 0x001a0d44: lw $a1, 4($v1)
    a3 = *(int32_t*)((s3) + 0x18);                              // 0x001a0d48: lw $a3, 0x18($s3)
    v1 = *(int32_t*)((s3) + 0x10);                              // 0x001a0d4c: lw $v1, 0x10($s3)
    a1 = a2 + a1;                                               // 0x001a0d50: addu $a1, $a2, $a1
    a0 = a3 + -1;                                               // 0x001a0d54: addiu $a0, $a3, -1
    a1 = a3 + a1;                                               // 0x001a0d58: addu $a1, $a3, $a1
    a0 = ~a0;                                                   // 0x001a0d5c: not $a0, $a0
    a1 = a1 + -1;                                               // 0x001a0d60: addiu $a1, $a1, -1
    a2 = a0 & a1;                                               // 0x001a0d64: and $a2, $a0, $a1
    v1 = v1 - a2;                                               // 0x001a0d68: subu $v1, $v1, $a2
    at = ((unsigned)v1 < (unsigned)s0) ? 1 : 0;                 // 0x001a0d6c: sltu $at, $v1, $s0
    if (at != 0) goto label_0x1a0eec;                           // 0x001a0d70: bnez $at, 0x1a0eec
    a3 = s1 << 4;                                               // 0x001a0d78: sll $a3, $s1, 4
    v0 = a3 + v0;                                               // 0x001a0d80: addu $v0, $a3, $v0
    *(uint16_t*)((v0) + 0xa) = 0;                               // 0x001a0d88: sh $zero, 0xa($v0)
    v0 = *(int32_t*)((s3) + 8);                                 // 0x001a0d8c: lw $v0, 8($s3)
    v0 = a3 + v0;                                               // 0x001a0d90: addu $v0, $a3, $v0
    *(uint32_t*)((v0) + 4) = s2;                                // 0x001a0d94: sw $s2, 4($v0)
    v0 = *(int32_t*)((s3) + 8);                                 // 0x001a0d98: lw $v0, 8($s3)
    v1 = *(int32_t*)((s3) + 0x18);                              // 0x001a0d9c: lw $v1, 0x18($s3)
    v0 = a3 + v0;                                               // 0x001a0da0: addu $v0, $a3, $v0
    *(uint16_t*)((v0) + 8) = v1;                                // 0x001a0da4: sh $v1, 8($v0)
    v0 = *(int32_t*)((s3) + 8);                                 // 0x001a0da8: lw $v0, 8($s3)
    v0 = v0 + a3;                                               // 0x001a0dac: addu $v0, $v0, $a3
    *(uint32_t*)(v0) = a2;                                      // 0x001a0db0: sw $a2, 0($v0)
    v0 = *(int32_t*)((s3) + 0x1c);                              // 0x001a0db4: lw $v0, 0x1c($s3)
    v0 = v0 + s2;                                               // 0x001a0db8: addu $v0, $v0, $s2
    func_001a1440();  // 0x1a1310                                // 0x001a0dbc: jal 0x1a1310
    *(uint32_t*)((s3) + 0x1c) = v0;                             // 0x001a0dc0: sw $v0, 0x1c($s3)
    goto label_0x1a0ef4;                                        // 0x001a0dc4: b 0x1a0ef4
    v0 = s1 + 1;                                                // 0x001a0dc8: addiu $v0, $s1, 1
label_0x1a0dcc:
    t1 = *(int32_t*)((s3) + 0x18);                              // 0x001a0dcc: lw $t1, 0x18($s3)
    a1 = a0 << 4;                                               // 0x001a0dd0: sll $a1, $a0, 4
    t0 = v0 + a1;                                               // 0x001a0dd4: addu $t0, $v0, $a1
    a0 = *(int32_t*)(v1);                                       // 0x001a0dd8: lw $a0, 0($v1)
    a3 = *(int32_t*)(t0);                                       // 0x001a0ddc: lw $a3, 0($t0)
    a2 = *(int32_t*)((t0) + 4);                                 // 0x001a0de0: lw $a2, 4($t0)
    a1 = t1 + -1;                                               // 0x001a0de4: addiu $a1, $t1, -1
    a1 = ~a1;                                                   // 0x001a0de8: not $a1, $a1
    a2 = a3 + a2;                                               // 0x001a0dec: addu $a2, $a3, $a2
    a2 = t1 + a2;                                               // 0x001a0df0: addu $a2, $t1, $a2
    a2 = a2 + -1;                                               // 0x001a0df4: addiu $a2, $a2, -1
    a1 = a1 & a2;                                               // 0x001a0df8: and $a1, $a1, $a2
    a0 = a0 - a1;                                               // 0x001a0dfc: subu $a0, $a0, $a1
    at = ((unsigned)a0 < (unsigned)s0) ? 1 : 0;                 // 0x001a0e00: sltu $at, $a0, $s0
    if (at != 0) goto label_0x1a0e64;                           // 0x001a0e04: bnez $at, 0x1a0e64
    a3 = s1 << 4;                                               // 0x001a0e08: sll $a3, $s1, 4
    v0 = a3 + v0;                                               // 0x001a0e10: addu $v0, $a3, $v0
    *(uint16_t*)((v0) + 0xa) = 0;                               // 0x001a0e18: sh $zero, 0xa($v0)
    v0 = *(int32_t*)((s3) + 8);                                 // 0x001a0e1c: lw $v0, 8($s3)
    v0 = a3 + v0;                                               // 0x001a0e20: addu $v0, $a3, $v0
    *(uint32_t*)((v0) + 4) = s2;                                // 0x001a0e24: sw $s2, 4($v0)
    v0 = *(int32_t*)((s3) + 8);                                 // 0x001a0e28: lw $v0, 8($s3)
    a2 = *(int32_t*)((s3) + 0x18);                              // 0x001a0e2c: lw $a2, 0x18($s3)
    v0 = a3 + v0;                                               // 0x001a0e30: addu $v0, $a3, $v0
    *(uint16_t*)((v0) + 8) = a2;                                // 0x001a0e34: sh $a2, 8($v0)
    v1 = *(int32_t*)(v1);                                       // 0x001a0e38: lw $v1, 0($v1)
    v0 = *(int32_t*)((s3) + 8);                                 // 0x001a0e3c: lw $v0, 8($s3)
    v1 = v1 - s0;                                               // 0x001a0e40: subu $v1, $v1, $s0
    v0 = v0 + a3;                                               // 0x001a0e44: addu $v0, $v0, $a3
    *(uint32_t*)(v0) = v1;                                      // 0x001a0e48: sw $v1, 0($v0)
    v0 = *(int32_t*)((s3) + 0x1c);                              // 0x001a0e4c: lw $v0, 0x1c($s3)
    v0 = v0 + s2;                                               // 0x001a0e50: addu $v0, $v0, $s2
    func_001a1440();  // 0x1a1310                                // 0x001a0e54: jal 0x1a1310
    *(uint32_t*)((s3) + 0x1c) = v0;                             // 0x001a0e58: sw $v0, 0x1c($s3)
    goto label_0x1a0ef4;                                        // 0x001a0e5c: b 0x1a0ef4
    v0 = s1 + 1;                                                // 0x001a0e60: addiu $v0, $s1, 1
label_0x1a0e64:
label_0x1a0e68:
    a1 = *(uint16_t*)((v1) + 0xe);                              // 0x001a0e68: lhu $a1, 0xe($v1)
    a0 = 0 | 0xffff;                                            // 0x001a0e6c: ori $a0, $zero, 0xffff
    if (a1 != a0) goto label_0x1a0dcc;                          // 0x001a0e70: bne $a1, $a0, 0x1a0dcc
    a0 = a1 & 0xffff;                                           // 0x001a0e74: andi $a0, $a1, 0xffff
    a1 = *(int32_t*)(v1);                                       // 0x001a0e78: lw $a1, 0($v1)
    a0 = *(int32_t*)((s3) + 0x10);                              // 0x001a0e7c: lw $a0, 0x10($s3)
    a0 = a1 - a0;                                               // 0x001a0e80: subu $a0, $a1, $a0
    at = ((unsigned)a0 < (unsigned)s0) ? 1 : 0;                 // 0x001a0e84: sltu $at, $a0, $s0
    if (at != 0) goto label_0x1a0ee8;                           // 0x001a0e88: bnez $at, 0x1a0ee8
    a3 = s1 << 4;                                               // 0x001a0e8c: sll $a3, $s1, 4
    v0 = a3 + v0;                                               // 0x001a0e94: addu $v0, $a3, $v0
    *(uint16_t*)((v0) + 0xa) = 0;                               // 0x001a0e9c: sh $zero, 0xa($v0)
    v0 = *(int32_t*)((s3) + 8);                                 // 0x001a0ea0: lw $v0, 8($s3)
    v0 = a3 + v0;                                               // 0x001a0ea4: addu $v0, $a3, $v0
    *(uint32_t*)((v0) + 4) = s2;                                // 0x001a0ea8: sw $s2, 4($v0)
    v0 = *(int32_t*)((s3) + 8);                                 // 0x001a0eac: lw $v0, 8($s3)
    a2 = *(int32_t*)((s3) + 0x18);                              // 0x001a0eb0: lw $a2, 0x18($s3)
    v0 = a3 + v0;                                               // 0x001a0eb4: addu $v0, $a3, $v0
    *(uint16_t*)((v0) + 8) = a2;                                // 0x001a0eb8: sh $a2, 8($v0)
    v1 = *(int32_t*)(v1);                                       // 0x001a0ebc: lw $v1, 0($v1)
    v0 = *(int32_t*)((s3) + 8);                                 // 0x001a0ec0: lw $v0, 8($s3)
    v1 = v1 - s0;                                               // 0x001a0ec4: subu $v1, $v1, $s0
    v0 = v0 + a3;                                               // 0x001a0ec8: addu $v0, $v0, $a3
    *(uint32_t*)(v0) = v1;                                      // 0x001a0ecc: sw $v1, 0($v0)
    v0 = *(int32_t*)((s3) + 0x1c);                              // 0x001a0ed0: lw $v0, 0x1c($s3)
    v0 = v0 + s2;                                               // 0x001a0ed4: addu $v0, $v0, $s2
    func_001a1440();  // 0x1a1310                                // 0x001a0ed8: jal 0x1a1310
    *(uint32_t*)((s3) + 0x1c) = v0;                             // 0x001a0edc: sw $v0, 0x1c($s3)
    goto label_0x1a0ef4;                                        // 0x001a0ee0: b 0x1a0ef4
    v0 = s1 + 1;                                                // 0x001a0ee4: addiu $v0, $s1, 1
label_0x1a0ee8:
label_0x1a0eec:
    func_001a0f10();  // 0x1a0ab0                                // 0x001a0eec: jal 0x1a0ab0
label_0x1a0ef4:
label_0x1a0ef8:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001a0efc: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a0f00: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a0f04: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a0f08: jr $ra
    sp = sp + 0x50;                                             // 0x001a0f0c: addiu $sp, $sp, 0x50
}