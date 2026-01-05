void func_001b7130() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001b7130: addiu $sp, $sp, -0x60
    at = 0x31 << 16;                                            // 0x001b7134: lui $at, 0x31
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001b7140: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b714c: addu.qb $zero, $sp, $s1
    v1 = g_003137b6;  // Global at 0x003137b6                   // 0x001b7154: lbu $v1, 0x37b6($at)
    s0 = 0x2b << 16;                                            // 0x001b7158: lui $s0, 0x2b
    if (v1 != 0) goto label_0x1b7174;                           // 0x001b715c: bnez $v1, 0x1b7174
    s0 = s0 + -0x3ac0;                                          // 0x001b7160: addiu $s0, $s0, -0x3ac0
    at = 0x31 << 16;                                            // 0x001b7164: lui $at, 0x31
    v1 = g_003137ca;  // Global at 0x003137ca                   // 0x001b7168: lbu $v1, 0x37ca($at)
    if (v1 == 0) goto label_0x1b72d4;                           // 0x001b716c: beqz $v1, 0x1b72d4
    /* nop */                                                   // 0x001b7170: nop 
label_0x1b7174:
    v1 = g_002ac540;  // Global at 0x002ac540                   // 0x001b7174: lw $v1, 0($s0)
    if (v1 == 0) goto label_0x1b71d0;                           // 0x001b7178: beqz $v1, 0x1b71d0
    a0 = 0x5f;                                                  // 0x001b717c: addiu $a0, $zero, 0x5f
    func_001aefd0();  // 1aefd0                                // 0x001b7180: jal 0x1aefd0
    a1 = 5;                                                     // 0x001b7184: addiu $a1, $zero, 5
    a0 = 0x60;                                                  // 0x001b7188: addiu $a0, $zero, 0x60
    func_001aefd0();  // 1aefd0                                // 0x001b718c: jal 0x1aefd0
    v0 = g_002ac5e0;  // Global at 0x002ac5e0                   // 0x001b7194: lw $v0, 0xa0($s0)
    if (v0 == 0) goto label_0x1b71b4;                           // 0x001b7198: beqz $v0, 0x1b71b4
    a0 = 0x6c;                                                  // 0x001b719c: addiu $a0, $zero, 0x6c
    a0 = 0x6c;                                                  // 0x001b71a0: addiu $a0, $zero, 0x6c
    func_001aefd0();  // 1aefd0                                // 0x001b71a4: jal 0x1aefd0
    a1 = 1;                                                     // 0x001b71a8: addiu $a1, $zero, 1
    goto label_0x1b71c0;                                        // 0x001b71ac: b 0x1b71c0
label_0x1b71b4:
    func_001aefd0();  // 1aefd0                                // 0x001b71b4: jal 0x1aefd0
label_0x1b71c0:
    func_001b5470();  // 1b5470                                // 0x001b71c0: jal 0x1b5470
    /* nop */                                                   // 0x001b71c4: nop 
    goto label_0x1b72d8;                                        // 0x001b71c8: b 0x1b72d8
label_0x1b71d0:
    s3 = g_002ac5b0;  // Global at 0x002ac5b0                   // 0x001b71d0: lw $s3, 0x70($s0)
    s2 = g_002ac58c;  // Global at 0x002ac58c                   // 0x001b71d4: lw $s2, 0x4c($s0)
label_0x1b71d8:
    a0 = *(uint8_t*)(s4);                                       // 0x001b71d8: lbu $a0, 0($s4)
    if (a0 == 0) goto label_0x1b72d0;                           // 0x001b71dc: beqz $a0, 0x1b72d0
    s4 = s4 + 1;                                                // 0x001b71e0: addiu $s4, $s4, 1
    v1 = 0xa;                                                   // 0x001b71e4: addiu $v1, $zero, 0xa
    if (a0 != v1) goto label_0x1b7208;                          // 0x001b71e8: bne $a0, $v1, 0x1b7208
    v1 = ((unsigned)a0 < (unsigned)0x80) ? 1 : 0;               // 0x001b71ec: sltiu $v1, $a0, 0x80
    g_002ac5b0 = s3;  // Global at 0x002ac5b0                   // 0x001b71f0: sw $s3, 0x70($s0)
    a0 = g_002ac5ac;  // Global at 0x002ac5ac                   // 0x001b71f4: lw $a0, 0x6c($s0)
    v1 = g_002ac5b4;  // Global at 0x002ac5b4                   // 0x001b71f8: lw $v1, 0x74($s0)
    v1 = v1 + a0;                                               // 0x001b71fc: addu $v1, $v1, $a0
    goto label_0x1b71d8;                                        // 0x001b7200: b 0x1b71d8
    g_002ac5b4 = v1;  // Global at 0x002ac5b4                   // 0x001b7204: sw $v1, 0x74($s0)
label_0x1b7208:
    if (v1 != 0) goto label_0x1b7218;                           // 0x001b7208: bnez $v1, 0x1b7218
    at = ((unsigned)a0 < (unsigned)0xa0) ? 1 : 0;               // 0x001b720c: sltiu $at, $a0, 0xa0
    if (at != 0) goto label_0x1b722c;                           // 0x001b7210: bnez $at, 0x1b722c
    /* nop */                                                   // 0x001b7214: nop 
label_0x1b7218:
    v1 = ((unsigned)a0 < (unsigned)0xe0) ? 1 : 0;               // 0x001b7218: sltiu $v1, $a0, 0xe0
    if (v1 != 0) goto label_0x1b7248;                           // 0x001b721c: bnez $v1, 0x1b7248
    at = ((unsigned)a0 < (unsigned)0x100) ? 1 : 0;              // 0x001b7220: sltiu $at, $a0, 0x100
    if (at == 0) goto label_0x1b7248;                           // 0x001b7224: beqz $at, 0x1b7248
    /* nop */                                                   // 0x001b7228: nop 
label_0x1b722c:
    v1 = *(uint8_t*)(s4);                                       // 0x001b722c: lbu $v1, 0($s4)
    if (v1 == 0) goto label_0x1b72d0;                           // 0x001b7230: beqz $v1, 0x1b72d0
    s4 = s4 + 1;                                                // 0x001b7234: addiu $s4, $s4, 1
    v0 = a0 << 8;                                               // 0x001b7238: sll $v0, $a0, 8
    goto label_0x1b7258;                                        // 0x001b7240: b 0x1b7258
    v0 = v0 | v1;                                               // 0x001b7244: or $v0, $v0, $v1
label_0x1b7248:
    a1 = g_002ac548;  // Global at 0x002ac548                   // 0x001b7248: lw $a1, 8($s0)
    func_001b5e60();  // 1b5e60                                // 0x001b724c: jal 0x1b5e60
    a0 = a0 & 0xff;                                             // 0x001b7250: andi $a0, $a0, 0xff
    s1 = 1;                                                     // 0x001b7254: addiu $s1, $zero, 1
label_0x1b7258:
    a1 = g_002ac548;  // Global at 0x002ac548                   // 0x001b7258: lw $a1, 8($s0)
    func_001b5dd0();  // 1b5dd0                                // 0x001b725c: jal 0x1b5dd0
    v1 = g_002ac55c;  // Global at 0x002ac55c                   // 0x001b7264: lw $v1, 0x1c($s0)
    at = ((unsigned)a1 < (unsigned)v1) ? 1 : 0;                 // 0x001b726c: sltu $at, $a1, $v1
    if (at == 0) goto label_0x1b72b8;                           // 0x001b7270: beqz $at, 0x1b72b8
    /* nop */                                                   // 0x001b7274: nop 
    a0 = g_002ac5a4;  // Global at 0x002ac5a4                   // 0x001b7278: lw $a0, 0x64($s0)
    v1 = g_002ac5a0;  // Global at 0x002ac5a0                   // 0x001b727c: lw $v1, 0x60($s0)
    at = ((unsigned)a0 < (unsigned)v1) ? 1 : 0;                 // 0x001b7280: sltu $at, $a0, $v1
    if (at == 0) goto label_0x1b72d0;                           // 0x001b7284: beqz $at, 0x1b72d0
    func_001b5630();  // 1b5630                                // 0x001b728c: jal 0x1b5630
    /* nop */                                                   // 0x001b7290: nop 
    func_001b6a60();  // 1b6a60                                // 0x001b72a0: jal 0x1b6a60
    v1 = g_002ac5a4;  // Global at 0x002ac5a4                   // 0x001b72a8: lw $v1, 0x64($s0)
    v1 = v1 + 1;                                                // 0x001b72b0: addiu $v1, $v1, 1
    g_002ac5a4 = v1;  // Global at 0x002ac5a4                   // 0x001b72b4: sw $v1, 0x64($s0)
label_0x1b72b8:
    a0 = g_002ac5ac;  // Global at 0x002ac5ac                   // 0x001b72b8: lw $a0, 0x6c($s0)
    v1 = g_002ac5b0;  // Global at 0x002ac5b0                   // 0x001b72bc: lw $v1, 0x70($s0)
    a0 = (unsigned)a0 >> s1;                                    // 0x001b72c0: srlv $a0, $a0, $s1
    v1 = v1 + a0;                                               // 0x001b72c4: addu $v1, $v1, $a0
    goto label_0x1b71d8;                                        // 0x001b72c8: b 0x1b71d8
    g_002ac5b0 = v1;  // Global at 0x002ac5b0                   // 0x001b72cc: sw $v1, 0x70($s0)
label_0x1b72d0:
    g_002ac58c = s2;  // Global at 0x002ac58c                   // 0x001b72d0: sw $s2, 0x4c($s0)
label_0x1b72d4:
label_0x1b72d8:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001b72d8: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b72e0: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b72e4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b72e8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b72ec: jr $ra
    sp = sp + 0x60;                                             // 0x001b72f0: addiu $sp, $sp, 0x60
}