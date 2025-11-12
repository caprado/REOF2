void func_001581c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = -1;                                                    // 0x001581c0: addiu $v0, $zero, -1
    *(uint32_t*)((a0) + 8) = v0;                                // 0x001581c4: sw $v0, 8($a0)
    *(uint32_t*)(a0) = v0;                                      // 0x001581c8: sw $v0, 0($a0)
    return;                                                     // 0x001581cc: jr $ra
    *(uint32_t*)((a0) + 4) = v0;                                // 0x001581d0: sw $v0, 4($a0)
}