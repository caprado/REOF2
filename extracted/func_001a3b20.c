void func_001a3b20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a3b20: addiu $sp, $sp, -0x10
    func_001a3570();  // 0x1a34c0                                // 0x001a3b30: jal 0x1a34c0
    func_001a3320();  // 0x1a32e0                                // 0x001a3b3c: jal 0x1a32e0
    goto label_0x1a3b94;                                        // 0x001a3b48: b 0x1a3b94
label_0x1a3b50:
    func_001a3420();  // 0x1a33a0                                // 0x001a3b50: jal 0x1a33a0
    goto label_0x1a3b84;                                        // 0x001a3b5c: b 0x1a3b84
label_0x1a3b64:
    func_001a3570();  // 0x1a34c0                                // 0x001a3b68: jal 0x1a34c0
    if (t4 == v0) goto label_0x1a3b80;                          // 0x001a3b70: beq $t4, $v0, 0x1a3b80
    /* nop */                                                   // 0x001a3b74: nop 
    goto label_0x1a3ba4;                                        // 0x001a3b78: b 0x1a3ba4
    v0 = 1;                                                     // 0x001a3b7c: addiu $v0, $zero, 1
label_0x1a3b80:
    t7 = t7 + 1;                                                // 0x001a3b80: addiu $t7, $t7, 1
label_0x1a3b84:
    v0 = (t7 < t5) ? 1 : 0;                                     // 0x001a3b84: slt $v0, $t7, $t5
    if (v0 != 0) goto label_0x1a3b64;                           // 0x001a3b88: bnez $v0, 0x1a3b64
    t8 = t8 + 1;                                                // 0x001a3b90: addiu $t8, $t8, 1
label_0x1a3b94:
    v0 = (t8 < t6) ? 1 : 0;                                     // 0x001a3b94: slt $v0, $t8, $t6
    if (v0 != 0) goto label_0x1a3b50;                           // 0x001a3b98: bnez $v0, 0x1a3b50
label_0x1a3ba4:
    return;                                                     // 0x001a3ba8: jr $ra
    sp = sp + 0x10;                                             // 0x001a3bac: addiu $sp, $sp, 0x10
}