void func_0012a860() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x10;                                            // 0x0012a860: addiu $sp, $sp, -0x10
    v0 = 0x1f << 16;                                            // 0x0012a864: lui $v0, 0x1f
    v0 = v0 + 0x6af8;                                           // 0x0012a86c: addiu $v0, $v0, 0x6af8
    /* bnezl $v1, 0x12a89c */                                   // 0x0012a878: bnezl $v1, 0x12a89c
    v0 = 0x1f << 16;                                            // 0x0012a87c: lui $v0, 0x1f
    /* nop */                                                   // 0x0012a884: nop 
label_0x12a888:
    func_0012a860();  // 0x12a848                                // 0x0012a888: jal 0x12a848
    /* nop */                                                   // 0x0012a88c: nop 
    if (v0 == 0) goto label_0x12a888;                           // 0x0012a894: beqz $v0, 0x12a888
    v0 = 0x1f << 16;                                            // 0x0012a898: lui $v0, 0x1f
    v1 = 1;                                                     // 0x0012a8a4: addiu $v1, $zero, 1
    v0 = v0 + 0x6b00;                                           // 0x0012a8a8: addiu $v0, $v0, 0x6b00
    return TerminateThread();  // Tail call                     // 0x0012a8b0: j 0x114120
    sp = sp + 0x10;                                             // 0x0012a8b4: addiu $sp, $sp, 0x10
    sp = sp + -0x30;                                            // 0x0012a8b8: addiu $sp, $sp, -0x30
    v0 = 0x1f << 16;                                            // 0x0012a8bc: lui $v0, 0x1f
    a0 = v0 + 0x6b08;                                           // 0x0012a8c4: addiu $a0, $v0, 0x6b08
    if (v1 != 0) goto label_0x12a928;                           // 0x0012a8dc: bnez $v1, 0x12a928
    v0 = 0x1f << 16;                                            // 0x0012a8e0: lui $v0, 0x1f
    v0 = 0x1f << 16;                                            // 0x0012a8e4: lui $v0, 0x1f
    v1 = 0x1f << 16;                                            // 0x0012a8e8: lui $v1, 0x1f
    s1 = v0 + 0x6aa8;                                           // 0x0012a8ec: addiu $s1, $v0, 0x6aa8
    s0 = v1 + 0x6a8c;                                           // 0x0012a8f0: addiu $s0, $v1, 0x6a8c
    s2 = 1;                                                     // 0x0012a8f8: addiu $s2, $zero, 1
    /* nop */                                                   // 0x0012a8fc: nop 
label_0x12a900:
    func_00141c80();  // 0x141c68                                // 0x0012a90c: jal 0x141c68
    g_001f6a8c = s2;  // Global at 0x001f6a8c                   // 0x0012a910: sw $s2, 0($s0)
    func_0012adb0();  // 0x12ad98                                // 0x0012a914: jal 0x12ad98
    g_001f6a8c = 0;  // Global at 0x001f6a8c                    // 0x0012a918: sw $zero, 0($s0)
    if (v0 == 0) goto label_0x12a900;                           // 0x0012a920: beqz $v0, 0x12a900
    v0 = 0x1f << 16;                                            // 0x0012a924: lui $v0, 0x1f
label_0x12a928:
    v1 = 1;                                                     // 0x0012a930: addiu $v1, $zero, 1
    v0 = v0 + 0x6b10;                                           // 0x0012a938: addiu $v0, $v0, 0x6b10
    return TerminateThread();  // Tail call                     // 0x0012a948: j 0x114120
    sp = sp + 0x30;                                             // 0x0012a94c: addiu $sp, $sp, 0x30
    sp = sp + -0x40;                                            // 0x0012a950: addiu $sp, $sp, -0x40
    v0 = 0x1f << 16;                                            // 0x0012a954: lui $v0, 0x1f
    a2 = v0 + 0x6b18;                                           // 0x0012a95c: addiu $a2, $v0, 0x6b18
    if (v1 != 0) goto label_0x12aa00;                           // 0x0012a97c: bnez $v1, 0x12aa00
    v0 = 0x1f << 16;                                            // 0x0012a980: lui $v0, 0x1f
    v0 = 0x1f << 16;                                            // 0x0012a984: lui $v0, 0x1f
    v1 = 0x1f << 16;                                            // 0x0012a988: lui $v1, 0x1f
    a0 = 0x1f << 16;                                            // 0x0012a98c: lui $a0, 0x1f
    a1 = 0x1f << 16;                                            // 0x0012a990: lui $a1, 0x1f
    s2 = v0 + 0x6ab0;                                           // 0x0012a994: addiu $s2, $v0, 0x6ab0
    s5 = v1 + 0x6aec;                                           // 0x0012a998: addiu $s5, $v1, 0x6aec
    s4 = a0 + 0x6af0;                                           // 0x0012a99c: addiu $s4, $a0, 0x6af0
    s1 = a1 + 0x6a88;                                           // 0x0012a9a0: addiu $s1, $a1, 0x6a88
    s0 = 1;                                                     // 0x0012a9a8: addiu $s0, $zero, 1
    /* nop */                                                   // 0x0012a9ac: nop 
label_0x12a9b0:
    func_0012ae78();  // 0x12ae18                                // 0x0012a9bc: jal 0x12ae18
    a0 = g_001f6aec;  // Global at 0x001f6aec                   // 0x0012a9c0: lw $a0, 0($s5)
    func_0012b200();  // 0x12b1f0                                // 0x0012a9c4: jal 0x12b1f0
    /* nop */                                                   // 0x0012a9c8: nop 
    if (v0 != s0) goto label_0x12a9dc;                          // 0x0012a9cc: bne $v0, $s0, 0x12a9dc
    /* nop */                                                   // 0x0012a9d0: nop 
    func_0012ae78();  // 0x12ae18                                // 0x0012a9d4: jal 0x12ae18
    a0 = g_001f6af0;  // Global at 0x001f6af0                   // 0x0012a9d8: lw $a0, 0($s4)
label_0x12a9dc:
    func_0012bd00();  // 0x12bc58                                // 0x0012a9dc: jal 0x12bc58
    /* nop */                                                   // 0x0012a9e0: nop 
    func_00141c98();  // 0x141c80                                // 0x0012a9e4: jal 0x141c80
    g_001f6a88 = s0;  // Global at 0x001f6a88                   // 0x0012a9e8: sw $s0, 0($s1)
    func_0012adb0();  // 0x12ad98                                // 0x0012a9ec: jal 0x12ad98
    g_001f6a88 = 0;  // Global at 0x001f6a88                    // 0x0012a9f0: sw $zero, 0($s1)
    if (v0 == 0) goto label_0x12a9b0;                           // 0x0012a9f8: beqz $v0, 0x12a9b0
    v0 = 0x1f << 16;                                            // 0x0012a9fc: lui $v0, 0x1f
label_0x12aa00:
    v1 = 1;                                                     // 0x0012aa08: addiu $v1, $zero, 1
    v0 = v0 + 0x6b20;                                           // 0x0012aa10: addiu $v0, $v0, 0x6b20
    return TerminateThread();  // Tail call                     // 0x0012aa28: j 0x114120
    sp = sp + 0x40;                                             // 0x0012aa2c: addiu $sp, $sp, 0x40
    sp = sp + -0x40;                                            // 0x0012aa30: addiu $sp, $sp, -0x40
    v0 = 0x1f << 16;                                            // 0x0012aa34: lui $v0, 0x1f
    a1 = v0 + 0x6b28;                                           // 0x0012aa3c: addiu $a1, $v0, 0x6b28
    if (v1 != 0) goto label_0x12aadc;                           // 0x0012aa5c: bnez $v1, 0x12aadc
    v0 = 0x1f << 16;                                            // 0x0012aa60: lui $v0, 0x1f
    v0 = 0x1f << 16;                                            // 0x0012aa64: lui $v0, 0x1f
    v1 = 0x1f << 16;                                            // 0x0012aa68: lui $v1, 0x1f
    a0 = 0x1f << 16;                                            // 0x0012aa6c: lui $a0, 0x1f
    s1 = 0x1200 << 16;                                          // 0x0012aa70: lui $s1, 0x1200
    s3 = v0 + 0x6ab8;                                           // 0x0012aa74: addiu $s3, $v0, 0x6ab8
    s2 = v1 + 0x6a90;                                           // 0x0012aa78: addiu $s2, $v1, 0x6a90
    s0 = a0 + 0x6b64;                                           // 0x0012aa7c: addiu $s0, $a0, 0x6b64
    s4 = 1;                                                     // 0x0012aa84: addiu $s4, $zero, 1
    s1 = s1 | 0xe0;                                             // 0x0012aa88: ori $s1, $s1, 0xe0
    /* nop */                                                   // 0x0012aa8c: nop 
label_0x12aa90:
    v1 = g_001f6b64;  // Global at 0x001f6b64                   // 0x0012aa94: lhu $v1, 0($s0)
    if (v1 == 0) goto label_0x12aab0;                           // 0x0012aaa0: beqz $v1, 0x12aab0
    g_001f6a90 = s4;  // Global at 0x001f6a90                   // 0x0012aaa4: sw $s4, 0($s2)
    v0 = g_001f6b64;  // Global at 0x001f6b64                   // 0x0012aaa8: lhu $v0, 0($s0)
label_0x12aab0:
    func_00141ce0();  // 0x141cb0                                // 0x0012aab0: jal 0x141cb0
    /* nop */                                                   // 0x0012aab4: nop 
    v1 = g_001f6b64;  // Global at 0x001f6b64                   // 0x0012aab8: lhu $v1, 0($s0)
    /* bnezl $v1, 0x12aac4 */                                   // 0x0012aabc: bnezl $v1, 0x12aac4
    g_001f6a90 = 0;  // Global at 0x001f6a90                    // 0x0012aac4: sw $zero, 0($s2)
    func_0012adb0();  // 0x12ad98                                // 0x0012aac8: jal 0x12ad98
    /* nop */                                                   // 0x0012aacc: nop 
    if (v0 == 0) goto label_0x12aa90;                           // 0x0012aad4: beqz $v0, 0x12aa90
    v0 = 0x1f << 16;                                            // 0x0012aad8: lui $v0, 0x1f
label_0x12aadc:
    v1 = 1;                                                     // 0x0012aae4: addiu $v1, $zero, 1
    v0 = v0 + 0x6b30;                                           // 0x0012aaec: addiu $v0, $v0, 0x6b30
    return TerminateThread();  // Tail call                     // 0x0012ab04: j 0x114120
    sp = sp + 0x40;                                             // 0x0012ab08: addiu $sp, $sp, 0x40
    /* nop */                                                   // 0x0012ab0c: nop 
    sp = sp + -0x40;                                            // 0x0012ab10: addiu $sp, $sp, -0x40
    v0 = 0x1f << 16;                                            // 0x0012ab14: lui $v0, 0x1f
    a1 = v0 + 0x6b38;                                           // 0x0012ab1c: addiu $a1, $v0, 0x6b38
    if (v1 != 0) goto label_0x12abec;                           // 0x0012ab40: bnez $v1, 0x12abec
    v0 = 0x1f << 16;                                            // 0x0012ab44: lui $v0, 0x1f
    v0 = 0x1f << 16;                                            // 0x0012ab48: lui $v0, 0x1f
    v1 = 0x1f << 16;                                            // 0x0012ab4c: lui $v1, 0x1f
    a0 = 0x1f << 16;                                            // 0x0012ab50: lui $a0, 0x1f
    s4 = v0 + 0x6ac0;                                           // 0x0012ab54: addiu $s4, $v0, 0x6ac0
    s3 = v1 + 0x6a94;                                           // 0x0012ab58: addiu $s3, $v1, 0x6a94
    s2 = a0 + 0x6a84;                                           // 0x0012ab5c: addiu $s2, $a0, 0x6a84
    s1 = 1;                                                     // 0x0012ab64: addiu $s1, $zero, 1
    s5 = 0x1f << 16;                                            // 0x0012ab68: lui $s5, 0x1f
    /* nop */                                                   // 0x0012ab6c: nop 
label_0x12ab70:
    func_00141cf8();  // 0x141ce0                                // 0x0012ab7c: jal 0x141ce0
    g_001f6a94 = s1;  // Global at 0x001f6a94                   // 0x0012ab80: sw $s1, 0($s3)
    g_001f6a94 = 0;  // Global at 0x001f6a94                    // 0x0012ab84: sw $zero, 0($s3)
    v0 = g_001f6a84;  // Global at 0x001f6a84                   // 0x0012ab8c: lw $v0, 0($s2)
    if (v0 != s1) goto label_0x12aba0;                          // 0x0012ab90: bne $v0, $s1, 0x12aba0
    /* nop */                                                   // 0x0012ab94: nop 
    func_0012adb0();  // 0x12ad98                                // 0x0012ab98: jal 0x12ad98
    g_001f6a84 = 0;  // Global at 0x001f6a84                    // 0x0012ab9c: sw $zero, 0($s2)
label_0x12aba0:
    if (s0 != 0) goto label_0x12abe0;                           // 0x0012aba0: bnez $s0, 0x12abe0
    /* nop */                                                   // 0x0012aba4: nop 
    func_0012b200();  // 0x12b1f0                                // 0x0012aba8: jal 0x12b1f0
    /* nop */                                                   // 0x0012abac: nop 
    if (v0 != s1) goto label_0x12abd8;                          // 0x0012abb0: bne $v0, $s1, 0x12abd8
    s0 = s5 + 0x6af0;                                           // 0x0012abb4: addiu $s0, $s5, 0x6af0
    a0 = g_001f6af0;  // Global at 0x001f6af0                   // 0x0012abb8: lw $a0, 0($s0)
    func_0012ae18();  // 0x12adb0                                // 0x0012abbc: jal 0x12adb0
    /* nop */                                                   // 0x0012abc0: nop 
    v1 = g_001f6af0;  // Global at 0x001f6af0                   // 0x0012abc4: lw $v1, 0($s0)
    if (v0 != v1) goto label_0x12abd8;                          // 0x0012abc8: bne $v0, $v1, 0x12abd8
    /* nop */                                                   // 0x0012abcc: nop 
    func_0012ad98();  // 0x12ad48                                // 0x0012abd0: jal 0x12ad48
    a0 = g_001f6af0;  // Global at 0x001f6af0                   // 0x0012abd4: lw $a0, 0($s0)
label_0x12abd8:
    func_0012adb0();  // 0x12ad98                                // 0x0012abd8: jal 0x12ad98
    /* nop */                                                   // 0x0012abdc: nop 
label_0x12abe0:
    if (v0 == 0) goto label_0x12ab70;                           // 0x0012abe4: beqz $v0, 0x12ab70
    v0 = 0x1f << 16;                                            // 0x0012abe8: lui $v0, 0x1f
label_0x12abec:
    v1 = 1;                                                     // 0x0012abf4: addiu $v1, $zero, 1
    v0 = v0 + 0x6b40;                                           // 0x0012abfc: addiu $v0, $v0, 0x6b40
    return TerminateThread();  // Tail call                     // 0x0012ac18: j 0x114120
    sp = sp + 0x40;                                             // 0x0012ac1c: addiu $sp, $sp, 0x40
    sp = sp + -0x40;                                            // 0x0012ac20: addiu $sp, $sp, -0x40
    v0 = 0x1f << 16;                                            // 0x0012ac24: lui $v0, 0x1f
    a1 = v0 + 0x6b48;                                           // 0x0012ac2c: addiu $a1, $v0, 0x6b48
    if (v1 != 0) goto label_0x12acc4;                           // 0x0012ac4c: bnez $v1, 0x12acc4
    v0 = 0x1f << 16;                                            // 0x0012ac50: lui $v0, 0x1f
    v0 = 0x1f << 16;                                            // 0x0012ac54: lui $v0, 0x1f
    v1 = 0x1f << 16;                                            // 0x0012ac58: lui $v1, 0x1f
    a0 = 0x1f << 16;                                            // 0x0012ac5c: lui $a0, 0x1f
    s4 = v0 + 0x6ac8;                                           // 0x0012ac60: addiu $s4, $v0, 0x6ac8
    s3 = v1 + 0x6a98;                                           // 0x0012ac64: addiu $s3, $v1, 0x6a98
    s2 = a0 + 0x6a84;                                           // 0x0012ac68: addiu $s2, $a0, 0x6a84
    s1 = 1;                                                     // 0x0012ac70: addiu $s1, $zero, 1
    /* nop */                                                   // 0x0012ac74: nop 
label_0x12ac78:
    func_00141d38();  // 0x141cf8                                // 0x0012ac84: jal 0x141cf8
    g_001f6a98 = s1;  // Global at 0x001f6a98                   // 0x0012ac88: sw $s1, 0($s3)
    g_001f6a98 = 0;  // Global at 0x001f6a98                    // 0x0012ac8c: sw $zero, 0($s3)
    v0 = g_001f6a84;  // Global at 0x001f6a84                   // 0x0012ac94: lw $v0, 0($s2)
    if (v0 != s1) goto label_0x12aca8;                          // 0x0012ac98: bne $v0, $s1, 0x12aca8
    /* nop */                                                   // 0x0012ac9c: nop 
    func_0012adb0();  // 0x12ad98                                // 0x0012aca0: jal 0x12ad98
    g_001f6a84 = 0;  // Global at 0x001f6a84                    // 0x0012aca4: sw $zero, 0($s2)
label_0x12aca8:
    if (s0 != 0) goto label_0x12acb8;                           // 0x0012aca8: bnez $s0, 0x12acb8
    /* nop */                                                   // 0x0012acac: nop 
    func_0012adb0();  // 0x12ad98                                // 0x0012acb0: jal 0x12ad98
    /* nop */                                                   // 0x0012acb4: nop 
label_0x12acb8:
    if (v0 == 0) goto label_0x12ac78;                           // 0x0012acbc: beqz $v0, 0x12ac78
    v0 = 0x1f << 16;                                            // 0x0012acc0: lui $v0, 0x1f
label_0x12acc4:
    v1 = 1;                                                     // 0x0012accc: addiu $v1, $zero, 1
    v0 = v0 + 0x6b50;                                           // 0x0012acd4: addiu $v0, $v0, 0x6b50
    return TerminateThread();  // Tail call                     // 0x0012acec: j 0x114120
    sp = sp + 0x40;                                             // 0x0012acf0: addiu $sp, $sp, 0x40
    /* nop */                                                   // 0x0012acf4: nop 
    sp = sp + -0x40;                                            // 0x0012acf8: addiu $sp, $sp, -0x40
    if (s0 == 0) goto label_0x12ad38;                           // 0x0012ad04: beqz $s0, 0x12ad38
    SleepThread();  // 0x1141f0                                 // 0x0012ad0c: jal 0x1141f0
    v1 = local_0;                                               // 0x0012ad18: lw $v1, 0($sp)
    v0 = 4;                                                     // 0x0012ad1c: addiu $v0, $zero, 4
    if (v1 == v0) goto label_0x12ad30;                          // 0x0012ad20: beq $v1, $v0, 0x12ad30
    a1 = 0xc;                                                   // 0x0012ad24: addiu $a1, $zero, 0xc
    if (v1 != a1) goto label_0x12ad3c;                          // 0x0012ad28: bne $v1, $a1, 0x12ad3c
label_0x12ad30:
    func_00115228();  // 0x115190                                // 0x0012ad30: jal 0x115190
    /* nop */                                                   // 0x0012ad34: nop 
label_0x12ad38:
label_0x12ad3c:
    return;                                                     // 0x0012ad40: jr $ra
    sp = sp + 0x40;                                             // 0x0012ad44: addiu $sp, $sp, 0x40
}