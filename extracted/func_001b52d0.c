void func_001b52d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001b52d0: addiu $sp, $sp, -0x40
    at = 0x31 << 16;                                            // 0x001b52d4: lui $at, 0x31
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b52e0: addu.qb $zero, $sp, $s1
    v0 = g_003137cb;  // Global at 0x003137cb                   // 0x001b52f0: lbu $v0, 0x37cb($at)
    s0 = 0x2b << 16;                                            // 0x001b52f4: lui $s0, 0x2b
    if (v0 != 0) goto label_0x1b5308;                           // 0x001b52f8: bnez $v0, 0x1b5308
    s0 = s0 + -0x3b70;                                          // 0x001b52fc: addiu $s0, $s0, -0x3b70
    goto label_0x1b53dc;                                        // 0x001b5300: b 0x1b53dc
label_0x1b5308:
    g_002ac514 = 0;  // Global at 0x002ac514                    // 0x001b5308: sw $zero, 0x84($s0)
    a0 = *(uint8_t*)(s2);                                       // 0x001b530c: lbu $a0, 0($s2)
    if (a0 == 0) goto label_0x1b53d8;                           // 0x001b5310: beqz $a0, 0x1b53d8
    s2 = s2 + 1;                                                // 0x001b5314: addiu $s2, $s2, 1
    v0 = 0xa;                                                   // 0x001b5318: addiu $v0, $zero, 0xa
    if (a0 == v0) goto label_0x1b5308;                          // 0x001b531c: beq $a0, $v0, 0x1b5308
    v0 = ((unsigned)a0 < (unsigned)0x80) ? 1 : 0;               // 0x001b5320: sltiu $v0, $a0, 0x80
    if (v0 != 0) goto label_0x1b5334;                           // 0x001b5324: bnez $v0, 0x1b5334
    at = ((unsigned)a0 < (unsigned)0xa0) ? 1 : 0;               // 0x001b5328: sltiu $at, $a0, 0xa0
    if (at != 0) goto label_0x1b5348;                           // 0x001b532c: bnez $at, 0x1b5348
    /* nop */                                                   // 0x001b5330: nop 
label_0x1b5334:
    v0 = ((unsigned)a0 < (unsigned)0xe0) ? 1 : 0;               // 0x001b5334: sltiu $v0, $a0, 0xe0
    if (v0 != 0) goto label_0x1b539c;                           // 0x001b5338: bnez $v0, 0x1b539c
    at = ((unsigned)a0 < (unsigned)0x100) ? 1 : 0;              // 0x001b533c: sltiu $at, $a0, 0x100
    if (at == 0) goto label_0x1b539c;                           // 0x001b5340: beqz $at, 0x1b539c
    /* nop */                                                   // 0x001b5344: nop 
label_0x1b5348:
    v1 = *(uint8_t*)(s2);                                       // 0x001b5348: lbu $v1, 0($s2)
    if (v1 == 0) goto label_0x1b53d8;                           // 0x001b534c: beqz $v1, 0x1b53d8
    s2 = s2 + 1;                                                // 0x001b5350: addiu $s2, $s2, 1
    v0 = a0 << 8;                                               // 0x001b5354: sll $v0, $a0, 8
    v0 = v0 | v1;                                               // 0x001b5358: or $v0, $v0, $v1
    v1 = v0 + -0x8000;                                          // 0x001b535c: addiu $v1, $v0, -0x8000
    v1 = v1 + -0x15b;                                           // 0x001b5360: addiu $v1, $v1, -0x15b
    at = ((unsigned)v1 < (unsigned)2) ? 1 : 0;                  // 0x001b5364: sltiu $at, $v1, 2
    if (at != 0) goto label_0x1b5390;                           // 0x001b5368: bnez $at, 0x1b5390
    /* nop */                                                   // 0x001b536c: nop 
    v1 = 0 | 0x8160;                                            // 0x001b5370: ori $v1, $zero, 0x8160
    if (v0 == v1) goto label_0x1b5394;                          // 0x001b5374: beq $v0, $v1, 0x1b5394
    v1 = 1;                                                     // 0x001b5378: addiu $v1, $zero, 1
    v1 = 0 | 0x8175;                                            // 0x001b537c: ori $v1, $zero, 0x8175
    if (v0 == v1) goto label_0x1b5390;                          // 0x001b5380: beq $v0, $v1, 0x1b5390
    v1 = 0 | 0x8176;                                            // 0x001b5384: ori $v1, $zero, 0x8176
    if (v0 != v1) goto label_0x1b53a8;                          // 0x001b5388: bne $v0, $v1, 0x1b53a8
    /* nop */                                                   // 0x001b538c: nop 
label_0x1b5390:
    v1 = 1;                                                     // 0x001b5390: addiu $v1, $zero, 1
label_0x1b5394:
    goto label_0x1b53a8;                                        // 0x001b5394: b 0x1b53a8
    g_002ac514 = v1;  // Global at 0x002ac514                   // 0x001b5398: sw $v1, 0x84($s0)
label_0x1b539c:
    a1 = g_002ac498;  // Global at 0x002ac498                   // 0x001b539c: lw $a1, 8($s0)
    func_001b5e90();  // 0x1b5e60                                // 0x001b53a0: jal 0x1b5e60
    a0 = a0 & 0xff;                                             // 0x001b53a4: andi $a0, $a0, 0xff
label_0x1b53a8:
    a1 = g_002ac498;  // Global at 0x002ac498                   // 0x001b53a8: lw $a1, 8($s0)
    func_001b5e60();  // 0x1b5dd0                                // 0x001b53ac: jal 0x1b5dd0
    v1 = g_002ac4ac;  // Global at 0x002ac4ac                   // 0x001b53b4: lw $v1, 0x1c($s0)
    at = ((unsigned)v0 < (unsigned)v1) ? 1 : 0;                 // 0x001b53b8: sltu $at, $v0, $v1
    if (at == 0) goto label_0x1b5308;                           // 0x001b53bc: beqz $at, 0x1b5308
    func_001b5920();  // 0x1b5730                                // 0x001b53c8: jal 0x1b5730
    goto label_0x1b5308;                                        // 0x001b53d0: b 0x1b5308
label_0x1b53d8:
label_0x1b53dc:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b53e0: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b53e4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b53e8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b53ec: jr $ra
    sp = sp + 0x40;                                             // 0x001b53f0: addiu $sp, $sp, 0x40
}