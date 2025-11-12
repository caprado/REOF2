void func_001da1f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_a0, local_bc;
    
    sp = sp + -0xc0;                                            // 0x001da1f0: addiu $sp, $sp, -0xc0
    at = 0x3b << 16;                                            // 0x001da1f4: lui $at, 0x3b
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x001da200: dps.w.ph $ac0, $sp, $s7
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001da208: subu.qb $zero, $sp, $s5
    s5 = 0x3a << 16;                                            // 0x001da210: lui $s5, 0x3a
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001da214: dpa.w.ph $ac0, $sp, $s3
    s4 = a0 + 0x10;                                             // 0x001da218: addiu $s4, $a0, 0x10
    s5 = s5 + -0x48c0;                                          // 0x001da220: addiu $s5, $s5, -0x48c0
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001da224: addu.qb $zero, $sp, $s1
    v1 = *(int32_t*)(a0);                                       // 0x001da230: lw $v1, 0($a0)
    local_bc = a0;                                              // 0x001da234: sw $a0, 0xbc($sp)
    goto label_0x1da3c8;                                        // 0x001da238: b 0x1da3c8
    g_003adf60 = v1;  // Global at 0x003adf60                   // 0x001da23c: sh $v1, -0x20a0($at)
label_0x1da240:
    at = 1 << 16;                                               // 0x001da240: lui $at, 1
    v1 = s3 << 2;                                               // 0x001da244: sll $v1, $s3, 2
    a1 = a1 + -0x48c0;                                          // 0x001da248: addiu $a1, $a1, -0x48c0
    a0 = a1 + v1;                                               // 0x001da24c: addu $a0, $a1, $v1
    at = at | 0x28e6;                                           // 0x001da250: ori $at, $at, 0x28e6
    s6 = a0 + at;                                               // 0x001da254: addu $s6, $a0, $at
    v1 = *(int16_t*)(s4);                                       // 0x001da258: lh $v1, 0($s4)
    at = 1 << 16;                                               // 0x001da25c: lui $at, 1
    at = at | 0x28e7;                                           // 0x001da260: ori $at, $at, 0x28e7
    s0 = a0 + at;                                               // 0x001da264: addu $s0, $a0, $at
    at = 1 << 16;                                               // 0x001da268: lui $at, 1
    at = a0 + at;                                               // 0x001da26c: addu $at, $a0, $at
    g_000128e4 = v1;  // Global at 0x000128e4                   // 0x001da270: sh $v1, 0x28e4($at)
    v1 = *(uint8_t*)((s4) + 2);                                 // 0x001da274: lbu $v1, 2($s4)
    *(uint8_t*)(s6) = v1;                                       // 0x001da278: sb $v1, 0($s6)
    v1 = *(uint8_t*)((s4) + 3);                                 // 0x001da27c: lbu $v1, 3($s4)
    *(uint8_t*)(s0) = v1;                                       // 0x001da280: sb $v1, 0($s0)
    v1 = *(int8_t*)(s0);                                        // 0x001da284: lb $v1, 0($s0)
    if (v1 == 0) goto label_0x1da3c0;                           // 0x001da288: beqz $v1, 0x1da3c0
    /* nop */                                                   // 0x001da28c: nop 
    a0 = *(int32_t*)((s4) + 4);                                 // 0x001da290: lw $a0, 4($s4)
    v1 = s3 << 7;                                               // 0x001da294: sll $v1, $s3, 7
    at = 1 << 16;                                               // 0x001da298: lui $at, 1
    v1 = a1 + v1;                                               // 0x001da29c: addu $v1, $a1, $v1
    at = at | 0x2a64;                                           // 0x001da2a0: ori $at, $at, 0x2a64
    v1 = v1 + at;                                               // 0x001da2a8: addu $v1, $v1, $at
    local_a0 = v1;                                              // 0x001da2ac: sw $v1, 0xa0($sp)
    v1 = local_bc;                                              // 0x001da2b0: lw $v1, 0xbc($sp)
    goto label_0x1da3b0;                                        // 0x001da2b4: b 0x1da3b0
    s1 = v1 + a0;                                               // 0x001da2b8: addu $s1, $v1, $a0
label_0x1da2bc:
    v0 = local_a0;                                              // 0x001da2bc: lw $v0, 0xa0($sp)
    s7 = s2 << 2;                                               // 0x001da2c0: sll $s7, $s2, 2
    func_001b10e0();  // 0x1b1090                                // 0x001da2c4: jal 0x1b1090
    fp = v0 + s7;                                               // 0x001da2c8: addu $fp, $v0, $s7
    a0 = v0 & 0xffff;                                           // 0x001da2cc: andi $a0, $v0, 0xffff
    v1 = 0x4c << 16;                                            // 0x001da2d0: lui $v1, 0x4c
    *(uint32_t*)(fp) = a0;                                      // 0x001da2d4: sw $a0, 0($fp)
    v1 = v1 + 0x4290;                                           // 0x001da2d8: addiu $v1, $v1, 0x4290
    t1 = *(int32_t*)(fp);                                       // 0x001da2dc: lw $t1, 0($fp)
    a1 = 0x13;                                                  // 0x001da2e0: addiu $a1, $zero, 0x13
    a3 = *(int8_t*)(s6);                                        // 0x001da2e4: lb $a3, 0($s6)
    a2 = g_0039bf48;  // Global at 0x0039bf48                   // 0x001da2e8: lw $a2, 0x808($s5)
    a0 = t1 << 3;                                               // 0x001da2ec: sll $a0, $t1, 3
    t0 = a0 + t1;                                               // 0x001da2f0: addu $t0, $a0, $t1
    a0 = a3 << 3;                                               // 0x001da2f4: sll $a0, $a3, 3
    t0 = t0 << 1;                                               // 0x001da2f8: sll $t0, $t0, 1
    a0 = a0 + a3;                                               // 0x001da2fc: addu $a0, $a0, $a3
    t0 = t0 + t1;                                               // 0x001da300: addu $t0, $t0, $t1
    a0 = a0 << 1;                                               // 0x001da304: sll $a0, $a0, 1
    a3 = a0 + a3;                                               // 0x001da308: addu $a3, $a0, $a3
    a3 = a3 << 3;                                               // 0x001da30c: sll $a3, $a3, 3
    a0 = t0 << 2;                                               // 0x001da310: sll $a0, $t0, 2
    a3 = a2 + a3;                                               // 0x001da314: addu $a3, $a2, $a3
    a0 = v1 + a0;                                               // 0x001da318: addu $a0, $v1, $a0
    a3 = a3 + s7;                                               // 0x001da31c: addu $a3, $a3, $s7
    a3 = *(int32_t*)((a3) + 8);                                 // 0x001da324: lw $a3, 8($a3)
    a3 = a3 << 1;                                               // 0x001da328: sll $a3, $a3, 1
    a3 = s5 + a3;                                               // 0x001da32c: addu $a3, $s5, $a3
    t0 = *(uint16_t*)((a3) + 8);                                // 0x001da330: lhu $t0, 8($a3)
    a3 = t0 << 3;                                               // 0x001da334: sll $a3, $t0, 3
    a3 = a3 + t0;                                               // 0x001da338: addu $a3, $a3, $t0
    a3 = a3 << 1;                                               // 0x001da33c: sll $a3, $a3, 1
    a3 = a3 + t0;                                               // 0x001da340: addu $a3, $a3, $t0
    a3 = a3 << 2;                                               // 0x001da344: sll $a3, $a3, 2
    a3 = v1 + a3;                                               // 0x001da348: addu $a3, $v1, $a3
label_0x1da34c:
    v1 = *(int32_t*)(a3);                                       // 0x001da34c: lw $v1, 0($a3)
    a1 = a1 + -1;                                               // 0x001da350: addiu $a1, $a1, -1
    *(uint32_t*)(a2) = v1;                                      // 0x001da354: sw $v1, 0($a2)
    a3 = a3 + 4;                                                // 0x001da358: addiu $a3, $a3, 4
    a2 = a2 + 4;                                                // 0x001da35c: addiu $a2, $a2, 4
    if (a1 > 0) goto label_0x1da34c;                            // 0x001da360: bgtz $a1, 0x1da34c
    /* nop */                                                   // 0x001da364: nop 
    FPU_F0 = *(float*)(s1);  // Load float                      // 0x001da368: lwc1 $f0, 0($s1)
    s2 = s2 + 1;                                                // 0x001da36c: addiu $s2, $s2, 1
    *(float*)((a0) + 0x24) = FPU_F0;  // Store float            // 0x001da370: swc1 $f0, 0x24($a0)
    FPU_F0 = *(float*)((s1) + 4);  // Load float                // 0x001da374: lwc1 $f0, 4($s1)
    *(float*)((a0) + 0x28) = FPU_F0;  // Store float            // 0x001da378: swc1 $f0, 0x28($a0)
    FPU_F0 = *(float*)((s1) + 8);  // Load float                // 0x001da37c: lwc1 $f0, 8($s1)
    *(float*)((a0) + 0x2c) = FPU_F0;  // Store float            // 0x001da380: swc1 $f0, 0x2c($a0)
    FPU_F0 = *(float*)((s1) + 0xc);  // Load float              // 0x001da384: lwc1 $f0, 0xc($s1)
    *(float*)((a0) + 0x30) = FPU_F0;  // Store float            // 0x001da388: swc1 $f0, 0x30($a0)
    FPU_F0 = *(float*)((s1) + 0x10);  // Load float             // 0x001da38c: lwc1 $f0, 0x10($s1)
    *(float*)((a0) + 4) = FPU_F0;  // Store float               // 0x001da390: swc1 $f0, 4($a0)
    FPU_F0 = *(float*)((s1) + 0x14);  // Load float             // 0x001da394: lwc1 $f0, 0x14($s1)
    *(float*)((a0) + 8) = FPU_F0;  // Store float               // 0x001da398: swc1 $f0, 8($a0)
    FPU_F0 = *(float*)((s1) + 0x18);  // Load float             // 0x001da39c: lwc1 $f0, 0x18($s1)
    *(float*)((a0) + 0xc) = FPU_F0;  // Store float             // 0x001da3a0: swc1 $f0, 0xc($a0)
    FPU_F0 = *(float*)((s1) + 0x1c);  // Load float             // 0x001da3a4: lwc1 $f0, 0x1c($s1)
    *(float*)((a0) + 0x10) = FPU_F0;  // Store float            // 0x001da3a8: swc1 $f0, 0x10($a0)
    s1 = s1 + 0x20;                                             // 0x001da3ac: addiu $s1, $s1, 0x20
label_0x1da3b0:
    v1 = *(int8_t*)(s0);                                        // 0x001da3b0: lb $v1, 0($s0)
    v1 = (s2 < v1) ? 1 : 0;                                     // 0x001da3b4: slt $v1, $s2, $v1
    if (v1 != 0) goto label_0x1da2bc;                           // 0x001da3b8: bnez $v1, 0x1da2bc
    /* nop */                                                   // 0x001da3bc: nop 
label_0x1da3c0:
    s4 = s4 + 8;                                                // 0x001da3c0: addiu $s4, $s4, 8
    s3 = s3 + 1;                                                // 0x001da3c4: addiu $s3, $s3, 1
label_0x1da3c8:
    at = 0x3b << 16;                                            // 0x001da3c8: lui $at, 0x3b
    v1 = g_003adf60;  // Global at 0x003adf60                   // 0x001da3cc: lh $v1, -0x20a0($at)
    v1 = (s3 < v1) ? 1 : 0;                                     // 0x001da3d0: slt $v1, $s3, $v1
    if (v1 != 0) goto label_0x1da240;                           // 0x001da3d4: bnez $v1, 0x1da240
    a1 = 0x3a << 16;                                            // 0x001da3d8: lui $a1, 0x3a
    /* FPU: xori.b $w2, $w0, 0xbe */                            // 0x001da3e0: xori.b $w2, $w0, 0xbe
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001da3e8: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001da3ec: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001da3f0: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001da3f8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001da3fc: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001da400: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001da404: jr $ra
    sp = sp + 0xc0;                                             // 0x001da408: addiu $sp, $sp, 0xc0
}