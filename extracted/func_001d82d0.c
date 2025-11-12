void func_001d82d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_a0, local_b0, local_c0, local_d0, local_e0, local_fc;
    
    sp = sp + -0x120;                                           // 0x001d82d0: addiu $sp, $sp, -0x120
    at = 0x31 << 16;                                            // 0x001d82d4: lui $at, 0x31
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x001d82e0: dps.w.ph $ac0, $sp, $s7
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001d82ec: subu.qb $zero, $sp, $s5
    a1 = -0x40;                                                 // 0x001d82f8: addiu $a1, $zero, -0x40
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d82fc: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d8308: addu.qb $zero, $sp, $s1
    local_fc = a2;                                              // 0x001d8314: sw $a2, 0xfc($sp)
    v1 = *(int32_t*)((a3) + 4);                                 // 0x001d831c: lw $v1, 4($a3)
    a2 = g_003137fc;  // Global at 0x003137fc                   // 0x001d8320: lw $a2, 0x37fc($at)
    v1 = v1 + a0;                                               // 0x001d8324: addu $v1, $v1, $a0
    local_d0 = v1;                                              // 0x001d8328: sw $v1, 0xd0($sp)
    v1 = a2 + t0;                                               // 0x001d832c: addu $v1, $a2, $t0
    v1 = v1 + 0x3f;                                             // 0x001d8330: addiu $v1, $v1, 0x3f
    v1 = v1 & a1;                                               // 0x001d8334: and $v1, $v1, $a1
    goto label_0x1d8448;                                        // 0x001d8338: b 0x1d8448
    local_c0 = v1;                                              // 0x001d833c: sw $v1, 0xc0($sp)
label_0x1d8340:
    v1 = local_d0;                                              // 0x001d8340: lw $v1, 0xd0($sp)
    at = ((unsigned)s0 < (unsigned)v1) ? 1 : 0;                 // 0x001d8344: sltu $at, $s0, $v1
    if (at == 0) goto label_0x1d8458;                           // 0x001d8348: beqz $at, 0x1d8458
    /* nop */                                                   // 0x001d834c: nop 
    fp = *(int32_t*)(s0);                                       // 0x001d8350: lw $fp, 0($s0)
    if (fp == 0) goto label_0x1d8440;                           // 0x001d8354: beqz $fp, 0x1d8440
    v1 = s4 + 1;                                                // 0x001d8358: addiu $v1, $s4, 1
    v1 = local_fc;                                              // 0x001d835c: lw $v1, 0xfc($sp)
    /* multiply: a0 * v1 -> hi:lo */                            // 0x001d8364: mult $ac3, $a0, $v1
    local_b0 = v1;                                              // 0x001d8368: sw $v1, 0xb0($sp)
    v1 = *(int32_t*)((s0) + 4);                                 // 0x001d836c: lw $v1, 4($s0)
    v1 = v1 + s1;                                               // 0x001d8370: addu $v1, $v1, $s1
    goto label_0x1d842c;                                        // 0x001d8374: b 0x1d842c
    local_e0 = v1;                                              // 0x001d8378: sw $v1, 0xe0($sp)
label_0x1d837c:
    a0 = -1;                                                    // 0x001d837c: addiu $a0, $zero, -1
    a1 = v1 << 2;                                               // 0x001d8380: sll $a1, $v1, 2
    v1 = local_e0;                                              // 0x001d8384: lw $v1, 0xe0($sp)
    v1 = v1 + a1;                                               // 0x001d8388: addu $v1, $v1, $a1
    v1 = *(int32_t*)(v1);                                       // 0x001d838c: lw $v1, 0($v1)
    if (v1 == a0) goto label_0x1d8424;                          // 0x001d8390: beq $v1, $a0, 0x1d8424
    s5 = s1 + v1;                                               // 0x001d8394: addu $s5, $s1, $v1
    v1 = *(int32_t*)(s5);                                       // 0x001d8398: lw $v1, 0($s5)
    if (v1 != a0) goto label_0x1d83c4;                          // 0x001d839c: bne $v1, $a0, 0x1d83c4
    /* nop */                                                   // 0x001d83a0: nop 
    v1 = local_b0;                                              // 0x001d83a4: lw $v1, 0xb0($sp)
    a0 = *(int32_t*)((s5) + 4);                                 // 0x001d83a8: lw $a0, 4($s5)
    v1 = s2 + v1;                                               // 0x001d83ac: addu $v1, $s2, $v1
    v1 = s7 + v1;                                               // 0x001d83b0: addu $v1, $s7, $v1
    v1 = v1 << 1;                                               // 0x001d83b4: sll $v1, $v1, 1
    v1 = s6 + v1;                                               // 0x001d83b8: addu $v1, $s6, $v1
    goto label_0x1d8424;                                        // 0x001d83bc: b 0x1d8424
    *(uint16_t*)((v1) + 4) = a0;                                // 0x001d83c0: sh $a0, 4($v1)
label_0x1d83c4:
    a1 = local_c0;                                              // 0x001d83c4: lw $a1, 0xc0($sp)
    a0 = sp + 0x100;                                            // 0x001d83c8: addiu $a0, $sp, 0x100
    func_001da620();  // 0x1da610                                // 0x001d83cc: jal 0x1da610
    func_00192330();  // 0x1922b0                                // 0x001d83d4: jal 0x1922b0
    a0 = sp + 0x100;                                            // 0x001d83d8: addiu $a0, $sp, 0x100
    v1 = local_b0;                                              // 0x001d83dc: lw $v1, 0xb0($sp)
    v1 = s2 + v1;                                               // 0x001d83e0: addu $v1, $s2, $v1
    v1 = s7 + v1;                                               // 0x001d83e4: addu $v1, $s7, $v1
    v1 = v1 << 1;                                               // 0x001d83e8: sll $v1, $v1, 1
    a0 = s6 + v1;                                               // 0x001d83ec: addu $a0, $s6, $v1
    v1 = a0 + 4;                                                // 0x001d83f0: addiu $v1, $a0, 4
    local_a0 = v1;                                              // 0x001d83f4: sw $v1, 0xa0($sp)
    v1 = *(uint16_t*)((a0) + 4);                                // 0x001d83f8: lhu $v1, 4($a0)
    if (v1 == 0) goto label_0x1d840c;                           // 0x001d83fc: beqz $v1, 0x1d840c
    s2 = v0 & 0xffff;                                           // 0x001d8400: andi $s2, $v0, 0xffff
    func_00192370();  // 0x192350                                // 0x001d8404: jal 0x192350
    a0 = v1 & 0xffff;                                           // 0x001d8408: andi $a0, $v1, 0xffff
label_0x1d840c:
    v1 = local_a0;                                              // 0x001d840c: lw $v1, 0xa0($sp)
    a0 = -1;                                                    // 0x001d8410: addiu $a0, $zero, -1
    *(uint16_t*)(v1) = s2;                                      // 0x001d8414: sh $s2, 0($v1)
    v1 = s2 & 0xffff;                                           // 0x001d8418: andi $v1, $s2, 0xffff
    *(uint32_t*)(s5) = a0;                                      // 0x001d841c: sw $a0, 0($s5)
    *(uint32_t*)((s5) + 4) = v1;                                // 0x001d8420: sw $v1, 4($s5)
label_0x1d8424:
    v1 = s3 + 1;                                                // 0x001d8424: addiu $v1, $s3, 1
    s3 = v1 & 0xffff;                                           // 0x001d8428: andi $s3, $v1, 0xffff
label_0x1d842c:
    s2 = s3 & 0xffff;                                           // 0x001d842c: andi $s2, $s3, 0xffff
    v1 = ((unsigned)s2 < (unsigned)fp) ? 1 : 0;                 // 0x001d8430: sltu $v1, $s2, $fp
    if (v1 != 0) goto label_0x1d837c;                           // 0x001d8434: bnez $v1, 0x1d837c
    v1 = s3 & 0xffff;                                           // 0x001d8438: andi $v1, $s3, 0xffff
    v1 = s4 + 1;                                                // 0x001d843c: addiu $v1, $s4, 1
label_0x1d8440:
    s0 = s0 + 8;                                                // 0x001d8440: addiu $s0, $s0, 8
    s4 = v1 & 0xffff;                                           // 0x001d8444: andi $s4, $v1, 0xffff
label_0x1d8448:
    a0 = s4 & 0xffff;                                           // 0x001d8448: andi $a0, $s4, 0xffff
    v1 = (a0 < 8) ? 1 : 0;                                      // 0x001d844c: slti $v1, $a0, 8
    if (v1 != 0) goto label_0x1d8340;                           // 0x001d8450: bnez $v1, 0x1d8340
    /* nop */                                                   // 0x001d8454: nop 
label_0x1d8458:
    /* FPU: xori.b $w2, $w0, 0xbe */                            // 0x001d845c: xori.b $w2, $w0, 0xbe
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001d8464: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001d8468: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001d846c: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d8474: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d8478: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d847c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d8480: jr $ra
    sp = sp + 0x120;                                            // 0x001d8484: addiu $sp, $sp, 0x120
}