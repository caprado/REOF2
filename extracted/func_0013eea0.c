void func_0013eea0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = a1 << 2;                                               // 0x0013eea0: sll $a1, $a1, 2
    a0 = a0 + a1;                                               // 0x0013eea4: addu $a0, $a0, $a1
    v1 = *(int32_t*)((a0) + 8);                                 // 0x0013eea8: lw $v1, 8($a0)
    return;                                                     // 0x0013eeac: jr $ra
    v0 = *(int32_t*)((v1) + 4);                                 // 0x0013eeb0: lw $v0, 4($v1)
}