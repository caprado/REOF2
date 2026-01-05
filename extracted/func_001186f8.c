void func_001186f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001186f8: addiu $sp, $sp, -0x10
    v0 = 0x1f << 16;                                            // 0x001186fc: lui $v0, 0x1f
    a0 = 0x25 << 16;                                            // 0x00118700: lui $a0, 0x25
    g_001f03dc = 0;  // Global at 0x001f03dc                    // 0x00118708: sw $zero, 0x3dc($v0)
    a0 = a0 + -0x718;                                           // 0x0011870c: addiu $a0, $a0, -0x718
    func_00107c70();  // 107c70                                // 0x00118714: jal 0x107c70
    a2 = 4;                                                     // 0x00118718: addiu $a2, $zero, 4
    return;                                                     // 0x00118724: jr $ra
    sp = sp + 0x10;                                             // 0x00118728: addiu $sp, $sp, 0x10
}