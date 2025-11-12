void func_0018c6f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    *(uint32_t*)(a0) = 0;                                       // 0x0018c6f0: sw $zero, 0($a0)
    v0 = 0x5100 << 16;                                          // 0x0018c6f4: lui $v0, 0x5100
    *(uint32_t*)((a0) + 4) = 0;                                 // 0x0018c6f8: sw $zero, 4($a0)
    v0 = a1 | v0;                                               // 0x0018c6fc: or $v0, $a1, $v0
    *(uint32_t*)((a0) + 8) = 0;                                 // 0x0018c700: sw $zero, 8($a0)
    *(uint32_t*)((a0) + 0xc) = v0;                              // 0x0018c704: sw $v0, 0xc($a0)
    return;                                                     // 0x0018c708: jr $ra
    v0 = a0 + 0x10;                                             // 0x0018c70c: addiu $v0, $a0, 0x10
}