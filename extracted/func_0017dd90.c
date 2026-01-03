void func_0017dd90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x30;                                            // 0x0017dd90: addiu $sp, $sp, -0x30
    *(uint32_t*)(s1) = 0;                                       // 0x0017ddac: sw $zero, 0($s1)
    func_0017d628();  // 17d628                                // 0x0017ddb0: jal 0x17d628
    a3 = sp + 4;                                                // 0x0017ddb4: addiu $a3, $sp, 4
    a1 = local_0;                                               // 0x0017ddbc: lw $a1, 0($sp)
    func_0017dde0();  // 17dde0                                // 0x0017ddc4: jal 0x17dde0
    a2 = local_4;                                               // 0x0017ddc8: lw $a2, 4($sp)
    return;                                                     // 0x0017ddd8: jr $ra
    sp = sp + 0x30;                                             // 0x0017dddc: addiu $sp, $sp, 0x30
}