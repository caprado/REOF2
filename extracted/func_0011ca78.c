void func_0011ca78() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0011ca78: addiu $sp, $sp, -0x30
    v0 = 0x1f << 16;                                            // 0x0011ca7c: lui $v0, 0x1f
    s0 = 0x12 << 16;                                            // 0x0011ca88: lui $s0, 0x12
    s0 = s0 + -0x3040;                                          // 0x0011ca8c: addiu $s0, $s0, -0x3040
    g_001f0738 = s1;  // Global at 0x001f0738                   // 0x0011ca94: sw $s1, 0x738($v0)
    AddIntcHandler2();  // 0x113f90                             // 0x0011caa0: jal 0x113f90
    a0 = 1;                                                     // 0x0011caa4: addiu $a0, $zero, 1
    AddIntcHandler2();  // 0x113f90                             // 0x0011caac: jal 0x113f90
    a0 = 2;                                                     // 0x0011cab0: addiu $a0, $zero, 2
    AddIntcHandler2();  // 0x113f90                             // 0x0011cab8: jal 0x113f90
    a0 = 3;                                                     // 0x0011cabc: addiu $a0, $zero, 3
    return;                                                     // 0x0011cad0: jr $ra
    sp = sp + 0x30;                                             // 0x0011cad4: addiu $sp, $sp, 0x30
}