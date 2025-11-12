void func_001988d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x29 << 16;                                            // 0x001988d0: lui $at, 0x29
    v1 = g_00290320;  // Global at 0x00290320                   // 0x001988d4: lh $v1, 0x320($at)
    at = 0x29 << 16;                                            // 0x001988d8: lui $at, 0x29
    v1 = a0 - v1;                                               // 0x001988dc: subu $v1, $a0, $v1
    v0 = g_0028ff74;  // Global at 0x0028ff74                   // 0x001988e0: lw $v0, -0x8c($at)
    if (v0 != 0) goto label_0x1988fc;                           // 0x001988e8: bnez $v0, 0x1988fc
    v0 = a0 >> 1;                                               // 0x001988f0: sra $v0, $a0, 1
label_0x1988fc:
    return;                                                     // 0x001988fc: jr $ra
}