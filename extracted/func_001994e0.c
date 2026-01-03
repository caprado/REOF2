void func_001994e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x001994e0: addiu $sp, $sp, -0x80
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001994ec: addu.qb $zero, $sp, $s1
    func_001911e0();  // 1911e0                                // 0x00199504: jal 0x1911e0
    a0 = sp + 0x40;                                             // 0x00199508: addiu $a0, $sp, 0x40
    v1 = sp + 0x40;                                             // 0x0019950c: addiu $v1, $sp, 0x40
    VPU_VF4 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x00199510: ldc2 $4, 0($s0)
    VPU_VF5 = *(vec128_t*)((v1) + 0);  // Load 128-bit vector   // 0x00199514: ldc2 $5, 0($v1)
    VPU_VF6 = *(vec128_t*)((v1) + 0x10);  // Load 128-bit vector // 0x00199518: ldc2 $6, 0x10($v1)
    VPU_VF7 = *(vec128_t*)((v1) + 0x20);  // Load 128-bit vector // 0x0019951c: ldc2 $7, 0x20($v1)
    VPU_VF8 = *(vec128_t*)((v1) + 0x30);  // Load 128-bit vector // 0x00199520: ldc2 $8, 0x30($v1)
    *(vec128_t*)((s2) + 0) = VPU_VF5;  // Store 128-bit vector  // 0x0019954c: sdc2 $5, 0($s2)
    *(vec128_t*)((s2) + 0x10) = VPU_VF6;  // Store 128-bit vector // 0x00199550: sdc2 $6, 0x10($s2)
    *(vec128_t*)((s2) + 0x20) = VPU_VF7;  // Store 128-bit vector // 0x00199554: sdc2 $7, 0x20($s2)
    at = 0x28 << 16;                                            // 0x00199558: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4808);  // Load float           // 0x0019955c: lwc1 $f0, 0x4808($at)
    *(float*)(s1) = FPU_F0;  // Store float                     // 0x00199560: swc1 $f0, 0($s1)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x00199568: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019956c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x00199570: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00199574: jr $ra
    sp = sp + 0x80;                                             // 0x00199578: addiu $sp, $sp, 0x80
}