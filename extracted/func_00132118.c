void func_00132118() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00132118: addiu $sp, $sp, -0x20
    func_00131e20();  // 131e20                                // 0x00132124: jal 0x131e20
    a2 = sp + 4;                                                // 0x00132128: addiu $a2, $sp, 4
    FPU_F1 = *(float*)(sp);  // Load float                      // 0x0013212c: lwc1 $f1, 0($sp)
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x00132130: cvt.s.w $f1, $f1
    at = 0x42c8 << 16;                                          // 0x00132134: lui $at, 0x42c8
    /* move to FPU: $at, $f0 */                                 // 0x00132138: mtc1 $at, $f0
    FPU_F2 = *(float*)((sp) + 4);  // Load float                // 0x0013213c: lwc1 $f2, 4($sp)
    /* FPU: cvt.s.w $f2, $f2 */                                 // 0x00132140: cvt.s.w $f2, $f2
    /* nop */                                                   // 0x00132148: nop 
    /* nop */                                                   // 0x0013214c: nop 
    /* FPU: div.s $f1, $f1, $f2 */                              // 0x00132150: div.s $f1, $f1, $f2
    /* FPU: mul.s $f1, $f1, $f0 */                              // 0x00132154: mul.s $f1, $f1, $f0
    /* FPU: cvt.w.s $f0, $f1 */                                 // 0x00132158: cvt.w.s $f0, $f1
    /* move from FPU: $v0, $f0 */                               // 0x0013215c: mfc1 $v0, $f0
    return;                                                     // 0x00132160: jr $ra
    sp = sp + 0x20;                                             // 0x00132164: addiu $sp, $sp, 0x20
}