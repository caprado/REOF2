void func_00199760() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x28 << 16;                                            // 0x00199760: lui $v1, 0x28
    sp = sp + -0x60;                                            // 0x00199764: addiu $sp, $sp, -0x60
    v1 = v1 + 0x4824;                                           // 0x00199768: addiu $v1, $v1, 0x4824
    t5 = 0x28 << 16;                                            // 0x0019976c: lui $t5, 0x28
    FPU_F3 = *(float*)(v1);  // Load float                      // 0x00199770: lwc1 $f3, 0($v1)
    t3 = 0x28 << 16;                                            // 0x00199774: lui $t3, 0x28
    FPU_F2 = *(float*)((v1) + 4);  // Load float                // 0x00199778: lwc1 $f2, 4($v1)
    t1 = 0x28 << 16;                                            // 0x0019977c: lui $t1, 0x28
    FPU_F1 = *(float*)((v1) + 8);  // Load float                // 0x00199780: lwc1 $f1, 8($v1)
    a3 = 0x28 << 16;                                            // 0x00199784: lui $a3, 0x28
    FPU_F0 = *(float*)((v1) + 0xc);  // Load float              // 0x00199788: lwc1 $f0, 0xc($v1)
    t6 = sp;                                                    // 0x0019978c: addiu $t6, $sp, 0
    a1 = 0x28 << 16;                                            // 0x00199790: lui $a1, 0x28
    t5 = t5 + 0x4844;                                           // 0x00199794: addiu $t5, $t5, 0x4844
    t4 = sp + 0x10;                                             // 0x00199798: addiu $t4, $sp, 0x10
    t3 = t3 + 0x488c;                                           // 0x0019979c: addiu $t3, $t3, 0x488c
    t2 = sp + 0x20;                                             // 0x001997a0: addiu $t2, $sp, 0x20
    t1 = t1 + 0x48ac;                                           // 0x001997a4: addiu $t1, $t1, 0x48ac
    t0 = sp + 0x30;                                             // 0x001997a8: addiu $t0, $sp, 0x30
    a3 = a3 + 0x48f4;                                           // 0x001997ac: addiu $a3, $a3, 0x48f4
    a2 = sp + 0x40;                                             // 0x001997b0: addiu $a2, $sp, 0x40
    a1 = a1 + 0x4914;                                           // 0x001997b4: addiu $a1, $a1, 0x4914
    *(float*)(t6) = FPU_F3;  // Store float                     // 0x001997b8: swc1 $f3, 0($t6)
    v1 = sp + 0x50;                                             // 0x001997bc: addiu $v1, $sp, 0x50
    *(float*)((t6) + 4) = FPU_F2;  // Store float               // 0x001997c0: swc1 $f2, 4($t6)
    *(float*)((t6) + 8) = FPU_F1;  // Store float               // 0x001997c4: swc1 $f1, 8($t6)
    *(float*)((t6) + 0xc) = FPU_F0;  // Store float             // 0x001997c8: swc1 $f0, 0xc($t6)
    FPU_F3 = *(float*)(t5);  // Load float                      // 0x001997cc: lwc1 $f3, 0($t5)
    FPU_F2 = *(float*)((t5) + 4);  // Load float                // 0x001997d0: lwc1 $f2, 4($t5)
    FPU_F1 = *(float*)((t5) + 8);  // Load float                // 0x001997d4: lwc1 $f1, 8($t5)
    FPU_F0 = *(float*)((t5) + 0xc);  // Load float              // 0x001997d8: lwc1 $f0, 0xc($t5)
    *(float*)(t4) = FPU_F3;  // Store float                     // 0x001997dc: swc1 $f3, 0($t4)
    *(float*)((t4) + 4) = FPU_F2;  // Store float               // 0x001997e0: swc1 $f2, 4($t4)
    *(float*)((t4) + 8) = FPU_F1;  // Store float               // 0x001997e4: swc1 $f1, 8($t4)
    *(float*)((t4) + 0xc) = FPU_F0;  // Store float             // 0x001997e8: swc1 $f0, 0xc($t4)
    FPU_F3 = *(float*)(t3);  // Load float                      // 0x001997ec: lwc1 $f3, 0($t3)
    FPU_F2 = *(float*)((t3) + 4);  // Load float                // 0x001997f0: lwc1 $f2, 4($t3)
    FPU_F1 = *(float*)((t3) + 8);  // Load float                // 0x001997f4: lwc1 $f1, 8($t3)
    FPU_F0 = *(float*)((t3) + 0xc);  // Load float              // 0x001997f8: lwc1 $f0, 0xc($t3)
    *(float*)(t2) = FPU_F3;  // Store float                     // 0x001997fc: swc1 $f3, 0($t2)
    *(float*)((t2) + 4) = FPU_F2;  // Store float               // 0x00199800: swc1 $f2, 4($t2)
    *(float*)((t2) + 8) = FPU_F1;  // Store float               // 0x00199804: swc1 $f1, 8($t2)
    *(float*)((t2) + 0xc) = FPU_F0;  // Store float             // 0x00199808: swc1 $f0, 0xc($t2)
    FPU_F3 = *(float*)(t1);  // Load float                      // 0x0019980c: lwc1 $f3, 0($t1)
    FPU_F2 = *(float*)((t1) + 4);  // Load float                // 0x00199810: lwc1 $f2, 4($t1)
    FPU_F1 = *(float*)((t1) + 8);  // Load float                // 0x00199814: lwc1 $f1, 8($t1)
    FPU_F0 = *(float*)((t1) + 0xc);  // Load float              // 0x00199818: lwc1 $f0, 0xc($t1)
    *(float*)(t0) = FPU_F3;  // Store float                     // 0x0019981c: swc1 $f3, 0($t0)
    *(float*)((t0) + 4) = FPU_F2;  // Store float               // 0x00199820: swc1 $f2, 4($t0)
    *(float*)((t0) + 8) = FPU_F1;  // Store float               // 0x00199824: swc1 $f1, 8($t0)
    *(float*)((t0) + 0xc) = FPU_F0;  // Store float             // 0x00199828: swc1 $f0, 0xc($t0)
    FPU_F3 = *(float*)(a3);  // Load float                      // 0x0019982c: lwc1 $f3, 0($a3)
    FPU_F2 = *(float*)((a3) + 4);  // Load float                // 0x00199830: lwc1 $f2, 4($a3)
    FPU_F1 = *(float*)((a3) + 8);  // Load float                // 0x00199834: lwc1 $f1, 8($a3)
    FPU_F0 = *(float*)((a3) + 0xc);  // Load float              // 0x00199838: lwc1 $f0, 0xc($a3)
    *(float*)(a2) = FPU_F3;  // Store float                     // 0x0019983c: swc1 $f3, 0($a2)
    *(float*)((a2) + 4) = FPU_F2;  // Store float               // 0x00199840: swc1 $f2, 4($a2)
    *(float*)((a2) + 8) = FPU_F1;  // Store float               // 0x00199844: swc1 $f1, 8($a2)
    *(float*)((a2) + 0xc) = FPU_F0;  // Store float             // 0x00199848: swc1 $f0, 0xc($a2)
    FPU_F3 = *(float*)(a1);  // Load float                      // 0x0019984c: lwc1 $f3, 0($a1)
    FPU_F2 = *(float*)((a1) + 4);  // Load float                // 0x00199850: lwc1 $f2, 4($a1)
    FPU_F1 = *(float*)((a1) + 8);  // Load float                // 0x00199854: lwc1 $f1, 8($a1)
    FPU_F0 = *(float*)((a1) + 0xc);  // Load float              // 0x00199858: lwc1 $f0, 0xc($a1)
    *(float*)(v1) = FPU_F3;  // Store float                     // 0x0019985c: swc1 $f3, 0($v1)
    *(float*)((v1) + 4) = FPU_F2;  // Store float               // 0x00199860: swc1 $f2, 4($v1)
    *(float*)((v1) + 8) = FPU_F1;  // Store float               // 0x00199864: swc1 $f1, 8($v1)
    *(float*)((v1) + 0xc) = FPU_F0;  // Store float             // 0x00199868: swc1 $f0, 0xc($v1)
    VPU_VF4 = *(vec128_t*)((t6) + 0);  // Load 128-bit vector   // 0x0019986c: ldc2 $4, 0($t6)
    VPU_VF5 = *(vec128_t*)((t6) + 0x20);  // Load 128-bit vector // 0x00199870: ldc2 $5, 0x20($t6)
    VPU_VF6 = *(vec128_t*)((t6) + 0x40);  // Load 128-bit vector // 0x00199874: ldc2 $6, 0x40($t6)
    VPU_VF7 = *(vec128_t*)((t6) + 0x10);  // Load 128-bit vector // 0x00199878: ldc2 $7, 0x10($t6)
    VPU_VF8 = *(vec128_t*)((t6) + 0x30);  // Load 128-bit vector // 0x0019987c: ldc2 $8, 0x30($t6)
    VPU_VF9 = *(vec128_t*)((t6) + 0x50);  // Load 128-bit vector // 0x00199880: ldc2 $9, 0x50($t6)
    /* move from FPU: $t0, $f12 */                              // 0x00199890: mfc1 $t0, $f12
    *(vec128_t*)((a0) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x001998a0: sdc2 $4, 0($a0)
    *(vec128_t*)((a0) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x001998a4: sdc2 $5, 0x10($a0)
    *(vec128_t*)((a0) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x001998a8: sdc2 $6, 0x20($a0)
    *(vec128_t*)((a0) + 0x30) = VPU_VF10;  // Store 128-bit vector // 0x001998b4: sdc2 $10, 0x30($a0)
    v1 = 0x4300 << 16;                                          // 0x001998b8: lui $v1, 0x4300
    *(uint32_t*)((a0) + 0x3c) = v1;                             // 0x001998bc: sw $v1, 0x3c($a0)
    return;                                                     // 0x001998c0: jr $ra
    sp = sp + 0x60;                                             // 0x001998c4: addiu $sp, $sp, 0x60
}