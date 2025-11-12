void func_00106f40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x20;                                            // 0x00106f40: addiu $sp, $sp, -0x20
    s0 = 0x1f << 16;                                            // 0x00106f48: lui $s0, 0x1f
    s0 = s0 + -0x210;                                           // 0x00106f58: addiu $s0, $s0, -0x210
    func_00107db0();  // 0x107d30                                // 0x00106f5c: jal 0x107d30
    a0 = g_001efdf0;  // Global at 0x001efdf0                   // 0x00106f60: lw $a0, 0($s0)
    a0 = g_001efdf0;  // Global at 0x001efdf0                   // 0x00106f64: lw $a0, 0($s0)
    func_00105bd8();  // 0x1058e0                                // 0x00106f68: jal 0x1058e0
    a0 = g_001efdf0;  // Global at 0x001efdf0                   // 0x00106f70: lw $a0, 0($s0)
    return func_00107e00();  // Tail call                        // 0x00106f80: j 0x107db0
    sp = sp + 0x20;                                             // 0x00106f84: addiu $sp, $sp, 0x20
    sp = sp + -0x60;                                            // 0x00106f88: addiu $sp, $sp, -0x60
    v0 = 0x1f << 16;                                            // 0x00106f8c: lui $v0, 0x1f
    s7 = v0 + -0x200;                                           // 0x00106f94: addiu $s7, $v0, -0x200
    a2 = 0x1f << 16;                                            // 0x00106f9c: lui $a2, 0x1f
    v0 = 0x1f << 16;                                            // 0x00106fa4: lui $v0, 0x1f
    s5 = -1;                                                    // 0x00106fbc: addiu $s5, $zero, -1
    s6 = v0 + 0x218;                                            // 0x00106fc4: addiu $s6, $v0, 0x218
    s4 = g_001efe08;  // Global at 0x001efe08                   // 0x00106fc8: lw $s4, 8($s7)
    v0 = -4;                                                    // 0x00106fcc: addiu $v0, $zero, -4
    a2 = *(int32_t*)((s4) + 4);                                 // 0x00106fe0: lw $a2, 4($s4)
    v1 = g_001f0218;  // Global at 0x001f0218                   // 0x00106fe8: lw $v1, 0($s6)
    s3 = a2 & v0;                                               // 0x00106fec: and $s3, $a2, $v0
    local_0 = a0;                                               // 0x00106ffc: sw $a0, 0($sp)
    if (v1 == s5) goto label_0x107024;                          // 0x00107000: beq $v1, $s5, 0x107024
    s0 = s4 + s3;                                               // 0x00107004: addu $s0, $s4, $s3
    v1 = -0x1000;                                               // 0x0010700c: addiu $v1, $zero, -0x1000
    v0 = v0 & v1;                                               // 0x00107018: and $v0, $v0, $v1
label_0x107024:
    func_0010a2b8();  // 0x10a260                                // 0x00107024: jal 0x10a260
    if (s1 == s5) goto label_0x1071b0;                          // 0x00107030: beq $s1, $s5, 0x1071b0
    v0 = ((unsigned)s1 < (unsigned)s0) ? 1 : 0;                 // 0x00107034: sltu $v0, $s1, $s0
    if (v0 == 0) goto label_0x10704c;                           // 0x00107038: beqz $v0, 0x10704c
    fp = 0x1f << 16;                                            // 0x0010703c: lui $fp, 0x1f
    if (s4 != s7) goto label_0x1071b4;                          // 0x00107040: bnel $s4, $s7, 0x1071b4
    fp = 0x1f << 16;                                            // 0x00107048: lui $fp, 0x1f
label_0x10704c:
    a0 = fp + 0x230;                                            // 0x0010704c: addiu $a0, $fp, 0x230
    v0 = g_001f0230;  // Global at 0x001f0230                   // 0x00107050: lw $v0, 0($a0)
    v1 = v0 + s2;                                               // 0x00107054: addu $v1, $v0, $s2
    if (s1 != s0) goto label_0x107078;                          // 0x00107058: bne $s1, $s0, 0x107078
    g_001f0230 = v1;  // Global at 0x001f0230                   // 0x0010705c: sw $v1, 0($a0)
    a0 = s2 + s3;                                               // 0x00107060: addu $a0, $s2, $s3
    v1 = g_001efe08;  // Global at 0x001efe08                   // 0x00107064: lw $v1, 8($s7)
    v0 = a0 | 1;                                                // 0x00107068: ori $v0, $a0, 1
    goto label_0x10717c;                                        // 0x0010706c: b 0x10717c
    g_001f022c = v0;  // Global at 0x001f022c                   // 0x00107070: sw $v0, 4($v1)
    /* nop */                                                   // 0x00107074: nop 
label_0x107078:
    v0 = g_001f0218;  // Global at 0x001f0218                   // 0x00107078: lw $v0, 0($s6)
    if (v0 != s5) goto label_0x107090;                          // 0x0010707c: bne $v0, $s5, 0x107090
    v0 = s1 - s0;                                               // 0x00107080: subu $v0, $s1, $s0
    goto label_0x107098;                                        // 0x00107084: b 0x107098
    g_001f0218 = s1;  // Global at 0x001f0218                   // 0x00107088: sw $s1, 0($s6)
    /* nop */                                                   // 0x0010708c: nop 
label_0x107090:
    v0 = v1 + v0;                                               // 0x00107090: addu $v0, $v1, $v0
    g_001f0230 = v0;  // Global at 0x001f0230                   // 0x00107094: sw $v0, 0($a0)
label_0x107098:
    v0 = s1 + 8;                                                // 0x00107098: addiu $v0, $s1, 8
    a1 = v0 & 0xf;                                              // 0x0010709c: andi $a1, $v0, 0xf
    if (a1 == 0) goto label_0x1070b8;                           // 0x001070a0: beqz $a1, 0x1070b8
    v0 = 0x10;                                                  // 0x001070a4: addiu $v0, $zero, 0x10
    s0 = v0 - a1;                                               // 0x001070a8: subu $s0, $v0, $a1
    goto label_0x1070bc;                                        // 0x001070ac: b 0x1070bc
    s1 = s1 + s0;                                               // 0x001070b0: addu $s1, $s1, $s0
    /* nop */                                                   // 0x001070b4: nop 
label_0x1070b8:
label_0x1070bc:
    v0 = s1 + s2;                                               // 0x001070bc: addu $v0, $s1, $s2
    v1 = 0x1000;                                                // 0x001070c0: addiu $v1, $zero, 0x1000
    v0 = v0 & 0xfff;                                            // 0x001070c4: andi $v0, $v0, 0xfff
    a0 = local_0;                                               // 0x001070c8: lw $a0, 0($sp)
    s0 = s0 + v1;                                               // 0x001070d8: addu $s0, $s0, $v1
    func_0010a2b8();  // 0x10a260                                // 0x001070dc: jal 0x10a260
    v0 = -1;                                                    // 0x001070e8: addiu $v0, $zero, -1
    if (a0 == v0) goto label_0x1071b0;                          // 0x001070ec: beq $a0, $v0, 0x1071b0
    a0 = a0 - s1;                                               // 0x001070f0: subu $a0, $a0, $s1
    a1 = fp + 0x230;                                            // 0x001070f4: addiu $a1, $fp, 0x230
    v0 = g_001f0230;  // Global at 0x001f0230                   // 0x001070f8: lw $v0, 0($a1)
    a0 = a0 + s0;                                               // 0x001070fc: addu $a0, $a0, $s0
    a2 = 0x1f << 16;                                            // 0x00107100: lui $a2, 0x1f
    a0 = a0 | 1;                                                // 0x00107104: ori $a0, $a0, 1
    v1 = a2 + -0x200;                                           // 0x00107108: addiu $v1, $a2, -0x200
    v0 = v0 + s0;                                               // 0x0010710c: addu $v0, $v0, $s0
    g_001f0230 = v0;  // Global at 0x001f0230                   // 0x00107110: sw $v0, 0($a1)
    g_001efe08 = s1;  // Global at 0x001efe08                   // 0x00107114: sw $s1, 8($v1)
    if (s4 == v1) goto label_0x10717c;                          // 0x00107118: beq $s4, $v1, 0x10717c
    *(uint32_t*)((s1) + 4) = a0;                                // 0x0010711c: sw $a0, 4($s1)
    v0 = ((unsigned)s3 < (unsigned)0x10) ? 1 : 0;               // 0x00107120: sltiu $v0, $s3, 0x10
    /* beqzl $v0, 0x107140 */                                   // 0x00107124: beqzl $v0, 0x107140
    v0 = *(int32_t*)((s4) + 4);                                 // 0x00107128: lw $v0, 4($s4)
    v0 = 1;                                                     // 0x00107130: addiu $v0, $zero, 1
    goto label_0x1071b0;                                        // 0x00107134: b 0x1071b0
    g_001efe04 = v0;  // Global at 0x001efe04                   // 0x00107138: sw $v0, 4($v1)
    /* nop */                                                   // 0x0010713c: nop 
    a0 = s3 + -0xc;                                             // 0x00107140: addiu $a0, $s3, -0xc
    v1 = -0x10;                                                 // 0x00107144: addiu $v1, $zero, -0x10
    a1 = 5;                                                     // 0x00107148: addiu $a1, $zero, 5
    s3 = a0 & v1;                                               // 0x0010714c: and $s3, $a0, $v1
    v0 = v0 & 1;                                                // 0x00107150: andi $v0, $v0, 1
    v1 = s4 + s3;                                               // 0x00107154: addu $v1, $s4, $s3
    v0 = v0 | s3;                                               // 0x00107158: or $v0, $v0, $s3
    a0 = ((unsigned)s3 < (unsigned)0x10) ? 1 : 0;               // 0x0010715c: sltiu $a0, $s3, 0x10
    *(uint32_t*)((s4) + 4) = v0;                                // 0x00107160: sw $v0, 4($s4)
    g_001efe08 = a1;  // Global at 0x001efe08                   // 0x00107164: sw $a1, 8($v1)
    if (a0 != 0) goto label_0x10717c;                           // 0x00107168: bnez $a0, 0x10717c
    g_001efe04 = a1;  // Global at 0x001efe04                   // 0x0010716c: sw $a1, 4($v1)
    a0 = local_0;                                               // 0x00107170: lw $a0, 0($sp)
    func_00105bd8();  // 0x1058e0                                // 0x00107174: jal 0x1058e0
    a1 = s4 + 8;                                                // 0x00107178: addiu $a1, $s4, 8
label_0x10717c:
    v1 = 0x1f << 16;                                            // 0x0010717c: lui $v1, 0x1f
    a1 = g_001f0230;  // Global at 0x001f0230                   // 0x00107180: lw $a1, 0x230($fp)
    v1 = v1 + 0x220;                                            // 0x00107184: addiu $v1, $v1, 0x220
    v0 = ((unsigned)v0 < (unsigned)a1) ? 1 : 0;                 // 0x0010718c: sltu $v0, $v0, $a1
    /* bnezl $v0, 0x107198 */                                   // 0x00107190: bnezl $v0, 0x107198
    v1 = 0x1f << 16;                                            // 0x00107198: lui $v1, 0x1f
    v1 = v1 + 0x228;                                            // 0x0010719c: addiu $v1, $v1, 0x228
    v0 = ((unsigned)v0 < (unsigned)a1) ? 1 : 0;                 // 0x001071a4: sltu $v0, $v0, $a1
    /* bnezl $v0, 0x1071b0 */                                   // 0x001071a8: bnezl $v0, 0x1071b0
label_0x1071b0:
label_0x1071b4:
    return;                                                     // 0x001071d8: jr $ra
    sp = sp + 0x60;                                             // 0x001071dc: addiu $sp, $sp, 0x60
}