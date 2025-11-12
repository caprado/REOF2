void func_001878a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0xb0;                                            // 0x001878a0: addiu $sp, $sp, -0xb0
    v1 = 0x24;                                                  // 0x001878a4: addiu $v1, $zero, 0x24
    /* multiply: s6 * v1 -> hi:lo */                            // 0x001878b4: mult $ac3, $s6, $v1
    fp = 0x28 << 16;                                            // 0x001878b8: lui $fp, 0x28
    v0 = fp + -0x2fb8;                                          // 0x001878bc: addiu $v0, $fp, -0x2fb8
    v0 = v0 + 4;                                                // 0x001878c8: addiu $v0, $v0, 4
    local_4 = a1;                                               // 0x001878cc: sw $a1, 4($sp)
    s7 = 3;                                                     // 0x001878d0: addiu $s7, $zero, 3
    s2 = v1 + v0;                                               // 0x001878d8: addu $s2, $v1, $v0
    func_00188ec0();  // 0x188dc8                                // 0x001878f0: jal 0x188dc8
    a0 = *(int32_t*)(s2);                                       // 0x001878f4: lw $a0, 0($s2)
    if (v0 == s7) goto label_0x18799c;                          // 0x001878f8: beq $v0, $s7, 0x18799c
    s3 = 0x28 << 16;                                            // 0x001878fc: lui $s3, 0x28
    v1 = 0x2080;                                                // 0x00187900: addiu $v1, $zero, 0x2080
    v0 = s3 + -0x2f40;                                          // 0x00187904: addiu $v0, $s3, -0x2f40
    s0 = 0x28 << 16;                                            // 0x00187908: lui $s0, 0x28
    g_0027d0e4 = 0;  // Global at 0x0027d0e4                    // 0x0018790c: sw $zero, 0x24($v0)
    s0 = s0 + -0xec0;                                           // 0x00187910: addiu $s0, $s0, -0xec0
    local_0 = v1;                                               // 0x00187914: sw $v1, 0($sp)
    g_0027d0c8 = 0;  // Global at 0x0027d0c8                    // 0x0018791c: sw $zero, 8($v0)
    g_0027d0cc = 0;  // Global at 0x0027d0cc                    // 0x00187924: sw $zero, 0xc($v0)
    a2 = 0x100;                                                 // 0x00187928: addiu $a2, $zero, 0x100
    g_0027d0d0 = 0;  // Global at 0x0027d0d0                    // 0x0018792c: sw $zero, 0x10($v0)
    s1 = 0x21 << 16;                                            // 0x00187930: lui $s1, 0x21
    g_0027d0d4 = 0;  // Global at 0x0027d0d4                    // 0x00187934: sw $zero, 0x14($v0)
    s5 = 0x18 << 16;                                            // 0x00187938: lui $s5, 0x18
    g_0027d0d8 = 0;  // Global at 0x0027d0d8                    // 0x0018793c: sw $zero, 0x18($v0)
    s4 = 1;                                                     // 0x00187940: addiu $s4, $zero, 1
    g_0027d0dc = 0;  // Global at 0x0027d0dc                    // 0x00187944: sw $zero, 0x1c($v0)
    func_00107d30();  // 0x107c70                                // 0x00187948: jal 0x107c70
    g_0027d0e0 = 0;  // Global at 0x0027d0e0                    // 0x0018794c: sw $zero, 0x20($v0)
    func_00114c70();  // 0x114bd8                                // 0x00187954: jal 0x114bd8
    a1 = a0 + 0xff;                                             // 0x00187958: addiu $a1, $a0, 0xff
    g_00216324 = s7;  // Global at 0x00216324                   // 0x0018795c: sw $s7, 0x6324($s1)
    a0 = *(int32_t*)(s2);                                       // 0x00187960: lw $a0, 0($s2)
    /* nop */                                                   // 0x00187964: nop 
label_0x187968:
    a1 = g_00216324;  // Global at 0x00216324                   // 0x0018796c: lw $a1, 0x6324($s1)
    a3 = s3 + -0x2f40;                                          // 0x00187970: addiu $a3, $s3, -0x2f40
    func_001895d8();  // 0x189470                                // 0x00187974: jal 0x189470
    t0 = s5 + 0x7700;                                           // 0x00187978: addiu $t0, $s5, 0x7700
    if (v0 != s4) goto label_0x187968;                          // 0x0018797c: bnel $v0, $s4, 0x187968
    a0 = *(int32_t*)(s2);                                       // 0x00187980: lw $a0, 0($s2)
    func_001876a8();  // 0x1875d8                                // 0x00187984: jal 0x1875d8
    /* nop */                                                   // 0x00187988: nop 
    v0 = *(int32_t*)((t4) + 8);                                 // 0x00187990: lw $v0, 8($t4)
    if (v0 != 0) goto label_0x1879a4;                           // 0x00187994: bnez $v0, 0x1879a4
    a3 = 0x24;                                                  // 0x00187998: addiu $a3, $zero, 0x24
label_0x18799c:
    goto label_0x187a44;                                        // 0x0018799c: b 0x187a44
label_0x1879a4:
    v0 = *(uint8_t*)((t4) + 0xd);                               // 0x001879a4: lbu $v0, 0xd($t4)
    v1 = *(uint8_t*)((t4) + 0xc);                               // 0x001879ac: lbu $v1, 0xc($t4)
    a0 = fp + -0x2fb8;                                          // 0x001879b0: addiu $a0, $fp, -0x2fb8
    v0 = v0 << 8;                                               // 0x001879b4: sll $v0, $v0, 8
    v1 = v1 + v0;                                               // 0x001879b8: addu $v1, $v1, $v0
    t3 = 1;                                                     // 0x001879bc: addiu $t3, $zero, 1
    v0 = 1;                                                     // 0x001879c0: addiu $v0, $zero, 1
    a1 = a0 + a3;                                               // 0x001879c4: addu $a1, $a0, $a3
    g_0027d14f = v1;  // Global at 0x0027d14f                   // 0x001879c8: sw $v1, 8($a1)
    a3 = a3 + a0;                                               // 0x001879cc: addu $a3, $a3, $a0
    v1 = *(uint8_t*)((t4) + 0xf);                               // 0x001879d8: lbu $v1, 0xf($t4)
    a0 = *(uint8_t*)((t4) + 0xe);                               // 0x001879e0: lbu $a0, 0xe($t4)
    v1 = v1 << 8;                                               // 0x001879e4: sll $v1, $v1, 8
    a0 = a0 + v1;                                               // 0x001879e8: addu $a0, $a0, $v1
    g_0018770c = a0;  // Global at 0x0018770c                   // 0x001879ec: sw $a0, 0xc($t0)
    a2 = *(uint8_t*)((t4) + 0x11);                              // 0x001879f0: lbu $a2, 0x11($t4)
    a1 = *(uint8_t*)((t4) + 0x13);                              // 0x001879f4: lbu $a1, 0x13($t4)
    a0 = *(uint8_t*)((t4) + 0x12);                              // 0x001879f8: lbu $a0, 0x12($t4)
    a2 = a2 << 8;                                               // 0x001879fc: sll $a2, $a2, 8
    v1 = *(uint8_t*)((t4) + 0x10);                              // 0x00187a00: lbu $v1, 0x10($t4)
    a1 = a1 << 0x18;                                            // 0x00187a04: sll $a1, $a1, 0x18
    a0 = a0 << 0x10;                                            // 0x00187a08: sll $a0, $a0, 0x10
    v1 = v1 + a1;                                               // 0x00187a0c: addu $v1, $v1, $a1
    a0 = a0 + a2;                                               // 0x00187a10: addu $a0, $a0, $a2
    v1 = v1 + a0;                                               // 0x00187a14: addu $v1, $v1, $a0
    *(uint32_t*)((t1) + 0x10) = v1;                             // 0x00187a18: sw $v1, 0x10($t1)
    *(uint32_t*)((t2) + 0x14) = t3;                             // 0x00187a1c: sw $t3, 0x14($t2)
    v1 = local_4;                                               // 0x00187a20: lw $v1, 4($sp)
label_0x187a44:
    return;                                                     // 0x00187a6c: jr $ra
    sp = sp + 0xb0;                                             // 0x00187a70: addiu $sp, $sp, 0xb0
}