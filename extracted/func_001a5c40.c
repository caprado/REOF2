void func_001a5c40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (a0 < 0) goto label_0x1a5c54;                            // 0x001a5c40: bltz $a0, 0x1a5c54
    v1 = (unsigned)a0 >> 1;                                     // 0x001a5c44: srl $v1, $a0, 1
    /* move to FPU: $a0, $f0 */                                 // 0x001a5c48: mtc1 $a0, $f0
    goto label_0x1a5c6c;                                        // 0x001a5c4c: b 0x1a5c6c
    /* FPU: cvt.s.w $f2, $f0 */                                 // 0x001a5c50: cvt.s.w $f2, $f0
label_0x1a5c54:
    v0 = a0 & 1;                                                // 0x001a5c54: andi $v0, $a0, 1
    v1 = v1 | v0;                                               // 0x001a5c58: or $v1, $v1, $v0
    /* move to FPU: $v1, $f0 */                                 // 0x001a5c5c: mtc1 $v1, $f0
    /* nop */                                                   // 0x001a5c60: nop 
    /* FPU: cvt.s.w $f2, $f0 */                                 // 0x001a5c64: cvt.s.w $f2, $f0
    /* FPU: add.s $f2, $f2, $f2 */                              // 0x001a5c68: add.s $f2, $f2, $f2
label_0x1a5c6c:
    v0 = 0x4300 << 16;                                          // 0x001a5c6c: lui $v0, 0x4300
    /* move to FPU: $v0, $f0 */                                 // 0x001a5c70: mtc1 $v0, $f0
    /* nop */                                                   // 0x001a5c74: nop 
    /* FPU: c.olt.s $f2, $f0 */                                 // 0x001a5c78: c.olt.s $f2, $f0
    /* bc1t 0x1a5cac */                                         // 0x001a5c7c: bc1t 0x1a5cac
    v0 = 0x42ae << 16;                                          // 0x001a5c80: lui $v0, 0x42ae
    v0 = 0x4328 << 16;                                          // 0x001a5c84: lui $v0, 0x4328
    /* move to FPU: $v0, $f1 */                                 // 0x001a5c88: mtc1 $v0, $f1
    /* move to FPU: $zero, $f0 */                               // 0x001a5c8c: mtc1 $zero, $f0
    /* nop */                                                   // 0x001a5c90: nop 
    /* FPU: sub.s $f2, $f2, $f1 */                              // 0x001a5c94: sub.s $f2, $f2, $f1
    /* FPU: c.olt.s $f2, $f0 */                                 // 0x001a5c98: c.olt.s $f2, $f0
    /* bc1f 0x1a5cd4 */                                         // 0x001a5c9c: bc1f 0x1a5cd4
    /* nop */                                                   // 0x001a5ca0: nop 
    goto label_0x1a5cd4;                                        // 0x001a5ca4: b 0x1a5cd4
    /* FPU: mov.s $f2, $f0 */                                   // 0x001a5ca8: mov.s $f2, $f0
    /* move to FPU: $v0, $f0 */                                 // 0x001a5cac: mtc1 $v0, $f0
    /* nop */                                                   // 0x001a5cb0: nop 
    /* FPU: c.ole.s $f2, $f0 */                                 // 0x001a5cb4: c.ole.s $f2, $f0
    /* bc1t 0x1a5cc4 */                                         // 0x001a5cb8: bc1t 0x1a5cc4
    /* nop */                                                   // 0x001a5cbc: nop 
    /* FPU: mov.s $f2, $f0 */                                   // 0x001a5cc0: mov.s $f2, $f0
    v0 = 0x42ae << 16;                                          // 0x001a5cc4: lui $v0, 0x42ae
    /* move to FPU: $v0, $f0 */                                 // 0x001a5cc8: mtc1 $v0, $f0
    /* nop */                                                   // 0x001a5ccc: nop 
    /* FPU: sub.s $f2, $f2, $f0 */                              // 0x001a5cd0: sub.s $f2, $f2, $f0
label_0x1a5cd4:
    FPU_F0 = *(float*)((gp) + -0x7f08);  // Load float          // 0x001a5cd4: lwc1 $f0, -0x7f08($gp)
    /* FPU: mul.s $f2, $f2, $f0 */                              // 0x001a5cd8: mul.s $f2, $f2, $f0
    /* FPU: cvt.w.s $f0, $f2 */                                 // 0x001a5cdc: cvt.w.s $f0, $f2
    /* move from FPU: $v0, $f0 */                               // 0x001a5ce0: mfc1 $v0, $f0
    return;                                                     // 0x001a5ce4: jr $ra
    /* nop */                                                   // 0x001a5ce8: nop 
}