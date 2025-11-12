void func_00111530() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8, local_c;
    
    sp = sp + -0x20;                                            // 0x00111530: addiu $sp, $sp, -0x20
    local_0 = a0;                                               // 0x00111534: sw $a0, 0($sp)
    local_4 = a1;                                               // 0x00111540: sw $a1, 4($sp)
    local_8 = a2;                                               // 0x00111544: sw $a2, 8($sp)
    func_001114d0();  // 0x111418                                // 0x00111548: jal 0x111418
    local_c = a3;                                               // 0x0011154c: sw $a3, 0xc($sp)
    return;                                                     // 0x00111554: jr $ra
    sp = sp + 0x20;                                             // 0x00111558: addiu $sp, $sp, 0x20
}