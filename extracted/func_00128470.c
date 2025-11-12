void func_00128470() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x20;                                            // 0x00128470: addiu $sp, $sp, -0x20
    func_00128720();  // 0x128520                                // 0x00128488: jal 0x128520
    local_0 = 0;                                                // 0x0012848c: sw $zero, 0($sp)
    return;                                                     // 0x00128494: jr $ra
    sp = sp + 0x20;                                             // 0x00128498: addiu $sp, $sp, 0x20
}