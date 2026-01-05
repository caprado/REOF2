void func_00114ab8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00114ab8: addiu $sp, $sp, -0x10
    v0 = 1;                                                     // 0x00114abc: addiu $v0, $zero, 1
    if (a0 != v0) goto label_0x114ad0;                          // 0x00114ac0: bne $a0, $v0, 0x114ad0
    func_0011d9c8();  // 11d9c8                                // 0x00114ac8: jal 0x11d9c8
label_0x114ad0:
    return;                                                     // 0x00114ad8: jr $ra
    sp = sp + 0x10;                                             // 0x00114adc: addiu $sp, $sp, 0x10
}