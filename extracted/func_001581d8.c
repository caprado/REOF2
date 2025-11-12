void func_001581d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = -1;                                                    // 0x001581d8: addiu $v0, $zero, -1
    *(uint32_t*)((a0) + 0x1c) = v0;                             // 0x001581dc: sw $v0, 0x1c($a0)
    *(uint32_t*)(a0) = v0;                                      // 0x001581e0: sw $v0, 0($a0)
    *(uint32_t*)((a0) + 4) = v0;                                // 0x001581e4: sw $v0, 4($a0)
    *(uint32_t*)((a0) + 8) = v0;                                // 0x001581e8: sw $v0, 8($a0)
    *(uint32_t*)((a0) + 0xc) = v0;                              // 0x001581ec: sw $v0, 0xc($a0)
    *(uint32_t*)((a0) + 0x10) = v0;                             // 0x001581f0: sw $v0, 0x10($a0)
    *(uint32_t*)((a0) + 0x14) = v0;                             // 0x001581f4: sw $v0, 0x14($a0)
    return;                                                     // 0x001581f8: jr $ra
    *(uint32_t*)((a0) + 0x18) = v0;                             // 0x001581fc: sw $v0, 0x18($a0)
}