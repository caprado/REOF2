void func_001bcb70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001bcb70: addiu $sp, $sp, -0x10
    PollSema();  // 0x114320                                    // 0x001bcb78: jal 0x114320
    /* nop */                                                   // 0x001bcb7c: nop 
    func_0034da60();  // 0x34da60                               // 0x001bcb80: jal 0x34da60
    /* nop */                                                   // 0x001bcb84: nop 
    a0 = 0x24 << 16;                                            // 0x001bcb88: lui $a0, 0x24
    func_0011c140();  // 0x11c0a0                                // 0x001bcb8c: jal 0x11c0a0
    a0 = a0 + -0x2068;                                          // 0x001bcb90: addiu $a0, $a0, -0x2068
    if (v0 < 0) goto label_0x1bcc54;                            // 0x001bcb94: bltz $v0, 0x1bcc54
    /* nop */                                                   // 0x001bcb98: nop 
    a0 = 0x24 << 16;                                            // 0x001bcb9c: lui $a0, 0x24
    a1 = 0x4807;                                                // 0x001bcba0: addiu $a1, $zero, 0x4807
    a0 = a0 + -0x2060;                                          // 0x001bcba4: addiu $a0, $a0, -0x2060
    func_0011b140();  // 0x11af08                                // 0x001bcbb4: jal 0x11af08
    *(uint32_t*)((gp) + -0x631c) = v0;                          // 0x001bcbbc: sw $v0, -0x631c($gp)
    v1 = *(int32_t*)((gp) + -0x631c);                           // 0x001bcbc0: lw $v1, -0x631c($gp)
    v0 = 3;                                                     // 0x001bcbc4: addiu $v0, $zero, 3
    if (v1 == v0) goto label_0x1bcbd8;                          // 0x001bcbc8: beq $v1, $v0, 0x1bcbd8
    /* nop */                                                   // 0x001bcbcc: nop 
    goto label_0x1bcc08;                                        // 0x001bcbd0: b 0x1bcc08
    a0 = 0x24 << 16;                                            // 0x001bcbd4: lui $a0, 0x24
label_0x1bcbd8:
    a0 = 0x24 << 16;                                            // 0x001bcbd8: lui $a0, 0x24
    a1 = 0x4402;                                                // 0x001bcbdc: addiu $a1, $zero, 0x4402
    a0 = &str_0023dfa8;  // "cdrom0:"                           // 0x001bcbe0: addiu $a0, $a0, -0x2058
    func_0011b140();  // 0x11af08                                // 0x001bcbf0: jal 0x11af08
    if (v0 < 0) goto label_0x1bcbd8;                            // 0x001bcbf8: bltz $v0, 0x1bcbd8
    /* nop */                                                   // 0x001bcbfc: nop 
    goto label_0x1bcc7c;                                        // 0x001bcc00: b 0x1bcc7c
    /* nop */                                                   // 0x001bcc04: nop 
label_0x1bcc08:
    a1 = 0x5003;                                                // 0x001bcc08: addiu $a1, $zero, 0x5003
    a0 = a0 + -0x2050;                                          // 0x001bcc0c: addiu $a0, $a0, -0x2050
    func_0011b140();  // 0x11af08                                // 0x001bcc1c: jal 0x11af08
label_0x1bcc24:
    a0 = 0x24 << 16;                                            // 0x001bcc24: lui $a0, 0x24
    a1 = 0x4806;                                                // 0x001bcc28: addiu $a1, $zero, 0x4806
    a0 = a0 + -0x2060;                                          // 0x001bcc2c: addiu $a0, $a0, -0x2060
    func_0011b140();  // 0x11af08                                // 0x001bcc3c: jal 0x11af08
    if (v0 < 0) goto label_0x1bcc24;                            // 0x001bcc44: bltz $v0, 0x1bcc24
    /* nop */                                                   // 0x001bcc48: nop 
    goto label_0x1bcc7c;                                        // 0x001bcc4c: b 0x1bcc7c
    /* nop */                                                   // 0x001bcc50: nop 
label_0x1bcc54:
    a0 = 0x24 << 16;                                            // 0x001bcc54: lui $a0, 0x24
    a1 = 0x4402;                                                // 0x001bcc58: addiu $a1, $zero, 0x4402
    a0 = &str_0023dfa8;  // "cdrom0:"                           // 0x001bcc5c: addiu $a0, $a0, -0x2058
    func_0011b140();  // 0x11af08                                // 0x001bcc6c: jal 0x11af08
    if (v0 < 0) goto label_0x1bcc54;                            // 0x001bcc74: bltz $v0, 0x1bcc54
    /* nop */                                                   // 0x001bcc78: nop 
label_0x1bcc7c:
    a0 = 0x24 << 16;                                            // 0x001bcc7c: lui $a0, 0x24
    a1 = 0x4328;                                                // 0x001bcc80: addiu $a1, $zero, 0x4328
    a0 = &str_0023dfb8;  // "PP.SLPM-65692..OB2"                // 0x001bcc84: addiu $a0, $a0, -0x2048
    func_0011b140();  // 0x11af08                                // 0x001bcc94: jal 0x11af08
    if (v0 < 0) goto label_0x1bcc7c;                            // 0x001bcc9c: bltz $v0, 0x1bcc7c
    /* nop */                                                   // 0x001bcca0: nop 
label_0x1bcca4:
    a0 = 0x24 << 16;                                            // 0x001bcca4: lui $a0, 0x24
    a1 = 0x4323;                                                // 0x001bcca8: addiu $a1, $zero, 0x4323
    a0 = &str_0023dfb8;  // "PP.SLPM-65692..OB2"                // 0x001bccac: addiu $a0, $a0, -0x2048
    func_0011b140();  // 0x11af08                                // 0x001bccbc: jal 0x11af08
    if (v0 < 0) goto label_0x1bcca4;                            // 0x001bccc4: bltz $v0, 0x1bcca4
    /* nop */                                                   // 0x001bccc8: nop 
label_0x1bcccc:
    /* nop */                                                   // 0x001bcccc: nop 
    /* nop */                                                   // 0x001bccd0: nop 
    /* nop */                                                   // 0x001bccd4: nop 
    /* nop */                                                   // 0x001bccd8: nop 
    /* nop */                                                   // 0x001bccdc: nop 
    goto label_0x1bcccc;                                        // 0x001bcce0: b 0x1bcccc
    /* nop */                                                   // 0x001bcce4: nop 
    /* nop */                                                   // 0x001bcce8: nop 
    /* nop */                                                   // 0x001bccec: nop 
    return WaitSema();  // Tail call                            // 0x001bccf0: j 0x114310
    /* nop */                                                   // 0x001bccf4: nop 
    /* nop */                                                   // 0x001bccf8: nop 
    /* nop */                                                   // 0x001bccfc: nop 
    sp = sp + -0x130;                                           // 0x001bcd00: addiu $sp, $sp, -0x130
    a0 = 1;                                                     // 0x001bcd04: addiu $a0, $zero, 1
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001bcd0c: addu.qb $zero, $sp, $s1
    s0 = 0x22 << 16;                                            // 0x001bcd14: lui $s0, 0x22
    func_001bdd80();  // 0x1bdd30                                // 0x001bcd18: jal 0x1bdd30
    s0 = s0 + -0x3380;                                          // 0x001bcd1c: addiu $s0, $s0, -0x3380
    if (v0 < 0) goto label_0x1bcdd8;                            // 0x001bcd20: bltz $v0, 0x1bcdd8
    v1 = 1;                                                     // 0x001bcd24: addiu $v1, $zero, 1
    goto label_0x1bcdd8;                                        // 0x001bcd28: b 0x1bcdd8
    *(uint32_t*)((gp) + -0x632c) = v1;                          // 0x001bcd2c: sw $v1, -0x632c($gp)
label_0x1bcd30:
    func_001bddd0();  // 0x1bdd90                                // 0x001bcd30: jal 0x1bdd90
    a0 = sp + 0x30;                                             // 0x001bcd34: addiu $a0, $sp, 0x30
label_0x1bcd38:
    a0 = sp + 0x30;                                             // 0x001bcd38: addiu $a0, $sp, 0x30
    a1 = 1;                                                     // 0x001bcd3c: addiu $a1, $zero, 1
    func_001189b8();  // 0x118730                                // 0x001bcd40: jal 0x118730
    if (v0 < 0) goto label_0x1bcd38;                            // 0x001bcd4c: bltz $v0, 0x1bcd38
    /* nop */                                                   // 0x001bcd50: nop 
    func_00118d70();  // 0x118b38                                // 0x001bcd5c: jal 0x118b38
    a2 = 2;                                                     // 0x001bcd60: addiu $a2, $zero, 2
    func_00118b38();  // 0x1189b8                                // 0x001bcd68: jal 0x1189b8
    g_0021cc84 = v0;  // Global at 0x0021cc84                   // 0x001bcd6c: sw $v0, 4($s0)
    a0 = *(int32_t*)((gp) + -0x632c);                           // 0x001bcd70: lw $a0, -0x632c($gp)
    v1 = 1;                                                     // 0x001bcd74: addiu $v1, $zero, 1
    if (a0 != v1) goto label_0x1bcdd4;                          // 0x001bcd78: bne $a0, $v1, 0x1bcdd4
    /* nop */                                                   // 0x001bcd7c: nop 
    a1 = g_0021cc80;  // Global at 0x0021cc80                   // 0x001bcd80: lw $a1, 0($s0)
    func_001bdde0();  // 0x1bddd0                                // 0x001bcd84: jal 0x1bddd0
    a0 = sp + 0x30;                                             // 0x001bcd88: addiu $a0, $sp, 0x30
    a0 = sp + 0x30;                                             // 0x001bcd8c: addiu $a0, $sp, 0x30
    a1 = 1;                                                     // 0x001bcd90: addiu $a1, $zero, 1
    func_001189b8();  // 0x118730                                // 0x001bcd94: jal 0x118730
    if (v0 < 0) goto label_0x1bcdc0;                            // 0x001bcd9c: bltz $v0, 0x1bcdc0
    func_00118d70();  // 0x118b38                                // 0x001bcdac: jal 0x118b38
    a2 = 2;                                                     // 0x001bcdb0: addiu $a2, $zero, 2
    func_00118b38();  // 0x1189b8                                // 0x001bcdb8: jal 0x1189b8
    g_0021cc88 = v0;  // Global at 0x0021cc88                   // 0x001bcdbc: sw $v0, 8($s0)
label_0x1bcdc0:
    a0 = g_0021cc88;  // Global at 0x0021cc88                   // 0x001bcdc0: lw $a0, 8($s0)
    v1 = g_0021cc84;  // Global at 0x0021cc84                   // 0x001bcdc4: lw $v1, 4($s0)
    if (a0 == v1) goto label_0x1bcdd4;                          // 0x001bcdc8: beq $a0, $v1, 0x1bcdd4
    v1 = 2;                                                     // 0x001bcdcc: addiu $v1, $zero, 2
    *(uint32_t*)((gp) + -0x632c) = v1;                          // 0x001bcdd0: sw $v1, -0x632c($gp)
label_0x1bcdd4:
    s0 = s0 + 0xc;                                              // 0x001bcdd4: addiu $s0, $s0, 0xc
label_0x1bcdd8:
    a1 = g_0021cc8c;  // Global at 0x0021cc8c                   // 0x001bcdd8: lw $a1, 0($s0)
    if (a1 != 0) goto label_0x1bcd30;                           // 0x001bcddc: bnez $a1, 0x1bcd30
    /* nop */                                                   // 0x001bcde0: nop 
    v1 = *(int32_t*)((gp) + -0x632c);                           // 0x001bcde4: lw $v1, -0x632c($gp)
    if (v1 == 0) goto label_0x1bcdf8;                           // 0x001bcde8: beqz $v1, 0x1bcdf8
    /* nop */                                                   // 0x001bcdec: nop 
    func_001bdd90();  // 0x1bdd80                                // 0x001bcdf0: jal 0x1bdd80
    /* nop */                                                   // 0x001bcdf4: nop 
label_0x1bcdf8:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001bcdfc: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bce00: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bce04: jr $ra
    sp = sp + 0x130;                                            // 0x001bce08: addiu $sp, $sp, 0x130
}