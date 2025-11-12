void func_001154d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x20;                                            // 0x001154d0: addiu $sp, $sp, -0x20
    local_0 = a0;                                               // 0x001154d4: sw $a0, 0($sp)
    GetMemorySize();  // 0x114710                               // 0x001154e0: jal 0x114710
    a0 = 4;                                                     // 0x001154e4: addiu $a0, $zero, 4
    return;                                                     // 0x001154ec: jr $ra
    sp = sp + 0x20;                                             // 0x001154f0: addiu $sp, $sp, 0x20
}