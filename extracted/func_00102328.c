void func_00102328() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00102328: addiu $sp, $sp, -0x10
    a1 = a1 & 0xffff;                                           // 0x0010232c: andi $a1, $a1, 0xffff
    return;                                                     // 0x00102364: jr $ra
    sp = sp + 0x10;                                             // 0x00102368: addiu $sp, $sp, 0x10
}