void func_001af7d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001af7d0: addiu $sp, $sp, -0x10
    func_001afb80();  // 0x1afb40                                // 0x001af7d8: jal 0x1afb40
    /* nop */                                                   // 0x001af7dc: nop 
    v1 = 1;                                                     // 0x001af7e0: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x1af7f4;                          // 0x001af7e4: bne $v0, $v1, 0x1af7f4
    /* nop */                                                   // 0x001af7e8: nop 
    func_007d2f70();  // 0x7d2f70                               // 0x001af7ec: jal 0x7d2f70
    /* nop */                                                   // 0x001af7f0: nop 
label_0x1af7f4:
    return;                                                     // 0x001af7f8: jr $ra
    sp = sp + 0x10;                                             // 0x001af7fc: addiu $sp, $sp, 0x10
}