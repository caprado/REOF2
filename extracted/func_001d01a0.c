void func_001d01a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001d01a0: addiu $sp, $sp, -0x10
    a1 = 0x33 << 16;                                            // 0x001d01a4: lui $a1, 0x33
    a1 = a1 + -0x4600;                                          // 0x001d01ac: addiu $a1, $a1, -0x4600
    *(uint32_t*)((gp) + -0x7b84) = a0;                          // 0x001d01b0: sw $a0, -0x7b84($gp)
    a2 = 0x400;                                                 // 0x001d01b4: addiu $a2, $zero, 0x400
    a0 = 0x33 << 16;                                            // 0x001d01b8: lui $a0, 0x33
    func_001ce750();  // 0x1ce720                                // 0x001d01bc: jal 0x1ce720
    a0 = a0 + -0x4200;                                          // 0x001d01c0: addiu $a0, $a0, -0x4200
    return;                                                     // 0x001d01cc: jr $ra
    sp = sp + 0x10;                                             // 0x001d01d0: addiu $sp, $sp, 0x10
}