void func_0011af08() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_14, local_18, local_24, local_30;
    
    sp = sp + -0xe0;                                            // 0x0011af08: addiu $sp, $sp, -0xe0
    a0 = 0x17;                                                  // 0x0011af44: addiu $a0, $zero, 0x17
    func_00118360();  // 0x118330                                // 0x0011af4c: jal 0x118330
    v0 = 0x25 << 16;                                            // 0x0011af54: lui $v0, 0x25
    s2 = v0 + -0x1e40;                                          // 0x0011af58: addiu $s2, $v0, -0x1e40
    v0 = 0x1f << 16;                                            // 0x0011af5c: lui $v0, 0x1f
    v1 = g_001f03dc;  // Global at 0x001f03dc                   // 0x0011af60: lw $v1, 0x3dc($v0)
    /* bnezl $v1, 0x11af78 */                                   // 0x0011af64: bnezl $v1, 0x11af78
    v0 = g_00250000;  // Global at 0x00250000                   // 0x0011af68: lbu $v0, 0($s1)
    func_00118668();  // 0x118460                                // 0x0011af6c: jal 0x118460
    /* nop */                                                   // 0x0011af70: nop 
    v0 = g_00250000;  // Global at 0x00250000                   // 0x0011af74: lbu $v0, 0($s1)
    v1 = v0 << 0x18;                                            // 0x0011af7c: sll $v1, $v0, 0x18
    if (v1 == 0) goto label_0x11afbc;                           // 0x0011af80: beqz $v1, 0x11afbc
    g_0024e1cc = v0;  // Global at 0x0024e1cc                   // 0x0011af84: sb $v0, 0xc($s2)
    a2 = ((unsigned)s0 < (unsigned)0x401) ? 1 : 0;              // 0x0011af88: sltiu $a2, $s0, 0x401
    a1 = a1 + 1;                                                // 0x0011af8c: addiu $a1, $a1, 1
    v0 = (a1 < 0x400) ? 1 : 0;                                  // 0x0011af90: slti $v0, $a1, 0x400
    if (v0 == 0) goto label_0x11afc0;                           // 0x0011af94: beqz $v0, 0x11afc0
    v0 = s1 + a1;                                               // 0x0011af98: addu $v0, $s1, $a1
    a0 = s2 + a1;                                               // 0x0011af9c: addu $a0, $s2, $a1
    v1 = g_001f0000;  // Global at 0x001f0000                   // 0x0011afa0: lbu $v1, 0($v0)
    g_0024f8cc = v1;  // Global at 0x0024f8cc                   // 0x0011afa4: sb $v1, 0xc($a0)
    v1 = v1 << 0x18;                                            // 0x0011afa8: sll $v1, $v1, 0x18
    /* bnezl $v1, 0x11af90 */                                   // 0x0011afac: bnezl $v1, 0x11af90
    a1 = a1 + 1;                                                // 0x0011afb0: addiu $a1, $a1, 1
    goto label_0x11afc4;                                        // 0x0011afb4: b 0x11afc4
    v0 = 0x400;                                                 // 0x0011afb8: addiu $v0, $zero, 0x400
label_0x11afbc:
    a2 = ((unsigned)s0 < (unsigned)0x401) ? 1 : 0;              // 0x0011afbc: sltiu $a2, $s0, 0x401
label_0x11afc0:
    v0 = 0x400;                                                 // 0x0011afc0: addiu $v0, $zero, 0x400
label_0x11afc4:
    if (a1 == v0) goto label_0x11afcc;                          // 0x0011afc4: beql $a1, $v0, 0x11afcc
    g_0024e5cb = 0;  // Global at 0x0024e5cb                    // 0x0011afc8: sb $zero, 0x40b($s2)
label_0x11afcc:
    if (a2 == 0) goto label_0x11afdc;                           // 0x0011afcc: beqz $a2, 0x11afdc
    v0 = ((unsigned)s6 < (unsigned)0x401) ? 1 : 0;              // 0x0011afd0: sltiu $v0, $s6, 0x401
    if (v0 != 0) goto label_0x11afec;                           // 0x0011afd4: bnez $v0, 0x11afec
    /* nop */                                                   // 0x0011afd8: nop 
label_0x11afdc:
    func_00118418();  // 0x118360                                // 0x0011afdc: jal 0x118360
    /* nop */                                                   // 0x0011afe0: nop 
    goto label_0x11b110;                                        // 0x0011afe4: b 0x11b110
    v0 = -0x16;                                                 // 0x0011afe8: addiu $v0, $zero, -0x16
label_0x11afec:
    if (s0 == 0) goto label_0x11b030;                           // 0x0011afec: beqz $s0, 0x11b030
    a2 = s2 + 0x40c;                                            // 0x0011aff4: addiu $a2, $s2, 0x40c
    s3 = sp + 0x30;                                             // 0x0011aff8: addiu $s3, $sp, 0x30
    s5 = 0x25 << 16;                                            // 0x0011affc: lui $s5, 0x25
    s1 = 0x25 << 16;                                            // 0x0011b000: lui $s1, 0x25
    /* nop */                                                   // 0x0011b004: nop 
label_0x11b008:
    v0 = s4 + a1;                                               // 0x0011b008: addu $v0, $s4, $a1
    a0 = a2 + a1;                                               // 0x0011b00c: addu $a0, $a2, $a1
    v1 = g_001f0000;  // Global at 0x001f0000                   // 0x0011b010: lbu $v1, 0($v0)
    a1 = a1 + 1;                                                // 0x0011b014: addiu $a1, $a1, 1
    v0 = ((unsigned)a1 < (unsigned)s0) ? 1 : 0;                 // 0x0011b018: sltu $v0, $a1, $s0
    g_0024f8c0 = v1;  // Global at 0x0024f8c0                   // 0x0011b01c: sb $v1, 0($a0)
    if (v0 != 0) goto label_0x11b008;                           // 0x0011b020: bnez $v0, 0x11b008
    /* nop */                                                   // 0x0011b024: nop 
    goto label_0x11b040;                                        // 0x0011b028: b 0x11b040
    g_0024e9d0 = s0;  // Global at 0x0024e9d0                   // 0x0011b02c: sw $s0, 0x810($s2)
label_0x11b030:
    s3 = sp + 0x30;                                             // 0x0011b030: addiu $s3, $sp, 0x30
    s5 = 0x25 << 16;                                            // 0x0011b034: lui $s5, 0x25
    s1 = 0x25 << 16;                                            // 0x0011b038: lui $s1, 0x25
    g_0024e9d0 = s0;  // Global at 0x0024e9d0                   // 0x0011b03c: sw $s0, 0x810($s2)
label_0x11b040:
    v0 = 1;                                                     // 0x0011b040: addiu $v0, $zero, 1
    g_0024e9cc = s7;  // Global at 0x0024e9cc                   // 0x0011b044: sw $s7, 0x80c($s2)
    a0 = sp + 0x10;                                             // 0x0011b048: addiu $a0, $sp, 0x10
    local_14 = v0;                                              // 0x0011b04c: sw $v0, 0x14($sp)
    s4 = s1 + -0x1200;                                          // 0x0011b050: addiu $s4, $s1, -0x1200
    v0 = 0x25 << 16;                                            // 0x0011b054: lui $v0, 0x25
    local_18 = 0;                                               // 0x0011b058: sw $zero, 0x18($sp)
    s0 = v0 + -0x1e40;                                          // 0x0011b05c: addiu $s0, $v0, -0x1e40
    DeleteSema();  // 0x1142e0                                  // 0x0011b060: jal 0x1142e0
    local_24 = 0;                                               // 0x0011b064: sw $zero, 0x24($sp)
    g_0024e9d8 = s6;  // Global at 0x0024e9d8                   // 0x0011b06c: sw $s6, 0x818($s2)
    v0 = 4;                                                     // 0x0011b070: addiu $v0, $zero, 4
    g_0024e1c4 = s3;  // Global at 0x0024e1c4                   // 0x0011b078: sw $s3, 4($s2)
    a1 = 0x81c;                                                 // 0x0011b07c: addiu $a1, $zero, 0x81c
    g_0024e1c8 = v0;  // Global at 0x0024e1c8                   // 0x0011b080: sw $v0, 8($s2)
    g_0024e9d4 = fp;  // Global at 0x0024e9d4                   // 0x0011b084: sw $fp, 0x814($s2)
    func_00116d40();  // 0x116c90                                // 0x0011b088: jal 0x116c90
    g_0024e1c0 = s1;  // Global at 0x0024e1c0                   // 0x0011b08c: sw $s1, 0($s2)
    a0 = s5 + -0x740;                                           // 0x0011b090: addiu $a0, $s5, -0x740
    local_0 = 0;                                                // 0x0011b098: sw $zero, 0($sp)
    a1 = 0x17;                                                  // 0x0011b09c: addiu $a1, $zero, 0x17
    t0 = 0x81c;                                                 // 0x0011b0a4: addiu $t0, $zero, 0x81c
    t2 = 4;                                                     // 0x0011b0ac: addiu $t2, $zero, 4
    func_001178a0();  // 0x1176a8                                // 0x0011b0b0: jal 0x1176a8
    if (v0 >= 0) goto label_0x11b0d8;                           // 0x0011b0b8: bgez $v0, 0x11b0d8
    v0 = 0x2000 << 16;                                          // 0x0011b0bc: lui $v0, 0x2000
    SignalSema();  // 0x1142f0                                  // 0x0011b0c0: jal 0x1142f0
    func_00118418();  // 0x118360                                // 0x0011b0c8: jal 0x118360
    /* nop */                                                   // 0x0011b0cc: nop 
    goto label_0x11b110;                                        // 0x0011b0d0: b 0x11b110
    v0 = -0xb;                                                  // 0x0011b0d4: addiu $v0, $zero, -0xb
label_0x11b0d8:
    v0 = s4 | v0;                                               // 0x0011b0d8: or $v0, $s4, $v0
    func_00118418();  // 0x118360                                // 0x0011b0dc: jal 0x118360
    s0 = g_20000000;  // Global at 0x20000000                   // 0x0011b0e0: lw $s0, 0($v0)
    if (s0 != 0) goto label_0x11b0fc;                           // 0x0011b0e4: bnez $s0, 0x11b0fc
    /* nop */                                                   // 0x0011b0e8: nop 
    SignalSema();  // 0x1142f0                                  // 0x0011b0ec: jal 0x1142f0
    goto label_0x11b110;                                        // 0x0011b0f4: b 0x11b110
    v0 = -0xb;                                                  // 0x0011b0f8: addiu $v0, $zero, -0xb
label_0x11b0fc:
    PollSema();  // 0x114320                                    // 0x0011b0fc: jal 0x114320
    SignalSema();  // 0x1142f0                                  // 0x0011b104: jal 0x1142f0
    v0 = local_30;                                              // 0x0011b10c: lw $v0, 0x30($sp)
label_0x11b110:
    return;                                                     // 0x0011b138: jr $ra
    sp = sp + 0xe0;                                             // 0x0011b13c: addiu $sp, $sp, 0xe0
}