void func_0018ff50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0018ff50: addiu $sp, $sp, -0x20
    func_0018f3a0();  // 18f3a0                                // 0x0018ff5c: jal 0x18f3a0
    a0 = sp + 0x10;                                             // 0x0018ff60: addiu $a0, $sp, 0x10
    FPU_F1 = *(float*)((sp) + 0x10);  // Load float             // 0x0018ff64: lwc1 $f1, 0x10($sp)
    FPU_F0 = *(float*)((sp) + 0x14);  // Load float             // 0x0018ff68: lwc1 $f0, 0x14($sp)
    /* move from FPU: $a2, $f1 */                               // 0x0018ff6c: mfc1 $a2, $f1
    /* move from FPU: $a3, $f0 */                               // 0x0018ff70: mfc1 $a3, $f0
    VPU_VF4 = *(vec128_t*)((t1) + 0);  // Load 128-bit vector   // 0x0018ff74: ldc2 $4, 0($t1)
    VPU_VF5 = *(vec128_t*)((t1) + 0x10);  // Load 128-bit vector // 0x0018ff78: ldc2 $5, 0x10($t1)
    VPU_VF6 = *(vec128_t*)((t1) + 0x20);  // Load 128-bit vector // 0x0018ffa4: ldc2 $6, 0x20($t1)
    *(vec128_t*)((t1) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x0018ffcc: sdc2 $4, 0($t1)
    *(vec128_t*)((t1) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x0018ffd0: sdc2 $5, 0x10($t1)
    *(vec128_t*)((t1) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x0018ffd4: sdc2 $6, 0x20($t1)
    return;                                                     // 0x0018ffdc: jr $ra
    sp = sp + 0x20;                                             // 0x0018ffe0: addiu $sp, $sp, 0x20
}