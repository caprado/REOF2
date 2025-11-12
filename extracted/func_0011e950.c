void func_0011e950() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0011e950: addiu $sp, $sp, -0x30
    func_0011d378();  // 0x11d320                                // 0x0011e960: jal 0x11d320
    func_0011e950();  // 0x11e888                                // 0x0011e96c: jal 0x11e888
    if (s1 == 0) goto label_0x11e984;                           // 0x0011e974: beqz $s1, 0x11e984
    func_0011d390();  // 0x11d378                                // 0x0011e97c: jal 0x11d378
    /* nop */                                                   // 0x0011e980: nop 
label_0x11e984:
    return;                                                     // 0x0011e994: jr $ra
    sp = sp + 0x30;                                             // 0x0011e998: addiu $sp, $sp, 0x30
}