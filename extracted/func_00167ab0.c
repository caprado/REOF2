void func_00167ab0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00167ab0: addiu $sp, $sp, -0x10
    a1 = 0x31;                                                  // 0x00167ab4: addiu $a1, $zero, 0x31
    func_001752f8();  // 0x1752e8                                // 0x00167ac0: jal 0x1752e8
    if (v0 != 0) goto label_0x167ae4;                           // 0x00167acc: bnez $v0, 0x167ae4
    a1 = 0x38;                                                  // 0x00167ad0: addiu $a1, $zero, 0x38
    func_001752f8();  // 0x1752e8                                // 0x00167ad4: jal 0x1752e8
    /* nop */                                                   // 0x00167ad8: nop 
    if (v0 == 0) goto label_0x167aec;                           // 0x00167adc: beqz $v0, 0x167aec
label_0x167ae4:
    v0 = 1;                                                     // 0x00167ae4: addiu $v0, $zero, 1
label_0x167aec:
    return;                                                     // 0x00167af0: jr $ra
    sp = sp + 0x10;                                             // 0x00167af4: addiu $sp, $sp, 0x10
}