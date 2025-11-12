void func_001703f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (a0 == 0) return;  // Branch to 0x170418                 // 0x001703f8: beqz $a0, 0x170418
    v0 = 4;                                                     // 0x001703fc: addiu $v0, $zero, 4
    v1 = *(int32_t*)(a0);                                       // 0x00170400: lw $v1, 0($a0)
    if (v1 != v0) return;  // Branch to 0x170418                // 0x00170404: bnel $v1, $v0, 0x170418
    *(uint32_t*)(a0) = 0;                                       // 0x00170408: sw $zero, 0($a0)
    v0 = 2;                                                     // 0x0017040c: addiu $v0, $zero, 2
    return;                                                     // 0x00170410: jr $ra
    *(uint32_t*)(a0) = v0;                                      // 0x00170414: sw $v0, 0($a0)
}