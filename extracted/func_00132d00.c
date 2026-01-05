void func_00132d00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00132d00: addiu $sp, $sp, -0x10
    return func_00127d90();  // Tail call                        // 0x00132d0c: j 0x127d68
    sp = sp + 0x10;                                             // 0x00132d10: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00132d14: nop 
    sp = sp + -0x40;                                            // 0x00132d18: addiu $sp, $sp, -0x40
    v1 = *(int8_t*)((s3) + 0x72);                               // 0x00132d34: lb $v1, 0x72($s3)
    if (v1 == 0) goto label_0x132de0;                           // 0x00132d38: beqz $v1, 0x132de0
    a0 = *(int32_t*)((s3) + 0xc);                               // 0x00132d40: lw $a0, 0xc($s3)
    s0 = 0x20 << 16;                                            // 0x00132d44: lui $s0, 0x20
    func_0012c570();  // 12c570                                // 0x00132d48: jal 0x12c570
    s0 = s0 + 0x1d50;                                           // 0x00132d4c: addiu $s0, $s0, 0x1d50
    func_001328c8();  // 1328c8                                // 0x00132d50: jal 0x1328c8
    s1 = g_00201d50;  // Global at 0x00201d50                   // 0x00132d58: lw $s1, 0($s0)
    g_00201d50 = 0;  // Global at 0x00201d50                    // 0x00132d60: sw $zero, 0($s0)
    func_00131e20();  // 131e20                                // 0x00132d68: jal 0x131e20
    a2 = sp + 4;                                                // 0x00132d6c: addiu $a2, $sp, 4
    v0 = 0x20 << 16;                                            // 0x00132d70: lui $v0, 0x20
    FPU_F0 = *(float*)(sp);  // Load float                      // 0x00132d74: lwc1 $f0, 0($sp)
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x00132d78: cvt.s.w $f0, $f0
    at = 0x4f00 << 16;                                          // 0x00132d7c: lui $at, 0x4f00
    /* move to FPU: $at, $f3 */                                 // 0x00132d80: mtc1 $at, $f3
    FPU_F2 = *(float*)((sp) + 4);  // Load float                // 0x00132d84: lwc1 $f2, 4($sp)
    /* FPU: cvt.s.w $f2, $f2 */                                 // 0x00132d88: cvt.s.w $f2, $f2
    FPU_F1 = *(float*)((v0) + 0x1d88);  // Load float           // 0x00132d8c: lwc1 $f1, 0x1d88($v0)
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x00132d90: cvt.s.w $f1, $f1
    g_00201d50 = s1;  // Global at 0x00201d50                   // 0x00132d94: sw $s1, 0($s0)
    /* nop */                                                   // 0x00132d98: nop 
    /* nop */                                                   // 0x00132d9c: nop 
    /* FPU: div.s $f0, $f0, $f2 */                              // 0x00132da0: div.s $f0, $f0, $f2
    /* FPU: mul.s $f0, $f0, $f1 */                              // 0x00132da4: mul.s $f0, $f0, $f1
    /* FPU: c.ole.s $f3, $f0 */                                 // 0x00132da8: c.ole.s $f3, $f0
    /* FPU: cvt.w.s $f1, $f0 */                                 // 0x00132dac: cvt.w.s $f1, $f0
    /* move from FPU: $a0, $f1 */                               // 0x00132db0: mfc1 $a0, $f1
    /* bc1f 0x132dd0 */                                         // 0x00132db4: bc1f 0x132dd0
    /* FPU: sub.s $f0, $f0, $f3 */                              // 0x00132dbc: sub.s $f0, $f0, $f3
    /* FPU: cvt.w.s $f1, $f0 */                                 // 0x00132dc0: cvt.w.s $f1, $f0
    /* move from FPU: $a0, $f1 */                               // 0x00132dc4: mfc1 $a0, $f1
    v1 = 0x8000 << 16;                                          // 0x00132dc8: lui $v1, 0x8000
    a0 = a0 | v1;                                               // 0x00132dcc: or $a0, $a0, $v1
    *(uint32_t*)((s3) + 0x9c) = a0;                             // 0x00132dd0: sw $a0, 0x9c($s3)
    v1 = 0x1f << 16;                                            // 0x00132dd4: lui $v1, 0x1f
    a0 = g_001f59c4;  // Global at 0x001f59c4                   // 0x00132dd8: lw $a0, 0x59c4($v1)
    *(uint32_t*)((s3) + 0xa0) = a0;                             // 0x00132ddc: sw $a0, 0xa0($s3)
label_0x132de0:
    return;                                                     // 0x00132df4: jr $ra
    sp = sp + 0x40;                                             // 0x00132df8: addiu $sp, $sp, 0x40
}