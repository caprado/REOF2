void func_00193f40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0xfff;                                                 // 0x00193f40: addiu $v0, $zero, 0xfff
    at = 0x29 << 16;                                            // 0x00193f44: lui $at, 0x29
    /* move to FPU: $v0, $f0 */                                 // 0x00193f48: mtc1 $v0, $f0
    FPU_F3 = *(float*)((at) + 0x314);  // Load float            // 0x00193f4c: lwc1 $f3, 0x314($at)
    /* FPU: cvt.s.w $f1, $f0 */                                 // 0x00193f50: cvt.s.w $f1, $f0
    at = 0x29 << 16;                                            // 0x00193f54: lui $at, 0x29
    /* FPU: cvt.s.w $f0, $f3 */                                 // 0x00193f58: cvt.s.w $f0, $f3
    /* FPU: add.s $f12, $f12, $f0 */                            // 0x00193f5c: add.s $f12, $f12, $f0
    FPU_F2 = *(float*)((at) + 0x318);  // Load float            // 0x00193f60: lwc1 $f2, 0x318($at)
    /* FPU: c.olt.s $f1, $f12 */                                // 0x00193f64: c.olt.s $f1, $f12
    /* FPU: cvt.s.w $f0, $f2 */                                 // 0x00193f68: cvt.s.w $f0, $f2
    /* bc1f 0x193f7c */                                         // 0x00193f6c: bc1f 0x193f7c
    /* FPU: add.s $f13, $f13, $f0 */                            // 0x00193f70: add.s $f13, $f13, $f0
    goto label_0x193fec;                                        // 0x00193f74: b 0x193fec
    /* move to FPU: $zero, $f0 */                               // 0x00193f7c: mtc1 $zero, $f0
    /* nop */                                                   // 0x00193f80: nop 
    /* FPU: c.ole.s $f0, $f12 */                                // 0x00193f84: c.ole.s $f0, $f12
    /* bc1t 0x193f98 */                                         // 0x00193f88: bc1t 0x193f98
    goto label_0x193fec;                                        // 0x00193f90: b 0x193fec
    /* nop */                                                   // 0x00193f94: nop 
    /* FPU: c.olt.s $f1, $f13 */                                // 0x00193f98: c.olt.s $f1, $f13
    /* bc1f 0x193fac */                                         // 0x00193f9c: bc1f 0x193fac
    goto label_0x193fec;                                        // 0x00193fa4: b 0x193fec
    /* nop */                                                   // 0x00193fa8: nop 
    /* FPU: c.ole.s $f0, $f13 */                                // 0x00193fac: c.ole.s $f0, $f13
    /* bc1t 0x193fc0 */                                         // 0x00193fb0: bc1t 0x193fc0
    goto label_0x193fec;                                        // 0x00193fb8: b 0x193fec
    /* nop */                                                   // 0x00193fbc: nop 
    /* FPU: c.olt.s $f14, $f0 */                                // 0x00193fc0: c.olt.s $f14, $f0
    /* bc1f 0x193fd4 */                                         // 0x00193fc4: bc1f 0x193fd4
    at = 0x29 << 16;                                            // 0x00193fc8: lui $at, 0x29
    goto label_0x193fec;                                        // 0x00193fcc: b 0x193fec
    FPU_F0 = *(float*)((at) + -0x4c);  // Load float            // 0x00193fd4: lwc1 $f0, -0x4c($at)
    /* FPU: c.olt.s $f0, $f14 */                                // 0x00193fd8: c.olt.s $f0, $f14
    /* bc1t 0x193fe8 */                                         // 0x00193fdc: bc1t 0x193fe8
    v0 = 1;                                                     // 0x00193fe0: addiu $v0, $zero, 1
    v0 = v0 ^ 1;                                                // 0x00193fe8: xori $v0, $v0, 1
label_0x193fec:
    return;                                                     // 0x00193fec: jr $ra
    /* nop */                                                   // 0x00193ff0: nop 
}