void func_001703d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (a0 == 0) return;  // Branch to 0x1703f0                 // 0x001703d0: beqz $a0, 0x1703f0
    v0 = 4;                                                     // 0x001703d4: addiu $v0, $zero, 4
    v1 = *(int32_t*)(a0);                                       // 0x001703d8: lw $v1, 0($a0)
    if (v1 != v0) return;  // Branch to 0x1703f0                // 0x001703dc: bnel $v1, $v0, 0x1703f0
    *(uint32_t*)(a0) = 0;                                       // 0x001703e0: sw $zero, 0($a0)
    v0 = 3;                                                     // 0x001703e4: addiu $v0, $zero, 3
    return;                                                     // 0x001703e8: jr $ra
    *(uint32_t*)(a0) = v0;                                      // 0x001703ec: sw $v0, 0($a0)
}