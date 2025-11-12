void func_001810c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x001810c8: addiu $sp, $sp, -0x80
    v0 = 0x21 << 16;                                            // 0x001810cc: lui $v0, 0x21
    v1 = g_00216010;  // Global at 0x00216010                   // 0x001810f4: lw $v1, 0x6010($v0)
    if (v1 != 0) goto label_0x181118;                           // 0x00181104: bnez $v1, 0x181118
    v0 = 0x8101 << 16;                                          // 0x0018110c: lui $v0, 0x8101
    goto label_0x1811c0;                                        // 0x00181110: b 0x1811c0
    v0 = v0 | 0x8001;                                           // 0x00181114: ori $v0, $v0, 0x8001
label_0x181118:
    func_001887a0();  // 0x188758                                // 0x00181118: jal 0x188758
    if (s1 >= 0) goto label_0x181138;                           // 0x00181124: bgez $s1, 0x181138
    /* nop */                                                   // 0x00181128: nop 
    v0 = 0x8101 << 16;                                          // 0x0018112c: lui $v0, 0x8101
    goto label_0x1811c0;                                        // 0x00181130: b 0x1811c0
    v0 = v0 | 0x8002;                                           // 0x00181134: ori $v0, $v0, 0x8002
label_0x181138:
    func_0010af38();  // 0x10ae00                                // 0x00181138: jal 0x10ae00
    v0 = ((unsigned)v0 < (unsigned)0x80) ? 1 : 0;               // 0x00181140: sltiu $v0, $v0, 0x80
    if (v0 != 0) goto label_0x181158;                           // 0x00181144: bnez $v0, 0x181158
    s2 = 0x27 << 16;                                            // 0x00181148: lui $s2, 0x27
    v0 = 0x8101 << 16;                                          // 0x0018114c: lui $v0, 0x8101
    goto label_0x1811c0;                                        // 0x00181150: b 0x1811c0
    v0 = v0 | 0x5b;                                             // 0x00181154: ori $v0, $v0, 0x5b
label_0x181158:
    PollSema();  // 0x114320                                    // 0x00181158: jal 0x114320
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x0018115c: lw $a0, -0x4e54($s2)
    v1 = 0x27 << 16;                                            // 0x00181160: lui $v1, 0x27
    s0 = v1 + -0x5380;                                          // 0x00181164: addiu $s0, $v1, -0x5380
    v0 = g_0026ac84;  // Global at 0x0026ac84                   // 0x00181168: lw $v0, 4($s0)
    /* beqzl $v0, 0x181188 */                                   // 0x0018116c: beqzl $v0, 0x181188
    v0 = 5;                                                     // 0x00181170: addiu $v0, $zero, 5
    iSignalSema();  // 0x114300                                 // 0x00181174: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00181178: lw $a0, -0x4e54($s2)
    v0 = 0x8101 << 16;                                          // 0x0018117c: lui $v0, 0x8101
    goto label_0x1811c0;                                        // 0x00181180: b 0x1811c0
    v0 = v0 | 0x10;                                             // 0x00181184: ori $v0, $v0, 0x10
    g_0026ac80 = s1;  // Global at 0x0026ac80                   // 0x00181188: sw $s1, -0x5380($v1)
    g_0026ac84 = v0;  // Global at 0x0026ac84                   // 0x0018118c: sw $v0, 4($s0)
    func_0010ae00();  // 0x10ac68                                // 0x00181194: jal 0x10ac68
    a0 = s0 + 0x41c;                                            // 0x00181198: addiu $a0, $s0, 0x41c
    g_0026ac94 = s4;  // Global at 0x0026ac94                   // 0x0018119c: sw $s4, 0x14($s0)
    v1 = 0x27 << 16;                                            // 0x001811a0: lui $v1, 0x27
    a0 = g_0026b1a4;  // Global at 0x0026b1a4                   // 0x001811a4: lw $a0, -0x4e5c($v1)
    g_0026ac8c = s5;  // Global at 0x0026ac8c                   // 0x001811a8: sw $s5, 0xc($s0)
    iSignalSema();  // 0x114300                                 // 0x001811ac: jal 0x114300
    g_0026ac90 = s6;  // Global at 0x0026ac90                   // 0x001811b0: sw $s6, 0x10($s0)
    iSignalSema();  // 0x114300                                 // 0x001811b4: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x001811b8: lw $a0, -0x4e54($s2)
label_0x1811c0:
    return;                                                     // 0x001811e0: jr $ra
    sp = sp + 0x80;                                             // 0x001811e4: addiu $sp, $sp, 0x80
}