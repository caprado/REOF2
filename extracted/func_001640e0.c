void func_001640e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001640e0: addiu $sp, $sp, -0x10
    if (a0 == 0) goto label_0x1640fc;                           // 0x001640e8: beqz $a0, 0x1640fc
    func_00130b00();  // 0x130ae8                                // 0x001640f0: jal 0x130ae8
    /* nop */                                                   // 0x001640f4: nop 
label_0x1640fc:
    return;                                                     // 0x00164100: jr $ra
    sp = sp + 0x10;                                             // 0x00164104: addiu $sp, $sp, 0x10
}