void func_00190420() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x00190420: addiu $sp, $sp, -0x60
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x00190428: addu.qb $zero, $sp, $s0
    *(float*)((sp) + 8) = FPU_F22;  // Store float              // 0x0019042c: swc1 $f22, 8($sp)
    *(float*)((sp) + 4) = FPU_F21;  // Store float              // 0x00190434: swc1 $f21, 4($sp)
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x00190438: swc1 $f20, 0($sp)
    /* FPU: mov.s $f22, $f12 */                                 // 0x0019043c: mov.s $f22, $f12
    /* FPU: mov.s $f21, $f13 */                                 // 0x00190440: mov.s $f21, $f13
    func_0018fc10();  // 0x18fbd0                                // 0x00190444: jal 0x18fbd0
    /* FPU: mov.s $f20, $f14 */                                 // 0x00190448: mov.s $f20, $f14
    /* FPU: mov.s $f12, $f21 */                                 // 0x0019044c: mov.s $f12, $f21
    func_0018f4c0();  // 0x18f3a0                                // 0x00190450: jal 0x18f3a0
    a0 = sp + 0x50;                                             // 0x00190454: addiu $a0, $sp, 0x50
    FPU_F1 = *(float*)((sp) + 0x50);  // Load float             // 0x00190458: lwc1 $f1, 0x50($sp)
    FPU_F0 = *(float*)((sp) + 0x54);  // Load float             // 0x0019045c: lwc1 $f0, 0x54($sp)
    /* move from FPU: $a2, $f1 */                               // 0x00190460: mfc1 $a2, $f1
    /* move from FPU: $a3, $f0 */                               // 0x00190464: mfc1 $a3, $f0
    VPU_VF4 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x00190468: ldc2 $4, 0($s0)
    VPU_VF5 = *(vec128_t*)((s0) + 0x10);  // Load 128-bit vector // 0x0019046c: ldc2 $5, 0x10($s0)
    VPU_VF6 = *(vec128_t*)((s0) + 0x20);  // Load 128-bit vector // 0x00190498: ldc2 $6, 0x20($s0)
    *(vec128_t*)((s0) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x001904c0: sdc2 $4, 0($s0)
    *(vec128_t*)((s0) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x001904c4: sdc2 $5, 0x10($s0)
    *(vec128_t*)((s0) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x001904c8: sdc2 $6, 0x20($s0)
    /* FPU: mov.s $f12, $f22 */                                 // 0x001904cc: mov.s $f12, $f22
    func_0018f4c0();  // 0x18f3a0                                // 0x001904d0: jal 0x18f3a0
    a0 = sp + 0x40;                                             // 0x001904d4: addiu $a0, $sp, 0x40
    FPU_F1 = *(float*)((sp) + 0x40);  // Load float             // 0x001904d8: lwc1 $f1, 0x40($sp)
    FPU_F0 = *(float*)((sp) + 0x44);  // Load float             // 0x001904dc: lwc1 $f0, 0x44($sp)
    /* move from FPU: $a2, $f1 */                               // 0x001904e0: mfc1 $a2, $f1
    /* move from FPU: $a3, $f0 */                               // 0x001904e4: mfc1 $a3, $f0
    VPU_VF4 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x001904e8: ldc2 $4, 0($s0)
    VPU_VF5 = *(vec128_t*)((s0) + 0x10);  // Load 128-bit vector // 0x001904ec: ldc2 $5, 0x10($s0)
    VPU_VF6 = *(vec128_t*)((s0) + 0x20);  // Load 128-bit vector // 0x00190518: ldc2 $6, 0x20($s0)
    *(vec128_t*)((s0) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x00190540: sdc2 $4, 0($s0)
    *(vec128_t*)((s0) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x00190544: sdc2 $5, 0x10($s0)
    *(vec128_t*)((s0) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x00190548: sdc2 $6, 0x20($s0)
    /* FPU: mov.s $f12, $f20 */                                 // 0x0019054c: mov.s $f12, $f20
    func_0018f4c0();  // 0x18f3a0                                // 0x00190550: jal 0x18f3a0
    a0 = sp + 0x30;                                             // 0x00190554: addiu $a0, $sp, 0x30
    FPU_F1 = *(float*)((sp) + 0x30);  // Load float             // 0x00190558: lwc1 $f1, 0x30($sp)
    FPU_F0 = *(float*)((sp) + 0x34);  // Load float             // 0x0019055c: lwc1 $f0, 0x34($sp)
    /* move from FPU: $a2, $f1 */                               // 0x00190560: mfc1 $a2, $f1
    /* move from FPU: $a3, $f0 */                               // 0x00190564: mfc1 $a3, $f0
    VPU_VF4 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x00190568: ldc2 $4, 0($s0)
    VPU_VF5 = *(vec128_t*)((s0) + 0x10);  // Load 128-bit vector // 0x0019056c: ldc2 $5, 0x10($s0)
    VPU_VF6 = *(vec128_t*)((s0) + 0x20);  // Load 128-bit vector // 0x00190594: ldc2 $6, 0x20($s0)
    *(vec128_t*)((s0) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x001905bc: sdc2 $4, 0($s0)
    *(vec128_t*)((s0) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x001905c0: sdc2 $5, 0x10($s0)
    *(vec128_t*)((s0) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x001905c4: sdc2 $6, 0x20($s0)
    FPU_F22 = *(float*)((sp) + 8);  // Load float               // 0x001905cc: lwc1 $f22, 8($sp)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x001905d0: aver_u.h $w0, $w0, $w16
    FPU_F21 = *(float*)((sp) + 4);  // Load float               // 0x001905d4: lwc1 $f21, 4($sp)
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x001905d8: lwc1 $f20, 0($sp)
    return;                                                     // 0x001905dc: jr $ra
    sp = sp + 0x60;                                             // 0x001905e0: addiu $sp, $sp, 0x60
}