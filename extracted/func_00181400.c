void func_00181400() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00181400: addiu $sp, $sp, -0x40
    v0 = 0x21 << 16;                                            // 0x00181404: lui $v0, 0x21
    v1 = g_00216010;  // Global at 0x00216010                   // 0x00181414: lw $v1, 0x6010($v0)
    if (v1 != 0) goto label_0x181434;                           // 0x00181420: bnez $v1, 0x181434
    v0 = 0x8101 << 16;                                          // 0x00181428: lui $v0, 0x8101
    goto label_0x1814d0;                                        // 0x0018142c: b 0x1814d0
    v0 = v0 | 0x8001;                                           // 0x00181430: ori $v0, $v0, 0x8001
label_0x181434:
    func_001887a0();  // 0x188758                                // 0x00181434: jal 0x188758
    if (s0 >= 0) goto label_0x181454;                           // 0x00181440: bgez $s0, 0x181454
    /* nop */                                                   // 0x00181444: nop 
    v0 = 0x8101 << 16;                                          // 0x00181448: lui $v0, 0x8101
    goto label_0x1814d0;                                        // 0x0018144c: b 0x1814d0
    v0 = v0 | 0x8002;                                           // 0x00181450: ori $v0, $v0, 0x8002
label_0x181454:
    func_0010af38();  // 0x10ae00                                // 0x00181454: jal 0x10ae00
    v0 = ((unsigned)v0 < (unsigned)0x80) ? 1 : 0;               // 0x0018145c: sltiu $v0, $v0, 0x80
    if (v0 != 0) goto label_0x181474;                           // 0x00181460: bnez $v0, 0x181474
    s1 = 0x27 << 16;                                            // 0x00181464: lui $s1, 0x27
    v0 = 0x8101 << 16;                                          // 0x00181468: lui $v0, 0x8101
    goto label_0x1814d0;                                        // 0x0018146c: b 0x1814d0
    v0 = v0 | 0x5b;                                             // 0x00181470: ori $v0, $v0, 0x5b
label_0x181474:
    PollSema();  // 0x114320                                    // 0x00181474: jal 0x114320
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00181478: lw $a0, -0x4e54($s1)
    v1 = 0x27 << 16;                                            // 0x0018147c: lui $v1, 0x27
    a0 = v1 + -0x5380;                                          // 0x00181480: addiu $a0, $v1, -0x5380
    v0 = g_0026ac84;  // Global at 0x0026ac84                   // 0x00181484: lw $v0, 4($a0)
    /* beqzl $v0, 0x1814a4 */                                   // 0x00181488: beqzl $v0, 0x1814a4
    v0 = 8;                                                     // 0x0018148c: addiu $v0, $zero, 8
    iSignalSema();  // 0x114300                                 // 0x00181490: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00181494: lw $a0, -0x4e54($s1)
    v0 = 0x8101 << 16;                                          // 0x00181498: lui $v0, 0x8101
    goto label_0x1814d0;                                        // 0x0018149c: b 0x1814d0
    v0 = v0 | 0x10;                                             // 0x001814a0: ori $v0, $v0, 0x10
    g_0026ac80 = s0;  // Global at 0x0026ac80                   // 0x001814a4: sw $s0, -0x5380($v1)
    g_0026ac84 = v0;  // Global at 0x0026ac84                   // 0x001814a8: sw $v0, 4($a0)
    func_0010ae00();  // 0x10ac68                                // 0x001814b0: jal 0x10ac68
    a0 = a0 + 0x41c;                                            // 0x001814b4: addiu $a0, $a0, 0x41c
    v1 = 0x27 << 16;                                            // 0x001814b8: lui $v1, 0x27
    iSignalSema();  // 0x114300                                 // 0x001814bc: jal 0x114300
    a0 = g_0026b1a4;  // Global at 0x0026b1a4                   // 0x001814c0: lw $a0, -0x4e5c($v1)
    iSignalSema();  // 0x114300                                 // 0x001814c4: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x001814c8: lw $a0, -0x4e54($s1)
label_0x1814d0:
    return;                                                     // 0x001814e0: jr $ra
    sp = sp + 0x40;                                             // 0x001814e4: addiu $sp, $sp, 0x40
}