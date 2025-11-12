void func_001741d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = a0 + 4;                                                // 0x001741d8: addiu $v1, $a0, 4
    a1 = -3;                                                    // 0x001741dc: addiu $a1, $zero, -3
    v0 = 1;                                                     // 0x001741e0: addiu $v0, $zero, 1
    *(uint32_t*)((v1) + 4) = a1;                                // 0x001741e4: sw $a1, 4($v1)
    *(uint32_t*)((v1) + 8) = v0;                                // 0x001741e8: sw $v0, 8($v1)
    *(uint32_t*)(a0) = 0;                                       // 0x001741ec: sw $zero, 0($a0)
    return;                                                     // 0x001741f0: jr $ra
    *(uint32_t*)(v1) = 0;                                       // 0x001741f4: sw $zero, 0($v1)
}