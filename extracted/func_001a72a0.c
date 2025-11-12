void func_001a72a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t3 = a1 + 0xf;                                              // 0x001a72a0: addiu $t3, $a1, 0xf
    at = 0x2a << 16;                                            // 0x001a72a4: lui $at, 0x2a
    a1 = -0x10;                                                 // 0x001a72a8: addiu $a1, $zero, -0x10
    v1 = 0x2a << 16;                                            // 0x001a72ac: lui $v1, 0x2a
    a1 = t3 & a1;                                               // 0x001a72b0: and $a1, $t3, $a1
    t4 = g_002a0f70;  // Global at 0x002a0f70                   // 0x001a72b4: lw $t4, 0xf70($at)
    t3 = a1 >> 4;                                               // 0x001a72b8: sra $t3, $a1, 4
    t2 = 0x4f00 << 16;                                          // 0x001a72bc: lui $t2, 0x4f00
    a1 = a1 >> 0x14;                                            // 0x001a72c0: sra $a1, $a1, 0x14
    v1 = v1 + 0xf80;                                            // 0x001a72c4: addiu $v1, $v1, 0xf80
    a1 = a0 | a1;                                               // 0x001a72c8: or $a1, $a0, $a1
    t3 = a0 | t2;                                               // 0x001a72d4: or $t3, $a0, $t2
    a0 = t4 << 1;                                               // 0x001a72d8: sll $a0, $t4, 1
    t2 = a0 + t4;                                               // 0x001a72dc: addu $t2, $a0, $t4
    t2 = t2 << 2;                                               // 0x001a72e0: sll $t2, $t2, 2
    a0 = t4 + 1;                                                // 0x001a72e4: addiu $a0, $t4, 1
    t2 = v1 + t2;                                               // 0x001a72e8: addu $t2, $v1, $t2
    t4 = a0 & 0x1f;                                             // 0x001a72ec: andi $t4, $a0, 0x1f
    g_4f000000 = t3;  // Global at 0x4f000000                   // 0x001a72f0: sw $t3, 0($t2)
    if (a0 >= 0) goto label_0x1a7308;                           // 0x001a72f4: bgez $a0, 0x1a7308
    g_4f000004 = a1;  // Global at 0x4f000004                   // 0x001a72f8: sw $a1, 4($t2)
    if (t4 == 0) goto label_0x1a730c;                           // 0x001a72fc: beqz $t4, 0x1a730c
    a1 = a3 + 0xf;                                              // 0x001a7300: addiu $a1, $a3, 0xf
    t4 = t4 + -0x20;                                            // 0x001a7304: addiu $t4, $t4, -0x20
label_0x1a7308:
    a1 = a3 + 0xf;                                              // 0x001a7308: addiu $a1, $a3, 0xf
label_0x1a730c:
    a0 = -0x10;                                                 // 0x001a730c: addiu $a0, $zero, -0x10
    a3 = a1 & a0;                                               // 0x001a7310: and $a3, $a1, $a0
    a0 = t4 << 1;                                               // 0x001a7314: sll $a0, $t4, 1
    a1 = a0 + t4;                                               // 0x001a7318: addu $a1, $a0, $t4
    t2 = a1 << 2;                                               // 0x001a731c: sll $t2, $a1, 2
    a0 = t4 + 1;                                                // 0x001a7320: addiu $a0, $t4, 1
    a1 = a3 >> 4;                                               // 0x001a7324: sra $a1, $a3, 4
    t3 = v1 + t2;                                               // 0x001a7328: addu $t3, $v1, $t2
    a1 = a3 >> 0x14;                                            // 0x001a7330: sra $a1, $a3, 0x14
    a3 = 0x4f00 << 16;                                          // 0x001a7338: lui $a3, 0x4f00
    a1 = a2 | a1;                                               // 0x001a733c: or $a1, $a2, $a1
    a3 = t2 | a3;                                               // 0x001a7340: or $a3, $t2, $a3
    a2 = a0 & 0x1f;                                             // 0x001a7344: andi $a2, $a0, 0x1f
    g_4f00000f = a3;  // Global at 0x4f00000f                   // 0x001a7348: sw $a3, 0($t3)
    if (a0 >= 0) goto label_0x1a7360;                           // 0x001a734c: bgez $a0, 0x1a7360
    g_4f000013 = a1;  // Global at 0x4f000013                   // 0x001a7350: sw $a1, 4($t3)
    if (a2 == 0) goto label_0x1a7364;                           // 0x001a7354: beqz $a2, 0x1a7364
    a1 = t1 + 0xf;                                              // 0x001a7358: addiu $a1, $t1, 0xf
    a2 = a2 + -0x20;                                            // 0x001a735c: addiu $a2, $a2, -0x20
label_0x1a7360:
    a1 = t1 + 0xf;                                              // 0x001a7360: addiu $a1, $t1, 0xf
label_0x1a7364:
    a0 = -0x10;                                                 // 0x001a7364: addiu $a0, $zero, -0x10
    t1 = a1 & a0;                                               // 0x001a7368: and $t1, $a1, $a0
    a0 = a2 << 1;                                               // 0x001a736c: sll $a0, $a2, 1
    a1 = a0 + a2;                                               // 0x001a7370: addu $a1, $a0, $a2
    a0 = a2 + 1;                                                // 0x001a7374: addiu $a0, $a2, 1
    a2 = a1 << 2;                                               // 0x001a7378: sll $a2, $a1, 2
    a3 = v1 + a2;                                               // 0x001a737c: addu $a3, $v1, $a2
    a1 = t1 >> 4;                                               // 0x001a7380: sra $a1, $t1, 4
    v1 = t1 >> 0x14;                                            // 0x001a7388: sra $v1, $t1, 0x14
    a1 = 0x4f00 << 16;                                          // 0x001a7390: lui $a1, 0x4f00
    a2 = a2 | a1;                                               // 0x001a7394: or $a2, $a2, $a1
    a1 = t0 | v1;                                               // 0x001a7398: or $a1, $t0, $v1
    g_4f000000 = a2;  // Global at 0x4f000000                   // 0x001a739c: sw $a2, 0($a3)
    v1 = a0 & 0x1f;                                             // 0x001a73a0: andi $v1, $a0, 0x1f
    if (a0 >= 0) goto label_0x1a73b8;                           // 0x001a73a4: bgez $a0, 0x1a73b8
    g_4f000004 = a1;  // Global at 0x4f000004                   // 0x001a73a8: sw $a1, 4($a3)
    if (v1 == 0) goto label_0x1a73b8;                           // 0x001a73ac: beqz $v1, 0x1a73b8
    /* nop */                                                   // 0x001a73b0: nop 
    v1 = v1 + -0x20;                                            // 0x001a73b4: addiu $v1, $v1, -0x20
label_0x1a73b8:
    at = 0x2a << 16;                                            // 0x001a73b8: lui $at, 0x2a
    return;                                                     // 0x001a73bc: jr $ra
    g_002a0f70 = v1;  // Global at 0x002a0f70                   // 0x001a73c0: sw $v1, 0xf70($at)
}