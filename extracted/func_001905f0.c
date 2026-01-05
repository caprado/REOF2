void func_001905f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001905f0: addiu $sp, $sp, -0x60
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x001905f8: addu.qb $zero, $sp, $s0
    *(float*)((sp) + 8) = FPU_F22;  // Store float              // 0x001905fc: swc1 $f22, 8($sp)
    *(float*)((sp) + 4) = FPU_F21;  // Store float              // 0x00190604: swc1 $f21, 4($sp)
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x00190608: swc1 $f20, 0($sp)
    /* FPU: mov.s $f22, $f12 */                                 // 0x0019060c: mov.s $f22, $f12
    /* FPU: mov.s $f21, $f13 */                                 // 0x00190610: mov.s $f21, $f13
    func_0018fbd0();  // 18fbd0                                // 0x00190614: jal 0x18fbd0
    /* FPU: mov.s $f20, $f14 */                                 // 0x00190618: mov.s $f20, $f14
    /* FPU: mov.s $f12, $f20 */                                 // 0x0019061c: mov.s $f12, $f20
    func_0018f3a0();  // 18f3a0                                // 0x00190620: jal 0x18f3a0
    a0 = sp + 0x50;                                             // 0x00190624: addiu $a0, $sp, 0x50
    FPU_F1 = *(float*)((sp) + 0x50);  // Load float             // 0x00190628: lwc1 $f1, 0x50($sp)
    FPU_F0 = *(float*)((sp) + 0x54);  // Load float             // 0x0019062c: lwc1 $f0, 0x54($sp)
    /* move from FPU: $a2, $f1 */                               // 0x00190630: mfc1 $a2, $f1
    /* move from FPU: $a3, $f0 */                               // 0x00190634: mfc1 $a3, $f0
    VPU_VF4 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x00190638: ldc2 $4, 0($s0)
    VPU_VF5 = *(vec128_t*)((s0) + 0x10);  // Load 128-bit vector // 0x0019063c: ldc2 $5, 0x10($s0)
    VPU_VF6 = *(vec128_t*)((s0) + 0x20);  // Load 128-bit vector // 0x00190664: ldc2 $6, 0x20($s0)
    *(vec128_t*)((s0) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x0019068c: sdc2 $4, 0($s0)
    *(vec128_t*)((s0) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x00190690: sdc2 $5, 0x10($s0)
    *(vec128_t*)((s0) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x00190694: sdc2 $6, 0x20($s0)
    /* FPU: mov.s $f12, $f21 */                                 // 0x00190698: mov.s $f12, $f21
    func_0018f3a0();  // 18f3a0                                // 0x0019069c: jal 0x18f3a0
    a0 = sp + 0x40;                                             // 0x001906a0: addiu $a0, $sp, 0x40
    FPU_F1 = *(float*)((sp) + 0x40);  // Load float             // 0x001906a4: lwc1 $f1, 0x40($sp)
    FPU_F0 = *(float*)((sp) + 0x44);  // Load float             // 0x001906a8: lwc1 $f0, 0x44($sp)
    /* move from FPU: $a2, $f1 */                               // 0x001906ac: mfc1 $a2, $f1
    /* move from FPU: $a3, $f0 */                               // 0x001906b0: mfc1 $a3, $f0
    VPU_VF4 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x001906b4: ldc2 $4, 0($s0)
    VPU_VF5 = *(vec128_t*)((s0) + 0x10);  // Load 128-bit vector // 0x001906b8: ldc2 $5, 0x10($s0)
    VPU_VF6 = *(vec128_t*)((s0) + 0x20);  // Load 128-bit vector // 0x001906e4: ldc2 $6, 0x20($s0)
    *(vec128_t*)((s0) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x0019070c: sdc2 $4, 0($s0)
    *(vec128_t*)((s0) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x00190710: sdc2 $5, 0x10($s0)
    *(vec128_t*)((s0) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x00190714: sdc2 $6, 0x20($s0)
    /* FPU: mov.s $f12, $f22 */                                 // 0x00190718: mov.s $f12, $f22
    func_0018f3a0();  // 18f3a0                                // 0x0019071c: jal 0x18f3a0
    a0 = sp + 0x30;                                             // 0x00190720: addiu $a0, $sp, 0x30
    FPU_F1 = *(float*)((sp) + 0x30);  // Load float             // 0x00190724: lwc1 $f1, 0x30($sp)
    FPU_F0 = *(float*)((sp) + 0x34);  // Load float             // 0x00190728: lwc1 $f0, 0x34($sp)
    /* move from FPU: $a2, $f1 */                               // 0x0019072c: mfc1 $a2, $f1
    /* move from FPU: $a3, $f0 */                               // 0x00190730: mfc1 $a3, $f0
    VPU_VF4 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x00190734: ldc2 $4, 0($s0)
    VPU_VF5 = *(vec128_t*)((s0) + 0x10);  // Load 128-bit vector // 0x00190738: ldc2 $5, 0x10($s0)
    VPU_VF6 = *(vec128_t*)((s0) + 0x20);  // Load 128-bit vector // 0x00190764: ldc2 $6, 0x20($s0)
    *(vec128_t*)((s0) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x0019078c: sdc2 $4, 0($s0)
    *(vec128_t*)((s0) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x00190790: sdc2 $5, 0x10($s0)
    *(vec128_t*)((s0) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x00190794: sdc2 $6, 0x20($s0)
    FPU_F22 = *(float*)((sp) + 8);  // Load float               // 0x0019079c: lwc1 $f22, 8($sp)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x001907a0: aver_u.h $w0, $w0, $w16
    FPU_F21 = *(float*)((sp) + 4);  // Load float               // 0x001907a4: lwc1 $f21, 4($sp)
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x001907a8: lwc1 $f20, 0($sp)
    return;                                                     // 0x001907ac: jr $ra
    sp = sp + 0x60;                                             // 0x001907b0: addiu $sp, $sp, 0x60
}