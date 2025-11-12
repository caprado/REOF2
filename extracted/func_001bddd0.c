void func_001bddd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = 0x24 << 16;                                            // 0x001bddd4: lui $a1, 0x24
    return func_0010a570();  // Tail call                        // 0x001bddd8: j 0x10a4d8
    a1 = &str_0023e040;  // "hdd0:%s,"                          // 0x001bdddc: addiu $a1, $a1, -0x1fc0
    sp = sp + -0x30;                                            // 0x001bdde0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001bdde8: addu.qb $zero, $sp, $s1
    a1 = 0x24 << 16;                                            // 0x001bddfc: lui $a1, 0x24
    func_0010a570();  // 0x10a4d8                                // 0x001bde00: jal 0x10a4d8
    a1 = &str_0023e048;  // "icon.sys"                          // 0x001bde04: addiu $a1, $a1, -0x1fb8
    func_0010af38();  // 0x10ae00                                // 0x001bde08: jal 0x10ae00
    a3 = s1 + v0;                                               // 0x001bde10: addu $a3, $s1, $v0
    a2 = s0 & 0xffff;                                           // 0x001bde14: andi $a2, $s0, 0xffff
    goto label_0x1bdeac;                                        // 0x001bde1c: b 0x1bdeac
    a0 = 0 | 0xff53;                                            // 0x001bde20: ori $a0, $zero, 0xff53
label_0x1bde24:
    if (v1 != 0) goto label_0x1bde34;                           // 0x001bde24: bnez $v1, 0x1bde34
    a1 = a2 & 0xffff;                                           // 0x001bde28: andi $a1, $a2, 0xffff
    a1 = a2 & 0xffff;                                           // 0x001bde30: andi $a1, $a2, 0xffff
label_0x1bde34:
    v1 = a1 << 2;                                               // 0x001bde34: sll $v1, $a1, 2
    v1 = v1 + a1;                                               // 0x001bde38: addu $v1, $v1, $a1
    v1 = v1 << 1;                                               // 0x001bde3c: sll $v1, $v1, 1
    v1 = v1 + a1;                                               // 0x001bde40: addu $v1, $v1, $a1
    v1 = v1 << 4;                                               // 0x001bde44: sll $v1, $v1, 4
    /* divide: v1 / a0 -> hi:lo */                              // 0x001bde48: div $zero, $v1, $a0
    /* nop */                                                   // 0x001bde4c: nop 
    /* nop */                                                   // 0x001bde50: nop 
    /* mfhi $v1 */                                              // 0x001bde54
    a2 = v1 & 0xffff;                                           // 0x001bde58: andi $a2, $v1, 0xffff
    a1 = a2 & 0x7f;                                             // 0x001bde5c: andi $a1, $a2, 0x7f
    v1 = (a1 < 0x30) ? 1 : 0;                                   // 0x001bde60: slti $v1, $a1, 0x30
    if (v1 != 0) goto label_0x1bde78;                           // 0x001bde64: bnez $v1, 0x1bde78
    v1 = (a1 < 0x41) ? 1 : 0;                                   // 0x001bde68: slti $v1, $a1, 0x41
    at = (a1 < 0x3a) ? 1 : 0;                                   // 0x001bde6c: slti $at, $a1, 0x3a
    if (at != 0) goto label_0x1bdea0;                           // 0x001bde70: bnez $at, 0x1bdea0
    /* nop */                                                   // 0x001bde74: nop 
label_0x1bde78:
    if (v1 != 0) goto label_0x1bde88;                           // 0x001bde78: bnez $v1, 0x1bde88
    at = (a1 < 0x5b) ? 1 : 0;                                   // 0x001bde7c: slti $at, $a1, 0x5b
    if (at != 0) goto label_0x1bdea0;                           // 0x001bde80: bnez $at, 0x1bdea0
    /* nop */                                                   // 0x001bde84: nop 
label_0x1bde88:
    v1 = (a1 < 0x61) ? 1 : 0;                                   // 0x001bde88: slti $v1, $a1, 0x61
    if (v1 != 0) goto label_0x1bdeb0;                           // 0x001bde8c: bnez $v1, 0x1bdeb0
    v1 = (t0 < 8) ? 1 : 0;                                      // 0x001bde90: slti $v1, $t0, 8
    at = (a1 < 0x7b) ? 1 : 0;                                   // 0x001bde94: slti $at, $a1, 0x7b
    if (at == 0) goto label_0x1bdeac;                           // 0x001bde98: beqz $at, 0x1bdeac
    /* nop */                                                   // 0x001bde9c: nop 
label_0x1bdea0:
    *(uint8_t*)(a3) = a1;                                       // 0x001bdea0: sb $a1, 0($a3)
    t0 = t0 + 1;                                                // 0x001bdea4: addiu $t0, $t0, 1
    a3 = a3 + 1;                                                // 0x001bdea8: addiu $a3, $a3, 1
label_0x1bdeac:
    v1 = (t0 < 8) ? 1 : 0;                                      // 0x001bdeac: slti $v1, $t0, 8
label_0x1bdeb0:
    if (v1 != 0) goto label_0x1bde24;                           // 0x001bdeb0: bnez $v1, 0x1bde24
    v1 = a2 & 0xffff;                                           // 0x001bdeb4: andi $v1, $a2, 0xffff
    *(uint8_t*)(a3) = 0;                                        // 0x001bdeb8: sb $zero, 0($a3)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001bdec0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bdec4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bdec8: jr $ra
    sp = sp + 0x30;                                             // 0x001bdecc: addiu $sp, $sp, 0x30
}