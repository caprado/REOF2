void func_00123c80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00123c80: addiu $sp, $sp, -0x20
    v0 = 1;                                                     // 0x00123c84: addiu $v0, $zero, 1
    s1 = s0 + 0x48;                                             // 0x00123c94: addiu $s1, $s0, 0x48
    v1 = *(int32_t*)((s0) + 4);                                 // 0x00123ca0: lw $v1, 4($s0)
    if (v1 != v0) goto label_0x123dd8;                          // 0x00123ca4: bne $v1, $v0, 0x123dd8
    s2 = *(int32_t*)(s1);                                       // 0x00123ca8: lw $s2, 0($s1)
    func_00134c60();  // 0x134c58                                // 0x00123cac: jal 0x134c58
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00123cb0: lw $a0, 8($s0)
    /* bnezl $v0, 0x123dd8 */                                   // 0x00123cb4: bnezl $v0, 0x123dd8
    v1 = *(int32_t*)((s0) + 4);                                 // 0x00123cb8: lw $v1, 4($s0)
    a0 = *(int32_t*)((s0) + 0x7c);                              // 0x00123cbc: lw $a0, 0x7c($s0)
    a1 = s0 + 0x68;                                             // 0x00123cc0: addiu $a1, $s0, 0x68
    v0 = *(int32_t*)((s0) + 0x78);                              // 0x00123cc4: lw $v0, 0x78($s0)
    a2 = s0 + 0x6c;                                             // 0x00123cc8: addiu $a2, $s0, 0x6c
    /* call function at address in v0 */                        // 0x00123ccc: jalr $v0
    a3 = s0 + 0x70;                                             // 0x00123cd0: addiu $a3, $s0, 0x70
    a0 = *(int32_t*)((s1) + 0x18);                              // 0x00123cd4: lw $a0, 0x18($s1)
    a3 = *(int32_t*)((s1) + 0x20);                              // 0x00123cd8: lw $a3, 0x20($s1)
    a2 = 2;                                                     // 0x00123cdc: addiu $a2, $zero, 2
    v1 = *(int32_t*)((s1) + 0x24);                              // 0x00123ce0: lw $v1, 0x24($s1)
    t1 = a0 - a3;                                               // 0x00123ce4: subu $t1, $a0, $a3
    a0 = *(int8_t*)((s0) + 0xe);                                // 0x00123ce8: lb $a0, 0xe($s0)
    v0 = (v1 < t1) ? 1 : 0;                                     // 0x00123cec: slt $v0, $v1, $t1
    a1 = *(int32_t*)((s1) + 4);                                 // 0x00123cf0: lw $a1, 4($s1)
    if (v0 != 0) t1 = v1;                                       // 0x00123cf4: movn $t1, $v1, $v0
    v1 = a3 << 1;                                               // 0x00123cf8: sll $v1, $a3, 1
    t3 = *(int32_t*)((s1) + 0x14);                              // 0x00123cfc: lw $t3, 0x14($s1)
    v0 = (a1 < t1) ? 1 : 0;                                     // 0x00123d00: slt $v0, $a1, $t1
    if (v0 != 0) t1 = a1;                                       // 0x00123d04: movn $t1, $a1, $v0
    t2 = t3 + v1;                                               // 0x00123d08: addu $t2, $t3, $v1
    if (a0 != a2) goto label_0x123d80;                          // 0x00123d0c: bne $a0, $a2, 0x123d80
    v1 = *(uint8_t*)((s0) + 0xe);                               // 0x00123d10: lbu $v1, 0xe($s0)
    v0 = *(int32_t*)((s1) + 0x1c);                              // 0x00123d14: lw $v0, 0x1c($s1)
    v0 = v0 + a3;                                               // 0x00123d1c: addu $v0, $v0, $a3
    v0 = v0 << 1;                                               // 0x00123d20: sll $v0, $v0, 1
    if (t1 <= 0) goto label_0x123db8;                           // 0x00123d24: blez $t1, 0x123db8
    t3 = t3 + v0;                                               // 0x00123d28: addu $t3, $t3, $v0
label_0x123d30:
    v0 = *(uint16_t*)(a3);                                      // 0x00123d30: lhu $v0, 0($a3)
    a0 = t0 << 1;                                               // 0x00123d34: sll $a0, $t0, 1
    a1 = a0 + t2;                                               // 0x00123d38: addu $a1, $a0, $t2
    a0 = a0 + t3;                                               // 0x00123d3c: addu $a0, $a0, $t3
    v1 = v0 << 8;                                               // 0x00123d40: sll $v1, $v0, 8
    v0 = (unsigned)v0 >> 8;                                     // 0x00123d44: srl $v0, $v0, 8
    v0 = v0 | v1;                                               // 0x00123d48: or $v0, $v0, $v1
    t0 = t0 + 1;                                                // 0x00123d4c: addiu $t0, $t0, 1
    *(uint16_t*)(a1) = v0;                                      // 0x00123d50: sh $v0, 0($a1)
    a2 = (t0 < t1) ? 1 : 0;                                     // 0x00123d54: slt $a2, $t0, $t1
    v0 = *(uint16_t*)((a3) + 2);                                // 0x00123d58: lhu $v0, 2($a3)
    a3 = a3 + 4;                                                // 0x00123d5c: addiu $a3, $a3, 4
    v1 = v0 << 8;                                               // 0x00123d60: sll $v1, $v0, 8
    v0 = (unsigned)v0 >> 8;                                     // 0x00123d64: srl $v0, $v0, 8
    v0 = v0 | v1;                                               // 0x00123d68: or $v0, $v0, $v1
    if (a2 != 0) goto label_0x123d30;                           // 0x00123d6c: bnez $a2, 0x123d30
    *(uint16_t*)(a0) = v0;                                      // 0x00123d70: sh $v0, 0($a0)
    goto label_0x123db8;                                        // 0x00123d74: b 0x123db8
    v1 = *(uint8_t*)((s0) + 0xe);                               // 0x00123d78: lbu $v1, 0xe($s0)
    /* nop */                                                   // 0x00123d7c: nop 
label_0x123d80:
    if (t1 <= 0) goto label_0x123db8;                           // 0x00123d80: blez $t1, 0x123db8
label_0x123d88:
    a0 = t0 << 1;                                               // 0x00123d88: sll $a0, $t0, 1
    t0 = t0 + 1;                                                // 0x00123d8c: addiu $t0, $t0, 1
    v0 = a0 + s2;                                               // 0x00123d90: addu $v0, $a0, $s2
    a0 = a0 + t2;                                               // 0x00123d94: addu $a0, $a0, $t2
    v0 = *(uint16_t*)(v0);                                      // 0x00123d98: lhu $v0, 0($v0)
    a1 = (t0 < t1) ? 1 : 0;                                     // 0x00123d9c: slt $a1, $t0, $t1
    v1 = v0 << 8;                                               // 0x00123da0: sll $v1, $v0, 8
    v0 = (unsigned)v0 >> 8;                                     // 0x00123da4: srl $v0, $v0, 8
    v0 = v0 | v1;                                               // 0x00123da8: or $v0, $v0, $v1
    if (a1 != 0) goto label_0x123d88;                           // 0x00123dac: bnez $a1, 0x123d88
    *(uint16_t*)(a0) = v0;                                      // 0x00123db0: sh $v0, 0($a0)
    v1 = *(uint8_t*)((s0) + 0xe);                               // 0x00123db4: lbu $v1, 0xe($s0)
label_0x123db8:
    v0 = v1 << 0x18;                                            // 0x00123db8: sll $v0, $v1, 0x18
    v1 = 2;                                                     // 0x00123dbc: addiu $v1, $zero, 2
    v0 = v0 >> 0x18;                                            // 0x00123dc0: sra $v0, $v0, 0x18
    *(uint32_t*)((s0) + 4) = v1;                                // 0x00123dc4: sw $v1, 4($s0)
    /* multiply: t1 * v0 -> hi:lo */                            // 0x00123dc8: mult $ac2, $t1, $v0
    *(uint32_t*)((s0) + 0x90) = t1;                             // 0x00123dcc: sw $t1, 0x90($s0)
    v0 = v0 << 1;                                               // 0x00123dd0: sll $v0, $v0, 1
    *(uint32_t*)((s0) + 0x94) = v0;                             // 0x00123dd4: sw $v0, 0x94($s0)
label_0x123dd8:
    v0 = 2;                                                     // 0x00123dd8: addiu $v0, $zero, 2
    if (v1 != v0) goto label_0x123e04;                          // 0x00123ddc: bnel $v1, $v0, 0x123e04
    v1 = *(int32_t*)((s0) + 0x80);                              // 0x00123de4: lw $v1, 0x80($s0)
    a0 = *(int32_t*)((s0) + 0x84);                              // 0x00123de8: lw $a0, 0x84($s0)
    a1 = *(int32_t*)((s0) + 0x94);                              // 0x00123dec: lw $a1, 0x94($s0)
    /* call function at address in v1 */                        // 0x00123df0: jalr $v1
    a2 = *(int32_t*)((s0) + 0x90);                              // 0x00123df4: lw $a2, 0x90($s0)
    v0 = 3;                                                     // 0x00123df8: addiu $v0, $zero, 3
    *(uint32_t*)((s0) + 4) = v0;                                // 0x00123dfc: sw $v0, 4($s0)
label_0x123e04:
    return;                                                     // 0x00123e10: jr $ra
    sp = sp + 0x20;                                             // 0x00123e14: addiu $sp, $sp, 0x20
}