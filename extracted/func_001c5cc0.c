void func_001c5cc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c5cc0: addiu $sp, $sp, -0x20
    v0 = 1;                                                     // 0x001c5cc4: addiu $v0, $zero, 1
    v1 = *(int8_t*)((a0) + 2);                                  // 0x001c5cd0: lb $v1, 2($a0)
    if (v1 == v0) goto label_0x1c5d28;                          // 0x001c5cd4: beq $v1, $v0, 0x1c5d28
    if (v1 == 0) goto label_0x1c5cec;                           // 0x001c5cdc: beqz $v1, 0x1c5cec
    at = 0x31 << 16;                                            // 0x001c5ce0: lui $at, 0x31
    goto label_0x1c5dd8;                                        // 0x001c5ce4: b 0x1c5dd8
    v0 = 1;                                                     // 0x001c5ce8: addiu $v0, $zero, 1
label_0x1c5cec:
    v0 = g_003137a0;  // Global at 0x003137a0                   // 0x001c5cec: lbu $v0, 0x37a0($at)
    if (v0 != 0) goto label_0x1c5d04;                           // 0x001c5cf0: bnez $v0, 0x1c5d04
    v0 = 0x35;                                                  // 0x001c5cf4: addiu $v0, $zero, 0x35
    v0 = 0x37;                                                  // 0x001c5cf8: addiu $v0, $zero, 0x37
    goto label_0x1c5d08;                                        // 0x001c5cfc: b 0x1c5d08
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c5d00: sw $v0, 0x2c($s0)
label_0x1c5d04:
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c5d04: sw $v0, 0x2c($s0)
label_0x1c5d08:
    v1 = 1;                                                     // 0x001c5d08: addiu $v1, $zero, 1
    v0 = 5;                                                     // 0x001c5d0c: addiu $v0, $zero, 5
    *(uint32_t*)((s0) + 0x30) = v1;                             // 0x001c5d10: sw $v1, 0x30($s0)
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c5d14: sw $v1, 0x38($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c5d18: sw $v0, 0x10($s0)
    v0 = *(int8_t*)((s0) + 2);                                  // 0x001c5d1c: lb $v0, 2($s0)
    v0 = v0 + 1;                                                // 0x001c5d20: addiu $v0, $v0, 1
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c5d24: sb $v0, 2($s0)
label_0x1c5d28:
    v1 = *(uint16_t*)((s0) + 0xa);                              // 0x001c5d28: lhu $v1, 0xa($s0)
    v0 = v1 & 0x20;                                             // 0x001c5d2c: andi $v0, $v1, 0x20
    if (v0 == 0) goto label_0x1c5d6c;                           // 0x001c5d30: beqz $v0, 0x1c5d6c
    /* nop */                                                   // 0x001c5d34: nop 
    func_001c7460();  // 1c7460                                // 0x001c5d38: jal 0x1c7460
    /* nop */                                                   // 0x001c5d3c: nop 
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x001c5d40: sw $zero, 0x30($s0)
    a1 = 1;                                                     // 0x001c5d44: addiu $a1, $zero, 1
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x001c5d48: lw $v0, 0x38($s0)
    if (v0 != a1) goto label_0x1c5d64;                          // 0x001c5d4c: bne $v0, $a1, 0x1c5d64
    func_001c2a50();  // 1c2a50                                // 0x001c5d54: jal 0x1c2a50
    a0 = *(int32_t*)((s0) + 0x20);                              // 0x001c5d58: lw $a0, 0x20($s0)
    goto label_0x1c5dd8;                                        // 0x001c5d5c: b 0x1c5dd8
    v0 = 1;                                                     // 0x001c5d60: addiu $v0, $zero, 1
label_0x1c5d64:
    goto label_0x1c5ddc;                                        // 0x001c5d64: b 0x1c5ddc
label_0x1c5d6c:
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x001c5d6c: lw $v0, 0x10($s0)
    if (v0 == 0) goto label_0x1c5d84;                           // 0x001c5d70: beqz $v0, 0x1c5d84
    /* nop */                                                   // 0x001c5d74: nop 
    v0 = v0 + -1;                                               // 0x001c5d78: addiu $v0, $v0, -1
    goto label_0x1c5dd4;                                        // 0x001c5d7c: b 0x1c5dd4
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c5d80: sw $v0, 0x10($s0)
label_0x1c5d84:
    v0 = v1 & 8;                                                // 0x001c5d84: andi $v0, $v1, 8
    if (v0 == 0) goto label_0x1c5da0;                           // 0x001c5d88: beqz $v0, 0x1c5da0
    v0 = v1 & 4;                                                // 0x001c5d8c: andi $v0, $v1, 4
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x001c5d90: lw $v0, 0x38($s0)
    if (v0 == 0) goto label_0x1c5db8;                           // 0x001c5d94: beqz $v0, 0x1c5db8
    /* nop */                                                   // 0x001c5d98: nop 
    v0 = v1 & 4;                                                // 0x001c5d9c: andi $v0, $v1, 4
label_0x1c5da0:
    if (v0 == 0) goto label_0x1c5dd4;                           // 0x001c5da0: beqz $v0, 0x1c5dd4
    /* nop */                                                   // 0x001c5da4: nop 
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c5da8: lw $v1, 0x38($s0)
    v0 = 1;                                                     // 0x001c5dac: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1c5dd4;                          // 0x001c5db0: bne $v1, $v0, 0x1c5dd4
    /* nop */                                                   // 0x001c5db4: nop 
label_0x1c5db8:
    func_001c7470();  // 1c7470                                // 0x001c5db8: jal 0x1c7470
    /* nop */                                                   // 0x001c5dbc: nop 
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c5dc0: lw $v1, 0x38($s0)
    v0 = 5;                                                     // 0x001c5dc4: addiu $v0, $zero, 5
    v1 = v1 ^ 1;                                                // 0x001c5dc8: xori $v1, $v1, 1
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c5dcc: sw $v1, 0x38($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c5dd0: sw $v0, 0x10($s0)
label_0x1c5dd4:
    v0 = 1;                                                     // 0x001c5dd4: addiu $v0, $zero, 1
label_0x1c5dd8:
label_0x1c5ddc:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c5ddc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c5de0: jr $ra
    sp = sp + 0x20;                                             // 0x001c5de4: addiu $sp, $sp, 0x20
}