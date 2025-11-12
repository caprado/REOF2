void func_001996b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    VPU_VF7 = *(vec128_t*)((a2) + 0);  // Load 128-bit vector   // 0x001996b0: ldc2 $7, 0($a2)
    VPU_VF8 = *(vec128_t*)((a2) + 0x10);  // Load 128-bit vector // 0x001996b4: ldc2 $8, 0x10($a2)
    VPU_VF9 = *(vec128_t*)((a2) + 0x20);  // Load 128-bit vector // 0x001996b8: ldc2 $9, 0x20($a2)
    VPU_VF10 = *(vec128_t*)((a2) + 0x30);  // Load 128-bit vector // 0x001996bc: ldc2 $10, 0x30($a2)
    VPU_VF11 = *(vec128_t*)((a3) + 0);  // Load 128-bit vector  // 0x001996c0: ldc2 $11, 0($a3)
    VPU_VF11 = *(vec128_t*)((a3) + 0x10);  // Load 128-bit vector // 0x001996e8: ldc2 $11, 0x10($a3)
    VPU_VF12 = *(vec128_t*)((a3) + 0x20);  // Load 128-bit vector // 0x001996ec: ldc2 $12, 0x20($a3)
    *(vec128_t*)((a0) + 0) = VPU_VF7;  // Store 128-bit vector  // 0x00199734: sdc2 $7, 0($a0)
    *(vec128_t*)((a0) + 0x10) = VPU_VF8;  // Store 128-bit vector // 0x00199738: sdc2 $8, 0x10($a0)
    *(vec128_t*)((a0) + 0x20) = VPU_VF9;  // Store 128-bit vector // 0x0019973c: sdc2 $9, 0x20($a0)
    *(uint32_t*)(a1) = 0;                                       // 0x00199740: sw $zero, 0($a1)
    at = 0x28 << 16;                                            // 0x00199744: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x480c);  // Load float           // 0x00199748: lwc1 $f0, 0x480c($at)
    *(float*)((a1) + 4) = FPU_F0;  // Store float               // 0x0019974c: swc1 $f0, 4($a1)
    at = 0x28 << 16;                                            // 0x00199750: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4810);  // Load float           // 0x00199754: lwc1 $f0, 0x4810($at)
    return;                                                     // 0x00199758: jr $ra
    *(float*)((a1) + 8) = FPU_F0;  // Store float               // 0x0019975c: swc1 $f0, 8($a1)
}