void func_00189b20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
label_0x189b20:
    a1 = a1 + -1;                                               // 0x00189b20: addiu $a1, $a1, -1
    if (a1 != 0) goto label_0x189b20;                           // 0x00189b28: bnez $a1, 0x189b20
    a0 = a0 + 0x10;                                             // 0x00189b2c: addiu $a0, $a0, 0x10
    return;                                                     // 0x00189b30: jr $ra
    /* nop */                                                   // 0x00189b34: nop 
}