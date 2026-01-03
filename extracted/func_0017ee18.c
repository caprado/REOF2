void func_0017ee18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0017ee18: addiu $sp, $sp, -0x40
    func_0011d320();  // 11d320                                // 0x0017ee34: jal 0x11d320
    VPU_VF4 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x0017ee3c: ldc2 $4, 0($s0)
    VPU_VF5 = *(vec128_t*)((s1) + 0x30);  // Load 128-bit vector // 0x0017ee40: ldc2 $5, 0x30($s1)
    /* FPU: nori.b $w0, $w0, 0x27 */                            // 0x0017ee44: nori.b $w0, $w0, 0x27
    /* FPU: ave_s.h $w0, $w0, $w8 */                            // 0x0017ee48: ave_s.h $w0, $w0, $w8
    /* FPU: ld.b $w0, -0x1d7($zero) */                          // 0x0017ee4c: ld.b $w0, -0x1d7($zero)
    /* FPU: addu.qb $zero, $s2, $t0 */                          // 0x0017ee58: addu.qb $zero, $s2, $t0
    *(vec128_t*)((s2) + 0x30) = VPU_VF5;  // Store 128-bit vector // 0x0017ee60: sdc2 $5, 0x30($s2)
    if (v0 == 0) goto label_0x17ee80;                           // 0x0017ee64: beqz $v0, 0x17ee80
    return func_0011d390();  // Tail call                        // 0x0017ee78: j 0x11d378
    sp = sp + 0x40;                                             // 0x0017ee7c: addiu $sp, $sp, 0x40
label_0x17ee80:
    return;                                                     // 0x0017ee8c: jr $ra
    sp = sp + 0x40;                                             // 0x0017ee90: addiu $sp, $sp, 0x40
}