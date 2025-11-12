void func_00147d70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    *(uint32_t*)((a0) + 0xc) = a1;                              // 0x00147d70: sw $a1, 0xc($a0)
    *(uint32_t*)((a0) + 4) = a2;                                // 0x00147d74: sw $a2, 4($a0)
    *(uint32_t*)(a0) = a1;                                      // 0x00147d78: sw $a1, 0($a0)
    return;                                                     // 0x00147d7c: jr $ra
    *(uint32_t*)((a0) + 8) = a1;                                // 0x00147d80: sw $a1, 8($a0)
}