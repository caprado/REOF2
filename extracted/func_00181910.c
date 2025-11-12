void func_00181910() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x00181910: addiu $sp, $sp, -0x60
    v0 = 0x21 << 16;                                            // 0x00181914: lui $v0, 0x21
    v1 = g_00216010;  // Global at 0x00216010                   // 0x0018192c: lw $v1, 0x6010($v0)
    if (v1 != 0) goto label_0x181950;                           // 0x0018193c: bnez $v1, 0x181950
    v0 = 0x8101 << 16;                                          // 0x00181944: lui $v0, 0x8101
    goto label_0x181a0c;                                        // 0x00181948: b 0x181a0c
    v0 = v0 | 0x8001;                                           // 0x0018194c: ori $v0, $v0, 0x8001
label_0x181950:
    func_001887a0();  // 0x188758                                // 0x00181950: jal 0x188758
    if (s1 >= 0) goto label_0x181970;                           // 0x0018195c: bgez $s1, 0x181970
    /* nop */                                                   // 0x00181960: nop 
    v0 = 0x8101 << 16;                                          // 0x00181964: lui $v0, 0x8101
    goto label_0x181a0c;                                        // 0x00181968: b 0x181a0c
    v0 = v0 | 0x8002;                                           // 0x0018196c: ori $v0, $v0, 0x8002
label_0x181970:
    func_0010af38();  // 0x10ae00                                // 0x00181970: jal 0x10ae00
    v0 = ((unsigned)v0 < (unsigned)0x80) ? 1 : 0;               // 0x00181978: sltiu $v0, $v0, 0x80
    if (v0 == 0) goto label_0x181998;                           // 0x0018197c: beqz $v0, 0x181998
    /* nop */                                                   // 0x00181980: nop 
    func_0010af38();  // 0x10ae00                                // 0x00181984: jal 0x10ae00
    v0 = ((unsigned)v0 < (unsigned)0x80) ? 1 : 0;               // 0x0018198c: sltiu $v0, $v0, 0x80
    if (v0 != 0) goto label_0x1819a4;                           // 0x00181990: bnez $v0, 0x1819a4
    s2 = 0x27 << 16;                                            // 0x00181994: lui $s2, 0x27
label_0x181998:
    v0 = 0x8101 << 16;                                          // 0x00181998: lui $v0, 0x8101
    goto label_0x181a0c;                                        // 0x0018199c: b 0x181a0c
    v0 = v0 | 0x5b;                                             // 0x001819a0: ori $v0, $v0, 0x5b
label_0x1819a4:
    PollSema();  // 0x114320                                    // 0x001819a4: jal 0x114320
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x001819a8: lw $a0, -0x4e54($s2)
    v1 = 0x27 << 16;                                            // 0x001819ac: lui $v1, 0x27
    s0 = v1 + -0x5380;                                          // 0x001819b0: addiu $s0, $v1, -0x5380
    v0 = g_0026ac84;  // Global at 0x0026ac84                   // 0x001819b4: lw $v0, 4($s0)
    /* beqzl $v0, 0x1819d4 */                                   // 0x001819b8: beqzl $v0, 0x1819d4
    v0 = 9;                                                     // 0x001819bc: addiu $v0, $zero, 9
    iSignalSema();  // 0x114300                                 // 0x001819c0: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x001819c4: lw $a0, -0x4e54($s2)
    v0 = 0x8101 << 16;                                          // 0x001819c8: lui $v0, 0x8101
    goto label_0x181a0c;                                        // 0x001819cc: b 0x181a0c
    v0 = v0 | 0x10;                                             // 0x001819d0: ori $v0, $v0, 0x10
    g_0026ac80 = s1;  // Global at 0x0026ac80                   // 0x001819d4: sw $s1, -0x5380($v1)
    g_0026ac84 = v0;  // Global at 0x0026ac84                   // 0x001819d8: sw $v0, 4($s0)
    func_0010ae00();  // 0x10ac68                                // 0x001819e0: jal 0x10ac68
    a0 = s0 + 0x41c;                                            // 0x001819e4: addiu $a0, $s0, 0x41c
    a0 = s0 + 0x49c;                                            // 0x001819e8: addiu $a0, $s0, 0x49c
    func_0010ae00();  // 0x10ac68                                // 0x001819ec: jal 0x10ac68
    v1 = 0x27 << 16;                                            // 0x001819f4: lui $v1, 0x27
    iSignalSema();  // 0x114300                                 // 0x001819f8: jal 0x114300
    a0 = g_0026b1a4;  // Global at 0x0026b1a4                   // 0x001819fc: lw $a0, -0x4e5c($v1)
    iSignalSema();  // 0x114300                                 // 0x00181a00: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00181a04: lw $a0, -0x4e54($s2)
label_0x181a0c:
    return;                                                     // 0x00181a24: jr $ra
    sp = sp + 0x60;                                             // 0x00181a28: addiu $sp, $sp, 0x60
}