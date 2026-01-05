void func_001a6030() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001a6030: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s2 */                          // 0x001a6038: dpa.w.ph $ac0, $sp, $s2
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x001a6040: addu.qb $zero, $sp, $s0
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x001a6048: swc1 $f20, 0($sp)
    s2 = *(int16_t*)(a0);                                       // 0x001a604c: lh $s2, 0($a0)
    v1 = *(int16_t*)((a0) + 2);                                 // 0x001a6050: lh $v1, 2($a0)
    v0 = v1 | s2;                                               // 0x001a6054: or $v0, $v1, $s2
    if (v0 != 0) goto label_0x1a606c;                           // 0x001a6058: bnez $v0, 0x1a606c
    /* move to FPU: $zero, $f20 */                              // 0x001a6060: mtc1 $zero, $f20
    goto label_0x1a60b0;                                        // 0x001a6064: b 0x1a60b0
    /* FPU: mov.s $f0, $f20 */                                  // 0x001a6068: mov.s $f0, $f20
label_0x1a606c:
    func_00111f90();  // 111f90                                // 0x001a606c: jal 0x111f90
    a0 = -v1;                                                   // 0x001a6070: negu $a0, $v1
    func_00111f90();  // 111f90                                // 0x001a6078: jal 0x111f90
    func_00122350();  // 122350                                // 0x001a6084: jal 0x122350
    func_00112118();  // 112118                                // 0x001a608c: jal 0x112118
    /* move to FPU: $zero, $f20 */                              // 0x001a6094: mtc1 $zero, $f20
    /* nop */                                                   // 0x001a6098: nop 
    /* FPU: c.olt.s $f0, $f20 */                                // 0x001a609c: c.olt.s $f0, $f20
    /* bc1f 0x1a60b0 */                                         // 0x001a60a0: bc1f 0x1a60b0
    /* nop */                                                   // 0x001a60a4: nop 
    FPU_F1 = *(float*)((gp) + -0x7f3c);  // Load float          // 0x001a60a8: lwc1 $f1, -0x7f3c($gp)
    /* FPU: add.s $f0, $f0, $f1 */                              // 0x001a60ac: add.s $f0, $f0, $f1
label_0x1a60b0:
    *(float*)((s1) + 8) = FPU_F0;  // Store float               // 0x001a60b0: swc1 $f0, 8($s1)
    v0 = 0x43b4 << 16;                                          // 0x001a60b4: lui $v0, 0x43b4
    FPU_F2 = *(float*)((gp) + -0x7f3c);  // Load float          // 0x001a60b8: lwc1 $f2, -0x7f3c($gp)
    /* move to FPU: $v0, $f1 */                                 // 0x001a60bc: mtc1 $v0, $f1
    /* nop */                                                   // 0x001a60c0: nop 
    /* FPU: div.s $f0, $f0, $f2 */                              // 0x001a60c4: div.s $f0, $f0, $f2
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x001a60c8: mul.s $f0, $f1, $f0
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001a60cc: cvt.w.s $f0, $f0
    /* move from FPU: $v0, $f0 */                               // 0x001a60d0: mfc1 $v0, $f0
    /* nop */                                                   // 0x001a60d4: nop 
    *(uint16_t*)((s1) + 6) = v0;                                // 0x001a60d8: sh $v0, 6($s1)
    v0 = *(int16_t*)(s1);                                       // 0x001a60dc: lh $v0, 0($s1)
    s2 = *(int16_t*)((s1) + 2);                                 // 0x001a60e0: lh $s2, 2($s1)
    func_00111f90();  // 111f90                                // 0x001a60e4: jal 0x111f90
    func_00111f90();  // 111f90                                // 0x001a60f0: jal 0x111f90
    func_00111998();  // 111998                                // 0x001a60fc: jal 0x111998
    func_00122380();  // 122380                                // 0x001a6104: jal 0x122380
    func_00112048();  // 112048                                // 0x001a610c: jal 0x112048
    *(uint16_t*)((s1) + 4) = v0;                                // 0x001a6114: sh $v0, 4($s1)
    v1 = *(int16_t*)((s1) + 4);                                 // 0x001a6118: lh $v1, 4($s1)
    at = (v1 < 0x80) ? 1 : 0;                                   // 0x001a611c: slti $at, $v1, 0x80
    if (at != 0) goto label_0x1a612c;                           // 0x001a6120: bnez $at, 0x1a612c
    v1 = 0x7f;                                                  // 0x001a6124: addiu $v1, $zero, 0x7f
    *(uint16_t*)((s1) + 4) = v1;                                // 0x001a6128: sh $v1, 4($s1)
label_0x1a612c:
    a0 = *(int16_t*)((s1) + 4);                                 // 0x001a612c: lh $a0, 4($s1)
    at = (a0 < v1) ? 1 : 0;                                     // 0x001a6138: slt $at, $a0, $v1
    if (at == 0) goto label_0x1a6158;                           // 0x001a613c: beqz $at, 0x1a6158
    /* nop */                                                   // 0x001a6140: nop 
    *(uint16_t*)(s1) = 0;                                       // 0x001a6144: sh $zero, 0($s1)
    *(uint16_t*)((s1) + 2) = 0;                                 // 0x001a6148: sh $zero, 2($s1)
    *(float*)((s1) + 8) = FPU_F20;  // Store float              // 0x001a614c: swc1 $f20, 8($s1)
    *(uint16_t*)((s1) + 6) = 0;                                 // 0x001a6150: sh $zero, 6($s1)
    *(uint16_t*)((s1) + 4) = 0;                                 // 0x001a6154: sh $zero, 4($s1)
label_0x1a6158:
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x001a615c: lwc1 $f20, 0($sp)
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x001a6164: ld.b $w0, -0x4f($zero)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x001a6168: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x001a616c: jr $ra
    sp = sp + 0x50;                                             // 0x001a6170: addiu $sp, $sp, 0x50
}