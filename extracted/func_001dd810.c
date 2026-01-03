void func_001dd810() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001dd810: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001dd818: dpa.w.ph $ac0, $sp, $s3
    s3 = 0x34 << 16;                                            // 0x001dd820: lui $s3, 0x34
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001dd824: addu.qb $zero, $sp, $s1
    s3 = s3 + 0x1c80;                                           // 0x001dd828: addiu $s3, $s3, 0x1c80
    v1 = g_00341c94;  // Global at 0x00341c94                   // 0x001dd830: lw $v1, 0x14($s3)
    if (v1 == 0) goto label_0x1dd980;                           // 0x001dd834: beqz $v1, 0x1dd980
    s1 = 0x34 << 16;                                            // 0x001dd83c: lui $s1, 0x34
    a1 = 0x25 << 16;                                            // 0x001dd840: lui $a1, 0x25
    s1 = s1 + -0x6380;                                          // 0x001dd844: addiu $s1, $s1, -0x6380
    a1 = &str_00249018;  // "efegefehdedf"                      // 0x001dd848: addiu $a1, $a1, -0x6fe8
    s0 = g_00339c88;  // Global at 0x00339c88                   // 0x001dd84c: lw $s0, 8($s1)
    a2 = 8;                                                     // 0x001dd854: addiu $a2, $zero, 8
    func_0010b0e8();  // 10b0e8                                // 0x001dd858: jal 0x10b0e8
    s1 = s1 + 0xc;                                              // 0x001dd85c: addiu $s1, $s1, 0xc
    if (v0 != 0) goto label_0x1dd980;                           // 0x001dd860: bnez $v0, 0x1dd980
    /* nop */                                                   // 0x001dd864: nop 
    if (s0 == 0) goto label_0x1dd8a0;                           // 0x001dd868: beqz $s0, 0x1dd8a0
    a0 = 0x30 << 16;                                            // 0x001dd870: lui $a0, 0x30
    a0 = a0 + 0x7fb0;                                           // 0x001dd878: addiu $a0, $a0, 0x7fb0
    func_0010b0e8();  // 10b0e8                                // 0x001dd87c: jal 0x10b0e8
    a2 = 8;                                                     // 0x001dd880: addiu $a2, $zero, 8
    if (v0 >= 0) goto label_0x1dd89c;                           // 0x001dd884: bgez $v0, 0x1dd89c
    a0 = 0x30 << 16;                                            // 0x001dd888: lui $a0, 0x30
    a0 = a0 + 0x7fb0;                                           // 0x001dd890: addiu $a0, $a0, 0x7fb0
    func_0010b2a0();  // 10b2a0                                // 0x001dd894: jal 0x10b2a0
    a2 = 8;                                                     // 0x001dd898: addiu $a2, $zero, 8
label_0x1dd89c:
label_0x1dd8a0:
    goto label_0x1dd96c;                                        // 0x001dd8a0: b 0x1dd96c
    a0 = 0x8000 << 16;                                          // 0x001dd8a4: lui $a0, 0x8000
label_0x1dd8a8:
    v0 = g_00339c8c;  // Global at 0x00339c8c                   // 0x001dd8a8: lw $v0, 0($s1)
    a3 = g_00339c90;  // Global at 0x00339c90                   // 0x001dd8ac: lw $a3, 4($s1)
    a1 = g_00339c94;  // Global at 0x00339c94                   // 0x001dd8b0: lw $a1, 8($s1)
    if (s2 != v0) goto label_0x1dd938;                          // 0x001dd8b4: bne $s2, $v0, 0x1dd938
    s1 = s1 + 0xc;                                              // 0x001dd8b8: addiu $s1, $s1, 0xc
    v0 = a1 & a0;                                               // 0x001dd8bc: and $v0, $a1, $a0
    if (v0 == 0) goto label_0x1dd908;                           // 0x001dd8c0: beqz $v0, 0x1dd908
    t0 = g_00339c98;  // Global at 0x00339c98                   // 0x001dd8c8: lw $t0, 0($s1)
    goto label_0x1dd8f4;                                        // 0x001dd8d8: b 0x1dd8f4
    s1 = s1 + 4;                                                // 0x001dd8dc: addiu $s1, $s1, 4
label_0x1dd8e0:
    v0 = *(uint8_t*)(t0);                                       // 0x001dd8e0: lbu $v0, 0($t0)
    a1 = a1 + 1;                                                // 0x001dd8e4: addiu $a1, $a1, 1
    *(uint8_t*)(a3) = v0;                                       // 0x001dd8e8: sb $v0, 0($a3)
    t0 = t0 + 1;                                                // 0x001dd8ec: addiu $t0, $t0, 1
    a3 = a3 + 1;                                                // 0x001dd8f0: addiu $a3, $a3, 1
label_0x1dd8f4:
    v0 = (a1 < v1) ? 1 : 0;                                     // 0x001dd8f4: slt $v0, $a1, $v1
    if (v0 != 0) goto label_0x1dd8e0;                           // 0x001dd8f8: bnez $v0, 0x1dd8e0
    /* nop */                                                   // 0x001dd8fc: nop 
    goto label_0x1dd954;                                        // 0x001dd900: b 0x1dd954
    v1 = s1 + 3;                                                // 0x001dd904: addiu $v1, $s1, 3
label_0x1dd908:
    goto label_0x1dd928;                                        // 0x001dd908: b 0x1dd928
    v0 = (v1 < a1) ? 1 : 0;                                     // 0x001dd90c: slt $v0, $v1, $a1
label_0x1dd910:
    v0 = g_00339c9c;  // Global at 0x00339c9c                   // 0x001dd910: lbu $v0, 0($s1)
    v1 = v1 + 1;                                                // 0x001dd914: addiu $v1, $v1, 1
    *(uint8_t*)(a3) = v0;                                       // 0x001dd918: sb $v0, 0($a3)
    s1 = s1 + 1;                                                // 0x001dd91c: addiu $s1, $s1, 1
    a3 = a3 + 1;                                                // 0x001dd920: addiu $a3, $a3, 1
    v0 = (v1 < a1) ? 1 : 0;                                     // 0x001dd924: slt $v0, $v1, $a1
label_0x1dd928:
    if (v0 != 0) goto label_0x1dd910;                           // 0x001dd928: bnez $v0, 0x1dd910
    /* nop */                                                   // 0x001dd92c: nop 
    goto label_0x1dd950;                                        // 0x001dd930: b 0x1dd950
    /* nop */                                                   // 0x001dd934: nop 
label_0x1dd938:
    v0 = a1 & a0;                                               // 0x001dd938: and $v0, $a1, $a0
    if (v0 == 0) goto label_0x1dd94c;                           // 0x001dd93c: beqz $v0, 0x1dd94c
    /* nop */                                                   // 0x001dd940: nop 
    goto label_0x1dd950;                                        // 0x001dd944: b 0x1dd950
    s1 = s1 + 4;                                                // 0x001dd948: addiu $s1, $s1, 4
label_0x1dd94c:
    s1 = s1 + a1;                                               // 0x001dd94c: addu $s1, $s1, $a1
label_0x1dd950:
    v1 = s1 + 3;                                                // 0x001dd950: addiu $v1, $s1, 3
label_0x1dd954:
    if (v1 >= 0) goto label_0x1dd964;                           // 0x001dd954: bgez $v1, 0x1dd964
    v0 = v1 >> 2;                                               // 0x001dd958: sra $v0, $v1, 2
    v0 = v1 + 3;                                                // 0x001dd95c: addiu $v0, $v1, 3
    v0 = v0 >> 2;                                               // 0x001dd960: sra $v0, $v0, 2
label_0x1dd964:
    s1 = v0 << 2;                                               // 0x001dd964: sll $s1, $v0, 2
    a2 = a2 + 1;                                                // 0x001dd968: addiu $a2, $a2, 1
label_0x1dd96c:
    v0 = (a2 < s0) ? 1 : 0;                                     // 0x001dd96c: slt $v0, $a2, $s0
    if (v0 != 0) goto label_0x1dd8a8;                           // 0x001dd970: bnez $v0, 0x1dd8a8
    /* nop */                                                   // 0x001dd974: nop 
    iFlushCache();  // 0x114560                                 // 0x001dd978: jal 0x114560
label_0x1dd980:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001dd988: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001dd98c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001dd990: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001dd994: jr $ra
    sp = sp + 0x50;                                             // 0x001dd998: addiu $sp, $sp, 0x50
}