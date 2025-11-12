void func_00130468() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (a1 < 0) return;  // Branch to 0x130478                  // 0x00130468: bltz $a1, 0x130478
    return;                                                     // 0x00130470: jr $ra
    *(uint32_t*)((a2) + 0x2c) = a1;                             // 0x00130474: sw $a1, 0x2c($a2)
}