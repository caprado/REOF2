void func_00176670() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a2 = a2 << 2;                                               // 0x00176670: sll $a2, $a2, 2
    a0 = a0 + a2;                                               // 0x00176674: addu $a0, $a0, $a2
    return;                                                     // 0x00176678: jr $ra
    *(uint32_t*)((a0) + 0xcc0) = a1;                            // 0x0017667c: sw $a1, 0xcc0($a0)
}