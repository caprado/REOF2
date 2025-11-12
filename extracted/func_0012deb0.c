void func_0012deb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(uint16_t*)((a0) + 8);                                // 0x0012deb0: lhu $v0, 8($a0)
    *(uint16_t*)(a1) = v0;                                      // 0x0012deb4: sh $v0, 0($a1)
    v1 = *(uint16_t*)((a0) + 0xa);                              // 0x0012deb8: lhu $v1, 0xa($a0)
    return;                                                     // 0x0012debc: jr $ra
    *(uint16_t*)(a2) = v1;                                      // 0x0012dec0: sh $v1, 0($a2)
}