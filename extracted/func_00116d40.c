void func_00116d40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00116d40: addiu $sp, $sp, -0x40
    func_0011d378();  // 0x11d320                                // 0x00116d50: jal 0x11d320
    v1 = 0x1f << 16;                                            // 0x00116d58: lui $v1, 0x1f
    v0 = g_001f0350;  // Global at 0x001f0350                   // 0x00116d5c: lw $v0, 0x350($v1)
    if (v0 == 0) goto label_0x116d80;                           // 0x00116d60: beqz $v0, 0x116d80
    s1 = 1;                                                     // 0x00116d64: addiu $s1, $zero, 1
    return func_0011d390();  // Tail call                        // 0x00116d78: j 0x11d378
    sp = sp + 0x40;                                             // 0x00116d7c: addiu $sp, $sp, 0x40
label_0x116d80:
    func_0011d390();  // 0x11d378                                // 0x00116d80: jal 0x11d378
    g_001f0350 = s1;  // Global at 0x001f0350                   // 0x00116d84: sw $s1, 0x350($v1)
    func_00116860();  // 0x1165e0                                // 0x00116d88: jal 0x1165e0
    /* nop */                                                   // 0x00116d8c: nop 
    func_0011d378();  // 0x11d320                                // 0x00116d90: jal 0x11d320
    /* nop */                                                   // 0x00116d94: nop 
    v1 = 0x25 << 16;                                            // 0x00116d98: lui $v1, 0x25
    t0 = 0x25 << 16;                                            // 0x00116d9c: lui $t0, 0x25
    s2 = v1 + -0x36c0;                                          // 0x00116da0: addiu $s2, $v1, -0x36c0
    a2 = 0x25 << 16;                                            // 0x00116da4: lui $a2, 0x25
    a3 = 0x25 << 16;                                            // 0x00116da8: lui $a3, 0x25
    s0 = t0 + -0x1ec0;                                          // 0x00116dac: addiu $s0, $t0, -0x1ec0
    v1 = 0x20;                                                  // 0x00116db0: addiu $v1, $zero, 0x20
    v0 = 0x2000 << 16;                                          // 0x00116db4: lui $v0, 0x2000
    a2 = a2 + -0x2ec0;                                          // 0x00116db8: addiu $a2, $a2, -0x2ec0
    a3 = a3 + -0x26c0;                                          // 0x00116dbc: addiu $a3, $a3, -0x26c0
    a2 = a2 | v0;                                               // 0x00116dc0: or $a2, $a2, $v0
    a3 = a3 | v0;                                               // 0x00116dc4: or $a3, $a3, $v0
    g_0024e160 = v1;  // Global at 0x0024e160                   // 0x00116dc8: sw $v1, 0x20($s0)
    v0 = s2 | v0;                                               // 0x00116dcc: or $v0, $s2, $v0
    g_0024e140 = s1;  // Global at 0x0024e140                   // 0x00116dd0: sw $s1, -0x1ec0($t0)
    a1 = 0x11 << 16;                                            // 0x00116dd4: lui $a1, 0x11
    g_0024e154 = a2;  // Global at 0x0024e154                   // 0x00116dd8: sw $a2, 0x14($s0)
    a0 = 0x8000 << 16;                                          // 0x00116ddc: lui $a0, 0x8000
    g_0024e144 = v0;  // Global at 0x0024e144                   // 0x00116de0: sw $v0, 4($s0)
    a1 = a1 + 0x7040;                                           // 0x00116de4: addiu $a1, $a1, 0x7040
    g_0024e15c = a3;  // Global at 0x0024e15c                   // 0x00116de8: sw $a3, 0x1c($s0)
    a0 = a0 | 8;                                                // 0x00116dec: ori $a0, $a0, 8
    g_0024e148 = v1;  // Global at 0x0024e148                   // 0x00116df4: sw $v1, 8($s0)
    g_0024e14c = 0;  // Global at 0x0024e14c                    // 0x00116df8: sw $zero, 0xc($s0)
    g_0024e150 = 0;  // Global at 0x0024e150                    // 0x00116dfc: sw $zero, 0x10($s0)
    g_0024e158 = v1;  // Global at 0x0024e158                   // 0x00116e00: sw $v1, 0x18($s0)
    func_00116940();  // 0x1168c8                                // 0x00116e04: jal 0x1168c8
    g_0024e164 = 0;  // Global at 0x0024e164                    // 0x00116e08: sw $zero, 0x24($s0)
    a1 = 0x11 << 16;                                            // 0x00116e0c: lui $a1, 0x11
    a0 = 0x8000 << 16;                                          // 0x00116e10: lui $a0, 0x8000
    a1 = a1 + 0x7408;                                           // 0x00116e14: addiu $a1, $a1, 0x7408
    a0 = a0 | 9;                                                // 0x00116e18: ori $a0, $a0, 9
    func_00116940();  // 0x1168c8                                // 0x00116e1c: jal 0x1168c8
    a1 = 0x11 << 16;                                            // 0x00116e24: lui $a1, 0x11
    a0 = 0x8000 << 16;                                          // 0x00116e28: lui $a0, 0x8000
    a1 = a1 + 0x7618;                                           // 0x00116e2c: addiu $a1, $a1, 0x7618
    a0 = a0 | 0xa;                                              // 0x00116e30: ori $a0, $a0, 0xa
    func_00116940();  // 0x1168c8                                // 0x00116e34: jal 0x1168c8
    a1 = 0x11 << 16;                                            // 0x00116e3c: lui $a1, 0x11
    a0 = 0x8000 << 16;                                          // 0x00116e40: lui $a0, 0x8000
    a1 = a1 + 0x7150;                                           // 0x00116e44: addiu $a1, $a1, 0x7150
    func_00116940();  // 0x1168c8                                // 0x00116e4c: jal 0x1168c8
    a0 = a0 | 0xc;                                              // 0x00116e50: ori $a0, $a0, 0xc
    func_0011d390();  // 0x11d378                                // 0x00116e54: jal 0x11d378
    /* nop */                                                   // 0x00116e58: nop 
    a0 = 0x8000 << 16;                                          // 0x00116e5c: lui $a0, 0x8000
    Deci2Call();  // 0x1146f0                                   // 0x00116e60: jal 0x1146f0
    a0 = a0 | 2;                                                // 0x00116e64: ori $a0, $a0, 2
    if (v0 != 0) goto label_0x116ec8;                           // 0x00116e68: bnez $v0, 0x116ec8
    a1 = s2 + 0x40;                                             // 0x00116e70: addiu $a1, $s2, 0x40
    a0 = 0x8000 << 16;                                          // 0x00116e74: lui $a0, 0x8000
    g_0024c98c = s1;  // Global at 0x0024c98c                   // 0x00116e78: sw $s1, 0xc($a1)
    a0 = a0 | 2;                                                // 0x00116e7c: ori $a0, $a0, 2
    a2 = 0x10;                                                  // 0x00116e80: addiu $a2, $zero, 0x10
    func_00116b08();  // 0x116ac8                                // 0x00116e8c: jal 0x116ac8
    /* nop */                                                   // 0x00116e94: nop 
label_0x116e98:
    func_001165e0();  // 0x116598                                // 0x00116e98: jal 0x116598
    if (v0 == 0) goto label_0x116e98;                           // 0x00116ea0: beqz $v0, 0x116e98
    a0 = 0x8000 << 16;                                          // 0x00116ea8: lui $a0, 0x8000
    a1 = 1;                                                     // 0x00116eb0: addiu $a1, $zero, 1
    a0 = a0 | 2;                                                // 0x00116eb8: ori $a0, $a0, 2
    return sceSifGetReg();  // Tail call                        // 0x00116ec0: j 0x1146e0
    sp = sp + 0x40;                                             // 0x00116ec4: addiu $sp, $sp, 0x40
label_0x116ec8:
    return;                                                     // 0x00116ed4: jr $ra
    sp = sp + 0x40;                                             // 0x00116ed8: addiu $sp, $sp, 0x40
}