void func_00191414() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00191414: addiu $sp, $sp, -0x20
    FPU_F1 = *(float*)((a1) + 4);  // Load float                // 0x00191418: lwc1 $f1, 4($a1)
    a3 = sp + 0x10;                                             // 0x0019141c: addiu $a3, $sp, 0x10
    FPU_F0 = *(float*)((a1) + 8);  // Load float                // 0x00191420: lwc1 $f0, 8($a1)
    v1 = sp;                                                    // 0x00191424: addiu $v1, $sp, 0
    *(float*)(a3) = FPU_F2;  // Store float                     // 0x00191428: swc1 $f2, 0($a3)
    *(float*)((a3) + 4) = FPU_F1;  // Store float               // 0x0019142c: swc1 $f1, 4($a3)
    *(float*)((a3) + 8) = FPU_F0;  // Store float               // 0x00191430: swc1 $f0, 8($a3)
    FPU_F2 = *(float*)(a2);  // Load float                      // 0x00191434: lwc1 $f2, 0($a2)
    FPU_F1 = *(float*)((a2) + 4);  // Load float                // 0x00191438: lwc1 $f1, 4($a2)
    FPU_F0 = *(float*)((a2) + 8);  // Load float                // 0x0019143c: lwc1 $f0, 8($a2)
    *(float*)(v1) = FPU_F2;  // Store float                     // 0x00191440: swc1 $f2, 0($v1)
    *(float*)((v1) + 4) = FPU_F1;  // Store float               // 0x00191444: swc1 $f1, 4($v1)
    *(float*)((v1) + 8) = FPU_F0;  // Store float               // 0x00191448: swc1 $f0, 8($v1)
    VPU_VF4 = *(vec128_t*)((a3) + 0);  // Load 128-bit vector   // 0x0019144c: ldc2 $4, 0($a3)
    VPU_VF5 = *(vec128_t*)((v1) + 0);  // Load 128-bit vector   // 0x00191450: ldc2 $5, 0($v1)
    *(vec128_t*)((a0) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x001914ac: sdc2 $4, 0($a0)
    *(vec128_t*)((a0) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x001914b0: sdc2 $5, 0x10($a0)
    *(vec128_t*)((a0) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x001914b4: sdc2 $6, 0x20($a0)
    /* move to FPU: $zero, $f3 */                               // 0x001914b8: mtc1 $zero, $f3
    v1 = 0x3f80 << 16;                                          // 0x001914bc: lui $v1, 0x3f80
    /* move to FPU: $zero, $f2 */                               // 0x001914c0: mtc1 $zero, $f2
    /* move to FPU: $zero, $f1 */                               // 0x001914c4: mtc1 $zero, $f1
    *(float*)((a0) + 0xc) = FPU_F3;  // Store float             // 0x001914c8: swc1 $f3, 0xc($a0)
    *(float*)((a0) + 0x1c) = FPU_F2;  // Store float            // 0x001914cc: swc1 $f2, 0x1c($a0)
    /* move to FPU: $v1, $f0 */                                 // 0x001914d0: mtc1 $v1, $f0
    /* nop */                                                   // 0x001914d4: nop 
    *(float*)((a0) + 0x2c) = FPU_F1;  // Store float            // 0x001914d8: swc1 $f1, 0x2c($a0)
    *(float*)((a0) + 0x3c) = FPU_F0;  // Store float            // 0x001914dc: swc1 $f0, 0x3c($a0)
    return;                                                     // 0x001914e0: jr $ra
    sp = sp + 0x20;                                             // 0x001914e4: addiu $sp, $sp, 0x20
}