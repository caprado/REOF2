void func_001c0a90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c0a90: addiu $sp, $sp, -0x20
    v0 = 1;                                                     // 0x001c0a94: addiu $v0, $zero, 1
    v1 = *(int32_t*)(a0);                                       // 0x001c0aa0: lw $v1, 0($a0)
    if (v1 == v0) goto label_0x1c0b1c;                          // 0x001c0aa4: beq $v1, $v0, 0x1c0b1c
    if (v1 == 0) goto label_0x1c0abc;                           // 0x001c0aac: beqz $v1, 0x1c0abc
    /* nop */                                                   // 0x001c0ab0: nop 
    goto label_0x1c0ba4;                                        // 0x001c0ab4: b 0x1c0ba4
label_0x1c0abc:
    func_001bf010();  // 1bf010                                // 0x001c0abc: jal 0x1bf010
    /* nop */                                                   // 0x001c0ac0: nop 
    v1 = 2;                                                     // 0x001c0ac4: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1c0b0c;                          // 0x001c0ac8: beq $v0, $v1, 0x1c0b0c
    v1 = 1;                                                     // 0x001c0acc: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1c0b0c;                          // 0x001c0ad0: beq $v0, $v1, 0x1c0b0c
    /* nop */                                                   // 0x001c0ad4: nop 
    v1 = 3;                                                     // 0x001c0ad8: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x1c0b00;                          // 0x001c0adc: beq $v0, $v1, 0x1c0b00
    /* nop */                                                   // 0x001c0ae0: nop 
    if (v0 == 0) goto label_0x1c0af4;                           // 0x001c0ae4: beqz $v0, 0x1c0af4
    /* nop */                                                   // 0x001c0ae8: nop 
    goto label_0x1c0ba0;                                        // 0x001c0aec: b 0x1c0ba0
    /* nop */                                                   // 0x001c0af0: nop 
label_0x1c0af4:
    v0 = -0xff;                                                 // 0x001c0af4: addiu $v0, $zero, -0xff
    goto label_0x1c0ba0;                                        // 0x001c0af8: b 0x1c0ba0
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c0afc: sw $v0, 0x24($s0)
label_0x1c0b00:
    v0 = -0xfe;                                                 // 0x001c0b00: addiu $v0, $zero, -0xfe
    goto label_0x1c0ba0;                                        // 0x001c0b04: b 0x1c0ba0
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c0b08: sw $v0, 0x24($s0)
label_0x1c0b0c:
    v0 = *(int32_t*)(s0);                                       // 0x001c0b0c: lw $v0, 0($s0)
    v0 = v0 + 1;                                                // 0x001c0b10: addiu $v0, $v0, 1
    goto label_0x1c0ba0;                                        // 0x001c0b14: b 0x1c0ba0
    *(uint32_t*)(s0) = v0;                                      // 0x001c0b18: sw $v0, 0($s0)
label_0x1c0b1c:
    func_001bfa60();  // 1bfa60                                // 0x001c0b1c: jal 0x1bfa60
    /* nop */                                                   // 0x001c0b20: nop 
    v1 = 1;                                                     // 0x001c0b24: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1c0b50;                          // 0x001c0b28: beq $v0, $v1, 0x1c0b50
    /* nop */                                                   // 0x001c0b2c: nop 
    if (v0 == 0) goto label_0x1c0b40;                           // 0x001c0b30: beqz $v0, 0x1c0b40
    /* nop */                                                   // 0x001c0b34: nop 
    goto label_0x1c0ba0;                                        // 0x001c0b38: b 0x1c0ba0
    /* nop */                                                   // 0x001c0b3c: nop 
label_0x1c0b40:
    *(uint32_t*)(s0) = 0;                                       // 0x001c0b40: sw $zero, 0($s0)
    v0 = *(int32_t*)((s0) + 0xc);                               // 0x001c0b44: lw $v0, 0xc($s0)
    goto label_0x1c0ba0;                                        // 0x001c0b48: b 0x1c0ba0
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c0b4c: sw $v0, 0x24($s0)
label_0x1c0b50:
    *(uint32_t*)(s0) = 0;                                       // 0x001c0b50: sw $zero, 0($s0)
    v0 = 0 | 0x9002;                                            // 0x001c0b54: ori $v0, $zero, 0x9002
    v1 = *(uint16_t*)((s0) + 0x1c);                             // 0x001c0b58: lhu $v1, 0x1c($s0)
    if (v1 == v0) goto label_0x1c0b94;                          // 0x001c0b5c: beq $v1, $v0, 0x1c0b94
    v0 = -0xfb;                                                 // 0x001c0b60: addiu $v0, $zero, -0xfb
    v0 = 2;                                                     // 0x001c0b64: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1c0b8c;                          // 0x001c0b68: beq $v1, $v0, 0x1c0b8c
    v0 = -0xfd;                                                 // 0x001c0b6c: addiu $v0, $zero, -0xfd
    v0 = 0x13;                                                  // 0x001c0b70: addiu $v0, $zero, 0x13
    if (v1 == v0) goto label_0x1c0b84;                          // 0x001c0b74: beq $v1, $v0, 0x1c0b84
    v0 = -0xff;                                                 // 0x001c0b78: addiu $v0, $zero, -0xff
    goto label_0x1c0b9c;                                        // 0x001c0b7c: b 0x1c0b9c
    v0 = -0x100;                                                // 0x001c0b80: addiu $v0, $zero, -0x100
label_0x1c0b84:
    goto label_0x1c0ba0;                                        // 0x001c0b84: b 0x1c0ba0
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c0b88: sw $v0, 0x24($s0)
label_0x1c0b8c:
    goto label_0x1c0ba0;                                        // 0x001c0b8c: b 0x1c0ba0
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c0b90: sw $v0, 0x24($s0)
label_0x1c0b94:
    goto label_0x1c0ba0;                                        // 0x001c0b94: b 0x1c0ba0
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c0b98: sw $v0, 0x24($s0)
label_0x1c0b9c:
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c0b9c: sw $v0, 0x24($s0)
label_0x1c0ba0:
label_0x1c0ba4:
    func_001bfbf0();  // 1bfbf0                                // 0x001c0ba4: jal 0x1bfbf0
    /* nop */                                                   // 0x001c0ba8: nop 
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c0bb0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c0bb4: jr $ra
    sp = sp + 0x20;                                             // 0x001c0bb8: addiu $sp, $sp, 0x20
}