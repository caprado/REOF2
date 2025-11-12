void func_0013b930() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)((a0) + 0x28);                              // 0x0013b930: lw $v0, 0x28($a0)
    a2 = 0xffff << 16;                                          // 0x0013b934: lui $a2, 0xffff
    v1 = ((unsigned)a1 < (unsigned)v0) ? 1 : 0;                 // 0x0013b944: sltu $v1, $a1, $v0
    if (v1 != 0) v0 = a1;                                       // 0x0013b948: movn $v0, $a1, $v1
    v0 = v0 & a2;                                               // 0x0013b94c: and $v0, $v0, $a2
    return;                                                     // 0x0013b954: jr $ra
}