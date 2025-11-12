void func_0011e5a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0011e5a0: addiu $sp, $sp, -0x30
    func_0011d378();  // 0x11d320                                // 0x0011e5b0: jal 0x11d320
    /* nop */                                                   // 0x0011e5b4: nop 
    func_0011e5a0();  // 0x11e530                                // 0x0011e5b8: jal 0x11e530
    if (s0 == 0) goto label_0x11e5d0;                           // 0x0011e5c0: beqz $s0, 0x11e5d0
    func_0011d390();  // 0x11d378                                // 0x0011e5c8: jal 0x11d378
    /* nop */                                                   // 0x0011e5cc: nop 
label_0x11e5d0:
    return;                                                     // 0x0011e5e0: jr $ra
    sp = sp + 0x30;                                             // 0x0011e5e4: addiu $sp, $sp, 0x30
}