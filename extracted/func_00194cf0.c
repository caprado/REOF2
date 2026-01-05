void func_00194cf0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00194cf0: addiu $sp, $sp, -0x30
    at = 0x29 << 16;                                            // 0x00194cf4: lui $at, 0x29
    v0 = g_00290364;  // Global at 0x00290364                   // 0x00194d00: lw $v0, 0x364($at)
    if (v0 == 0) goto label_0x194d14;                           // 0x00194d04: beqz $v0, 0x194d14
    goto label_0x19502c;                                        // 0x00194d0c: b 0x19502c
    v0 = 1;                                                     // 0x00194d10: addiu $v0, $zero, 1
label_0x194d14:
    a0 = 0x21 << 16;                                            // 0x00194d14: lui $a0, 0x21
    a1 = 0x7000 << 16;                                          // 0x00194d18: lui $a1, 0x7000
    a0 = a0 + 0x65c0;                                           // 0x00194d1c: addiu $a0, $a0, 0x65c0
    func_001899f8();  // 1899f8                                // 0x00194d20: jal 0x1899f8
    a2 = 3;                                                     // 0x00194d24: addiu $a2, $zero, 3
    a0 = *(int32_t*)((s0) + 0x20);                              // 0x00194d28: lw $a0, 0x20($s0)
    func_001989a0();  // 1989a0                                // 0x00194d2c: jal 0x1989a0
    a0 = (unsigned)v0 >> 0x10;                                  // 0x00194d34: srl $a0, $v0, 0x10
    v1 = (unsigned)v0 >> 8;                                     // 0x00194d38: srl $v1, $v0, 8
    a1 = a0 & 0xff;                                             // 0x00194d3c: andi $a1, $a0, 0xff
    v1 = v1 & 0xff;                                             // 0x00194d40: andi $v1, $v1, 0xff
    at = 0x7000 << 16;                                          // 0x00194d48: lui $at, 0x7000
    v1 = v0 & 0xff;                                             // 0x00194d4c: andi $v1, $v0, 0xff
    a0 = a1 | a0;                                               // 0x00194d50: or $a0, $a1, $a0
    v0 = (unsigned)v0 >> 0x18;                                  // 0x00194d58: srl $v0, $v0, 0x18
    a0 = v1 | a0;                                               // 0x00194d5c: or $a0, $v1, $a0
    v1 = v0 & 0xff;                                             // 0x00194d60: andi $v1, $v0, 0xff
    v1 = v1 | a0;                                               // 0x00194d6c: or $v1, $v1, $a0
    v0 = v0 | v1;                                               // 0x00194d74: or $v0, $v0, $v1
    FPU_F1 = *(float*)((s0) + 0x24);  // Load float             // 0x00194d7c: lwc1 $f1, 0x24($s0)
    at = 0x7000 << 16;                                          // 0x00194d80: lui $at, 0x7000
    FPU_F0 = *(float*)((s0) + 0xc);  // Load float              // 0x00194d84: lwc1 $f0, 0xc($s0)
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x00194d88: mul.s $f0, $f1, $f0
    *(float*)((sp) + 0x2c) = FPU_F0;  // Store float            // 0x00194d8c: swc1 $f0, 0x2c($sp)
    FPU_F1 = *(float*)((s0) + 0x28);  // Load float             // 0x00194d90: lwc1 $f1, 0x28($s0)
    FPU_F0 = *(float*)((s0) + 0xc);  // Load float              // 0x00194d98: lwc1 $f0, 0xc($s0)
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x00194d9c: mul.s $f0, $f1, $f0
    *(float*)((sp) + 0x28) = FPU_F0;  // Store float            // 0x00194da0: swc1 $f0, 0x28($sp)
    v0 = v1 | v0;                                               // 0x00194dac: or $v0, $v1, $v0
    at = 0x29 << 16;                                            // 0x00194db4: lui $at, 0x29
    FPU_F0 = *(float*)((at) + 0x31c);  // Load float            // 0x00194db8: lwc1 $f0, 0x31c($at)
    FPU_F1 = *(float*)(s0);  // Load float                      // 0x00194dbc: lwc1 $f1, 0($s0)
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x00194dc0: cvt.s.w $f0, $f0
    at = 0x29 << 16;                                            // 0x00194dc4: lui $at, 0x29
    v0 = g_0028ff74;  // Global at 0x0028ff74                   // 0x00194dc8: lw $v0, -0x8c($at)
    if (v0 != 0) goto label_0x194dfc;                           // 0x00194dcc: bnez $v0, 0x194dfc
    /* FPU: sub.s $f8, $f1, $f0 */                              // 0x00194dd0: sub.s $f8, $f1, $f0
    at = 0x29 << 16;                                            // 0x00194dd4: lui $at, 0x29
    v0 = 0x3f00 << 16;                                          // 0x00194dd8: lui $v0, 0x3f00
    FPU_F1 = *(float*)((at) + 0x320);  // Load float            // 0x00194ddc: lwc1 $f1, 0x320($at)
    FPU_F2 = *(float*)((s0) + 4);  // Load float                // 0x00194de0: lwc1 $f2, 4($s0)
    /* move to FPU: $v0, $f0 */                                 // 0x00194de4: mtc1 $v0, $f0
    /* nop */                                                   // 0x00194de8: nop 
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x00194dec: cvt.s.w $f1, $f1
    /* FPU: sub.s $f1, $f2, $f1 */                              // 0x00194df0: sub.s $f1, $f2, $f1
    goto label_0x194e10;                                        // 0x00194df4: b 0x194e10
    /* FPU: mul.s $f7, $f0, $f1 */                              // 0x00194df8: mul.s $f7, $f0, $f1
label_0x194dfc:
    at = 0x29 << 16;                                            // 0x00194dfc: lui $at, 0x29
    FPU_F0 = *(float*)((at) + 0x320);  // Load float            // 0x00194e00: lwc1 $f0, 0x320($at)
    FPU_F1 = *(float*)((s0) + 4);  // Load float                // 0x00194e04: lwc1 $f1, 4($s0)
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x00194e08: cvt.s.w $f0, $f0
    /* FPU: sub.s $f7, $f1, $f0 */                              // 0x00194e0c: sub.s $f7, $f1, $f0
label_0x194e10:
    at = 0x29 << 16;                                            // 0x00194e10: lui $at, 0x29
    v0 = 0x3f80 << 16;                                          // 0x00194e14: lui $v0, 0x3f80
    FPU_F6 = *(float*)((at) + 0x318);  // Load float            // 0x00194e18: lwc1 $f6, 0x318($at)
    /* move to FPU: $v0, $f3 */                                 // 0x00194e1c: mtc1 $v0, $f3
    FPU_F4 = *(float*)((s0) + 8);  // Load float                // 0x00194e20: lwc1 $f4, 8($s0)
    v0 = 0xbf00 << 16;                                          // 0x00194e24: lui $v0, 0xbf00
    /* move to FPU: $v0, $f2 */                                 // 0x00194e28: mtc1 $v0, $f2
    at = 0x29 << 16;                                            // 0x00194e2c: lui $at, 0x29
    v0 = 0x4f00 << 16;                                          // 0x00194e30: lui $v0, 0x4f00
    FPU_F5 = *(float*)((at) + 0x314);  // Load float            // 0x00194e34: lwc1 $f5, 0x314($at)
    /* FPU: sub.s $f3, $f4, $f3 */                              // 0x00194e38: sub.s $f3, $f4, $f3
    /* FPU: cvt.s.w $f6, $f6 */                                 // 0x00194e3c: cvt.s.w $f6, $f6
    at = 0x29 << 16;                                            // 0x00194e40: lui $at, 0x29
    FPU_F1 = *(float*)((at) + -0x4c);  // Load float            // 0x00194e44: lwc1 $f1, -0x4c($at)
    /* FPU: mul.s $f2, $f2, $f3 */                              // 0x00194e48: mul.s $f2, $f2, $f3
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x00194e4c: mul.s $f1, $f2, $f1
    /* FPU: add.s $f6, $f6, $f7 */                              // 0x00194e50: add.s $f6, $f6, $f7
    /* move to FPU: $v0, $f0 */                                 // 0x00194e54: mtc1 $v0, $f0
    /* FPU: cvt.w.s $f2, $f6 */                                 // 0x00194e58: cvt.w.s $f2, $f6
    /* move from FPU: $v0, $f2 */                               // 0x00194e5c: mfc1 $v0, $f2
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x00194e60: c.ole.s $f0, $f1
    v0 = v0 << 4;                                               // 0x00194e64: sll $v0, $v0, 4
    /* FPU: cvt.s.w $f2, $f5 */                                 // 0x00194e68: cvt.s.w $f2, $f5
    /* FPU: add.s $f2, $f2, $f8 */                              // 0x00194e70: add.s $f2, $f2, $f8
    /* FPU: cvt.w.s $f2, $f2 */                                 // 0x00194e74: cvt.w.s $f2, $f2
    /* move from FPU: $v0, $f2 */                               // 0x00194e78: mfc1 $v0, $f2
    /* nop */                                                   // 0x00194e7c: nop 
    v0 = v0 << 4;                                               // 0x00194e80: sll $v0, $v0, 4
    /* bc1t 0x194e9c */                                         // 0x00194e84: bc1t 0x194e9c
    a0 = v0 | v1;                                               // 0x00194e88: or $a0, $v0, $v1
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x00194e8c: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x00194e90: mfc1 $v1, $f1
    goto label_0x194eb8;                                        // 0x00194e94: b 0x194eb8
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x00194e9c: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x00194ea0: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x00194ea4: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x00194ea8: mfc1 $v1, $f1
    /* nop */                                                   // 0x00194eac: nop 
    v1 = v1 | v0;                                               // 0x00194eb0: or $v1, $v1, $v0
label_0x194eb8:
    at = 0x7000 << 16;                                          // 0x00194eb8: lui $at, 0x7000
    v0 = v0 | a0;                                               // 0x00194ec4: or $v0, $v0, $a0
    FPU_F1 = *(float*)((s0) + 0x2c);  // Load float             // 0x00194ecc: lwc1 $f1, 0x2c($s0)
    at = 0x7000 << 16;                                          // 0x00194ed0: lui $at, 0x7000
    FPU_F0 = *(float*)((s0) + 0x1c);  // Load float             // 0x00194ed4: lwc1 $f0, 0x1c($s0)
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x00194ed8: mul.s $f0, $f1, $f0
    *(float*)((sp) + 0x2c) = FPU_F0;  // Store float            // 0x00194edc: swc1 $f0, 0x2c($sp)
    FPU_F1 = *(float*)((s0) + 0x30);  // Load float             // 0x00194ee0: lwc1 $f1, 0x30($s0)
    FPU_F0 = *(float*)((s0) + 0x1c);  // Load float             // 0x00194ee8: lwc1 $f0, 0x1c($s0)
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x00194eec: mul.s $f0, $f1, $f0
    *(float*)((sp) + 0x28) = FPU_F0;  // Store float            // 0x00194ef0: swc1 $f0, 0x28($sp)
    v0 = v1 | v0;                                               // 0x00194efc: or $v0, $v1, $v0
    at = 0x29 << 16;                                            // 0x00194f04: lui $at, 0x29
    FPU_F0 = *(float*)((at) + 0x31c);  // Load float            // 0x00194f08: lwc1 $f0, 0x31c($at)
    FPU_F1 = *(float*)((s0) + 0x10);  // Load float             // 0x00194f0c: lwc1 $f1, 0x10($s0)
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x00194f10: cvt.s.w $f0, $f0
    at = 0x29 << 16;                                            // 0x00194f14: lui $at, 0x29
    v0 = g_0028ff74;  // Global at 0x0028ff74                   // 0x00194f18: lw $v0, -0x8c($at)
    if (v0 != 0) goto label_0x194f4c;                           // 0x00194f1c: bnez $v0, 0x194f4c
    /* FPU: sub.s $f8, $f1, $f0 */                              // 0x00194f20: sub.s $f8, $f1, $f0
    at = 0x29 << 16;                                            // 0x00194f24: lui $at, 0x29
    v0 = 0x3f00 << 16;                                          // 0x00194f28: lui $v0, 0x3f00
    FPU_F1 = *(float*)((at) + 0x320);  // Load float            // 0x00194f2c: lwc1 $f1, 0x320($at)
    FPU_F2 = *(float*)((s0) + 0x14);  // Load float             // 0x00194f30: lwc1 $f2, 0x14($s0)
    /* move to FPU: $v0, $f0 */                                 // 0x00194f34: mtc1 $v0, $f0
    /* nop */                                                   // 0x00194f38: nop 
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x00194f3c: cvt.s.w $f1, $f1
    /* FPU: sub.s $f1, $f2, $f1 */                              // 0x00194f40: sub.s $f1, $f2, $f1
    goto label_0x194f60;                                        // 0x00194f44: b 0x194f60
    /* FPU: mul.s $f7, $f0, $f1 */                              // 0x00194f48: mul.s $f7, $f0, $f1
label_0x194f4c:
    at = 0x29 << 16;                                            // 0x00194f4c: lui $at, 0x29
    FPU_F0 = *(float*)((at) + 0x320);  // Load float            // 0x00194f50: lwc1 $f0, 0x320($at)
    FPU_F1 = *(float*)((s0) + 0x14);  // Load float             // 0x00194f54: lwc1 $f1, 0x14($s0)
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x00194f58: cvt.s.w $f0, $f0
    /* FPU: sub.s $f7, $f1, $f0 */                              // 0x00194f5c: sub.s $f7, $f1, $f0
label_0x194f60:
    at = 0x29 << 16;                                            // 0x00194f60: lui $at, 0x29
    v0 = 0x3f80 << 16;                                          // 0x00194f64: lui $v0, 0x3f80
    FPU_F6 = *(float*)((at) + 0x318);  // Load float            // 0x00194f68: lwc1 $f6, 0x318($at)
    /* move to FPU: $v0, $f3 */                                 // 0x00194f6c: mtc1 $v0, $f3
    FPU_F4 = *(float*)((s0) + 0x18);  // Load float             // 0x00194f70: lwc1 $f4, 0x18($s0)
    v0 = 0xbf00 << 16;                                          // 0x00194f74: lui $v0, 0xbf00
    /* move to FPU: $v0, $f2 */                                 // 0x00194f78: mtc1 $v0, $f2
    at = 0x29 << 16;                                            // 0x00194f7c: lui $at, 0x29
    v0 = 0x4f00 << 16;                                          // 0x00194f80: lui $v0, 0x4f00
    FPU_F5 = *(float*)((at) + 0x314);  // Load float            // 0x00194f84: lwc1 $f5, 0x314($at)
    /* FPU: sub.s $f3, $f4, $f3 */                              // 0x00194f88: sub.s $f3, $f4, $f3
    /* FPU: mul.s $f2, $f2, $f3 */                              // 0x00194f8c: mul.s $f2, $f2, $f3
    at = 0x29 << 16;                                            // 0x00194f90: lui $at, 0x29
    FPU_F1 = *(float*)((at) + -0x4c);  // Load float            // 0x00194f94: lwc1 $f1, -0x4c($at)
    /* move to FPU: $v0, $f0 */                                 // 0x00194f98: mtc1 $v0, $f0
    /* nop */                                                   // 0x00194f9c: nop 
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x00194fa0: mul.s $f1, $f2, $f1
    /* FPU: cvt.s.w $f2, $f6 */                                 // 0x00194fa4: cvt.s.w $f2, $f6
    /* FPU: add.s $f2, $f2, $f7 */                              // 0x00194fa8: add.s $f2, $f2, $f7
    /* FPU: cvt.w.s $f2, $f2 */                                 // 0x00194fac: cvt.w.s $f2, $f2
    /* move from FPU: $v0, $f2 */                               // 0x00194fb0: mfc1 $v0, $f2
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x00194fb4: c.ole.s $f0, $f1
    v0 = v0 << 4;                                               // 0x00194fb8: sll $v0, $v0, 4
    /* FPU: cvt.s.w $f2, $f5 */                                 // 0x00194fbc: cvt.s.w $f2, $f5
    /* FPU: add.s $f2, $f2, $f8 */                              // 0x00194fc4: add.s $f2, $f2, $f8
    /* FPU: cvt.w.s $f2, $f2 */                                 // 0x00194fc8: cvt.w.s $f2, $f2
    /* move from FPU: $v0, $f2 */                               // 0x00194fcc: mfc1 $v0, $f2
    /* nop */                                                   // 0x00194fd0: nop 
    v0 = v0 << 4;                                               // 0x00194fd4: sll $v0, $v0, 4
    /* bc1t 0x194ff0 */                                         // 0x00194fd8: bc1t 0x194ff0
    a1 = v0 | v1;                                               // 0x00194fdc: or $a1, $v0, $v1
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x00194fe0: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x00194fe4: mfc1 $v1, $f1
    goto label_0x19500c;                                        // 0x00194fe8: b 0x19500c
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x00194ff0: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x00194ff4: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x00194ff8: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x00194ffc: mfc1 $v1, $f1
    /* nop */                                                   // 0x00195000: nop 
    v1 = v1 | v0;                                               // 0x00195004: or $v1, $v1, $v0
label_0x19500c:
    at = 0x7000 << 16;                                          // 0x0019500c: lui $at, 0x7000
    a0 = 0x7000 << 16;                                          // 0x00195014: lui $a0, 0x7000
    v0 = v0 | a1;                                               // 0x0019501c: or $v0, $v0, $a1
    func_00193e90();  // 193e90                                // 0x00195020: jal 0x193e90
    v0 = 1;                                                     // 0x00195028: addiu $v0, $zero, 1
label_0x19502c:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x00195030: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00195034: jr $ra
    sp = sp + 0x30;                                             // 0x00195038: addiu $sp, $sp, 0x30
}