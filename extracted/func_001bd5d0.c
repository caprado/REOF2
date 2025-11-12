void func_001bd5d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x180;                                           // 0x001bd5d0: addiu $sp, $sp, -0x180
    v0 = 0x22 << 16;                                            // 0x001bd5d4: lui $v0, 0x22
    a1 = 0x24 << 16;                                            // 0x001bd5dc: lui $a1, 0x24
    v0 = v0 + -0x3310;                                          // 0x001bd5e4: addiu $v0, $v0, -0x3310
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001bd5e8: subu.qb $zero, $sp, $s5
    a1 = &str_0023dfd0;  // "%s,,%s,PFS"                        // 0x001bd5ec: addiu $a1, $a1, -0x2030
    a2 = 0x1234;                                                // 0x001bd5f4: addiu $a2, $zero, 0x1234
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001bd5f8: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001bd604: addu.qb $zero, $sp, $s1
    v1 = *(int32_t*)((gp) + -0x6314);                           // 0x001bd60c: lw $v1, -0x6314($gp)
    s2 = *(int32_t*)((gp) + -0x6318);                           // 0x001bd610: lw $s2, -0x6318($gp)
    v1 = v1 << 2;                                               // 0x001bd614: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001bd618: addu $v0, $v0, $v1
    s3 = g_0021ccf0;  // Global at 0x0021ccf0                   // 0x001bd61c: lw $s3, 0($v0)
    func_001bdf00();  // 0x1bdde0                                // 0x001bd620: jal 0x1bdde0
    a0 = sp + 0x80;                                             // 0x001bd624: addiu $a0, $sp, 0x80
    v0 = 0x31 << 16;                                            // 0x001bd628: lui $v0, 0x31
    a1 = 0x24 << 16;                                            // 0x001bd62c: lui $a1, 0x24
    v1 = s2 << 5;                                               // 0x001bd630: sll $v1, $s2, 5
    v0 = v0 + 0x38c0;                                           // 0x001bd634: addiu $v0, $v0, 0x38c0
    v0 = v0 + v1;                                               // 0x001bd638: addu $v0, $v0, $v1
    a0 = sp + 0x100;                                            // 0x001bd63c: addiu $a0, $sp, 0x100
    a3 = v0 + 0x10;                                             // 0x001bd640: addiu $a3, $v0, 0x10
    a1 = &str_0023dfe8;  // "pfs0:/res"                         // 0x001bd644: addiu $a1, $a1, -0x2018
    func_0010a570();  // 0x10a4d8                                // 0x001bd648: jal 0x10a4d8
    a2 = sp + 0x80;                                             // 0x001bd64c: addiu $a2, $sp, 0x80
    a0 = sp + 0x100;                                            // 0x001bd650: addiu $a0, $sp, 0x100
    func_001189b8();  // 0x118730                                // 0x001bd654: jal 0x118730
    a1 = 0x203;                                                 // 0x001bd658: addiu $a1, $zero, 0x203
    if (v0 >= 0) goto label_0x1bd678;                           // 0x001bd65c: bgez $v0, 0x1bd678
label_0x1bd668:
    func_001bd3d0();  // 0x1bd340                                // 0x001bd668: jal 0x1bd340
    goto label_0x1bd718;                                        // 0x001bd670: b 0x1bd718
label_0x1bd678:
    goto label_0x1bd6e4;                                        // 0x001bd678: b 0x1bd6e4
label_0x1bd680:
    v1 = s2 << 5;                                               // 0x001bd680: sll $v1, $s2, 5
    s0 = g_003138c0;  // Global at 0x003138c0                   // 0x001bd684: lb $s0, 0($v0)
    v0 = 0x31 << 16;                                            // 0x001bd688: lui $v0, 0x31
    v0 = v0 + 0x38c0;                                           // 0x001bd68c: addiu $v0, $v0, 0x38c0
    v0 = v0 + v1;                                               // 0x001bd690: addu $v0, $v0, $v1
    goto label_0x1bd6dc;                                        // 0x001bd694: b 0x1bd6dc
    s6 = v0 + 0x10;                                             // 0x001bd698: addiu $s6, $v0, 0x10
label_0x1bd69c:
    func_0010af38();  // 0x10ae00                                // 0x001bd69c: jal 0x10ae00
    a3 = v0 + 1;                                                // 0x001bd6a4: addiu $a3, $v0, 1
    a1 = 0x6801;                                                // 0x001bd6ac: addiu $a1, $zero, 0x6801
    func_001197e8();  // 0x119608                                // 0x001bd6b8: jal 0x119608
    if (v0 >= 0) goto label_0x1bd6d8;                           // 0x001bd6c0: bgez $v0, 0x1bd6d8
    func_00118b38();  // 0x1189b8                                // 0x001bd6c8: jal 0x1189b8
    goto label_0x1bd668;                                        // 0x001bd6d0: b 0x1bd668
label_0x1bd6d8:
    s0 = s0 + -1;                                               // 0x001bd6d8: addiu $s0, $s0, -1
label_0x1bd6dc:
    if (s0 > 0) goto label_0x1bd69c;                            // 0x001bd6dc: bgtz $s0, 0x1bd69c
    /* nop */                                                   // 0x001bd6e0: nop 
label_0x1bd6e4:
    s2 = s2 + -1;                                               // 0x001bd6e4: addiu $s2, $s2, -1
    if (s2 >= 0) goto label_0x1bd680;                           // 0x001bd6e8: bgez $s2, 0x1bd680
    v0 = s3 + s2;                                               // 0x001bd6ec: addu $v0, $s3, $s2
    a1 = *(int32_t*)((s4) + 0xc);                               // 0x001bd6f0: lw $a1, 0xc($s4)
    a2 = *(int32_t*)((s4) + 0x30);                              // 0x001bd6f4: lw $a2, 0x30($s4)
    func_00119290();  // 0x118fd0                                // 0x001bd6f8: jal 0x118fd0
    func_00118b38();  // 0x1189b8                                // 0x001bd700: jal 0x1189b8
    v1 = *(int32_t*)(s4);                                       // 0x001bd708: lw $v1, 0($s4)
    v1 = v1 + 1;                                                // 0x001bd70c: addiu $v1, $v1, 1
    *(uint32_t*)(s4) = v1;                                      // 0x001bd710: sw $v1, 0($s4)
label_0x1bd718:
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001bd718: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001bd71c: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001bd720: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001bd728: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001bd72c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bd730: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bd734: jr $ra
    sp = sp + 0x180;                                            // 0x001bd738: addiu $sp, $sp, 0x180
}