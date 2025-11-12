void func_001937f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x3f80 << 16;                                          // 0x001937f0: lui $v0, 0x3f80
    a1 = 0x28 << 16;                                            // 0x001937f4: lui $a1, 0x28
    /* move to FPU: $v0, $f12 */                                // 0x001937f8: mtc1 $v0, $f12
    a1 = a1 + 0x5420;                                           // 0x001937fc: addiu $a1, $a1, 0x5420
    /* FPU: mov.s $f13, $f12 */                                 // 0x00193800: mov.s $f13, $f12
    goto label_0x193810;                                        // 0x00193804: j 0x193810
    /* FPU: mov.s $f14, $f12 */                                 // 0x00193808: mov.s $f14, $f12
    /* nop */                                                   // 0x0019380c: nop 
label_0x193810:
    sp = sp + -0x80;                                            // 0x00193810: addiu $sp, $sp, -0x80
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x0019381c: addu.qb $zero, $sp, $s0
    *(float*)((sp) + 8) = FPU_F22;  // Store float              // 0x00193824: swc1 $f22, 8($sp)
    *(float*)((sp) + 4) = FPU_F21;  // Store float              // 0x0019382c: swc1 $f21, 4($sp)
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x00193834: swc1 $f20, 0($sp)
    /* FPU: mov.s $f22, $f12 */                                 // 0x00193838: mov.s $f22, $f12
    /* FPU: mov.s $f21, $f13 */                                 // 0x0019383c: mov.s $f21, $f13
    /* FPU: mov.s $f20, $f14 */                                 // 0x00193840: mov.s $f20, $f14
label_0x193844:
    v0 = a0 << 2;                                               // 0x00193844: sll $v0, $a0, 2
    v1 = s1 + v0;                                               // 0x00193848: addu $v1, $s1, $v0
    a0 = a0 + 1;                                                // 0x0019384c: addiu $a0, $a0, 1
    FPU_F0 = *(float*)((v1) + 0xdc);  // Load float             // 0x00193850: lwc1 $f0, 0xdc($v1)
    v0 = (a0 < 0xa) ? 1 : 0;                                    // 0x00193854: slti $v0, $a0, 0xa
    if (v0 != 0) goto label_0x193844;                           // 0x00193858: bnez $v0, 0x193844
    *(float*)((v1) + 0x104) = FPU_F0;  // Store float           // 0x0019385c: swc1 $f0, 0x104($v1)
    a0 = s1 + 0x40;                                             // 0x00193860: addiu $a0, $s1, 0x40
    a1 = s1 + 0x104;                                            // 0x00193864: addiu $a1, $s1, 0x104
    /* FPU: mov.s $f12, $f22 */                                 // 0x00193868: mov.s $f12, $f22
    /* FPU: mov.s $f13, $f21 */                                 // 0x0019386c: mov.s $f13, $f21
    func_00193b70();  // 0x193a80                                // 0x00193870: jal 0x193a80
    /* FPU: mov.s $f14, $f20 */                                 // 0x00193874: mov.s $f14, $f20
    a0 = sp + 0x40;                                             // 0x00193878: addiu $a0, $sp, 0x40
    a1 = s1 + 0x40;                                             // 0x0019387c: addiu $a1, $s1, 0x40
    func_001910b0();  // 0x191030                                // 0x00193880: jal 0x191030
    a0 = s1 + 0x80;                                             // 0x00193888: addiu $a0, $s1, 0x80
    func_001912b0();  // 0x1911e0                                // 0x0019388c: jal 0x1911e0
    a1 = sp + 0x40;                                             // 0x00193890: addiu $a1, $sp, 0x40
    a0 = *(int32_t*)((s1) + 0xd0);                              // 0x00193894: lw $a0, 0xd0($s1)
    if (a0 == 0) goto label_0x1938c0;                           // 0x00193898: beqz $a0, 0x1938c0
    /* nop */                                                   // 0x0019389c: nop 
    FPU_F2 = *(float*)((s1) + 0x104);  // Load float            // 0x001938a0: lwc1 $f2, 0x104($s1)
    a1 = sp + 0x40;                                             // 0x001938a4: addiu $a1, $sp, 0x40
    FPU_F1 = *(float*)((s1) + 0x108);  // Load float            // 0x001938a8: lwc1 $f1, 0x108($s1)
    FPU_F0 = *(float*)((s1) + 0x10c);  // Load float            // 0x001938ac: lwc1 $f0, 0x10c($s1)
    /* FPU: mul.s $f12, $f22, $f2 */                            // 0x001938b0: mul.s $f12, $f22, $f2
    /* FPU: mul.s $f13, $f21, $f1 */                            // 0x001938b4: mul.s $f13, $f21, $f1
    func_00193900();  // 0x193810                                // 0x001938b8: jal 0x193810
    /* FPU: mul.s $f14, $f20, $f0 */                            // 0x001938bc: mul.s $f14, $f20, $f0
label_0x1938c0:
    a0 = *(int32_t*)((s1) + 0xcc);                              // 0x001938c0: lw $a0, 0xcc($s1)
    if (a0 == 0) goto label_0x1938dc;                           // 0x001938c4: beqz $a0, 0x1938dc
    /* FPU: mov.s $f12, $f22 */                                 // 0x001938c8: mov.s $f12, $f22
    /* FPU: mov.s $f13, $f21 */                                 // 0x001938d0: mov.s $f13, $f21
    func_00193900();  // 0x193810                                // 0x001938d4: jal 0x193810
    /* FPU: mov.s $f14, $f20 */                                 // 0x001938d8: mov.s $f14, $f20
label_0x1938dc:
    FPU_F22 = *(float*)((sp) + 8);  // Load float               // 0x001938e0: lwc1 $f22, 8($sp)
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x001938e4: ld.b $w0, -0x4f($zero)
    FPU_F21 = *(float*)((sp) + 4);  // Load float               // 0x001938e8: lwc1 $f21, 4($sp)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x001938ec: aver_u.h $w0, $w0, $w16
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x001938f0: lwc1 $f20, 0($sp)
    v0 = 1;                                                     // 0x001938f4: addiu $v0, $zero, 1
    return;                                                     // 0x001938f8: jr $ra
    sp = sp + 0x80;                                             // 0x001938fc: addiu $sp, $sp, 0x80
}