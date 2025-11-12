void func_0011eb78() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0011eb78: addiu $sp, $sp, -0x30
    func_0011d378();  // 0x11d320                                // 0x0011eb88: jal 0x11d320
    func_0011eb78();  // 0x11eb08                                // 0x0011eb94: jal 0x11eb08
    if (s1 == 0) goto label_0x11ebac;                           // 0x0011eb9c: beqz $s1, 0x11ebac
    func_0011d390();  // 0x11d378                                // 0x0011eba4: jal 0x11d378
    /* nop */                                                   // 0x0011eba8: nop 
label_0x11ebac:
    return;                                                     // 0x0011ebbc: jr $ra
    sp = sp + 0x30;                                             // 0x0011ebc0: addiu $sp, $sp, 0x30
}