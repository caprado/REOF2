void func_00190080() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x00190080: addiu $sp, $sp, -0x60
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x00190088: addu.qb $zero, $sp, $s0
    *(float*)((sp) + 8) = FPU_F22;  // Store float              // 0x0019008c: swc1 $f22, 8($sp)
    *(float*)((sp) + 4) = FPU_F21;  // Store float              // 0x00190094: swc1 $f21, 4($sp)
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x00190098: swc1 $f20, 0($sp)
    /* FPU: mov.s $f22, $f12 */                                 // 0x0019009c: mov.s $f22, $f12
    /* FPU: mov.s $f21, $f13 */                                 // 0x001900a0: mov.s $f21, $f13
    func_0018fc10();  // 0x18fbd0                                // 0x001900a4: jal 0x18fbd0
    /* FPU: mov.s $f20, $f14 */                                 // 0x001900a8: mov.s $f20, $f14
    /* FPU: mov.s $f12, $f22 */                                 // 0x001900ac: mov.s $f12, $f22
    func_0018f4c0();  // 0x18f3a0                                // 0x001900b0: jal 0x18f3a0
    a0 = sp + 0x50;                                             // 0x001900b4: addiu $a0, $sp, 0x50
    FPU_F1 = *(float*)((sp) + 0x50);  // Load float             // 0x001900b8: lwc1 $f1, 0x50($sp)
    FPU_F0 = *(float*)((sp) + 0x54);  // Load float             // 0x001900bc: lwc1 $f0, 0x54($sp)
    /* move from FPU: $a2, $f1 */                               // 0x001900c0: mfc1 $a2, $f1
    /* move from FPU: $a3, $f0 */                               // 0x001900c4: mfc1 $a3, $f0
    VPU_VF4 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x001900c8: ldc2 $4, 0($s0)
    VPU_VF5 = *(vec128_t*)((s0) + 0x10);  // Load 128-bit vector // 0x001900cc: ldc2 $5, 0x10($s0)
    VPU_VF6 = *(vec128_t*)((s0) + 0x20);  // Load 128-bit vector // 0x001900f8: ldc2 $6, 0x20($s0)
    *(vec128_t*)((s0) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x00190120: sdc2 $4, 0($s0)
    *(vec128_t*)((s0) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x00190124: sdc2 $5, 0x10($s0)
    *(vec128_t*)((s0) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x00190128: sdc2 $6, 0x20($s0)
    /* FPU: mov.s $f12, $f21 */                                 // 0x0019012c: mov.s $f12, $f21
    func_0018f4c0();  // 0x18f3a0                                // 0x00190130: jal 0x18f3a0
    a0 = sp + 0x40;                                             // 0x00190134: addiu $a0, $sp, 0x40
    FPU_F1 = *(float*)((sp) + 0x40);  // Load float             // 0x00190138: lwc1 $f1, 0x40($sp)
    FPU_F0 = *(float*)((sp) + 0x44);  // Load float             // 0x0019013c: lwc1 $f0, 0x44($sp)
    /* move from FPU: $a2, $f1 */                               // 0x00190140: mfc1 $a2, $f1
    /* move from FPU: $a3, $f0 */                               // 0x00190144: mfc1 $a3, $f0
    VPU_VF4 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x00190148: ldc2 $4, 0($s0)
    VPU_VF5 = *(vec128_t*)((s0) + 0x10);  // Load 128-bit vector // 0x0019014c: ldc2 $5, 0x10($s0)
    VPU_VF6 = *(vec128_t*)((s0) + 0x20);  // Load 128-bit vector // 0x00190178: ldc2 $6, 0x20($s0)
    *(vec128_t*)((s0) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x001901a0: sdc2 $4, 0($s0)
    *(vec128_t*)((s0) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x001901a4: sdc2 $5, 0x10($s0)
    *(vec128_t*)((s0) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x001901a8: sdc2 $6, 0x20($s0)
    /* FPU: mov.s $f12, $f20 */                                 // 0x001901ac: mov.s $f12, $f20
    func_0018f4c0();  // 0x18f3a0                                // 0x001901b0: jal 0x18f3a0
    a0 = sp + 0x30;                                             // 0x001901b4: addiu $a0, $sp, 0x30
    FPU_F1 = *(float*)((sp) + 0x30);  // Load float             // 0x001901b8: lwc1 $f1, 0x30($sp)
    FPU_F0 = *(float*)((sp) + 0x34);  // Load float             // 0x001901bc: lwc1 $f0, 0x34($sp)
    /* move from FPU: $a2, $f1 */                               // 0x001901c0: mfc1 $a2, $f1
    /* move from FPU: $a3, $f0 */                               // 0x001901c4: mfc1 $a3, $f0
    VPU_VF4 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x001901c8: ldc2 $4, 0($s0)
    VPU_VF5 = *(vec128_t*)((s0) + 0x10);  // Load 128-bit vector // 0x001901cc: ldc2 $5, 0x10($s0)
    VPU_VF6 = *(vec128_t*)((s0) + 0x20);  // Load 128-bit vector // 0x001901f4: ldc2 $6, 0x20($s0)
    *(vec128_t*)((s0) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x0019021c: sdc2 $4, 0($s0)
    *(vec128_t*)((s0) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x00190220: sdc2 $5, 0x10($s0)
    *(vec128_t*)((s0) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x00190224: sdc2 $6, 0x20($s0)
    FPU_F22 = *(float*)((sp) + 8);  // Load float               // 0x0019022c: lwc1 $f22, 8($sp)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x00190230: aver_u.h $w0, $w0, $w16
    FPU_F21 = *(float*)((sp) + 4);  // Load float               // 0x00190234: lwc1 $f21, 4($sp)
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x00190238: lwc1 $f20, 0($sp)
    return;                                                     // 0x0019023c: jr $ra
    sp = sp + 0x60;                                             // 0x00190240: addiu $sp, $sp, 0x60
}