void func_0017edb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0017edb0: addiu $sp, $sp, -0x40
    *(float*)((sp) + 0x30) = FPU_F20;  // Store float           // 0x0017edc0: swc1 $f20, 0x30($sp)
    func_0011d320();  // 11d320                                // 0x0017edcc: jal 0x11d320
    /* FPU: mov.s $f20, $f12 */                                 // 0x0017edd0: mov.s $f20, $f12
    VPU_VF4 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x0017edd4: ldc2 $4, 0($s0)
    /* move from FPU: $t0, $f20 */                              // 0x0017edd8: mfc1 $t0, $f20
    *(vec128_t*)((s1) + 0) = VPU_VF6;  // Store 128-bit vector  // 0x0017ede4: sdc2 $6, 0($s1)
    if (v0 == 0) goto label_0x17ee04;                           // 0x0017ede8: beqz $v0, 0x17ee04
    FPU_F20 = *(float*)((sp) + 0x30);  // Load float            // 0x0017edf8: lwc1 $f20, 0x30($sp)
    return func_0011d390();  // Tail call                        // 0x0017edfc: j 0x11d378
    sp = sp + 0x40;                                             // 0x0017ee00: addiu $sp, $sp, 0x40
label_0x17ee04:
    FPU_F20 = *(float*)((sp) + 0x30);  // Load float            // 0x0017ee0c: lwc1 $f20, 0x30($sp)
    return;                                                     // 0x0017ee10: jr $ra
    sp = sp + 0x40;                                             // 0x0017ee14: addiu $sp, $sp, 0x40
}