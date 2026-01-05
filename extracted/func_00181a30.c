void func_00181a30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00181a30: addiu $sp, $sp, -0x40
    v0 = 0x21 << 16;                                            // 0x00181a34: lui $v0, 0x21
    v1 = g_00216010;  // Global at 0x00216010                   // 0x00181a44: lw $v1, 0x6010($v0)
    if (v1 != 0) goto label_0x181a64;                           // 0x00181a50: bnez $v1, 0x181a64
    v0 = 0x8101 << 16;                                          // 0x00181a58: lui $v0, 0x8101
    goto label_0x181b00;                                        // 0x00181a5c: b 0x181b00
    v0 = v0 | 0x8001;                                           // 0x00181a60: ori $v0, $v0, 0x8001
label_0x181a64:
    func_00188758();  // 188758                                // 0x00181a64: jal 0x188758
    if (s0 >= 0) goto label_0x181a84;                           // 0x00181a70: bgez $s0, 0x181a84
    /* nop */                                                   // 0x00181a74: nop 
    v0 = 0x8101 << 16;                                          // 0x00181a78: lui $v0, 0x8101
    goto label_0x181b00;                                        // 0x00181a7c: b 0x181b00
    v0 = v0 | 0x8002;                                           // 0x00181a80: ori $v0, $v0, 0x8002
label_0x181a84:
    func_0010ae00();  // 10ae00                                // 0x00181a84: jal 0x10ae00
    v0 = ((unsigned)v0 < (unsigned)0x80) ? 1 : 0;               // 0x00181a8c: sltiu $v0, $v0, 0x80
    if (v0 != 0) goto label_0x181aa4;                           // 0x00181a90: bnez $v0, 0x181aa4
    s1 = 0x27 << 16;                                            // 0x00181a94: lui $s1, 0x27
    v0 = 0x8101 << 16;                                          // 0x00181a98: lui $v0, 0x8101
    goto label_0x181b00;                                        // 0x00181a9c: b 0x181b00
    v0 = v0 | 0x5b;                                             // 0x00181aa0: ori $v0, $v0, 0x5b
label_0x181aa4:
    PollSema();  // 0x114320                                    // 0x00181aa4: jal 0x114320
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00181aa8: lw $a0, -0x4e54($s1)
    v1 = 0x27 << 16;                                            // 0x00181aac: lui $v1, 0x27
    a0 = v1 + -0x5380;                                          // 0x00181ab0: addiu $a0, $v1, -0x5380
    v0 = g_0026ac84;  // Global at 0x0026ac84                   // 0x00181ab4: lw $v0, 4($a0)
    /* beqzl $v0, 0x181ad4 */                                   // 0x00181ab8: beqzl $v0, 0x181ad4
    v0 = 0xf;                                                   // 0x00181abc: addiu $v0, $zero, 0xf
    iSignalSema();  // 0x114300                                 // 0x00181ac0: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00181ac4: lw $a0, -0x4e54($s1)
    v0 = 0x8101 << 16;                                          // 0x00181ac8: lui $v0, 0x8101
    goto label_0x181b00;                                        // 0x00181acc: b 0x181b00
    v0 = v0 | 0x10;                                             // 0x00181ad0: ori $v0, $v0, 0x10
    g_0026ac80 = s0;  // Global at 0x0026ac80                   // 0x00181ad4: sw $s0, -0x5380($v1)
    g_0026ac84 = v0;  // Global at 0x0026ac84                   // 0x00181ad8: sw $v0, 4($a0)
    func_0010ac68();  // 10ac68                                // 0x00181ae0: jal 0x10ac68
    a0 = a0 + 0x41c;                                            // 0x00181ae4: addiu $a0, $a0, 0x41c
    v1 = 0x27 << 16;                                            // 0x00181ae8: lui $v1, 0x27
    iSignalSema();  // 0x114300                                 // 0x00181aec: jal 0x114300
    a0 = g_0026b1a4;  // Global at 0x0026b1a4                   // 0x00181af0: lw $a0, -0x4e5c($v1)
    iSignalSema();  // 0x114300                                 // 0x00181af4: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00181af8: lw $a0, -0x4e54($s1)
label_0x181b00:
    return;                                                     // 0x00181b10: jr $ra
    sp = sp + 0x40;                                             // 0x00181b14: addiu $sp, $sp, 0x40
}