void func_0018c690() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x1700 << 16;                                          // 0x0018c690: lui $v0, 0x1700
    *(uint32_t*)(a0) = v0;                                      // 0x0018c694: sw $v0, 0($a0)
    *(uint32_t*)((a0) + 4) = 0;                                 // 0x0018c698: sw $zero, 4($a0)
    v0 = a0 + 0x10;                                             // 0x0018c69c: addiu $v0, $a0, 0x10
    *(uint32_t*)((a0) + 8) = 0;                                 // 0x0018c6a0: sw $zero, 8($a0)
    return;                                                     // 0x0018c6a4: jr $ra
    *(uint32_t*)((a0) + 0xc) = 0;                               // 0x0018c6a8: sw $zero, 0xc($a0)
}