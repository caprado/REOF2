void func_0018faa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0018faa0: addiu $sp, $sp, -0x40
    a0 = 0x28 << 16;                                            // 0x0018faa4: lui $a0, 0x28
    a0 = a0 + 0x52e0;                                           // 0x0018faac: addiu $a0, $a0, 0x52e0
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x0018fab4: addu.qb $zero, $sp, $s0
    *(float*)((sp) + 4) = FPU_F21;  // Store float              // 0x0018fabc: swc1 $f21, 4($sp)
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x0018fac4: swc1 $f20, 0($sp)
    /* FPU: mov.s $f21, $f12 */                                 // 0x0018fac8: mov.s $f21, $f12
    func_0018fbd0();  // 0x18fba0                                // 0x0018facc: jal 0x18fba0
    /* FPU: mov.s $f20, $f13 */                                 // 0x0018fad0: mov.s $f20, $f13
    if (s1 >= 0) goto label_0x18fae4;                           // 0x0018fad4: bgez $s1, 0x18fae4
    v1 = s1 >> 1;                                               // 0x0018fad8: sra $v1, $s1, 1
    v1 = s1 + 1;                                                // 0x0018fadc: addiu $v1, $s1, 1
    v1 = v1 >> 1;                                               // 0x0018fae0: sra $v1, $v1, 1
label_0x18fae4:
    /* move to FPU: $v1, $f0 */                                 // 0x0018fae4: mtc1 $v1, $f0
    at = 0x28 << 16;                                            // 0x0018fae8: lui $at, 0x28
    a0 = s0 >> 1;                                               // 0x0018faec: sra $a0, $s0, 1
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018faf0: cvt.s.w $f0, $f0
    if (s0 >= 0) goto label_0x18fb04;                           // 0x0018faf4: bgez $s0, 0x18fb04
    *(float*)((at) + 0x52e0) = FPU_F0;  // Store float          // 0x0018faf8: swc1 $f0, 0x52e0($at)
    v1 = s0 + 1;                                                // 0x0018fafc: addiu $v1, $s0, 1
    a0 = v1 >> 1;                                               // 0x0018fb00: sra $a0, $v1, 1
label_0x18fb04:
    v1 = 0x3f80 << 16;                                          // 0x0018fb04: lui $v1, 0x3f80
    at = 0x28 << 16;                                            // 0x0018fb08: lui $at, 0x28
    g_0028531c = v1;  // Global at 0x0028531c                   // 0x0018fb0c: sw $v1, 0x531c($at)
    /* FPU: sub.s $f0, $f20, $f21 */                            // 0x0018fb10: sub.s $f0, $f20, $f21
    at = 0x29 << 16;                                            // 0x0018fb14: lui $at, 0x29
    v1 = 0x3f00 << 16;                                          // 0x0018fb18: lui $v1, 0x3f00
    FPU_F5 = *(float*)((at) + -0x4c);  // Load float            // 0x0018fb1c: lwc1 $f5, -0x4c($at)
    FPU_F1 = *(float*)((gp) + -0x64b0);  // Load float          // 0x0018fb20: lwc1 $f1, -0x64b0($gp)
    /* move to FPU: $v1, $f3 */                                 // 0x0018fb24: mtc1 $v1, $f3
    at = 0x28 << 16;                                            // 0x0018fb28: lui $at, 0x28
    *(float*)((at) + 0x5308) = FPU_F0;  // Store float          // 0x0018fb2c: swc1 $f0, 0x5308($at)
    /* move to FPU: $a0, $f0 */                                 // 0x0018fb30: mtc1 $a0, $f0
    at = 0x28 << 16;                                            // 0x0018fb34: lui $at, 0x28
    FPU_F2 = *(float*)((at) + 0x5308);  // Load float           // 0x0018fb38: lwc1 $f2, 0x5308($at)
    /* FPU: cvt.s.w $f4, $f0 */                                 // 0x0018fb3c: cvt.s.w $f4, $f0
    at = 0x28 << 16;                                            // 0x0018fb40: lui $at, 0x28
    FPU_F0 = *(float*)((gp) + -0x64b4);  // Load float          // 0x0018fb44: lwc1 $f0, -0x64b4($gp)
    *(float*)((at) + 0x5310) = FPU_F1;  // Store float          // 0x0018fb48: swc1 $f1, 0x5310($at)
    at = 0x28 << 16;                                            // 0x0018fb4c: lui $at, 0x28
    *(float*)((at) + 0x5314) = FPU_F0;  // Store float          // 0x0018fb50: swc1 $f0, 0x5314($at)
    /* FPU: neg.s $f0, $f4 */                                   // 0x0018fb54: neg.s $f0, $f4
    at = 0x28 << 16;                                            // 0x0018fb58: lui $at, 0x28
    *(float*)((at) + 0x52f4) = FPU_F0;  // Store float          // 0x0018fb5c: swc1 $f0, 0x52f4($at)
    /* FPU: neg.s $f0, $f5 */                                   // 0x0018fb60: neg.s $f0, $f5
    at = 0x28 << 16;                                            // 0x0018fb64: lui $at, 0x28
    /* FPU: mul.s $f0, $f3, $f0 */                              // 0x0018fb68: mul.s $f0, $f3, $f0
    /* FPU: mul.s $f1, $f2, $f0 */                              // 0x0018fb6c: mul.s $f1, $f2, $f0
    /* FPU: mul.s $f0, $f3, $f5 */                              // 0x0018fb70: mul.s $f0, $f3, $f5
    *(float*)((at) + 0x5308) = FPU_F1;  // Store float          // 0x0018fb74: swc1 $f1, 0x5308($at)
    at = 0x28 << 16;                                            // 0x0018fb78: lui $at, 0x28
    *(float*)((at) + 0x5318) = FPU_F0;  // Store float          // 0x0018fb7c: swc1 $f0, 0x5318($at)
    FPU_F21 = *(float*)((sp) + 4);  // Load float               // 0x0018fb84: lwc1 $f21, 4($sp)
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x0018fb88: ld.b $w0, -0x4f($zero)
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x0018fb8c: lwc1 $f20, 0($sp)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x0018fb90: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x0018fb94: jr $ra
    sp = sp + 0x40;                                             // 0x0018fb98: addiu $sp, $sp, 0x40
}