void func_00121e00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00121e00: addiu $sp, $sp, -0x20
    /* FPU: mov.s $f13, $f12 */                                 // 0x00121e04: mov.s $f13, $f12
    /* move from FPU: $s1, $f13 */                              // 0x00121e10: mfc1 $s1, $f13
    v1 = 0x7fff << 16;                                          // 0x00121e14: lui $v1, 0x7fff
    v0 = 0x507f << 16;                                          // 0x00121e18: lui $v0, 0x507f
    v1 = v1 | 0xffff;                                           // 0x00121e1c: ori $v1, $v1, 0xffff
    v0 = v0 | 0xffff;                                           // 0x00121e20: ori $v0, $v0, 0xffff
    s0 = s1 & v1;                                               // 0x00121e24: and $s0, $s1, $v1
    v0 = (v0 < s0) ? 1 : 0;                                     // 0x00121e28: slt $v0, $v0, $s0
    if (v0 == 0) goto label_0x121e68;                           // 0x00121e2c: beqz $v0, 0x121e68
    if (s1 <= 0) goto label_0x121e50;                           // 0x00121e34: blez $s1, 0x121e50
    v0 = 0x22 << 16;                                            // 0x00121e38: lui $v0, 0x22
    v1 = 0x22 << 16;                                            // 0x00121e3c: lui $v1, 0x22
    FPU_F1 = *(float*)((v0) + 0x1b44);  // Load float           // 0x00121e40: lwc1 $f1, 0x1b44($v0)
    FPU_F0 = *(float*)((v1) + 0x1b54);  // Load float           // 0x00121e44: lwc1 $f0, 0x1b54($v1)
    goto label_0x122078;                                        // 0x00121e48: b 0x122078
    /* FPU: add.s $f0, $f1, $f0 */                              // 0x00121e4c: add.s $f0, $f1, $f0
label_0x121e50:
    v1 = 0x22 << 16;                                            // 0x00121e50: lui $v1, 0x22
    FPU_F0 = *(float*)((v0) + 0x1b44);  // Load float           // 0x00121e54: lwc1 $f0, 0x1b44($v0)
    FPU_F1 = *(float*)((v1) + 0x1b54);  // Load float           // 0x00121e58: lwc1 $f1, 0x1b54($v1)
    /* FPU: neg.s $f0, $f0 */                                   // 0x00121e5c: neg.s $f0, $f0
    goto label_0x122078;                                        // 0x00121e60: b 0x122078
    /* FPU: sub.s $f0, $f0, $f1 */                              // 0x00121e64: sub.s $f0, $f0, $f1
label_0x121e68:
    v0 = 0x3edf << 16;                                          // 0x00121e68: lui $v0, 0x3edf
    v0 = v0 | 0xffff;                                           // 0x00121e6c: ori $v0, $v0, 0xffff
    v0 = (v0 < s0) ? 1 : 0;                                     // 0x00121e70: slt $v0, $v0, $s0
    if (v0 != 0) goto label_0x121eb8;                           // 0x00121e74: bnez $v0, 0x121eb8
    v0 = 0x30ff << 16;                                          // 0x00121e78: lui $v0, 0x30ff
    v0 = v0 | 0xffff;                                           // 0x00121e7c: ori $v0, $v0, 0xffff
    v0 = (v0 < s0) ? 1 : 0;                                     // 0x00121e80: slt $v0, $v0, $s0
    if (v0 != 0) goto label_0x121f9c;                           // 0x00121e84: bnez $v0, 0x121f9c
    v1 = -1;                                                    // 0x00121e88: addiu $v1, $zero, -1
    at = 0x7149 << 16;                                          // 0x00121e8c: lui $at, 0x7149
    at = at | 0xf2c9;                                           // 0x00121e90: ori $at, $at, 0xf2c9
    /* move to FPU: $at, $f1 */                                 // 0x00121e94: mtc1 $at, $f1
    at = 0x3f80 << 16;                                          // 0x00121e98: lui $at, 0x3f80
    /* move to FPU: $at, $f2 */                                 // 0x00121e9c: mtc1 $at, $f2
    /* FPU: add.s $f1, $f13, $f1 */                             // 0x00121ea0: add.s $f1, $f13, $f1
    /* FPU: c.olt.s $f2, $f1 */                                 // 0x00121ea4: c.olt.s $f2, $f1
    /* bc1t 0x122078 */                                         // 0x00121ea8: bc1t 0x122078
    /* FPU: mov.s $f0, $f13 */                                  // 0x00121eac: mov.s $f0, $f13
    goto label_0x121fa0;                                        // 0x00121eb0: b 0x121fa0
    /* FPU: mul.s $f12, $f13, $f13 */                           // 0x00121eb4: mul.s $f12, $f13, $f13
label_0x121eb8:
    func_00122190();  // 0x122168                                // 0x00121eb8: jal 0x122168
    /* nop */                                                   // 0x00121ebc: nop 
    v0 = 0x3f97 << 16;                                          // 0x00121ec0: lui $v0, 0x3f97
    v0 = v0 | 0xffff;                                           // 0x00121ec4: ori $v0, $v0, 0xffff
    v0 = (v0 < s0) ? 1 : 0;                                     // 0x00121ec8: slt $v0, $v0, $s0
    if (v0 != 0) goto label_0x121f40;                           // 0x00121ecc: bnez $v0, 0x121f40
    /* FPU: mov.s $f13, $f0 */                                  // 0x00121ed0: mov.s $f13, $f0
    v0 = 0x3f2f << 16;                                          // 0x00121ed4: lui $v0, 0x3f2f
    v0 = v0 | 0xffff;                                           // 0x00121ed8: ori $v0, $v0, 0xffff
    v0 = (v0 < s0) ? 1 : 0;                                     // 0x00121edc: slt $v0, $v0, $s0
    if (v0 != 0) goto label_0x121f18;                           // 0x00121ee0: bnez $v0, 0x121f18
    /* nop */                                                   // 0x00121ee4: nop 
    /* FPU: add.s $f0, $f13, $f13 */                            // 0x00121ee8: add.s $f0, $f13, $f13
    at = 0x3f80 << 16;                                          // 0x00121eec: lui $at, 0x3f80
    /* move to FPU: $at, $f2 */                                 // 0x00121ef0: mtc1 $at, $f2
    at = 0x4000 << 16;                                          // 0x00121ef4: lui $at, 0x4000
    /* move to FPU: $at, $f1 */                                 // 0x00121ef8: mtc1 $at, $f1
    /* FPU: add.s $f1, $f13, $f1 */                             // 0x00121efc: add.s $f1, $f13, $f1
    /* FPU: sub.s $f0, $f0, $f2 */                              // 0x00121f00: sub.s $f0, $f0, $f2
    /* nop */                                                   // 0x00121f04: nop 
    /* nop */                                                   // 0x00121f08: nop 
    /* FPU: div.s $f13, $f0, $f1 */                             // 0x00121f0c: div.s $f13, $f0, $f1
    goto label_0x121f9c;                                        // 0x00121f10: b 0x121f9c
label_0x121f18:
    at = 0x3f80 << 16;                                          // 0x00121f18: lui $at, 0x3f80
    /* move to FPU: $at, $f0 */                                 // 0x00121f1c: mtc1 $at, $f0
    /* FPU: add.s $f1, $f13, $f0 */                             // 0x00121f20: add.s $f1, $f13, $f0
    /* FPU: sub.s $f0, $f13, $f0 */                             // 0x00121f24: sub.s $f0, $f13, $f0
    /* nop */                                                   // 0x00121f28: nop 
    /* nop */                                                   // 0x00121f2c: nop 
    /* FPU: div.s $f13, $f0, $f1 */                             // 0x00121f30: div.s $f13, $f0, $f1
    goto label_0x121f9c;                                        // 0x00121f34: b 0x121f9c
    v1 = 1;                                                     // 0x00121f38: addiu $v1, $zero, 1
    /* nop */                                                   // 0x00121f3c: nop 
label_0x121f40:
    v0 = 0x401b << 16;                                          // 0x00121f40: lui $v0, 0x401b
    v0 = v0 | 0xffff;                                           // 0x00121f44: ori $v0, $v0, 0xffff
    v0 = (v0 < s0) ? 1 : 0;                                     // 0x00121f48: slt $v0, $v0, $s0
    /* bnezl $v0, 0x121f88 */                                   // 0x00121f4c: bnezl $v0, 0x121f88
    v1 = 3;                                                     // 0x00121f50: addiu $v1, $zero, 3
    at = 0x3fc0 << 16;                                          // 0x00121f54: lui $at, 0x3fc0
    /* move to FPU: $at, $f0 */                                 // 0x00121f58: mtc1 $at, $f0
    at = 0x3f80 << 16;                                          // 0x00121f5c: lui $at, 0x3f80
    /* move to FPU: $at, $f2 */                                 // 0x00121f60: mtc1 $at, $f2
    /* FPU: mul.s $f1, $f13, $f0 */                             // 0x00121f64: mul.s $f1, $f13, $f0
    /* FPU: sub.s $f0, $f13, $f0 */                             // 0x00121f68: sub.s $f0, $f13, $f0
    /* FPU: add.s $f1, $f1, $f2 */                              // 0x00121f6c: add.s $f1, $f1, $f2
    /* nop */                                                   // 0x00121f70: nop 
    /* nop */                                                   // 0x00121f74: nop 
    /* FPU: div.s $f13, $f0, $f1 */                             // 0x00121f78: div.s $f13, $f0, $f1
    goto label_0x121f9c;                                        // 0x00121f7c: b 0x121f9c
    v1 = 2;                                                     // 0x00121f80: addiu $v1, $zero, 2
    /* nop */                                                   // 0x00121f84: nop 
    at = 0xbf80 << 16;                                          // 0x00121f88: lui $at, 0xbf80
    /* move to FPU: $at, $f0 */                                 // 0x00121f8c: mtc1 $at, $f0
    /* nop */                                                   // 0x00121f90: nop 
    /* nop */                                                   // 0x00121f94: nop 
    /* FPU: div.s $f13, $f0, $f13 */                            // 0x00121f98: div.s $f13, $f0, $f13
label_0x121f9c:
    /* FPU: mul.s $f12, $f13, $f13 */                           // 0x00121f9c: mul.s $f12, $f13, $f13
label_0x121fa0:
    v0 = 0x22 << 16;                                            // 0x00121fa0: lui $v0, 0x22
    v0 = v0 + 0x1b58;                                           // 0x00121fa4: addiu $v0, $v0, 0x1b58
    FPU_F7 = *(float*)((v0) + 0x28);  // Load float             // 0x00121fa8: lwc1 $f7, 0x28($v0)
    FPU_F4 = *(float*)((v0) + 0x20);  // Load float             // 0x00121fac: lwc1 $f4, 0x20($v0)
    /* FPU: mul.s $f0, $f12, $f12 */                            // 0x00121fb0: mul.s $f0, $f12, $f12
    FPU_F5 = *(float*)((v0) + 0x24);  // Load float             // 0x00121fb4: lwc1 $f5, 0x24($v0)
    FPU_F6 = *(float*)((v0) + 0x18);  // Load float             // 0x00121fb8: lwc1 $f6, 0x18($v0)
    FPU_F1 = *(float*)((v0) + 0x1c);  // Load float             // 0x00121fbc: lwc1 $f1, 0x1c($v0)
    FPU_F8 = *(float*)((v0) + 0x10);  // Load float             // 0x00121fc0: lwc1 $f8, 0x10($v0)
    /* FPU: mul.s $f7, $f0, $f7 */                              // 0x00121fc4: mul.s $f7, $f0, $f7
    FPU_F2 = *(float*)((v0) + 0x14);  // Load float             // 0x00121fc8: lwc1 $f2, 0x14($v0)
    /* FPU: mul.s $f5, $f0, $f5 */                              // 0x00121fcc: mul.s $f5, $f0, $f5
    FPU_F9 = *(float*)((v0) + 8);  // Load float                // 0x00121fd0: lwc1 $f9, 8($v0)
    FPU_F3 = *(float*)((v0) + 0xc);  // Load float              // 0x00121fd4: lwc1 $f3, 0xc($v0)
    FPU_F10 = *(float*)((v0) + 4);  // Load float               // 0x00121fd8: lwc1 $f10, 4($v0)
    /* FPU: add.s $f4, $f4, $f7 */                              // 0x00121fdc: add.s $f4, $f4, $f7
    FPU_F11 = *(float*)(v0);  // Load float                     // 0x00121fe0: lwc1 $f11, 0($v0)
    /* FPU: add.s $f1, $f1, $f5 */                              // 0x00121fe4: add.s $f1, $f1, $f5
    /* FPU: mul.s $f4, $f0, $f4 */                              // 0x00121fe8: mul.s $f4, $f0, $f4
    /* FPU: mul.s $f1, $f0, $f1 */                              // 0x00121fec: mul.s $f1, $f0, $f1
    /* FPU: add.s $f6, $f6, $f4 */                              // 0x00121ff0: add.s $f6, $f6, $f4
    /* FPU: add.s $f2, $f2, $f1 */                              // 0x00121ff4: add.s $f2, $f2, $f1
    /* FPU: mul.s $f6, $f0, $f6 */                              // 0x00121ff8: mul.s $f6, $f0, $f6
    /* FPU: mul.s $f2, $f0, $f2 */                              // 0x00121ffc: mul.s $f2, $f0, $f2
    /* FPU: add.s $f8, $f8, $f6 */                              // 0x00122000: add.s $f8, $f8, $f6
    /* FPU: add.s $f3, $f3, $f2 */                              // 0x00122004: add.s $f3, $f3, $f2
    /* FPU: mul.s $f8, $f0, $f8 */                              // 0x00122008: mul.s $f8, $f0, $f8
    /* FPU: mul.s $f3, $f0, $f3 */                              // 0x0012200c: mul.s $f3, $f0, $f3
    /* FPU: add.s $f9, $f9, $f8 */                              // 0x00122010: add.s $f9, $f9, $f8
    /* FPU: add.s $f10, $f10, $f3 */                            // 0x00122014: add.s $f10, $f10, $f3
    /* FPU: mul.s $f9, $f0, $f9 */                              // 0x00122018: mul.s $f9, $f0, $f9
    /* FPU: mul.s $f1, $f0, $f10 */                             // 0x0012201c: mul.s $f1, $f0, $f10
    /* FPU: add.s $f11, $f11, $f9 */                            // 0x00122020: add.s $f11, $f11, $f9
    if (v1 >= 0) goto label_0x122040;                           // 0x00122024: bgez $v1, 0x122040
    /* FPU: mul.s $f0, $f12, $f11 */                            // 0x00122028: mul.s $f0, $f12, $f11
    /* FPU: add.s $f0, $f0, $f1 */                              // 0x0012202c: add.s $f0, $f0, $f1
    /* FPU: mul.s $f0, $f13, $f0 */                             // 0x00122030: mul.s $f0, $f13, $f0
    goto label_0x122078;                                        // 0x00122034: b 0x122078
    /* FPU: sub.s $f0, $f13, $f0 */                             // 0x00122038: sub.s $f0, $f13, $f0
    /* nop */                                                   // 0x0012203c: nop 
label_0x122040:
    /* FPU: add.s $f0, $f0, $f1 */                              // 0x00122040: add.s $f0, $f0, $f1
    v0 = v1 << 2;                                               // 0x00122044: sll $v0, $v1, 2
    at = 0x22 << 16;                                            // 0x00122048: lui $at, 0x22
    at = at + v0;                                               // 0x0012204c: addu $at, $at, $v0
    FPU_F1 = *(float*)((at) + 0x1b48);  // Load float           // 0x00122050: lwc1 $f1, 0x1b48($at)
    at = 0x22 << 16;                                            // 0x00122054: lui $at, 0x22
    at = at + v0;                                               // 0x00122058: addu $at, $at, $v0
    FPU_F2 = *(float*)((at) + 0x1b38);  // Load float           // 0x0012205c: lwc1 $f2, 0x1b38($at)
    /* FPU: mul.s $f0, $f13, $f0 */                             // 0x00122060: mul.s $f0, $f13, $f0
    /* FPU: sub.s $f0, $f0, $f1 */                              // 0x00122064: sub.s $f0, $f0, $f1
    /* FPU: sub.s $f0, $f0, $f13 */                             // 0x00122068: sub.s $f0, $f0, $f13
    if (s1 >= 0) goto label_0x122078;                           // 0x0012206c: bgez $s1, 0x122078
    /* FPU: sub.s $f0, $f2, $f0 */                              // 0x00122070: sub.s $f0, $f2, $f0
    /* FPU: neg.s $f0, $f0 */                                   // 0x00122074: neg.s $f0, $f0
label_0x122078:
    return;                                                     // 0x00122084: jr $ra
    sp = sp + 0x20;                                             // 0x00122088: addiu $sp, $sp, 0x20
}