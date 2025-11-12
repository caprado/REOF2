void func_001a5820() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a2 = *(int32_t*)(a1);                                       // 0x001a5820: lw $a2, 0($a1)
    v1 = a0 | 1;                                                // 0x001a5824: ori $v1, $a0, 1
    *(uint32_t*)(a1) = v1;                                      // 0x001a5828: sw $v1, 0($a1)
    return;                                                     // 0x001a582c: jr $ra
    *(uint32_t*)(a0) = a2;                                      // 0x001a5830: sw $a2, 0($a0)
}