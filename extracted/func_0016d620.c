void func_0016d620() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a0 + 0xc;                                              // 0x0016d620: addiu $v0, $a0, 0xc
    v1 = -1;                                                    // 0x0016d624: addiu $v1, $zero, -1
    *(uint32_t*)((a0) + 8) = 0;                                 // 0x0016d628: sw $zero, 8($a0)
    *(uint32_t*)(a0) = 0;                                       // 0x0016d62c: sw $zero, 0($a0)
    *(uint32_t*)((a0) + 4) = 0;                                 // 0x0016d630: sw $zero, 4($a0)
    *(uint32_t*)((v0) + 4) = 0;                                 // 0x0016d634: sw $zero, 4($v0)
    *(uint32_t*)((v0) + 8) = v1;                                // 0x0016d638: sw $v1, 8($v0)
    return;                                                     // 0x0016d63c: jr $ra
    *(uint32_t*)(v0) = v1;                                      // 0x0016d640: sw $v1, 0($v0)
}