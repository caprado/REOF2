void func_001c95c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c95c0: addiu $sp, $sp, -0x10
    a0 = 1;                                                     // 0x001c95cc: addiu $a0, $zero, 1
    func_001c8340();  // 0x1c82c0                                // 0x001c95d0: jal 0x1c82c0
    a1 = 4;                                                     // 0x001c95d4: addiu $a1, $zero, 4
    return;                                                     // 0x001c95e4: jr $ra
    sp = sp + 0x10;                                             // 0x001c95e8: addiu $sp, $sp, 0x10
}