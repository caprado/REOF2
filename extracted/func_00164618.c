void func_00164618() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00164618: addiu $sp, $sp, -0x10
    func_0012a028();  // 0x129ea8                                // 0x00164620: jal 0x129ea8
    /* nop */                                                   // 0x00164624: nop 
    func_0012c5f0();  // 0x12c5d8                                // 0x00164628: jal 0x12c5d8
    /* nop */                                                   // 0x0016462c: nop 
    a0 = 0x26 << 16;                                            // 0x00164630: lui $a0, 0x26
    a0 = a0 + 0x1ed0;                                           // 0x00164638: addiu $a0, $a0, 0x1ed0
    func_00156058();  // 0x155f90                                // 0x0016463c: jal 0x155f90
    a2 = 7;                                                     // 0x00164640: addiu $a2, $zero, 7
    return;                                                     // 0x0016464c: jr $ra
    sp = sp + 0x10;                                             // 0x00164650: addiu $sp, $sp, 0x10
}