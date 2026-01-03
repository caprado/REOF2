void func_00100b90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00100b90: addiu $sp, $sp, -0x40
    s0 = 0x1f << 16;                                            // 0x00100ba4: lui $s0, 0x1f
    func_001005b0();  // 1005b0                                // 0x00100ba8: jal 0x1005b0
    a0 = g_001edf28;  // Global at 0x001edf28                   // 0x00100bb0: lw $a0, -0x20d8($s0)
    SetOsdConfigParam();  // 0x114330                           // 0x00100bb4: jal 0x114330
    /* nop */                                                   // 0x00100bb8: nop 
    v1 = g_001edf28;  // Global at 0x001edf28                   // 0x00100bbc: lw $v1, -0x20d8($s0)
    if (v1 == v0) goto label_0x100bf0;                          // 0x00100bc0: beq $v1, $v0, 0x100bf0
    v0 = 0x1f << 16;                                            // 0x00100bc4: lui $v0, 0x1f
    v1 = g_001edf10;  // Global at 0x001edf10                   // 0x00100bc8: lw $v1, -0x20f0($v0)
    if (v1 <= 0) goto label_0x100c28;                           // 0x00100bcc: blez $v1, 0x100c28
    v0 = 0x1f << 16;                                            // 0x00100bd0: lui $v0, 0x1f
    a0 = 0x22 << 16;                                            // 0x00100bd4: lui $a0, 0x22
    a2 = g_001edf1c;  // Global at 0x001edf1c                   // 0x00100bd8: lw $a2, -0x20e4($v0)
    a0 = &str_0021fd98;  // "Libcdvd bind err N CMD\n"          // 0x00100bdc: addiu $a0, $a0, -0x268
    func_00116508();  // 116508                                // 0x00100be0: jal 0x116508
    goto label_0x100ce8;                                        // 0x00100be8: b 0x100ce8
label_0x100bf0:
    v0 = 0x25 << 16;                                            // 0x00100bf0: lui $v0, 0x25
    v1 = 0x1f << 16;                                            // 0x00100bf4: lui $v1, 0x1f
    a0 = g_0024b718;  // Global at 0x0024b718                   // 0x00100bf8: lw $a0, -0x48e8($v0)
    a1 = 0x25 << 16;                                            // 0x00100bfc: lui $a1, 0x25
    g_001edf1c = s1;  // Global at 0x001edf1c                   // 0x00100c00: sw $s1, -0x20e4($v1)
    iReferThreadStatus();  // 0x1141e0                          // 0x00100c04: jal 0x1141e0
    a1 = a1 + -0x48e0;                                          // 0x00100c08: addiu $a1, $a1, -0x48e0
    func_00100d98();  // 100d98                                // 0x00100c0c: jal 0x100d98
    a0 = 1;                                                     // 0x00100c10: addiu $a0, $zero, 1
    if (v0 == 0) goto label_0x100c30;                           // 0x00100c14: beqz $v0, 0x100c30
    a0 = g_001edf28;  // Global at 0x001edf28                   // 0x00100c1c: lw $a0, -0x20d8($s0)
    iSignalSema();  // 0x114300                                 // 0x00100c20: jal 0x114300
    /* nop */                                                   // 0x00100c24: nop 
label_0x100c28:
    goto label_0x100ce8;                                        // 0x00100c28: b 0x100ce8
label_0x100c30:
    func_00116d40();  // 116d40                                // 0x00100c30: jal 0x116d40
    s2 = 0x1f << 16;                                            // 0x00100c34: lui $s2, 0x1f
    v0 = g_001edf3c;  // Global at 0x001edf3c                   // 0x00100c38: lw $v0, -0x20c4($s2)
    if (v0 >= 0) goto label_0x100ce8;                           // 0x00100c3c: bgez $v0, 0x100ce8
    v0 = 1;                                                     // 0x00100c40: addiu $v0, $zero, 1
    goto label_0x100c74;                                        // 0x00100c44: b 0x100c74
    s1 = 0x1f << 16;                                            // 0x00100c48: lui $s1, 0x1f
    /* nop */                                                   // 0x00100c4c: nop 
label_0x100c50:
    v0 = 0x10 << 16;                                            // 0x00100c50: lui $v0, 0x10
    v1 = -1;                                                    // 0x00100c54: addiu $v1, $zero, -1
label_0x100c58:
    v0 = v0 + -1;                                               // 0x00100c58: addiu $v0, $v0, -1
    /* nop */                                                   // 0x00100c5c: nop 
    /* nop */                                                   // 0x00100c60: nop 
    /* nop */                                                   // 0x00100c64: nop 
    /* nop */                                                   // 0x00100c68: nop 
    if (v0 != v1) goto label_0x100c58;                          // 0x00100c6c: bne $v0, $v1, 0x100c58
    /* nop */                                                   // 0x00100c70: nop 
label_0x100c74:
    s0 = s1 + -0xf30;                                           // 0x00100c74: addiu $s0, $s1, -0xf30
label_0x100c78:
    a1 = 0x8000 << 16;                                          // 0x00100c78: lui $a1, 0x8000
    a1 = a1 | 0x595;                                            // 0x00100c80: ori $a1, $a1, 0x595
    func_001174d8();  // 1174d8                                // 0x00100c84: jal 0x1174d8
    if (v0 >= 0) goto label_0x100cdc;                           // 0x00100c8c: bgezl $v0, 0x100cdc
    v0 = g_001ef0f4;  // Global at 0x001ef0f4                   // 0x00100c90: lw $v0, 0x24($s0)
    v0 = 0x1f << 16;                                            // 0x00100c94: lui $v0, 0x1f
    v1 = g_001edf10;  // Global at 0x001edf10                   // 0x00100c98: lw $v1, -0x20f0($v0)
    if (v1 <= 0) goto label_0x100cb4;                           // 0x00100c9c: blez $v1, 0x100cb4
    v0 = 0x10 << 16;                                            // 0x00100ca0: lui $v0, 0x10
    a0 = 0x22 << 16;                                            // 0x00100ca4: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x00100ca8: jal 0x116508
    a0 = &str_0021fdc0;  // "N cmd wait\n"                      // 0x00100cac: addiu $a0, $a0, -0x240
    v0 = 0x10 << 16;                                            // 0x00100cb0: lui $v0, 0x10
label_0x100cb4:
    v1 = -1;                                                    // 0x00100cb4: addiu $v1, $zero, -1
label_0x100cb8:
    v0 = v0 + -1;                                               // 0x00100cb8: addiu $v0, $v0, -1
    /* nop */                                                   // 0x00100cbc: nop 
    /* nop */                                                   // 0x00100cc0: nop 
    /* nop */                                                   // 0x00100cc4: nop 
    /* nop */                                                   // 0x00100cc8: nop 
    if (v0 != v1) goto label_0x100cb8;                          // 0x00100ccc: bne $v0, $v1, 0x100cb8
    /* nop */                                                   // 0x00100cd0: nop 
    goto label_0x100c78;                                        // 0x00100cd4: b 0x100c78
    s0 = s1 + -0xf30;                                           // 0x00100cd8: addiu $s0, $s1, -0xf30
label_0x100cdc:
    if (v0 == 0) goto label_0x100c50;                           // 0x00100cdc: beqz $v0, 0x100c50
    v0 = 1;                                                     // 0x00100ce0: addiu $v0, $zero, 1
    g_001edf3c = 0;  // Global at 0x001edf3c                    // 0x00100ce4: sw $zero, -0x20c4($s2)
label_0x100ce8:
    return;                                                     // 0x00100cf8: jr $ra
    sp = sp + 0x40;                                             // 0x00100cfc: addiu $sp, $sp, 0x40
}