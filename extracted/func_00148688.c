void func_00148688() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a1 >> 4;                                               // 0x00148688: sra $v0, $a1, 4
    v1 = a2 >> 4;                                               // 0x0014868c: sra $v1, $a2, 4
    *(uint32_t*)((a0) + 0xc) = v0;                              // 0x00148690: sw $v0, 0xc($a0)
    *(uint32_t*)((a0) + 0x10) = v1;                             // 0x00148694: sw $v1, 0x10($a0)
    v0 = 1;                                                     // 0x00148698: addiu $v0, $zero, 1
    *(uint32_t*)((a0) + 4) = a1;                                // 0x0014869c: sw $a1, 4($a0)
    return;                                                     // 0x001486a0: jr $ra
    *(uint32_t*)((a0) + 8) = a2;                                // 0x001486a4: sw $a2, 8($a0)
}