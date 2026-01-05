void func_001814e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x90;                                            // 0x001814e8: addiu $sp, $sp, -0x90
    v0 = 0x21 << 16;                                            // 0x001814ec: lui $v0, 0x21
    v1 = g_00216010;  // Global at 0x00216010                   // 0x0018151c: lw $v1, 0x6010($v0)
    if (v1 != 0) goto label_0x181540;                           // 0x0018152c: bnez $v1, 0x181540
    v0 = 0x8101 << 16;                                          // 0x00181534: lui $v0, 0x8101
    goto label_0x1815ec;                                        // 0x00181538: b 0x1815ec
    v0 = v0 | 0x8001;                                           // 0x0018153c: ori $v0, $v0, 0x8001
label_0x181540:
    func_00188758();  // 188758                                // 0x00181540: jal 0x188758
    if (s1 >= 0) goto label_0x181560;                           // 0x0018154c: bgez $s1, 0x181560
    /* nop */                                                   // 0x00181550: nop 
    v0 = 0x8101 << 16;                                          // 0x00181554: lui $v0, 0x8101
    goto label_0x1815ec;                                        // 0x00181558: b 0x1815ec
    v0 = v0 | 0x8002;                                           // 0x0018155c: ori $v0, $v0, 0x8002
label_0x181560:
    func_0010ae00();  // 10ae00                                // 0x00181560: jal 0x10ae00
    v0 = ((unsigned)v0 < (unsigned)0x80) ? 1 : 0;               // 0x00181568: sltiu $v0, $v0, 0x80
    if (v0 != 0) goto label_0x181580;                           // 0x0018156c: bnez $v0, 0x181580
    s2 = 0x27 << 16;                                            // 0x00181570: lui $s2, 0x27
    v0 = 0x8101 << 16;                                          // 0x00181574: lui $v0, 0x8101
    goto label_0x1815ec;                                        // 0x00181578: b 0x1815ec
    v0 = v0 | 0x5b;                                             // 0x0018157c: ori $v0, $v0, 0x5b
label_0x181580:
    PollSema();  // 0x114320                                    // 0x00181580: jal 0x114320
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00181584: lw $a0, -0x4e54($s2)
    v1 = 0x27 << 16;                                            // 0x00181588: lui $v1, 0x27
    s0 = v1 + -0x5380;                                          // 0x0018158c: addiu $s0, $v1, -0x5380
    v0 = g_0026ac84;  // Global at 0x0026ac84                   // 0x00181590: lw $v0, 4($s0)
    /* beqzl $v0, 0x1815b0 */                                   // 0x00181594: beqzl $v0, 0x1815b0
    v0 = 0xa;                                                   // 0x00181598: addiu $v0, $zero, 0xa
    iSignalSema();  // 0x114300                                 // 0x0018159c: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x001815a0: lw $a0, -0x4e54($s2)
    v0 = 0x8101 << 16;                                          // 0x001815a4: lui $v0, 0x8101
    goto label_0x1815ec;                                        // 0x001815a8: b 0x1815ec
    v0 = v0 | 0x10;                                             // 0x001815ac: ori $v0, $v0, 0x10
    g_0026ac80 = s1;  // Global at 0x0026ac80                   // 0x001815b0: sw $s1, -0x5380($v1)
    g_0026ac84 = v0;  // Global at 0x0026ac84                   // 0x001815b4: sw $v0, 4($s0)
    func_0010ac68();  // 10ac68                                // 0x001815bc: jal 0x10ac68
    a0 = s0 + 0x41c;                                            // 0x001815c0: addiu $a0, $s0, 0x41c
    g_0026ac98 = s4;  // Global at 0x0026ac98                   // 0x001815c4: sw $s4, 0x18($s0)
    v1 = 0x27 << 16;                                            // 0x001815c8: lui $v1, 0x27
    a0 = g_0026b1a4;  // Global at 0x0026b1a4                   // 0x001815cc: lw $a0, -0x4e5c($v1)
    g_0026ac8c = s5;  // Global at 0x0026ac8c                   // 0x001815d0: sw $s5, 0xc($s0)
    g_0026ac90 = s6;  // Global at 0x0026ac90                   // 0x001815d4: sw $s6, 0x10($s0)
    iSignalSema();  // 0x114300                                 // 0x001815d8: jal 0x114300
    g_0026ac94 = s7;  // Global at 0x0026ac94                   // 0x001815dc: sw $s7, 0x14($s0)
    iSignalSema();  // 0x114300                                 // 0x001815e0: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x001815e4: lw $a0, -0x4e54($s2)
label_0x1815ec:
    return;                                                     // 0x00181610: jr $ra
    sp = sp + 0x90;                                             // 0x00181614: addiu $sp, $sp, 0x90
}