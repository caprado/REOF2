void func_00124f08() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00124f08: addiu $sp, $sp, -0x10
    func_00134ce0();  // 134ce0                                // 0x00124f18: jal 0x134ce0
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00124f1c: lw $a0, 8($s0)
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x00124f20: sw $zero, 4($s0)
    return;                                                     // 0x00124f2c: jr $ra
    sp = sp + 0x10;                                             // 0x00124f30: addiu $sp, $sp, 0x10
}