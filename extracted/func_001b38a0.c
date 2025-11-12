void func_001b38a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001b38a0: addiu $sp, $sp, -0x40
    at = 0x49 << 16;                                            // 0x001b38a4: lui $at, 0x49
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b38b0: addu.qb $zero, $sp, $s1
    v1 = g_00491364;  // Global at 0x00491364                   // 0x001b38b8: lbu $v1, 0x1364($at)
    if (v1 != 0) goto label_0x1b3a24;                           // 0x001b38bc: bnez $v1, 0x1b3a24
    at = 0x31 << 16;                                            // 0x001b38c0: lui $at, 0x31
    v0 = g_003137a0;  // Global at 0x003137a0                   // 0x001b38c4: lbu $v0, 0x37a0($at)
    if (v0 == 0) goto label_0x1b38d8;                           // 0x001b38c8: beqz $v0, 0x1b38d8
    v0 = 1;                                                     // 0x001b38cc: addiu $v0, $zero, 1
    at = 0x49 << 16;                                            // 0x001b38d0: lui $at, 0x49
    g_0049135c = v0;  // Global at 0x0049135c                   // 0x001b38d4: sb $v0, 0x135c($at)
label_0x1b38d8:
    at = 0x31 << 16;                                            // 0x001b38d8: lui $at, 0x31
    v0 = g_003137cb;  // Global at 0x003137cb                   // 0x001b38dc: lbu $v0, 0x37cb($at)
    if (v0 != 0) goto label_0x1b3904;                           // 0x001b38e0: bnez $v0, 0x1b3904
    a0 = 2;                                                     // 0x001b38e4: addiu $a0, $zero, 2
    func_001b4570();  // 0x1b4550                                // 0x001b38e8: jal 0x1b4550
    /* nop */                                                   // 0x001b38ec: nop 
    a0 = 0x1b << 16;                                            // 0x001b38f0: lui $a0, 0x1b
    func_001af3a0();  // 0x1af2f0                                // 0x001b38f4: jal 0x1af2f0
    a0 = a0 + 0x3fa0;                                           // 0x001b38f8: addiu $a0, $a0, 0x3fa0
    goto label_0x1b3a28;                                        // 0x001b38fc: b 0x1b3a28
label_0x1b3904:
    func_001a9030();  // 0x1a8fc0                                // 0x001b3904: jal 0x1a8fc0
    s2 = 0x30 << 16;                                            // 0x001b390c: lui $s2, 0x30
    s2 = s2 + 0x6c10;                                           // 0x001b3914: addiu $s2, $s2, 0x6c10
label_0x1b391c:
    v1 = g_00306c10;  // Global at 0x00306c10                   // 0x001b391c: lh $v1, 0($s2)
    if (v1 == 0) goto label_0x1b3a14;                           // 0x001b3920: beqz $v1, 0x1b3a14
    /* nop */                                                   // 0x001b3924: nop 
    v1 = g_00306c16;  // Global at 0x00306c16                   // 0x001b3928: lh $v1, 6($s2)
    v1 = v1 + -1;                                               // 0x001b392c: addiu $v1, $v1, -1
    g_00306c16 = v1;  // Global at 0x00306c16                   // 0x001b3930: sh $v1, 6($s2)
    v1 = g_00306c16;  // Global at 0x00306c16                   // 0x001b3934: lh $v1, 6($s2)
    if (v1 != 0) goto label_0x1b3948;                           // 0x001b3938: bnez $v1, 0x1b3948
    /* nop */                                                   // 0x001b393c: nop 
    goto label_0x1b3a14;                                        // 0x001b3940: b 0x1b3a14
    g_00306c10 = 0;  // Global at 0x00306c10                    // 0x001b3944: sh $zero, 0($s2)
label_0x1b3948:
    if (s0 == 0) goto label_0x1b3978;                           // 0x001b3948: beqz $s0, 0x1b3978
    at = 0x31 << 16;                                            // 0x001b394c: lui $at, 0x31
    v1 = g_003137a0;  // Global at 0x003137a0                   // 0x001b3950: lbu $v1, 0x37a0($at)
    if (v1 == 0) goto label_0x1b3978;                           // 0x001b3954: beqz $v1, 0x1b3978
    /* nop */                                                   // 0x001b3958: nop 
    v1 = g_00306c1b;  // Global at 0x00306c1b                   // 0x001b395c: lbu $v1, 0xb($s2)
    if (v1 != 0) goto label_0x1b3978;                           // 0x001b3960: bnez $v1, 0x1b3978
    /* nop */                                                   // 0x001b3964: nop 
    func_006be350();  // 0x6be350                               // 0x001b3968: jal 0x6be350
    /* nop */                                                   // 0x001b396c: nop 
    at = 0x49 << 16;                                            // 0x001b3970: lui $at, 0x49
    g_0049135c = 0;  // Global at 0x0049135c                    // 0x001b3974: sb $zero, 0x135c($at)
label_0x1b3978:
    a0 = g_00306c19;  // Global at 0x00306c19                   // 0x001b3978: lb $a0, 9($s2)
    v1 = 2;                                                     // 0x001b397c: addiu $v1, $zero, 2
    if (a0 == v1) goto label_0x1b39e4;                          // 0x001b3980: beq $a0, $v1, 0x1b39e4
    v1 = 1;                                                     // 0x001b3984: addiu $v1, $zero, 1
    if (a0 == v1) goto label_0x1b39a0;                          // 0x001b3988: beq $a0, $v1, 0x1b39a0
    /* nop */                                                   // 0x001b398c: nop 
    if (a0 == 0) goto label_0x1b3a14;                           // 0x001b3990: beqz $a0, 0x1b3a14
    /* nop */                                                   // 0x001b3994: nop 
    goto label_0x1b3a18;                                        // 0x001b3998: b 0x1b3a18
    s1 = s1 + 1;                                                // 0x001b399c: addiu $s1, $s1, 1
label_0x1b39a0:
    v1 = g_00306c1a;  // Global at 0x00306c1a                   // 0x001b39a0: lbu $v1, 0xa($s2)
    at = (v1 < 0x64) ? 1 : 0;                                   // 0x001b39a4: slti $at, $v1, 0x64
    if (at == 0) goto label_0x1b39bc;                           // 0x001b39a8: beqz $at, 0x1b39bc
    /* nop */                                                   // 0x001b39ac: nop 
    v1 = v1 + 5;                                                // 0x001b39b0: addiu $v1, $v1, 5
    goto label_0x1b39c4;                                        // 0x001b39b4: b 0x1b39c4
    g_00306c1a = v1;  // Global at 0x00306c1a                   // 0x001b39b8: sb $v1, 0xa($s2)
label_0x1b39bc:
    v1 = v1 + 3;                                                // 0x001b39bc: addiu $v1, $v1, 3
    g_00306c1a = v1;  // Global at 0x00306c1a                   // 0x001b39c0: sb $v1, 0xa($s2)
label_0x1b39c4:
    v1 = g_00306c1a;  // Global at 0x00306c1a                   // 0x001b39c4: lbu $v1, 0xa($s2)
    v1 = (v1 < 0x80) ? 1 : 0;                                   // 0x001b39c8: slti $v1, $v1, 0x80
    if (v1 != 0) goto label_0x1b3a14;                           // 0x001b39cc: bnez $v1, 0x1b3a14
    a0 = 0x80;                                                  // 0x001b39d0: addiu $a0, $zero, 0x80
    v1 = 2;                                                     // 0x001b39d4: addiu $v1, $zero, 2
    g_00306c1a = a0;  // Global at 0x00306c1a                   // 0x001b39d8: sb $a0, 0xa($s2)
    goto label_0x1b3a14;                                        // 0x001b39dc: b 0x1b3a14
    g_00306c19 = v1;  // Global at 0x00306c19                   // 0x001b39e0: sb $v1, 9($s2)
label_0x1b39e4:
    v1 = g_00306c16;  // Global at 0x00306c16                   // 0x001b39e4: lh $v1, 6($s2)
    at = (v1 < 0x1f) ? 1 : 0;                                   // 0x001b39e8: slti $at, $v1, 0x1f
    if (at == 0) goto label_0x1b3a14;                           // 0x001b39ec: beqz $at, 0x1b3a14
    /* nop */                                                   // 0x001b39f0: nop 
    v1 = g_00306c1a;  // Global at 0x00306c1a                   // 0x001b39f4: lbu $v1, 0xa($s2)
    if (v1 == 0) goto label_0x1b3a14;                           // 0x001b39f8: beqz $v1, 0x1b3a14
    /* nop */                                                   // 0x001b39fc: nop 
    v1 = v1 + -4;                                               // 0x001b3a00: addiu $v1, $v1, -4
    if (v1 >= 0) goto label_0x1b3a10;                           // 0x001b3a04: bgez $v1, 0x1b3a10
    /* nop */                                                   // 0x001b3a08: nop 
label_0x1b3a10:
    g_00306c1a = v1;  // Global at 0x00306c1a                   // 0x001b3a10: sb $v1, 0xa($s2)
label_0x1b3a14:
    s1 = s1 + 1;                                                // 0x001b3a14: addiu $s1, $s1, 1
label_0x1b3a18:
    v1 = (s1 < 0x20) ? 1 : 0;                                   // 0x001b3a18: slti $v1, $s1, 0x20
    if (v1 != 0) goto label_0x1b391c;                           // 0x001b3a1c: bnez $v1, 0x1b391c
    s2 = s2 + 0x8c;                                             // 0x001b3a20: addiu $s2, $s2, 0x8c
label_0x1b3a24:
label_0x1b3a28:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b3a28: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b3a2c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b3a30: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b3a34: jr $ra
    sp = sp + 0x40;                                             // 0x001b3a38: addiu $sp, $sp, 0x40
}