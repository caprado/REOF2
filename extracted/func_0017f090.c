void func_0017f090() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0017f090: addiu $sp, $sp, -0x20
    func_0011d320();  // 11d320                                // 0x0017f09c: jal 0x11d320
    *(vec128_t*)((s0) + 0x30) = VPU_VF4;  // Store 128-bit vector // 0x0017f0b8: sdc2 $4, 0x30($s0)
    *(vec128_t*)((s0) + 0x20) = VPU_VF5;  // Store 128-bit vector // 0x0017f0bc: sdc2 $5, 0x20($s0)
    *(vec128_t*)((s0) + 0x10) = VPU_VF6;  // Store 128-bit vector // 0x0017f0c0: sdc2 $6, 0x10($s0)
    *(vec128_t*)((s0) + 0) = VPU_VF7;  // Store 128-bit vector  // 0x0017f0c4: sdc2 $7, 0($s0)
    if (v0 == 0) goto label_0x17f0dc;                           // 0x0017f0c8: beqz $v0, 0x17f0dc
    return func_0011d390();  // Tail call                        // 0x0017f0d4: j 0x11d378
    sp = sp + 0x20;                                             // 0x0017f0d8: addiu $sp, $sp, 0x20
label_0x17f0dc:
    return;                                                     // 0x0017f0e0: jr $ra
    sp = sp + 0x20;                                             // 0x0017f0e4: addiu $sp, $sp, 0x20
}