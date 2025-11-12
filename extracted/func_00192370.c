void func_00192370() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x100;                                           // 0x00192370: addiu $sp, $sp, -0x100
    /* FPU: dpa.w.ph $ac0, $sp, $s2 */                          // 0x00192378: dpa.w.ph $ac0, $sp, $s2
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x00192384: addu.qb $zero, $sp, $s0
    *(float*)((sp) + 4) = FPU_F21;  // Store float              // 0x0019238c: swc1 $f21, 4($sp)
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x00192390: swc1 $f20, 0($sp)
    a0 = *(int32_t*)((a1) + 0xd4);                              // 0x00192394: lw $a0, 0xd4($a1)
    /* FPU: mov.s $f21, $f12 */                                 // 0x00192398: mov.s $f21, $f12
    func_00192230();  // 0x192200                                // 0x0019239c: jal 0x192200
    /* FPU: mov.s $f20, $f13 */                                 // 0x001923a0: mov.s $f20, $f13
    v1 = *(int32_t*)((s1) + 0xd8);                              // 0x001923a4: lw $v1, 0xd8($s1)
    /* FPU: mov.s $f12, $f21 */                                 // 0x001923a8: mov.s $f12, $f21
    v0 = *(int32_t*)((gp) + -0x64dc);                           // 0x001923ac: lw $v0, -0x64dc($gp)
    a1 = s1 + 0xdc;                                             // 0x001923b0: addiu $a1, $s1, 0xdc
    a2 = sp + 0x50;                                             // 0x001923b4: addiu $a2, $sp, 0x50
    a3 = sp + 0xc0;                                             // 0x001923b8: addiu $a3, $sp, 0xc0
    t0 = s1 + 0x15c;                                            // 0x001923bc: addiu $t0, $s1, 0x15c
    s0 = v1 + v0;                                               // 0x001923c0: addu $s0, $v1, $v0
    func_00192d90();  // 0x192b90                                // 0x001923c4: jal 0x192b90
    a1 = s1 + 0xdc;                                             // 0x001923d0: addiu $a1, $s1, 0xdc
    /* FPU: mov.s $f12, $f20 */                                 // 0x001923d4: mov.s $f12, $f20
    t0 = s1 + 0x15c;                                            // 0x001923d8: addiu $t0, $s1, 0x15c
    a2 = sp + 0x50;                                             // 0x001923dc: addiu $a2, $sp, 0x50
    func_00192d90();  // 0x192b90                                // 0x001923e0: jal 0x192b90
    a3 = sp + 0x80;                                             // 0x001923e4: addiu $a3, $sp, 0x80
    FPU_F1 = *(float*)((sp) + 0xb0);  // Load float             // 0x001923e8: lwc1 $f1, 0xb0($sp)
    v0 = 1;                                                     // 0x001923ec: addiu $v0, $zero, 1
    FPU_F0 = *(float*)((sp) + 0xf0);  // Load float             // 0x001923f0: lwc1 $f0, 0xf0($sp)
    /* FPU: sub.s $f0, $f1, $f0 */                              // 0x001923f4: sub.s $f0, $f1, $f0
    *(float*)(s2) = FPU_F0;  // Store float                     // 0x001923f8: swc1 $f0, 0($s2)
    FPU_F1 = *(float*)((sp) + 0xb4);  // Load float             // 0x001923fc: lwc1 $f1, 0xb4($sp)
    FPU_F0 = *(float*)((sp) + 0xf4);  // Load float             // 0x00192400: lwc1 $f0, 0xf4($sp)
    /* FPU: sub.s $f0, $f1, $f0 */                              // 0x00192404: sub.s $f0, $f1, $f0
    *(float*)((s2) + 4) = FPU_F0;  // Store float               // 0x00192408: swc1 $f0, 4($s2)
    FPU_F1 = *(float*)((sp) + 0xb8);  // Load float             // 0x0019240c: lwc1 $f1, 0xb8($sp)
    FPU_F0 = *(float*)((sp) + 0xf8);  // Load float             // 0x00192410: lwc1 $f0, 0xf8($sp)
    /* FPU: sub.s $f0, $f1, $f0 */                              // 0x00192414: sub.s $f0, $f1, $f0
    *(float*)((s2) + 8) = FPU_F0;  // Store float               // 0x00192418: swc1 $f0, 8($s2)
    FPU_F21 = *(float*)((sp) + 4);  // Load float               // 0x00192420: lwc1 $f21, 4($sp)
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x00192428: lwc1 $f20, 0($sp)
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x0019242c: ld.b $w0, -0x4f($zero)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x00192430: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x00192434: jr $ra
    sp = sp + 0x100;                                            // 0x00192438: addiu $sp, $sp, 0x100
}