void func_0018f030() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    /* move from FPU: $t0, $f12 */                              // 0x0018f030: mfc1 $t0, $f12
    /* nop */                                                   // 0x0018f034: nop 
    /* move from FPU: $t0, $f14 */                              // 0x0018f03c: mfc1 $t0, $f14
    /* nop */                                                   // 0x0018f040: nop 
    /* move from FPU: $t0, $f16 */                              // 0x0018f048: mfc1 $t0, $f16
    /* nop */                                                   // 0x0018f04c: nop 
    /* move from FPU: $t0, $f13 */                              // 0x0018f054: mfc1 $t0, $f13
    /* nop */                                                   // 0x0018f058: nop 
    /* move from FPU: $t0, $f15 */                              // 0x0018f060: mfc1 $t0, $f15
    /* nop */                                                   // 0x0018f064: nop 
    /* move to FPU: $t0, $f0 */                                 // 0x0018f09c: mtc1 $t0, $f0
    return;                                                     // 0x0018f0a0: jr $ra
    /* nop */                                                   // 0x0018f0a4: nop 
}