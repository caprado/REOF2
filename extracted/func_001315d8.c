void func_001315d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001315d8: addiu $sp, $sp, -0x30
    if (s1 != 0) goto label_0x131620;                           // 0x001315f0: bnez $s1, 0x131620
    a0 = 0x22 << 16;                                            // 0x001315f8: lui $a0, 0x22
    a0 = &str_00223750;  // "E02080812 ADXT_StartSj: parameter error" // 0x00131604: addiu $a0, $a0, 0x3750
    return func_00127de8();  // Tail call                        // 0x00131614: j 0x127d90
    sp = sp + 0x30;                                             // 0x00131618: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x0013161c: nop 
label_0x131620:
    func_00131588();  // 131588                                // 0x00131620: jal 0x131588
    /* nop */                                                   // 0x00131624: nop 
    func_001315b0();  // 1315b0                                // 0x00131628: jal 0x1315b0
    v1 = *(int8_t*)(s1);                                        // 0x00131630: lb $v1, 0($s1)
    v0 = 1;                                                     // 0x00131634: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x13164c;                          // 0x00131638: bnel $v1, $v0, 0x13164c
    a0 = *(int32_t*)((s1) + 0xc);                               // 0x0013163c: lw $a0, 0xc($s1)
    func_00131af8();  // 131af8                                // 0x00131640: jal 0x131af8
    a0 = *(int32_t*)((s1) + 0xc);                               // 0x00131648: lw $a0, 0xc($s1)
label_0x13164c:
    /* beqzl $a0, 0x131660 */                                   // 0x0013164c: beqzl $a0, 0x131660
    a0 = *(int32_t*)((s1) + 4);                                 // 0x00131650: lw $a0, 4($s1)
    func_0012c340();  // 12c340                                // 0x00131654: jal 0x12c340
    *(uint32_t*)((s1) + 0xc) = 0;                               // 0x00131658: sw $zero, 0xc($s1)
    a0 = *(int32_t*)((s1) + 4);                                 // 0x0013165c: lw $a0, 4($s1)
    /* beqzl $a0, 0x131674 */                                   // 0x00131660: beqzl $a0, 0x131674
    s0 = *(int32_t*)((s1) + 8);                                 // 0x00131664: lw $s0, 8($s1)
    func_0012c818();  // 12c818                                // 0x00131668: jal 0x12c818
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x0013166c: sw $zero, 4($s1)
    s0 = *(int32_t*)((s1) + 8);                                 // 0x00131670: lw $s0, 8($s1)
    if (s0 == 0) goto label_0x131694;                           // 0x00131674: beqz $s0, 0x131694
    *(uint32_t*)((s1) + 8) = 0;                                 // 0x0013167c: sw $zero, 8($s1)
    func_00130458();  // 130458                                // 0x00131684: jal 0x130458
    func_001300e0();  // 1300e0                                // 0x0013168c: jal 0x1300e0
label_0x131694:
    a0 = *(int32_t*)((s1) + 0x94);                              // 0x00131694: lw $a0, 0x94($s1)
    if (a0 == 0) goto label_0x1316a8;                           // 0x00131698: beqz $a0, 0x1316a8
    /* nop */                                                   // 0x0013169c: nop 
    func_0013c978();  // 13c978                                // 0x001316a0: jal 0x13c978
    *(uint32_t*)((s1) + 0x94) = 0;                              // 0x001316a4: sw $zero, 0x94($s1)
label_0x1316a8:
    func_001261a0();  // 1261a0                                // 0x001316a8: jal 0x1261a0
    /* nop */                                                   // 0x001316ac: nop 
    a0 = *(int32_t*)((s1) + 0x10);                              // 0x001316b0: lw $a0, 0x10($s1)
    /* beqzl $a0, 0x1316d4 */                                   // 0x001316b4: beqzl $a0, 0x1316d4
    v0 = *(int8_t*)((s1) + 3);                                  // 0x001316b8: lb $v0, 3($s1)
    v1 = str_00223750;  // "E02080812 ADXT_StartSj: parameter error" // 0x001316bc: lw $v1, 0($a0)
    *(uint32_t*)((s1) + 0x10) = 0;                              // 0x001316c0: sw $zero, 0x10($s1)
    v0 = *(int32_t*)((v1) + 0xc);                               // 0x001316c4: lw $v0, 0xc($v1)
    /* call function at address in v0 */                        // 0x001316c8: jalr $v0
    /* nop */                                                   // 0x001316cc: nop 
    v0 = *(int8_t*)((s1) + 3);                                  // 0x001316d0: lb $v0, 3($s1)
    if (v0 <= 0) goto label_0x131760;                           // 0x001316d4: blez $v0, 0x131760
    s2 = s1 + 0x80;                                             // 0x001316dc: addiu $s2, $s1, 0x80
    s0 = s1 + 0x78;                                             // 0x001316e0: addiu $s0, $s1, 0x78
    /* nop */                                                   // 0x001316e4: nop 
label_0x1316e8:
    v1 = g_001f5a2c;  // Global at 0x001f5a2c                   // 0x001316e8: lw $v1, -0x60($s0)
    if (v1 == 0) goto label_0x131708;                           // 0x001316ec: beqz $v1, 0x131708
    v1 = *(int32_t*)(v1);                                       // 0x001316f4: lw $v1, 0($v1)
    g_001f5a2c = 0;  // Global at 0x001f5a2c                    // 0x001316f8: sw $zero, -0x60($s0)
    v0 = *(int32_t*)((v1) + 0xc);                               // 0x001316fc: lw $v0, 0xc($v1)
    /* call function at address in v0 */                        // 0x00131700: jalr $v0
    /* nop */                                                   // 0x00131704: nop 
label_0x131708:
    a0 = g_001f5a8c;  // Global at 0x001f5a8c                   // 0x00131708: lw $a0, 0($s0)
    /* beqzl $a0, 0x13172c */                                   // 0x0013170c: beqzl $a0, 0x13172c
    a0 = *(int32_t*)(s2);                                       // 0x00131710: lw $a0, 0($s2)
    v1 = str_00223750;  // "E02080812 ADXT_StartSj: parameter error" // 0x00131714: lw $v1, 0($a0)
    g_001f5a8c = 0;  // Global at 0x001f5a8c                    // 0x00131718: sw $zero, 0($s0)
    v0 = *(int32_t*)((v1) + 0xc);                               // 0x0013171c: lw $v0, 0xc($v1)
    /* call function at address in v0 */                        // 0x00131720: jalr $v0
    /* nop */                                                   // 0x00131724: nop 
    a0 = *(int32_t*)(s2);                                       // 0x00131728: lw $a0, 0($s2)
    /* beqzl $a0, 0x13174c */                                   // 0x0013172c: beqzl $a0, 0x13174c
    v0 = *(int8_t*)((s1) + 3);                                  // 0x00131730: lb $v0, 3($s1)
    v1 = str_00223750;  // "E02080812 ADXT_StartSj: parameter error" // 0x00131734: lw $v1, 0($a0)
    *(uint32_t*)(s2) = 0;                                       // 0x00131738: sw $zero, 0($s2)
    v0 = *(int32_t*)((v1) + 0xc);                               // 0x0013173c: lw $v0, 0xc($v1)
    /* call function at address in v0 */                        // 0x00131740: jalr $v0
    /* nop */                                                   // 0x00131744: nop 
    v0 = *(int8_t*)((s1) + 3);                                  // 0x00131748: lb $v0, 3($s1)
    s3 = s3 + 1;                                                // 0x0013174c: addiu $s3, $s3, 1
    s2 = s2 + 4;                                                // 0x00131750: addiu $s2, $s2, 4
    v0 = (s3 < v0) ? 1 : 0;                                     // 0x00131754: slt $v0, $s3, $v0
    if (v0 != 0) goto label_0x1316e8;                           // 0x00131758: bnez $v0, 0x1316e8
    s0 = s0 + 4;                                                // 0x0013175c: addiu $s0, $s0, 4
label_0x131760:
    a0 = *(int32_t*)((s1) + 0x74);                              // 0x00131760: lw $a0, 0x74($s1)
    /* beqzl $a0, 0x131778 */                                   // 0x00131764: beqzl $a0, 0x131778
    func_001225b0();  // 1225b0                                // 0x0013176c: jal 0x1225b0
    *(uint32_t*)((s1) + 0x74) = 0;                              // 0x00131770: sw $zero, 0x74($s1)
    func_00107c70();  // 107c70                                // 0x0013177c: jal 0x107c70
    a2 = 0xc4;                                                  // 0x00131780: addiu $a2, $zero, 0xc4
    *(uint8_t*)(s1) = 0;                                        // 0x00131784: sb $zero, 0($s1)
    return func_001261d0();  // Tail call                        // 0x0013179c: j 0x1261b8
    sp = sp + 0x30;                                             // 0x001317a0: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x001317a4: nop 
    sp = sp + -0x20;                                            // 0x001317a8: addiu $sp, $sp, -0x20
    v0 = 0x1f << 16;                                            // 0x001317ac: lui $v0, 0x1f
    s0 = v0 + 0x59c8;                                           // 0x001317b8: addiu $s0, $v0, 0x59c8
    s1 = 0xf;                                                   // 0x001317c0: addiu $s1, $zero, 0xf
    s2 = 1;                                                     // 0x001317c8: addiu $s2, $zero, 1
    /* nop */                                                   // 0x001317cc: nop 
label_0x1317d0:
    v0 = g_001f59c8;  // Global at 0x001f59c8                   // 0x001317d0: lb $v0, 0($s0)
    if (v0 != s2) goto label_0x1317e8;                          // 0x001317d4: bnel $v0, $s2, 0x1317e8
    s1 = s1 + -1;                                               // 0x001317d8: addiu $s1, $s1, -1
    func_001315d8();  // 1315d8                                // 0x001317dc: jal 0x1315d8
    s1 = s1 + -1;                                               // 0x001317e4: addiu $s1, $s1, -1
label_0x1317e8:
    if (s1 >= 0) goto label_0x1317d0;                           // 0x001317e8: bgez $s1, 0x1317d0
    s0 = s0 + 0xc4;                                             // 0x001317ec: addiu $s0, $s0, 0xc4
    return;                                                     // 0x00131800: jr $ra
    sp = sp + 0x20;                                             // 0x00131804: addiu $sp, $sp, 0x20
}