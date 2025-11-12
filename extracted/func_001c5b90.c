void func_001c5b90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c5b90: addiu $sp, $sp, -0x20
    v0 = 1;                                                     // 0x001c5b94: addiu $v0, $zero, 1
    v1 = *(int8_t*)((a0) + 2);                                  // 0x001c5ba0: lb $v1, 2($a0)
    if (v1 == v0) goto label_0x1c5bf8;                          // 0x001c5ba4: beq $v1, $v0, 0x1c5bf8
    if (v1 == 0) goto label_0x1c5bbc;                           // 0x001c5bac: beqz $v1, 0x1c5bbc
    at = 0x31 << 16;                                            // 0x001c5bb0: lui $at, 0x31
    goto label_0x1c5ca8;                                        // 0x001c5bb4: b 0x1c5ca8
    v0 = 1;                                                     // 0x001c5bb8: addiu $v0, $zero, 1
label_0x1c5bbc:
    v0 = g_003137a0;  // Global at 0x003137a0                   // 0x001c5bbc: lbu $v0, 0x37a0($at)
    if (v0 != 0) goto label_0x1c5bd4;                           // 0x001c5bc0: bnez $v0, 0x1c5bd4
    v0 = 0x35;                                                  // 0x001c5bc4: addiu $v0, $zero, 0x35
    v0 = 0x37;                                                  // 0x001c5bc8: addiu $v0, $zero, 0x37
    goto label_0x1c5bd8;                                        // 0x001c5bcc: b 0x1c5bd8
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c5bd0: sw $v0, 0x2c($s0)
label_0x1c5bd4:
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c5bd4: sw $v0, 0x2c($s0)
label_0x1c5bd8:
    v1 = 1;                                                     // 0x001c5bd8: addiu $v1, $zero, 1
    v0 = 5;                                                     // 0x001c5bdc: addiu $v0, $zero, 5
    *(uint32_t*)((s0) + 0x30) = v1;                             // 0x001c5be0: sw $v1, 0x30($s0)
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c5be4: sw $v1, 0x38($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c5be8: sw $v0, 0x10($s0)
    v0 = *(int8_t*)((s0) + 2);                                  // 0x001c5bec: lb $v0, 2($s0)
    v0 = v0 + 1;                                                // 0x001c5bf0: addiu $v0, $v0, 1
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c5bf4: sb $v0, 2($s0)
label_0x1c5bf8:
    v1 = *(uint16_t*)((s0) + 0xa);                              // 0x001c5bf8: lhu $v1, 0xa($s0)
    v0 = v1 & 0x20;                                             // 0x001c5bfc: andi $v0, $v1, 0x20
    if (v0 == 0) goto label_0x1c5c3c;                           // 0x001c5c00: beqz $v0, 0x1c5c3c
    /* nop */                                                   // 0x001c5c04: nop 
    func_001c7470();  // 0x1c7460                                // 0x001c5c08: jal 0x1c7460
    /* nop */                                                   // 0x001c5c0c: nop 
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x001c5c10: sw $zero, 0x30($s0)
    a1 = 1;                                                     // 0x001c5c14: addiu $a1, $zero, 1
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x001c5c18: lw $v0, 0x38($s0)
    if (v0 != a1) goto label_0x1c5c34;                          // 0x001c5c1c: bne $v0, $a1, 0x1c5c34
    func_001c2e20();  // 0x1c2a50                                // 0x001c5c24: jal 0x1c2a50
    a0 = *(int32_t*)((s0) + 0x20);                              // 0x001c5c28: lw $a0, 0x20($s0)
    goto label_0x1c5ca8;                                        // 0x001c5c2c: b 0x1c5ca8
    v0 = 1;                                                     // 0x001c5c30: addiu $v0, $zero, 1
label_0x1c5c34:
    goto label_0x1c5cac;                                        // 0x001c5c34: b 0x1c5cac
label_0x1c5c3c:
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x001c5c3c: lw $v0, 0x10($s0)
    if (v0 == 0) goto label_0x1c5c54;                           // 0x001c5c40: beqz $v0, 0x1c5c54
    /* nop */                                                   // 0x001c5c44: nop 
    v0 = v0 + -1;                                               // 0x001c5c48: addiu $v0, $v0, -1
    goto label_0x1c5ca4;                                        // 0x001c5c4c: b 0x1c5ca4
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c5c50: sw $v0, 0x10($s0)
label_0x1c5c54:
    v0 = v1 & 8;                                                // 0x001c5c54: andi $v0, $v1, 8
    if (v0 == 0) goto label_0x1c5c70;                           // 0x001c5c58: beqz $v0, 0x1c5c70
    v0 = v1 & 4;                                                // 0x001c5c5c: andi $v0, $v1, 4
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x001c5c60: lw $v0, 0x38($s0)
    if (v0 == 0) goto label_0x1c5c88;                           // 0x001c5c64: beqz $v0, 0x1c5c88
    /* nop */                                                   // 0x001c5c68: nop 
    v0 = v1 & 4;                                                // 0x001c5c6c: andi $v0, $v1, 4
label_0x1c5c70:
    if (v0 == 0) goto label_0x1c5ca4;                           // 0x001c5c70: beqz $v0, 0x1c5ca4
    /* nop */                                                   // 0x001c5c74: nop 
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c5c78: lw $v1, 0x38($s0)
    v0 = 1;                                                     // 0x001c5c7c: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1c5ca4;                          // 0x001c5c80: bne $v1, $v0, 0x1c5ca4
    /* nop */                                                   // 0x001c5c84: nop 
label_0x1c5c88:
    func_001c7480();  // 0x1c7470                                // 0x001c5c88: jal 0x1c7470
    /* nop */                                                   // 0x001c5c8c: nop 
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c5c90: lw $v1, 0x38($s0)
    v0 = 5;                                                     // 0x001c5c94: addiu $v0, $zero, 5
    v1 = v1 ^ 1;                                                // 0x001c5c98: xori $v1, $v1, 1
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c5c9c: sw $v1, 0x38($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c5ca0: sw $v0, 0x10($s0)
label_0x1c5ca4:
    v0 = 1;                                                     // 0x001c5ca4: addiu $v0, $zero, 1
label_0x1c5ca8:
label_0x1c5cac:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c5cac: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c5cb0: jr $ra
    sp = sp + 0x20;                                             // 0x001c5cb4: addiu $sp, $sp, 0x20
}