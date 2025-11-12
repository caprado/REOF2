void func_00170230() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a0) + 0x1b30);                            // 0x00170230: lw $v1, 0x1b30($a0)
    return;                                                     // 0x00170234: jr $ra
    v0 = *(int32_t*)((v1) + 0x7c);                              // 0x00170238: lw $v0, 0x7c($v1)
}