void func_0017e9d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0017e9d8: addiu $sp, $sp, -0x30
    func_0011d378();  // 0x11d320                                // 0x0017e9ec: jal 0x11d320
    /* FPU: nori.b $w0, $w0, 8 */                               // 0x0017e9f4: nori.b $w0, $w0, 8
    /* FPU: ave_s.b $w0, $w0, $w9 */                            // 0x0017e9f8: ave_s.b $w0, $w0, $w9
    /* FPU: ld.b $w0, -0x1f6($zero) */                          // 0x0017e9fc: ld.b $w0, -0x1f6($zero)
    /* FPU: addu.qb $zero, $s1, $t1 */                          // 0x0017ea28: addu.qb $zero, $s1, $t1
    /* FPU: dpa.w.ph $ac0, $s1, $t3 */                          // 0x0017ea30: dpa.w.ph $ac0, $s1, $t3
    if (v0 == 0) goto label_0x17ea4c;                           // 0x0017ea34: beqz $v0, 0x17ea4c
    return func_0011d390();  // Tail call                        // 0x0017ea44: j 0x11d378
    sp = sp + 0x30;                                             // 0x0017ea48: addiu $sp, $sp, 0x30
label_0x17ea4c:
    return;                                                     // 0x0017ea54: jr $ra
    sp = sp + 0x30;                                             // 0x0017ea58: addiu $sp, $sp, 0x30
}