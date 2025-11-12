void func_00150ac8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t0 = 1;                                                     // 0x00150acc: addiu $t0, $zero, 1
    a0 = *(int32_t*)((t2) + 0x50);                              // 0x00150ad0: lw $a0, 0x50($t2)
    v1 = *(int32_t*)((t2) + 4);                                 // 0x00150ad4: lw $v1, 4($t2)
    v0 = *(int32_t*)((t2) + 0x54);                              // 0x00150ad8: lw $v0, 0x54($t2)
    a0 = a0 << 0xc;                                             // 0x00150adc: sll $a0, $a0, 0xc
    a2 = *(int32_t*)((t2) + 8);                                 // 0x00150ae0: lw $a2, 8($t2)
    a0 = a0 | v1;                                               // 0x00150ae4: or $a0, $a0, $v1
    v0 = v0 << 0xc;                                             // 0x00150ae8: sll $v0, $v0, 0xc
    v1 = a0 + 0xf;                                              // 0x00150aec: addiu $v1, $a0, 0xf
    a2 = v0 | a2;                                               // 0x00150af0: or $a2, $v0, $a2
    a3 = *(int32_t*)((t2) + 0x48);                              // 0x00150af4: lw $a3, 0x48($t2)
    a1 = a2 + 0xf;                                              // 0x00150af8: addiu $a1, $a2, 0xf
    v1 = (unsigned)v1 >> 4;                                     // 0x00150afc: srl $v1, $v1, 4
    a1 = (unsigned)a1 >> 4;                                     // 0x00150b00: srl $a1, $a1, 4
    *(uint32_t*)((t2) + 0x2cc) = v1;                            // 0x00150b04: sw $v1, 0x2cc($t2)
    *(uint32_t*)((t2) + 0x2c4) = a0;                            // 0x00150b08: sw $a0, 0x2c4($t2)
    if (a3 != t0) goto label_0x150b20;                          // 0x00150b0c: bne $a3, $t0, 0x150b20
    *(uint32_t*)((t2) + 0x2c8) = a2;                            // 0x00150b10: sw $a2, 0x2c8($t2)
    goto label_0x150b48;                                        // 0x00150b14: b 0x150b48
    *(uint32_t*)((t2) + 0x2d0) = a1;                            // 0x00150b18: sw $a1, 0x2d0($t2)
    /* nop */                                                   // 0x00150b1c: nop 
label_0x150b20:
    v1 = *(int32_t*)((t2) + 0x118);                             // 0x00150b20: lw $v1, 0x118($t2)
    v0 = 3;                                                     // 0x00150b24: addiu $v0, $zero, 3
    if (v1 != v0) goto label_0x150b40;                          // 0x00150b28: bne $v1, $v0, 0x150b40
    v0 = a2 + 0x1f;                                             // 0x00150b2c: addiu $v0, $a2, 0x1f
    v0 = (unsigned)v0 >> 5;                                     // 0x00150b30: srl $v0, $v0, 5
    goto label_0x150b44;                                        // 0x00150b34: b 0x150b44
    v0 = v0 << 1;                                               // 0x00150b38: sll $v0, $v0, 1
    /* nop */                                                   // 0x00150b3c: nop 
label_0x150b40:
    v0 = (unsigned)v0 >> 5;                                     // 0x00150b40: srl $v0, $v0, 5
label_0x150b44:
    *(uint32_t*)((t2) + 0x2d0) = v0;                            // 0x00150b44: sw $v0, 0x2d0($t2)
label_0x150b48:
    a2 = *(int32_t*)((t2) + 0x2cc);                             // 0x00150b48: lw $a2, 0x2cc($t2)
    a3 = *(int32_t*)((t2) + 0x2d0);                             // 0x00150b4c: lw $a3, 0x2d0($t2)
    v1 = *(int32_t*)((t2) + 0x4c);                              // 0x00150b50: lw $v1, 0x4c($t2)
    a2 = a2 << 4;                                               // 0x00150b54: sll $a2, $a2, 4
    a3 = a3 << 4;                                               // 0x00150b58: sll $a3, $a3, 4
    t1 = v1 ^ 1;                                                // 0x00150b60: xori $t1, $v1, 1
    v1 = v1 ^ 3;                                                // 0x00150b64: xori $v1, $v1, 3
    t0 = a2 >> 1;                                               // 0x00150b6c: sra $t0, $a2, 1
    a0 = a3 >> 1;                                               // 0x00150b70: sra $a0, $a3, 1
    if (v1 != 0) a1 = t0;                                       // 0x00150b74: movn $a1, $t0, $v1
    if (t1 == 0) v0 = a0;                                       // 0x00150b78: movz $v0, $a0, $t1
    *(uint32_t*)((t2) + 0x418) = a1;                            // 0x00150b7c: sw $a1, 0x418($t2)
    *(uint32_t*)((t2) + 0x41c) = v0;                            // 0x00150b80: sw $v0, 0x41c($t2)
    *(uint32_t*)((t2) + 0x410) = a2;                            // 0x00150b84: sw $a2, 0x410($t2)
    return;                                                     // 0x00150b88: jr $ra
    *(uint32_t*)((t2) + 0x414) = a3;                            // 0x00150b8c: sw $a3, 0x414($t2)
}