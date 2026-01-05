void func_001b4180() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x90;                                            // 0x001b4180: addiu $sp, $sp, -0x90
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x001b4188: dps.w.ph $ac0, $sp, $s7
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001b4194: subu.qb $zero, $sp, $s5
    s6 = 0x30 << 16;                                            // 0x001b4198: lui $s6, 0x30
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001b41a4: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b41b4: addu.qb $zero, $sp, $s1
    func_001b4030();  // 1b4030                                // 0x001b41cc: jal 0x1b4030
    s6 = s6 + 0x6c00;                                           // 0x001b41d0: addiu $s6, $s6, 0x6c00
    if (v0 != 0) goto label_0x1b41e4;                           // 0x001b41d4: bnez $v0, 0x1b41e4
    goto label_0x1b4290;                                        // 0x001b41dc: b 0x1b4290
label_0x1b41e4:
    func_001b40f0();  // 1b40f0                                // 0x001b41e8: jal 0x1b40f0
    if (v0 != 0) goto label_0x1b4200;                           // 0x001b41f0: bnez $v0, 0x1b4200
    /* nop */                                                   // 0x001b41f4: nop 
    goto label_0x1b4290;                                        // 0x001b41f8: b 0x1b4290
label_0x1b4200:
    s6 = s6 + 0x10;                                             // 0x001b4200: addiu $s6, $s6, 0x10
    goto label_0x1b4220;                                        // 0x001b4204: b 0x1b4220
label_0x1b420c:
    v0 = g_00306c10;  // Global at 0x00306c10                   // 0x001b420c: lh $v0, 0($s6)
    if (v0 == 0) goto label_0x1b4230;                           // 0x001b4210: beqz $v0, 0x1b4230
    v0 = 0x20;                                                  // 0x001b4214: addiu $v0, $zero, 0x20
    v1 = v1 + 1;                                                // 0x001b4218: addiu $v1, $v1, 1
    s6 = s6 + 0x8c;                                             // 0x001b421c: addiu $s6, $s6, 0x8c
label_0x1b4220:
    v0 = (v1 < 0x20) ? 1 : 0;                                   // 0x001b4220: slti $v0, $v1, 0x20
    if (v0 != 0) goto label_0x1b420c;                           // 0x001b4224: bnez $v0, 0x1b420c
    /* nop */                                                   // 0x001b4228: nop 
    v0 = 0x20;                                                  // 0x001b422c: addiu $v0, $zero, 0x20
label_0x1b4230:
    if (v1 != v0) goto label_0x1b4240;                          // 0x001b4230: bne $v1, $v0, 0x1b4240
    a0 = 1;                                                     // 0x001b4234: addiu $a0, $zero, 1
    goto label_0x1b4290;                                        // 0x001b4238: b 0x1b4290
label_0x1b4240:
    v1 = s4 & 0xfffe;                                           // 0x001b4240: andi $v1, $s4, 0xfffe
    g_00306c9c = a0;  // Global at 0x00306c9c                   // 0x001b4244: sh $a0, 0($s6)
    v0 = s3 & 0xfffe;                                           // 0x001b4248: andi $v0, $s3, 0xfffe
    g_00306ca7 = s5;  // Global at 0x00306ca7                   // 0x001b424c: sb $s5, 0xb($s6)
    g_00306c9e = v1;  // Global at 0x00306c9e                   // 0x001b4254: sh $v1, 2($s6)
    a0 = s6 + 0xc;                                              // 0x001b4258: addiu $a0, $s6, 0xc
    func_0010ac68();  // 10ac68                                // 0x001b425c: jal 0x10ac68
    g_00306ca0 = v0;  // Global at 0x00306ca0                   // 0x001b4260: sh $v0, 4($s6)
    g_00306ca2 = s7;  // Global at 0x00306ca2                   // 0x001b4264: sh $s7, 6($s6)
    if (s0 != 0) goto label_0x1b427c;                           // 0x001b4268: bnez $s0, 0x1b427c
    g_00306ca4 = s2;  // Global at 0x00306ca4                   // 0x001b426c: sb $s2, 8($s6)
    v0 = 0x80;                                                  // 0x001b4270: addiu $v0, $zero, 0x80
    goto label_0x1b4280;                                        // 0x001b4274: b 0x1b4280
    g_00306ca6 = v0;  // Global at 0x00306ca6                   // 0x001b4278: sb $v0, 0xa($s6)
label_0x1b427c:
    g_00306ca6 = 0;  // Global at 0x00306ca6                    // 0x001b427c: sb $zero, 0xa($s6)
label_0x1b4280:
    v0 = s6 + 0xa;                                              // 0x001b4284: addiu $v0, $s6, 0xa
    g_00306ca5 = v1;  // Global at 0x00306ca5                   // 0x001b428c: sb $v1, 9($s6)
label_0x1b4290:
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001b4298: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001b429c: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001b42a0: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b42a8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b42ac: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b42b0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b42b4: jr $ra
    sp = sp + 0x90;                                             // 0x001b42b8: addiu $sp, $sp, 0x90
}