void func_00159c70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00159c70: addiu $sp, $sp, -0x40
    v0 = 2;                                                     // 0x00159c74: addiu $v0, $zero, 2
    a2 = 0x7fff << 16;                                          // 0x00159c7c: lui $a2, 0x7fff
    s3 = s1 + 0x348;                                            // 0x00159c94: addiu $s3, $s1, 0x348
    s0 = s1 + 0x1d0;                                            // 0x00159c9c: addiu $s0, $s1, 0x1d0
    *(uint32_t*)((s1) + 0x384) = v0;                            // 0x00159ca0: sw $v0, 0x384($s1)
    a1 = 1;                                                     // 0x00159ca4: addiu $a1, $zero, 1
    v1 = *(int32_t*)((s0) + 0x30);                              // 0x00159ca8: lw $v1, 0x30($s0)
    a2 = a2 | 0xffff;                                           // 0x00159cac: ori $a2, $a2, 0xffff
    a0 = *(int32_t*)(s2);                                       // 0x00159cb0: lw $a0, 0($s2)
    v1 = v1 + 1;                                                // 0x00159cb8: addiu $v1, $v1, 1
    v0 = *(int32_t*)((a0) + 0x18);                              // 0x00159cbc: lw $v0, 0x18($a0)
    /* call function at address in v0 */                        // 0x00159cc4: jalr $v0
    *(uint32_t*)((s0) + 0x30) = v1;                             // 0x00159cc8: sw $v1, 0x30($s0)
    v1 = *(int32_t*)(s3);                                       // 0x00159ccc: lw $v1, 0($s3)
    v0 = -4;                                                    // 0x00159cd0: addiu $v0, $zero, -4
    t2 = v1 & v0;                                               // 0x00159cd4: and $t2, $v1, $v0
    v1 = v1 - t2;                                               // 0x00159cd8: subu $v1, $v1, $t2
    t2 = t2 + 4;                                                // 0x00159cdc: addiu $t2, $t2, 4
    t1 = *(int8_t*)(t2);                                        // 0x00159ce0: lb $t1, 0($t2)
    t2 = t2 + 1;                                                // 0x00159ce4: addiu $t2, $t2, 1
    v0 = *(uint8_t*)(t2);                                       // 0x00159ce8: lbu $v0, 0($t2)
    t2 = t2 + 1;                                                // 0x00159cec: addiu $t2, $t2, 1
    t1 = t1 << 8;                                               // 0x00159cf0: sll $t1, $t1, 8
    a0 = *(uint8_t*)(t2);                                       // 0x00159cf4: lbu $a0, 0($t2)
    t1 = t1 | v0;                                               // 0x00159cf8: or $t1, $t1, $v0
    t2 = t2 + 1;                                                // 0x00159cfc: addiu $t2, $t2, 1
    t1 = t1 << 8;                                               // 0x00159d00: sll $t1, $t1, 8
    v0 = *(uint8_t*)(t2);                                       // 0x00159d04: lbu $v0, 0($t2)
    t3 = v1 << 3;                                               // 0x00159d08: sll $t3, $v1, 3
    t1 = t1 | a0;                                               // 0x00159d0c: or $t1, $t1, $a0
    t1 = t1 << 8;                                               // 0x00159d10: sll $t1, $t1, 8
    v1 = (t3 < 0x20) ? 1 : 0;                                   // 0x00159d14: slti $v1, $t3, 0x20
    t1 = t1 | v0;                                               // 0x00159d18: or $t1, $t1, $v0
    if (v1 != 0) goto label_0x159d60;                           // 0x00159d1c: bnez $v1, 0x159d60
    t2 = t2 + 1;                                                // 0x00159d20: addiu $t2, $t2, 1
    t1 = *(int8_t*)(t2);                                        // 0x00159d24: lb $t1, 0($t2)
    t2 = t2 + 1;                                                // 0x00159d28: addiu $t2, $t2, 1
    v0 = *(uint8_t*)(t2);                                       // 0x00159d2c: lbu $v0, 0($t2)
    t2 = t2 + 1;                                                // 0x00159d30: addiu $t2, $t2, 1
    t1 = t1 << 8;                                               // 0x00159d34: sll $t1, $t1, 8
    v1 = *(uint8_t*)(t2);                                       // 0x00159d38: lbu $v1, 0($t2)
    t1 = t1 | v0;                                               // 0x00159d3c: or $t1, $t1, $v0
    t2 = t2 + 1;                                                // 0x00159d40: addiu $t2, $t2, 1
    t1 = t1 << 8;                                               // 0x00159d44: sll $t1, $t1, 8
    v0 = *(uint8_t*)(t2);                                       // 0x00159d48: lbu $v0, 0($t2)
    t1 = t1 | v1;                                               // 0x00159d4c: or $t1, $t1, $v1
    t3 = t3 + -0x20;                                            // 0x00159d50: addiu $t3, $t3, -0x20
    t1 = t1 << 8;                                               // 0x00159d54: sll $t1, $t1, 8
    t2 = t2 + 1;                                                // 0x00159d58: addiu $t2, $t2, 1
    t1 = t1 | v0;                                               // 0x00159d5c: or $t1, $t1, $v0
label_0x159d60:
    v1 = t1 << t3;                                              // 0x00159d60: sllv $v1, $t1, $t3
    v0 = t3 ^ 0;                                                // 0x00159d64: xori $v0, $t3, 0
    t1 = *(int8_t*)(t2);                                        // 0x00159d6c: lb $t1, 0($t2)
    t2 = t2 + 1;                                                // 0x00159d70: addiu $t2, $t2, 1
    if (v0 != 0) t4 = v1;                                       // 0x00159d74: movn $t4, $v1, $v0
    v0 = *(uint8_t*)(t2);                                       // 0x00159d78: lbu $v0, 0($t2)
    t2 = t2 + 1;                                                // 0x00159d7c: addiu $t2, $t2, 1
    t1 = t1 << 8;                                               // 0x00159d80: sll $t1, $t1, 8
    v1 = *(uint8_t*)(t2);                                       // 0x00159d84: lbu $v1, 0($t2)
    t1 = t1 | v0;                                               // 0x00159d88: or $t1, $t1, $v0
    t2 = t2 + 1;                                                // 0x00159d8c: addiu $t2, $t2, 1
    t1 = t1 << 8;                                               // 0x00159d90: sll $t1, $t1, 8
    v0 = *(uint8_t*)(t2);                                       // 0x00159d94: lbu $v0, 0($t2)
    t1 = t1 | v1;                                               // 0x00159d98: or $t1, $t1, $v1
    a0 = (t3 < 7) ? 1 : 0;                                      // 0x00159d9c: slti $a0, $t3, 7
    t1 = t1 << 8;                                               // 0x00159da0: sll $t1, $t1, 8
    t2 = t2 + 1;                                                // 0x00159da4: addiu $t2, $t2, 1
    if (a0 != 0) goto label_0x159e20;                           // 0x00159da8: bnez $a0, 0x159e20
    t1 = t1 | v0;                                               // 0x00159dac: or $t1, $t1, $v0
    t3 = t3 + -7;                                               // 0x00159db0: addiu $t3, $t3, -7
    if (t3 == 0) goto label_0x159dd8;                           // 0x00159db4: beqz $t3, 0x159dd8
    v0 = 0x19;                                                  // 0x00159db8: addiu $v0, $zero, 0x19
    v0 = v0 - t3;                                               // 0x00159dbc: subu $v0, $v0, $t3
    v0 = (unsigned)t1 >> v0;                                    // 0x00159dc0: srlv $v0, $t1, $v0
    t4 = t4 | v0;                                               // 0x00159dc4: or $t4, $t4, $v0
    a0 = (unsigned)t4 >> 7;                                     // 0x00159dc8: srl $a0, $t4, 7
    goto label_0x159de0;                                        // 0x00159dcc: b 0x159de0
    t4 = t1 << t3;                                              // 0x00159dd0: sllv $t4, $t1, $t3
    /* nop */                                                   // 0x00159dd4: nop 
label_0x159dd8:
    a0 = (unsigned)t4 >> 7;                                     // 0x00159dd8: srl $a0, $t4, 7
label_0x159de0:
    t1 = *(int8_t*)(t2);                                        // 0x00159de0: lb $t1, 0($t2)
    t2 = t2 + 1;                                                // 0x00159de4: addiu $t2, $t2, 1
    v0 = *(uint8_t*)(t2);                                       // 0x00159de8: lbu $v0, 0($t2)
    t2 = t2 + 1;                                                // 0x00159dec: addiu $t2, $t2, 1
    t1 = t1 << 8;                                               // 0x00159df0: sll $t1, $t1, 8
    v1 = *(uint8_t*)(t2);                                       // 0x00159df4: lbu $v1, 0($t2)
    t1 = t1 | v0;                                               // 0x00159df8: or $t1, $t1, $v0
    t2 = t2 + 1;                                                // 0x00159dfc: addiu $t2, $t2, 1
    t1 = t1 << 8;                                               // 0x00159e00: sll $t1, $t1, 8
    v0 = *(uint8_t*)(t2);                                       // 0x00159e04: lbu $v0, 0($t2)
    t1 = t1 | v1;                                               // 0x00159e08: or $t1, $t1, $v1
    t2 = t2 + 1;                                                // 0x00159e0c: addiu $t2, $t2, 1
    t1 = t1 << 8;                                               // 0x00159e10: sll $t1, $t1, 8
    goto label_0x159e2c;                                        // 0x00159e14: b 0x159e2c
    t1 = t1 | v0;                                               // 0x00159e18: or $t1, $t1, $v0
    /* nop */                                                   // 0x00159e1c: nop 
label_0x159e20:
    a0 = (unsigned)t4 >> 7;                                     // 0x00159e20: srl $a0, $t4, 7
    t4 = t4 << 0x19;                                            // 0x00159e24: sll $t4, $t4, 0x19
    t3 = t3 + 0x19;                                             // 0x00159e28: addiu $t3, $t3, 0x19
label_0x159e2c:
    t0 = a0 & 0x3f;                                             // 0x00159e2c: andi $t0, $a0, 0x3f
    a0 = (unsigned)a0 >> 6;                                     // 0x00159e30: srl $a0, $a0, 6
    a3 = a0 & 0x3f;                                             // 0x00159e34: andi $a3, $a0, 0x3f
    a0 = (unsigned)a0 >> 7;                                     // 0x00159e38: srl $a0, $a0, 7
    a2 = a0 & 0x3f;                                             // 0x00159e3c: andi $a2, $a0, 0x3f
    a0 = (unsigned)a0 >> 6;                                     // 0x00159e40: srl $a0, $a0, 6
    v0 = (unsigned)a0 >> 5;                                     // 0x00159e44: srl $v0, $a0, 5
    v1 = a0 & 0x1f;                                             // 0x00159e48: andi $v1, $a0, 0x1f
    a1 = 0x1f;                                                  // 0x00159e4c: addiu $a1, $zero, 0x1f
    a0 = (unsigned)t4 >> 0x1f;                                  // 0x00159e50: srl $a0, $t4, 0x1f
    *(uint32_t*)((s0) + 0x1c) = v0;                             // 0x00159e54: sw $v0, 0x1c($s0)
    *(uint32_t*)((s0) + 0x2c) = t0;                             // 0x00159e58: sw $t0, 0x2c($s0)
    *(uint32_t*)((s0) + 0x28) = a3;                             // 0x00159e5c: sw $a3, 0x28($s0)
    *(uint32_t*)((s0) + 0x24) = a2;                             // 0x00159e60: sw $a2, 0x24($s0)
    *(uint32_t*)((s0) + 0x20) = v1;                             // 0x00159e64: sw $v1, 0x20($s0)
    if (t3 != a1) goto label_0x159e80;                          // 0x00159e68: bne $t3, $a1, 0x159e80
    *(uint32_t*)((s1) + 0x288) = a0;                            // 0x00159e6c: sw $a0, 0x288($s1)
    goto label_0x159e88;                                        // 0x00159e78: b 0x159e88
    t2 = t2 + 4;                                                // 0x00159e7c: addiu $t2, $t2, 4
label_0x159e80:
    t3 = t3 + 1;                                                // 0x00159e80: addiu $t3, $t3, 1
    t4 = t4 << 1;                                               // 0x00159e84: sll $t4, $t4, 1
label_0x159e88:
    v0 = (unsigned)t4 >> 0x1f;                                  // 0x00159e88: srl $v0, $t4, 0x1f
    v1 = 0x1f;                                                  // 0x00159e8c: addiu $v1, $zero, 0x1f
    if (t3 != v1) goto label_0x159ea8;                          // 0x00159e90: bne $t3, $v1, 0x159ea8
    *(uint32_t*)((s1) + 0x28c) = v0;                            // 0x00159e94: sw $v0, 0x28c($s1)
    goto label_0x159eac;                                        // 0x00159e9c: b 0x159eac
    t2 = t2 + 4;                                                // 0x00159ea0: addiu $t2, $t2, 4
    /* nop */                                                   // 0x00159ea4: nop 
label_0x159ea8:
    t3 = t3 + 1;                                                // 0x00159ea8: addiu $t3, $t3, 1
label_0x159eac:
    v0 = t3 & 7;                                                // 0x00159eac: andi $v0, $t3, 7
    v1 = *(int32_t*)((s1) + 0x348);                             // 0x00159eb0: lw $v1, 0x348($s1)
    a1 = t3 - v0;                                               // 0x00159eb4: subu $a1, $t3, $v0
    *(uint32_t*)((s1) + 0x350) = v0;                            // 0x00159eb8: sw $v0, 0x350($s1)
    a1 = a1 + 7;                                                // 0x00159ebc: addiu $a1, $a1, 7
    a1 = a1 >> 3;                                               // 0x00159ec4: sra $a1, $a1, 3
    a1 = t2 + a1;                                               // 0x00159ecc: addu $a1, $t2, $a1
    a1 = a1 + -8;                                               // 0x00159ed4: addiu $a1, $a1, -8
    func_00140598();  // 0x1404a0                                // 0x00159ed8: jal 0x1404a0
    a1 = a1 - v1;                                               // 0x00159edc: subu $a1, $a1, $v1
    v1 = *(int32_t*)(s2);                                       // 0x00159ee0: lw $v1, 0($s2)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x00159eec: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x00159ef0: jalr $v0
    v1 = *(int32_t*)(s2);                                       // 0x00159ef8: lw $v1, 0($s2)
    a1 = 1;                                                     // 0x00159f00: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x00159f04: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x00159f08: jalr $v0
    return;                                                     // 0x00159f28: jr $ra
    sp = sp + 0x40;                                             // 0x00159f2c: addiu $sp, $sp, 0x40
}