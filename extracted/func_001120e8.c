void func_001120e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8;
    
    sp = sp + -0x30;                                            // 0x001120e8: addiu $sp, $sp, -0x30
    local_0 = a0;                                               // 0x001120ec: sw $a0, 0($sp)
    local_4 = a1;                                               // 0x001120f8: sw $a1, 4($sp)
    local_8 = a2;                                               // 0x001120fc: sw $a2, 8($sp)
    func_00111678();  // 0x1115a0                                // 0x00112100: jal 0x1115a0
    return;                                                     // 0x0011210c: jr $ra
    sp = sp + 0x30;                                             // 0x00112110: addiu $sp, $sp, 0x30
}