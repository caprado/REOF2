void func_0017d050() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = a0 + 0x14;                                             // 0x0017d050: addiu $a0, $a0, 0x14
    v1 = 1;                                                     // 0x0017d054: addiu $v1, $zero, 1
    v0 = *(int32_t*)(a0);                                       // 0x0017d058: lw $v0, 0($a0)
    if (v0 == v1) return;  // Branch to 0x17d070                // 0x0017d05c: beql $v0, $v1, 0x17d070
    v0 = *(int32_t*)((a0) + 8);                                 // 0x0017d060: lw $v0, 8($a0)
    *(uint32_t*)(a1) = 0;                                       // 0x0017d064: sw $zero, 0($a1)
    return;                                                     // 0x0017d068: jr $ra
    *(uint32_t*)(a2) = 0;                                       // 0x0017d06c: sw $zero, 0($a2)
}