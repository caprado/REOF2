void func_001a6b40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_1c, local_1d, local_1f;
    
    v0 = a0 << 1;                                               // 0x001a6b40: sll $v0, $a0, 1
    v1 = 0x2a << 16;                                            // 0x001a6b44: lui $v1, 0x2a
    v0 = v0 + a0;                                               // 0x001a6b48: addu $v0, $v0, $a0
    sp = sp + -0x20;                                            // 0x001a6b4c: addiu $sp, $sp, -0x20
    v1 = v1 + 0xf30;                                            // 0x001a6b50: addiu $v1, $v1, 0xf30
    v0 = v0 << 3;                                               // 0x001a6b54: sll $v0, $v0, 3
    a3 = v1 + v0;                                               // 0x001a6b5c: addu $a3, $v1, $v0
    v1 = *(int32_t*)(a3);                                       // 0x001a6b60: lw $v1, 0($a3)
    if (v1 != 0) goto label_0x1a6b74;                           // 0x001a6b64: bnez $v1, 0x1a6b74
    v1 = 0x2a << 16;                                            // 0x001a6b68: lui $v1, 0x2a
    goto label_0x1a6c34;                                        // 0x001a6b6c: b 0x1a6c34
label_0x1a6b74:
    v1 = v1 + 0xf34;                                            // 0x001a6b74: addiu $v1, $v1, 0xf34
    v1 = v1 + v0;                                               // 0x001a6b78: addu $v1, $v1, $v0
    if (a2 != 0) goto label_0x1a6bb8;                           // 0x001a6b7c: bnez $a2, 0x1a6bb8
    g_002a0f34 = a2;  // Global at 0x002a0f34                   // 0x001a6b80: sw $a2, 0($v1)
    v1 = 3;                                                     // 0x001a6b84: addiu $v1, $zero, 3
    if (v1 == 0) goto label_0x1a6ba4;                           // 0x001a6b88: beqz $v1, 0x1a6ba4
    *(uint32_t*)(a3) = v1;                                      // 0x001a6b8c: sw $v1, 0($a3)
    local_1f = v1;                                              // 0x001a6b90: sb $v1, 0x1f($sp)
    a3 = 2;                                                     // 0x001a6b94: addiu $a3, $zero, 2
    local_1c = 0;                                               // 0x001a6b98: sb $zero, 0x1c($sp)
    goto label_0x1a6c10;                                        // 0x001a6b9c: b 0x1a6c10
    local_1d = 0;                                               // 0x001a6ba0: sb $zero, 0x1d($sp)
label_0x1a6ba4:
    v1 = 2;                                                     // 0x001a6ba4: addiu $v1, $zero, 2
    local_1c = 0;                                               // 0x001a6ba8: sb $zero, 0x1c($sp)
    local_1f = v1;                                              // 0x001a6bac: sb $v1, 0x1f($sp)
    goto label_0x1a6c10;                                        // 0x001a6bb0: b 0x1a6c10
    a3 = 1;                                                     // 0x001a6bb4: addiu $a3, $zero, 1
label_0x1a6bb8:
    a0 = a1 & 7;                                                // 0x001a6bb8: andi $a0, $a1, 7
    v1 = 3;                                                     // 0x001a6bbc: addiu $v1, $zero, 3
    a0 = a0 << 5;                                               // 0x001a6bc0: sll $a0, $a0, 5
    *(uint32_t*)(a3) = v1;                                      // 0x001a6bc4: sw $v1, 0($a3)
    a0 = a0 | 0xf;                                              // 0x001a6bc8: ori $a0, $a0, 0xf
    if (v1 == 0) goto label_0x1a6c00;                           // 0x001a6bcc: beqz $v1, 0x1a6c00
    a0 = a0 & 0xff;                                             // 0x001a6bd0: andi $a0, $a0, 0xff
    local_1f = v1;                                              // 0x001a6bd4: sb $v1, 0x1f($sp)
    a1 = a0 & 0xff;                                             // 0x001a6bd8: andi $a1, $a0, 0xff
    v1 = a1 & 0x7f;                                             // 0x001a6bdc: andi $v1, $a1, 0x7f
    a3 = 2;                                                     // 0x001a6be0: addiu $a3, $zero, 2
    a0 = v1 << 1;                                               // 0x001a6be4: sll $a0, $v1, 1
    v1 = a1 & 0x80;                                             // 0x001a6be8: andi $v1, $a1, 0x80
    a0 = a0 | 1;                                                // 0x001a6bec: ori $a0, $a0, 1
    v1 = v1 >> 7;                                               // 0x001a6bf0: sra $v1, $v1, 7
    local_1c = a0;                                              // 0x001a6bf4: sb $a0, 0x1c($sp)
    goto label_0x1a6c10;                                        // 0x001a6bf8: b 0x1a6c10
    local_1d = v1;                                              // 0x001a6bfc: sb $v1, 0x1d($sp)
label_0x1a6c00:
    v1 = 2;                                                     // 0x001a6c00: addiu $v1, $zero, 2
    local_1c = a0;                                              // 0x001a6c04: sb $a0, 0x1c($sp)
    local_1f = v1;                                              // 0x001a6c08: sb $v1, 0x1f($sp)
    a3 = 1;                                                     // 0x001a6c0c: addiu $a3, $zero, 1
label_0x1a6c10:
    v1 = 0x2a << 16;                                            // 0x001a6c10: lui $v1, 0x2a
    a1 = 1;                                                     // 0x001a6c14: addiu $a1, $zero, 1
    v1 = v1 + 0xf26;                                            // 0x001a6c18: addiu $v1, $v1, 0xf26
    a2 = sp + 0x1f;                                             // 0x001a6c1c: addiu $a2, $sp, 0x1f
    v0 = v1 + v0;                                               // 0x001a6c20: addu $v0, $v1, $v0
    a0 = *(uint8_t*)(v0);                                       // 0x001a6c24: lbu $a0, 0($v0)
    func_00189770();  // 189770                                // 0x001a6c28: jal 0x189770
    t0 = sp + 0x1c;                                             // 0x001a6c2c: addiu $t0, $sp, 0x1c
    v0 = 1;                                                     // 0x001a6c30: addiu $v0, $zero, 1
label_0x1a6c34:
    return;                                                     // 0x001a6c38: jr $ra
    sp = sp + 0x20;                                             // 0x001a6c3c: addiu $sp, $sp, 0x20
}