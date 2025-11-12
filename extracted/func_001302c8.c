void func_001302c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a0) + 8);                                 // 0x001302c8: lw $v1, 8($a0)
    if (v1 == 0) goto label_0x1302d8;                           // 0x001302cc: beqz $v1, 0x1302d8
    v0 = *(int32_t*)((a0) + 0x54);                              // 0x001302d4: lw $v0, 0x54($a0)
label_0x1302d8:
    return;                                                     // 0x001302d8: jr $ra
    /* nop */                                                   // 0x001302dc: nop 
}