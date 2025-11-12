void func_0017dfe0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    /* FPU: c.ole.s $f13, $f12 */                               // 0x0017dfe0: c.ole.s $f13, $f12
    v0 = 1;                                                     // 0x0017dfe4: addiu $v0, $zero, 1
    /* bc1f 0x17dff4 */                                         // 0x0017dfe8: bc1f 0x17dff4
    /* FPU: sub.s $f1, $f13, $f12 */                            // 0x0017dfec: sub.s $f1, $f13, $f12
    at = 0xc160 << 16;                                          // 0x0017dff4: lui $at, 0xc160
    /* move to FPU: $at, $f0 */                                 // 0x0017dff8: mtc1 $at, $f0
    /* FPU: c.olt.s $f1, $f0 */                                 // 0x0017dffc: c.olt.s $f1, $f0
    /* bc1tl 0x17e008 */                                        // 0x0017e000: bc1tl 0x17e008
    return;                                                     // 0x0017e008: jr $ra
    /* nop */                                                   // 0x0017e00c: nop 
}