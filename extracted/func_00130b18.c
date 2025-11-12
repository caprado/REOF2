void func_00130b18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00130b18: addiu $sp, $sp, -0x10
    func_00135c78();  // 0x135c10                                // 0x00130b28: jal 0x135c10
    a0 = *(int32_t*)((a0) + 8);                                 // 0x00130b2c: lw $a0, 8($a0)
    *(uint32_t*)(s0) = v0;                                      // 0x00130b30: sw $v0, 0($s0)
    return;                                                     // 0x00130b3c: jr $ra
    sp = sp + 0x10;                                             // 0x00130b40: addiu $sp, $sp, 0x10
}