void func_0017efa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0017efa0: addiu $sp, $sp, -0x30
    func_0011d320();  // 11d320                                // 0x0017efb4: jal 0x11d320
    VPU_VF4 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x0017efbc: ldc2 $4, 0($s0)
    *(vec128_t*)((s1) + 0) = VPU_VF5;  // Store 128-bit vector  // 0x0017efc4: sdc2 $5, 0($s1)
    if (v0 == 0) goto label_0x17efe0;                           // 0x0017efc8: beqz $v0, 0x17efe0
    return func_0011d390();  // Tail call                        // 0x0017efd8: j 0x11d378
    sp = sp + 0x30;                                             // 0x0017efdc: addiu $sp, $sp, 0x30
label_0x17efe0:
    return;                                                     // 0x0017efe8: jr $ra
    sp = sp + 0x30;                                             // 0x0017efec: addiu $sp, $sp, 0x30
}