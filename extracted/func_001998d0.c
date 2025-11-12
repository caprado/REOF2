void func_001998d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x28 << 16;                                            // 0x001998d0: lui $v1, 0x28
    sp = sp + -0x60;                                            // 0x001998d4: addiu $sp, $sp, -0x60
    v1 = v1 + 0x4824;                                           // 0x001998d8: addiu $v1, $v1, 0x4824
    t5 = 0x28 << 16;                                            // 0x001998dc: lui $t5, 0x28
    FPU_F3 = *(float*)(v1);  // Load float                      // 0x001998e0: lwc1 $f3, 0($v1)
    t3 = 0x28 << 16;                                            // 0x001998e4: lui $t3, 0x28
    FPU_F2 = *(float*)((v1) + 4);  // Load float                // 0x001998e8: lwc1 $f2, 4($v1)
    t1 = 0x28 << 16;                                            // 0x001998ec: lui $t1, 0x28
    FPU_F1 = *(float*)((v1) + 8);  // Load float                // 0x001998f0: lwc1 $f1, 8($v1)
    a3 = 0x28 << 16;                                            // 0x001998f4: lui $a3, 0x28
    FPU_F0 = *(float*)((v1) + 0xc);  // Load float              // 0x001998f8: lwc1 $f0, 0xc($v1)
    t6 = sp;                                                    // 0x001998fc: addiu $t6, $sp, 0
    a1 = 0x28 << 16;                                            // 0x00199900: lui $a1, 0x28
    t5 = t5 + 0x4844;                                           // 0x00199904: addiu $t5, $t5, 0x4844
    t4 = sp + 0x10;                                             // 0x00199908: addiu $t4, $sp, 0x10
    t3 = t3 + 0x488c;                                           // 0x0019990c: addiu $t3, $t3, 0x488c
    t2 = sp + 0x20;                                             // 0x00199910: addiu $t2, $sp, 0x20
    t1 = t1 + 0x48ac;                                           // 0x00199914: addiu $t1, $t1, 0x48ac
    t0 = sp + 0x30;                                             // 0x00199918: addiu $t0, $sp, 0x30
    a3 = a3 + 0x48f4;                                           // 0x0019991c: addiu $a3, $a3, 0x48f4
    a2 = sp + 0x40;                                             // 0x00199920: addiu $a2, $sp, 0x40
    a1 = a1 + 0x4914;                                           // 0x00199924: addiu $a1, $a1, 0x4914
    *(float*)(t6) = FPU_F3;  // Store float                     // 0x00199928: swc1 $f3, 0($t6)
    v1 = sp + 0x50;                                             // 0x0019992c: addiu $v1, $sp, 0x50
    *(float*)((t6) + 4) = FPU_F2;  // Store float               // 0x00199930: swc1 $f2, 4($t6)
    *(float*)((t6) + 8) = FPU_F1;  // Store float               // 0x00199934: swc1 $f1, 8($t6)
    *(float*)((t6) + 0xc) = FPU_F0;  // Store float             // 0x00199938: swc1 $f0, 0xc($t6)
    FPU_F3 = *(float*)(t5);  // Load float                      // 0x0019993c: lwc1 $f3, 0($t5)
    FPU_F2 = *(float*)((t5) + 4);  // Load float                // 0x00199940: lwc1 $f2, 4($t5)
    FPU_F1 = *(float*)((t5) + 8);  // Load float                // 0x00199944: lwc1 $f1, 8($t5)
    FPU_F0 = *(float*)((t5) + 0xc);  // Load float              // 0x00199948: lwc1 $f0, 0xc($t5)
    *(float*)(t4) = FPU_F3;  // Store float                     // 0x0019994c: swc1 $f3, 0($t4)
    *(float*)((t4) + 4) = FPU_F2;  // Store float               // 0x00199950: swc1 $f2, 4($t4)
    *(float*)((t4) + 8) = FPU_F1;  // Store float               // 0x00199954: swc1 $f1, 8($t4)
    *(float*)((t4) + 0xc) = FPU_F0;  // Store float             // 0x00199958: swc1 $f0, 0xc($t4)
    FPU_F3 = *(float*)(t3);  // Load float                      // 0x0019995c: lwc1 $f3, 0($t3)
    FPU_F2 = *(float*)((t3) + 4);  // Load float                // 0x00199960: lwc1 $f2, 4($t3)
    FPU_F1 = *(float*)((t3) + 8);  // Load float                // 0x00199964: lwc1 $f1, 8($t3)
    FPU_F0 = *(float*)((t3) + 0xc);  // Load float              // 0x00199968: lwc1 $f0, 0xc($t3)
    *(float*)(t2) = FPU_F3;  // Store float                     // 0x0019996c: swc1 $f3, 0($t2)
    *(float*)((t2) + 4) = FPU_F2;  // Store float               // 0x00199970: swc1 $f2, 4($t2)
    *(float*)((t2) + 8) = FPU_F1;  // Store float               // 0x00199974: swc1 $f1, 8($t2)
    *(float*)((t2) + 0xc) = FPU_F0;  // Store float             // 0x00199978: swc1 $f0, 0xc($t2)
    FPU_F3 = *(float*)(t1);  // Load float                      // 0x0019997c: lwc1 $f3, 0($t1)
    FPU_F2 = *(float*)((t1) + 4);  // Load float                // 0x00199980: lwc1 $f2, 4($t1)
    FPU_F1 = *(float*)((t1) + 8);  // Load float                // 0x00199984: lwc1 $f1, 8($t1)
    FPU_F0 = *(float*)((t1) + 0xc);  // Load float              // 0x00199988: lwc1 $f0, 0xc($t1)
    *(float*)(t0) = FPU_F3;  // Store float                     // 0x0019998c: swc1 $f3, 0($t0)
    *(float*)((t0) + 4) = FPU_F2;  // Store float               // 0x00199990: swc1 $f2, 4($t0)
    *(float*)((t0) + 8) = FPU_F1;  // Store float               // 0x00199994: swc1 $f1, 8($t0)
    *(float*)((t0) + 0xc) = FPU_F0;  // Store float             // 0x00199998: swc1 $f0, 0xc($t0)
    FPU_F3 = *(float*)(a3);  // Load float                      // 0x0019999c: lwc1 $f3, 0($a3)
    FPU_F2 = *(float*)((a3) + 4);  // Load float                // 0x001999a0: lwc1 $f2, 4($a3)
    FPU_F1 = *(float*)((a3) + 8);  // Load float                // 0x001999a4: lwc1 $f1, 8($a3)
    FPU_F0 = *(float*)((a3) + 0xc);  // Load float              // 0x001999a8: lwc1 $f0, 0xc($a3)
    *(float*)(a2) = FPU_F3;  // Store float                     // 0x001999ac: swc1 $f3, 0($a2)
    *(float*)((a2) + 4) = FPU_F2;  // Store float               // 0x001999b0: swc1 $f2, 4($a2)
    *(float*)((a2) + 8) = FPU_F1;  // Store float               // 0x001999b4: swc1 $f1, 8($a2)
    *(float*)((a2) + 0xc) = FPU_F0;  // Store float             // 0x001999b8: swc1 $f0, 0xc($a2)
    FPU_F3 = *(float*)(a1);  // Load float                      // 0x001999bc: lwc1 $f3, 0($a1)
    FPU_F2 = *(float*)((a1) + 4);  // Load float                // 0x001999c0: lwc1 $f2, 4($a1)
    FPU_F1 = *(float*)((a1) + 8);  // Load float                // 0x001999c4: lwc1 $f1, 8($a1)
    FPU_F0 = *(float*)((a1) + 0xc);  // Load float              // 0x001999c8: lwc1 $f0, 0xc($a1)
    *(float*)(v1) = FPU_F3;  // Store float                     // 0x001999cc: swc1 $f3, 0($v1)
    *(float*)((v1) + 4) = FPU_F2;  // Store float               // 0x001999d0: swc1 $f2, 4($v1)
    *(float*)((v1) + 8) = FPU_F1;  // Store float               // 0x001999d4: swc1 $f1, 8($v1)
    *(float*)((v1) + 0xc) = FPU_F0;  // Store float             // 0x001999d8: swc1 $f0, 0xc($v1)
    VPU_VF4 = *(vec128_t*)((t6) + 0);  // Load 128-bit vector   // 0x001999dc: ldc2 $4, 0($t6)
    VPU_VF5 = *(vec128_t*)((t6) + 0x20);  // Load 128-bit vector // 0x001999e0: ldc2 $5, 0x20($t6)
    VPU_VF6 = *(vec128_t*)((t6) + 0x40);  // Load 128-bit vector // 0x001999e4: ldc2 $6, 0x40($t6)
    VPU_VF7 = *(vec128_t*)((t6) + 0x10);  // Load 128-bit vector // 0x001999e8: ldc2 $7, 0x10($t6)
    VPU_VF8 = *(vec128_t*)((t6) + 0x30);  // Load 128-bit vector // 0x001999ec: ldc2 $8, 0x30($t6)
    VPU_VF9 = *(vec128_t*)((t6) + 0x50);  // Load 128-bit vector // 0x001999f0: ldc2 $9, 0x50($t6)
    /* move from FPU: $t0, $f12 */                              // 0x00199a00: mfc1 $t0, $f12
    *(vec128_t*)((a0) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x00199a08: sdc2 $4, 0($a0)
    *(vec128_t*)((a0) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x00199a0c: sdc2 $5, 0x10($a0)
    *(vec128_t*)((a0) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x00199a10: sdc2 $6, 0x20($a0)
    *(vec128_t*)((a0) + 0x30) = VPU_VF7;  // Store 128-bit vector // 0x00199a34: sdc2 $7, 0x30($a0)
    *(vec128_t*)((a0) + 0x40) = VPU_VF8;  // Store 128-bit vector // 0x00199a38: sdc2 $8, 0x40($a0)
    *(vec128_t*)((a0) + 0x50) = VPU_VF9;  // Store 128-bit vector // 0x00199a3c: sdc2 $9, 0x50($a0)
    v1 = 0x4300 << 16;                                          // 0x00199a40: lui $v1, 0x4300
    *(uint32_t*)((a0) + 0x5c) = v1;                             // 0x00199a44: sw $v1, 0x5c($a0)
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x00199a48: sw $v1, 0x4c($a0)
    *(uint32_t*)((a0) + 0x3c) = v1;                             // 0x00199a4c: sw $v1, 0x3c($a0)
    return;                                                     // 0x00199a50: jr $ra
    sp = sp + 0x60;                                             // 0x00199a54: addiu $sp, $sp, 0x60
}