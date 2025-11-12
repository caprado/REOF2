void func_001199b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_14, local_18, local_24, local_30;
    
    sp = sp + -0xd0;                                            // 0x001199b0: addiu $sp, $sp, -0xd0
    a0 = 7;                                                     // 0x001199cc: addiu $a0, $zero, 7
    s7 = 0x25 << 16;                                            // 0x001199d4: lui $s7, 0x25
    s2 = s7 + -0x1e40;                                          // 0x001199dc: addiu $s2, $s7, -0x1e40
    func_00118360();  // 0x118330                                // 0x001199e8: jal 0x118330
    v0 = 0x1f << 16;                                            // 0x001199f0: lui $v0, 0x1f
    v1 = g_001f03dc;  // Global at 0x001f03dc                   // 0x001199f4: lw $v1, 0x3dc($v0)
    /* bnezl $v1, 0x119a0c */                                   // 0x001199f8: bnezl $v1, 0x119a0c
    v0 = *(uint8_t*)(s1);                                       // 0x001199fc: lbu $v0, 0($s1)
    func_00118668();  // 0x118460                                // 0x00119a00: jal 0x118460
    /* nop */                                                   // 0x00119a04: nop 
    v0 = *(uint8_t*)(s1);                                       // 0x00119a08: lbu $v0, 0($s1)
    v1 = v0 << 0x18;                                            // 0x00119a10: sll $v1, $v0, 0x18
    if (v1 == 0) goto label_0x119a5c;                           // 0x00119a14: beqz $v1, 0x119a5c
    g_0024e1d0 = v0;  // Global at 0x0024e1d0                   // 0x00119a18: sb $v0, 0x10($s2)
    s3 = sp + 0x30;                                             // 0x00119a1c: addiu $s3, $sp, 0x30
    s5 = 0x25 << 16;                                            // 0x00119a20: lui $s5, 0x25
    s4 = 0x25 << 16;                                            // 0x00119a24: lui $s4, 0x25
    s0 = s0 + 1;                                                // 0x00119a28: addiu $s0, $s0, 1
    /* nop */                                                   // 0x00119a2c: nop 
    v0 = (s0 < 0x400) ? 1 : 0;                                  // 0x00119a30: slti $v0, $s0, 0x400
    if (v0 == 0) goto label_0x119a68;                           // 0x00119a34: beqz $v0, 0x119a68
    v0 = s1 + s0;                                               // 0x00119a38: addu $v0, $s1, $s0
    a0 = s2 + s0;                                               // 0x00119a3c: addu $a0, $s2, $s0
    v1 = g_001f0000;  // Global at 0x001f0000                   // 0x00119a40: lbu $v1, 0($v0)
    g_0024f8d0 = v1;  // Global at 0x0024f8d0                   // 0x00119a44: sb $v1, 0x10($a0)
    v1 = v1 << 0x18;                                            // 0x00119a48: sll $v1, $v1, 0x18
    /* bnezl $v1, 0x119a30 */                                   // 0x00119a4c: bnezl $v1, 0x119a30
    s0 = s0 + 1;                                                // 0x00119a50: addiu $s0, $s0, 1
    goto label_0x119a6c;                                        // 0x00119a54: b 0x119a6c
    v0 = 0x400;                                                 // 0x00119a58: addiu $v0, $zero, 0x400
label_0x119a5c:
    s3 = sp + 0x30;                                             // 0x00119a5c: addiu $s3, $sp, 0x30
    s5 = 0x25 << 16;                                            // 0x00119a60: lui $s5, 0x25
    s4 = 0x25 << 16;                                            // 0x00119a64: lui $s4, 0x25
label_0x119a68:
    v0 = 0x400;                                                 // 0x00119a68: addiu $v0, $zero, 0x400
label_0x119a6c:
    if (s0 != v0) goto label_0x119a80;                          // 0x00119a6c: bnel $s0, $v0, 0x119a80
    g_0024e1cc = s6;  // Global at 0x0024e1cc                   // 0x00119a70: sw $s6, 0xc($s2)
    g_0024e5cf = 0;  // Global at 0x0024e5cf                    // 0x00119a74: sb $zero, 0x40f($s2)
    s0 = 0x3ff;                                                 // 0x00119a78: addiu $s0, $zero, 0x3ff
    g_0024e1cc = s6;  // Global at 0x0024e1cc                   // 0x00119a7c: sw $s6, 0xc($s2)
label_0x119a80:
    v0 = 1;                                                     // 0x00119a80: addiu $v0, $zero, 1
    local_14 = v0;                                              // 0x00119a84: sw $v0, 0x14($sp)
    a0 = sp + 0x10;                                             // 0x00119a88: addiu $a0, $sp, 0x10
    local_18 = 0;                                               // 0x00119a8c: sw $zero, 0x18($sp)
    s4 = s4 + -0x1200;                                          // 0x00119a90: addiu $s4, $s4, -0x1200
    DeleteSema();  // 0x1142e0                                  // 0x00119a94: jal 0x1142e0
    local_24 = 0;                                               // 0x00119a98: sw $zero, 0x24($sp)
    g_0024e1c4 = s3;  // Global at 0x0024e1c4                   // 0x00119aa0: sw $s3, 4($s2)
    v0 = 4;                                                     // 0x00119aa4: addiu $v0, $zero, 4
    g_0024e1c0 = s1;  // Global at 0x0024e1c0                   // 0x00119aa8: sw $s1, 0($s2)
    g_0024e1c8 = v0;  // Global at 0x0024e1c8                   // 0x00119aac: sw $v0, 8($s2)
    a0 = s5 + -0x740;                                           // 0x00119ab0: addiu $a0, $s5, -0x740
    a3 = s7 + -0x1e40;                                          // 0x00119ab4: addiu $a3, $s7, -0x1e40
    t0 = s0 + 0x11;                                             // 0x00119ab8: addiu $t0, $s0, 0x11
    local_0 = 0;                                                // 0x00119abc: sw $zero, 0($sp)
    a1 = 7;                                                     // 0x00119ac0: addiu $a1, $zero, 7
    t2 = 4;                                                     // 0x00119acc: addiu $t2, $zero, 4
    func_001178a0();  // 0x1176a8                                // 0x00119ad0: jal 0x1176a8
    if (v0 >= 0) goto label_0x119af8;                           // 0x00119ad8: bgez $v0, 0x119af8
    v0 = 0x2000 << 16;                                          // 0x00119adc: lui $v0, 0x2000
    SignalSema();  // 0x1142f0                                  // 0x00119ae0: jal 0x1142f0
    func_00118418();  // 0x118360                                // 0x00119ae8: jal 0x118360
    /* nop */                                                   // 0x00119aec: nop 
    goto label_0x119b30;                                        // 0x00119af0: b 0x119b30
    v0 = -0xb;                                                  // 0x00119af4: addiu $v0, $zero, -0xb
label_0x119af8:
    v0 = s4 | v0;                                               // 0x00119af8: or $v0, $s4, $v0
    func_00118418();  // 0x118360                                // 0x00119afc: jal 0x118360
    s0 = g_20000000;  // Global at 0x20000000                   // 0x00119b00: lw $s0, 0($v0)
    if (s0 != 0) goto label_0x119b1c;                           // 0x00119b04: bnez $s0, 0x119b1c
    /* nop */                                                   // 0x00119b08: nop 
    SignalSema();  // 0x1142f0                                  // 0x00119b0c: jal 0x1142f0
    goto label_0x119b30;                                        // 0x00119b14: b 0x119b30
    v0 = -0xb;                                                  // 0x00119b18: addiu $v0, $zero, -0xb
label_0x119b1c:
    PollSema();  // 0x114320                                    // 0x00119b1c: jal 0x114320
    SignalSema();  // 0x1142f0                                  // 0x00119b24: jal 0x1142f0
    v0 = local_30;                                              // 0x00119b2c: lw $v0, 0x30($sp)
label_0x119b30:
    return;                                                     // 0x00119b54: jr $ra
    sp = sp + 0xd0;                                             // 0x00119b58: addiu $sp, $sp, 0xd0
}