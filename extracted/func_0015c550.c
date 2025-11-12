void func_0015c550() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a0 + 0xbc;                                             // 0x0015c550: addiu $v0, $a0, 0xbc
    a2 = a2 - a3;                                               // 0x0015c554: subu $a2, $a2, $a3
    v1 = a1 + a3;                                               // 0x0015c558: addu $v1, $a1, $a3
    *(uint32_t*)((a0) + 0xdc) = a3;                             // 0x0015c55c: sw $a3, 0xdc($a0)
    *(uint32_t*)((a0) + 0xe4) = 0;                              // 0x0015c560: sw $zero, 0xe4($a0)
    *(uint32_t*)((a0) + 0xd8) = a1;                             // 0x0015c564: sw $a1, 0xd8($a0)
    *(uint32_t*)((a0) + 0xe0) = 0;                              // 0x0015c568: sw $zero, 0xe0($a0)
    *(uint32_t*)((a0) + 0xd4) = v0;                             // 0x0015c56c: sw $v0, 0xd4($a0)
    *(uint32_t*)((v0) + 4) = a2;                                // 0x0015c570: sw $a2, 4($v0)
    *(uint32_t*)((v0) + 8) = a3;                                // 0x0015c574: sw $a3, 8($v0)
    return;                                                     // 0x0015c578: jr $ra
    *(uint32_t*)(v0) = v1;                                      // 0x0015c57c: sw $v1, 0($v0)
}