void func_0017ea60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0017ea60: addiu $sp, $sp, -0x30
    func_0011d378();  // 0x11d320                                // 0x0017ea74: jal 0x11d320
    /* FPU: nori.b $w0, $w0, 8 */                               // 0x0017ea7c: nori.b $w0, $w0, 8
    /* FPU: ave_s.b $w0, $w0, $w9 */                            // 0x0017ea80: ave_s.b $w0, $w0, $w9
    /* FPU: ld.b $w0, -0x1f6($zero) */                          // 0x0017ea84: ld.b $w0, -0x1f6($zero)
    VPU_VF4 = *(vec128_t*)((s0) + 0x30);  // Load 128-bit vector // 0x0017ea88: ldc2 $4, 0x30($s0)
    /* FPU: addu.qb $zero, $s1, $t1 */                          // 0x0017ead8: addu.qb $zero, $s1, $t1
    *(vec128_t*)((s1) + 0x30) = VPU_VF4;  // Store 128-bit vector // 0x0017eae0: sdc2 $4, 0x30($s1)
    if (v0 == 0) goto label_0x17eafc;                           // 0x0017eae4: beqz $v0, 0x17eafc
    return func_0011d390();  // Tail call                        // 0x0017eaf4: j 0x11d378
    sp = sp + 0x30;                                             // 0x0017eaf8: addiu $sp, $sp, 0x30
label_0x17eafc:
    return;                                                     // 0x0017eb04: jr $ra
    sp = sp + 0x30;                                             // 0x0017eb08: addiu $sp, $sp, 0x30
}