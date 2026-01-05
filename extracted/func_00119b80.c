void func_00119b80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_14, local_18, local_24, local_30;
    
    sp = sp + -0xd0;                                            // 0x00119b80: addiu $sp, $sp, -0xd0
    a0 = 0xe;                                                   // 0x00119bac: addiu $a0, $zero, 0xe
    s7 = 0x25 << 16;                                            // 0x00119bb4: lui $s7, 0x25
    s3 = s7 + -0x1e40;                                          // 0x00119bbc: addiu $s3, $s7, -0x1e40
    func_00118330();  // 118330                                // 0x00119bc0: jal 0x118330
    v0 = 0x1f << 16;                                            // 0x00119bc8: lui $v0, 0x1f
    v1 = g_001f03dc;  // Global at 0x001f03dc                   // 0x00119bcc: lw $v1, 0x3dc($v0)
    /* bnezl $v1, 0x119be4 */                                   // 0x00119bd0: bnezl $v1, 0x119be4
    v0 = g_0024e1c0;  // Global at 0x0024e1c0                   // 0x00119bd4: lbu $v0, 0($s0)
    func_00118460();  // 118460                                // 0x00119bd8: jal 0x118460
    /* nop */                                                   // 0x00119bdc: nop 
    v0 = g_0024e1c0;  // Global at 0x0024e1c0                   // 0x00119be0: lbu $v0, 0($s0)
    v1 = v0 << 0x18;                                            // 0x00119be8: sll $v1, $v0, 0x18
    if (v1 == 0) goto label_0x119c2c;                           // 0x00119bec: beqz $v1, 0x119c2c
    g_0024e1cc = v0;  // Global at 0x0024e1cc                   // 0x00119bf0: sb $v0, 0xc($s3)
    a3 = (s1 < 0x401) ? 1 : 0;                                  // 0x00119bf4: slti $a3, $s1, 0x401
    a1 = a1 + 1;                                                // 0x00119bf8: addiu $a1, $a1, 1
    /* nop */                                                   // 0x00119bfc: nop 
    v0 = (a1 < 0x400) ? 1 : 0;                                  // 0x00119c00: slti $v0, $a1, 0x400
    if (v0 == 0) goto label_0x119c30;                           // 0x00119c04: beqz $v0, 0x119c30
    v0 = s0 + a1;                                               // 0x00119c08: addu $v0, $s0, $a1
    a0 = s3 + a1;                                               // 0x00119c0c: addu $a0, $s3, $a1
    v1 = g_001f0000;  // Global at 0x001f0000                   // 0x00119c10: lbu $v1, 0($v0)
    g_0024f8cc = v1;  // Global at 0x0024f8cc                   // 0x00119c14: sb $v1, 0xc($a0)
    v1 = v1 << 0x18;                                            // 0x00119c18: sll $v1, $v1, 0x18
    /* bnezl $v1, 0x119c00 */                                   // 0x00119c1c: bnezl $v1, 0x119c00
    a1 = a1 + 1;                                                // 0x00119c20: addiu $a1, $a1, 1
    goto label_0x119c34;                                        // 0x00119c24: b 0x119c34
    v0 = 0x400;                                                 // 0x00119c28: addiu $v0, $zero, 0x400
label_0x119c2c:
    a3 = (s1 < 0x401) ? 1 : 0;                                  // 0x00119c2c: slti $a3, $s1, 0x401
label_0x119c30:
    v0 = 0x400;                                                 // 0x00119c30: addiu $v0, $zero, 0x400
label_0x119c34:
    if (a1 == v0) goto label_0x119c3c;                          // 0x00119c34: beql $a1, $v0, 0x119c3c
    g_0024e5cb = 0;  // Global at 0x0024e5cb                    // 0x00119c38: sb $zero, 0x40b($s3)
label_0x119c3c:
    /* bnezl $s2, 0x119c4c */                                   // 0x00119c3c: bnezl $s2, 0x119c4c
    v0 = *(uint8_t*)(s2);                                       // 0x00119c40: lbu $v0, 0($s2)
    goto label_0x119c98;                                        // 0x00119c44: b 0x119c98
    g_0024e5cc = 0;  // Global at 0x0024e5cc                    // 0x00119c48: sb $zero, 0x40c($s3)
    v1 = v0 << 0x18;                                            // 0x00119c50: sll $v1, $v0, 0x18
    if (v1 == 0) goto label_0x119c8c;                           // 0x00119c54: beqz $v1, 0x119c8c
    g_0024e5cc = v0;  // Global at 0x0024e5cc                   // 0x00119c58: sb $v0, 0x40c($s3)
    a2 = s3 + 0x40c;                                            // 0x00119c5c: addiu $a2, $s3, 0x40c
    a1 = a1 + 1;                                                // 0x00119c60: addiu $a1, $a1, 1
    /* nop */                                                   // 0x00119c64: nop 
    v0 = (a1 < 0x400) ? 1 : 0;                                  // 0x00119c68: slti $v0, $a1, 0x400
    if (v0 == 0) goto label_0x119c8c;                           // 0x00119c6c: beqz $v0, 0x119c8c
    v0 = s2 + a1;                                               // 0x00119c70: addu $v0, $s2, $a1
    a0 = a2 + a1;                                               // 0x00119c74: addu $a0, $a2, $a1
    v1 = g_001f0000;  // Global at 0x001f0000                   // 0x00119c78: lbu $v1, 0($v0)
    g_0024f8c0 = v1;  // Global at 0x0024f8c0                   // 0x00119c7c: sb $v1, 0($a0)
    v1 = v1 << 0x18;                                            // 0x00119c80: sll $v1, $v1, 0x18
    /* bnezl $v1, 0x119c68 */                                   // 0x00119c84: bnezl $v1, 0x119c68
    a1 = a1 + 1;                                                // 0x00119c88: addiu $a1, $a1, 1
label_0x119c8c:
    v0 = 0x400;                                                 // 0x00119c8c: addiu $v0, $zero, 0x400
    if (a1 == v0) goto label_0x119c98;                          // 0x00119c90: beql $a1, $v0, 0x119c98
    g_0024e9cb = 0;  // Global at 0x0024e9cb                    // 0x00119c94: sb $zero, 0x80b($s3)
label_0x119c98:
    if (a3 != 0) goto label_0x119cb0;                           // 0x00119c98: bnez $a3, 0x119cb0
    /* nop */                                                   // 0x00119c9c: nop 
    func_00118360();  // 118360                                // 0x00119ca0: jal 0x118360
    /* nop */                                                   // 0x00119ca4: nop 
    goto label_0x119dc0;                                        // 0x00119ca8: b 0x119dc0
    v0 = -7;                                                    // 0x00119cac: addiu $v0, $zero, -7
label_0x119cb0:
    if (s1 <= 0) goto label_0x119cf0;                           // 0x00119cb0: blez $s1, 0x119cf0
    a2 = s3 + 0x80c;                                            // 0x00119cb8: addiu $a2, $s3, 0x80c
    s2 = sp + 0x30;                                             // 0x00119cbc: addiu $s2, $sp, 0x30
    s5 = 0x25 << 16;                                            // 0x00119cc0: lui $s5, 0x25
    s4 = 0x25 << 16;                                            // 0x00119cc4: lui $s4, 0x25
label_0x119cc8:
    v0 = s6 + a1;                                               // 0x00119cc8: addu $v0, $s6, $a1
    a0 = a2 + a1;                                               // 0x00119ccc: addu $a0, $a2, $a1
    v1 = g_001f0000;  // Global at 0x001f0000                   // 0x00119cd0: lbu $v1, 0($v0)
    a1 = a1 + 1;                                                // 0x00119cd4: addiu $a1, $a1, 1
    v0 = (a1 < s1) ? 1 : 0;                                     // 0x00119cd8: slt $v0, $a1, $s1
    g_0024f8c0 = v1;  // Global at 0x0024f8c0                   // 0x00119cdc: sb $v1, 0($a0)
    if (v0 != 0) goto label_0x119cc8;                           // 0x00119ce0: bnez $v0, 0x119cc8
    /* nop */                                                   // 0x00119ce4: nop 
    goto label_0x119d00;                                        // 0x00119ce8: b 0x119d00
    g_0024edcc = s1;  // Global at 0x0024edcc                   // 0x00119cec: sw $s1, 0xc0c($s3)
label_0x119cf0:
    s2 = sp + 0x30;                                             // 0x00119cf0: addiu $s2, $sp, 0x30
    s5 = 0x25 << 16;                                            // 0x00119cf4: lui $s5, 0x25
    s4 = 0x25 << 16;                                            // 0x00119cf8: lui $s4, 0x25
    g_0024edcc = s1;  // Global at 0x0024edcc                   // 0x00119cfc: sw $s1, 0xc0c($s3)
label_0x119d00:
    v0 = 1;                                                     // 0x00119d00: addiu $v0, $zero, 1
    local_14 = v0;                                              // 0x00119d04: sw $v0, 0x14($sp)
    a0 = sp + 0x10;                                             // 0x00119d08: addiu $a0, $sp, 0x10
    local_18 = 0;                                               // 0x00119d0c: sw $zero, 0x18($sp)
    s0 = s7 + -0x1e40;                                          // 0x00119d10: addiu $s0, $s7, -0x1e40
    local_24 = 0;                                               // 0x00119d14: sw $zero, 0x24($sp)
    DeleteSema();  // 0x1142e0                                  // 0x00119d18: jal 0x1142e0
    s4 = s4 + -0x1200;                                          // 0x00119d1c: addiu $s4, $s4, -0x1200
    v0 = 4;                                                     // 0x00119d28: addiu $v0, $zero, 4
    g_0024e1c4 = s2;  // Global at 0x0024e1c4                   // 0x00119d2c: sw $s2, 4($s3)
    g_0024e1c8 = v0;  // Global at 0x0024e1c8                   // 0x00119d30: sw $v0, 8($s3)
    a1 = 0xc10;                                                 // 0x00119d34: addiu $a1, $zero, 0xc10
    func_00116c90();  // 116c90                                // 0x00119d38: jal 0x116c90
    g_0024e1c0 = s1;  // Global at 0x0024e1c0                   // 0x00119d3c: sw $s1, 0($s3)
    a0 = s5 + -0x740;                                           // 0x00119d40: addiu $a0, $s5, -0x740
    local_0 = 0;                                                // 0x00119d48: sw $zero, 0($sp)
    a1 = 0xe;                                                   // 0x00119d4c: addiu $a1, $zero, 0xe
    t0 = 0xc10;                                                 // 0x00119d54: addiu $t0, $zero, 0xc10
    t2 = 4;                                                     // 0x00119d5c: addiu $t2, $zero, 4
    func_001176a8();  // 1176a8                                // 0x00119d60: jal 0x1176a8
    if (v0 >= 0) goto label_0x119d88;                           // 0x00119d68: bgez $v0, 0x119d88
    v0 = 0x2000 << 16;                                          // 0x00119d6c: lui $v0, 0x2000
    SignalSema();  // 0x1142f0                                  // 0x00119d70: jal 0x1142f0
    func_00118360();  // 118360                                // 0x00119d78: jal 0x118360
    /* nop */                                                   // 0x00119d7c: nop 
    goto label_0x119dc0;                                        // 0x00119d80: b 0x119dc0
    v0 = -0xb;                                                  // 0x00119d84: addiu $v0, $zero, -0xb
label_0x119d88:
    v0 = s4 | v0;                                               // 0x00119d88: or $v0, $s4, $v0
    func_00118360();  // 118360                                // 0x00119d8c: jal 0x118360
    s0 = g_20000000;  // Global at 0x20000000                   // 0x00119d90: lw $s0, 0($v0)
    if (s0 != 0) goto label_0x119dac;                           // 0x00119d94: bnez $s0, 0x119dac
    /* nop */                                                   // 0x00119d98: nop 
    SignalSema();  // 0x1142f0                                  // 0x00119d9c: jal 0x1142f0
    goto label_0x119dc0;                                        // 0x00119da4: b 0x119dc0
    v0 = -0xb;                                                  // 0x00119da8: addiu $v0, $zero, -0xb
label_0x119dac:
    PollSema();  // 0x114320                                    // 0x00119dac: jal 0x114320
    SignalSema();  // 0x1142f0                                  // 0x00119db4: jal 0x1142f0
    v0 = local_30;                                              // 0x00119dbc: lw $v0, 0x30($sp)
label_0x119dc0:
    return;                                                     // 0x00119de4: jr $ra
    sp = sp + 0xd0;                                             // 0x00119de8: addiu $sp, $sp, 0xd0
}