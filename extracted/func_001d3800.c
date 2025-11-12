void func_001d3800() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001d3800: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d3810: addu.qb $zero, $sp, $s1
    at = (s1 < 3) ? 1 : 0;                                      // 0x001d381c: slti $at, $s1, 3
    if (at == 0) goto label_0x1d3864;                           // 0x001d3820: beqz $at, 0x1d3864
    v0 = -1;                                                    // 0x001d3828: addiu $v0, $zero, -1
    if (s2 != v0) goto label_0x1d384c;                          // 0x001d382c: bne $s2, $v0, 0x1d384c
    s2 = *(int32_t*)((gp) + -0x7ae4);                           // 0x001d3834: lw $s2, -0x7ae4($gp)
    if (s2 != v0) goto label_0x1d3848;                          // 0x001d3838: bne $s2, $v0, 0x1d3848
    /* nop */                                                   // 0x001d383c: nop 
    goto label_0x1d3a10;                                        // 0x001d3840: b 0x1d3a10
label_0x1d3848:
label_0x1d384c:
    func_001d3600();  // 0x1d35a0                                // 0x001d384c: jal 0x1d35a0
    /* nop */                                                   // 0x001d3850: nop 
    if (v0 == 0) goto label_0x1d3864;                           // 0x001d3854: beqz $v0, 0x1d3864
    goto label_0x1d3a10;                                        // 0x001d385c: b 0x1d3a10
    v0 = *(int32_t*)(s0);                                       // 0x001d3860: lw $v0, 0($s0)
label_0x1d3864:
    v1 = s1 & 0xffff;                                           // 0x001d3864: andi $v1, $s1, 0xffff
    v0 = 4;                                                     // 0x001d3868: addiu $v0, $zero, 4
    if (v1 == v0) goto label_0x1d39a8;                          // 0x001d386c: beq $v1, $v0, 0x1d39a8
    v0 = 3;                                                     // 0x001d3870: addiu $v0, $zero, 3
    if (v1 == v0) goto label_0x1d395c;                          // 0x001d3874: beq $v1, $v0, 0x1d395c
    /* nop */                                                   // 0x001d3878: nop 
    v0 = 2;                                                     // 0x001d387c: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1d394c;                          // 0x001d3880: beq $v1, $v0, 0x1d394c
    v0 = 1;                                                     // 0x001d3888: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1d38d4;                          // 0x001d388c: beq $v1, $v0, 0x1d38d4
    v0 = 1 << 16;                                               // 0x001d3890: lui $v0, 1
    if (v1 == 0) goto label_0x1d38a4;                           // 0x001d3894: beqz $v1, 0x1d38a4
    /* nop */                                                   // 0x001d3898: nop 
    goto label_0x1d39ec;                                        // 0x001d389c: b 0x1d39ec
    /* nop */                                                   // 0x001d38a0: nop 
label_0x1d38a4:
    a1 = *(int32_t*)((gp) + -0x6234);                           // 0x001d38a4: lw $a1, -0x6234($gp)
    func_001d33e0();  // 0x1d3390                                // 0x001d38b0: jal 0x1d3390
    if (v0 <= 0) goto label_0x1d39ec;                           // 0x001d38b8: blez $v0, 0x1d39ec
    /* nop */                                                   // 0x001d38bc: nop 
    a1 = *(int32_t*)((gp) + -0x6234);                           // 0x001d38c0: lw $a1, -0x6234($gp)
    func_001d36b0();  // 0x1d3600                                // 0x001d38c4: jal 0x1d3600
    goto label_0x1d39ec;                                        // 0x001d38cc: b 0x1d39ec
label_0x1d38d4:
    v0 = s1 & v0;                                               // 0x001d38d4: and $v0, $s1, $v0
    if (v0 == 0) goto label_0x1d391c;                           // 0x001d38d8: beqz $v0, 0x1d391c
    /* nop */                                                   // 0x001d38dc: nop 
    v0 = *(int32_t*)((gp) + -0x6234);                           // 0x001d38e0: lw $v0, -0x6234($gp)
    at = 0x10 << 16;                                            // 0x001d38e8: lui $at, 0x10
    func_001d33e0();  // 0x1d3390                                // 0x001d38f4: jal 0x1d3390
    a1 = v0 + at;                                               // 0x001d38f8: addu $a1, $v0, $at
    if (v0 <= 0) goto label_0x1d39ec;                           // 0x001d38fc: blez $v0, 0x1d39ec
    /* nop */                                                   // 0x001d3900: nop 
    a1 = *(int32_t*)((gp) + -0x6234);                           // 0x001d3904: lw $a1, -0x6234($gp)
    at = 0x10 << 16;                                            // 0x001d3908: lui $at, 0x10
    func_001aeef0();  // 0x1aee20                                // 0x001d390c: jal 0x1aee20
    a0 = a1 + at;                                               // 0x001d3910: addu $a0, $a1, $at
    goto label_0x1d393c;                                        // 0x001d3914: b 0x1d393c
    a1 = *(int32_t*)((gp) + -0x6234);                           // 0x001d3918: lw $a1, -0x6234($gp)
label_0x1d391c:
    a1 = *(int32_t*)((gp) + -0x6234);                           // 0x001d391c: lw $a1, -0x6234($gp)
    func_001d33e0();  // 0x1d3390                                // 0x001d3928: jal 0x1d3390
    if (v0 <= 0) goto label_0x1d39ec;                           // 0x001d3930: blez $v0, 0x1d39ec
    /* nop */                                                   // 0x001d3934: nop 
    a1 = *(int32_t*)((gp) + -0x6234);                           // 0x001d3938: lw $a1, -0x6234($gp)
label_0x1d393c:
    func_001d36b0();  // 0x1d3600                                // 0x001d393c: jal 0x1d3600
    goto label_0x1d39ec;                                        // 0x001d3944: b 0x1d39ec
label_0x1d394c:
    func_001d36b0();  // 0x1d3600                                // 0x001d394c: jal 0x1d3600
    goto label_0x1d39ec;                                        // 0x001d3954: b 0x1d39ec
label_0x1d395c:
    a1 = *(int32_t*)((gp) + -0x6234);                           // 0x001d395c: lw $a1, -0x6234($gp)
    func_001d33e0();  // 0x1d3390                                // 0x001d396c: jal 0x1d3390
    if (v0 <= 0) goto label_0x1d39ec;                           // 0x001d3974: blez $v0, 0x1d39ec
    /* nop */                                                   // 0x001d3978: nop 
    v0 = *(int32_t*)((gp) + -0x6234);                           // 0x001d397c: lw $v0, -0x6234($gp)
    a0 = g_00010008;  // Global at 0x00010008                   // 0x001d3980: lw $a0, 8($v0)
    func_001d3600();  // 0x1d35a0                                // 0x001d3984: jal 0x1d35a0
    a2 = v0 + 8;                                                // 0x001d3988: addiu $a2, $v0, 8
    if (v0 != 0) goto label_0x1d39ec;                           // 0x001d398c: bnez $v0, 0x1d39ec
    a1 = *(int32_t*)((gp) + -0x6234);                           // 0x001d3994: lw $a1, -0x6234($gp)
    func_001d36b0();  // 0x1d3600                                // 0x001d3998: jal 0x1d3600
    a0 = g_00010008;  // Global at 0x00010008                   // 0x001d399c: lw $a0, 0($a2)
    goto label_0x1d39ec;                                        // 0x001d39a0: b 0x1d39ec
label_0x1d39a8:
    a1 = *(int32_t*)((gp) + -0x6234);                           // 0x001d39a8: lw $a1, -0x6234($gp)
    func_001d33e0();  // 0x1d3390                                // 0x001d39b4: jal 0x1d3390
    if (v0 <= 0) goto label_0x1d39ec;                           // 0x001d39bc: blez $v0, 0x1d39ec
    /* nop */                                                   // 0x001d39c0: nop 
    v0 = *(int32_t*)((gp) + -0x6234);                           // 0x001d39c4: lw $v0, -0x6234($gp)
    a0 = g_00010008;  // Global at 0x00010008                   // 0x001d39c8: lw $a0, 8($v0)
    func_001d3600();  // 0x1d35a0                                // 0x001d39cc: jal 0x1d35a0
    a2 = v0 + 8;                                                // 0x001d39d0: addiu $a2, $v0, 8
    if (v0 != 0) goto label_0x1d39ec;                           // 0x001d39d4: bnez $v0, 0x1d39ec
    a1 = *(int32_t*)((gp) + -0x6234);                           // 0x001d39dc: lw $a1, -0x6234($gp)
    func_001d36b0();  // 0x1d3600                                // 0x001d39e0: jal 0x1d3600
    a0 = g_00010008;  // Global at 0x00010008                   // 0x001d39e4: lw $a0, 0($a2)
label_0x1d39ec:
    if (s0 != 0) goto label_0x1d39fc;                           // 0x001d39ec: bnez $s0, 0x1d39fc
    at = (s1 < 3) ? 1 : 0;                                      // 0x001d39f0: slti $at, $s1, 3
    goto label_0x1d3a10;                                        // 0x001d39f4: b 0x1d3a10
label_0x1d39fc:
    if (at != 0) goto label_0x1d3a0c;                           // 0x001d39fc: bnez $at, 0x1d3a0c
    /* nop */                                                   // 0x001d3a00: nop 
    goto label_0x1d3a10;                                        // 0x001d3a04: b 0x1d3a10
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001d3a08: lw $v0, 4($s0)
label_0x1d3a0c:
    v0 = *(int32_t*)(s0);                                       // 0x001d3a0c: lw $v0, 0($s0)
label_0x1d3a10:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d3a14: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d3a18: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d3a1c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d3a20: jr $ra
    sp = sp + 0x40;                                             // 0x001d3a24: addiu $sp, $sp, 0x40
}