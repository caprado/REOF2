void func_001ad030() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001ad030: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ad038: addu.qb $zero, $sp, $s1
    if (a0 != 0) goto label_0x1ad04c;                           // 0x001ad03c: bnez $a0, 0x1ad04c
    goto label_0x1ad10c;                                        // 0x001ad044: b 0x1ad10c
    v0 = -1;                                                    // 0x001ad048: addiu $v0, $zero, -1
label_0x1ad04c:
    at = 0x31 << 16;                                            // 0x001ad04c: lui $at, 0x31
    v0 = 2;                                                     // 0x001ad050: addiu $v0, $zero, 2
    v1 = g_003137f5;  // Global at 0x003137f5                   // 0x001ad054: lbu $v1, 0x37f5($at)
    if (v1 != v0) goto label_0x1ad068;                          // 0x001ad058: bne $v1, $v0, 0x1ad068
    at = 0x2a << 16;                                            // 0x001ad05c: lui $at, 0x2a
    goto label_0x1ad10c;                                        // 0x001ad060: b 0x1ad10c
    v0 = -1;                                                    // 0x001ad064: addiu $v0, $zero, -1
label_0x1ad068:
    s1 = 0x2a << 16;                                            // 0x001ad068: lui $s1, 0x2a
    v0 = g_002a5241;  // Global at 0x002a5241                   // 0x001ad06c: lbu $v0, 0x5241($at)
    v0 = (v0 < 8) ? 1 : 0;                                      // 0x001ad070: slti $v0, $v0, 8
    if (v0 != 0) goto label_0x1ad084;                           // 0x001ad074: bnez $v0, 0x1ad084
    s1 = s1 + 0x5240;                                           // 0x001ad078: addiu $s1, $s1, 0x5240
    goto label_0x1ad10c;                                        // 0x001ad07c: b 0x1ad10c
    v0 = -1;                                                    // 0x001ad080: addiu $v0, $zero, -1
label_0x1ad084:
    v1 = g_002a5243;  // Global at 0x002a5243                   // 0x001ad084: lbu $v1, 3($s1)
    v0 = v1 + 1;                                                // 0x001ad088: addiu $v0, $v1, 1
    s0 = v0 & 0xff;                                             // 0x001ad08c: andi $s0, $v0, 0xff
    v0 = (s0 < 8) ? 1 : 0;                                      // 0x001ad090: slti $v0, $s0, 8
    if (v0 != 0) goto label_0x1ad0a0;                           // 0x001ad094: bnez $v0, 0x1ad0a0
    v0 = v1 & 0xff;                                             // 0x001ad098: andi $v0, $v1, 0xff
label_0x1ad0a0:
    a2 = 0x10;                                                  // 0x001ad0a0: addiu $a2, $zero, 0x10
    v0 = v0 << 1;                                               // 0x001ad0a4: sll $v0, $v0, 1
    v0 = v0 + s1;                                               // 0x001ad0a8: addu $v0, $v0, $s1
    *(uint16_t*)((v0) + 0x14) = 0;                              // 0x001ad0ac: sh $zero, 0x14($v0)
    v0 = g_002a5243;  // Global at 0x002a5243                   // 0x001ad0b0: lbu $v0, 3($s1)
    v0 = v0 + s1;                                               // 0x001ad0b4: addu $v0, $v0, $s1
    *(uint8_t*)((v0) + 0xc) = a1;                               // 0x001ad0b8: sb $a1, 0xc($v0)
    v0 = g_002a5243;  // Global at 0x002a5243                   // 0x001ad0bc: lbu $v0, 3($s1)
    v0 = v0 << 4;                                               // 0x001ad0c4: sll $v0, $v0, 4
    v0 = s1 + v0;                                               // 0x001ad0c8: addu $v0, $s1, $v0
    func_00107ab8();  // 107ab8                                // 0x001ad0cc: jal 0x107ab8
    a0 = v0 + 0x24;                                             // 0x001ad0d0: addiu $a0, $v0, 0x24
    v0 = g_002a5243;  // Global at 0x002a5243                   // 0x001ad0d4: lbu $v0, 3($s1)
    v0 = v0 << 4;                                               // 0x001ad0d8: sll $v0, $v0, 4
    v0 = v0 + s1;                                               // 0x001ad0dc: addu $v0, $v0, $s1
    *(uint8_t*)((v0) + 0x33) = 0;                               // 0x001ad0e0: sb $zero, 0x33($v0)
    g_002a5243 = s0;  // Global at 0x002a5243                   // 0x001ad0e4: sb $s0, 3($s1)
    v0 = g_002a5241;  // Global at 0x002a5241                   // 0x001ad0e8: lbu $v0, 1($s1)
    v0 = v0 + 1;                                                // 0x001ad0ec: addiu $v0, $v0, 1
    g_002a5241 = v0;  // Global at 0x002a5241                   // 0x001ad0f0: sb $v0, 1($s1)
    v0 = g_002a5240;  // Global at 0x002a5240                   // 0x001ad0f4: lbu $v0, 0($s1)
    if (v0 != 0) goto label_0x1ad10c;                           // 0x001ad0f8: bnez $v0, 0x1ad10c
    v0 = 1;                                                     // 0x001ad100: addiu $v0, $zero, 1
    g_002a5240 = v0;  // Global at 0x002a5240                   // 0x001ad104: sb $v0, 0($s1)
label_0x1ad10c:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ad110: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ad114: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ad118: jr $ra
    sp = sp + 0x30;                                             // 0x001ad11c: addiu $sp, $sp, 0x30
}