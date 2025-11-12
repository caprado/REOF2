void func_00137ec8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x20 << 16;                                            // 0x00137ec8: lui $v1, 0x20
    v0 = 0x20 << 16;                                            // 0x00137ecc: lui $v0, 0x20
    v1 = v1 + 0x21f4;                                           // 0x00137ed0: addiu $v1, $v1, 0x21f4
    v0 = v0 + 0x21f0;                                           // 0x00137ed4: addiu $v0, $v0, 0x21f0
    a1 = g_002021f4;  // Global at 0x002021f4                   // 0x00137ed8: lw $a1, 0($v1)
    g_002021f0 = a1;  // Global at 0x002021f0                   // 0x00137edc: sw $a1, 0($v0)
    return;                                                     // 0x00137ee0: jr $ra
    g_002021f4 = a0;  // Global at 0x002021f4                   // 0x00137ee4: sw $a0, 0($v1)
}