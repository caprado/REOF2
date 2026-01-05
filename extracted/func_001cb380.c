void func_001cb380() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_50, local_52, local_54, local_58, local_5a, local_5b;
    
    sp = sp + -0x150;                                           // 0x001cb380: addiu $sp, $sp, -0x150
    v0 = a2 & 0xff;                                             // 0x001cb384: andi $v0, $a2, 0xff
    v0 = v0 & 0x80;                                             // 0x001cb38c: andi $v0, $v0, 0x80
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001cb390: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001cb398: addu.qb $zero, $sp, $s1
    if (v0 == 0) goto label_0x1cb3b0;                           // 0x001cb3a0: beqz $v0, 0x1cb3b0
    goto label_0x1cb3b4;                                        // 0x001cb3a8: b 0x1cb3b4
    s0 = a0 + 0x18;                                             // 0x001cb3ac: addiu $s0, $a0, 0x18
label_0x1cb3b0:
    s0 = a0 + 8;                                                // 0x001cb3b0: addiu $s0, $a0, 8
label_0x1cb3b4:
    func_001cb2f0();  // 1cb2f0                                // 0x001cb3b4: jal 0x1cb2f0
    if (v0 != 0) goto label_0x1cb3cc;                           // 0x001cb3bc: bnez $v0, 0x1cb3cc
    goto label_0x1cb4e8;                                        // 0x001cb3c4: b 0x1cb4e8
label_0x1cb3cc:
    func_001cb330();  // 1cb330                                // 0x001cb3cc: jal 0x1cb330
    /* nop */                                                   // 0x001cb3d0: nop 
    if (s1 != 0) goto label_0x1cb3e8;                           // 0x001cb3d8: bnez $s1, 0x1cb3e8
    /* nop */                                                   // 0x001cb3dc: nop 
    goto label_0x1cb4e8;                                        // 0x001cb3e0: b 0x1cb4e8
label_0x1cb3e8:
    v0 = *(uint8_t*)((s0) + 8);                                 // 0x001cb3e8: lbu $v0, 8($s0)
    if (v0 != 0) goto label_0x1cb400;                           // 0x001cb3ec: bnez $v0, 0x1cb400
    /* nop */                                                   // 0x001cb3f0: nop 
    *(uint32_t*)(s1) = 0;                                       // 0x001cb3f4: sw $zero, 0($s1)
    goto label_0x1cb410;                                        // 0x001cb3f8: b 0x1cb410
    *(uint32_t*)(s0) = s1;                                      // 0x001cb3fc: sw $s1, 0($s0)
label_0x1cb400:
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001cb400: lw $v0, 4($s0)
    *(uint32_t*)(s1) = v0;                                      // 0x001cb404: sw $v0, 0($s1)
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001cb408: lw $v0, 4($s0)
    *(uint32_t*)((v0) + 4) = s1;                                // 0x001cb40c: sw $s1, 4($v0)
label_0x1cb410:
    *(uint32_t*)((s0) + 4) = s1;                                // 0x001cb410: sw $s1, 4($s0)
    func_001cff40();  // 1cff40                                // 0x001cb418: jal 0x1cff40
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x001cb41c: sw $zero, 4($s1)
    local_50 = v0;                                              // 0x001cb420: sh $v0, 0x50($sp)
    func_001cfeb0();  // 1cfeb0                                // 0x001cb424: jal 0x1cfeb0
    local_52 = v0;                                              // 0x001cb42c: sb $v0, 0x52($sp)
    func_001cfeb0();  // 1cfeb0                                // 0x001cb434: jal 0x1cfeb0
    s3 = sp + 0x53;                                             // 0x001cb438: addiu $s3, $sp, 0x53
    *(uint8_t*)(s3) = v0;                                       // 0x001cb43c: sb $v0, 0($s3)
    func_001cfee0();  // 1cfee0                                // 0x001cb440: jal 0x1cfee0
    local_54 = v0;                                              // 0x001cb448: sw $v0, 0x54($sp)
    func_001cff40();  // 1cff40                                // 0x001cb44c: jal 0x1cff40
    local_58 = v0;                                              // 0x001cb454: sh $v0, 0x58($sp)
    func_001cfeb0();  // 1cfeb0                                // 0x001cb458: jal 0x1cfeb0
    v0 = v0 & 0xff;                                             // 0x001cb460: andi $v0, $v0, 0xff
    v0 = v0 | 0x7f;                                             // 0x001cb468: ori $v0, $v0, 0x7f
    func_001cfeb0();  // 1cfeb0                                // 0x001cb46c: jal 0x1cfeb0
    local_5a = v0;                                              // 0x001cb470: sb $v0, 0x5a($sp)
    local_5b = v0;                                              // 0x001cb474: sb $v0, 0x5b($sp)
    v0 = *(uint8_t*)(s3);                                       // 0x001cb478: lbu $v0, 0($s3)
    if (v0 >= 0) goto label_0x1cb490;                           // 0x001cb47c: bgez $v0, 0x1cb490
    a0 = v0 & 3;                                                // 0x001cb480: andi $a0, $v0, 3
    if (a0 == 0) goto label_0x1cb490;                           // 0x001cb484: beqz $a0, 0x1cb490
    /* nop */                                                   // 0x001cb488: nop 
    a0 = a0 + -4;                                               // 0x001cb48c: addiu $a0, $a0, -4
label_0x1cb490:
    if (a0 == 0) goto label_0x1cb4a8;                           // 0x001cb490: beqz $a0, 0x1cb4a8
    /* nop */                                                   // 0x001cb494: nop 
    v1 = *(uint8_t*)(s3);                                       // 0x001cb498: lbu $v1, 0($s3)
    v0 = 4;                                                     // 0x001cb49c: addiu $v0, $zero, 4
    v0 = v0 - a0;                                               // 0x001cb4a0: subu $v0, $v0, $a0
    v0 = v1 + v0;                                               // 0x001cb4a4: addu $v0, $v1, $v0
label_0x1cb4a8:
    a2 = v0 + -0xc;                                             // 0x001cb4a8: addiu $a2, $v0, -0xc
    func_001cfdf0();  // 1cfdf0                                // 0x001cb4b0: jal 0x1cfdf0
    a1 = sp + 0x5c;                                             // 0x001cb4b4: addiu $a1, $sp, 0x5c
    a2 = *(uint8_t*)((s0) + 0xa);                               // 0x001cb4b8: lbu $a2, 0xa($s0)
    a0 = s1 + 8;                                                // 0x001cb4bc: addiu $a0, $s1, 8
    func_00107ab8();  // 107ab8                                // 0x001cb4c0: jal 0x107ab8
    a1 = sp + 0x54;                                             // 0x001cb4c4: addiu $a1, $sp, 0x54
    v1 = *(uint8_t*)((s1) + 0xf);                               // 0x001cb4c8: lbu $v1, 0xf($s1)
    v0 = 1;                                                     // 0x001cb4cc: addiu $v0, $zero, 1
    v1 = v1 | 0x20;                                             // 0x001cb4d0: ori $v1, $v1, 0x20
    *(uint8_t*)((s1) + 0xf) = v1;                               // 0x001cb4d4: sb $v1, 0xf($s1)
    v1 = *(uint8_t*)((s0) + 8);                                 // 0x001cb4d8: lbu $v1, 8($s0)
    v1 = v1 + 1;                                                // 0x001cb4dc: addiu $v1, $v1, 1
    *(uint8_t*)((s0) + 8) = v1;                                 // 0x001cb4e0: sb $v1, 8($s0)
    *(uint8_t*)((s0) + 0xb) = v0;                               // 0x001cb4e4: sb $v0, 0xb($s0)
label_0x1cb4e8:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001cb4f0: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001cb4f4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cb4f8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cb4fc: jr $ra
    sp = sp + 0x150;                                            // 0x001cb500: addiu $sp, $sp, 0x150
}