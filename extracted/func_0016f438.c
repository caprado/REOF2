void func_0016f438() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0016f438: addiu $sp, $sp, -0x10
    func_00166db8();  // 0x166da0                                // 0x0016f444: jal 0x166da0
    a1 = *(int32_t*)((a0) + 0x1b38);                            // 0x0016f448: lw $a1, 0x1b38($a0)
    return;                                                     // 0x0016f450: jr $ra
    sp = sp + 0x10;                                             // 0x0016f454: addiu $sp, $sp, 0x10
}