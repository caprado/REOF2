void func_001dd9c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001dd9c0: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001dd9cc: addu.qb $zero, $sp, $s1
    v0 = *(int8_t*)((gp) + -0x6208);                            // 0x001dd9dc: lb $v0, -0x6208($gp)
    if (v0 == 0) goto label_0x1dd9f4;                           // 0x001dd9e0: beqz $v0, 0x1dd9f4
    goto label_0x1ddb58;                                        // 0x001dd9ec: b 0x1ddb58
label_0x1dd9f4:
    a0 = *(int8_t*)((gp) + -0x61fc);                            // 0x001dd9f4: lb $a0, -0x61fc($gp)
    v0 = 3;                                                     // 0x001dd9f8: addiu $v0, $zero, 3
    if (a0 == v0) goto label_0x1dda94;                          // 0x001dd9fc: beq $a0, $v0, 0x1dda94
    v0 = 2;                                                     // 0x001dda00: addiu $v0, $zero, 2
    if (a0 == v0) goto label_0x1dda84;                          // 0x001dda04: beq $a0, $v0, 0x1dda84
    v1 = 1;                                                     // 0x001dda08: addiu $v1, $zero, 1
    if (a0 == v1) goto label_0x1dda78;                          // 0x001dda0c: beq $a0, $v1, 0x1dda78
    /* nop */                                                   // 0x001dda10: nop 
    if (a0 == 0) goto label_0x1dda24;                           // 0x001dda14: beqz $a0, 0x1dda24
    /* nop */                                                   // 0x001dda18: nop 
    goto label_0x1ddb58;                                        // 0x001dda1c: b 0x1ddb58
    v0 = *(int8_t*)((gp) + -0x6208);                            // 0x001dda20: lb $v0, -0x6208($gp)
label_0x1dda24:
    if (s2 == 0) goto label_0x1dda40;                           // 0x001dda24: beqz $s2, 0x1dda40
    v0 = 1;                                                     // 0x001dda28: addiu $v0, $zero, 1
    if (s1 == 0) goto label_0x1dda3c;                           // 0x001dda2c: beqz $s1, 0x1dda3c
    /* nop */                                                   // 0x001dda30: nop 
    if (a2 != 0) goto label_0x1dda48;                           // 0x001dda34: bnez $a2, 0x1dda48
    /* nop */                                                   // 0x001dda38: nop 
label_0x1dda3c:
    v0 = 1;                                                     // 0x001dda3c: addiu $v0, $zero, 1
label_0x1dda40:
    goto label_0x1ddb54;                                        // 0x001dda40: b 0x1ddb54
    *(uint8_t*)((gp) + -0x6208) = v0;                           // 0x001dda44: sb $v0, -0x6208($gp)
label_0x1dda48:
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x001dda48: lw $v0, 0x14($s0)
    if (v0 != 0) goto label_0x1dda5c;                           // 0x001dda4c: bnez $v0, 0x1dda5c
    v0 = a0 + 1;                                                // 0x001dda50: addiu $v0, $a0, 1
    goto label_0x1ddb54;                                        // 0x001dda54: b 0x1ddb54
    *(uint8_t*)((gp) + -0x6208) = v1;                           // 0x001dda58: sb $v1, -0x6208($gp)
label_0x1dda5c:
    *(uint8_t*)((gp) + -0x61fc) = v0;                           // 0x001dda64: sb $v0, -0x61fc($gp)
    a2 = 0 | 0x8000;                                            // 0x001dda68: ori $a2, $zero, 0x8000
    *(uint8_t*)((gp) + -0x6200) = 0;                            // 0x001dda6c: sb $zero, -0x6200($gp)
    func_00107ab8();  // 107ab8                                // 0x001dda70: jal 0x107ab8
    *(uint8_t*)((gp) + -0x6204) = 0;                            // 0x001dda74: sb $zero, -0x6204($gp)
label_0x1dda78:
    v0 = *(int8_t*)((gp) + -0x61fc);                            // 0x001dda78: lb $v0, -0x61fc($gp)
    v0 = v0 + 1;                                                // 0x001dda7c: addiu $v0, $v0, 1
    *(uint8_t*)((gp) + -0x61fc) = v0;                           // 0x001dda80: sb $v0, -0x61fc($gp)
label_0x1dda84:
    v0 = *(int8_t*)((gp) + -0x61fc);                            // 0x001dda84: lb $v0, -0x61fc($gp)
    v0 = v0 + 1;                                                // 0x001dda88: addiu $v0, $v0, 1
    goto label_0x1ddb54;                                        // 0x001dda8c: b 0x1ddb54
    *(uint8_t*)((gp) + -0x61fc) = v0;                           // 0x001dda90: sb $v0, -0x61fc($gp)
label_0x1dda94:
    a3 = *(int32_t*)((s0) + 0x14);                              // 0x001dda94: lw $a3, 0x14($s0)
    a0 = gp + -0x6200;                                          // 0x001dda98: addiu $a0, $gp, -0x6200
    a1 = gp + -0x6204;                                          // 0x001dda9c: addiu $a1, $gp, -0x6204
    func_006af1d0();  // 0x6af1d0                               // 0x001ddaa4: jal 0x6af1d0
    t0 = 0 | 0x8000;                                            // 0x001ddaa8: ori $t0, $zero, 0x8000
    if (v0 <= 0) goto label_0x1ddb38;                           // 0x001ddaac: blez $v0, 0x1ddb38
    a0 = 0x30 << 16;                                            // 0x001ddab0: lui $a0, 0x30
    a0 = a0 + 0x7fb0;                                           // 0x001ddab8: addiu $a0, $a0, 0x7fb0
    func_0010b0e8();  // 10b0e8                                // 0x001ddabc: jal 0x10b0e8
    a2 = 8;                                                     // 0x001ddac0: addiu $a2, $zero, 8
    if (v0 >= 0) goto label_0x1ddb20;                           // 0x001ddac4: bgez $v0, 0x1ddb20
    a0 = 0x33 << 16;                                            // 0x001ddac8: lui $a0, 0x33
    a0 = a0 + 0x1c80;                                           // 0x001ddad0: addiu $a0, $a0, 0x1c80
    func_00107ab8();  // 107ab8                                // 0x001ddad4: jal 0x107ab8
    a2 = 0 | 0x8000;                                            // 0x001ddad8: ori $a2, $zero, 0x8000
    a0 = 0x34 << 16;                                            // 0x001ddadc: lui $a0, 0x34
    a0 = a0 + -0x6380;                                          // 0x001ddae4: addiu $a0, $a0, -0x6380
    func_00107ab8();  // 107ab8                                // 0x001ddae8: jal 0x107ab8
    a2 = 0 | 0x8000;                                            // 0x001ddaec: ori $a2, $zero, 0x8000
    a0 = 0x34 << 16;                                            // 0x001ddaf0: lui $a0, 0x34
    a0 = a0 + 0x1c80;                                           // 0x001ddaf8: addiu $a0, $a0, 0x1c80
    func_00107ab8();  // 107ab8                                // 0x001ddafc: jal 0x107ab8
    a2 = 0x18;                                                  // 0x001ddb00: addiu $a2, $zero, 0x18
    a0 = 0x30 << 16;                                            // 0x001ddb04: lui $a0, 0x30
    a0 = a0 + 0x7fb0;                                           // 0x001ddb0c: addiu $a0, $a0, 0x7fb0
    func_00107ab8();  // 107ab8                                // 0x001ddb10: jal 0x107ab8
    a2 = 0xa;                                                   // 0x001ddb14: addiu $a2, $zero, 0xa
    func_001dd810();  // 1dd810                                // 0x001ddb18: jal 0x1dd810
label_0x1ddb20:
    v0 = 2;                                                     // 0x001ddb20: addiu $v0, $zero, 2
    *(uint8_t*)((gp) + -0x61fc) = 0;                            // 0x001ddb24: sb $zero, -0x61fc($gp)
    *(uint8_t*)((gp) + -0x6208) = v0;                           // 0x001ddb28: sb $v0, -0x6208($gp)
    *(uint8_t*)((gp) + -0x6200) = 0;                            // 0x001ddb2c: sb $zero, -0x6200($gp)
    goto label_0x1ddb54;                                        // 0x001ddb30: b 0x1ddb54
    *(uint8_t*)((gp) + -0x6204) = 0;                            // 0x001ddb34: sb $zero, -0x6204($gp)
label_0x1ddb38:
    if (v0 >= 0) goto label_0x1ddb54;                           // 0x001ddb38: bgez $v0, 0x1ddb54
    /* nop */                                                   // 0x001ddb3c: nop 
    v0 = -1;                                                    // 0x001ddb40: addiu $v0, $zero, -1
    *(uint8_t*)((gp) + -0x61fc) = 0;                            // 0x001ddb44: sb $zero, -0x61fc($gp)
    *(uint8_t*)((gp) + -0x6208) = v0;                           // 0x001ddb48: sb $v0, -0x6208($gp)
    *(uint8_t*)((gp) + -0x6200) = 0;                            // 0x001ddb4c: sb $zero, -0x6200($gp)
    *(uint8_t*)((gp) + -0x6204) = 0;                            // 0x001ddb50: sb $zero, -0x6204($gp)
label_0x1ddb54:
    v0 = *(int8_t*)((gp) + -0x6208);                            // 0x001ddb54: lb $v0, -0x6208($gp)
label_0x1ddb58:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001ddb5c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ddb60: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ddb64: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ddb68: jr $ra
    sp = sp + 0x40;                                             // 0x001ddb6c: addiu $sp, $sp, 0x40
}