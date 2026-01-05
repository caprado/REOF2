void func_0011ecc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x0011ecc0: addiu $sp, $sp, -0x60
    func_0011d320();  // 11d320                                // 0x0011ece8: jal 0x11d320
    func_0011ebc8();  // 11ebc8                                // 0x0011ed00: jal 0x11ebc8
    if (s4 == 0) goto label_0x11ed18;                           // 0x0011ed08: beqz $s4, 0x11ed18
    func_0011d378();  // 11d378                                // 0x0011ed10: jal 0x11d378
    /* nop */                                                   // 0x0011ed14: nop 
label_0x11ed18:
    return;                                                     // 0x0011ed34: jr $ra
    sp = sp + 0x60;                                             // 0x0011ed38: addiu $sp, $sp, 0x60
}