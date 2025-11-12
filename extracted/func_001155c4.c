void func_001155c4() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x20;                                            // 0x001155c4: addiu $sp, $sp, -0x20
    a1 = a1 >> 0x18;                                            // 0x001155c8: sra $a1, $a1, 0x18
    local_0 = a0;                                               // 0x001155cc: sw $a0, 0($sp)
    local_4 = a1;                                               // 0x001155d0: sw $a1, 4($sp)
    a0 = -7;                                                    // 0x001155d4: addiu $a0, $zero, -7
    GetMemorySize();  // 0x114710                               // 0x001155dc: jal 0x114710
    return;                                                     // 0x001155e8: jr $ra
    sp = sp + 0x20;                                             // 0x001155ec: addiu $sp, $sp, 0x20
}