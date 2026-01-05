void func_001ce750() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001ce750: addiu $sp, $sp, -0x20
    func_001cfe70();  // 1cfe70                                // 0x001ce75c: jal 0x1cfe70
    *(uint32_t*)((s0) + 0x14) = 0;                              // 0x001ce764: sw $zero, 0x14($s0)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ce76c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ce770: jr $ra
    sp = sp + 0x20;                                             // 0x001ce774: addiu $sp, $sp, 0x20
}