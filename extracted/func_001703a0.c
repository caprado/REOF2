void func_001703a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (a0 == 0) goto label_0x1703ac;                           // 0x001703a0: beqz $a0, 0x1703ac
    v0 = 2;                                                     // 0x001703a4: addiu $v0, $zero, 2
    *(uint32_t*)(a0) = v0;                                      // 0x001703a8: sw $v0, 0($a0)
label_0x1703ac:
    return;                                                     // 0x001703ac: jr $ra
    /* nop */                                                   // 0x001703b0: nop 
}