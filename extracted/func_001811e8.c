void func_001811e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x001811e8: addiu $sp, $sp, -0x80
    v0 = 0x21 << 16;                                            // 0x001811ec: lui $v0, 0x21
    v1 = g_00216010;  // Global at 0x00216010                   // 0x00181214: lw $v1, 0x6010($v0)
    if (v1 != 0) goto label_0x181238;                           // 0x00181224: bnez $v1, 0x181238
    v0 = 0x8101 << 16;                                          // 0x0018122c: lui $v0, 0x8101
    goto label_0x1812e0;                                        // 0x00181230: b 0x1812e0
    v0 = v0 | 0x8001;                                           // 0x00181234: ori $v0, $v0, 0x8001
label_0x181238:
    func_001887a0();  // 0x188758                                // 0x00181238: jal 0x188758
    if (s1 >= 0) goto label_0x181258;                           // 0x00181244: bgez $s1, 0x181258
    /* nop */                                                   // 0x00181248: nop 
    v0 = 0x8101 << 16;                                          // 0x0018124c: lui $v0, 0x8101
    goto label_0x1812e0;                                        // 0x00181250: b 0x1812e0
    v0 = v0 | 0x8002;                                           // 0x00181254: ori $v0, $v0, 0x8002
label_0x181258:
    func_0010af38();  // 0x10ae00                                // 0x00181258: jal 0x10ae00
    v0 = ((unsigned)v0 < (unsigned)0x80) ? 1 : 0;               // 0x00181260: sltiu $v0, $v0, 0x80
    if (v0 != 0) goto label_0x181278;                           // 0x00181264: bnez $v0, 0x181278
    s2 = 0x27 << 16;                                            // 0x00181268: lui $s2, 0x27
    v0 = 0x8101 << 16;                                          // 0x0018126c: lui $v0, 0x8101
    goto label_0x1812e0;                                        // 0x00181270: b 0x1812e0
    v0 = v0 | 0x5b;                                             // 0x00181274: ori $v0, $v0, 0x5b
label_0x181278:
    PollSema();  // 0x114320                                    // 0x00181278: jal 0x114320
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x0018127c: lw $a0, -0x4e54($s2)
    v1 = 0x27 << 16;                                            // 0x00181280: lui $v1, 0x27
    s0 = v1 + -0x5380;                                          // 0x00181284: addiu $s0, $v1, -0x5380
    v0 = g_0026ac84;  // Global at 0x0026ac84                   // 0x00181288: lw $v0, 4($s0)
    /* beqzl $v0, 0x1812a8 */                                   // 0x0018128c: beqzl $v0, 0x1812a8
    v0 = 6;                                                     // 0x00181290: addiu $v0, $zero, 6
    iSignalSema();  // 0x114300                                 // 0x00181294: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00181298: lw $a0, -0x4e54($s2)
    v0 = 0x8101 << 16;                                          // 0x0018129c: lui $v0, 0x8101
    goto label_0x1812e0;                                        // 0x001812a0: b 0x1812e0
    v0 = v0 | 0x10;                                             // 0x001812a4: ori $v0, $v0, 0x10
    g_0026ac80 = s1;  // Global at 0x0026ac80                   // 0x001812a8: sw $s1, -0x5380($v1)
    g_0026ac84 = v0;  // Global at 0x0026ac84                   // 0x001812ac: sw $v0, 4($s0)
    func_0010ae00();  // 0x10ac68                                // 0x001812b4: jal 0x10ac68
    a0 = s0 + 0x41c;                                            // 0x001812b8: addiu $a0, $s0, 0x41c
    g_0026ac94 = s4;  // Global at 0x0026ac94                   // 0x001812bc: sw $s4, 0x14($s0)
    v1 = 0x27 << 16;                                            // 0x001812c0: lui $v1, 0x27
    a0 = g_0026b1a4;  // Global at 0x0026b1a4                   // 0x001812c4: lw $a0, -0x4e5c($v1)
    g_0026ac8c = s5;  // Global at 0x0026ac8c                   // 0x001812c8: sw $s5, 0xc($s0)
    iSignalSema();  // 0x114300                                 // 0x001812cc: jal 0x114300
    g_0026ac90 = s6;  // Global at 0x0026ac90                   // 0x001812d0: sw $s6, 0x10($s0)
    iSignalSema();  // 0x114300                                 // 0x001812d4: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x001812d8: lw $a0, -0x4e54($s2)
label_0x1812e0:
    return;                                                     // 0x00181300: jr $ra
    sp = sp + 0x80;                                             // 0x00181304: addiu $sp, $sp, 0x80
}