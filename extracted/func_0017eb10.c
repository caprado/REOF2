void func_0017eb10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0017eb10: addiu $sp, $sp, -0x40
    *(float*)((sp) + 0x30) = FPU_F20;  // Store float           // 0x0017eb20: swc1 $f20, 0x30($sp)
    func_0011d378();  // 0x11d320                                // 0x0017eb2c: jal 0x11d320
    /* FPU: mov.s $f20, $f12 */                                 // 0x0017eb30: mov.s $f20, $f12
    VPU_VF4 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x0017eb34: ldc2 $4, 0($s0)
    /* move from FPU: $t0, $f20 */                              // 0x0017eb38: mfc1 $t0, $f20
    *(vec128_t*)((s1) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x0017eb4c: sdc2 $4, 0($s1)
    if (v0 == 0) goto label_0x17eb6c;                           // 0x0017eb50: beqz $v0, 0x17eb6c
    FPU_F20 = *(float*)((sp) + 0x30);  // Load float            // 0x0017eb60: lwc1 $f20, 0x30($sp)
    return func_0011d390();  // Tail call                        // 0x0017eb64: j 0x11d378
    sp = sp + 0x40;                                             // 0x0017eb68: addiu $sp, $sp, 0x40
label_0x17eb6c:
    FPU_F20 = *(float*)((sp) + 0x30);  // Load float            // 0x0017eb74: lwc1 $f20, 0x30($sp)
    return;                                                     // 0x0017eb78: jr $ra
    sp = sp + 0x40;                                             // 0x0017eb7c: addiu $sp, $sp, 0x40
}