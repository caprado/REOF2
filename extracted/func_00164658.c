void func_00164658() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00164658: addiu $sp, $sp, -0x10
    func_0012c608();  // 0x12c5f0                                // 0x00164660: jal 0x12c5f0
    /* nop */                                                   // 0x00164664: nop 
    func_0012a118();  // 0x12a048                                // 0x00164668: jal 0x12a048
    /* nop */                                                   // 0x0016466c: nop 
    return;                                                     // 0x00164678: jr $ra
    sp = sp + 0x10;                                             // 0x0016467c: addiu $sp, $sp, 0x10
}