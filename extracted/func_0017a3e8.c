void func_0017a3e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a0 + 8;                                                // 0x0017a3e8: addiu $v0, $a0, 8
    a2 = 0x1f;                                                  // 0x0017a3ec: addiu $a2, $zero, 0x1f
    v1 = 0x64;                                                  // 0x0017a3f0: addiu $v1, $zero, 0x64
    a1 = 1;                                                     // 0x0017a3f4: addiu $a1, $zero, 1
    *(uint32_t*)((v0) + 8) = v1;                                // 0x0017a3f8: sw $v1, 8($v0)
    *(uint32_t*)((v0) + 4) = a2;                                // 0x0017a3fc: sw $a2, 4($v0)
    *(uint32_t*)(v0) = 0;                                       // 0x0017a400: sw $zero, 0($v0)
    return;                                                     // 0x0017a404: jr $ra
    *(uint32_t*)((a0) + 4) = a1;                                // 0x0017a408: sw $a1, 4($a0)
}