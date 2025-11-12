void func_00198930() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x29 << 16;                                            // 0x00198930: lui $at, 0x29
    FPU_F0 = *(float*)((at) + 0x320);  // Load float            // 0x00198934: lwc1 $f0, 0x320($at)
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x00198938: cvt.s.w $f0, $f0
    at = 0x29 << 16;                                            // 0x0019893c: lui $at, 0x29
    v0 = g_0028ff74;  // Global at 0x0028ff74                   // 0x00198940: lw $v0, -0x8c($at)
    if (v0 != 0) goto label_0x19895c;                           // 0x00198944: bnez $v0, 0x19895c
    /* FPU: sub.s $f12, $f12, $f0 */                            // 0x00198948: sub.s $f12, $f12, $f0
    v0 = 0x3f00 << 16;                                          // 0x0019894c: lui $v0, 0x3f00
    /* move to FPU: $v0, $f0 */                                 // 0x00198950: mtc1 $v0, $f0
    /* nop */                                                   // 0x00198954: nop 
    /* FPU: mul.s $f12, $f12, $f0 */                            // 0x00198958: mul.s $f12, $f12, $f0
label_0x19895c:
    return;                                                     // 0x0019895c: jr $ra
    /* FPU: mov.s $f0, $f12 */                                  // 0x00198960: mov.s $f0, $f12
}