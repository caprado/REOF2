void func_00131e20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x50;                                            // 0x00131e20: addiu $sp, $sp, -0x50
    if (s2 == 0) goto label_0x131e64;                           // 0x00131e4c: beqz $s2, 0x131e64
    /* beqzl $s3, 0x131e68 */                                   // 0x00131e54: beqzl $s3, 0x131e68
    a0 = 0x22 << 16;                                            // 0x00131e58: lui $a0, 0x22
    if (s5 != 0) goto label_0x131e78;                           // 0x00131e5c: bnez $s5, 0x131e78
    s0 = 0x20 << 16;                                            // 0x00131e60: lui $s0, 0x20
label_0x131e64:
    a0 = 0x22 << 16;                                            // 0x00131e64: lui $a0, 0x22
    func_00127d90();  // 127d90                                // 0x00131e68: jal 0x127d90
    a0 = &str_002237f0;  // "E02080817 ADXT_GetNumSmpl: parameter error" // 0x00131e6c: addiu $a0, $a0, 0x37f0
    goto label_0x1320f0;                                        // 0x00131e70: b 0x1320f0
label_0x131e78:
    v0 = g_00201d50;  // Global at 0x00201d50                   // 0x00131e78: lw $v0, 0x1d50($s0)
    if (v0 != 0) goto label_0x131e98;                           // 0x00131e7c: bnez $v0, 0x131e98
    s1 = 0x20 << 16;                                            // 0x00131e80: lui $s1, 0x20
    func_00131ce8();  // 131ce8                                // 0x00131e84: jal 0x131ce8
    /* nop */                                                   // 0x00131e88: nop 
    goto label_0x1320f0;                                        // 0x00131e8c: b 0x1320f0
    /* nop */                                                   // 0x00131e94: nop 
label_0x131e98:
    g_00201d8c = 0;  // Global at 0x00201d8c                    // 0x00131e98: sw $zero, 0x1d8c($s1)
    v1 = *(uint8_t*)((s2) + 1);                                 // 0x00131e9c: lbu $v1, 1($s2)
    v0 = v1 + -3;                                               // 0x00131ea0: addiu $v0, $v1, -3
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x00131ea4: sltiu $v0, $v0, 2
    if (v0 == 0) goto label_0x132030;                           // 0x00131ea8: beqz $v0, 0x132030
    v0 = v1 << 0x18;                                            // 0x00131eac: sll $v0, $v1, 0x18
    v0 = *(int8_t*)((s2) + 0x72);                               // 0x00131eb0: lb $v0, 0x72($s2)
    /* bnezl $v0, 0x131ee8 */                                   // 0x00131eb4: bnezl $v0, 0x131ee8
    v0 = *(int32_t*)((s2) + 0x9c);                              // 0x00131eb8: lw $v0, 0x9c($s2)
    v0 = 0x1f << 16;                                            // 0x00131ebc: lui $v0, 0x1f
    a0 = *(int32_t*)((s2) + 0xa0);                              // 0x00131ec0: lw $a0, 0xa0($s2)
    v1 = g_001f59c4;  // Global at 0x001f59c4                   // 0x00131ec4: lw $v1, 0x59c4($v0)
    a1 = *(int32_t*)((s2) + 0x9c);                              // 0x00131ec8: lw $a1, 0x9c($s2)
    v1 = v1 - a0;                                               // 0x00131ecc: subu $v1, $v1, $a0
    v0 = v1 << 1;                                               // 0x00131ed0: sll $v0, $v1, 1
    v0 = v0 + v1;                                               // 0x00131ed4: addu $v0, $v0, $v1
    v0 = v0 << 3;                                               // 0x00131ed8: sll $v0, $v0, 3
    v0 = v0 + v1;                                               // 0x00131edc: addu $v0, $v0, $v1
    v0 = v0 << 2;                                               // 0x00131ee0: sll $v0, $v0, 2
    v0 = v0 + a1;                                               // 0x00131ee4: addu $v0, $v0, $a1
    *(uint32_t*)(s3) = v0;                                      // 0x00131ee8: sw $v0, 0($s3)
    a2 = sp + 4;                                                // 0x00131ef0: addiu $a2, $sp, 4
    func_00131ce8();  // 131ce8                                // 0x00131ef8: jal 0x131ce8
    s6 = 0x20 << 16;                                            // 0x00131efc: lui $s6, 0x20
    FPU_F1 = *(float*)(s3);  // Load float                      // 0x00131f00: lwc1 $f1, 0($s3)
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x00131f04: cvt.s.w $f1, $f1
    s4 = s6 + 0x1d88;                                           // 0x00131f08: addiu $s4, $s6, 0x1d88
    a1 = local_0;                                               // 0x00131f0c: lw $a1, 0($sp)
    a2 = local_4;                                               // 0x00131f10: lw $a2, 4($sp)
    a3 = g_00201d88;  // Global at 0x00201d88                   // 0x00131f14: lw $a3, 0($s4)
    /* move to FPU: $a1, $f0 */                                 // 0x00131f18: mtc1 $a1, $f0
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x00131f1c: cvt.s.w $f0, $f0
    /* move to FPU: $a2, $f3 */                                 // 0x00131f20: mtc1 $a2, $f3
    /* FPU: cvt.s.w $f3, $f3 */                                 // 0x00131f24: cvt.s.w $f3, $f3
    at = 0x447a << 16;                                          // 0x00131f28: lui $at, 0x447a
    /* move to FPU: $at, $f5 */                                 // 0x00131f2c: mtc1 $at, $f5
    /* move to FPU: $a3, $f2 */                                 // 0x00131f30: mtc1 $a3, $f2
    /* FPU: cvt.s.w $f2, $f2 */                                 // 0x00131f34: cvt.s.w $f2, $f2
    at = 0x4270 << 16;                                          // 0x00131f38: lui $at, 0x4270
    /* move to FPU: $at, $f4 */                                 // 0x00131f3c: mtc1 $at, $f4
    /* nop */                                                   // 0x00131f40: nop 
    /* nop */                                                   // 0x00131f44: nop 
    /* FPU: div.s $f0, $f0, $f3 */                              // 0x00131f48: div.s $f0, $f0, $f3
    /* nop */                                                   // 0x00131f4c: nop 
    /* nop */                                                   // 0x00131f50: nop 
    /* FPU: div.s $f1, $f1, $f2 */                              // 0x00131f54: div.s $f1, $f1, $f2
    /* FPU: sub.s $f0, $f0, $f1 */                              // 0x00131f58: sub.s $f0, $f0, $f1
    /* FPU: mul.s $f1, $f0, $f5 */                              // 0x00131f5c: mul.s $f1, $f0, $f5
    /* FPU: c.olt.s $f4, $f1 */                                 // 0x00131f60: c.olt.s $f4, $f1
    /* bc1t 0x131f80 */                                         // 0x00131f64: bc1t 0x131f80
    *(float*)((s1) + 0x1d8c) = FPU_F1;  // Store float          // 0x00131f68: swc1 $f1, 0x1d8c($s1)
    at = 0xc270 << 16;                                          // 0x00131f6c: lui $at, 0xc270
    /* move to FPU: $at, $f0 */                                 // 0x00131f70: mtc1 $at, $f0
    /* FPU: c.olt.s $f1, $f0 */                                 // 0x00131f74: c.olt.s $f1, $f0
    /* bc1fl 0x1320d8 */                                        // 0x00131f78: bc1fl 0x1320d8
    v0 = *(int32_t*)((s2) + 0x88);                              // 0x00131f7c: lw $v0, 0x88($s2)
    v0 = 0x20 << 16;                                            // 0x00131f80: lui $v0, 0x20
    a0 = 1;                                                     // 0x00131f84: addiu $a0, $zero, 1
    v1 = g_00201d60;  // Global at 0x00201d60                   // 0x00131f88: lw $v1, 0x1d60($v0)
    if (v1 != a0) goto label_0x131fc0;                          // 0x00131f8c: bne $v1, $a0, 0x131fc0
    s0 = s0 + 0x1d50;                                           // 0x00131f90: addiu $s0, $s0, 0x1d50
    s1 = g_00201d50;  // Global at 0x00201d50                   // 0x00131f98: lw $s1, 0($s0)
    a2 = sp + 4;                                                // 0x00131f9c: addiu $a2, $sp, 4
    g_00201d50 = 0;  // Global at 0x00201d50                    // 0x00131fa0: sw $zero, 0($s0)
    func_00131e20();  // 131e20                                // 0x00131fa4: jal 0x131e20
    func_00131e08();  // 131e08                                // 0x00131fac: jal 0x131e08
    g_00201d50 = s1;  // Global at 0x00201d50                   // 0x00131fb0: sw $s1, 0($s0)
    a3 = g_00201d88;  // Global at 0x00201d88                   // 0x00131fb4: lw $a3, 0($s4)
    a1 = local_0;                                               // 0x00131fb8: lw $a1, 0($sp)
    a2 = local_4;                                               // 0x00131fbc: lw $a2, 4($sp)
label_0x131fc0:
    /* move to FPU: $a2, $f1 */                                 // 0x00131fc0: mtc1 $a2, $f1
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x00131fc4: cvt.s.w $f1, $f1
    at = 0x4f00 << 16;                                          // 0x00131fc8: lui $at, 0x4f00
    /* move to FPU: $at, $f3 */                                 // 0x00131fcc: mtc1 $at, $f3
    /* move to FPU: $a1, $f0 */                                 // 0x00131fd0: mtc1 $a1, $f0
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x00131fd4: cvt.s.w $f0, $f0
    /* move to FPU: $a3, $f2 */                                 // 0x00131fd8: mtc1 $a3, $f2
    /* FPU: cvt.s.w $f2, $f2 */                                 // 0x00131fdc: cvt.s.w $f2, $f2
    /* nop */                                                   // 0x00131fe0: nop 
    /* nop */                                                   // 0x00131fe4: nop 
    /* FPU: div.s $f0, $f0, $f1 */                              // 0x00131fe8: div.s $f0, $f0, $f1
    /* FPU: mul.s $f0, $f0, $f2 */                              // 0x00131fec: mul.s $f0, $f0, $f2
    /* FPU: c.ole.s $f3, $f0 */                                 // 0x00131ff0: c.ole.s $f3, $f0
    /* FPU: cvt.w.s $f1, $f0 */                                 // 0x00131ff4: cvt.w.s $f1, $f0
    /* move from FPU: $v1, $f1 */                               // 0x00131ff8: mfc1 $v1, $f1
    /* bc1fl 0x13201c */                                        // 0x00131ffc: bc1fl 0x13201c
    *(uint32_t*)((s2) + 0x9c) = v1;                             // 0x00132000: sw $v1, 0x9c($s2)
    /* FPU: sub.s $f0, $f0, $f3 */                              // 0x00132004: sub.s $f0, $f0, $f3
    v0 = 0x8000 << 16;                                          // 0x00132008: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f0 */                                 // 0x0013200c: cvt.w.s $f1, $f0
    /* move from FPU: $v1, $f1 */                               // 0x00132010: mfc1 $v1, $f1
    v1 = v1 | v0;                                               // 0x00132014: or $v1, $v1, $v0
    *(uint32_t*)((s2) + 0x9c) = v1;                             // 0x00132018: sw $v1, 0x9c($s2)
    v1 = 0x1f << 16;                                            // 0x0013201c: lui $v1, 0x1f
    v0 = g_001f59c4;  // Global at 0x001f59c4                   // 0x00132020: lw $v0, 0x59c4($v1)
    goto label_0x1320d4;                                        // 0x00132024: b 0x1320d4
    *(uint32_t*)((s2) + 0xa0) = v0;                             // 0x00132028: sw $v0, 0xa0($s2)
    /* nop */                                                   // 0x0013202c: nop 
label_0x132030:
    v1 = 5;                                                     // 0x00132030: addiu $v1, $zero, 5
    v0 = v0 >> 0x18;                                            // 0x00132034: sra $v0, $v0, 0x18
    if (v0 != v1) goto label_0x1320d0;                          // 0x00132038: bnel $v0, $v1, 0x1320d0
    *(uint32_t*)(s3) = 0;                                       // 0x0013203c: sw $zero, 0($s3)
    a0 = *(int32_t*)((s2) + 4);                                 // 0x00132040: lw $a0, 4($s2)
    func_0012d4c8();  // 12d4c8                                // 0x00132044: jal 0x12d4c8
    s6 = 0x20 << 16;                                            // 0x00132048: lui $s6, 0x20
    a0 = *(int32_t*)((s2) + 4);                                 // 0x0013204c: lw $a0, 4($s2)
    func_0012d450();  // 12d450                                // 0x00132050: jal 0x12d450
    local_0 = v0;                                               // 0x00132054: sw $v0, 0($sp)
    a0 = *(int32_t*)((s2) + 4);                                 // 0x00132058: lw $a0, 4($s2)
    func_0012d480();  // 12d480                                // 0x0013205c: jal 0x12d480
    local_4 = v0;                                               // 0x00132060: sw $v0, 4($sp)
    v1 = 0x10;                                                  // 0x00132064: addiu $v1, $zero, 0x10
    /* divide: v1 / v0 -> hi:lo */                              // 0x00132068: div $zero, $v1, $v0
    /* beqzl $v0, 0x132074 */                                   // 0x0013206c: beqzl $v0, 0x132074
    /* break (trap) */                                          // 0x00132070: break 0, 7
    v0 = local_0;                                               // 0x00132074: lw $v0, 0($sp)
    FPU_F2 = *(float*)((sp) + 4);  // Load float                // 0x00132078: lwc1 $f2, 4($sp)
    /* FPU: cvt.s.w $f2, $f2 */                                 // 0x0013207c: cvt.s.w $f2, $f2
    FPU_F1 = *(float*)((s6) + 0x1d88);  // Load float           // 0x00132080: lwc1 $f1, 0x1d88($s6)
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x00132084: cvt.s.w $f1, $f1
    /* mflo $v1 */                                              // 0x00132088
    /* move to FPU: $a1, $f0 */                                 // 0x00132090: mtc1 $a1, $f0
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x00132094: cvt.s.w $f0, $f0
    local_0 = a1;                                               // 0x00132098: sw $a1, 0($sp)
    /* nop */                                                   // 0x0013209c: nop 
    /* nop */                                                   // 0x001320a0: nop 
    /* FPU: div.s $f0, $f0, $f2 */                              // 0x001320a4: div.s $f0, $f0, $f2
    /* FPU: mul.s $f0, $f0, $f1 */                              // 0x001320a8: mul.s $f0, $f0, $f1
    /* FPU: cvt.w.s $f1, $f0 */                                 // 0x001320ac: cvt.w.s $f1, $f0
    /* move from FPU: $v1, $f1 */                               // 0x001320b0: mfc1 $v1, $f1
    *(uint32_t*)(s3) = v1;                                      // 0x001320b4: sw $v1, 0($s3)
    v0 = *(int32_t*)((s2) + 0x9c);                              // 0x001320b8: lw $v0, 0x9c($s2)
    v0 = v0 + 1;                                                // 0x001320bc: addiu $v0, $v0, 1
    v1 = v1 + v0;                                               // 0x001320c0: addu $v1, $v1, $v0
    goto label_0x1320d4;                                        // 0x001320c4: b 0x1320d4
    *(uint32_t*)(s3) = v1;                                      // 0x001320c8: sw $v1, 0($s3)
    /* nop */                                                   // 0x001320cc: nop 
label_0x1320d0:
    s6 = 0x20 << 16;                                            // 0x001320d0: lui $s6, 0x20
label_0x1320d4:
    v0 = *(int32_t*)((s2) + 0x88);                              // 0x001320d4: lw $v0, 0x88($s2)
    v1 = *(int32_t*)(s3);                                       // 0x001320d8: lw $v1, 0($s3)
    v1 = v1 + v0;                                               // 0x001320dc: addu $v1, $v1, $v0
    *(uint32_t*)(s3) = v1;                                      // 0x001320e0: sw $v1, 0($s3)
    v0 = g_00201d88;  // Global at 0x00201d88                   // 0x001320e4: lw $v0, 0x1d88($s6)
    *(uint32_t*)(s5) = v0;                                      // 0x001320e8: sw $v0, 0($s5)
label_0x1320f0:
    return;                                                     // 0x0013210c: jr $ra
    sp = sp + 0x50;                                             // 0x00132110: addiu $sp, $sp, 0x50
}