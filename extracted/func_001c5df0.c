void func_001c5df0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c5df0: addiu $sp, $sp, -0x20
    v0 = *(int8_t*)((a0) + 2);                                  // 0x001c5dfc: lb $v0, 2($a0)
    a0 = 1;                                                     // 0x001c5e04: addiu $a0, $zero, 1
    if (v0 == a0) goto label_0x1c5e40;                          // 0x001c5e08: beq $v0, $a0, 0x1c5e40
    /* nop */                                                   // 0x001c5e0c: nop 
    if (v0 == 0) goto label_0x1c5e20;                           // 0x001c5e10: beqz $v0, 0x1c5e20
    v1 = 0x38;                                                  // 0x001c5e14: addiu $v1, $zero, 0x38
    goto label_0x1c5ef4;                                        // 0x001c5e18: b 0x1c5ef4
    v0 = 1;                                                     // 0x001c5e1c: addiu $v0, $zero, 1
label_0x1c5e20:
    v0 = 5;                                                     // 0x001c5e20: addiu $v0, $zero, 5
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c5e24: sw $v1, 0x2c($s0)
    *(uint32_t*)((s0) + 0x30) = a0;                             // 0x001c5e28: sw $a0, 0x30($s0)
    *(uint32_t*)((s0) + 0x38) = a0;                             // 0x001c5e2c: sw $a0, 0x38($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c5e30: sw $v0, 0x10($s0)
    v0 = *(int8_t*)((s0) + 2);                                  // 0x001c5e34: lb $v0, 2($s0)
    v0 = v0 + 1;                                                // 0x001c5e38: addiu $v0, $v0, 1
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c5e3c: sb $v0, 2($s0)
label_0x1c5e40:
    v1 = *(uint16_t*)((s0) + 0xa);                              // 0x001c5e40: lhu $v1, 0xa($s0)
    v0 = v1 & 0x20;                                             // 0x001c5e44: andi $v0, $v1, 0x20
    if (v0 == 0) goto label_0x1c5e88;                           // 0x001c5e48: beqz $v0, 0x1c5e88
    /* nop */                                                   // 0x001c5e4c: nop 
    func_001c7460();  // 1c7460                                // 0x001c5e50: jal 0x1c7460
    /* nop */                                                   // 0x001c5e54: nop 
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x001c5e58: sw $zero, 0x30($s0)
    v0 = 1;                                                     // 0x001c5e5c: addiu $v0, $zero, 1
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c5e60: lw $v1, 0x38($s0)
    if (v1 != v0) goto label_0x1c5e80;                          // 0x001c5e64: bne $v1, $v0, 0x1c5e80
    a0 = *(int32_t*)((s0) + 0x20);                              // 0x001c5e6c: lw $a0, 0x20($s0)
    func_001c2a50();  // 1c2a50                                // 0x001c5e70: jal 0x1c2a50
    a1 = 2;                                                     // 0x001c5e74: addiu $a1, $zero, 2
    goto label_0x1c5ef4;                                        // 0x001c5e78: b 0x1c5ef4
    v0 = 1;                                                     // 0x001c5e7c: addiu $v0, $zero, 1
label_0x1c5e80:
    goto label_0x1c5ef8;                                        // 0x001c5e80: b 0x1c5ef8
label_0x1c5e88:
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x001c5e88: lw $v0, 0x10($s0)
    if (v0 == 0) goto label_0x1c5ea0;                           // 0x001c5e8c: beqz $v0, 0x1c5ea0
    /* nop */                                                   // 0x001c5e90: nop 
    v0 = v0 + -1;                                               // 0x001c5e94: addiu $v0, $v0, -1
    goto label_0x1c5ef0;                                        // 0x001c5e98: b 0x1c5ef0
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c5e9c: sw $v0, 0x10($s0)
label_0x1c5ea0:
    v0 = v1 & 8;                                                // 0x001c5ea0: andi $v0, $v1, 8
    if (v0 == 0) goto label_0x1c5ebc;                           // 0x001c5ea4: beqz $v0, 0x1c5ebc
    v0 = v1 & 4;                                                // 0x001c5ea8: andi $v0, $v1, 4
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x001c5eac: lw $v0, 0x38($s0)
    if (v0 == 0) goto label_0x1c5ed4;                           // 0x001c5eb0: beqz $v0, 0x1c5ed4
    /* nop */                                                   // 0x001c5eb4: nop 
    v0 = v1 & 4;                                                // 0x001c5eb8: andi $v0, $v1, 4
label_0x1c5ebc:
    if (v0 == 0) goto label_0x1c5ef0;                           // 0x001c5ebc: beqz $v0, 0x1c5ef0
    /* nop */                                                   // 0x001c5ec0: nop 
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c5ec4: lw $v1, 0x38($s0)
    v0 = 1;                                                     // 0x001c5ec8: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1c5ef0;                          // 0x001c5ecc: bne $v1, $v0, 0x1c5ef0
    /* nop */                                                   // 0x001c5ed0: nop 
label_0x1c5ed4:
    func_001c7470();  // 1c7470                                // 0x001c5ed4: jal 0x1c7470
    /* nop */                                                   // 0x001c5ed8: nop 
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c5edc: lw $v1, 0x38($s0)
    v0 = 5;                                                     // 0x001c5ee0: addiu $v0, $zero, 5
    v1 = v1 ^ 1;                                                // 0x001c5ee4: xori $v1, $v1, 1
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c5ee8: sw $v1, 0x38($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c5eec: sw $v0, 0x10($s0)
label_0x1c5ef0:
    v0 = 1;                                                     // 0x001c5ef0: addiu $v0, $zero, 1
label_0x1c5ef4:
label_0x1c5ef8:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c5ef8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c5efc: jr $ra
    sp = sp + 0x20;                                             // 0x001c5f00: addiu $sp, $sp, 0x20
}