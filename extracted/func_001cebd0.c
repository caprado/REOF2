void func_001cebd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x70;                                            // 0x001cebd0: addiu $sp, $sp, -0x70
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001cebd8: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001cebe4: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001cebf0: addu.qb $zero, $sp, $s1
    if (s5 != 0) goto label_0x1cecb0;                           // 0x001cec00: bnez $s5, 0x1cecb0
    if (s4 != 0) goto label_0x1cec54;                           // 0x001cec08: bnez $s4, 0x1cec54
    goto label_0x1cec38;                                        // 0x001cec10: b 0x1cec38
label_0x1cec18:
    /* nop */                                                   // 0x001cec18: nop 
    /* nop */                                                   // 0x001cec1c: nop 
    /* nop */                                                   // 0x001cec20: nop 
    /* nop */                                                   // 0x001cec24: nop 
    /* nop */                                                   // 0x001cec28: nop 
    /* nop */                                                   // 0x001cec2c: nop 
    /* nop */                                                   // 0x001cec30: nop 
label_0x1cec38:
    func_0011c438();  // 11c438                                // 0x001cec3c: jal 0x11c438
    if (v0 < 0) goto label_0x1cec18;                            // 0x001cec44: bltz $v0, 0x1cec18
    /* nop */                                                   // 0x001cec48: nop 
    goto label_0x1ced58;                                        // 0x001cec4c: b 0x1ced58
    /* nop */                                                   // 0x001cec50: nop 
label_0x1cec54:
    goto label_0x1ceca0;                                        // 0x001cec54: b 0x1ceca0
    v1 = (s3 < s4) ? 1 : 0;                                     // 0x001cec58: slt $v1, $s3, $s4
label_0x1cec5c:
    func_0011c438();  // 11c438                                // 0x001cec60: jal 0x11c438
    at = (v0 < 0) ? 1 : 0;                                      // 0x001cec68: slt $at, $v0, $zero
    if (at != 0) goto label_0x1cec7c;                           // 0x001cec6c: bnez $at, 0x1cec7c
    /* nop */                                                   // 0x001cec70: nop 
    goto label_0x1ced5c;                                        // 0x001cec74: b 0x1ced5c
label_0x1cec7c:
    /* nop */                                                   // 0x001cec7c: nop 
    /* nop */                                                   // 0x001cec80: nop 
    /* nop */                                                   // 0x001cec84: nop 
    /* nop */                                                   // 0x001cec88: nop 
    /* nop */                                                   // 0x001cec8c: nop 
    /* nop */                                                   // 0x001cec90: nop 
    /* nop */                                                   // 0x001cec94: nop 
    s3 = s3 + 1;                                                // 0x001cec98: addiu $s3, $s3, 1
    v1 = (s3 < s4) ? 1 : 0;                                     // 0x001cec9c: slt $v1, $s3, $s4
label_0x1ceca0:
    if (v1 != 0) goto label_0x1cec5c;                           // 0x001ceca0: bnez $v1, 0x1cec5c
    goto label_0x1ced58;                                        // 0x001ceca8: b 0x1ced58
    /* nop */                                                   // 0x001cecac: nop 
label_0x1cecb0:
    if (s4 != 0) goto label_0x1ced00;                           // 0x001cecb0: bnez $s4, 0x1ced00
    goto label_0x1cece0;                                        // 0x001cecb8: b 0x1cece0
label_0x1cecc0:
    /* nop */                                                   // 0x001cecc0: nop 
    /* nop */                                                   // 0x001cecc4: nop 
    /* nop */                                                   // 0x001cecc8: nop 
    /* nop */                                                   // 0x001ceccc: nop 
    /* nop */                                                   // 0x001cecd0: nop 
    /* nop */                                                   // 0x001cecd4: nop 
    /* nop */                                                   // 0x001cecd8: nop 
label_0x1cece0:
    func_0011c458();  // 11c458                                // 0x001cece8: jal 0x11c458
    if (v0 < 0) goto label_0x1cecc0;                            // 0x001cecf0: bltz $v0, 0x1cecc0
    /* nop */                                                   // 0x001cecf4: nop 
    goto label_0x1ced58;                                        // 0x001cecf8: b 0x1ced58
    /* nop */                                                   // 0x001cecfc: nop 
label_0x1ced00:
    goto label_0x1ced50;                                        // 0x001ced00: b 0x1ced50
    v1 = (s3 < s4) ? 1 : 0;                                     // 0x001ced04: slt $v1, $s3, $s4
label_0x1ced08:
    func_0011c458();  // 11c458                                // 0x001ced10: jal 0x11c458
    at = (v0 < 0) ? 1 : 0;                                      // 0x001ced18: slt $at, $v0, $zero
    if (at != 0) goto label_0x1ced2c;                           // 0x001ced1c: bnez $at, 0x1ced2c
    /* nop */                                                   // 0x001ced20: nop 
    goto label_0x1ced58;                                        // 0x001ced24: b 0x1ced58
    /* nop */                                                   // 0x001ced28: nop 
label_0x1ced2c:
    /* nop */                                                   // 0x001ced2c: nop 
    /* nop */                                                   // 0x001ced30: nop 
    /* nop */                                                   // 0x001ced34: nop 
    /* nop */                                                   // 0x001ced38: nop 
    /* nop */                                                   // 0x001ced3c: nop 
    /* nop */                                                   // 0x001ced40: nop 
    /* nop */                                                   // 0x001ced44: nop 
    s3 = s3 + 1;                                                // 0x001ced48: addiu $s3, $s3, 1
    v1 = (s3 < s4) ? 1 : 0;                                     // 0x001ced4c: slt $v1, $s3, $s4
label_0x1ced50:
    if (v1 != 0) goto label_0x1ced08;                           // 0x001ced50: bnez $v1, 0x1ced08
label_0x1ced58:
label_0x1ced5c:
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001ced5c: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001ced60: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001ced68: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ced6c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ced70: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ced74: jr $ra
    sp = sp + 0x70;                                             // 0x001ced78: addiu $sp, $sp, 0x70
}