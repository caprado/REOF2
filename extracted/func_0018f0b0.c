void func_0018f0b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    /* move from FPU: $t0, $f12 */                              // 0x0018f0b0: mfc1 $t0, $f12
    /* nop */                                                   // 0x0018f0b4: nop 
    /* move from FPU: $t0, $f14 */                              // 0x0018f0bc: mfc1 $t0, $f14
    /* nop */                                                   // 0x0018f0c0: nop 
    /* move from FPU: $t0, $f17 */                              // 0x0018f0c8: mfc1 $t0, $f17
    /* nop */                                                   // 0x0018f0cc: nop 
    /* move from FPU: $t0, $f13 */                              // 0x0018f0d4: mfc1 $t0, $f13
    /* nop */                                                   // 0x0018f0d8: nop 
    /* move from FPU: $t0, $f16 */                              // 0x0018f0e0: mfc1 $t0, $f16
    /* nop */                                                   // 0x0018f0e4: nop 
    /* move from FPU: $t0, $f15 */                              // 0x0018f0ec: mfc1 $t0, $f15
    /* nop */                                                   // 0x0018f0f0: nop 
    /* move from FPU: $t0, $f18 */                              // 0x0018f0f8: mfc1 $t0, $f18
    /* nop */                                                   // 0x0018f0fc: nop 
    /* move to FPU: $t0, $f0 */                                 // 0x0018f184: mtc1 $t0, $f0
    return;                                                     // 0x0018f188: jr $ra
    /* nop */                                                   // 0x0018f18c: nop 
}