void func_0011e728() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0011e728: addiu $sp, $sp, -0x40
    func_0011d320();  // 11d320                                // 0x0011e740: jal 0x11d320
    func_0011e6d8();  // 11e6d8                                // 0x0011e750: jal 0x11e6d8
    if (s2 == 0) goto label_0x11e768;                           // 0x0011e758: beqz $s2, 0x11e768
    func_0011d378();  // 11d378                                // 0x0011e760: jal 0x11d378
    /* nop */                                                   // 0x0011e764: nop 
label_0x11e768:
    return;                                                     // 0x0011e77c: jr $ra
    sp = sp + 0x40;                                             // 0x0011e780: addiu $sp, $sp, 0x40
}