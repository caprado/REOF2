void func_00177110() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = -1;                                                    // 0x00177110: addiu $v0, $zero, -1
    *(uint32_t*)((a0) + 0x18) = 0;                              // 0x00177118: sw $zero, 0x18($a0)
    return;                                                     // 0x00177124: jr $ra
}