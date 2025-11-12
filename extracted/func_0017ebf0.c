void func_0017ebf0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x0017ebf0: addiu $sp, $sp, -0x50
    *(float*)((sp) + 0x40) = FPU_F20;  // Store float           // 0x0017ec08: swc1 $f20, 0x40($sp)
    func_0011d378();  // 0x11d320                                // 0x0017ec14: jal 0x11d320
    /* FPU: mov.s $f20, $f12 */                                 // 0x0017ec18: mov.s $f20, $f12
    VPU_VF4 = *(vec128_t*)((s1) + 0);  // Load 128-bit vector   // 0x0017ec1c: ldc2 $4, 0($s1)
    VPU_VF5 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x0017ec20: ldc2 $5, 0($s0)
    /* move from FPU: $t0, $f20 */                              // 0x0017ec24: mfc1 $t0, $f20
    *(vec128_t*)((s2) + 0) = VPU_VF9;  // Store 128-bit vector  // 0x0017ec3c: sdc2 $9, 0($s2)
    if (v0 == 0) goto label_0x17ec60;                           // 0x0017ec40: beqz $v0, 0x17ec60
    FPU_F20 = *(float*)((sp) + 0x40);  // Load float            // 0x0017ec54: lwc1 $f20, 0x40($sp)
    return func_0011d390();  // Tail call                        // 0x0017ec58: j 0x11d378
    sp = sp + 0x50;                                             // 0x0017ec5c: addiu $sp, $sp, 0x50
label_0x17ec60:
    FPU_F20 = *(float*)((sp) + 0x40);  // Load float            // 0x0017ec6c: lwc1 $f20, 0x40($sp)
    return;                                                     // 0x0017ec70: jr $ra
    sp = sp + 0x50;                                             // 0x0017ec74: addiu $sp, $sp, 0x50
}