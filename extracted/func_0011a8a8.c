void func_0011a8a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_14, local_18, local_24, local_30;
    
    sp = sp + -0xc0;                                            // 0x0011a8a8: addiu $sp, $sp, -0xc0
    a0 = 0x13;                                                  // 0x0011a8c4: addiu $a0, $zero, 0x13
    s6 = 0x25 << 16;                                            // 0x0011a8cc: lui $s6, 0x25
    s0 = s6 + -0x1e40;                                          // 0x0011a8d4: addiu $s0, $s6, -0x1e40
    func_00118360();  // 0x118330                                // 0x0011a8dc: jal 0x118330
    v0 = 0x1f << 16;                                            // 0x0011a8e4: lui $v0, 0x1f
    v1 = g_001f03dc;  // Global at 0x001f03dc                   // 0x0011a8e8: lw $v1, 0x3dc($v0)
    /* bnezl $v1, 0x11a900 */                                   // 0x0011a8ec: bnezl $v1, 0x11a900
    v0 = *(uint8_t*)(s1);                                       // 0x0011a8f0: lbu $v0, 0($s1)
    func_00118668();  // 0x118460                                // 0x0011a8f4: jal 0x118460
    /* nop */                                                   // 0x0011a8f8: nop 
    v0 = *(uint8_t*)(s1);                                       // 0x0011a8fc: lbu $v0, 0($s1)
    v1 = v0 << 0x18;                                            // 0x0011a904: sll $v1, $v0, 0x18
    if (v1 == 0) goto label_0x11a94c;                           // 0x0011a908: beqz $v1, 0x11a94c
    g_0024e1d4 = v0;  // Global at 0x0024e1d4                   // 0x0011a90c: sb $v0, 0x14($s0)
    s2 = sp + 0x30;                                             // 0x0011a910: addiu $s2, $sp, 0x30
    s4 = 0x25 << 16;                                            // 0x0011a914: lui $s4, 0x25
    s3 = 0x25 << 16;                                            // 0x0011a918: lui $s3, 0x25
    a1 = a1 + 1;                                                // 0x0011a91c: addiu $a1, $a1, 1
    v0 = (a1 < 0x400) ? 1 : 0;                                  // 0x0011a920: slti $v0, $a1, 0x400
    if (v0 == 0) goto label_0x11a958;                           // 0x0011a924: beqz $v0, 0x11a958
    v0 = s1 + a1;                                               // 0x0011a928: addu $v0, $s1, $a1
    a0 = s0 + a1;                                               // 0x0011a92c: addu $a0, $s0, $a1
    v1 = g_001f0000;  // Global at 0x001f0000                   // 0x0011a930: lbu $v1, 0($v0)
    g_0024f8d4 = v1;  // Global at 0x0024f8d4                   // 0x0011a934: sb $v1, 0x14($a0)
    v1 = v1 << 0x18;                                            // 0x0011a938: sll $v1, $v1, 0x18
    /* bnezl $v1, 0x11a920 */                                   // 0x0011a93c: bnezl $v1, 0x11a920
    a1 = a1 + 1;                                                // 0x0011a940: addiu $a1, $a1, 1
    goto label_0x11a95c;                                        // 0x0011a944: b 0x11a95c
    v0 = 0x400;                                                 // 0x0011a948: addiu $v0, $zero, 0x400
label_0x11a94c:
    s2 = sp + 0x30;                                             // 0x0011a94c: addiu $s2, $sp, 0x30
    s4 = 0x25 << 16;                                            // 0x0011a950: lui $s4, 0x25
    s3 = 0x25 << 16;                                            // 0x0011a954: lui $s3, 0x25
label_0x11a958:
    v0 = 0x400;                                                 // 0x0011a958: addiu $v0, $zero, 0x400
label_0x11a95c:
    if (a1 == v0) goto label_0x11a964;                          // 0x0011a95c: beql $a1, $v0, 0x11a964
    g_0024e5d3 = 0;  // Global at 0x0024e5d3                    // 0x0011a960: sb $zero, 0x413($s0)
label_0x11a964:
    g_0024e1d0 = s5;  // Global at 0x0024e1d0                   // 0x0011a964: sw $s5, 0x10($s0)
    v0 = 1;                                                     // 0x0011a968: addiu $v0, $zero, 1
    local_14 = v0;                                              // 0x0011a96c: sw $v0, 0x14($sp)
    a0 = sp + 0x10;                                             // 0x0011a970: addiu $a0, $sp, 0x10
    local_18 = 0;                                               // 0x0011a974: sw $zero, 0x18($sp)
    s3 = s3 + -0x1200;                                          // 0x0011a978: addiu $s3, $s3, -0x1200
    DeleteSema();  // 0x1142e0                                  // 0x0011a97c: jal 0x1142e0
    local_24 = 0;                                               // 0x0011a980: sw $zero, 0x24($sp)
    g_0024e1c4 = s2;  // Global at 0x0024e1c4                   // 0x0011a988: sw $s2, 4($s0)
    v0 = 4;                                                     // 0x0011a98c: addiu $v0, $zero, 4
    g_0024e1c0 = s1;  // Global at 0x0024e1c0                   // 0x0011a990: sw $s1, 0($s0)
    g_0024e1c8 = v0;  // Global at 0x0024e1c8                   // 0x0011a994: sw $v0, 8($s0)
    a0 = s4 + -0x740;                                           // 0x0011a998: addiu $a0, $s4, -0x740
    a3 = s6 + -0x1e40;                                          // 0x0011a99c: addiu $a3, $s6, -0x1e40
    a1 = 0x13;                                                  // 0x0011a9a0: addiu $a1, $zero, 0x13
    local_0 = 0;                                                // 0x0011a9a4: sw $zero, 0($sp)
    t0 = 0x414;                                                 // 0x0011a9ac: addiu $t0, $zero, 0x414
    t2 = 4;                                                     // 0x0011a9b4: addiu $t2, $zero, 4
    func_001178a0();  // 0x1176a8                                // 0x0011a9b8: jal 0x1176a8
    if (v0 >= 0) goto label_0x11a9e0;                           // 0x0011a9c0: bgez $v0, 0x11a9e0
    v0 = 0x2000 << 16;                                          // 0x0011a9c4: lui $v0, 0x2000
    SignalSema();  // 0x1142f0                                  // 0x0011a9c8: jal 0x1142f0
    func_00118418();  // 0x118360                                // 0x0011a9d0: jal 0x118360
    /* nop */                                                   // 0x0011a9d4: nop 
    goto label_0x11aa18;                                        // 0x0011a9d8: b 0x11aa18
    v0 = -0xb;                                                  // 0x0011a9dc: addiu $v0, $zero, -0xb
label_0x11a9e0:
    v0 = s3 | v0;                                               // 0x0011a9e0: or $v0, $s3, $v0
    func_00118418();  // 0x118360                                // 0x0011a9e4: jal 0x118360
    s0 = g_20000000;  // Global at 0x20000000                   // 0x0011a9e8: lw $s0, 0($v0)
    if (s0 != 0) goto label_0x11aa04;                           // 0x0011a9ec: bnez $s0, 0x11aa04
    /* nop */                                                   // 0x0011a9f0: nop 
    SignalSema();  // 0x1142f0                                  // 0x0011a9f4: jal 0x1142f0
    goto label_0x11aa18;                                        // 0x0011a9fc: b 0x11aa18
    v0 = -0xb;                                                  // 0x0011aa00: addiu $v0, $zero, -0xb
label_0x11aa04:
    PollSema();  // 0x114320                                    // 0x0011aa04: jal 0x114320
    SignalSema();  // 0x1142f0                                  // 0x0011aa0c: jal 0x1142f0
    v0 = local_30;                                              // 0x0011aa14: lw $v0, 0x30($sp)
label_0x11aa18:
    return;                                                     // 0x0011aa38: jr $ra
    sp = sp + 0xc0;                                             // 0x0011aa3c: addiu $sp, $sp, 0xc0
}