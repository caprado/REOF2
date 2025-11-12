void func_0011b140() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_14, local_18, local_24, local_30;
    
    sp = sp + -0xc0;                                            // 0x0011b140: addiu $sp, $sp, -0xc0
    a0 = 0x11;                                                  // 0x0011b15c: addiu $a0, $zero, 0x11
    s6 = 0x25 << 16;                                            // 0x0011b164: lui $s6, 0x25
    s2 = s6 + -0x1e40;                                          // 0x0011b16c: addiu $s2, $s6, -0x1e40
    func_00118360();  // 0x118330                                // 0x0011b174: jal 0x118330
    v0 = 0x1f << 16;                                            // 0x0011b17c: lui $v0, 0x1f
    v1 = g_001f03dc;  // Global at 0x001f03dc                   // 0x0011b180: lw $v1, 0x3dc($v0)
    /* bnezl $v1, 0x11b198 */                                   // 0x0011b184: bnezl $v1, 0x11b198
    v0 = g_0024ee00;  // Global at 0x0024ee00                   // 0x0011b188: lbu $v0, 0($s0)
    func_00118668();  // 0x118460                                // 0x0011b18c: jal 0x118460
    /* nop */                                                   // 0x0011b190: nop 
    v0 = g_0024ee00;  // Global at 0x0024ee00                   // 0x0011b194: lbu $v0, 0($s0)
    v1 = v0 << 0x18;                                            // 0x0011b19c: sll $v1, $v0, 0x18
    if (v1 == 0) goto label_0x11b1e4;                           // 0x0011b1a0: beqz $v1, 0x11b1e4
    g_0024e1cc = v0;  // Global at 0x0024e1cc                   // 0x0011b1a4: sb $v0, 0xc($s2)
    s3 = sp + 0x30;                                             // 0x0011b1a8: addiu $s3, $sp, 0x30
    s5 = 0x25 << 16;                                            // 0x0011b1ac: lui $s5, 0x25
    s4 = 0x25 << 16;                                            // 0x0011b1b0: lui $s4, 0x25
    a1 = a1 + 1;                                                // 0x0011b1b4: addiu $a1, $a1, 1
    v0 = (a1 < 0x400) ? 1 : 0;                                  // 0x0011b1b8: slti $v0, $a1, 0x400
    if (v0 == 0) goto label_0x11b1f0;                           // 0x0011b1bc: beqz $v0, 0x11b1f0
    v0 = s0 + a1;                                               // 0x0011b1c0: addu $v0, $s0, $a1
    a0 = s2 + a1;                                               // 0x0011b1c4: addu $a0, $s2, $a1
    v1 = g_001f0000;  // Global at 0x001f0000                   // 0x0011b1c8: lbu $v1, 0($v0)
    g_0024f8cc = v1;  // Global at 0x0024f8cc                   // 0x0011b1cc: sb $v1, 0xc($a0)
    v1 = v1 << 0x18;                                            // 0x0011b1d0: sll $v1, $v1, 0x18
    /* bnezl $v1, 0x11b1b8 */                                   // 0x0011b1d4: bnezl $v1, 0x11b1b8
    a1 = a1 + 1;                                                // 0x0011b1d8: addiu $a1, $a1, 1
    goto label_0x11b1f4;                                        // 0x0011b1dc: b 0x11b1f4
    v0 = 0x400;                                                 // 0x0011b1e0: addiu $v0, $zero, 0x400
label_0x11b1e4:
    s3 = sp + 0x30;                                             // 0x0011b1e4: addiu $s3, $sp, 0x30
    s5 = 0x25 << 16;                                            // 0x0011b1e8: lui $s5, 0x25
    s4 = 0x25 << 16;                                            // 0x0011b1ec: lui $s4, 0x25
label_0x11b1f0:
    v0 = 0x400;                                                 // 0x0011b1f0: addiu $v0, $zero, 0x400
label_0x11b1f4:
    if (a1 == v0) goto label_0x11b1fc;                          // 0x0011b1f4: beql $a1, $v0, 0x11b1fc
    g_0024e5cb = 0;  // Global at 0x0024e5cb                    // 0x0011b1f8: sb $zero, 0x40b($s2)
label_0x11b1fc:
    v0 = *(uint8_t*)(s1);                                       // 0x0011b1fc: lbu $v0, 0($s1)
    v1 = v0 << 0x18;                                            // 0x0011b204: sll $v1, $v0, 0x18
    if (v1 == 0) goto label_0x11b23c;                           // 0x0011b208: beqz $v1, 0x11b23c
    g_0024e5cc = v0;  // Global at 0x0024e5cc                   // 0x0011b20c: sb $v0, 0x40c($s2)
    a2 = s2 + 0x40c;                                            // 0x0011b210: addiu $a2, $s2, 0x40c
    a1 = a1 + 1;                                                // 0x0011b214: addiu $a1, $a1, 1
    v0 = (a1 < 0x400) ? 1 : 0;                                  // 0x0011b218: slti $v0, $a1, 0x400
    if (v0 == 0) goto label_0x11b23c;                           // 0x0011b21c: beqz $v0, 0x11b23c
    v0 = s1 + a1;                                               // 0x0011b220: addu $v0, $s1, $a1
    a0 = a2 + a1;                                               // 0x0011b224: addu $a0, $a2, $a1
    v1 = g_001f0000;  // Global at 0x001f0000                   // 0x0011b228: lbu $v1, 0($v0)
    g_0024f8c0 = v1;  // Global at 0x0024f8c0                   // 0x0011b22c: sb $v1, 0($a0)
    v1 = v1 << 0x18;                                            // 0x0011b230: sll $v1, $v1, 0x18
    /* bnezl $v1, 0x11b218 */                                   // 0x0011b234: bnezl $v1, 0x11b218
    a1 = a1 + 1;                                                // 0x0011b238: addiu $a1, $a1, 1
label_0x11b23c:
    v0 = 0x400;                                                 // 0x0011b23c: addiu $v0, $zero, 0x400
    if (a1 == v0) goto label_0x11b248;                          // 0x0011b240: beql $a1, $v0, 0x11b248
    g_0024e9cb = 0;  // Global at 0x0024e9cb                    // 0x0011b244: sb $zero, 0x80b($s2)
label_0x11b248:
    v0 = 1;                                                     // 0x0011b248: addiu $v0, $zero, 1
    local_18 = 0;                                               // 0x0011b24c: sw $zero, 0x18($sp)
    local_14 = v0;                                              // 0x0011b250: sw $v0, 0x14($sp)
    a0 = sp + 0x10;                                             // 0x0011b254: addiu $a0, $sp, 0x10
    local_24 = 0;                                               // 0x0011b258: sw $zero, 0x24($sp)
    DeleteSema();  // 0x1142e0                                  // 0x0011b25c: jal 0x1142e0
    s0 = s4 + -0x1200;                                          // 0x0011b260: addiu $s0, $s4, -0x1200
    g_0024e1c4 = s3;  // Global at 0x0024e1c4                   // 0x0011b268: sw $s3, 4($s2)
    v0 = 4;                                                     // 0x0011b26c: addiu $v0, $zero, 4
    g_0024e1c0 = s1;  // Global at 0x0024e1c0                   // 0x0011b270: sw $s1, 0($s2)
    g_0024e1c8 = v0;  // Global at 0x0024e1c8                   // 0x0011b274: sw $v0, 8($s2)
    a0 = s5 + -0x740;                                           // 0x0011b278: addiu $a0, $s5, -0x740
    a3 = s6 + -0x1e40;                                          // 0x0011b27c: addiu $a3, $s6, -0x1e40
    a1 = 0x18;                                                  // 0x0011b280: addiu $a1, $zero, 0x18
    local_0 = 0;                                                // 0x0011b284: sw $zero, 0($sp)
    t0 = 0x80c;                                                 // 0x0011b28c: addiu $t0, $zero, 0x80c
    t2 = 4;                                                     // 0x0011b294: addiu $t2, $zero, 4
    func_001178a0();  // 0x1176a8                                // 0x0011b298: jal 0x1176a8
    if (v0 >= 0) goto label_0x11b2c0;                           // 0x0011b2a0: bgez $v0, 0x11b2c0
    v0 = 0x2000 << 16;                                          // 0x0011b2a4: lui $v0, 0x2000
    SignalSema();  // 0x1142f0                                  // 0x0011b2a8: jal 0x1142f0
    func_00118418();  // 0x118360                                // 0x0011b2b0: jal 0x118360
    /* nop */                                                   // 0x0011b2b4: nop 
    goto label_0x11b2f8;                                        // 0x0011b2b8: b 0x11b2f8
    v0 = -0xb;                                                  // 0x0011b2bc: addiu $v0, $zero, -0xb
label_0x11b2c0:
    v0 = s0 | v0;                                               // 0x0011b2c0: or $v0, $s0, $v0
    func_00118418();  // 0x118360                                // 0x0011b2c4: jal 0x118360
    s0 = g_20000000;  // Global at 0x20000000                   // 0x0011b2c8: lw $s0, 0($v0)
    if (s0 != 0) goto label_0x11b2e4;                           // 0x0011b2cc: bnez $s0, 0x11b2e4
    /* nop */                                                   // 0x0011b2d0: nop 
    SignalSema();  // 0x1142f0                                  // 0x0011b2d4: jal 0x1142f0
    goto label_0x11b2f8;                                        // 0x0011b2dc: b 0x11b2f8
    v0 = -0xb;                                                  // 0x0011b2e0: addiu $v0, $zero, -0xb
label_0x11b2e4:
    PollSema();  // 0x114320                                    // 0x0011b2e4: jal 0x114320
    SignalSema();  // 0x1142f0                                  // 0x0011b2ec: jal 0x1142f0
    v0 = local_30;                                              // 0x0011b2f4: lw $v0, 0x30($sp)
label_0x11b2f8:
    return;                                                     // 0x0011b318: jr $ra
    sp = sp + 0xc0;                                             // 0x0011b31c: addiu $sp, $sp, 0xc0
}