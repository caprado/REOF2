void func_0019d830() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t0 = 1;                                                     // 0x0019d838: addiu $t0, $zero, 1
    t1 = 2;                                                     // 0x0019d83c: addiu $t1, $zero, 2
    t2 = 0xa;                                                   // 0x0019d840: addiu $t2, $zero, 0xa
    t3 = 0x13;                                                  // 0x0019d844: addiu $t3, $zero, 0x13
    goto label_0x19d8bc;                                        // 0x0019d848: b 0x19d8bc
    t4 = 0x14;                                                  // 0x0019d84c: addiu $t4, $zero, 0x14
label_0x19d850:
    if (a0 == t4) goto label_0x19d8a8;                          // 0x0019d850: beq $a0, $t4, 0x19d8a8
    /* multiply: a1 * a2 -> hi:lo */                            // 0x0019d854: mult $ac3, $a1, $a2
    if (a0 == t3) goto label_0x19d8a0;                          // 0x0019d858: beq $a0, $t3, 0x19d8a0
    /* multiply: a1 * a2 -> hi:lo */                            // 0x0019d85c: mult $ac3, $a1, $a2
    if (a0 == t2) goto label_0x19d894;                          // 0x0019d860: beq $a0, $t2, 0x19d894
    /* multiply: a1 * a2 -> hi:lo */                            // 0x0019d864: mult $ac3, $a1, $a2
    if (a0 == t1) goto label_0x19d894;                          // 0x0019d868: beq $a0, $t1, 0x19d894
    /* nop */                                                   // 0x0019d86c: nop 
    if (a0 == t0) goto label_0x19d888;                          // 0x0019d870: beq $a0, $t0, 0x19d888
    /* multiply: a1 * a2 -> hi:lo */                            // 0x0019d874: mult $ac3, $a1, $a2
    if (a0 == 0) goto label_0x19d888;                           // 0x0019d878: beqz $a0, 0x19d888
    /* nop */                                                   // 0x0019d87c: nop 
    goto label_0x19d8b4;                                        // 0x0019d880: b 0x19d8b4
    a1 = a1 >> 1;                                               // 0x0019d884: sra $a1, $a1, 1
label_0x19d888:
    v1 = v1 << 2;                                               // 0x0019d888: sll $v1, $v1, 2
    goto label_0x19d8b0;                                        // 0x0019d88c: b 0x19d8b0
    v0 = v0 + v1;                                               // 0x0019d890: addu $v0, $v0, $v1
label_0x19d894:
    v1 = v1 << 1;                                               // 0x0019d894: sll $v1, $v1, 1
    goto label_0x19d8b0;                                        // 0x0019d898: b 0x19d8b0
    v0 = v0 + v1;                                               // 0x0019d89c: addu $v0, $v0, $v1
label_0x19d8a0:
    goto label_0x19d8b0;                                        // 0x0019d8a0: b 0x19d8b0
    v0 = v0 + v1;                                               // 0x0019d8a4: addu $v0, $v0, $v1
label_0x19d8a8:
    v1 = v1 >> 1;                                               // 0x0019d8a8: sra $v1, $v1, 1
    v0 = v0 + v1;                                               // 0x0019d8ac: addu $v0, $v0, $v1
label_0x19d8b0:
    a1 = a1 >> 1;                                               // 0x0019d8b0: sra $a1, $a1, 1
label_0x19d8b4:
    a2 = a2 >> 1;                                               // 0x0019d8b4: sra $a2, $a2, 1
    t5 = t5 + 1;                                                // 0x0019d8b8: addiu $t5, $t5, 1
label_0x19d8bc:
    v1 = (t5 < a3) ? 1 : 0;                                     // 0x0019d8bc: slt $v1, $t5, $a3
    if (v1 != 0) goto label_0x19d850;                           // 0x0019d8c0: bnez $v1, 0x19d850
    /* nop */                                                   // 0x0019d8c4: nop 
    return;                                                     // 0x0019d8c8: jr $ra
    /* nop */                                                   // 0x0019d8cc: nop 
}