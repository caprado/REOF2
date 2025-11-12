void func_00123e18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00123e18: addiu $sp, $sp, -0x20
    v0 = 1;                                                     // 0x00123e1c: addiu $v0, $zero, 1
    s1 = s0 + 0x48;                                             // 0x00123e2c: addiu $s1, $s0, 0x48
    v1 = *(int32_t*)((s0) + 4);                                 // 0x00123e38: lw $v1, 4($s0)
    if (v1 != v0) goto label_0x123f58;                          // 0x00123e3c: bne $v1, $v0, 0x123f58
    s2 = *(int32_t*)(s1);                                       // 0x00123e40: lw $s2, 0($s1)
    func_00134c60();  // 0x134c58                                // 0x00123e44: jal 0x134c58
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00123e48: lw $a0, 8($s0)
    /* bnezl $v0, 0x123f58 */                                   // 0x00123e4c: bnezl $v0, 0x123f58
    v1 = *(int32_t*)((s0) + 4);                                 // 0x00123e50: lw $v1, 4($s0)
    a0 = *(int32_t*)((s0) + 0x7c);                              // 0x00123e54: lw $a0, 0x7c($s0)
    a1 = s0 + 0x68;                                             // 0x00123e58: addiu $a1, $s0, 0x68
    v0 = *(int32_t*)((s0) + 0x78);                              // 0x00123e5c: lw $v0, 0x78($s0)
    a2 = s0 + 0x6c;                                             // 0x00123e60: addiu $a2, $s0, 0x6c
    /* call function at address in v0 */                        // 0x00123e64: jalr $v0
    a3 = s0 + 0x70;                                             // 0x00123e68: addiu $a3, $s0, 0x70
    a0 = *(int32_t*)((s1) + 0x18);                              // 0x00123e6c: lw $a0, 0x18($s1)
    t1 = *(int32_t*)((s1) + 0x20);                              // 0x00123e70: lw $t1, 0x20($s1)
    a2 = 2;                                                     // 0x00123e74: addiu $a2, $zero, 2
    v1 = *(int32_t*)((s1) + 0x24);                              // 0x00123e78: lw $v1, 0x24($s1)
    t0 = a0 - t1;                                               // 0x00123e7c: subu $t0, $a0, $t1
    a0 = *(int8_t*)((s0) + 0xe);                                // 0x00123e80: lb $a0, 0xe($s0)
    v0 = (v1 < t0) ? 1 : 0;                                     // 0x00123e84: slt $v0, $v1, $t0
    a1 = *(int32_t*)((s1) + 4);                                 // 0x00123e88: lw $a1, 4($s1)
    if (v0 != 0) t0 = v1;                                       // 0x00123e8c: movn $t0, $v1, $v0
    v1 = t1 << 1;                                               // 0x00123e90: sll $v1, $t1, 1
    t3 = *(int32_t*)((s1) + 0x14);                              // 0x00123e94: lw $t3, 0x14($s1)
    v0 = (a1 < t0) ? 1 : 0;                                     // 0x00123e98: slt $v0, $a1, $t0
    if (v0 != 0) t0 = a1;                                       // 0x00123e9c: movn $t0, $a1, $v0
    t2 = t3 + v1;                                               // 0x00123ea0: addu $t2, $t3, $v1
    if (a0 != a2) goto label_0x123f08;                          // 0x00123ea4: bne $a0, $a2, 0x123f08
    v1 = *(uint8_t*)((s0) + 0xe);                               // 0x00123ea8: lbu $v1, 0xe($s0)
    v0 = *(int32_t*)((s1) + 0x1c);                              // 0x00123eac: lw $v0, 0x1c($s1)
    v0 = v0 + t1;                                               // 0x00123eb4: addu $v0, $v0, $t1
    v0 = v0 << 1;                                               // 0x00123eb8: sll $v0, $v0, 1
    if (t0 <= 0) goto label_0x123f3c;                           // 0x00123ebc: blez $t0, 0x123f3c
    t1 = t3 + v0;                                               // 0x00123ec0: addu $t1, $t3, $v0
label_0x123ec8:
    v0 = *(uint8_t*)(a2);                                       // 0x00123ec8: lbu $v0, 0($a2)
    v1 = a3 << 1;                                               // 0x00123ecc: sll $v1, $a3, 1
    a0 = v1 + t2;                                               // 0x00123ed0: addu $a0, $v1, $t2
    v1 = v1 + t1;                                               // 0x00123ed4: addu $v1, $v1, $t1
    v0 = v0 << 8;                                               // 0x00123ed8: sll $v0, $v0, 8
    a3 = a3 + 1;                                                // 0x00123edc: addiu $a3, $a3, 1
    *(uint16_t*)(a0) = v0;                                      // 0x00123ee0: sh $v0, 0($a0)
    a1 = (a3 < t0) ? 1 : 0;                                     // 0x00123ee4: slt $a1, $a3, $t0
    v0 = *(uint8_t*)((a2) + 1);                                 // 0x00123ee8: lbu $v0, 1($a2)
    a2 = a2 + 2;                                                // 0x00123eec: addiu $a2, $a2, 2
    v0 = v0 << 8;                                               // 0x00123ef0: sll $v0, $v0, 8
    if (a1 != 0) goto label_0x123ec8;                           // 0x00123ef4: bnez $a1, 0x123ec8
    *(uint16_t*)(v1) = v0;                                      // 0x00123ef8: sh $v0, 0($v1)
    goto label_0x123f3c;                                        // 0x00123efc: b 0x123f3c
    v1 = *(uint8_t*)((s0) + 0xe);                               // 0x00123f00: lbu $v1, 0xe($s0)
    /* nop */                                                   // 0x00123f04: nop 
label_0x123f08:
    if (t0 <= 0) goto label_0x123f3c;                           // 0x00123f08: blez $t0, 0x123f3c
    /* nop */                                                   // 0x00123f14: nop 
label_0x123f18:
    v0 = s2 + a3;                                               // 0x00123f18: addu $v0, $s2, $a3
    a3 = a3 + 1;                                                // 0x00123f1c: addiu $a3, $a3, 1
    v1 = *(uint8_t*)(v0);                                       // 0x00123f20: lbu $v1, 0($v0)
    a0 = (a3 < t0) ? 1 : 0;                                     // 0x00123f24: slt $a0, $a3, $t0
    v1 = v1 << 8;                                               // 0x00123f28: sll $v1, $v1, 8
    *(uint16_t*)(a1) = v1;                                      // 0x00123f2c: sh $v1, 0($a1)
    if (a0 != 0) goto label_0x123f18;                           // 0x00123f30: bnez $a0, 0x123f18
    a1 = a1 + 2;                                                // 0x00123f34: addiu $a1, $a1, 2
    v1 = *(uint8_t*)((s0) + 0xe);                               // 0x00123f38: lbu $v1, 0xe($s0)
label_0x123f3c:
    v0 = v1 << 0x18;                                            // 0x00123f3c: sll $v0, $v1, 0x18
    v1 = 2;                                                     // 0x00123f40: addiu $v1, $zero, 2
    v0 = v0 >> 0x18;                                            // 0x00123f44: sra $v0, $v0, 0x18
    *(uint32_t*)((s0) + 4) = v1;                                // 0x00123f48: sw $v1, 4($s0)
    /* multiply: t0 * v0 -> hi:lo */                            // 0x00123f4c: mult $ac2, $t0, $v0
    *(uint32_t*)((s0) + 0x90) = t0;                             // 0x00123f50: sw $t0, 0x90($s0)
    *(uint32_t*)((s0) + 0x94) = v0;                             // 0x00123f54: sw $v0, 0x94($s0)
label_0x123f58:
    v0 = 2;                                                     // 0x00123f58: addiu $v0, $zero, 2
    if (v1 != v0) goto label_0x123f84;                          // 0x00123f5c: bnel $v1, $v0, 0x123f84
    v1 = *(int32_t*)((s0) + 0x80);                              // 0x00123f64: lw $v1, 0x80($s0)
    a0 = *(int32_t*)((s0) + 0x84);                              // 0x00123f68: lw $a0, 0x84($s0)
    a1 = *(int32_t*)((s0) + 0x94);                              // 0x00123f6c: lw $a1, 0x94($s0)
    /* call function at address in v1 */                        // 0x00123f70: jalr $v1
    a2 = *(int32_t*)((s0) + 0x90);                              // 0x00123f74: lw $a2, 0x90($s0)
    v0 = 3;                                                     // 0x00123f78: addiu $v0, $zero, 3
    *(uint32_t*)((s0) + 4) = v0;                                // 0x00123f7c: sw $v0, 4($s0)
label_0x123f84:
    return;                                                     // 0x00123f90: jr $ra
    sp = sp + 0x20;                                             // 0x00123f94: addiu $sp, $sp, 0x20
}