void func_0015b2d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = a0 + 0x78;                                             // 0x0015b2d0: addiu $a0, $a0, 0x78
    v0 = *(int32_t*)((a0) + 0x18);                              // 0x0015b2d4: lw $v0, 0x18($a0)
    *(uint32_t*)(a1) = v0;                                      // 0x0015b2d8: sw $v0, 0($a1)
    v1 = *(int32_t*)((a0) + 0x1c);                              // 0x0015b2dc: lw $v1, 0x1c($a0)
    return;                                                     // 0x0015b2e0: jr $ra
    *(uint32_t*)(a2) = v1;                                      // 0x0015b2e4: sw $v1, 0($a2)
}