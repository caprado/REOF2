void func_001124c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8, local_c;
    
    sp = sp + -0x90;                                            // 0x001124c8: addiu $sp, $sp, -0x90
    a1 = a1 << 0x10;                                            // 0x001124cc: sll $a1, $a1, 0x10
    a2 = a2 << 0x10;                                            // 0x001124d4: sll $a2, $a2, 0x10
    a3 = a3 << 0x10;                                            // 0x001124dc: sll $a3, $a3, 0x10
    t0 = t0 << 0x10;                                            // 0x001124e4: sll $t0, $t0, 0x10
    t1 = t1 << 0x10;                                            // 0x001124ec: sll $t1, $t1, 0x10
    s6 = a1 >> 0x10;                                            // 0x001124f4: sra $s6, $a1, 0x10
    s2 = a3 >> 0x10;                                            // 0x001124fc: sra $s2, $a3, 0x10
    s0 = a2 >> 0x10;                                            // 0x00112504: sra $s0, $a2, 0x10
    s5 = t0 >> 0x10;                                            // 0x0011250c: sra $s5, $t0, 0x10
    s4 = t1 >> 0x10;                                            // 0x00112510: sra $s4, $t1, 0x10
    func_001123b0();  // 0x1123a0                                // 0x00112514: jal 0x1123a0
    a0 = *(uint16_t*)((s1) + 2);                                // 0x00112520: lhu $a0, 2($s1)
    v0 = a0 + -2;                                               // 0x00112524: addiu $v0, $a0, -2
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x00112528: sltiu $v0, $v0, 2
    /* bnezl $v0, 0x112568 */                                   // 0x0011252c: bnezl $v0, 0x112568
    local_c = 0;                                                // 0x00112530: sw $zero, 0xc($sp)
    GetGsDxDyOffset();  // 0x112418                             // 0x00112534: jal 0x112418
    /* nop */                                                   // 0x00112538: nop 
    if (v0 == 0) goto label_0x112560;                           // 0x0011253c: beqz $v0, 0x112560
    a0 = *(int16_t*)((s1) + 2);                                 // 0x00112544: lh $a0, 2($s1)
    a2 = sp | 4;                                                // 0x00112548: ori $a2, $sp, 4
    a3 = sp | 8;                                                // 0x0011254c: ori $a3, $sp, 8
    func_001124c8();  // 0x1124b8                                // 0x00112550: jal 0x1124b8
    t0 = sp | 0xc;                                              // 0x00112554: ori $t0, $sp, 0xc
    goto label_0x112574;                                        // 0x00112558: b 0x112574
    a0 = *(uint16_t*)((s1) + 2);                                // 0x0011255c: lhu $a0, 2($s1)
label_0x112560:
    a0 = *(uint16_t*)((s1) + 2);                                // 0x00112560: lhu $a0, 2($s1)
    local_c = 0;                                                // 0x00112564: sw $zero, 0xc($sp)
    local_8 = 0;                                                // 0x00112568: sw $zero, 8($sp)
    local_4 = 0;                                                // 0x0011256c: sw $zero, 4($sp)
    local_0 = 0;                                                // 0x00112570: sw $zero, 0($sp)
label_0x112574:
    v1 = 0x66;                                                  // 0x00112574: addiu $v1, $zero, 0x66
    a2 = *(uint16_t*)(s1);                                      // 0x00112578: lhu $a2, 0($s1)
    v0 = *(int16_t*)(s1);                                       // 0x00112580: lh $v0, 0($s1)
    if (v0 == 0) goto label_0x11259c;                           // 0x00112584: beqz $v0, 0x11259c
    v0 = 2;                                                     // 0x00112588: addiu $v0, $zero, 2
    v0 = *(int16_t*)((s1) + 4);                                 // 0x0011258c: lh $v0, 4($s1)
    if (v0 != 0) goto label_0x11259c;                           // 0x00112590: bnez $v0, 0x11259c
    v0 = 3;                                                     // 0x00112594: addiu $v0, $zero, 3
    v0 = 1;                                                     // 0x00112598: addiu $v0, $zero, 1
label_0x11259c:
    v0 = s0 + 0x3f;                                             // 0x001125a0: addiu $v0, $s0, 0x3f
    v1 = s6 & 0xf;                                              // 0x001125a4: andi $v1, $s6, 0xf
    v0 = v0 >> 6;                                               // 0x001125a8: sra $v0, $v0, 6
    a0 = a0 << 0x10;                                            // 0x001125ac: sll $a0, $a0, 0x10
    v0 = v0 & 0x3f;                                             // 0x001125b0: andi $v0, $v0, 0x3f
    a1 = a0 >> 0x10;                                            // 0x001125bc: sra $a1, $a0, 0x10
    v1 = v1 | v0;                                               // 0x001125c0: or $v1, $v1, $v0
    a0 = 2;                                                     // 0x001125c4: addiu $a0, $zero, 2
    if (a1 != a0) goto label_0x112678;                          // 0x001125c8: bne $a1, $a0, 0x112678
    v0 = a2 << 0x10;                                            // 0x001125d0: sll $v0, $a2, 0x10
    v1 = 1;                                                     // 0x001125d4: addiu $v1, $zero, 1
    v0 = v0 >> 0x10;                                            // 0x001125d8: sra $v0, $v0, 0x10
    if (v0 != v1) goto label_0x11264c;                          // 0x001125dc: bne $v0, $v1, 0x11264c
    v0 = s0 + 0x9ff;                                            // 0x001125e0: addiu $v0, $s0, 0x9ff
    v1 = s0 + 0x9ff;                                            // 0x001125e4: addiu $v1, $s0, 0x9ff
    /* beqzl $s0, 0x1125f0 */                                   // 0x001125e8: beqzl $s0, 0x1125f0
    /* break (trap) */                                          // 0x001125ec: break 0, 7
    /* divide: v1 / s0 -> hi:lo */                              // 0x001125f0: div $zero, $v1, $s0
    v0 = local_4;                                               // 0x001125f4: lw $v0, 4($sp)
    a1 = local_0;                                               // 0x001125f8: lw $a1, 0($sp)
    v0 = s4 + v0;                                               // 0x001125fc: addu $v0, $s4, $v0
    a2 = *(int16_t*)((s1) + 4);                                 // 0x00112600: lh $a2, 4($s1)
    v0 = v0 + 0x32;                                             // 0x00112604: addiu $v0, $v0, 0x32
    v0 = v0 & 0xfff;                                            // 0x0011260c: andi $v0, $v0, 0xfff
    /* mflo $v1 */                                              // 0x00112614
    v1 = v1 + -1;                                               // 0x00112620: addiu $v1, $v1, -1
    a0 = a0 + -1;                                               // 0x00112628: addiu $a0, $a0, -1
    if (a2 == 0) goto label_0x112700;                           // 0x00112634: beqz $a2, 0x112700
    a1 = a1 & 0xfff;                                            // 0x00112638: andi $a1, $a1, 0xfff
    v0 = s2 << 1;                                               // 0x0011263c: sll $v0, $s2, 1
    v1 = t2 | v1;                                               // 0x00112640: or $v1, $t2, $v1
    goto label_0x112708;                                        // 0x00112644: b 0x112708
    v0 = v0 + -1;                                               // 0x00112648: addiu $v0, $v0, -1
label_0x11264c:
    /* beqzl $s0, 0x112654 */                                   // 0x0011264c: beqzl $s0, 0x112654
    /* break (trap) */                                          // 0x00112650: break 0, 7
    /* divide: v0 / s0 -> hi:lo */                              // 0x00112654: div $zero, $v0, $s0
    a3 = s2 + -1;                                               // 0x00112658: addiu $a3, $s2, -1
    a1 = local_0;                                               // 0x0011265c: lw $a1, 0($sp)
    v1 = local_4;                                               // 0x00112664: lw $v1, 4($sp)
    v1 = s4 + v1;                                               // 0x0011266c: addu $v1, $s4, $v1
    goto label_0x112748;                                        // 0x00112670: b 0x112748
    v1 = v1 + 0x19;                                             // 0x00112674: addiu $v1, $v1, 0x19
label_0x112678:
    v0 = 3;                                                     // 0x00112678: addiu $v0, $zero, 3
    if (a1 != v0) goto label_0x11278c;                          // 0x0011267c: bne $a1, $v0, 0x11278c
    v0 = 0x50;                                                  // 0x00112680: addiu $v0, $zero, 0x50
    v0 = a2 << 0x10;                                            // 0x00112684: sll $v0, $a2, 0x10
    v1 = 1;                                                     // 0x00112688: addiu $v1, $zero, 1
    v0 = v0 >> 0x10;                                            // 0x0011268c: sra $v0, $v0, 0x10
    if (v0 != v1) goto label_0x112720;                          // 0x00112690: bne $v0, $v1, 0x112720
    v0 = s0 + 0x9ff;                                            // 0x00112694: addiu $v0, $s0, 0x9ff
    v1 = s0 + 0x9ff;                                            // 0x00112698: addiu $v1, $s0, 0x9ff
    /* beqzl $s0, 0x1126a4 */                                   // 0x0011269c: beqzl $s0, 0x1126a4
    /* break (trap) */                                          // 0x001126a0: break 0, 7
    /* divide: v1 / s0 -> hi:lo */                              // 0x001126a4: div $zero, $v1, $s0
    v0 = local_4;                                               // 0x001126a8: lw $v0, 4($sp)
    a1 = local_0;                                               // 0x001126ac: lw $a1, 0($sp)
    v0 = s4 + v0;                                               // 0x001126b0: addu $v0, $s4, $v0
    a2 = *(int16_t*)((s1) + 4);                                 // 0x001126b4: lh $a2, 4($s1)
    v0 = v0 + 0x48;                                             // 0x001126b8: addiu $v0, $v0, 0x48
    v0 = v0 & 0xfff;                                            // 0x001126c0: andi $v0, $v0, 0xfff
    /* mflo $v1 */                                              // 0x001126c8
    v1 = v1 + -1;                                               // 0x001126d4: addiu $v1, $v1, -1
    a0 = a0 + -1;                                               // 0x001126dc: addiu $a0, $a0, -1
    if (a2 == 0) goto label_0x112700;                           // 0x001126e8: beqz $a2, 0x112700
    a1 = a1 & 0xfff;                                            // 0x001126ec: andi $a1, $a1, 0xfff
    v0 = s2 << 1;                                               // 0x001126f0: sll $v0, $s2, 1
    v1 = t2 | v1;                                               // 0x001126f4: or $v1, $t2, $v1
    goto label_0x112708;                                        // 0x001126f8: b 0x112708
    v0 = v0 + -1;                                               // 0x001126fc: addiu $v0, $v0, -1
label_0x112700:
    v0 = s2 + -1;                                               // 0x00112700: addiu $v0, $s2, -1
    v1 = t2 | v1;                                               // 0x00112704: or $v1, $t2, $v1
label_0x112708:
    v0 = a1 | v0;                                               // 0x0011270c: or $v0, $a1, $v0
    v1 = v1 | v0;                                               // 0x00112710: or $v1, $v1, $v0
    v0 = v1 | a3;                                               // 0x00112714: or $v0, $v1, $a3
    goto label_0x112810;                                        // 0x00112718: b 0x112810
label_0x112720:
    /* beqzl $s0, 0x112728 */                                   // 0x00112720: beqzl $s0, 0x112728
    /* break (trap) */                                          // 0x00112724: break 0, 7
    /* divide: v0 / s0 -> hi:lo */                              // 0x00112728: div $zero, $v0, $s0
    a3 = s2 + -1;                                               // 0x0011272c: addiu $a3, $s2, -1
    a1 = local_0;                                               // 0x00112730: lw $a1, 0($sp)
    v1 = local_4;                                               // 0x00112738: lw $v1, 4($sp)
    v1 = s4 + v1;                                               // 0x00112740: addu $v1, $s4, $v1
    v1 = v1 + 0x24;                                             // 0x00112744: addiu $v1, $v1, 0x24
label_0x112748:
    v1 = v1 & 0xfff;                                            // 0x00112748: andi $v1, $v1, 0xfff
    /* mflo $v0 */                                              // 0x00112750
    v0 = &str_00220ee0;  // "D1_TADR=%08x:"                     // 0x0011275c: addiu $v0, $v0, -1
    a1 = a1 & 0xfff;                                            // 0x00112768: andi $a1, $a1, 0xfff
    a0 = a0 + -1;                                               // 0x0011276c: addiu $a0, $a0, -1
    a1 = a1 | a3;                                               // 0x00112770: or $a1, $a1, $a3
    v0 = v0 | a0;                                               // 0x00112778: or $v0, $v0, $a0
    v0 = v0 | a1;                                               // 0x0011277c: or $v0, $v0, $a1
    v0 = v0 | v1;                                               // 0x00112780: or $v0, $v0, $v1
    goto label_0x112810;                                        // 0x00112784: b 0x112810
label_0x11278c:
    if (a1 != v0) goto label_0x112808;                          // 0x0011278c: bne $a1, $v0, 0x112808
    a0 = 0x22 << 16;                                            // 0x00112790: lui $a0, 0x22
    v0 = 0x2d0;                                                 // 0x00112794: addiu $v0, $zero, 0x2d0
    a1 = local_0;                                               // 0x00112798: lw $a1, 0($sp)
    v0 = v0 - s0;                                               // 0x0011279c: subu $v0, $v0, $s0
    a2 = s5 << 1;                                               // 0x001127a0: sll $a2, $s5, 1
    v1 = (unsigned)v0 >> 0x1f;                                  // 0x001127a4: srl $v1, $v0, 0x1f
    a0 = local_4;                                               // 0x001127a8: lw $a0, 4($sp)
    v0 = v0 + v1;                                               // 0x001127ac: addu $v0, $v0, $v1
    v0 = v0 >> 1;                                               // 0x001127b4: sra $v0, $v0, 1
    a2 = s0 << 1;                                               // 0x001127b8: sll $a2, $s0, 1
    v0 = v0 << 1;                                               // 0x001127bc: sll $v0, $v0, 1
    a0 = s4 + a0;                                               // 0x001127c0: addu $a0, $s4, $a0
    v1 = s2 + -1;                                               // 0x001127c8: addiu $v1, $s2, -1
    a2 = a2 + -1;                                               // 0x001127d0: addiu $a2, $a2, -1
    a1 = a1 & 0xfff;                                            // 0x001127dc: andi $a1, $a1, 0xfff
    a0 = a0 + 0x23;                                             // 0x001127e0: addiu $a0, $a0, 0x23
    v0 = 0x80 << 16;                                            // 0x001127e4: lui $v0, 0x80
    v1 = v1 | a2;                                               // 0x001127e8: or $v1, $v1, $a2
    a1 = a1 | v0;                                               // 0x001127ec: or $a1, $a1, $v0
    a0 = a0 & 0xfff;                                            // 0x001127f0: andi $a0, $a0, 0xfff
    v1 = v1 | a1;                                               // 0x001127f4: or $v1, $v1, $a1
    v1 = v1 | a0;                                               // 0x001127fc: or $v1, $v1, $a0
    goto label_0x112810;                                        // 0x00112800: b 0x112810
label_0x112808:
    func_00116598();  // 0x116508                                // 0x00112808: jal 0x116508
    a0 = a0 + 0xe48;                                            // 0x0011280c: addiu $a0, $a0, 0xe48
label_0x112810:
    return;                                                     // 0x00112834: jr $ra
    sp = sp + 0x90;                                             // 0x00112838: addiu $sp, $sp, 0x90
}