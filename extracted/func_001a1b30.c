void func_001a1b30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t3 = *(int32_t*)((a0) + 4);                                 // 0x001a1b30: lw $t3, 4($a0)
    t4 = a0 + 0xc;                                              // 0x001a1b34: addiu $t4, $a0, 0xc
    v1 = 0x21;                                                  // 0x001a1b40: addiu $v1, $zero, 0x21
    a1 = 0x23;                                                  // 0x001a1b44: addiu $a1, $zero, 0x23
    a2 = 0x11;                                                  // 0x001a1b48: addiu $a2, $zero, 0x11
    a3 = 0x12;                                                  // 0x001a1b4c: addiu $a3, $zero, 0x12
    t1 = 0xff << 16;                                            // 0x001a1b50: lui $t1, 0xff
    t0 = 0x13;                                                  // 0x001a1b54: addiu $t0, $zero, 0x13
    goto label_0x1a1c1c;                                        // 0x001a1b58: b 0x1a1c1c
    a0 = 0x22;                                                  // 0x001a1b5c: addiu $a0, $zero, 0x22
label_0x1a1b60:
    t5 = *(int32_t*)(t4);                                       // 0x001a1b60: lw $t5, 0($t4)
    t5 = t5 & t1;                                               // 0x001a1b64: and $t5, $t5, $t1
    t5 = (unsigned)t5 >> 0x10;                                  // 0x001a1b68: srl $t5, $t5, 0x10
    if (t5 == t0) goto label_0x1a1bfc;                          // 0x001a1b6c: beq $t5, $t0, 0x1a1bfc
    /* nop */                                                   // 0x001a1b70: nop 
    if (t5 == a3) goto label_0x1a1bec;                          // 0x001a1b74: beq $t5, $a3, 0x1a1bec
    /* nop */                                                   // 0x001a1b78: nop 
    if (t5 == a2) goto label_0x1a1bdc;                          // 0x001a1b7c: beq $t5, $a2, 0x1a1bdc
    /* nop */                                                   // 0x001a1b80: nop 
    if (t5 == a1) goto label_0x1a1bc4;                          // 0x001a1b84: beq $t5, $a1, 0x1a1bc4
    /* nop */                                                   // 0x001a1b88: nop 
    if (t5 == a0) goto label_0x1a1bb4;                          // 0x001a1b8c: beq $t5, $a0, 0x1a1bb4
    /* nop */                                                   // 0x001a1b90: nop 
    if (t5 == v1) goto label_0x1a1ba4;                          // 0x001a1b94: beq $t5, $v1, 0x1a1ba4
    /* nop */                                                   // 0x001a1b98: nop 
    goto label_0x1a1c14;                                        // 0x001a1b9c: b 0x1a1c14
    t5 = *(int32_t*)((t4) + 8);                                 // 0x001a1ba0: lw $t5, 8($t4)
label_0x1a1ba4:
    t5 = *(int32_t*)((t4) + 4);                                 // 0x001a1ba4: lw $t5, 4($t4)
    t5 = t5 << 3;                                               // 0x001a1ba8: sll $t5, $t5, 3
    goto label_0x1a1c10;                                        // 0x001a1bac: b 0x1a1c10
    v0 = v0 + t5;                                               // 0x001a1bb0: addu $v0, $v0, $t5
label_0x1a1bb4:
    t5 = *(int32_t*)((t4) + 4);                                 // 0x001a1bb4: lw $t5, 4($t4)
    t5 = t5 << 4;                                               // 0x001a1bb8: sll $t5, $t5, 4
    goto label_0x1a1c10;                                        // 0x001a1bbc: b 0x1a1c10
    v0 = v0 + t5;                                               // 0x001a1bc0: addu $v0, $v0, $t5
label_0x1a1bc4:
    t6 = *(int32_t*)((t4) + 4);                                 // 0x001a1bc4: lw $t6, 4($t4)
    t5 = t6 << 2;                                               // 0x001a1bc8: sll $t5, $t6, 2
    t5 = t5 + t6;                                               // 0x001a1bcc: addu $t5, $t5, $t6
    t5 = t5 << 2;                                               // 0x001a1bd0: sll $t5, $t5, 2
    goto label_0x1a1c10;                                        // 0x001a1bd4: b 0x1a1c10
    v0 = v0 + t5;                                               // 0x001a1bd8: addu $v0, $v0, $t5
label_0x1a1bdc:
    t5 = *(int32_t*)((t4) + 4);                                 // 0x001a1bdc: lw $t5, 4($t4)
    t5 = t5 << 2;                                               // 0x001a1be0: sll $t5, $t5, 2
    goto label_0x1a1c10;                                        // 0x001a1be4: b 0x1a1c10
    v0 = v0 + t5;                                               // 0x001a1be8: addu $v0, $v0, $t5
label_0x1a1bec:
    t5 = *(int32_t*)((t4) + 4);                                 // 0x001a1bec: lw $t5, 4($t4)
    t5 = t5 << 3;                                               // 0x001a1bf0: sll $t5, $t5, 3
    goto label_0x1a1c10;                                        // 0x001a1bf4: b 0x1a1c10
    v0 = v0 + t5;                                               // 0x001a1bf8: addu $v0, $v0, $t5
label_0x1a1bfc:
    t6 = *(int32_t*)((t4) + 4);                                 // 0x001a1bfc: lw $t6, 4($t4)
    t5 = t6 << 1;                                               // 0x001a1c00: sll $t5, $t6, 1
    t5 = t5 + t6;                                               // 0x001a1c04: addu $t5, $t5, $t6
    t5 = t5 << 2;                                               // 0x001a1c08: sll $t5, $t5, 2
    v0 = v0 + t5;                                               // 0x001a1c0c: addu $v0, $v0, $t5
label_0x1a1c10:
    t5 = *(int32_t*)((t4) + 8);                                 // 0x001a1c10: lw $t5, 8($t4)
label_0x1a1c14:
    t2 = t2 + 1;                                                // 0x001a1c14: addiu $t2, $t2, 1
    t4 = t4 + t5;                                               // 0x001a1c18: addu $t4, $t4, $t5
label_0x1a1c1c:
    t5 = (t2 < t3) ? 1 : 0;                                     // 0x001a1c1c: slt $t5, $t2, $t3
    if (t5 != 0) goto label_0x1a1b60;                           // 0x001a1c20: bnez $t5, 0x1a1b60
    /* nop */                                                   // 0x001a1c24: nop 
    return;                                                     // 0x001a1c28: jr $ra
    /* nop */                                                   // 0x001a1c2c: nop 
}