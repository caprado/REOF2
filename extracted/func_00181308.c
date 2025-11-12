void func_00181308() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x00181308: addiu $sp, $sp, -0x50
    v0 = 0x21 << 16;                                            // 0x0018130c: lui $v0, 0x21
    v1 = g_00216010;  // Global at 0x00216010                   // 0x0018131c: lw $v1, 0x6010($v0)
    if (v1 != 0) goto label_0x181340;                           // 0x0018132c: bnez $v1, 0x181340
    v0 = 0x8101 << 16;                                          // 0x00181334: lui $v0, 0x8101
    goto label_0x1813e4;                                        // 0x00181338: b 0x1813e4
    v0 = v0 | 0x8001;                                           // 0x0018133c: ori $v0, $v0, 0x8001
label_0x181340:
    func_001887a0();  // 0x188758                                // 0x00181340: jal 0x188758
    if (s0 >= 0) goto label_0x181360;                           // 0x0018134c: bgez $s0, 0x181360
    /* nop */                                                   // 0x00181350: nop 
    v0 = 0x8101 << 16;                                          // 0x00181354: lui $v0, 0x8101
    goto label_0x1813e4;                                        // 0x00181358: b 0x1813e4
    v0 = v0 | 0x8002;                                           // 0x0018135c: ori $v0, $v0, 0x8002
label_0x181360:
    func_0010af38();  // 0x10ae00                                // 0x00181360: jal 0x10ae00
    v0 = ((unsigned)v0 < (unsigned)0x80) ? 1 : 0;               // 0x00181368: sltiu $v0, $v0, 0x80
    if (v0 != 0) goto label_0x181380;                           // 0x0018136c: bnez $v0, 0x181380
    s2 = 0x27 << 16;                                            // 0x00181370: lui $s2, 0x27
    v0 = 0x8101 << 16;                                          // 0x00181374: lui $v0, 0x8101
    goto label_0x1813e4;                                        // 0x00181378: b 0x1813e4
    v0 = v0 | 0x5b;                                             // 0x0018137c: ori $v0, $v0, 0x5b
label_0x181380:
    PollSema();  // 0x114320                                    // 0x00181380: jal 0x114320
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00181384: lw $a0, -0x4e54($s2)
    v1 = 0x27 << 16;                                            // 0x00181388: lui $v1, 0x27
    s1 = v1 + -0x5380;                                          // 0x0018138c: addiu $s1, $v1, -0x5380
    v0 = g_0026ac84;  // Global at 0x0026ac84                   // 0x00181390: lw $v0, 4($s1)
    /* beqzl $v0, 0x1813b0 */                                   // 0x00181394: beqzl $v0, 0x1813b0
    v0 = 7;                                                     // 0x00181398: addiu $v0, $zero, 7
    iSignalSema();  // 0x114300                                 // 0x0018139c: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x001813a0: lw $a0, -0x4e54($s2)
    v0 = 0x8101 << 16;                                          // 0x001813a4: lui $v0, 0x8101
    goto label_0x1813e4;                                        // 0x001813a8: b 0x1813e4
    v0 = v0 | 0x10;                                             // 0x001813ac: ori $v0, $v0, 0x10
    g_0026ac80 = s0;  // Global at 0x0026ac80                   // 0x001813b0: sw $s0, -0x5380($v1)
    g_0026ac84 = v0;  // Global at 0x0026ac84                   // 0x001813b4: sw $v0, 4($s1)
    func_0010ae00();  // 0x10ac68                                // 0x001813bc: jal 0x10ac68
    a0 = s1 + 0x41c;                                            // 0x001813c0: addiu $a0, $s1, 0x41c
    v1 = 0x27 << 16;                                            // 0x001813c4: lui $v1, 0x27
    v0 = 0 | 0x8417;                                            // 0x001813c8: ori $v0, $zero, 0x8417
    a0 = g_0026b1a4;  // Global at 0x0026b1a4                   // 0x001813cc: lw $a0, -0x4e5c($v1)
    iSignalSema();  // 0x114300                                 // 0x001813d0: jal 0x114300
    g_0026ac8c = v0;  // Global at 0x0026ac8c                   // 0x001813d4: sw $v0, 0xc($s1)
    iSignalSema();  // 0x114300                                 // 0x001813d8: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x001813dc: lw $a0, -0x4e54($s2)
label_0x1813e4:
    return;                                                     // 0x001813f8: jr $ra
    sp = sp + 0x50;                                             // 0x001813fc: addiu $sp, $sp, 0x50
}