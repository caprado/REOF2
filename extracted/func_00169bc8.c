void func_00169bc8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00169bc8: addiu $sp, $sp, -0x10
    a2 = 1;                                                     // 0x00169bcc: addiu $a2, $zero, 1
    func_00167980();  // 0x167960                                // 0x00169bd4: jal 0x167960
    a1 = *(int32_t*)((a0) + 0x1ab4);                            // 0x00169bd8: lw $a1, 0x1ab4($a0)
    return;                                                     // 0x00169be4: jr $ra
    sp = sp + 0x10;                                             // 0x00169be8: addiu $sp, $sp, 0x10
}