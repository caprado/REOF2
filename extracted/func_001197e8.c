void func_001197e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_14, local_18, local_24, local_30;
    
    sp = sp + -0xd0;                                            // 0x001197e8: addiu $sp, $sp, -0xd0
    s7 = 0x25 << 16;                                            // 0x0011980c: lui $s7, 0x25
    s2 = s7 + -0x1e40;                                          // 0x00119814: addiu $s2, $s7, -0x1e40
    func_00118360();  // 0x118330                                // 0x00119820: jal 0x118330
    v0 = 0x1f << 16;                                            // 0x00119828: lui $v0, 0x1f
    v1 = g_001f03dc;  // Global at 0x001f03dc                   // 0x0011982c: lw $v1, 0x3dc($v0)
    /* bnezl $v1, 0x119844 */                                   // 0x00119830: bnezl $v1, 0x119844
    v0 = *(uint8_t*)(s1);                                       // 0x00119834: lbu $v0, 0($s1)
    func_00118668();  // 0x118460                                // 0x00119838: jal 0x118460
    /* nop */                                                   // 0x0011983c: nop 
    v0 = *(uint8_t*)(s1);                                       // 0x00119840: lbu $v0, 0($s1)
    v1 = v0 << 0x18;                                            // 0x00119848: sll $v1, $v0, 0x18
    if (v1 == 0) goto label_0x119894;                           // 0x0011984c: beqz $v1, 0x119894
    g_0024e1cc = v0;  // Global at 0x0024e1cc                   // 0x00119850: sb $v0, 0xc($s2)
    s3 = sp + 0x30;                                             // 0x00119854: addiu $s3, $sp, 0x30
    s5 = 0x25 << 16;                                            // 0x00119858: lui $s5, 0x25
    s4 = 0x25 << 16;                                            // 0x0011985c: lui $s4, 0x25
    s0 = s0 + 1;                                                // 0x00119860: addiu $s0, $s0, 1
    /* nop */                                                   // 0x00119864: nop 
    v0 = (s0 < 0x400) ? 1 : 0;                                  // 0x00119868: slti $v0, $s0, 0x400
    if (v0 == 0) goto label_0x1198a0;                           // 0x0011986c: beqz $v0, 0x1198a0
    v0 = s1 + s0;                                               // 0x00119870: addu $v0, $s1, $s0
    a0 = s2 + s0;                                               // 0x00119874: addu $a0, $s2, $s0
    v1 = g_001f0000;  // Global at 0x001f0000                   // 0x00119878: lbu $v1, 0($v0)
    g_0024f8cc = v1;  // Global at 0x0024f8cc                   // 0x0011987c: sb $v1, 0xc($a0)
    v1 = v1 << 0x18;                                            // 0x00119880: sll $v1, $v1, 0x18
    /* bnezl $v1, 0x119868 */                                   // 0x00119884: bnezl $v1, 0x119868
    s0 = s0 + 1;                                                // 0x00119888: addiu $s0, $s0, 1
    goto label_0x1198a4;                                        // 0x0011988c: b 0x1198a4
    v0 = 0x400;                                                 // 0x00119890: addiu $v0, $zero, 0x400
label_0x119894:
    s3 = sp + 0x30;                                             // 0x00119894: addiu $s3, $sp, 0x30
    s5 = 0x25 << 16;                                            // 0x00119898: lui $s5, 0x25
    s4 = 0x25 << 16;                                            // 0x0011989c: lui $s4, 0x25
label_0x1198a0:
    v0 = 0x400;                                                 // 0x001198a0: addiu $v0, $zero, 0x400
label_0x1198a4:
    if (s0 != v0) goto label_0x1198b4;                          // 0x001198a4: bne $s0, $v0, 0x1198b4
    v0 = 1;                                                     // 0x001198a8: addiu $v0, $zero, 1
    g_0024e5cb = 0;  // Global at 0x0024e5cb                    // 0x001198ac: sb $zero, 0x40b($s2)
    s0 = 0x3ff;                                                 // 0x001198b0: addiu $s0, $zero, 0x3ff
label_0x1198b4:
    local_18 = 0;                                               // 0x001198b4: sw $zero, 0x18($sp)
    local_14 = v0;                                              // 0x001198b8: sw $v0, 0x14($sp)
    a0 = sp + 0x10;                                             // 0x001198bc: addiu $a0, $sp, 0x10
    local_24 = 0;                                               // 0x001198c0: sw $zero, 0x24($sp)
    DeleteSema();  // 0x1142e0                                  // 0x001198c4: jal 0x1142e0
    s4 = s4 + -0x1200;                                          // 0x001198c8: addiu $s4, $s4, -0x1200
    g_0024e1c4 = s3;  // Global at 0x0024e1c4                   // 0x001198d0: sw $s3, 4($s2)
    v0 = 4;                                                     // 0x001198d4: addiu $v0, $zero, 4
    g_0024e1c0 = s1;  // Global at 0x0024e1c0                   // 0x001198d8: sw $s1, 0($s2)
    g_0024e1c8 = v0;  // Global at 0x0024e1c8                   // 0x001198dc: sw $v0, 8($s2)
    a0 = s5 + -0x740;                                           // 0x001198e0: addiu $a0, $s5, -0x740
    a3 = s7 + -0x1e40;                                          // 0x001198e8: addiu $a3, $s7, -0x1e40
    t0 = s0 + 0xd;                                              // 0x001198ec: addiu $t0, $s0, 0xd
    local_0 = 0;                                                // 0x001198f4: sw $zero, 0($sp)
    t2 = 4;                                                     // 0x001198fc: addiu $t2, $zero, 4
    func_001178a0();  // 0x1176a8                                // 0x00119900: jal 0x1176a8
    if (v0 >= 0) goto label_0x119928;                           // 0x00119908: bgez $v0, 0x119928
    v0 = 0x2000 << 16;                                          // 0x0011990c: lui $v0, 0x2000
    SignalSema();  // 0x1142f0                                  // 0x00119910: jal 0x1142f0
    func_00118418();  // 0x118360                                // 0x00119918: jal 0x118360
    /* nop */                                                   // 0x0011991c: nop 
    goto label_0x119960;                                        // 0x00119920: b 0x119960
    v0 = -0xb;                                                  // 0x00119924: addiu $v0, $zero, -0xb
label_0x119928:
    v0 = s4 | v0;                                               // 0x00119928: or $v0, $s4, $v0
    func_00118418();  // 0x118360                                // 0x0011992c: jal 0x118360
    s0 = g_20000000;  // Global at 0x20000000                   // 0x00119930: lw $s0, 0($v0)
    if (s0 != 0) goto label_0x11994c;                           // 0x00119934: bnez $s0, 0x11994c
    /* nop */                                                   // 0x00119938: nop 
    SignalSema();  // 0x1142f0                                  // 0x0011993c: jal 0x1142f0
    goto label_0x119960;                                        // 0x00119944: b 0x119960
    v0 = -0xb;                                                  // 0x00119948: addiu $v0, $zero, -0xb
label_0x11994c:
    PollSema();  // 0x114320                                    // 0x0011994c: jal 0x114320
    SignalSema();  // 0x1142f0                                  // 0x00119954: jal 0x1142f0
    v0 = local_30;                                              // 0x0011995c: lw $v0, 0x30($sp)
label_0x119960:
    return;                                                     // 0x00119984: jr $ra
    sp = sp + 0xd0;                                             // 0x00119988: addiu $sp, $sp, 0xd0
}