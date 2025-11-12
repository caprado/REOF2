void func_00191860() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_c;
    
    FPU_F0 = *(float*)(a1);  // Load float                      // 0x00191860: lwc1 $f0, 0($a1)
    sp = sp + -0x10;                                            // 0x00191864: addiu $sp, $sp, -0x10
    v1 = 0x3f80 << 16;                                          // 0x00191868: lui $v1, 0x3f80
    a3 = sp;                                                    // 0x0019186c: addiu $a3, $sp, 0
    *(float*)(sp) = FPU_F0;  // Store float                     // 0x00191870: swc1 $f0, 0($sp)
    FPU_F0 = *(float*)((a1) + 4);  // Load float                // 0x00191874: lwc1 $f0, 4($a1)
    *(float*)((sp) + 4) = FPU_F0;  // Store float               // 0x00191878: swc1 $f0, 4($sp)
    FPU_F0 = *(float*)((a1) + 8);  // Load float                // 0x0019187c: lwc1 $f0, 8($a1)
    *(float*)((sp) + 8) = FPU_F0;  // Store float               // 0x00191880: swc1 $f0, 8($sp)
    local_c = v1;                                               // 0x00191884: sw $v1, 0xc($sp)
    VPU_VF4 = *(vec128_t*)((a3) + 0);  // Load 128-bit vector   // 0x00191888: ldc2 $4, 0($a3)
    VPU_VF5 = *(vec128_t*)((a2) + 0);  // Load 128-bit vector   // 0x0019188c: ldc2 $5, 0($a2)
    VPU_VF6 = *(vec128_t*)((a2) + 0x10);  // Load 128-bit vector // 0x00191890: ldc2 $6, 0x10($a2)
    VPU_VF7 = *(vec128_t*)((a2) + 0x20);  // Load 128-bit vector // 0x00191894: ldc2 $7, 0x20($a2)
    VPU_VF8 = *(vec128_t*)((a2) + 0x30);  // Load 128-bit vector // 0x00191898: ldc2 $8, 0x30($a2)
    *(vec128_t*)((a3) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x001918b8: sdc2 $4, 0($a3)
    v1 = sp;                                                    // 0x001918bc: addiu $v1, $sp, 0
    FPU_F3 = *(float*)(v1);  // Load float                      // 0x001918c0: lwc1 $f3, 0($v1)
    FPU_F2 = *(float*)((v1) + 4);  // Load float                // 0x001918c4: lwc1 $f2, 4($v1)
    FPU_F1 = *(float*)((v1) + 8);  // Load float                // 0x001918c8: lwc1 $f1, 8($v1)
    FPU_F0 = *(float*)((v1) + 0xc);  // Load float              // 0x001918cc: lwc1 $f0, 0xc($v1)
    *(float*)(a0) = FPU_F3;  // Store float                     // 0x001918d0: swc1 $f3, 0($a0)
    *(float*)((a0) + 4) = FPU_F2;  // Store float               // 0x001918d4: swc1 $f2, 4($a0)
    *(float*)((a0) + 8) = FPU_F1;  // Store float               // 0x001918d8: swc1 $f1, 8($a0)
    *(float*)((a0) + 0xc) = FPU_F0;  // Store float             // 0x001918dc: swc1 $f0, 0xc($a0)
    return;                                                     // 0x001918e0: jr $ra
    sp = sp + 0x10;                                             // 0x001918e4: addiu $sp, $sp, 0x10
}