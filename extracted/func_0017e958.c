void func_0017e958() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0017e958: addiu $sp, $sp, -0x30
    func_0011d320();  // 11d320                                // 0x0017e96c: jal 0x11d320
    VPU_VF4 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x0017e974: ldc2 $4, 0($s0)
    *(vec128_t*)((s1) + 0) = VPU_VF6;  // Store 128-bit vector  // 0x0017e9a8: sdc2 $6, 0($s1)
    if (v0 == 0) goto label_0x17e9c4;                           // 0x0017e9ac: beqz $v0, 0x17e9c4
    return func_0011d390();  // Tail call                        // 0x0017e9bc: j 0x11d378
    sp = sp + 0x30;                                             // 0x0017e9c0: addiu $sp, $sp, 0x30
label_0x17e9c4:
    return;                                                     // 0x0017e9cc: jr $ra
    sp = sp + 0x30;                                             // 0x0017e9d0: addiu $sp, $sp, 0x30
}