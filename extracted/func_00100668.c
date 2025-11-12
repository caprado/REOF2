void func_00100668() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x1f << 16;                                            // 0x00100668: lui $v0, 0x1f
    sp = sp + -0x20;                                            // 0x0010066c: addiu $sp, $sp, -0x20
    v1 = g_001edf14;  // Global at 0x001edf14                   // 0x00100670: lw $v1, -0x20ec($v0)
    if (v1 == 0) goto label_0x1006a0;                           // 0x00100678: beqz $v1, 0x1006a0
    v1 = 0x1f << 16;                                            // 0x00100680: lui $v1, 0x1f
    v0 = -1;                                                    // 0x00100684: addiu $v0, $zero, -1
    g_001edf58 = v0;  // Global at 0x001edf58                   // 0x00100688: sw $v0, -0x20a8($v1)
    s0 = 0x1f << 16;                                            // 0x0010068c: lui $s0, 0x1f
    iSignalSema();  // 0x114300                                 // 0x00100690: jal 0x114300
    a0 = g_001edf20;  // Global at 0x001edf20                   // 0x00100694: lw $a0, -0x20e0($s0)
    goto label_0x1006a8;                                        // 0x00100698: b 0x1006a8
    v0 = 0x1f << 16;                                            // 0x0010069c: lui $v0, 0x1f
label_0x1006a0:
    s0 = 0x1f << 16;                                            // 0x001006a0: lui $s0, 0x1f
    v0 = 0x1f << 16;                                            // 0x001006a4: lui $v0, 0x1f
label_0x1006a8:
    SignalSema();  // 0x1142f0                                  // 0x001006a8: jal 0x1142f0
    a0 = g_001edf28;  // Global at 0x001edf28                   // 0x001006ac: lw $a0, -0x20d8($v0)
    v1 = 0x1f << 16;                                            // 0x001006b0: lui $v1, 0x1f
    SignalSema();  // 0x1142f0                                  // 0x001006b4: jal 0x1142f0
    a0 = g_001edf2c;  // Global at 0x001edf2c                   // 0x001006b8: lw $a0, -0x20d4($v1)
    v1 = 0x1f << 16;                                            // 0x001006bc: lui $v1, 0x1f
    SignalSema();  // 0x1142f0                                  // 0x001006c0: jal 0x1142f0
    a0 = g_001edf30;  // Global at 0x001edf30                   // 0x001006c4: lw $a0, -0x20d0($v1)
    SignalSema();  // 0x1142f0                                  // 0x001006c8: jal 0x1142f0
    a0 = g_001edf20;  // Global at 0x001edf20                   // 0x001006cc: lw $a0, -0x20e0($s0)
    func_0011d378();  // 0x11d320                                // 0x001006d0: jal 0x11d320
    /* nop */                                                   // 0x001006d4: nop 
    a0 = 0x8000 << 16;                                          // 0x001006d8: lui $a0, 0x8000
    func_00116990();  // 0x116940                                // 0x001006e0: jal 0x116940
    a0 = a0 | 0x12;                                             // 0x001006e4: ori $a0, $a0, 0x12
    if (s0 == 0) goto label_0x1006fc;                           // 0x001006e8: beqz $s0, 0x1006fc
    return func_0011d390();  // Tail call                        // 0x001006f4: j 0x11d378
    sp = sp + 0x20;                                             // 0x001006f8: addiu $sp, $sp, 0x20
label_0x1006fc:
    return;                                                     // 0x00100700: jr $ra
    sp = sp + 0x20;                                             // 0x00100704: addiu $sp, $sp, 0x20
}