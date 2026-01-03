void func_001292b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001292b8: addiu $sp, $sp, -0x10
    return func_001292b8();  // Tail call                        // 0x001292c4: j 0x129228
    sp = sp + 0x10;                                             // 0x001292c8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001292cc: nop 
    sp = sp + -0x30;                                            // 0x001292d0: addiu $sp, $sp, -0x30
    a0 = 4;                                                     // 0x001292ec: addiu $a0, $zero, 4
    func_001281b8();  // 1281b8                                // 0x00129308: jal 0x1281b8
    if (s0 != 0) goto label_0x129320;                           // 0x00129310: bnez $s0, 0x129320
    a0 = 0x22 << 16;                                            // 0x00129314: lui $a0, 0x22
    goto label_0x129340;                                        // 0x00129318: b 0x129340
    a0 = &str_002227f0;  // "E9040817:'nsct' is negative.(ADXF_ReadNw32)" // 0x0012931c: addiu $a0, $a0, 0x27f0
label_0x129320:
    if (s4 >= 0) goto label_0x129330;                           // 0x00129320: bgez $s4, 0x129330
    a0 = 0x22 << 16;                                            // 0x00129324: lui $a0, 0x22
    goto label_0x129340;                                        // 0x00129328: b 0x129340
    a0 = &str_00222818;  // "E9040818:'buf' is NULL.(ADXF_ReadNw32)" // 0x0012932c: addiu $a0, $a0, 0x2818
label_0x129330:
    /* bnezl $s3, 0x129350 */                                   // 0x00129330: bnezl $s3, 0x129350
    a0 = *(int8_t*)((s0) + 1);                                  // 0x00129334: lb $a0, 1($s0)
    a0 = 0x22 << 16;                                            // 0x00129338: lui $a0, 0x22
    a0 = &str_00222848;  // "E9040821:'sj' must be NULL.(ADXF_ReadNw32)" // 0x0012933c: addiu $a0, $a0, 0x2848
label_0x129340:
    func_00127d90();  // 127d90                                // 0x00129340: jal 0x127d90
    /* nop */                                                   // 0x00129344: nop 
    goto label_0x12943c;                                        // 0x00129348: b 0x12943c
    v0 = -3;                                                    // 0x0012934c: addiu $v0, $zero, -3
    v1 = 2;                                                     // 0x00129350: addiu $v1, $zero, 2
    if (a0 == v1) goto label_0x12943c;                          // 0x00129354: beq $a0, $v1, 0x12943c
    v0 = *(int32_t*)((s0) + 8);                                 // 0x0012935c: lw $v0, 8($s0)
    if (v0 == 0) goto label_0x129378;                           // 0x00129360: beqz $v0, 0x129378
    a0 = 0x22 << 16;                                            // 0x00129364: lui $a0, 0x22
    func_00127d90();  // 127d90                                // 0x00129368: jal 0x127d90
    a0 = &str_00222870;  // "E0120401:'buf' isn't 64byte alignment.(ADXF_ReadNw)" // 0x0012936c: addiu $a0, $a0, 0x2870
    goto label_0x12943c;                                        // 0x00129370: b 0x12943c
    v0 = -1;                                                    // 0x00129374: addiu $v0, $zero, -1
label_0x129378:
    s2 = s4 << 0xb;                                             // 0x00129378: sll $s2, $s4, 0xb
    func_0013f568();  // 13f568                                // 0x00129384: jal 0x13f568
    if (s1 == 0) goto label_0x12943c;                           // 0x00129390: beqz $s1, 0x12943c
    v0 = -2;                                                    // 0x00129394: addiu $v0, $zero, -2
    func_001261a0();  // 1261a0                                // 0x00129398: jal 0x1261a0
    /* nop */                                                   // 0x0012939c: nop 
    *(uint32_t*)((s0) + 0x24) = s3;                             // 0x001293a0: sw $s3, 0x24($s0)
    *(uint32_t*)((s0) + 8) = s1;                                // 0x001293a4: sw $s1, 8($s0)
    a0 = 0x1f << 16;                                            // 0x001293a8: lui $a0, 0x1f
    *(uint32_t*)((s0) + 0x28) = s2;                             // 0x001293ac: sw $s2, 0x28($s0)
    v1 = 1;                                                     // 0x001293b0: addiu $v1, $zero, 1
    v0 = g_001f3700;  // Global at 0x001f3700                   // 0x001293b4: lw $v0, 0x3700($a0)
    if (v0 != v1) goto label_0x1293c8;                          // 0x001293b8: bne $v0, $v1, 0x1293c8
    func_00127fe8();  // 127fe8                                // 0x001293c0: jal 0x127fe8
label_0x1293c8:
    func_001261b8();  // 1261b8                                // 0x001293c8: jal 0x1261b8
    /* nop */                                                   // 0x001293cc: nop 
    a2 = *(int32_t*)((s0) + 8);                                 // 0x001293d4: lw $a2, 8($s0)
    func_00129128();  // 129128                                // 0x001293d8: jal 0x129128
    if (s1 > 0) goto label_0x129420;                            // 0x001293e4: bgtzl $s1, 0x129420
    *(uint8_t*)((s0) + 2) = 0;                                  // 0x001293e8: sb $zero, 2($s0)
    func_001261a0();  // 1261a0                                // 0x001293ec: jal 0x1261a0
    /* nop */                                                   // 0x001293f0: nop 
    a0 = *(int32_t*)((s0) + 8);                                 // 0x001293f4: lw $a0, 8($s0)
    if (a0 == 0) goto label_0x129414;                           // 0x001293f8: beqz $a0, 0x129414
    /* nop */                                                   // 0x001293fc: nop 
    v1 = g_001f0000;  // Global at 0x001f0000                   // 0x00129400: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0xc);                               // 0x00129404: lw $v0, 0xc($v1)
    /* call function at address in v0 */                        // 0x00129408: jalr $v0
    /* nop */                                                   // 0x0012940c: nop 
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x00129410: sw $zero, 8($s0)
label_0x129414:
    func_001261b8();  // 1261b8                                // 0x00129414: jal 0x1261b8
    /* nop */                                                   // 0x00129418: nop 
    *(uint8_t*)((s0) + 2) = 0;                                  // 0x0012941c: sb $zero, 2($s0)
label_0x129420:
    a0 = 4;                                                     // 0x0012942c: addiu $a0, $zero, 4
    func_001281b8();  // 1281b8                                // 0x00129430: jal 0x1281b8
    a1 = 1;                                                     // 0x00129434: addiu $a1, $zero, 1
label_0x12943c:
    return;                                                     // 0x00129454: jr $ra
    sp = sp + 0x30;                                             // 0x00129458: addiu $sp, $sp, 0x30
}