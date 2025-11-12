void func_00198970() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x3f80 << 16;                                          // 0x00198970: lui $v0, 0x3f80
    at = 0x29 << 16;                                            // 0x00198974: lui $at, 0x29
    /* move to FPU: $v0, $f2 */                                 // 0x00198978: mtc1 $v0, $f2
    FPU_F0 = *(float*)((at) + -0x4c);  // Load float            // 0x0019897c: lwc1 $f0, -0x4c($at)
    /* FPU: sub.s $f12, $f12, $f2 */                            // 0x00198980: sub.s $f12, $f12, $f2
    v0 = 0xbf00 << 16;                                          // 0x00198984: lui $v0, 0xbf00
    /* move to FPU: $v0, $f1 */                                 // 0x00198988: mtc1 $v0, $f1
    /* nop */                                                   // 0x0019898c: nop 
    /* FPU: mul.s $f12, $f12, $f1 */                            // 0x00198990: mul.s $f12, $f12, $f1
    /* FPU: mul.s $f12, $f12, $f0 */                            // 0x00198994: mul.s $f12, $f12, $f0
    return;                                                     // 0x00198998: jr $ra
    /* FPU: mov.s $f0, $f12 */                                  // 0x0019899c: mov.s $f0, $f12
}