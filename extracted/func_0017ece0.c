void func_0017ece0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0017ece0: addiu $sp, $sp, -0x40
    func_0011d378();  // 0x11d320                                // 0x0017ecfc: jal 0x11d320
    VPU_VF4 = *(vec128_t*)((s1) + 0);  // Load 128-bit vector   // 0x0017ed04: ldc2 $4, 0($s1)
    VPU_VF5 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x0017ed08: ldc2 $5, 0($s0)
    *(vec128_t*)((s2) + 0) = VPU_VF6;  // Store 128-bit vector  // 0x0017ed10: sdc2 $6, 0($s2)
    if (v0 == 0) goto label_0x17ed30;                           // 0x0017ed14: beqz $v0, 0x17ed30
    return func_0011d390();  // Tail call                        // 0x0017ed28: j 0x11d378
    sp = sp + 0x40;                                             // 0x0017ed2c: addiu $sp, $sp, 0x40
label_0x17ed30:
    return;                                                     // 0x0017ed3c: jr $ra
    sp = sp + 0x40;                                             // 0x0017ed40: addiu $sp, $sp, 0x40
}