void func_0011d378() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = COP0_REG12;  // Read system control register           // 0x0011d378: mfc0 $v0, $12, 0
    v1 = 1 << 16;                                               // 0x0011d37c: lui $v1, 1
    v0 = v0 & v1;                                               // 0x0011d380: and $v0, $v0, $v1
    return;                                                     // 0x0011d388: jr $ra
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x0011d38c: sltu $v0, $zero, $v0
}