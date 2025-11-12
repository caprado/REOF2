void func_00190250() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x00190250: addiu $sp, $sp, -0x60
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x00190258: addu.qb $zero, $sp, $s0
    *(float*)((sp) + 8) = FPU_F22;  // Store float              // 0x0019025c: swc1 $f22, 8($sp)
    *(float*)((sp) + 4) = FPU_F21;  // Store float              // 0x00190264: swc1 $f21, 4($sp)
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x00190268: swc1 $f20, 0($sp)
    /* FPU: mov.s $f22, $f12 */                                 // 0x0019026c: mov.s $f22, $f12
    /* FPU: mov.s $f21, $f13 */                                 // 0x00190270: mov.s $f21, $f13
    func_0018fc10();  // 0x18fbd0                                // 0x00190274: jal 0x18fbd0
    /* FPU: mov.s $f20, $f14 */                                 // 0x00190278: mov.s $f20, $f14
    /* FPU: mov.s $f12, $f22 */                                 // 0x0019027c: mov.s $f12, $f22
    func_0018f4c0();  // 0x18f3a0                                // 0x00190280: jal 0x18f3a0
    a0 = sp + 0x50;                                             // 0x00190284: addiu $a0, $sp, 0x50
    FPU_F1 = *(float*)((sp) + 0x50);  // Load float             // 0x00190288: lwc1 $f1, 0x50($sp)
    FPU_F0 = *(float*)((sp) + 0x54);  // Load float             // 0x0019028c: lwc1 $f0, 0x54($sp)
    /* move from FPU: $a2, $f1 */                               // 0x00190290: mfc1 $a2, $f1
    /* move from FPU: $a3, $f0 */                               // 0x00190294: mfc1 $a3, $f0
    VPU_VF4 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x00190298: ldc2 $4, 0($s0)
    VPU_VF5 = *(vec128_t*)((s0) + 0x10);  // Load 128-bit vector // 0x0019029c: ldc2 $5, 0x10($s0)
    VPU_VF6 = *(vec128_t*)((s0) + 0x20);  // Load 128-bit vector // 0x001902c8: ldc2 $6, 0x20($s0)
    *(vec128_t*)((s0) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x001902f0: sdc2 $4, 0($s0)
    *(vec128_t*)((s0) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x001902f4: sdc2 $5, 0x10($s0)
    *(vec128_t*)((s0) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x001902f8: sdc2 $6, 0x20($s0)
    /* FPU: mov.s $f12, $f20 */                                 // 0x001902fc: mov.s $f12, $f20
    func_0018f4c0();  // 0x18f3a0                                // 0x00190300: jal 0x18f3a0
    a0 = sp + 0x40;                                             // 0x00190304: addiu $a0, $sp, 0x40
    FPU_F1 = *(float*)((sp) + 0x40);  // Load float             // 0x00190308: lwc1 $f1, 0x40($sp)
    FPU_F0 = *(float*)((sp) + 0x44);  // Load float             // 0x0019030c: lwc1 $f0, 0x44($sp)
    /* move from FPU: $a2, $f1 */                               // 0x00190310: mfc1 $a2, $f1
    /* move from FPU: $a3, $f0 */                               // 0x00190314: mfc1 $a3, $f0
    VPU_VF4 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x00190318: ldc2 $4, 0($s0)
    VPU_VF5 = *(vec128_t*)((s0) + 0x10);  // Load 128-bit vector // 0x0019031c: ldc2 $5, 0x10($s0)
    VPU_VF6 = *(vec128_t*)((s0) + 0x20);  // Load 128-bit vector // 0x00190344: ldc2 $6, 0x20($s0)
    *(vec128_t*)((s0) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x0019036c: sdc2 $4, 0($s0)
    *(vec128_t*)((s0) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x00190370: sdc2 $5, 0x10($s0)
    *(vec128_t*)((s0) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x00190374: sdc2 $6, 0x20($s0)
    /* FPU: mov.s $f12, $f21 */                                 // 0x00190378: mov.s $f12, $f21
    func_0018f4c0();  // 0x18f3a0                                // 0x0019037c: jal 0x18f3a0
    a0 = sp + 0x30;                                             // 0x00190380: addiu $a0, $sp, 0x30
    FPU_F1 = *(float*)((sp) + 0x30);  // Load float             // 0x00190384: lwc1 $f1, 0x30($sp)
    FPU_F0 = *(float*)((sp) + 0x34);  // Load float             // 0x00190388: lwc1 $f0, 0x34($sp)
    /* move from FPU: $a2, $f1 */                               // 0x0019038c: mfc1 $a2, $f1
    /* move from FPU: $a3, $f0 */                               // 0x00190390: mfc1 $a3, $f0
    VPU_VF4 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x00190394: ldc2 $4, 0($s0)
    VPU_VF5 = *(vec128_t*)((s0) + 0x10);  // Load 128-bit vector // 0x00190398: ldc2 $5, 0x10($s0)
    VPU_VF6 = *(vec128_t*)((s0) + 0x20);  // Load 128-bit vector // 0x001903c4: ldc2 $6, 0x20($s0)
    *(vec128_t*)((s0) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x001903ec: sdc2 $4, 0($s0)
    *(vec128_t*)((s0) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x001903f0: sdc2 $5, 0x10($s0)
    *(vec128_t*)((s0) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x001903f4: sdc2 $6, 0x20($s0)
    FPU_F22 = *(float*)((sp) + 8);  // Load float               // 0x001903fc: lwc1 $f22, 8($sp)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x00190400: aver_u.h $w0, $w0, $w16
    FPU_F21 = *(float*)((sp) + 4);  // Load float               // 0x00190404: lwc1 $f21, 4($sp)
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x00190408: lwc1 $f20, 0($sp)
    return;                                                     // 0x0019040c: jr $ra
    sp = sp + 0x60;                                             // 0x00190410: addiu $sp, $sp, 0x60
}