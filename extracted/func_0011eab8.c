void func_0011eab8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0011eab8: addiu $sp, $sp, -0x30
    func_0011d378();  // 0x11d320                                // 0x0011eac8: jal 0x11d320
    func_0011eab8();  // 0x11ea70                                // 0x0011ead4: jal 0x11ea70
    if (s1 == 0) goto label_0x11eaec;                           // 0x0011eadc: beqz $s1, 0x11eaec
    func_0011d390();  // 0x11d378                                // 0x0011eae4: jal 0x11d378
    /* nop */                                                   // 0x0011eae8: nop 
label_0x11eaec:
    return;                                                     // 0x0011eafc: jr $ra
    sp = sp + 0x30;                                             // 0x0011eb00: addiu $sp, $sp, 0x30
}