void func_00148e38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00148e38: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 0x40);                              // 0x00148e40: lw $a0, 0x40($a0)
    func_00113a28();  // 0x113940                                // 0x00148e44: jal 0x113940
    a0 = a0 + 0x68;                                             // 0x00148e48: addiu $a0, $a0, 0x68
    v0 = 1;                                                     // 0x00148e50: addiu $v0, $zero, 1
    return;                                                     // 0x00148e54: jr $ra
    sp = sp + 0x10;                                             // 0x00148e58: addiu $sp, $sp, 0x10
}