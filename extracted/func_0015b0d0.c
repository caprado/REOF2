void func_0015b0d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = 1;                                                     // 0x0015b0d0: addiu $a1, $zero, 1
    v1 = -1;                                                    // 0x0015b0d4: addiu $v1, $zero, -1
    v0 = 3;                                                     // 0x0015b0d8: addiu $v0, $zero, 3
    *(uint32_t*)((a0) + 0x50) = a1;                             // 0x0015b0dc: sw $a1, 0x50($a0)
    *(uint32_t*)((a0) + 0x38) = v0;                             // 0x0015b0e0: sw $v0, 0x38($a0)
    *(uint32_t*)((a0) + 0x48) = v1;                             // 0x0015b0e4: sw $v1, 0x48($a0)
    *(uint32_t*)(a0) = 0;                                       // 0x0015b0e8: sw $zero, 0($a0)
    *(uint32_t*)((a0) + 4) = 0;                                 // 0x0015b0ec: sw $zero, 4($a0)
    *(uint32_t*)((a0) + 8) = 0;                                 // 0x0015b0f0: sw $zero, 8($a0)
    *(uint32_t*)((a0) + 0xc) = 0;                               // 0x0015b0f4: sw $zero, 0xc($a0)
    *(uint32_t*)((a0) + 0x10) = 0;                              // 0x0015b0f8: sw $zero, 0x10($a0)
    *(uint32_t*)((a0) + 0x14) = 0;                              // 0x0015b0fc: sw $zero, 0x14($a0)
    *(uint32_t*)((a0) + 0x18) = 0;                              // 0x0015b100: sw $zero, 0x18($a0)
    *(uint32_t*)((a0) + 0x1c) = 0;                              // 0x0015b104: sw $zero, 0x1c($a0)
    *(uint32_t*)((a0) + 0x20) = 0;                              // 0x0015b108: sw $zero, 0x20($a0)
    *(uint32_t*)((a0) + 0x24) = 0;                              // 0x0015b10c: sw $zero, 0x24($a0)
    *(uint32_t*)((a0) + 0x28) = 0;                              // 0x0015b110: sw $zero, 0x28($a0)
    *(uint32_t*)((a0) + 0x2c) = 0;                              // 0x0015b114: sw $zero, 0x2c($a0)
    *(uint32_t*)((a0) + 0x30) = 0;                              // 0x0015b118: sw $zero, 0x30($a0)
    *(uint32_t*)((a0) + 0x34) = 0;                              // 0x0015b11c: sw $zero, 0x34($a0)
    *(uint32_t*)((a0) + 0x3c) = a1;                             // 0x0015b120: sw $a1, 0x3c($a0)
    *(uint32_t*)((a0) + 0x40) = v1;                             // 0x0015b124: sw $v1, 0x40($a0)
    *(uint32_t*)((a0) + 0x44) = v1;                             // 0x0015b128: sw $v1, 0x44($a0)
    return;                                                     // 0x0015b12c: jr $ra
    *(uint32_t*)((a0) + 0x4c) = a1;                             // 0x0015b130: sw $a1, 0x4c($a0)
}