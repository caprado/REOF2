void func_0015dfd8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)((a0) + 8);                                 // 0x0015dfd8: lw $v0, 8($a0)
    a2 = *(int16_t*)((a0) + 0xc);                               // 0x0015dfdc: lh $a2, 0xc($a0)
    *(uint32_t*)(a1) = v0;                                      // 0x0015dfe0: sw $v0, 0($a1)
    v1 = *(int16_t*)((a0) + 0xe);                               // 0x0015dfe4: lh $v1, 0xe($a0)
    v0 = *(int32_t*)(a0);                                       // 0x0015dfe8: lw $v0, 0($a0)
    *(uint32_t*)((a1) + 0x14) = a2;                             // 0x0015dfec: sw $a2, 0x14($a1)
    *(uint32_t*)((a1) + 4) = v0;                                // 0x0015dff0: sw $v0, 4($a1)
    *(uint32_t*)((a1) + 0xc) = v1;                              // 0x0015dff4: sw $v1, 0xc($a1)
    v0 = *(int32_t*)((a0) + 4);                                 // 0x0015dff8: lw $v0, 4($a0)
    *(uint32_t*)((a1) + 0x10) = a2;                             // 0x0015dffc: sw $a2, 0x10($a1)
    return;                                                     // 0x0015e000: jr $ra
    *(uint32_t*)((a1) + 8) = v0;                                // 0x0015e004: sw $v0, 8($a1)
}