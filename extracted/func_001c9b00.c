void func_001c9b00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_20, local_24, local_28, local_2c, local_30, local_32;
    
    sp = sp + -0x50;                                            // 0x001c9b00: addiu $sp, $sp, -0x50
    func_001c8170();  // 1c8170                                // 0x001c9b10: jal 0x1c8170
    a0 = sp + 0x20;                                             // 0x001c9b14: addiu $a0, $sp, 0x20
    if (v0 >= 0) goto label_0x1c9b30;                           // 0x001c9b20: bgez $v0, 0x1c9b30
    /* nop */                                                   // 0x001c9b24: nop 
    goto label_0x1c9d00;                                        // 0x001c9b28: b 0x1c9d00
    /* nop */                                                   // 0x001c9b2c: nop 
label_0x1c9b30:
    v1 = local_20;                                              // 0x001c9b30: lw $v1, 0x20($sp)
    *(uint32_t*)((s0) + 4) = v1;                                // 0x001c9b34: sw $v1, 4($s0)
    v1 = local_24;                                              // 0x001c9b38: lw $v1, 0x24($sp)
    *(uint32_t*)(s0) = v1;                                      // 0x001c9b3c: sw $v1, 0($s0)
    v1 = local_28;                                              // 0x001c9b40: lh $v1, 0x28($sp)
    at = ((unsigned)v1 < (unsigned)0xa) ? 1 : 0;                // 0x001c9b44: sltiu $at, $v1, 0xa
    if (at == 0) goto label_0x1c9be0;                           // 0x001c9b48: beqz $at, 0x1c9be0
    a0 = 0x24 << 16;                                            // 0x001c9b4c: lui $a0, 0x24
    v1 = v1 << 2;                                               // 0x001c9b50: sll $v1, $v1, 2
    a0 = a0 + 0x3920;                                           // 0x001c9b54: addiu $a0, $a0, 0x3920
    v1 = v1 + a0;                                               // 0x001c9b58: addu $v1, $v1, $a0
    v1 = *(int32_t*)(v1);                                       // 0x001c9b5c: lw $v1, 0($v1)
    /* jump to address in v1 */                                 // 0x001c9b60: jr $v1
    /* nop */                                                   // 0x001c9b64: nop 
    goto label_0x1c9bf8;                                        // 0x001c9b68: b 0x1c9bf8
    *(uint16_t*)((s0) + 0xc) = 0;                               // 0x001c9b6c: sh $zero, 0xc($s0)
    v1 = 1;                                                     // 0x001c9b70: addiu $v1, $zero, 1
    goto label_0x1c9bf8;                                        // 0x001c9b74: b 0x1c9bf8
    *(uint16_t*)((s0) + 0xc) = v1;                              // 0x001c9b78: sh $v1, 0xc($s0)
    /* nop */                                                   // 0x001c9b7c: nop 
    v1 = 2;                                                     // 0x001c9b80: addiu $v1, $zero, 2
    goto label_0x1c9bf8;                                        // 0x001c9b84: b 0x1c9bf8
    *(uint16_t*)((s0) + 0xc) = v1;                              // 0x001c9b88: sh $v1, 0xc($s0)
    /* nop */                                                   // 0x001c9b8c: nop 
    v1 = 3;                                                     // 0x001c9b90: addiu $v1, $zero, 3
    goto label_0x1c9bf8;                                        // 0x001c9b94: b 0x1c9bf8
    *(uint16_t*)((s0) + 0xc) = v1;                              // 0x001c9b98: sh $v1, 0xc($s0)
    /* nop */                                                   // 0x001c9b9c: nop 
    v1 = 4;                                                     // 0x001c9ba0: addiu $v1, $zero, 4
    goto label_0x1c9bf8;                                        // 0x001c9ba4: b 0x1c9bf8
    *(uint16_t*)((s0) + 0xc) = v1;                              // 0x001c9ba8: sh $v1, 0xc($s0)
    /* nop */                                                   // 0x001c9bac: nop 
    v1 = 5;                                                     // 0x001c9bb0: addiu $v1, $zero, 5
    goto label_0x1c9bf8;                                        // 0x001c9bb4: b 0x1c9bf8
    *(uint16_t*)((s0) + 0xc) = v1;                              // 0x001c9bb8: sh $v1, 0xc($s0)
    /* nop */                                                   // 0x001c9bbc: nop 
    v1 = 6;                                                     // 0x001c9bc0: addiu $v1, $zero, 6
    goto label_0x1c9bf8;                                        // 0x001c9bc4: b 0x1c9bf8
    *(uint16_t*)((s0) + 0xc) = v1;                              // 0x001c9bc8: sh $v1, 0xc($s0)
    /* nop */                                                   // 0x001c9bcc: nop 
    v1 = 7;                                                     // 0x001c9bd0: addiu $v1, $zero, 7
    goto label_0x1c9bf8;                                        // 0x001c9bd4: b 0x1c9bf8
    *(uint16_t*)((s0) + 0xc) = v1;                              // 0x001c9bd8: sh $v1, 0xc($s0)
    /* nop */                                                   // 0x001c9bdc: nop 
label_0x1c9be0:
    v1 = 8;                                                     // 0x001c9be0: addiu $v1, $zero, 8
    goto label_0x1c9bf8;                                        // 0x001c9be4: b 0x1c9bf8
    *(uint16_t*)((s0) + 0xc) = v1;                              // 0x001c9be8: sh $v1, 0xc($s0)
    /* nop */                                                   // 0x001c9bec: nop 
    v1 = 9;                                                     // 0x001c9bf0: addiu $v1, $zero, 9
    *(uint16_t*)((s0) + 0xc) = v1;                              // 0x001c9bf4: sh $v1, 0xc($s0)
label_0x1c9bf8:
    v1 = local_2c;                                              // 0x001c9bf8: lw $v1, 0x2c($sp)
    *(uint32_t*)((s0) + 8) = v1;                                // 0x001c9bfc: sw $v1, 8($s0)
    v1 = local_30;                                              // 0x001c9c00: lh $v1, 0x30($sp)
    *(uint16_t*)((s0) + 0xe) = v1;                              // 0x001c9c04: sh $v1, 0xe($s0)
    v1 = local_32;                                              // 0x001c9c08: lh $v1, 0x32($sp)
    at = ((unsigned)v1 < (unsigned)0xe) ? 1 : 0;                // 0x001c9c0c: sltiu $at, $v1, 0xe
    if (at == 0) goto label_0x1c9cd8;                           // 0x001c9c10: beqz $at, 0x1c9cd8
    a0 = 0x24 << 16;                                            // 0x001c9c14: lui $a0, 0x24
    v1 = v1 << 2;                                               // 0x001c9c18: sll $v1, $v1, 2
    a0 = a0 + 0x38e0;                                           // 0x001c9c1c: addiu $a0, $a0, 0x38e0
    v1 = v1 + a0;                                               // 0x001c9c20: addu $v1, $v1, $a0
    v1 = *(int32_t*)(v1);                                       // 0x001c9c24: lw $v1, 0($v1)
    /* jump to address in v1 */                                 // 0x001c9c28: jr $v1
    /* nop */                                                   // 0x001c9c2c: nop 
    goto label_0x1c9d00;                                        // 0x001c9c30: b 0x1c9d00
    *(uint16_t*)((s0) + 0x10) = 0;                              // 0x001c9c34: sh $zero, 0x10($s0)
    v1 = 1;                                                     // 0x001c9c38: addiu $v1, $zero, 1
    goto label_0x1c9d00;                                        // 0x001c9c3c: b 0x1c9d00
    *(uint16_t*)((s0) + 0x10) = v1;                             // 0x001c9c40: sh $v1, 0x10($s0)
    /* nop */                                                   // 0x001c9c44: nop 
    v1 = 2;                                                     // 0x001c9c48: addiu $v1, $zero, 2
    goto label_0x1c9d00;                                        // 0x001c9c4c: b 0x1c9d00
    *(uint16_t*)((s0) + 0x10) = v1;                             // 0x001c9c50: sh $v1, 0x10($s0)
    /* nop */                                                   // 0x001c9c54: nop 
    v1 = 3;                                                     // 0x001c9c58: addiu $v1, $zero, 3
    goto label_0x1c9d00;                                        // 0x001c9c5c: b 0x1c9d00
    *(uint16_t*)((s0) + 0x10) = v1;                             // 0x001c9c60: sh $v1, 0x10($s0)
    /* nop */                                                   // 0x001c9c64: nop 
    v1 = 4;                                                     // 0x001c9c68: addiu $v1, $zero, 4
    goto label_0x1c9d00;                                        // 0x001c9c6c: b 0x1c9d00
    *(uint16_t*)((s0) + 0x10) = v1;                             // 0x001c9c70: sh $v1, 0x10($s0)
    /* nop */                                                   // 0x001c9c74: nop 
    v1 = 5;                                                     // 0x001c9c78: addiu $v1, $zero, 5
    goto label_0x1c9d00;                                        // 0x001c9c7c: b 0x1c9d00
    *(uint16_t*)((s0) + 0x10) = v1;                             // 0x001c9c80: sh $v1, 0x10($s0)
    /* nop */                                                   // 0x001c9c84: nop 
    v1 = 6;                                                     // 0x001c9c88: addiu $v1, $zero, 6
    goto label_0x1c9d00;                                        // 0x001c9c8c: b 0x1c9d00
    *(uint16_t*)((s0) + 0x10) = v1;                             // 0x001c9c90: sh $v1, 0x10($s0)
    /* nop */                                                   // 0x001c9c94: nop 
    v1 = 7;                                                     // 0x001c9c98: addiu $v1, $zero, 7
    goto label_0x1c9d00;                                        // 0x001c9c9c: b 0x1c9d00
    *(uint16_t*)((s0) + 0x10) = v1;                             // 0x001c9ca0: sh $v1, 0x10($s0)
    /* nop */                                                   // 0x001c9ca4: nop 
    v1 = 8;                                                     // 0x001c9ca8: addiu $v1, $zero, 8
    goto label_0x1c9d00;                                        // 0x001c9cac: b 0x1c9d00
    *(uint16_t*)((s0) + 0x10) = v1;                             // 0x001c9cb0: sh $v1, 0x10($s0)
    /* nop */                                                   // 0x001c9cb4: nop 
    v1 = 9;                                                     // 0x001c9cb8: addiu $v1, $zero, 9
    goto label_0x1c9d00;                                        // 0x001c9cbc: b 0x1c9d00
    *(uint16_t*)((s0) + 0x10) = v1;                             // 0x001c9cc0: sh $v1, 0x10($s0)
    /* nop */                                                   // 0x001c9cc4: nop 
    v1 = 0xa;                                                   // 0x001c9cc8: addiu $v1, $zero, 0xa
    goto label_0x1c9d00;                                        // 0x001c9ccc: b 0x1c9d00
    *(uint16_t*)((s0) + 0x10) = v1;                             // 0x001c9cd0: sh $v1, 0x10($s0)
    /* nop */                                                   // 0x001c9cd4: nop 
label_0x1c9cd8:
    v1 = 0xb;                                                   // 0x001c9cd8: addiu $v1, $zero, 0xb
    goto label_0x1c9d00;                                        // 0x001c9cdc: b 0x1c9d00
    *(uint16_t*)((s0) + 0x10) = v1;                             // 0x001c9ce0: sh $v1, 0x10($s0)
    /* nop */                                                   // 0x001c9ce4: nop 
    v1 = 0xc;                                                   // 0x001c9ce8: addiu $v1, $zero, 0xc
    goto label_0x1c9d00;                                        // 0x001c9cec: b 0x1c9d00
    *(uint16_t*)((s0) + 0x10) = v1;                             // 0x001c9cf0: sh $v1, 0x10($s0)
    /* nop */                                                   // 0x001c9cf4: nop 
    v1 = 0xd;                                                   // 0x001c9cf8: addiu $v1, $zero, 0xd
    *(uint16_t*)((s0) + 0x10) = v1;                             // 0x001c9cfc: sh $v1, 0x10($s0)
label_0x1c9d00:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c9d04: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c9d08: jr $ra
    sp = sp + 0x50;                                             // 0x001c9d0c: addiu $sp, $sp, 0x50
}