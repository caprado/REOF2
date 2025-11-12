void func_0017cb50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x23 << 16;                                            // 0x0017cb50: lui $v0, 0x23
    return;                                                     // 0x0017cb54: jr $ra
    v0 = &str_00229c10;  // "E201194: sfx_InitHn: work size is short." // 0x0017cb58: addiu $v0, $v0, -0x63f0
}