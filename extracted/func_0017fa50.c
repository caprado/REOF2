void func_0017fa50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x0017fa50: addiu $sp, $sp, -0x50
    func_0011d320();  // 11d320                                // 0x0017fa74: jal 0x11d320
    VPU_VF4 = *(vec128_t*)((s2) + 0);  // Load 128-bit vector   // 0x0017fa7c: ldc2 $4, 0($s2)
    VPU_VF5 = *(vec128_t*)((s2) + 0x10);  // Load 128-bit vector // 0x0017fa80: ldc2 $5, 0x10($s2)
    VPU_VF6 = *(vec128_t*)((s2) + 0x20);  // Load 128-bit vector // 0x0017fa84: ldc2 $6, 0x20($s2)
    VPU_VF7 = *(vec128_t*)((s2) + 0x30);  // Load 128-bit vector // 0x0017fa88: ldc2 $7, 0x30($s2)
    VPU_VF8 = *(vec128_t*)((s1) + 0);  // Load 128-bit vector   // 0x0017fa8c: ldc2 $8, 0($s1)
    if (s0 == 0) goto label_0x17fab8;                           // 0x0017faac: beqz $s0, 0x17fab8
label_0x17fab8:
    *(vec128_t*)((s3) + 0) = VPU_VF10;  // Store 128-bit vector // 0x0017fab8: sdc2 $10, 0($s3)
    if (v0 == 0) goto label_0x17fadc;                           // 0x0017fabc: beqz $v0, 0x17fadc
    return func_0011d390();  // Tail call                        // 0x0017fad4: j 0x11d378
    sp = sp + 0x50;                                             // 0x0017fad8: addiu $sp, $sp, 0x50
label_0x17fadc:
    return;                                                     // 0x0017faec: jr $ra
    sp = sp + 0x50;                                             // 0x0017faf0: addiu $sp, $sp, 0x50
}