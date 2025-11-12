void func_0010b4b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int8_t*)(a0);                                        // 0x0010b4b0: lb $v0, 0($a0)
    if (v0 != 0) return;  // Branch to 0x10b4d0                 // 0x0010b4b4: bnez $v0, 0x10b4d0
    v1 = *(int8_t*)(a1);                                        // 0x0010b4b8: lb $v1, 0($a1)
    return;                                                     // 0x0010b4c0: jr $ra
    if (v1 == 0) v0 = a0;                                       // 0x0010b4c4: movz $v0, $a0, $v1
}