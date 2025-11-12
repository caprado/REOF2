void func_0016cf70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0016cf70: addiu $sp, $sp, -0x20
    func_0016d090();  // 0x16cfc0                                // 0x0016cf84: jal 0x16cfc0
    v1 = -1;                                                    // 0x0016cf8c: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x16cfa8;                          // 0x0016cf94: beq $v0, $v1, 0x16cfa8
    func_0016d288();  // 0x16d1c8                                // 0x0016cf9c: jal 0x16d1c8
    /* nop */                                                   // 0x0016cfa0: nop 
label_0x16cfa8:
    return;                                                     // 0x0016cfb4: jr $ra
    sp = sp + 0x20;                                             // 0x0016cfb8: addiu $sp, $sp, 0x20
}