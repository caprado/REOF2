void func_001697e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = a0 + 0x1fc;                                            // 0x001697e8: addiu $a0, $a0, 0x1fc
    *(uint32_t*)((a0) + 4) = 0;                                 // 0x001697ec: sw $zero, 4($a0)
    return;                                                     // 0x001697f0: jr $ra
    *(uint32_t*)(a0) = 0;                                       // 0x001697f4: sw $zero, 0($a0)
}