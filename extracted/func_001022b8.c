void func_001022b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = 1;                                                     // 0x001022bc: addiu $a0, $zero, 1
    v0 = v1 & 0xf;                                              // 0x001022c0: andi $v0, $v1, 0xf
    if (v0 != a0) return;  // Branch to 0x1022d4                // 0x001022c4: bne $v0, $a0, 0x1022d4
    v1 = v1 & 0xf00;                                            // 0x001022c8: andi $v1, $v1, 0xf00
    return;                                                     // 0x001022cc: jr $ra
    v0 = 1;                                                     // 0x001022d0: addiu $v0, $zero, 1
}