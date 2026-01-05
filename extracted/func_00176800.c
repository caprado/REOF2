void func_00176800() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00176800: addiu $sp, $sp, -0x20
    a0 = 0 | 0xea60;                                            // 0x0017680c: ori $a0, $zero, 0xea60
    func_00176720();  // 176720                                // 0x00176818: jal 0x176720
    *(uint32_t*)(s0) = s1;                                      // 0x00176820: sw $s1, 0($s0)
    return;                                                     // 0x00176830: jr $ra
    sp = sp + 0x20;                                             // 0x00176834: addiu $sp, $sp, 0x20
}