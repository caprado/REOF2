void func_00199580() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x90;                                            // 0x00199580: addiu $sp, $sp, -0x90
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x00199588: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x00199594: addu.qb $zero, $sp, $s1
    a0 = sp + 0x50;                                             // 0x001995a8: addiu $a0, $sp, 0x50
    func_001911e0();  // 1911e0                                // 0x001995ac: jal 0x1911e0
    v1 = sp + 0x50;                                             // 0x001995b4: addiu $v1, $sp, 0x50
    VPU_VF10 = *(vec128_t*)((s1) + 0);  // Load 128-bit vector  // 0x001995b8: ldc2 $10, 0($s1)
    VPU_VF11 = *(vec128_t*)((s1) + 0x10);  // Load 128-bit vector // 0x001995bc: ldc2 $11, 0x10($s1)
    VPU_VF12 = *(vec128_t*)((s1) + 0x20);  // Load 128-bit vector // 0x001995c0: ldc2 $12, 0x20($s1)
    VPU_VF10 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector  // 0x001995e8: ldc2 $10, 0($s0)
    VPU_VF7 = *(vec128_t*)((v1) + 0);  // Load 128-bit vector   // 0x00199610: ldc2 $7, 0($v1)
    VPU_VF8 = *(vec128_t*)((v1) + 0x10);  // Load 128-bit vector // 0x00199614: ldc2 $8, 0x10($v1)
    VPU_VF9 = *(vec128_t*)((v1) + 0x20);  // Load 128-bit vector // 0x00199618: ldc2 $9, 0x20($v1)
    VPU_VF10 = *(vec128_t*)((v1) + 0x30);  // Load 128-bit vector // 0x0019961c: ldc2 $10, 0x30($v1)
    VPU_VF11 = *(vec128_t*)((s0) + 0x10);  // Load 128-bit vector // 0x00199620: ldc2 $11, 0x10($s0)
    VPU_VF12 = *(vec128_t*)((s0) + 0x20);  // Load 128-bit vector // 0x00199624: ldc2 $12, 0x20($s0)
    *(vec128_t*)((s3) + 0) = VPU_VF7;  // Store 128-bit vector  // 0x0019966c: sdc2 $7, 0($s3)
    *(vec128_t*)((s3) + 0x10) = VPU_VF8;  // Store 128-bit vector // 0x00199670: sdc2 $8, 0x10($s3)
    *(vec128_t*)((s3) + 0x20) = VPU_VF9;  // Store 128-bit vector // 0x00199674: sdc2 $9, 0x20($s3)
    *(uint32_t*)(s2) = 0;                                       // 0x00199678: sw $zero, 0($s2)
    at = 0x28 << 16;                                            // 0x0019967c: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x480c);  // Load float           // 0x00199680: lwc1 $f0, 0x480c($at)
    *(float*)((s2) + 4) = FPU_F0;  // Store float               // 0x00199684: swc1 $f0, 4($s2)
    at = 0x28 << 16;                                            // 0x00199688: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4810);  // Load float           // 0x0019968c: lwc1 $f0, 0x4810($at)
    *(float*)((s2) + 8) = FPU_F0;  // Store float               // 0x00199690: swc1 $f0, 8($s2)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019969c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001996a0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001996a4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001996a8: jr $ra
    sp = sp + 0x90;                                             // 0x001996ac: addiu $sp, $sp, 0x90
}