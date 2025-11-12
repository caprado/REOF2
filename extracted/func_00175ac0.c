void func_00175ac0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00175ac0: addiu $sp, $sp, -0x10
    func_00175b80();  // 0x175b10                                // 0x00175acc: jal 0x175b10
    func_001752f8();  // 0x1752e8                                // 0x00175ad8: jal 0x1752e8
    a1 = 0x47;                                                  // 0x00175adc: addiu $a1, $zero, 0x47
    v1 = 1;                                                     // 0x00175ae0: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x175b00;                          // 0x00175ae4: bne $v0, $v1, 0x175b00
    return func_00176670();  // Tail call                        // 0x00175af4: j 0x1765f0
    sp = sp + 0x10;                                             // 0x00175af8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00175afc: nop 
label_0x175b00:
    return;                                                     // 0x00175b08: jr $ra
    sp = sp + 0x10;                                             // 0x00175b0c: addiu $sp, $sp, 0x10
}