void func_0016f318() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0016f318: addiu $sp, $sp, -0x20
    a0 = *(int32_t*)(s1);                                       // 0x0016f330: lw $a0, 0($s1)
    a1 = *(int32_t*)(s0);                                       // 0x0016f334: lw $a1, 0($s0)
    func_00107ab8();  // 107ab8                                // 0x0016f338: jal 0x107ab8
    a2 = *(int32_t*)((s0) + 4);                                 // 0x0016f33c: lw $a2, 4($s0)
    v1 = *(int32_t*)((s0) + 4);                                 // 0x0016f340: lw $v1, 4($s0)
    *(uint32_t*)((s1) + 4) = v1;                                // 0x0016f348: sw $v1, 4($s1)
    return;                                                     // 0x0016f354: jr $ra
    sp = sp + 0x20;                                             // 0x0016f358: addiu $sp, $sp, 0x20
}