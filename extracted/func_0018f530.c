void func_0018f530() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x3f00 << 16;                                          // 0x0018f530: lui $v0, 0x3f00
    sp = sp + -0x40;                                            // 0x0018f534: addiu $sp, $sp, -0x40
    /* move to FPU: $v0, $f0 */                                 // 0x0018f538: mtc1 $v0, $f0
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x0018f540: addu.qb $zero, $sp, $s0
    a1 = sp + 0x3c;                                             // 0x0018f544: addiu $a1, $sp, 0x3c
    /* FPU: mul.s $f14, $f14, $f0 */                            // 0x0018f548: mul.s $f14, $f14, $f0
    a0 = sp + 0x38;                                             // 0x0018f550: addiu $a0, $sp, 0x38
    *(float*)((sp) + 8) = FPU_F22;  // Store float              // 0x0018f554: swc1 $f22, 8($sp)
    *(float*)((sp) + 4) = FPU_F21;  // Store float              // 0x0018f558: swc1 $f21, 4($sp)
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x0018f55c: swc1 $f20, 0($sp)
    /* FPU: mov.s $f22, $f12 */                                 // 0x0018f560: mov.s $f22, $f12
    /* FPU: mov.s $f20, $f13 */                                 // 0x0018f564: mov.s $f20, $f13
    /* FPU: mov.s $f21, $f15 */                                 // 0x0018f568: mov.s $f21, $f15
    thunk_func_00191f60();  // 191f60                          // 0x0018f56c: jal 0x191f60
    /* FPU: mov.s $f12, $f14 */                                 // 0x0018f570: mov.s $f12, $f14
    func_0018fba0();  // 18fba0                                // 0x0018f574: jal 0x18fba0
    FPU_F3 = *(float*)((sp) + 0x3c);  // Load float             // 0x0018f57c: lwc1 $f3, 0x3c($sp)
    v1 = 0x4000 << 16;                                          // 0x0018f580: lui $v1, 0x4000
    FPU_F2 = *(float*)((sp) + 0x38);  // Load float             // 0x0018f584: lwc1 $f2, 0x38($sp)
    a0 = 0xbf80 << 16;                                          // 0x0018f588: lui $a0, 0xbf80
    /* move to FPU: $v1, $f0 */                                 // 0x0018f58c: mtc1 $v1, $f0
    /* FPU: add.s $f1, $f22, $f20 */                            // 0x0018f590: add.s $f1, $f22, $f20
    /* FPU: div.s $f2, $f3, $f2 */                              // 0x0018f594: div.s $f2, $f3, $f2
    /* FPU: div.s $f2, $f2, $f21 */                             // 0x0018f598: div.s $f2, $f2, $f21
    *(float*)(s0) = FPU_F2;  // Store float                     // 0x0018f59c: swc1 $f2, 0($s0)
    /* FPU: mul.s $f0, $f0, $f22 */                             // 0x0018f5a0: mul.s $f0, $f0, $f22
    /* FPU: mul.s $f0, $f0, $f20 */                             // 0x0018f5a4: mul.s $f0, $f0, $f20
    FPU_F3 = *(float*)((sp) + 0x3c);  // Load float             // 0x0018f5a8: lwc1 $f3, 0x3c($sp)
    FPU_F2 = *(float*)((sp) + 0x38);  // Load float             // 0x0018f5ac: lwc1 $f2, 0x38($sp)
    /* FPU: sub.s $f4, $f22, $f20 */                            // 0x0018f5b0: sub.s $f4, $f22, $f20
    /* FPU: neg.s $f1, $f1 */                                   // 0x0018f5b4: neg.s $f1, $f1
    /* FPU: div.s $f2, $f3, $f2 */                              // 0x0018f5b8: div.s $f2, $f3, $f2
    /* FPU: neg.s $f0, $f0 */                                   // 0x0018f5bc: neg.s $f0, $f0
    /* FPU: div.s $f1, $f1, $f4 */                              // 0x0018f5c0: div.s $f1, $f1, $f4
    *(float*)((s0) + 0x14) = FPU_F2;  // Store float            // 0x0018f5c4: swc1 $f2, 0x14($s0)
    *(float*)((s0) + 0x28) = FPU_F1;  // Store float            // 0x0018f5c8: swc1 $f1, 0x28($s0)
    /* FPU: div.s $f0, $f0, $f4 */                              // 0x0018f5cc: div.s $f0, $f0, $f4
    *(uint32_t*)((s0) + 0x2c) = a0;                             // 0x0018f5d0: sw $a0, 0x2c($s0)
    *(float*)((s0) + 0x38) = FPU_F0;  // Store float            // 0x0018f5d4: swc1 $f0, 0x38($s0)
    *(uint32_t*)((s0) + 0x3c) = 0;                              // 0x0018f5d8: sw $zero, 0x3c($s0)
    FPU_F22 = *(float*)((sp) + 8);  // Load float               // 0x0018f5e0: lwc1 $f22, 8($sp)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x0018f5e4: aver_u.h $w0, $w0, $w16
    FPU_F21 = *(float*)((sp) + 4);  // Load float               // 0x0018f5e8: lwc1 $f21, 4($sp)
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x0018f5ec: lwc1 $f20, 0($sp)
    return;                                                     // 0x0018f5f0: jr $ra
    sp = sp + 0x40;                                             // 0x0018f5f4: addiu $sp, $sp, 0x40
}