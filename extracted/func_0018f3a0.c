void func_0018f3a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    FPU_F0 = *(float*)((gp) + -0x7fcc);  // Load float          // 0x0018f3a0: lwc1 $f0, -0x7fcc($gp)
    /* FPU: c.ole.s $f12, $f0 */                                // 0x0018f3a4: c.ole.s $f12, $f0
    /* bc1t 0x18f3c0 */                                         // 0x0018f3a8: bc1t 0x18f3c0
    /* nop */                                                   // 0x0018f3ac: nop 
    FPU_F0 = *(float*)((gp) + -0x7fc8);  // Load float          // 0x0018f3b0: lwc1 $f0, -0x7fc8($gp)
    /* FPU: c.olt.s $f12, $f0 */                                // 0x0018f3b4: c.olt.s $f12, $f0
    /* bc1t 0x18f40c */                                         // 0x0018f3b8: bc1t 0x18f40c
    /* nop */                                                   // 0x0018f3bc: nop 
    v1 = 0x21 << 16;                                            // 0x0018f3c0: lui $v1, 0x21
    v1 = v1 + 0x6420;                                           // 0x0018f3c4: addiu $v1, $v1, 0x6420
    /* move from FPU: $t0, $f12 */                              // 0x0018f3c8: mfc1 $t0, $f12
    VPU_VF6 = *(vec128_t*)((v1) + 0);  // Load 128-bit vector   // 0x0018f3cc: ldc2 $6, 0($v1)
    t0 = (0 < t0) ? 1 : 0;                                      // 0x0018f3d4: slt $t0, $zero, $t0
    /* move to FPU: $t0, $f12 */                                // 0x0018f408: mtc1 $t0, $f12
    a1 = 0x21 << 16;                                            // 0x0018f40c: lui $a1, 0x21
    a1 = a1 + 0x6430;                                           // 0x0018f410: addiu $a1, $a1, 0x6430
    /* move to FPU: $zero, $f0 */                               // 0x0018f414: mtc1 $zero, $f0
    /* nop */                                                   // 0x0018f418: nop 
    /* FPU: c.olt.s $f12, $f0 */                                // 0x0018f41c: c.olt.s $f12, $f0
    at = 0x3fc9 << 16;                                          // 0x0018f420: lui $at, 0x3fc9
    v1 = at | 0xfdb;                                            // 0x0018f424: ori $v1, $at, 0xfdb
    /* bc1f 0x18f444 */                                         // 0x0018f428: bc1f 0x18f444
    /* move to FPU: $v1, $f0 */                                 // 0x0018f42c: mtc1 $v1, $f0
    /* FPU: add.s $f12, $f0, $f12 */                            // 0x0018f434: add.s $f12, $f0, $f12
    goto label_0x18f44c;                                        // 0x0018f438: j 0x18f44c
    a3 = 1;                                                     // 0x0018f43c: addi $a3, $zero, 1
    /* FPU: sub.s $f12, $f0, $f12 */                            // 0x0018f444: sub.s $f12, $f0, $f12
    a3 = 0;                                                     // 0x0018f448: move $a3, $zero
label_0x18f44c:
    /* move from FPU: $t0, $f12 */                              // 0x0018f44c: mfc1 $t0, $f12
    /* nop */                                                   // 0x0018f450: nop 
    VPU_VF5 = *(vec128_t*)((a1) + 0);  // Load 128-bit vector   // 0x0018f45c: ldc2 $5, 0($a1)
    if (a3 != 0) goto label_0x18f4b0;                           // 0x0018f498: bnez $a3, 0x18f4b0
    goto label_0x18f4b4;                                        // 0x0018f4a4: b 0x18f4b4
label_0x18f4b0:
label_0x18f4b4:
    return;                                                     // 0x0018f4b4: jr $ra
    *(vec128_t*)((a0) + 0) = VPU_VF6;  // Store 128-bit vector  // 0x0018f4b8: sdc2 $6, 0($a0)
}