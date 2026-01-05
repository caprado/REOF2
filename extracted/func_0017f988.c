void func_0017f988() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x0017f988: addiu $sp, $sp, -0x60
    func_0011d320();  // 11d320                                // 0x0017f9b4: jal 0x11d320
    VPU_VF4 = *(vec128_t*)((s3) + 0);  // Load 128-bit vector   // 0x0017f9bc: ldc2 $4, 0($s3)
    VPU_VF5 = *(vec128_t*)((s3) + 0x10);  // Load 128-bit vector // 0x0017f9c0: ldc2 $5, 0x10($s3)
    VPU_VF6 = *(vec128_t*)((s3) + 0x20);  // Load 128-bit vector // 0x0017f9c4: ldc2 $6, 0x20($s3)
    VPU_VF7 = *(vec128_t*)((s3) + 0x30);  // Load 128-bit vector // 0x0017f9c8: ldc2 $7, 0x30($s3)
label_0x17f9cc:
    VPU_VF8 = *(vec128_t*)((s2) + 0);  // Load 128-bit vector   // 0x0017f9cc: ldc2 $8, 0($s2)
    if (s0 == 0) goto label_0x17f9f8;                           // 0x0017f9ec: beqz $s0, 0x17f9f8
label_0x17f9f8:
    *(vec128_t*)((s4) + 0) = VPU_VF10;  // Store 128-bit vector // 0x0017f9f8: sdc2 $10, 0($s4)
    s1 = s1 + -1;                                               // 0x0017f9fc: addi $s1, $s1, -1
    s2 = s2 + 0x10;                                             // 0x0017fa00: addi $s2, $s2, 0x10
    if (0 != s1) goto label_0x17f9cc;                           // 0x0017fa04: bne $zero, $s1, 0x17f9cc
    s4 = s4 + 0x10;                                             // 0x0017fa08: addi $s4, $s4, 0x10
    if (v0 == 0) goto label_0x17fa30;                           // 0x0017fa0c: beqz $v0, 0x17fa30
    return func_0011d390();  // Tail call                        // 0x0017fa28: j 0x11d378
    sp = sp + 0x60;                                             // 0x0017fa2c: addiu $sp, $sp, 0x60
label_0x17fa30:
    return;                                                     // 0x0017fa44: jr $ra
    sp = sp + 0x60;                                             // 0x0017fa48: addiu $sp, $sp, 0x60
}