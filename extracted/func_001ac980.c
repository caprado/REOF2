void func_001ac980() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    return func_001a7690();  // Tail call                       // 0x001ac980: j 0x1a7690
    a0 = a0 ^ 1;                                                // 0x001ac984: xori $a0, $a0, 1
    /* nop */                                                   // 0x001ac988: nop 
    /* nop */                                                   // 0x001ac98c: nop 
    return func_001a7610();  // Tail call                        // 0x001ac990: j 0x1a7520
    /* nop */                                                   // 0x001ac994: nop 
    /* nop */                                                   // 0x001ac998: nop 
    /* nop */                                                   // 0x001ac99c: nop 
    a3 = a3 & 0xff;                                             // 0x001ac9a4: andi $a3, $a3, 0xff
    return func_001a7710();  // Tail call                       // 0x001ac9ac: j 0x1a7710
    t0 = t0 & 0xff;                                             // 0x001ac9b0: andi $t0, $t0, 0xff
    /* nop */                                                   // 0x001ac9b4: nop 
    /* nop */                                                   // 0x001ac9b8: nop 
    /* nop */                                                   // 0x001ac9bc: nop 
    return func_001ad420();  // Tail call                        // 0x001ac9c0: j 0x1ad1b0
    /* nop */                                                   // 0x001ac9c4: nop 
    /* nop */                                                   // 0x001ac9c8: nop 
    /* nop */                                                   // 0x001ac9cc: nop 
    sp = sp + -0x80;                                            // 0x001ac9d0: addiu $sp, $sp, -0x80
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001ac9dc: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001ac9e4: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ac9ec: addu.qb $zero, $sp, $s1
    v0 = ((unsigned)s0 < (unsigned)0xe) ? 1 : 0;                // 0x001ac9f8: sltiu $v0, $s0, 0xe
    if (v0 != 0) goto label_0x1aca0c;                           // 0x001ac9fc: bnez $v0, 0x1aca0c
    v0 = -1;                                                    // 0x001aca00: addiu $v0, $zero, -1
    goto label_0x1acb48;                                        // 0x001aca04: b 0x1acb48
label_0x1aca0c:
    a3 = *(int32_t*)((a0) + 0x20);                              // 0x001aca0c: lw $a3, 0x20($a0)
    v0 = s0 << 1;                                               // 0x001aca10: sll $v0, $s0, 1
    v1 = v0 + s0;                                               // 0x001aca14: addu $v1, $v0, $s0
    v0 = 0x2a << 16;                                            // 0x001aca1c: lui $v0, 0x2a
    v1 = v1 << 9;                                               // 0x001aca20: sll $v1, $v1, 9
    v0 = v0 + 0x5410;                                           // 0x001aca24: addiu $v0, $v0, 0x5410
    s1 = v0 + v1;                                               // 0x001aca2c: addu $s1, $v0, $v1
    a2 = 0x600;                                                 // 0x001aca34: addiu $a2, $zero, 0x600
    v0 = a0 + a3;                                               // 0x001aca3c: addu $v0, $a0, $a3
    s3 = v0 + 0x10;                                             // 0x001aca40: addiu $s3, $v0, 0x10
    func_00107c70();  // 107c70                                // 0x001aca44: jal 0x107c70
    v1 = *(int32_t*)((s4) + 0x24);                              // 0x001aca4c: lw $v1, 0x24($s4)
    goto label_0x1acabc;                                        // 0x001aca54: b 0x1acabc
    s6 = (unsigned)v1 >> 4;                                     // 0x001aca58: srl $s6, $v1, 4
label_0x1aca5c:
    v1 = g_002a5420;  // Global at 0x002a5420                   // 0x001aca5c: lb $v1, 0($s3)
    v0 = v0 + 1;                                                // 0x001aca60: addiu $v0, $v0, 1
    *(uint8_t*)(s2) = v1;                                       // 0x001aca64: sb $v1, 0($s2)
    v1 = g_002a5429;  // Global at 0x002a5429                   // 0x001aca68: lb $v1, 9($s3)
    *(uint8_t*)((s2) + 5) = v1;                                 // 0x001aca6c: sb $v1, 5($s2)
    v1 = g_002a5428;  // Global at 0x002a5428                   // 0x001aca70: lb $v1, 8($s3)
    *(uint8_t*)((s2) + 4) = v1;                                 // 0x001aca74: sb $v1, 4($s2)
    v1 = g_002a542a;  // Global at 0x002a542a                   // 0x001aca78: lh $v1, 0xa($s3)
    *(uint16_t*)((s2) + 2) = v1;                                // 0x001aca7c: sh $v1, 2($s2)
    v1 = g_002a542c;  // Global at 0x002a542c                   // 0x001aca80: lb $v1, 0xc($s3)
    *(uint8_t*)((s2) + 6) = v1;                                 // 0x001aca84: sb $v1, 6($s2)
    v1 = g_002a542d;  // Global at 0x002a542d                   // 0x001aca88: lb $v1, 0xd($s3)
    *(uint8_t*)((s2) + 7) = v1;                                 // 0x001aca8c: sb $v1, 7($s2)
    v1 = g_002a5426;  // Global at 0x002a5426                   // 0x001aca90: lb $v1, 6($s3)
    v1 = v1 & 0x7f;                                             // 0x001aca94: andi $v1, $v1, 0x7f
    *(uint8_t*)((s2) + 8) = v1;                                 // 0x001aca98: sb $v1, 8($s2)
    v1 = g_002a5426;  // Global at 0x002a5426                   // 0x001aca9c: lb $v1, 6($s3)
    v1 = v1 & 0x80;                                             // 0x001acaa0: andi $v1, $v1, 0x80
    v1 = ((unsigned)0 < (unsigned)v1) ? 1 : 0;                  // 0x001acaa4: sltu $v1, $zero, $v1
    *(uint8_t*)((s2) + 9) = v1;                                 // 0x001acaa8: sb $v1, 9($s2)
    v1 = g_002a542f;  // Global at 0x002a542f                   // 0x001acaac: lb $v1, 0xf($s3)
    *(uint8_t*)((s2) + 0xb) = v1;                               // 0x001acab0: sb $v1, 0xb($s2)
    s3 = s3 + 0x10;                                             // 0x001acab4: addiu $s3, $s3, 0x10
    s2 = s2 + 0xc;                                              // 0x001acab8: addiu $s2, $s2, 0xc
label_0x1acabc:
    at = (v0 < 0x80) ? 1 : 0;                                   // 0x001acabc: slti $at, $v0, 0x80
    if (at == 0) goto label_0x1acae0;                           // 0x001acac0: beqz $at, 0x1acae0
    /* nop */                                                   // 0x001acac4: nop 
    v1 = *(int32_t*)((s4) + 0x24);                              // 0x001acac8: lw $v1, 0x24($s4)
    v1 = v1 + -0x10;                                            // 0x001acacc: addiu $v1, $v1, -0x10
    v1 = (unsigned)v1 >> 4;                                     // 0x001acad0: srl $v1, $v1, 4
    v1 = ((unsigned)v0 < (unsigned)v1) ? 1 : 0;                 // 0x001acad4: sltu $v1, $v0, $v1
    if (v1 != 0) goto label_0x1aca5c;                           // 0x001acad8: bnez $v1, 0x1aca5c
    /* nop */                                                   // 0x001acadc: nop 
label_0x1acae0:
    a1 = *(int32_t*)((s4) + 8);                                 // 0x001acae0: lw $a1, 8($s4)
    v1 = *(int32_t*)((s4) + 0x10);                              // 0x001acae8: lw $v1, 0x10($s4)
    v0 = *(int32_t*)((s4) + 0x18);                              // 0x001acaec: lw $v0, 0x18($s4)
    a2 = *(int32_t*)((s4) + 0xc);                               // 0x001acaf0: lw $a2, 0xc($s4)
    t0 = *(int32_t*)((s4) + 0x14);                              // 0x001acaf4: lw $t0, 0x14($s4)
    t2 = *(int32_t*)((s4) + 0x1c);                              // 0x001acaf8: lw $t2, 0x1c($s4)
    a1 = s5 + a1;                                               // 0x001acafc: addu $a1, $s5, $a1
    a3 = s5 + v1;                                               // 0x001acb00: addu $a3, $s5, $v1
    func_001a73d0();  // 1a73d0                                // 0x001acb04: jal 0x1a73d0
    t1 = s5 + v0;                                               // 0x001acb08: addu $t1, $s5, $v0
    if (s0 >= 0) goto label_0x1acb30;                           // 0x001acb10: bgez $s0, 0x1acb30
    a1 = 0xff;                                                  // 0x001acb1c: addiu $a1, $zero, 0xff
    func_00107c70();  // 107c70                                // 0x001acb20: jal 0x107c70
    a2 = 0x600;                                                 // 0x001acb24: addiu $a2, $zero, 0x600
    goto label_0x1acb44;                                        // 0x001acb28: b 0x1acb44
label_0x1acb30:
    iFlushCache();  // 0x114560                                 // 0x001acb30: jal 0x114560
    /* nop */                                                   // 0x001acb34: nop 
    func_001a77d0();  // 1a77d0                                // 0x001acb38: jal 0x1a77d0
    a0 = 1;                                                     // 0x001acb3c: addiu $a0, $zero, 1
label_0x1acb44:
label_0x1acb48:
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001acb48: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001acb4c: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001acb50: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001acb58: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001acb5c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001acb60: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001acb64: jr $ra
    sp = sp + 0x80;                                             // 0x001acb68: addiu $sp, $sp, 0x80
}