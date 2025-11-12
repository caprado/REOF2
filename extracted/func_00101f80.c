void func_00101f80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = v1 & 2;                                                // 0x00101f84: andi $v0, $v1, 2
    if (v0 == 0) return;  // Branch to 0x101f98                 // 0x00101f88: beqz $v0, 0x101f98
    v0 = v1 & 4;                                                // 0x00101f8c: andi $v0, $v1, 4
    return;                                                     // 0x00101f90: jr $ra
    v0 = 1;                                                     // 0x00101f94: addiu $v0, $zero, 1
}