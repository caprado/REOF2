void func_00163a60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00163a60: addiu $sp, $sp, -0x20
    func_0012b2d0();  // 12b2d0                                // 0x00163a78: jal 0x12b2d0
    v0 = 1;                                                     // 0x00163a84: addiu $v0, $zero, 1
    if (s2 != v0) goto label_0x163ab0;                          // 0x00163a88: bne $s2, $v0, 0x163ab0
    func_00163b48();  // 163b48                                // 0x00163a90: jal 0x163b48
    /* nop */                                                   // 0x00163a94: nop 
    if (v0 != s2) goto label_0x163ac4;                          // 0x00163a98: bne $v0, $s2, 0x163ac4
    func_00163cf8();  // 163cf8                                // 0x00163aa0: jal 0x163cf8
    /* nop */                                                   // 0x00163aa4: nop 
    goto label_0x163ac4;                                        // 0x00163aa8: b 0x163ac4
label_0x163ab0:
    func_00163b68();  // 163b68                                // 0x00163ab0: jal 0x163b68
    /* nop */                                                   // 0x00163ab4: nop 
    func_00163cf8();  // 163cf8                                // 0x00163ab8: jal 0x163cf8
label_0x163ac4:
    return;                                                     // 0x00163ad8: jr $ra
    sp = sp + 0x20;                                             // 0x00163adc: addiu $sp, $sp, 0x20
}