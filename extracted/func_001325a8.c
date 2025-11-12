void func_001325a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001325a8: addiu $sp, $sp, -0x10
    if (a3 != 0) goto label_0x1325d0;                           // 0x001325b4: bnez $a3, 0x1325d0
    a0 = 0x22 << 16;                                            // 0x001325bc: lui $a0, 0x22
    a0 = &str_00223a88;  // "E02080839 ADXT_SetReloadSct: parameter error" // 0x001325c4: addiu $a0, $a0, 0x3a88
    return func_00127de8();  // Tail call                        // 0x001325c8: j 0x127d90
    sp = sp + 0x10;                                             // 0x001325cc: addiu $sp, $sp, 0x10
label_0x1325d0:
    /* move to FPU: $a2, $f0 */                                 // 0x001325d0: mtc1 $a2, $f0
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001325d4: cvt.s.w $f0, $f0
    a1 = *(int16_t*)((a3) + 0x3c);                              // 0x001325d8: lh $a1, 0x3c($a3)
    /* FPU: mul.s $f0, $f12, $f0 */                             // 0x001325e0: mul.s $f0, $f12, $f0
    /* FPU: cvt.w.s $f1, $f0 */                                 // 0x001325e4: cvt.w.s $f1, $f0
    /* move from FPU: $v1, $f1 */                               // 0x001325e8: mfc1 $v1, $f1
    a0 = v1 + 0x1f;                                             // 0x001325ec: addiu $a0, $v1, 0x1f
    v0 = (v1 < 0) ? 1 : 0;                                      // 0x001325f0: slti $v0, $v1, 0
    if (v0 != 0) v1 = a0;                                       // 0x001325f4: movn $v1, $a0, $v0
    v1 = v1 >> 5;                                               // 0x001325f8: sra $v1, $v1, 5
    /* multiply: v1 * t0 -> hi:lo */                            // 0x001325fc: mult $ac3, $v1, $t0
    v0 = v1 << 3;                                               // 0x00132600: sll $v0, $v1, 3
    v0 = v0 + v1;                                               // 0x00132604: addu $v0, $v0, $v1
    v0 = v0 << 1;                                               // 0x00132608: sll $v0, $v0, 1
    a0 = v0 + 0x7ff;                                            // 0x0013260c: addiu $a0, $v0, 0x7ff
    v0 = (v0 < 0) ? 1 : 0;                                      // 0x00132614: slti $v0, $v0, 0
    if (v0 != 0) v1 = a0;                                       // 0x00132618: movn $v1, $a0, $v0
    v1 = v1 >> 0xb;                                             // 0x0013261c: sra $v1, $v1, 0xb
    v0 = (v1 < a1) ? 1 : 0;                                     // 0x00132620: slt $v0, $v1, $a1
    if (v0 != 0) a1 = v1;                                       // 0x00132624: movn $a1, $v1, $v0
    *(uint16_t*)((a3) + 0x3e) = a1;                             // 0x00132628: sh $a1, 0x3e($a3)
    return;                                                     // 0x0013262c: jr $ra
    sp = sp + 0x10;                                             // 0x00132630: addiu $sp, $sp, 0x10
}