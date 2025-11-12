void func_00175958() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    *(uint32_t*)((a0) + 0x18) = 0;                              // 0x00175958: sw $zero, 0x18($a0)
    *(uint32_t*)(a0) = 0;                                       // 0x0017595c: sw $zero, 0($a0)
    *(uint32_t*)((a0) + 4) = 0;                                 // 0x00175960: sw $zero, 4($a0)
    *(uint32_t*)((a0) + 8) = 0;                                 // 0x00175964: sw $zero, 8($a0)
    *(uint32_t*)((a0) + 0xc) = 0;                               // 0x00175968: sw $zero, 0xc($a0)
    *(uint32_t*)((a0) + 0x10) = 0;                              // 0x0017596c: sw $zero, 0x10($a0)
    return;                                                     // 0x00175970: jr $ra
    *(uint32_t*)((a0) + 0x14) = 0;                              // 0x00175974: sw $zero, 0x14($a0)
}