void func_001c7670() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001c7670: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s2 */                          // 0x001c7678: dpa.w.ph $ac0, $sp, $s2
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x001c7684: addu.qb $zero, $sp, $s0
    func_001c7770();  // 0x1c7740                                // 0x001c768c: jal 0x1c7740
    if (v0 != 0) goto label_0x1c76a8;                           // 0x001c7694: bnez $v0, 0x1c76a8
    /* nop */                                                   // 0x001c7698: nop 
    goto label_0x1c7728;                                        // 0x001c769c: b 0x1c7728
    v0 = -0x21;                                                 // 0x001c76a0: addiu $v0, $zero, -0x21
    /* nop */                                                   // 0x001c76a4: nop 
label_0x1c76a8:
    if (s1 >= 0) goto label_0x1c76c0;                           // 0x001c76ac: bgez $s1, 0x1c76c0
    a0 = s1 & 0xf;                                              // 0x001c76b0: andi $a0, $s1, 0xf
    if (a0 == 0) goto label_0x1c76c4;                           // 0x001c76b4: beqz $a0, 0x1c76c4
    v0 = 0x10;                                                  // 0x001c76b8: addiu $v0, $zero, 0x10
    a0 = a0 + -0x10;                                            // 0x001c76bc: addiu $a0, $a0, -0x10
label_0x1c76c0:
    v0 = 0x10;                                                  // 0x001c76c0: addiu $v0, $zero, 0x10
label_0x1c76c4:
    v1 = s0 & 0xf;                                              // 0x001c76c4: andi $v1, $s0, 0xf
    v0 = v0 - a0;                                               // 0x001c76c8: subu $v0, $v0, $a0
    if (s0 >= 0) goto label_0x1c76e0;                           // 0x001c76cc: bgez $s0, 0x1c76e0
    t0 = v0 + s1;                                               // 0x001c76d0: addu $t0, $v0, $s1
    if (v1 == 0) goto label_0x1c76e4;                           // 0x001c76d4: beqz $v1, 0x1c76e4
    v0 = 0x10;                                                  // 0x001c76d8: addiu $v0, $zero, 0x10
    v1 = v1 + -0x10;                                            // 0x001c76dc: addiu $v1, $v1, -0x10
label_0x1c76e0:
    v0 = 0x10;                                                  // 0x001c76e0: addiu $v0, $zero, 0x10
label_0x1c76e4:
    a3 = 0x31 << 16;                                            // 0x001c76e4: lui $a3, 0x31
    v0 = v0 - v1;                                               // 0x001c76e8: subu $v0, $v0, $v1
    a0 = 0x31 << 16;                                            // 0x001c76ec: lui $a0, 0x31
    a3 = a3 + 0x6680;                                           // 0x001c76f0: addiu $a3, $a3, 0x6680
    a0 = a0 + 0x6630;                                           // 0x001c76f8: addiu $a0, $a0, 0x6630
    t2 = v0 + s0;                                               // 0x001c76fc: addu $t2, $v0, $s0
    a2 = 1;                                                     // 0x001c7700: addiu $a2, $zero, 1
    func_001178a0();  // 0x1176a8                                // 0x001c7708: jal 0x1176a8
    if (v0 >= 0) goto label_0x1c7720;                           // 0x001c7710: bgez $v0, 0x1c7720
    /* nop */                                                   // 0x001c7714: nop 
    goto label_0x1c7724;                                        // 0x001c7718: b 0x1c7724
    v0 = -0x21;                                                 // 0x001c771c: addiu $v0, $zero, -0x21
label_0x1c7720:
label_0x1c7724:
    /* nop */                                                   // 0x001c7724: nop 
label_0x1c7728:
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x001c7730: ld.b $w0, -0x4f($zero)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x001c7734: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x001c7738: jr $ra
    sp = sp + 0x50;                                             // 0x001c773c: addiu $sp, $sp, 0x50
}