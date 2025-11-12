void func_001acc40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x70;                                            // 0x001acc40: addiu $sp, $sp, -0x70
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001acc48: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001acc54: dpa.w.ph $ac0, $sp, $s3
    v0 = ((unsigned)s4 < (unsigned)0x10) ? 1 : 0;               // 0x001acc60: sltiu $v0, $s4, 0x10
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001acc64: addu.qb $zero, $sp, $s1
    if (v0 != 0) goto label_0x1acc78;                           // 0x001acc68: bnez $v0, 0x1acc78
    goto label_0x1ace00;                                        // 0x001acc70: b 0x1ace00
    v0 = -1;                                                    // 0x001acc74: addiu $v0, $zero, -1
label_0x1acc78:
    at = 0x31 << 16;                                            // 0x001acc78: lui $at, 0x31
    v0 = s4 << 1;                                               // 0x001acc7c: sll $v0, $s4, 1
    s3 = g_003137fc;  // Global at 0x003137fc                   // 0x001acc80: lw $s3, 0x37fc($at)
    v1 = v0 + s4;                                               // 0x001acc84: addu $v1, $v0, $s4
    v0 = 0x2a << 16;                                            // 0x001acc88: lui $v0, 0x2a
    v1 = v1 << 9;                                               // 0x001acc8c: sll $v1, $v1, 9
    v0 = v0 + 0x5410;                                           // 0x001acc90: addiu $v0, $v0, 0x5410
    s0 = v0 + v1;                                               // 0x001acc98: addu $s0, $v0, $v1
    a2 = 0x600;                                                 // 0x001acc9c: addiu $a2, $zero, 0x600
    v0 = *(int32_t*)((s3) + 0x20);                              // 0x001acca8: lw $v0, 0x20($s3)
    v0 = s3 + v0;                                               // 0x001accac: addu $v0, $s3, $v0
    func_00107d30();  // 0x107c70                                // 0x001accb0: jal 0x107c70
    s2 = v0 + 0x10;                                             // 0x001accb4: addiu $s2, $v0, 0x10
    goto label_0x1acd18;                                        // 0x001accb8: b 0x1acd18
label_0x1accc0:
    v0 = g_002a5420;  // Global at 0x002a5420                   // 0x001accc0: lb $v0, 0($s2)
    v1 = v1 + 1;                                                // 0x001accc4: addiu $v1, $v1, 1
    *(uint8_t*)(s1) = v0;                                       // 0x001accc8: sb $v0, 0($s1)
    v0 = g_002a5429;  // Global at 0x002a5429                   // 0x001acccc: lb $v0, 9($s2)
    *(uint8_t*)((s1) + 5) = v0;                                 // 0x001accd0: sb $v0, 5($s1)
    v0 = g_002a5426;  // Global at 0x002a5426                   // 0x001accd4: lb $v0, 6($s2)
    v0 = v0 & 0x7f;                                             // 0x001accd8: andi $v0, $v0, 0x7f
    *(uint8_t*)((s1) + 8) = v0;                                 // 0x001accdc: sb $v0, 8($s1)
    v0 = g_002a5426;  // Global at 0x002a5426                   // 0x001acce0: lb $v0, 6($s2)
    v0 = v0 & 0x80;                                             // 0x001acce4: andi $v0, $v0, 0x80
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x001acce8: sltu $v0, $zero, $v0
    *(uint8_t*)((s1) + 9) = v0;                                 // 0x001accec: sb $v0, 9($s1)
    v0 = g_002a5428;  // Global at 0x002a5428                   // 0x001accf0: lb $v0, 8($s2)
    *(uint8_t*)((s1) + 4) = v0;                                 // 0x001accf4: sb $v0, 4($s1)
    v0 = g_002a542c;  // Global at 0x002a542c                   // 0x001accf8: lb $v0, 0xc($s2)
    *(uint8_t*)((s1) + 6) = v0;                                 // 0x001accfc: sb $v0, 6($s1)
    v0 = g_002a542d;  // Global at 0x002a542d                   // 0x001acd00: lb $v0, 0xd($s2)
    *(uint8_t*)((s1) + 7) = v0;                                 // 0x001acd04: sb $v0, 7($s1)
    v0 = g_002a542f;  // Global at 0x002a542f                   // 0x001acd08: lb $v0, 0xf($s2)
    *(uint8_t*)((s1) + 0xb) = v0;                               // 0x001acd0c: sb $v0, 0xb($s1)
    s2 = s2 + 0x10;                                             // 0x001acd10: addiu $s2, $s2, 0x10
    s1 = s1 + 0xc;                                              // 0x001acd14: addiu $s1, $s1, 0xc
label_0x1acd18:
    at = (v1 < 0x80) ? 1 : 0;                                   // 0x001acd18: slti $at, $v1, 0x80
    if (at == 0) goto label_0x1acd3c;                           // 0x001acd1c: beqz $at, 0x1acd3c
    v0 = *(int32_t*)((s3) + 0x24);                              // 0x001acd24: lw $v0, 0x24($s3)
    v0 = v0 + -0x10;                                            // 0x001acd28: addiu $v0, $v0, -0x10
    v0 = (unsigned)v0 >> 4;                                     // 0x001acd2c: srl $v0, $v0, 4
    v0 = ((unsigned)v1 < (unsigned)v0) ? 1 : 0;                 // 0x001acd30: sltu $v0, $v1, $v0
    if (v0 != 0) goto label_0x1accc0;                           // 0x001acd34: bnez $v0, 0x1accc0
    /* nop */                                                   // 0x001acd38: nop 
label_0x1acd3c:
    func_00107d30();  // 0x107c70                                // 0x001acd40: jal 0x107c70
    a2 = 4 << 16;                                               // 0x001acd44: lui $a2, 4
    at = 0x2a << 16;                                            // 0x001acd48: lui $at, 0x2a
    a1 = 0x2a << 16;                                            // 0x001acd4c: lui $a1, 0x2a
    a0 = g_002a5210;  // Global at 0x002a5210                   // 0x001acd50: lw $a0, 0x5210($at)
    a1 = a1 + 0x5214;                                           // 0x001acd54: addiu $a1, $a1, 0x5214
    func_001bef00();  // 0x1be050                                // 0x001acd58: jal 0x1be050
    at = 0x2a << 16;                                            // 0x001acd60: lui $at, 0x2a
    a3 = *(int32_t*)((s3) + 0x1c);                              // 0x001acd64: lw $a3, 0x1c($s3)
    a2 = g_002a5228;  // Global at 0x002a5228                   // 0x001acd68: lw $a2, 0x5228($at)
    v0 = v0 + a2;                                               // 0x001acd70: addu $v0, $v0, $a2
    at = 0xb << 16;                                             // 0x001acd74: lui $at, 0xb
    v0 = a3 + v0;                                               // 0x001acd78: addu $v0, $a3, $v0
    at = at | 0xffe1;                                           // 0x001acd7c: ori $at, $at, 0xffe1
    at = (v0 < at) ? 1 : 0;                                     // 0x001acd80: slt $at, $v0, $at
    if (at != 0) goto label_0x1acd9c;                           // 0x001acd84: bnez $at, 0x1acd9c
    /* nop */                                                   // 0x001acd88: nop 
    a0 = 0x24 << 16;                                            // 0x001acd8c: lui $a0, 0x24
    func_001b3430();  // 0x1b3400                                // 0x001acd94: jal 0x1b3400
    a0 = &str_0023db18;  // "../data/rom/sound/ps2/snd/%s.snd"  // 0x001acd98: addiu $a0, $a0, -0x24e8
label_0x1acd9c:
    at = 0x2a << 16;                                            // 0x001acd9c: lui $at, 0x2a
    v0 = *(int32_t*)((s3) + 0x18);                              // 0x001acda0: lw $v0, 0x18($s3)
    a3 = g_002a5230;  // Global at 0x002a5230                   // 0x001acda4: lw $a3, 0x5230($at)
    t2 = *(int32_t*)((s3) + 0x1c);                              // 0x001acdac: lw $t2, 0x1c($s3)
    at = 0x2a << 16;                                            // 0x001acdb8: lui $at, 0x2a
    t0 = g_002a5228;  // Global at 0x002a5228                   // 0x001acdbc: lw $t0, 0x5228($at)
    func_001a7520();  // 0x1a73d0                                // 0x001acdc0: jal 0x1a73d0
    t1 = s3 + v0;                                               // 0x001acdc4: addu $t1, $s3, $v0
    if (s1 >= 0) goto label_0x1acdec;                           // 0x001acdcc: bgez $s1, 0x1acdec
    func_00107d30();  // 0x107c70                                // 0x001acddc: jal 0x107c70
    a2 = 0x600;                                                 // 0x001acde0: addiu $a2, $zero, 0x600
    goto label_0x1ace00;                                        // 0x001acde4: b 0x1ace00
label_0x1acdec:
    iFlushCache();  // 0x114560                                 // 0x001acdec: jal 0x114560
    /* nop */                                                   // 0x001acdf0: nop 
    func_001a7910();  // 0x1a77d0                                // 0x001acdf4: jal 0x1a77d0
    a0 = 1;                                                     // 0x001acdf8: addiu $a0, $zero, 1
label_0x1ace00:
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001ace04: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001ace08: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001ace10: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ace14: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ace18: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ace1c: jr $ra
    sp = sp + 0x70;                                             // 0x001ace20: addiu $sp, $sp, 0x70
}