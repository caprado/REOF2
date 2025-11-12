void func_00134bc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(uint16_t*)((a0) + 0x28);                             // 0x00134bc0: lhu $v1, 0x28($a0)
    *(uint16_t*)(a1) = v1;                                      // 0x00134bc4: sh $v1, 0($a1)
    v0 = *(uint16_t*)((a0) + 0x2a);                             // 0x00134bc8: lhu $v0, 0x2a($a0)
    *(uint16_t*)(a2) = v0;                                      // 0x00134bcc: sh $v0, 0($a2)
    v1 = *(uint16_t*)((a0) + 0x2c);                             // 0x00134bd0: lhu $v1, 0x2c($a0)
    *(uint16_t*)((a1) + 2) = v1;                                // 0x00134bd4: sh $v1, 2($a1)
    v0 = *(uint16_t*)((a0) + 0x2e);                             // 0x00134bd8: lhu $v0, 0x2e($a0)
    return;                                                     // 0x00134bdc: jr $ra
    *(uint16_t*)((a2) + 2) = v0;                                // 0x00134be0: sh $v0, 2($a2)
}