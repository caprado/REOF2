void func_00163a18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00163a18: addiu $sp, $sp, -0x10
    func_0012b2e0();  // 0x12b2d0                                // 0x00163a24: jal 0x12b2d0
    v1 = 1;                                                     // 0x00163a2c: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x163a48;                          // 0x00163a34: bne $v0, $v1, 0x163a48
    func_00163ba0();  // 0x163b68                                // 0x00163a3c: jal 0x163b68
    /* nop */                                                   // 0x00163a40: nop 
label_0x163a48:
    return;                                                     // 0x00163a54: jr $ra
    sp = sp + 0x10;                                             // 0x00163a58: addiu $sp, $sp, 0x10
}