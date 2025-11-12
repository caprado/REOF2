void func_001809f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001809f0: addiu $sp, $sp, -0x30
    s1 = 0x21 << 16;                                            // 0x001809f8: lui $s1, 0x21
    v0 = g_00216010;  // Global at 0x00216010                   // 0x00180a00: lw $v0, 0x6010($s1)
    if (v0 != 0) goto label_0x180a18;                           // 0x00180a04: bnez $v0, 0x180a18
    v0 = 0x8101 << 16;                                          // 0x00180a0c: lui $v0, 0x8101
    goto label_0x180ab4;                                        // 0x00180a10: b 0x180ab4
    v0 = v0 | 0x8001;                                           // 0x00180a14: ori $v0, $v0, 0x8001
label_0x180a18:
    v0 = 0x27 << 16;                                            // 0x00180a18: lui $v0, 0x27
    v1 = g_0026ac84;  // Global at 0x0026ac84                   // 0x00180a1c: lw $v1, -0x537c($v0)
    if (v1 == 0) goto label_0x180a30;                           // 0x00180a20: beqz $v1, 0x180a30
    func_00181e28();  // 0x181e00                                // 0x00180a28: jal 0x181e00
label_0x180a30:
    s0 = 0x27 << 16;                                            // 0x00180a30: lui $s0, 0x27
    a0 = g_0026b1a0;  // Global at 0x0026b1a0                   // 0x00180a34: lw $a0, -0x4e60($s0)
    if (a0 < 0) goto label_0x180a64;                            // 0x00180a38: bltzl $a0, 0x180a64
    s0 = s0 + -0x4e60;                                          // 0x00180a3c: addiu $s0, $s0, -0x4e60
    ChangeThreadPriority();  // 0x114130                        // 0x00180a40: jal 0x114130
    /* nop */                                                   // 0x00180a44: nop 
    if (v0 >= 0) goto label_0x180a58;                           // 0x00180a48: bgez $v0, 0x180a58
    a0 = 0x23 << 16;                                            // 0x00180a4c: lui $a0, 0x23
    func_00116598();  // 0x116508                                // 0x00180a50: jal 0x116508
    a0 = &str_00229ed8;  // "Sony PS2 Memory Card Format"       // 0x00180a54: addiu $a0, $a0, -0x6128
label_0x180a58:
    StartThread();  // 0x1140f0                                 // 0x00180a58: jal 0x1140f0
    a0 = g_00266340;  // Global at 0x00266340                   // 0x00180a5c: lw $a0, -0x4e60($s0)
    s0 = s0 + -0x4e60;                                          // 0x00180a60: addiu $s0, $s0, -0x4e60
label_0x180a64:
    a0 = g_00266344;  // Global at 0x00266344                   // 0x00180a64: lw $a0, 4($s0)
    if (a0 < 0) goto label_0x180a7c;                            // 0x00180a68: bltzl $a0, 0x180a7c
    a0 = g_00266348;  // Global at 0x00266348                   // 0x00180a6c: lw $a0, 8($s0)
    SignalSema();  // 0x1142f0                                  // 0x00180a70: jal 0x1142f0
    /* nop */                                                   // 0x00180a74: nop 
    a0 = g_00266348;  // Global at 0x00266348                   // 0x00180a78: lw $a0, 8($s0)
label_0x180a7c:
    if (a0 < 0) goto label_0x180a90;                            // 0x00180a7c: bltz $a0, 0x180a90
    v0 = 0x27 << 16;                                            // 0x00180a80: lui $v0, 0x27
    SignalSema();  // 0x1142f0                                  // 0x00180a84: jal 0x1142f0
    /* nop */                                                   // 0x00180a88: nop 
    v0 = 0x27 << 16;                                            // 0x00180a8c: lui $v0, 0x27
label_0x180a90:
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00180a90: lw $a0, -0x4e54($v0)
    if (a0 < 0) goto label_0x180aa4;                            // 0x00180a94: bltz $a0, 0x180aa4
    /* nop */                                                   // 0x00180a98: nop 
    SignalSema();  // 0x1142f0                                  // 0x00180a9c: jal 0x1142f0
    /* nop */                                                   // 0x00180aa0: nop 
label_0x180aa4:
    func_00187838();  // 0x1877c0                                // 0x00180aa4: jal 0x1877c0
    /* nop */                                                   // 0x00180aa8: nop 
    g_00216010 = 0;  // Global at 0x00216010                    // 0x00180aac: sw $zero, 0x6010($s1)
label_0x180ab4:
    return;                                                     // 0x00180ac0: jr $ra
    sp = sp + 0x30;                                             // 0x00180ac4: addiu $sp, $sp, 0x30
}