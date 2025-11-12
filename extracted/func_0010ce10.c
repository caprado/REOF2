void func_0010ce10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_10, local_14, local_18, local_1c0, local_1c1, local_1d0, local_1d1, local_1d4;
    uint32_t local_1d8, local_1dc, local_1e0, local_1e4, local_1e8, local_1ec, local_1f0, local_1f4;
    uint32_t local_200, local_204, local_208, local_20c, local_210;
    
    sp = sp + -0x20;                                            // 0x0010ce10: addiu $sp, $sp, -0x20
    a0 = g_00220466;  // Global at 0x00220466                   // 0x0010ce30: lw $a0, 0x54($s0)
    if (a0 != 0) goto label_0x10ce48;                           // 0x0010ce34: bnez $a0, 0x10ce48
    v0 = 0x1f << 16;                                            // 0x0010ce38: lui $v0, 0x1f
    v0 = g_001efdf0;  // Global at 0x001efdf0                   // 0x0010ce3c: lw $v0, -0x210($v0)
    g_00220466 = v0;  // Global at 0x00220466                   // 0x0010ce40: sw $v0, 0x54($s0)
label_0x10ce48:
    v0 = *(int32_t*)((a0) + 0x38);                              // 0x0010ce48: lw $v0, 0x38($a0)
    if (v0 != 0) goto label_0x10ce64;                           // 0x0010ce4c: bnez $v0, 0x10ce64
    func_001055a8();  // 0x105518                                // 0x0010ce54: jal 0x105518
    /* nop */                                                   // 0x0010ce58: nop 
    a0 = g_00220466;  // Global at 0x00220466                   // 0x0010ce5c: lw $a0, 0x54($s0)
label_0x10ce64:
    goto label_0x10ce88;                                        // 0x0010ce7c: j 0x10ce88
    sp = sp + 0x20;                                             // 0x0010ce80: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0010ce84: nop 
label_0x10ce88:
    sp = sp + -0x290;                                           // 0x0010ce88: addiu $sp, $sp, -0x290
    local_1e4 = a0;                                             // 0x0010ce9c: sw $a0, 0x1e4($sp)
    func_00106b00();  // 0x106ae0                                // 0x0010cec0: jal 0x106ae0
    local_1e8 = a1;                                             // 0x0010cec4: sw $a1, 0x1e8($sp)
    a0 = local_1e8;                                             // 0x0010cec8: lw $a0, 0x1e8($sp)
    v0 = g_001f0000;  // Global at 0x001f0000                   // 0x0010cecc: lw $v0, 0($v0)
    v1 = *(uint16_t*)((a0) + 0xc);                              // 0x0010ced0: lhu $v1, 0xc($a0)
    local_1f4 = v0;                                             // 0x0010ced4: sw $v0, 0x1f4($sp)
    v0 = v1 & 8;                                                // 0x0010ced8: andi $v0, $v1, 8
    if (v0 == 0) goto label_0x10cef0;                           // 0x0010cedc: beqz $v0, 0x10cef0
    local_1d8 = 0;                                              // 0x0010cee0: sw $zero, 0x1d8($sp)
    v0 = *(int32_t*)((a0) + 0x10);                              // 0x0010cee4: lw $v0, 0x10($a0)
    /* bnezl $v0, 0x10cf0c */                                   // 0x0010cee8: bnezl $v0, 0x10cf0c
    v1 = v1 & 0x1a;                                             // 0x0010ceec: andi $v1, $v1, 0x1a
label_0x10cef0:
    func_0010f748();  // 0x10f638                                // 0x0010cef0: jal 0x10f638
    a0 = local_1e8;                                             // 0x0010cef4: lw $a0, 0x1e8($sp)
    if (v0 != 0) goto label_0x10e4c8;                           // 0x0010cef8: bnez $v0, 0x10e4c8
    v0 = -1;                                                    // 0x0010cefc: addiu $v0, $zero, -1
    a1 = local_1e8;                                             // 0x0010cf00: lw $a1, 0x1e8($sp)
    v1 = *(uint16_t*)((a1) + 0xc);                              // 0x0010cf04: lhu $v1, 0xc($a1)
    v1 = v1 & 0x1a;                                             // 0x0010cf08: andi $v1, $v1, 0x1a
    v0 = 0xa;                                                   // 0x0010cf0c: addiu $v0, $zero, 0xa
    if (v1 != v0) goto label_0x10cf40;                          // 0x0010cf10: bne $v1, $v0, 0x10cf40
    s3 = sp + 0x20;                                             // 0x0010cf14: addiu $s3, $sp, 0x20
    a2 = local_1e8;                                             // 0x0010cf18: lw $a2, 0x1e8($sp)
    v0 = *(int16_t*)((a2) + 0xe);                               // 0x0010cf1c: lh $v0, 0xe($a2)
    if (v0 < 0) goto label_0x10cf40;                            // 0x0010cf20: bltz $v0, 0x10cf40
    func_0010ce10();  // 0x10cd58                                // 0x0010cf2c: jal 0x10cd58
    goto label_0x10e4cc;                                        // 0x0010cf34: b 0x10e4cc
    /* nop */                                                   // 0x0010cf3c: nop 
label_0x10cf40:
    local_18 = 0;                                               // 0x0010cf40: sw $zero, 0x18($sp)
    local_10 = s3;                                              // 0x0010cf44: sw $s3, 0x10($sp)
    local_14 = 0;                                               // 0x0010cf4c: sw $zero, 0x14($sp)
    local_1ec = 0;                                              // 0x0010cf50: sw $zero, 0x1ec($sp)
    /* nop */                                                   // 0x0010cf54: nop 
label_0x10cf58:
    s1 = 0x25;                                                  // 0x0010cf5c: addiu $s1, $zero, 0x25
label_0x10cf60:
    v0 = 0x1f << 16;                                            // 0x0010cf60: lui $v0, 0x1f
    v1 = 0x1f << 16;                                            // 0x0010cf64: lui $v1, 0x1f
    a0 = g_001efdf0;  // Global at 0x001efdf0                   // 0x0010cf68: lw $a0, -0x210($v0)
    a1 = sp + 0x1d4;                                            // 0x0010cf6c: addiu $a1, $sp, 0x1d4
    a3 = g_001efdf8;  // Global at 0x001efdf8                   // 0x0010cf70: lw $a3, -0x208($v1)
    func_00107940();  // 0x107908                                // 0x0010cf78: jal 0x107908
    t0 = sp + 0x1d8;                                            // 0x0010cf7c: addiu $t0, $sp, 0x1d8
    if (s0 <= 0) goto label_0x10cfa0;                           // 0x0010cf84: blezl $s0, 0x10cfa0
    s1 = s2 - s5;                                               // 0x0010cf88: subu $s1, $s2, $s5
    v0 = local_1d4;                                             // 0x0010cf8c: lw $v0, 0x1d4($sp)
    if (v0 != s1) goto label_0x10cf60;                          // 0x0010cf90: bne $v0, $s1, 0x10cf60
    s2 = s2 + s0;                                               // 0x0010cf94: addu $s2, $s2, $s0
    s2 = s2 + -1;                                               // 0x0010cf98: addiu $s2, $s2, -1
    s1 = s2 - s5;                                               // 0x0010cf9c: subu $s1, $s2, $s5
label_0x10cfa0:
    if (s1 == 0) goto label_0x10cffc;                           // 0x0010cfa0: beqz $s1, 0x10cffc
    /* nop */                                                   // 0x0010cfa4: nop 
    *(uint32_t*)((s3) + 4) = s1;                                // 0x0010cfa8: sw $s1, 4($s3)
    *(uint32_t*)(s3) = s5;                                      // 0x0010cfac: sw $s5, 0($s3)
    s3 = s3 + 8;                                                // 0x0010cfb0: addiu $s3, $s3, 8
    v0 = local_14;                                              // 0x0010cfb4: lw $v0, 0x14($sp)
    v1 = local_18;                                              // 0x0010cfb8: lw $v1, 0x18($sp)
    v0 = v0 + 1;                                                // 0x0010cfbc: addiu $v0, $v0, 1
    v1 = v1 + s1;                                               // 0x0010cfc0: addu $v1, $v1, $s1
    a0 = (v0 < 8) ? 1 : 0;                                      // 0x0010cfc4: slti $a0, $v0, 8
    local_18 = v1;                                              // 0x0010cfc8: sw $v1, 0x18($sp)
    if (a0 != 0) goto label_0x10cff0;                           // 0x0010cfcc: bnez $a0, 0x10cff0
    local_14 = v0;                                              // 0x0010cfd0: sw $v0, 0x14($sp)
    a0 = local_1e8;                                             // 0x0010cfd4: lw $a0, 0x1e8($sp)
    func_0010cd58();  // 0x10cd10                                // 0x0010cfd8: jal 0x10cd10
    a1 = sp + 0x10;                                             // 0x0010cfdc: addiu $a1, $sp, 0x10
    if (v0 != 0) goto label_0x10e4b4;                           // 0x0010cfe0: bnez $v0, 0x10e4b4
    v0 = local_1e8;                                             // 0x0010cfe4: lw $v0, 0x1e8($sp)
    a0 = sp + 0x20;                                             // 0x0010cfe8: addiu $a0, $sp, 0x20
label_0x10cff0:
    a1 = local_1ec;                                             // 0x0010cff0: lw $a1, 0x1ec($sp)
    a1 = a1 + s1;                                               // 0x0010cff4: addu $a1, $a1, $s1
    local_1ec = a1;                                             // 0x0010cff8: sw $a1, 0x1ec($sp)
label_0x10cffc:
    if (s0 <= 0) goto label_0x10e494;                           // 0x0010cffc: blez $s0, 0x10e494
    v0 = local_18;                                              // 0x0010d000: lw $v0, 0x18($sp)
    local_1d1 = 0;                                              // 0x0010d004: sb $zero, 0x1d1($sp)
    s2 = s2 + 1;                                                // 0x0010d008: addiu $s2, $s2, 1
    local_204 = 0;                                              // 0x0010d00c: sw $zero, 0x204($sp)
    local_1f0 = 0;                                              // 0x0010d014: sw $zero, 0x1f0($sp)
    s4 = -1;                                                    // 0x0010d018: addiu $s4, $zero, -1
label_0x10d01c:
    a0 = *(uint8_t*)(s2);                                       // 0x0010d01c: lbu $a0, 0($s2)
label_0x10d020:
    v0 = a0 << 0x18;                                            // 0x0010d020: sll $v0, $a0, 0x18
    s2 = s2 + 1;                                                // 0x0010d024: addiu $s2, $s2, 1
    s1 = v0 >> 0x18;                                            // 0x0010d028: sra $s1, $v0, 0x18
label_0x10d02c:
    v1 = s1 + -0x20;                                            // 0x0010d02c: addiu $v1, $s1, -0x20
label_0x10d030:
    v0 = ((unsigned)v1 < (unsigned)0x59) ? 1 : 0;               // 0x0010d030: sltiu $v0, $v1, 0x59
    if (v0 == 0) goto label_0x10d700;                           // 0x0010d034: beqz $v0, 0x10d700
    v0 = v1 << 2;                                               // 0x0010d038: sll $v0, $v1, 2
    v1 = 0x22 << 16;                                            // 0x0010d03c: lui $v1, 0x22
    v1 = v1 + v0;                                               // 0x0010d040: addu $v1, $v1, $v0
    v1 = g_00220440;  // Global at 0x00220440                   // 0x0010d044: lw $v1, 0x440($v1)
    /* jump to address in v1 */                                 // 0x0010d048: jr $v1
    /* nop */                                                   // 0x0010d04c: nop 
    v0 = local_1d1;                                             // 0x0010d050: lb $v0, 0x1d1($sp)
    /* bnezl $v0, 0x10d020 */                                   // 0x0010d054: bnezl $v0, 0x10d020
    a0 = *(uint8_t*)(s2);                                       // 0x0010d058: lbu $a0, 0($s2)
    goto label_0x10d09c;                                        // 0x0010d05c: b 0x10d09c
    v0 = 0x20;                                                  // 0x0010d060: addiu $v0, $zero, 0x20
    /* nop */                                                   // 0x0010d064: nop 
    goto label_0x10d01c;                                        // 0x0010d068: b 0x10d01c
    s7 = s7 | 1;                                                // 0x0010d06c: ori $s7, $s7, 1
    s6 = s6 + 8;                                                // 0x0010d074: addiu $s6, $s6, 8
    v0 = g_001f0001;  // Global at 0x001f0001                   // 0x0010d078: lw $v0, 0($v0)
    if (v0 >= 0) goto label_0x10d01c;                           // 0x0010d07c: bgez $v0, 0x10d01c
    local_1f0 = v0;                                             // 0x0010d080: sw $v0, 0x1f0($sp)
    v0 = -v0;                                                   // 0x0010d084: negu $v0, $v0
    local_1f0 = v0;                                             // 0x0010d088: sw $v0, 0x1f0($sp)
    goto label_0x10d01c;                                        // 0x0010d08c: b 0x10d01c
    s7 = s7 | 4;                                                // 0x0010d090: ori $s7, $s7, 4
    /* nop */                                                   // 0x0010d094: nop 
    v0 = 0x2b;                                                  // 0x0010d098: addiu $v0, $zero, 0x2b
label_0x10d09c:
    a0 = *(uint8_t*)(s2);                                       // 0x0010d09c: lbu $a0, 0($s2)
    goto label_0x10d020;                                        // 0x0010d0a0: b 0x10d020
    local_1d1 = v0;                                             // 0x0010d0a4: sb $v0, 0x1d1($sp)
    s1 = *(int8_t*)(s2);                                        // 0x0010d0a8: lb $s1, 0($s2)
    v0 = 0x2a;                                                  // 0x0010d0ac: addiu $v0, $zero, 0x2a
    if (s1 != v0) goto label_0x10d0d8;                          // 0x0010d0b0: bne $s1, $v0, 0x10d0d8
    s2 = s2 + 1;                                                // 0x0010d0b4: addiu $s2, $s2, 1
    s0 = g_001f0001;  // Global at 0x001f0001                   // 0x0010d0bc: lw $s0, 0($v0)
    v0 = (s4 < -1) ? 1 : 0;                                     // 0x0010d0c4: slti $v0, $s4, -1
    if (v0 == 0) goto label_0x10d01c;                           // 0x0010d0c8: beqz $v0, 0x10d01c
    s6 = s6 + 8;                                                // 0x0010d0cc: addiu $s6, $s6, 8
    goto label_0x10d01c;                                        // 0x0010d0d0: b 0x10d01c
    s4 = -1;                                                    // 0x0010d0d4: addiu $s4, $zero, -1
label_0x10d0d8:
    v0 = s1 + -0x30;                                            // 0x0010d0d8: addiu $v0, $s1, -0x30
    v0 = ((unsigned)v0 < (unsigned)0xa) ? 1 : 0;                // 0x0010d0dc: sltiu $v0, $v0, 0xa
    if (v0 == 0) goto label_0x10d110;                           // 0x0010d0e0: beqz $v0, 0x10d110
label_0x10d0e8:
    v0 = s0 << 2;                                               // 0x0010d0e8: sll $v0, $s0, 2
    v0 = v0 + s0;                                               // 0x0010d0ec: addu $v0, $v0, $s0
    v0 = v0 << 1;                                               // 0x0010d0f0: sll $v0, $v0, 1
    v0 = v0 + s1;                                               // 0x0010d0f4: addu $v0, $v0, $s1
    s1 = *(int8_t*)(s2);                                        // 0x0010d0f8: lb $s1, 0($s2)
    s0 = v0 + -0x30;                                            // 0x0010d0fc: addiu $s0, $v0, -0x30
    v0 = s1 + -0x30;                                            // 0x0010d100: addiu $v0, $s1, -0x30
    v0 = ((unsigned)v0 < (unsigned)0xa) ? 1 : 0;                // 0x0010d104: sltiu $v0, $v0, 0xa
    if (v0 != 0) goto label_0x10d0e8;                           // 0x0010d108: bnez $v0, 0x10d0e8
    s2 = s2 + 1;                                                // 0x0010d10c: addiu $s2, $s2, 1
label_0x10d110:
    v0 = (s4 < -1) ? 1 : 0;                                     // 0x0010d114: slti $v0, $s4, -1
    /* bnezl $v0, 0x10d02c */                                   // 0x0010d118: bnezl $v0, 0x10d02c
    s4 = -1;                                                    // 0x0010d11c: addiu $s4, $zero, -1
    goto label_0x10d030;                                        // 0x0010d120: b 0x10d030
    v1 = s1 + -0x20;                                            // 0x0010d124: addiu $v1, $s1, -0x20
    goto label_0x10d01c;                                        // 0x0010d128: b 0x10d01c
    s7 = s7 | 0x80;                                             // 0x0010d12c: ori $s7, $s7, 0x80
    /* nop */                                                   // 0x0010d134: nop 
label_0x10d138:
    v0 = s0 << 2;                                               // 0x0010d138: sll $v0, $s0, 2
    v0 = v0 + s0;                                               // 0x0010d13c: addu $v0, $v0, $s0
    v0 = v0 << 1;                                               // 0x0010d140: sll $v0, $v0, 1
    v0 = v0 + s1;                                               // 0x0010d144: addu $v0, $v0, $s1
    s1 = *(int8_t*)(s2);                                        // 0x0010d148: lb $s1, 0($s2)
    s0 = v0 + -0x30;                                            // 0x0010d14c: addiu $s0, $v0, -0x30
    v0 = s1 + -0x30;                                            // 0x0010d150: addiu $v0, $s1, -0x30
    v0 = ((unsigned)v0 < (unsigned)0xa) ? 1 : 0;                // 0x0010d154: sltiu $v0, $v0, 0xa
    if (v0 != 0) goto label_0x10d138;                           // 0x0010d158: bnez $v0, 0x10d138
    s2 = s2 + 1;                                                // 0x0010d15c: addiu $s2, $s2, 1
    goto label_0x10d02c;                                        // 0x0010d160: b 0x10d02c
    local_1f0 = s0;                                             // 0x0010d164: sw $s0, 0x1f0($sp)
    goto label_0x10d01c;                                        // 0x0010d168: b 0x10d01c
    s7 = s7 | 8;                                                // 0x0010d16c: ori $s7, $s7, 8
    goto label_0x10d01c;                                        // 0x0010d170: b 0x10d01c
    s7 = s7 | 0x40;                                             // 0x0010d174: ori $s7, $s7, 0x40
    v1 = *(int8_t*)(s2);                                        // 0x0010d178: lb $v1, 0($s2)
    v0 = 0x6c;                                                  // 0x0010d17c: addiu $v0, $zero, 0x6c
    if (v1 != v0) goto label_0x10d198;                          // 0x0010d180: bne $v1, $v0, 0x10d198
    a0 = *(uint8_t*)(s2);                                       // 0x0010d184: lbu $a0, 0($s2)
    s2 = s2 + 1;                                                // 0x0010d188: addiu $s2, $s2, 1
    goto label_0x10d01c;                                        // 0x0010d18c: b 0x10d01c
    s7 = s7 | 0x20;                                             // 0x0010d190: ori $s7, $s7, 0x20
    /* nop */                                                   // 0x0010d194: nop 
label_0x10d198:
    goto label_0x10d020;                                        // 0x0010d198: b 0x10d020
    s7 = s7 | 0x10;                                             // 0x0010d19c: ori $s7, $s7, 0x10
    s6 = s6 + 8;                                                // 0x0010d1a4: addiu $s6, $s6, 8
    v1 = g_00220370;  // Global at 0x00220370                   // 0x0010d1a8: lbu $v1, 0($v0)
    s5 = sp + 0x60;                                             // 0x0010d1ac: addiu $s5, $sp, 0x60
    fp = 1;                                                     // 0x0010d1b0: addiu $fp, $zero, 1
    goto label_0x10d710;                                        // 0x0010d1b4: b 0x10d710
    g_00220404 = v1;  // Global at 0x00220404                   // 0x0010d1b8: sb $v1, 0($s5)
    /* nop */                                                   // 0x0010d1bc: nop 
    s7 = s7 | 0x10;                                             // 0x0010d1c0: ori $s7, $s7, 0x10
    v0 = s7 & 0x10;                                             // 0x0010d1c4: andi $v0, $s7, 0x10
    if (v0 == 0) goto label_0x10d1e0;                           // 0x0010d1c8: beqz $v0, 0x10d1e0
    s6 = s6 + 8;                                                // 0x0010d1d0: addiu $s6, $s6, 8
    goto label_0x10d200;                                        // 0x0010d1d4: b 0x10d200
    /* nop */                                                   // 0x0010d1dc: nop 
label_0x10d1e0:
    v0 = s7 & 0x40;                                             // 0x0010d1e0: andi $v0, $s7, 0x40
    if (v0 == 0) goto label_0x10d1f8;                           // 0x0010d1e4: beqz $v0, 0x10d1f8
    s6 = s6 + 8;                                                // 0x0010d1ec: addiu $s6, $s6, 8
    goto label_0x10d200;                                        // 0x0010d1f0: b 0x10d200
    s0 = g_00220370;  // Global at 0x00220370                   // 0x0010d1f4: lh $s0, 0($v0)
label_0x10d1f8:
    s6 = s6 + 8;                                                // 0x0010d1f8: addiu $s6, $s6, 8
    s0 = g_00220370;  // Global at 0x00220370                   // 0x0010d1fc: lw $s0, 0($v0)
label_0x10d200:
    if (s0 >= 0) goto label_0x10d5e0;                           // 0x0010d200: bgez $s0, 0x10d5e0
    v1 = 1;                                                     // 0x0010d204: addiu $v1, $zero, 1
    v0 = 0x2d;                                                  // 0x0010d208: addiu $v0, $zero, 0x2d
    goto label_0x10d5e0;                                        // 0x0010d210: b 0x10d5e0
    local_1d1 = v0;                                             // 0x0010d214: sb $v0, 0x1d1($sp)
    v0 = -1;                                                    // 0x0010d218: addiu $v0, $zero, -1
    if (s4 != v0) goto label_0x10d230;                          // 0x0010d21c: bne $s4, $v0, 0x10d230
    v0 = 0x67;                                                  // 0x0010d220: addiu $v0, $zero, 0x67
    goto label_0x10d248;                                        // 0x0010d224: b 0x10d248
    s4 = 6;                                                     // 0x0010d228: addiu $s4, $zero, 6
    /* nop */                                                   // 0x0010d22c: nop 
label_0x10d230:
    if (s1 == v0) goto label_0x10d240;                          // 0x0010d230: beq $s1, $v0, 0x10d240
    v0 = 0x47;                                                  // 0x0010d234: addiu $v0, $zero, 0x47
    if (s1 != v0) goto label_0x10d24c;                          // 0x0010d238: bne $s1, $v0, 0x10d24c
    v0 = s7 & 8;                                                // 0x0010d23c: andi $v0, $s7, 8
label_0x10d240:
    v0 = 1;                                                     // 0x0010d240: addiu $v0, $zero, 1
    if (s4 == 0) s4 = v0;                                       // 0x0010d244: movz $s4, $v0, $s4
label_0x10d248:
    v0 = s7 & 8;                                                // 0x0010d248: andi $v0, $s7, 8
label_0x10d24c:
    func_0010a220();  // 0x10a1d8                                // 0x0010d25c: jal 0x10a1d8
    s6 = s6 + 8;                                                // 0x0010d260: addiu $s6, $s6, 8
    if (v0 == 0) goto label_0x10d2a0;                           // 0x0010d264: beqz $v0, 0x10d2a0
    /* nop */                                                   // 0x0010d268: nop 
    func_00111f90();  // 0x111f40                                // 0x0010d274: jal 0x111f40
    /* nop */                                                   // 0x0010d278: nop 
    if (v0 >= 0) goto label_0x10d290;                           // 0x0010d27c: bgez $v0, 0x10d290
    v0 = 0x22 << 16;                                            // 0x0010d280: lui $v0, 0x22
    v0 = 0x2d;                                                  // 0x0010d284: addiu $v0, $zero, 0x2d
    local_1d1 = v0;                                             // 0x0010d288: sb $v0, 0x1d1($sp)
    v0 = 0x22 << 16;                                            // 0x0010d28c: lui $v0, 0x22
label_0x10d290:
    fp = 3;                                                     // 0x0010d290: addiu $fp, $zero, 3
    goto label_0x10d714;                                        // 0x0010d294: b 0x10d714
    s5 = v0 + 0x3c0;                                            // 0x0010d298: addiu $s5, $v0, 0x3c0
    /* nop */                                                   // 0x0010d29c: nop 
label_0x10d2a0:
    func_0010a260();  // 0x10a220                                // 0x0010d2a4: jal 0x10a220
    /* nop */                                                   // 0x0010d2a8: nop 
    if (v0 == 0) goto label_0x10d2c0;                           // 0x0010d2ac: beqz $v0, 0x10d2c0
    v0 = 0x22 << 16;                                            // 0x0010d2b0: lui $v0, 0x22
    fp = 3;                                                     // 0x0010d2b4: addiu $fp, $zero, 3
    goto label_0x10d714;                                        // 0x0010d2b8: b 0x10d714
    s5 = v0 + 0x3c8;                                            // 0x0010d2bc: addiu $s5, $v0, 0x3c8
label_0x10d2c0:
    s7 = s7 | 0x100;                                            // 0x0010d2c0: ori $s7, $s7, 0x100
    a0 = local_1e4;                                             // 0x0010d2c4: lw $a0, 0x1e4($sp)
    t0 = sp + 0x1d0;                                            // 0x0010d2d4: addiu $t0, $sp, 0x1d0
    t1 = sp + 0x1dc;                                            // 0x0010d2d8: addiu $t1, $sp, 0x1dc
    func_0010e6b8();  // 0x10e4f8                                // 0x0010d2e0: jal 0x10e4f8
    t3 = sp + 0x1e0;                                            // 0x0010d2e4: addiu $t3, $sp, 0x1e0
    v0 = 0x67;                                                  // 0x0010d2ec: addiu $v0, $zero, 0x67
    if (s1 == v0) goto label_0x10d300;                          // 0x0010d2f0: beq $s1, $v0, 0x10d300
    v0 = 0x47;                                                  // 0x0010d2f4: addiu $v0, $zero, 0x47
    if (s1 != v0) goto label_0x10d330;                          // 0x0010d2f8: bne $s1, $v0, 0x10d330
    a3 = local_1dc;                                             // 0x0010d2fc: lw $a3, 0x1dc($sp)
label_0x10d300:
    a3 = local_1dc;                                             // 0x0010d300: lw $a3, 0x1dc($sp)
    v0 = (a3 < -3) ? 1 : 0;                                     // 0x0010d304: slti $v0, $a3, -3
    if (v0 != 0) goto label_0x10d320;                           // 0x0010d308: bnez $v0, 0x10d320
    v0 = 0x65;                                                  // 0x0010d30c: addiu $v0, $zero, 0x65
    v0 = (s4 < a3) ? 1 : 0;                                     // 0x0010d310: slt $v0, $s4, $a3
    /* beqzl $v0, 0x10d330 */                                   // 0x0010d314: beqzl $v0, 0x10d330
    s1 = 0x67;                                                  // 0x0010d318: addiu $s1, $zero, 0x67
    v0 = 0x65;                                                  // 0x0010d31c: addiu $v0, $zero, 0x65
label_0x10d320:
    a0 = s1 ^ 0x67;                                             // 0x0010d320: xori $a0, $s1, 0x67
    v1 = 0x45;                                                  // 0x0010d324: addiu $v1, $zero, 0x45
    if (a0 != 0) s1 = v1;                                       // 0x0010d32c: movn $s1, $v1, $a0
label_0x10d330:
    v0 = (s1 < 0x66) ? 1 : 0;                                   // 0x0010d330: slti $v0, $s1, 0x66
    /* beqzl $v0, 0x10d380 */                                   // 0x0010d334: beqzl $v0, 0x10d380
    v0 = 0x66;                                                  // 0x0010d338: addiu $v0, $zero, 0x66
    a3 = a3 + -1;                                               // 0x0010d33c: addiu $a3, $a3, -1
    func_0010e798();  // 0x10e6b8                                // 0x0010d34c: jal 0x10e6b8
    local_1dc = a3;                                             // 0x0010d350: sw $a3, 0x1dc($sp)
    local_200 = v0;                                             // 0x0010d354: sw $v0, 0x200($sp)
    v0 = local_1e0;                                             // 0x0010d358: lw $v0, 0x1e0($sp)
    a2 = local_200;                                             // 0x0010d35c: lw $a2, 0x200($sp)
    v1 = (v0 < 2) ? 1 : 0;                                      // 0x0010d360: slti $v1, $v0, 2
    if (v1 == 0) goto label_0x10d378;                           // 0x0010d364: beqz $v1, 0x10d378
    fp = a2 + v0;                                               // 0x0010d368: addu $fp, $a2, $v0
    v0 = s7 & 1;                                                // 0x0010d36c: andi $v0, $s7, 1
    if (v0 == 0) goto label_0x10d3e4;                           // 0x0010d370: beqz $v0, 0x10d3e4
    v0 = local_1d0;                                             // 0x0010d374: lb $v0, 0x1d0($sp)
label_0x10d378:
    goto label_0x10d3e0;                                        // 0x0010d378: b 0x10d3e0
    fp = fp + 1;                                                // 0x0010d37c: addiu $fp, $fp, 1
    if (s1 != v0) goto label_0x10d3b0;                          // 0x0010d380: bne $s1, $v0, 0x10d3b0
    a1 = local_1e0;                                             // 0x0010d384: lw $a1, 0x1e0($sp)
    if (a3 <= 0) goto label_0x10d3e0;                           // 0x0010d388: blez $a3, 0x10d3e0
    fp = s4 + 2;                                                // 0x0010d38c: addiu $fp, $s4, 2
    if (s4 != 0) goto label_0x10d3a4;                           // 0x0010d390: bnez $s4, 0x10d3a4
    v0 = s7 & 1;                                                // 0x0010d398: andi $v0, $s7, 1
    if (v0 == 0) goto label_0x10d3e4;                           // 0x0010d39c: beqz $v0, 0x10d3e4
    v0 = local_1d0;                                             // 0x0010d3a0: lb $v0, 0x1d0($sp)
label_0x10d3a4:
    v0 = a3 + s4;                                               // 0x0010d3a4: addu $v0, $a3, $s4
    goto label_0x10d3e0;                                        // 0x0010d3a8: b 0x10d3e0
    fp = v0 + 1;                                                // 0x0010d3ac: addiu $fp, $v0, 1
label_0x10d3b0:
    v0 = (a3 < a1) ? 1 : 0;                                     // 0x0010d3b0: slt $v0, $a3, $a1
    if (v0 != 0) goto label_0x10d3d0;                           // 0x0010d3b4: bnez $v0, 0x10d3d0
    v0 = s7 & 1;                                                // 0x0010d3b8: andi $v0, $s7, 1
    if (v0 == 0) goto label_0x10d3e0;                           // 0x0010d3bc: beqz $v0, 0x10d3e0
    goto label_0x10d3e0;                                        // 0x0010d3c4: b 0x10d3e0
    fp = a3 + 1;                                                // 0x0010d3c8: addiu $fp, $a3, 1
    /* nop */                                                   // 0x0010d3cc: nop 
label_0x10d3d0:
    if (a3 > 0) goto label_0x10d3e0;                            // 0x0010d3d0: bgtzl $a3, 0x10d3e0
    fp = a1 + 1;                                                // 0x0010d3d4: addiu $fp, $a1, 1
    v0 = a1 - a3;                                               // 0x0010d3d8: subu $v0, $a1, $a3
    fp = v0 + 2;                                                // 0x0010d3dc: addiu $fp, $v0, 2
label_0x10d3e0:
    v0 = local_1d0;                                             // 0x0010d3e0: lb $v0, 0x1d0($sp)
label_0x10d3e4:
    if (v0 == 0) goto label_0x10d714;                           // 0x0010d3e4: beqz $v0, 0x10d714
    v0 = 0x2d;                                                  // 0x0010d3e8: addiu $v0, $zero, 0x2d
    goto label_0x10d714;                                        // 0x0010d3ec: b 0x10d714
    local_1d1 = v0;                                             // 0x0010d3f0: sb $v0, 0x1d1($sp)
    /* nop */                                                   // 0x0010d3f4: nop 
    v0 = s7 & 0x10;                                             // 0x0010d3f8: andi $v0, $s7, 0x10
    if (v0 == 0) goto label_0x10d420;                           // 0x0010d3fc: beqz $v0, 0x10d420
    v0 = s7 & 0x40;                                             // 0x0010d400: andi $v0, $s7, 0x40
    s6 = s6 + 8;                                                // 0x0010d408: addiu $s6, $s6, 8
    v0 = g_00220380;  // Global at 0x00220380                   // 0x0010d40c: lw $v0, 0($v1)
    v1 = local_1ec;                                             // 0x0010d410: lw $v1, 0x1ec($sp)
    goto label_0x10cf58;                                        // 0x0010d414: b 0x10cf58
    /* nop */                                                   // 0x0010d41c: nop 
label_0x10d420:
    if (v0 == 0) goto label_0x10d440;                           // 0x0010d420: beqz $v0, 0x10d440
    s6 = s6 + 8;                                                // 0x0010d428: addiu $s6, $s6, 8
    v0 = g_00220380;  // Global at 0x00220380                   // 0x0010d42c: lw $v0, 0($v1)
    a0 = local_1ec;                                             // 0x0010d430: lw $a0, 0x1ec($sp)
    goto label_0x10cf58;                                        // 0x0010d434: b 0x10cf58
    g_00220000 = a0;  // Global at 0x00220000                   // 0x0010d438: sh $a0, 0($v0)
    /* nop */                                                   // 0x0010d43c: nop 
label_0x10d440:
    s6 = s6 + 8;                                                // 0x0010d440: addiu $s6, $s6, 8
    v0 = g_00220380;  // Global at 0x00220380                   // 0x0010d444: lw $v0, 0($v1)
    a1 = local_1ec;                                             // 0x0010d448: lw $a1, 0x1ec($sp)
    goto label_0x10cf58;                                        // 0x0010d44c: b 0x10cf58
    g_00220000 = a1;  // Global at 0x00220000                   // 0x0010d450: sw $a1, 0($v0)
    /* nop */                                                   // 0x0010d454: nop 
    s7 = s7 | 0x10;                                             // 0x0010d458: ori $s7, $s7, 0x10
    v0 = s7 & 0x10;                                             // 0x0010d45c: andi $v0, $s7, 0x10
    if (v0 == 0) goto label_0x10d478;                           // 0x0010d460: beqz $v0, 0x10d478
    s6 = s6 + 8;                                                // 0x0010d468: addiu $s6, $s6, 8
    goto label_0x10d498;                                        // 0x0010d46c: b 0x10d498
    /* nop */                                                   // 0x0010d474: nop 
label_0x10d478:
    v0 = s7 & 0x40;                                             // 0x0010d478: andi $v0, $s7, 0x40
    if (v0 == 0) goto label_0x10d490;                           // 0x0010d47c: beqz $v0, 0x10d490
    s6 = s6 + 8;                                                // 0x0010d484: addiu $s6, $s6, 8
    goto label_0x10d498;                                        // 0x0010d488: b 0x10d498
    s0 = g_00220000;  // Global at 0x00220000                   // 0x0010d48c: lhu $s0, 0($v0)
label_0x10d490:
    s6 = s6 + 8;                                                // 0x0010d490: addiu $s6, $s6, 8
label_0x10d498:
    goto label_0x10d5dc;                                        // 0x0010d498: b 0x10d5dc
    v0 = 0x22 << 16;                                            // 0x0010d4a0: lui $v0, 0x22
    v0 = &str_002203d0;  // "(null)"                            // 0x0010d4a8: addiu $v0, $v0, 0x3d0
    s0 = g_00220380;  // Global at 0x00220380                   // 0x0010d4ac: lw $s0, 0($v1)
    s6 = s6 + 8;                                                // 0x0010d4b0: addiu $s6, $s6, 8
    s7 = s7 | 2;                                                // 0x0010d4b4: ori $s7, $s7, 2
    local_20c = v0;                                             // 0x0010d4b8: sw $v0, 0x20c($sp)
    v1 = 2;                                                     // 0x0010d4bc: addiu $v1, $zero, 2
    goto label_0x10d5dc;                                        // 0x0010d4c0: b 0x10d5dc
    s1 = 0x78;                                                  // 0x0010d4c4: addiu $s1, $zero, 0x78
    s5 = str_002203d0;  // "(null)"                             // 0x0010d4cc: lw $s5, 0($v0)
    if (s5 != 0) goto label_0x10d4e0;                           // 0x0010d4d0: bnez $s5, 0x10d4e0
    s6 = s6 + 8;                                                // 0x0010d4d4: addiu $s6, $s6, 8
    v0 = 0x22 << 16;                                            // 0x0010d4d8: lui $v0, 0x22
    s5 = &str_002203e8;  // "0123456789ABCDEF"                  // 0x0010d4dc: addiu $s5, $v0, 0x3e8
label_0x10d4e0:
    if (s4 < 0) goto label_0x10d518;                            // 0x0010d4e0: bltz $s4, 0x10d518
    func_00107a20();  // 0x107940                                // 0x0010d4ec: jal 0x107940
    if (v0 == 0) goto label_0x10d710;                           // 0x0010d4f4: beqz $v0, 0x10d710
    fp = v0 - s5;                                               // 0x0010d4fc: subu $fp, $v0, $s5
    v0 = (s4 < fp) ? 1 : 0;                                     // 0x0010d500: slt $v0, $s4, $fp
    /* beqzl $v0, 0x10d714 */                                   // 0x0010d504: beqzl $v0, 0x10d714
    local_1d1 = 0;                                              // 0x0010d508: sb $zero, 0x1d1($sp)
    goto label_0x10d710;                                        // 0x0010d50c: b 0x10d710
    /* nop */                                                   // 0x0010d514: nop 
label_0x10d518:
    func_0010af38();  // 0x10ae00                                // 0x0010d518: jal 0x10ae00
    goto label_0x10d710;                                        // 0x0010d520: b 0x10d710
    s7 = s7 | 0x10;                                             // 0x0010d528: ori $s7, $s7, 0x10
    v0 = s7 & 0x10;                                             // 0x0010d52c: andi $v0, $s7, 0x10
    if (v0 == 0) goto label_0x10d548;                           // 0x0010d530: beqz $v0, 0x10d548
    s6 = s6 + 8;                                                // 0x0010d538: addiu $s6, $s6, 8
    goto label_0x10d568;                                        // 0x0010d53c: b 0x10d568
    /* nop */                                                   // 0x0010d544: nop 
label_0x10d548:
    v0 = s7 & 0x40;                                             // 0x0010d548: andi $v0, $s7, 0x40
    if (v0 == 0) goto label_0x10d560;                           // 0x0010d54c: beqz $v0, 0x10d560
    s6 = s6 + 8;                                                // 0x0010d554: addiu $s6, $s6, 8
    goto label_0x10d568;                                        // 0x0010d558: b 0x10d568
    s0 = g_00220000;  // Global at 0x00220000                   // 0x0010d55c: lhu $s0, 0($v0)
label_0x10d560:
    s6 = s6 + 8;                                                // 0x0010d560: addiu $s6, $s6, 8
label_0x10d568:
    goto label_0x10d5dc;                                        // 0x0010d568: b 0x10d5dc
    v1 = 1;                                                     // 0x0010d56c: addiu $v1, $zero, 1
    v0 = 0x22 << 16;                                            // 0x0010d570: lui $v0, 0x22
    goto label_0x10d588;                                        // 0x0010d574: b 0x10d588
    v0 = &str_002203f0;  // "bug in vfprintf: bad base"         // 0x0010d578: addiu $v0, $v0, 0x3f0
    /* nop */                                                   // 0x0010d57c: nop 
    v0 = 0x22 << 16;                                            // 0x0010d580: lui $v0, 0x22
    v0 = &str_002203d0;  // "(null)"                            // 0x0010d584: addiu $v0, $v0, 0x3d0
label_0x10d588:
    local_20c = v0;                                             // 0x0010d588: sw $v0, 0x20c($sp)
    v0 = s7 & 0x10;                                             // 0x0010d58c: andi $v0, $s7, 0x10
    if (v0 == 0) goto label_0x10d5a8;                           // 0x0010d590: beqz $v0, 0x10d5a8
    s6 = s6 + 8;                                                // 0x0010d598: addiu $s6, $s6, 8
    goto label_0x10d5c8;                                        // 0x0010d59c: b 0x10d5c8
    /* nop */                                                   // 0x0010d5a4: nop 
label_0x10d5a8:
    v0 = s7 & 0x40;                                             // 0x0010d5a8: andi $v0, $s7, 0x40
    if (v0 == 0) goto label_0x10d5c0;                           // 0x0010d5ac: beqz $v0, 0x10d5c0
    s6 = s6 + 8;                                                // 0x0010d5b4: addiu $s6, $s6, 8
    goto label_0x10d5c8;                                        // 0x0010d5b8: b 0x10d5c8
    s0 = str_002203d0;  // "(null)"                             // 0x0010d5bc: lhu $s0, 0($v0)
label_0x10d5c0:
    s6 = s6 + 8;                                                // 0x0010d5c0: addiu $s6, $s6, 8
label_0x10d5c8:
    v0 = s7 & 1;                                                // 0x0010d5c8: andi $v0, $s7, 1
    if (v0 == 0) goto label_0x10d5dc;                           // 0x0010d5cc: beqz $v0, 0x10d5dc
    v1 = 2;                                                     // 0x0010d5d0: addiu $v1, $zero, 2
    v0 = s7 | 2;                                                // 0x0010d5d4: ori $v0, $s7, 2
    if (s0 != 0) s7 = v0;                                       // 0x0010d5d8: movn $s7, $v0, $s0
label_0x10d5dc:
    local_1d1 = 0;                                              // 0x0010d5dc: sb $zero, 0x1d1($sp)
label_0x10d5e0:
    if (s4 < 0) goto label_0x10d5f0;                            // 0x0010d5e0: bltz $s4, 0x10d5f0
    local_204 = s4;                                             // 0x0010d5e4: sw $s4, 0x204($sp)
    v0 = -0x81;                                                 // 0x0010d5e8: addiu $v0, $zero, -0x81
    s7 = s7 & v0;                                               // 0x0010d5ec: and $s7, $s7, $v0
label_0x10d5f0:
    if (s0 != 0) goto label_0x10d604;                           // 0x0010d5f0: bnez $s0, 0x10d604
    s5 = sp + 0x1bc;                                            // 0x0010d5f4: addiu $s5, $sp, 0x1bc
    a2 = local_204;                                             // 0x0010d5f8: lw $a2, 0x204($sp)
    if (a2 == 0) goto label_0x10d6f4;                           // 0x0010d5fc: beqz $a2, 0x10d6f4
    v0 = sp - s5;                                               // 0x0010d600: subu $v0, $sp, $s5
label_0x10d604:
    v0 = 1;                                                     // 0x0010d604: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x10d6a4;                          // 0x0010d608: beq $v1, $v0, 0x10d6a4
    v0 = ((unsigned)s0 < (unsigned)0xa) ? 1 : 0;                // 0x0010d60c: sltiu $v0, $s0, 0xa
    if (v1 == 0) goto label_0x10d638;                           // 0x0010d610: beqz $v1, 0x10d638
    a0 = 7;                                                     // 0x0010d614: addiu $a0, $zero, 7
    v0 = 2;                                                     // 0x0010d618: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x10d6c0;                          // 0x0010d61c: beq $v1, $v0, 0x10d6c0
    v0 = 0x22 << 16;                                            // 0x0010d620: lui $v0, 0x22
    s5 = &str_00220408;  // "rom0:ROMVER"                       // 0x0010d624: addiu $s5, $v0, 0x408
    func_0010af38();  // 0x10ae00                                // 0x0010d628: jal 0x10ae00
    goto label_0x10d714;                                        // 0x0010d630: b 0x10d714
label_0x10d638:
    v0 = s0 & a0;                                               // 0x0010d638: and $v0, $s0, $a0
    s5 = s5 + -1;                                               // 0x0010d644: addiu $s5, $s5, -1
    v1 = v0 & 0xff;                                             // 0x0010d648: andi $v1, $v0, 0xff
    if (s0 != 0) goto label_0x10d638;                           // 0x0010d64c: bnez $s0, 0x10d638
    g_00220407 = v1;  // Global at 0x00220407                   // 0x0010d650: sb $v1, 0($s5)
    v0 = s7 & 1;                                                // 0x0010d654: andi $v0, $s7, 1
    if (v0 == 0) goto label_0x10d6f0;                           // 0x0010d658: beqz $v0, 0x10d6f0
    v0 = 0x30;                                                  // 0x0010d65c: addiu $v0, $zero, 0x30
    if (v1 == v0) goto label_0x10d6f4;                          // 0x0010d660: beql $v1, $v0, 0x10d6f4
    v0 = sp - s5;                                               // 0x0010d664: subu $v0, $sp, $s5
    s5 = s5 + -1;                                               // 0x0010d668: addiu $s5, $s5, -1
    goto label_0x10d6f0;                                        // 0x0010d66c: b 0x10d6f0
    g_00220406 = v0;  // Global at 0x00220406                   // 0x0010d670: sb $v0, 0($s5)
    /* nop */                                                   // 0x0010d674: nop 
label_0x10d678:
    func_00110fd0();  // 0x110a68                                // 0x0010d678: jal 0x110a68
    a1 = 0xa;                                                   // 0x0010d67c: addiu $a1, $zero, 0xa
    s5 = s5 + -1;                                               // 0x0010d688: addiu $s5, $s5, -1
    v0 = v0 & 0xff;                                             // 0x0010d68c: andi $v0, $v0, 0xff
    a1 = 0xa;                                                   // 0x0010d690: addiu $a1, $zero, 0xa
    func_00110a68();  // 0x1104e8                                // 0x0010d694: jal 0x1104e8
    g_00220405 = v0;  // Global at 0x00220405                   // 0x0010d698: sb $v0, 0($s5)
    v0 = ((unsigned)s0 < (unsigned)0xa) ? 1 : 0;                // 0x0010d6a0: sltiu $v0, $s0, 0xa
label_0x10d6a4:
    if (v0 == 0) goto label_0x10d678;                           // 0x0010d6a4: beqz $v0, 0x10d678
    s5 = s5 + -1;                                               // 0x0010d6b0: addiu $s5, $s5, -1
    v0 = v0 & 0xff;                                             // 0x0010d6b4: andi $v0, $v0, 0xff
    goto label_0x10d6f0;                                        // 0x0010d6b8: b 0x10d6f0
    g_00220404 = v0;  // Global at 0x00220404                   // 0x0010d6bc: sb $v0, 0($s5)
label_0x10d6c0:
    a0 = 0xf;                                                   // 0x0010d6c0: addiu $a0, $zero, 0xf
    /* nop */                                                   // 0x0010d6c4: nop 
label_0x10d6c8:
    v1 = local_20c;                                             // 0x0010d6c8: lw $v1, 0x20c($sp)
    v0 = s0 & a0;                                               // 0x0010d6cc: and $v0, $s0, $a0
    s5 = s5 + -1;                                               // 0x0010d6d8: addiu $s5, $s5, -1
    v0 = v1 + v0;                                               // 0x0010d6dc: addu $v0, $v1, $v0
    v1 = g_00220000;  // Global at 0x00220000                   // 0x0010d6e4: lbu $v1, 0($v0)
    if (s0 != 0) goto label_0x10d6c8;                           // 0x0010d6e8: bnez $s0, 0x10d6c8
    g_00220403 = v1;  // Global at 0x00220403                   // 0x0010d6ec: sb $v1, 0($s5)
label_0x10d6f0:
    v0 = sp - s5;                                               // 0x0010d6f0: subu $v0, $sp, $s5
label_0x10d6f4:
    goto label_0x10d714;                                        // 0x0010d6f4: b 0x10d714
    fp = v0 + 0x1bc;                                            // 0x0010d6f8: addiu $fp, $v0, 0x1bc
    /* nop */                                                   // 0x0010d6fc: nop 
label_0x10d700:
    if (s1 == 0) goto label_0x10e490;                           // 0x0010d700: beqz $s1, 0x10e490
    s5 = sp + 0x60;                                             // 0x0010d704: addiu $s5, $sp, 0x60
    fp = 1;                                                     // 0x0010d708: addiu $fp, $zero, 1
    g_00220403 = s1;  // Global at 0x00220403                   // 0x0010d70c: sb $s1, 0($s5)
label_0x10d710:
    local_1d1 = 0;                                              // 0x0010d710: sb $zero, 0x1d1($sp)
label_0x10d714:
    a1 = local_204;                                             // 0x0010d714: lw $a1, 0x204($sp)
    v1 = local_1d1;                                             // 0x0010d720: lb $v1, 0x1d1($sp)
    v0 = (a0 < a1) ? 1 : 0;                                     // 0x0010d724: slt $v0, $a0, $a1
    a0 = local_1d1;                                             // 0x0010d728: lbu $a0, 0x1d1($sp)
    if (v0 == 0) a1 = a2;                                       // 0x0010d72c: movz $a1, $a2, $v0
    local_208 = fp;                                             // 0x0010d730: sw $fp, 0x208($sp)
    if (v1 == 0) goto label_0x10d748;                           // 0x0010d734: beqz $v1, 0x10d748
    local_208 = a1;                                             // 0x0010d738: sw $a1, 0x208($sp)
    a1 = a1 + 1;                                                // 0x0010d73c: addiu $a1, $a1, 1
    goto label_0x10d758;                                        // 0x0010d740: b 0x10d758
    local_208 = a1;                                             // 0x0010d744: sw $a1, 0x208($sp)
label_0x10d748:
    v1 = local_208;                                             // 0x0010d748: lw $v1, 0x208($sp)
    v0 = s7 & 2;                                                // 0x0010d74c: andi $v0, $s7, 2
    v1 = v0 + v1;                                               // 0x0010d750: addu $v1, $v0, $v1
    local_208 = v1;                                             // 0x0010d754: sw $v1, 0x208($sp)
label_0x10d758:
    a1 = s7 & 0x84;                                             // 0x0010d758: andi $a1, $s7, 0x84
    if (a1 != 0) goto label_0x10d848;                           // 0x0010d75c: bnez $a1, 0x10d848
    local_210 = a1;                                             // 0x0010d760: sw $a1, 0x210($sp)
    a2 = local_1f0;                                             // 0x0010d764: lw $a2, 0x1f0($sp)
    v0 = local_208;                                             // 0x0010d768: lw $v0, 0x208($sp)
    s0 = a2 - v0;                                               // 0x0010d76c: subu $s0, $a2, $v0
    if (s0 <= 0) goto label_0x10d848;                           // 0x0010d770: blez $s0, 0x10d848
    v0 = (s0 < 0x11) ? 1 : 0;                                   // 0x0010d774: slti $v0, $s0, 0x11
    if (v0 != 0) goto label_0x10d7f8;                           // 0x0010d778: bnez $v0, 0x10d7f8
    a3 = 0x22 << 16;                                            // 0x0010d77c: lui $a3, 0x22
    a2 = 0x10;                                                  // 0x0010d780: addiu $a2, $zero, 0x10
    s4 = a3 + 0x3a0;                                            // 0x0010d784: addiu $s4, $a3, 0x3a0
    *(uint32_t*)((s3) + 4) = a2;                                // 0x0010d788: sw $a2, 4($s3)
    /* nop */                                                   // 0x0010d78c: nop 
    *(uint32_t*)(s3) = s4;                                      // 0x0010d790: sw $s4, 0($s3)
    s3 = s3 + 8;                                                // 0x0010d794: addiu $s3, $s3, 8
    v0 = local_14;                                              // 0x0010d798: lw $v0, 0x14($sp)
    v1 = local_18;                                              // 0x0010d79c: lw $v1, 0x18($sp)
    v0 = v0 + 1;                                                // 0x0010d7a0: addiu $v0, $v0, 1
    v1 = v1 + 0x10;                                             // 0x0010d7a4: addiu $v1, $v1, 0x10
    a0 = (v0 < 8) ? 1 : 0;                                      // 0x0010d7a8: slti $a0, $v0, 8
    local_18 = v1;                                              // 0x0010d7ac: sw $v1, 0x18($sp)
    if (a0 != 0) goto label_0x10d7e0;                           // 0x0010d7b0: bnez $a0, 0x10d7e0
    local_14 = v0;                                              // 0x0010d7b4: sw $v0, 0x14($sp)
    a0 = local_1e8;                                             // 0x0010d7b8: lw $a0, 0x1e8($sp)
    a1 = sp + 0x10;                                             // 0x0010d7bc: addiu $a1, $sp, 0x10
    func_0010cd58();  // 0x10cd10                                // 0x0010d7c4: jal 0x10cd10
    /* FPU: dpax.w.ph $ac0, $sp, $a3 */                         // 0x0010d7c8: dpax.w.ph $ac0, $sp, $a3
    /* FPU: ld.b $w8, -0x5a($zero) */                           // 0x0010d7cc: ld.b $w8, -0x5a($zero)
    if (v0 != 0) goto label_0x10e4b0;                           // 0x0010d7d0: bnez $v0, 0x10e4b0
    v1 = sp + 0x20;                                             // 0x0010d7d8: addiu $v1, $sp, 0x20
label_0x10d7e0:
    s0 = s0 + -0x10;                                            // 0x0010d7e0: addiu $s0, $s0, -0x10
    v0 = (s0 < 0x11) ? 1 : 0;                                   // 0x0010d7e4: slti $v0, $s0, 0x11
    /* beqzl $v0, 0x10d790 */                                   // 0x0010d7e8: beqzl $v0, 0x10d790
    *(uint32_t*)((s3) + 4) = a2;                                // 0x0010d7ec: sw $a2, 4($s3)
    goto label_0x10d7fc;                                        // 0x0010d7f0: b 0x10d7fc
    *(uint32_t*)((s3) + 4) = s0;                                // 0x0010d7f4: sw $s0, 4($s3)
label_0x10d7f8:
    *(uint32_t*)((s3) + 4) = s0;                                // 0x0010d7f8: sw $s0, 4($s3)
label_0x10d7fc:
    v0 = a3 + 0x3a0;                                            // 0x0010d7fc: addiu $v0, $a3, 0x3a0
    *(uint32_t*)(s3) = v0;                                      // 0x0010d800: sw $v0, 0($s3)
    s3 = s3 + 8;                                                // 0x0010d804: addiu $s3, $s3, 8
    v1 = local_14;                                              // 0x0010d808: lw $v1, 0x14($sp)
    v0 = local_18;                                              // 0x0010d80c: lw $v0, 0x18($sp)
    v1 = v1 + 1;                                                // 0x0010d810: addiu $v1, $v1, 1
    v0 = v0 + s0;                                               // 0x0010d814: addu $v0, $v0, $s0
    a0 = (v1 < 8) ? 1 : 0;                                      // 0x0010d818: slti $a0, $v1, 8
    local_18 = v0;                                              // 0x0010d81c: sw $v0, 0x18($sp)
    if (a0 != 0) goto label_0x10d844;                           // 0x0010d820: bnez $a0, 0x10d844
    local_14 = v1;                                              // 0x0010d824: sw $v1, 0x14($sp)
    a0 = local_1e8;                                             // 0x0010d828: lw $a0, 0x1e8($sp)
    func_0010cd58();  // 0x10cd10                                // 0x0010d82c: jal 0x10cd10
    a1 = sp + 0x10;                                             // 0x0010d830: addiu $a1, $sp, 0x10
    if (v0 != 0) goto label_0x10e4b4;                           // 0x0010d834: bnez $v0, 0x10e4b4
    v0 = local_1e8;                                             // 0x0010d838: lw $v0, 0x1e8($sp)
    a0 = sp + 0x20;                                             // 0x0010d83c: addiu $a0, $sp, 0x20
label_0x10d844:
    a0 = local_1d1;                                             // 0x0010d844: lbu $a0, 0x1d1($sp)
label_0x10d848:
    if (a0 == 0) goto label_0x10d8a0;                           // 0x0010d848: beqz $a0, 0x10d8a0
    v0 = 1;                                                     // 0x0010d84c: addiu $v0, $zero, 1
    v1 = sp + 0x1d1;                                            // 0x0010d850: addiu $v1, $sp, 0x1d1
    *(uint32_t*)((s3) + 4) = v0;                                // 0x0010d854: sw $v0, 4($s3)
    *(uint32_t*)(s3) = v1;                                      // 0x0010d858: sw $v1, 0($s3)
    s3 = s3 + 8;                                                // 0x0010d85c: addiu $s3, $s3, 8
    v1 = local_14;                                              // 0x0010d860: lw $v1, 0x14($sp)
    v0 = local_18;                                              // 0x0010d864: lw $v0, 0x18($sp)
    v1 = v1 + 1;                                                // 0x0010d868: addiu $v1, $v1, 1
    v0 = v0 + 1;                                                // 0x0010d86c: addiu $v0, $v0, 1
    a0 = (v1 < 8) ? 1 : 0;                                      // 0x0010d870: slti $a0, $v1, 8
    local_18 = v0;                                              // 0x0010d874: sw $v0, 0x18($sp)
    if (a0 != 0) goto label_0x10d904;                           // 0x0010d878: bnez $a0, 0x10d904
    local_14 = v1;                                              // 0x0010d87c: sw $v1, 0x14($sp)
    a0 = local_1e8;                                             // 0x0010d880: lw $a0, 0x1e8($sp)
    func_0010cd58();  // 0x10cd10                                // 0x0010d884: jal 0x10cd10
    a1 = sp + 0x10;                                             // 0x0010d888: addiu $a1, $sp, 0x10
    if (v0 != 0) goto label_0x10e4b4;                           // 0x0010d88c: bnez $v0, 0x10e4b4
    v0 = local_1e8;                                             // 0x0010d890: lw $v0, 0x1e8($sp)
    a1 = sp + 0x20;                                             // 0x0010d894: addiu $a1, $sp, 0x20
    goto label_0x10d904;                                        // 0x0010d898: b 0x10d904
label_0x10d8a0:
    v0 = s7 & 2;                                                // 0x0010d8a0: andi $v0, $s7, 2
    if (v0 == 0) goto label_0x10d904;                           // 0x0010d8a4: beqz $v0, 0x10d904
    v0 = 0x30;                                                  // 0x0010d8a8: addiu $v0, $zero, 0x30
    a0 = 2;                                                     // 0x0010d8ac: addiu $a0, $zero, 2
    local_1c0 = v0;                                             // 0x0010d8b0: sb $v0, 0x1c0($sp)
    v1 = sp + 0x1c0;                                            // 0x0010d8b4: addiu $v1, $sp, 0x1c0
    local_1c1 = s1;                                             // 0x0010d8b8: sb $s1, 0x1c1($sp)
    *(uint32_t*)((s3) + 4) = a0;                                // 0x0010d8bc: sw $a0, 4($s3)
    *(uint32_t*)(s3) = v1;                                      // 0x0010d8c0: sw $v1, 0($s3)
    s3 = s3 + 8;                                                // 0x0010d8c4: addiu $s3, $s3, 8
    v1 = local_14;                                              // 0x0010d8c8: lw $v1, 0x14($sp)
    v0 = local_18;                                              // 0x0010d8cc: lw $v0, 0x18($sp)
    v1 = v1 + 1;                                                // 0x0010d8d0: addiu $v1, $v1, 1
    v0 = v0 + 2;                                                // 0x0010d8d4: addiu $v0, $v0, 2
    a0 = (v1 < 8) ? 1 : 0;                                      // 0x0010d8d8: slti $a0, $v1, 8
    local_18 = v0;                                              // 0x0010d8dc: sw $v0, 0x18($sp)
    if (a0 != 0) goto label_0x10d904;                           // 0x0010d8e0: bnez $a0, 0x10d904
    local_14 = v1;                                              // 0x0010d8e4: sw $v1, 0x14($sp)
    a0 = local_1e8;                                             // 0x0010d8e8: lw $a0, 0x1e8($sp)
    func_0010cd58();  // 0x10cd10                                // 0x0010d8ec: jal 0x10cd10
    a1 = sp + 0x10;                                             // 0x0010d8f0: addiu $a1, $sp, 0x10
    if (v0 != 0) goto label_0x10e4b4;                           // 0x0010d8f4: bnez $v0, 0x10e4b4
    v0 = local_1e8;                                             // 0x0010d8f8: lw $v0, 0x1e8($sp)
    a2 = sp + 0x20;                                             // 0x0010d8fc: addiu $a2, $sp, 0x20
label_0x10d904:
    v1 = local_210;                                             // 0x0010d904: lw $v1, 0x210($sp)
    v0 = 0x80;                                                  // 0x0010d908: addiu $v0, $zero, 0x80
    if (v1 != v0) goto label_0x10d9f8;                          // 0x0010d90c: bne $v1, $v0, 0x10d9f8
    a0 = local_204;                                             // 0x0010d910: lw $a0, 0x204($sp)
    a0 = local_1f0;                                             // 0x0010d914: lw $a0, 0x1f0($sp)
    a1 = local_208;                                             // 0x0010d918: lw $a1, 0x208($sp)
    s0 = a0 - a1;                                               // 0x0010d91c: subu $s0, $a0, $a1
    if (s0 <= 0) goto label_0x10d9f8;                           // 0x0010d920: blez $s0, 0x10d9f8
    a0 = local_204;                                             // 0x0010d924: lw $a0, 0x204($sp)
    v0 = (s0 < 0x11) ? 1 : 0;                                   // 0x0010d928: slti $v0, $s0, 0x11
    if (v0 != 0) goto label_0x10d9a8;                           // 0x0010d92c: bnez $v0, 0x10d9a8
    a3 = 0x22 << 16;                                            // 0x0010d930: lui $a3, 0x22
    a2 = 0x10;                                                  // 0x0010d934: addiu $a2, $zero, 0x10
    s4 = a3 + 0x3b0;                                            // 0x0010d938: addiu $s4, $a3, 0x3b0
    *(uint32_t*)((s3) + 4) = a2;                                // 0x0010d93c: sw $a2, 4($s3)
    *(uint32_t*)(s3) = s4;                                      // 0x0010d940: sw $s4, 0($s3)
    s3 = s3 + 8;                                                // 0x0010d944: addiu $s3, $s3, 8
    v0 = local_14;                                              // 0x0010d948: lw $v0, 0x14($sp)
    v1 = local_18;                                              // 0x0010d94c: lw $v1, 0x18($sp)
    v0 = v0 + 1;                                                // 0x0010d950: addiu $v0, $v0, 1
    v1 = v1 + 0x10;                                             // 0x0010d954: addiu $v1, $v1, 0x10
    a0 = (v0 < 8) ? 1 : 0;                                      // 0x0010d958: slti $a0, $v0, 8
    local_18 = v1;                                              // 0x0010d95c: sw $v1, 0x18($sp)
    if (a0 != 0) goto label_0x10d990;                           // 0x0010d960: bnez $a0, 0x10d990
    local_14 = v0;                                              // 0x0010d964: sw $v0, 0x14($sp)
    a0 = local_1e8;                                             // 0x0010d968: lw $a0, 0x1e8($sp)
    a1 = sp + 0x10;                                             // 0x0010d96c: addiu $a1, $sp, 0x10
    func_0010cd58();  // 0x10cd10                                // 0x0010d974: jal 0x10cd10
    /* FPU: dpax.w.ph $ac0, $sp, $a3 */                         // 0x0010d978: dpax.w.ph $ac0, $sp, $a3
    /* FPU: ld.b $w8, -0x5a($zero) */                           // 0x0010d97c: ld.b $w8, -0x5a($zero)
    if (v0 != 0) goto label_0x10e4b0;                           // 0x0010d980: bnez $v0, 0x10e4b0
    v0 = sp + 0x20;                                             // 0x0010d988: addiu $v0, $sp, 0x20
label_0x10d990:
    s0 = s0 + -0x10;                                            // 0x0010d990: addiu $s0, $s0, -0x10
    v0 = (s0 < 0x11) ? 1 : 0;                                   // 0x0010d994: slti $v0, $s0, 0x11
    /* beqzl $v0, 0x10d940 */                                   // 0x0010d998: beqzl $v0, 0x10d940
    *(uint32_t*)((s3) + 4) = a2;                                // 0x0010d99c: sw $a2, 4($s3)
    goto label_0x10d9ac;                                        // 0x0010d9a0: b 0x10d9ac
    *(uint32_t*)((s3) + 4) = s0;                                // 0x0010d9a4: sw $s0, 4($s3)
label_0x10d9a8:
    *(uint32_t*)((s3) + 4) = s0;                                // 0x0010d9a8: sw $s0, 4($s3)
label_0x10d9ac:
    v0 = a3 + 0x3b0;                                            // 0x0010d9ac: addiu $v0, $a3, 0x3b0
    *(uint32_t*)(s3) = v0;                                      // 0x0010d9b0: sw $v0, 0($s3)
    s3 = s3 + 8;                                                // 0x0010d9b4: addiu $s3, $s3, 8
    v1 = local_14;                                              // 0x0010d9b8: lw $v1, 0x14($sp)
    v0 = local_18;                                              // 0x0010d9bc: lw $v0, 0x18($sp)
    v1 = v1 + 1;                                                // 0x0010d9c0: addiu $v1, $v1, 1
    v0 = v0 + s0;                                               // 0x0010d9c4: addu $v0, $v0, $s0
    a0 = (v1 < 8) ? 1 : 0;                                      // 0x0010d9c8: slti $a0, $v1, 8
    local_18 = v0;                                              // 0x0010d9cc: sw $v0, 0x18($sp)
    if (a0 != 0) goto label_0x10d9f4;                           // 0x0010d9d0: bnez $a0, 0x10d9f4
    local_14 = v1;                                              // 0x0010d9d4: sw $v1, 0x14($sp)
    a0 = local_1e8;                                             // 0x0010d9d8: lw $a0, 0x1e8($sp)
    func_0010cd58();  // 0x10cd10                                // 0x0010d9dc: jal 0x10cd10
    a1 = sp + 0x10;                                             // 0x0010d9e0: addiu $a1, $sp, 0x10
    if (v0 != 0) goto label_0x10e4b4;                           // 0x0010d9e4: bnez $v0, 0x10e4b4
    v0 = local_1e8;                                             // 0x0010d9e8: lw $v0, 0x1e8($sp)
    v1 = sp + 0x20;                                             // 0x0010d9ec: addiu $v1, $sp, 0x20
label_0x10d9f4:
    a0 = local_204;                                             // 0x0010d9f4: lw $a0, 0x204($sp)
label_0x10d9f8:
    s0 = a0 - fp;                                               // 0x0010d9f8: subu $s0, $a0, $fp
    if (s0 <= 0) goto label_0x10dad8;                           // 0x0010d9fc: blez $s0, 0x10dad8
    v0 = s7 & 0x100;                                            // 0x0010da00: andi $v0, $s7, 0x100
    v0 = (s0 < 0x11) ? 1 : 0;                                   // 0x0010da04: slti $v0, $s0, 0x11
    if (v0 != 0) goto label_0x10da88;                           // 0x0010da08: bnez $v0, 0x10da88
    a3 = 0x22 << 16;                                            // 0x0010da0c: lui $a3, 0x22
    a2 = 0x10;                                                  // 0x0010da10: addiu $a2, $zero, 0x10
    s4 = a3 + 0x3b0;                                            // 0x0010da14: addiu $s4, $a3, 0x3b0
    *(uint32_t*)((s3) + 4) = a2;                                // 0x0010da18: sw $a2, 4($s3)
    /* nop */                                                   // 0x0010da1c: nop 
    *(uint32_t*)(s3) = s4;                                      // 0x0010da20: sw $s4, 0($s3)
    s3 = s3 + 8;                                                // 0x0010da24: addiu $s3, $s3, 8
    v0 = local_14;                                              // 0x0010da28: lw $v0, 0x14($sp)
    v1 = local_18;                                              // 0x0010da2c: lw $v1, 0x18($sp)
    v0 = v0 + 1;                                                // 0x0010da30: addiu $v0, $v0, 1
    v1 = v1 + 0x10;                                             // 0x0010da34: addiu $v1, $v1, 0x10
    a0 = (v0 < 8) ? 1 : 0;                                      // 0x0010da38: slti $a0, $v0, 8
    local_18 = v1;                                              // 0x0010da3c: sw $v1, 0x18($sp)
    if (a0 != 0) goto label_0x10da70;                           // 0x0010da40: bnez $a0, 0x10da70
    local_14 = v0;                                              // 0x0010da44: sw $v0, 0x14($sp)
    a0 = local_1e8;                                             // 0x0010da48: lw $a0, 0x1e8($sp)
    a1 = sp + 0x10;                                             // 0x0010da4c: addiu $a1, $sp, 0x10
    func_0010cd58();  // 0x10cd10                                // 0x0010da54: jal 0x10cd10
    /* FPU: dpax.w.ph $ac0, $sp, $a3 */                         // 0x0010da58: dpax.w.ph $ac0, $sp, $a3
    /* FPU: ld.b $w8, -0x5a($zero) */                           // 0x0010da5c: ld.b $w8, -0x5a($zero)
    if (v0 != 0) goto label_0x10e4b0;                           // 0x0010da60: bnez $v0, 0x10e4b0
    a1 = sp + 0x20;                                             // 0x0010da68: addiu $a1, $sp, 0x20
label_0x10da70:
    s0 = s0 + -0x10;                                            // 0x0010da70: addiu $s0, $s0, -0x10
    v0 = (s0 < 0x11) ? 1 : 0;                                   // 0x0010da74: slti $v0, $s0, 0x11
    /* beqzl $v0, 0x10da20 */                                   // 0x0010da78: beqzl $v0, 0x10da20
    *(uint32_t*)((s3) + 4) = a2;                                // 0x0010da7c: sw $a2, 4($s3)
    goto label_0x10da8c;                                        // 0x0010da80: b 0x10da8c
    *(uint32_t*)((s3) + 4) = s0;                                // 0x0010da84: sw $s0, 4($s3)
label_0x10da88:
    *(uint32_t*)((s3) + 4) = s0;                                // 0x0010da88: sw $s0, 4($s3)
label_0x10da8c:
    v0 = a3 + 0x3b0;                                            // 0x0010da8c: addiu $v0, $a3, 0x3b0
    *(uint32_t*)(s3) = v0;                                      // 0x0010da90: sw $v0, 0($s3)
    s3 = s3 + 8;                                                // 0x0010da94: addiu $s3, $s3, 8
    v1 = local_14;                                              // 0x0010da98: lw $v1, 0x14($sp)
    v0 = local_18;                                              // 0x0010da9c: lw $v0, 0x18($sp)
    v1 = v1 + 1;                                                // 0x0010daa0: addiu $v1, $v1, 1
    v0 = v0 + s0;                                               // 0x0010daa4: addu $v0, $v0, $s0
    a0 = (v1 < 8) ? 1 : 0;                                      // 0x0010daa8: slti $a0, $v1, 8
    local_18 = v0;                                              // 0x0010daac: sw $v0, 0x18($sp)
    if (a0 != 0) goto label_0x10dad4;                           // 0x0010dab0: bnez $a0, 0x10dad4
    local_14 = v1;                                              // 0x0010dab4: sw $v1, 0x14($sp)
    a0 = local_1e8;                                             // 0x0010dab8: lw $a0, 0x1e8($sp)
    func_0010cd58();  // 0x10cd10                                // 0x0010dabc: jal 0x10cd10
    a1 = sp + 0x10;                                             // 0x0010dac0: addiu $a1, $sp, 0x10
    if (v0 != 0) goto label_0x10e4b4;                           // 0x0010dac4: bnez $v0, 0x10e4b4
    v0 = local_1e8;                                             // 0x0010dac8: lw $v0, 0x1e8($sp)
    a2 = sp + 0x20;                                             // 0x0010dacc: addiu $a2, $sp, 0x20
label_0x10dad4:
    v0 = s7 & 0x100;                                            // 0x0010dad4: andi $v0, $s7, 0x100
label_0x10dad8:
    /* bnezl $v0, 0x10db00 */                                   // 0x0010dad8: bnezl $v0, 0x10db00
    v0 = (s1 < 0x66) ? 1 : 0;                                   // 0x0010dadc: slti $v0, $s1, 0x66
    *(uint32_t*)((s3) + 4) = fp;                                // 0x0010dae0: sw $fp, 4($s3)
    *(uint32_t*)(s3) = s5;                                      // 0x0010dae4: sw $s5, 0($s3)
    s3 = s3 + 8;                                                // 0x0010dae8: addiu $s3, $s3, 8
    v0 = local_14;                                              // 0x0010daec: lw $v0, 0x14($sp)
    v1 = local_18;                                              // 0x0010daf0: lw $v1, 0x18($sp)
    v0 = v0 + 1;                                                // 0x0010daf4: addiu $v0, $v0, 1
    goto label_0x10e338;                                        // 0x0010daf8: b 0x10e338
    v1 = v1 + fp;                                               // 0x0010dafc: addu $v1, $v1, $fp
    if (v0 != 0) goto label_0x10e108;                           // 0x0010db00: bnez $v0, 0x10e108
    v0 = local_1e0;                                             // 0x0010db04: lw $v0, 0x1e0($sp)
    func_00111f90();  // 0x111f40                                // 0x0010db10: jal 0x111f40
    /* nop */                                                   // 0x0010db14: nop 
    if (v0 != 0) goto label_0x10dc98;                           // 0x0010db18: bnez $v0, 0x10dc98
    v1 = local_1dc;                                             // 0x0010db1c: lw $v1, 0x1dc($sp)
    s0 = 1;                                                     // 0x0010db20: addiu $s0, $zero, 1
    v0 = 0x22 << 16;                                            // 0x0010db24: lui $v0, 0x22
    *(uint32_t*)((s3) + 4) = s0;                                // 0x0010db28: sw $s0, 4($s3)
    v0 = v0 + 0x428;                                            // 0x0010db2c: addiu $v0, $v0, 0x428
    *(uint32_t*)(s3) = v0;                                      // 0x0010db30: sw $v0, 0($s3)
    s3 = s3 + 8;                                                // 0x0010db34: addiu $s3, $s3, 8
    v1 = local_14;                                              // 0x0010db38: lw $v1, 0x14($sp)
    v0 = local_18;                                              // 0x0010db3c: lw $v0, 0x18($sp)
    v1 = v1 + 1;                                                // 0x0010db40: addiu $v1, $v1, 1
    v0 = v0 + 1;                                                // 0x0010db44: addiu $v0, $v0, 1
    a0 = (v1 < 8) ? 1 : 0;                                      // 0x0010db48: slti $a0, $v1, 8
    local_18 = v0;                                              // 0x0010db4c: sw $v0, 0x18($sp)
    if (a0 != 0) goto label_0x10db74;                           // 0x0010db50: bnez $a0, 0x10db74
    local_14 = v1;                                              // 0x0010db54: sw $v1, 0x14($sp)
    a0 = local_1e8;                                             // 0x0010db58: lw $a0, 0x1e8($sp)
    func_0010cd58();  // 0x10cd10                                // 0x0010db5c: jal 0x10cd10
    a1 = sp + 0x10;                                             // 0x0010db60: addiu $a1, $sp, 0x10
    if (v0 != 0) goto label_0x10e4b4;                           // 0x0010db64: bnez $v0, 0x10e4b4
    v0 = local_1e8;                                             // 0x0010db68: lw $v0, 0x1e8($sp)
    v1 = sp + 0x20;                                             // 0x0010db6c: addiu $v1, $sp, 0x20
label_0x10db74:
    v0 = local_1dc;                                             // 0x0010db74: lw $v0, 0x1dc($sp)
    v1 = local_1e0;                                             // 0x0010db78: lw $v1, 0x1e0($sp)
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x0010db7c: slt $v0, $v0, $v1
    /* bnezl $v0, 0x10db98 */                                   // 0x0010db80: bnezl $v0, 0x10db98
    *(uint32_t*)((s3) + 4) = s0;                                // 0x0010db84: sw $s0, 4($s3)
    v0 = s7 & 1;                                                // 0x0010db88: andi $v0, $s7, 1
    if (v0 == 0) goto label_0x10e36c;                           // 0x0010db8c: beqz $v0, 0x10e36c
    v0 = s7 & 4;                                                // 0x0010db90: andi $v0, $s7, 4
    *(uint32_t*)((s3) + 4) = s0;                                // 0x0010db94: sw $s0, 4($s3)
    v0 = local_14;                                              // 0x0010db98: lw $v0, 0x14($sp)
    a0 = local_1f4;                                             // 0x0010db9c: lw $a0, 0x1f4($sp)
    v1 = local_18;                                              // 0x0010dba0: lw $v1, 0x18($sp)
    v0 = v0 + 1;                                                // 0x0010dba4: addiu $v0, $v0, 1
    *(uint32_t*)(s3) = a0;                                      // 0x0010dba8: sw $a0, 0($s3)
    s3 = s3 + 8;                                                // 0x0010dbac: addiu $s3, $s3, 8
    v1 = v1 + 1;                                                // 0x0010dbb0: addiu $v1, $v1, 1
    a0 = (v0 < 8) ? 1 : 0;                                      // 0x0010dbb4: slti $a0, $v0, 8
    local_18 = v1;                                              // 0x0010dbb8: sw $v1, 0x18($sp)
    if (a0 != 0) goto label_0x10dbe0;                           // 0x0010dbbc: bnez $a0, 0x10dbe0
    local_14 = v0;                                              // 0x0010dbc0: sw $v0, 0x14($sp)
    a0 = local_1e8;                                             // 0x0010dbc4: lw $a0, 0x1e8($sp)
    func_0010cd58();  // 0x10cd10                                // 0x0010dbc8: jal 0x10cd10
    a1 = sp + 0x10;                                             // 0x0010dbcc: addiu $a1, $sp, 0x10
    if (v0 != 0) goto label_0x10e4b4;                           // 0x0010dbd0: bnez $v0, 0x10e4b4
    v0 = local_1e8;                                             // 0x0010dbd4: lw $v0, 0x1e8($sp)
    a1 = sp + 0x20;                                             // 0x0010dbd8: addiu $a1, $sp, 0x20
label_0x10dbe0:
    v0 = local_1e0;                                             // 0x0010dbe0: lw $v0, 0x1e0($sp)
    s0 = v0 + -1;                                               // 0x0010dbe4: addiu $s0, $v0, -1
    if (s0 <= 0) goto label_0x10e36c;                           // 0x0010dbe8: blez $s0, 0x10e36c
    v0 = s7 & 4;                                                // 0x0010dbec: andi $v0, $s7, 4
    v0 = (s0 < 0x11) ? 1 : 0;                                   // 0x0010dbf0: slti $v0, $s0, 0x11
    if (v0 != 0) goto label_0x10dc68;                           // 0x0010dbf4: bnez $v0, 0x10dc68
    a3 = 0x22 << 16;                                            // 0x0010dbf8: lui $a3, 0x22
    s4 = 0x10;                                                  // 0x0010dbfc: addiu $s4, $zero, 0x10
    s1 = a3 + 0x3b0;                                            // 0x0010dc00: addiu $s1, $a3, 0x3b0
    *(uint32_t*)((s3) + 4) = s4;                                // 0x0010dc04: sw $s4, 4($s3)
    *(uint32_t*)(s3) = s1;                                      // 0x0010dc08: sw $s1, 0($s3)
    s3 = s3 + 8;                                                // 0x0010dc0c: addiu $s3, $s3, 8
    v0 = local_14;                                              // 0x0010dc10: lw $v0, 0x14($sp)
    v1 = local_18;                                              // 0x0010dc14: lw $v1, 0x18($sp)
    v0 = v0 + 1;                                                // 0x0010dc18: addiu $v0, $v0, 1
    v1 = v1 + 0x10;                                             // 0x0010dc1c: addiu $v1, $v1, 0x10
    a0 = (v0 < 8) ? 1 : 0;                                      // 0x0010dc20: slti $a0, $v0, 8
    local_18 = v1;                                              // 0x0010dc24: sw $v1, 0x18($sp)
    if (a0 != 0) goto label_0x10dc50;                           // 0x0010dc28: bnez $a0, 0x10dc50
    local_14 = v0;                                              // 0x0010dc2c: sw $v0, 0x14($sp)
    a0 = local_1e8;                                             // 0x0010dc30: lw $a0, 0x1e8($sp)
    a1 = sp + 0x10;                                             // 0x0010dc34: addiu $a1, $sp, 0x10
    func_0010cd58();  // 0x10cd10                                // 0x0010dc38: jal 0x10cd10
    /* FPU: dpax.w.ph $ac0, $sp, $a3 */                         // 0x0010dc3c: dpax.w.ph $ac0, $sp, $a3
    if (v0 != 0) goto label_0x10e4b0;                           // 0x0010dc40: bnez $v0, 0x10e4b0
    a2 = sp + 0x20;                                             // 0x0010dc48: addiu $a2, $sp, 0x20
label_0x10dc50:
    s0 = s0 + -0x10;                                            // 0x0010dc50: addiu $s0, $s0, -0x10
    v0 = (s0 < 0x11) ? 1 : 0;                                   // 0x0010dc54: slti $v0, $s0, 0x11
    /* beqzl $v0, 0x10dc08 */                                   // 0x0010dc58: beqzl $v0, 0x10dc08
    *(uint32_t*)((s3) + 4) = s4;                                // 0x0010dc5c: sw $s4, 4($s3)
    goto label_0x10dc6c;                                        // 0x0010dc60: b 0x10dc6c
    *(uint32_t*)((s3) + 4) = s0;                                // 0x0010dc64: sw $s0, 4($s3)
label_0x10dc68:
    *(uint32_t*)((s3) + 4) = s0;                                // 0x0010dc68: sw $s0, 4($s3)
label_0x10dc6c:
    v0 = a3 + 0x3b0;                                            // 0x0010dc6c: addiu $v0, $a3, 0x3b0
    *(uint32_t*)(s3) = v0;                                      // 0x0010dc70: sw $v0, 0($s3)
    s3 = s3 + 8;                                                // 0x0010dc74: addiu $s3, $s3, 8
    v1 = local_14;                                              // 0x0010dc78: lw $v1, 0x14($sp)
    v0 = local_18;                                              // 0x0010dc7c: lw $v0, 0x18($sp)
    v1 = v1 + 1;                                                // 0x0010dc80: addiu $v1, $v1, 1
    v0 = v0 + s0;                                               // 0x0010dc84: addu $v0, $v0, $s0
    a0 = (v1 < 8) ? 1 : 0;                                      // 0x0010dc88: slti $a0, $v1, 8
    local_18 = v0;                                              // 0x0010dc8c: sw $v0, 0x18($sp)
    goto label_0x10e344;                                        // 0x0010dc90: b 0x10e344
    local_14 = v1;                                              // 0x0010dc94: sw $v1, 0x14($sp)
label_0x10dc98:
    if (v1 > 0) goto label_0x10de80;                            // 0x0010dc98: bgtz $v1, 0x10de80
    v0 = local_1e0;                                             // 0x0010dc9c: lw $v0, 0x1e0($sp)
    s0 = 1;                                                     // 0x0010dca0: addiu $s0, $zero, 1
    v0 = 0x22 << 16;                                            // 0x0010dca4: lui $v0, 0x22
    *(uint32_t*)((s3) + 4) = s0;                                // 0x0010dca8: sw $s0, 4($s3)
    v0 = v0 + 0x428;                                            // 0x0010dcac: addiu $v0, $v0, 0x428
    *(uint32_t*)(s3) = v0;                                      // 0x0010dcb0: sw $v0, 0($s3)
    s3 = s3 + 8;                                                // 0x0010dcb4: addiu $s3, $s3, 8
    v1 = local_14;                                              // 0x0010dcb8: lw $v1, 0x14($sp)
    v0 = local_18;                                              // 0x0010dcbc: lw $v0, 0x18($sp)
    v1 = v1 + 1;                                                // 0x0010dcc0: addiu $v1, $v1, 1
    v0 = v0 + 1;                                                // 0x0010dcc4: addiu $v0, $v0, 1
    a0 = (v1 < 8) ? 1 : 0;                                      // 0x0010dcc8: slti $a0, $v1, 8
    local_18 = v0;                                              // 0x0010dccc: sw $v0, 0x18($sp)
    if (a0 != 0) goto label_0x10dcf4;                           // 0x0010dcd0: bnez $a0, 0x10dcf4
    local_14 = v1;                                              // 0x0010dcd4: sw $v1, 0x14($sp)
    a0 = local_1e8;                                             // 0x0010dcd8: lw $a0, 0x1e8($sp)
    func_0010cd58();  // 0x10cd10                                // 0x0010dcdc: jal 0x10cd10
    a1 = sp + 0x10;                                             // 0x0010dce0: addiu $a1, $sp, 0x10
    if (v0 != 0) goto label_0x10e4b4;                           // 0x0010dce4: bnez $v0, 0x10e4b4
    v0 = local_1e8;                                             // 0x0010dce8: lw $v0, 0x1e8($sp)
    v1 = sp + 0x20;                                             // 0x0010dcec: addiu $v1, $sp, 0x20
label_0x10dcf4:
    v0 = local_1dc;                                             // 0x0010dcf4: lw $v0, 0x1dc($sp)
    /* bnezl $v0, 0x10dd10 */                                   // 0x0010dcf8: bnezl $v0, 0x10dd10
    *(uint32_t*)((s3) + 4) = s0;                                // 0x0010dcfc: sw $s0, 4($s3)
    v0 = local_1e0;                                             // 0x0010dd00: lw $v0, 0x1e0($sp)
    if (v0 == 0) goto label_0x10e36c;                           // 0x0010dd04: beqz $v0, 0x10e36c
    v0 = s7 & 4;                                                // 0x0010dd08: andi $v0, $s7, 4
    *(uint32_t*)((s3) + 4) = s0;                                // 0x0010dd0c: sw $s0, 4($s3)
    v0 = local_14;                                              // 0x0010dd10: lw $v0, 0x14($sp)
    a0 = local_1f4;                                             // 0x0010dd14: lw $a0, 0x1f4($sp)
    v1 = local_18;                                              // 0x0010dd18: lw $v1, 0x18($sp)
    v0 = v0 + 1;                                                // 0x0010dd1c: addiu $v0, $v0, 1
    *(uint32_t*)(s3) = a0;                                      // 0x0010dd20: sw $a0, 0($s3)
    s3 = s3 + 8;                                                // 0x0010dd24: addiu $s3, $s3, 8
    v1 = v1 + 1;                                                // 0x0010dd28: addiu $v1, $v1, 1
    a0 = (v0 < 8) ? 1 : 0;                                      // 0x0010dd2c: slti $a0, $v0, 8
    local_18 = v1;                                              // 0x0010dd30: sw $v1, 0x18($sp)
    if (a0 != 0) goto label_0x10dd58;                           // 0x0010dd34: bnez $a0, 0x10dd58
    local_14 = v0;                                              // 0x0010dd38: sw $v0, 0x14($sp)
    a0 = local_1e8;                                             // 0x0010dd3c: lw $a0, 0x1e8($sp)
    func_0010cd58();  // 0x10cd10                                // 0x0010dd40: jal 0x10cd10
    a1 = sp + 0x10;                                             // 0x0010dd44: addiu $a1, $sp, 0x10
    if (v0 != 0) goto label_0x10e4b4;                           // 0x0010dd48: bnez $v0, 0x10e4b4
    v0 = local_1e8;                                             // 0x0010dd4c: lw $v0, 0x1e8($sp)
    a1 = sp + 0x20;                                             // 0x0010dd50: addiu $a1, $sp, 0x20
label_0x10dd58:
    v0 = local_1dc;                                             // 0x0010dd58: lw $v0, 0x1dc($sp)
    s0 = -v0;                                                   // 0x0010dd5c: negu $s0, $v0
    if (s0 <= 0) goto label_0x10de30;                           // 0x0010dd60: blezl $s0, 0x10de30
    *(uint32_t*)(s3) = s5;                                      // 0x0010dd64: sw $s5, 0($s3)
    v0 = (s0 < 0x11) ? 1 : 0;                                   // 0x0010dd68: slti $v0, $s0, 0x11
    if (v0 != 0) goto label_0x10dde0;                           // 0x0010dd6c: bnez $v0, 0x10dde0
    a3 = 0x22 << 16;                                            // 0x0010dd70: lui $a3, 0x22
    s4 = 0x10;                                                  // 0x0010dd74: addiu $s4, $zero, 0x10
    s1 = a3 + 0x3b0;                                            // 0x0010dd78: addiu $s1, $a3, 0x3b0
    *(uint32_t*)((s3) + 4) = s4;                                // 0x0010dd7c: sw $s4, 4($s3)
    *(uint32_t*)(s3) = s1;                                      // 0x0010dd80: sw $s1, 0($s3)
    s3 = s3 + 8;                                                // 0x0010dd84: addiu $s3, $s3, 8
    v0 = local_14;                                              // 0x0010dd88: lw $v0, 0x14($sp)
    v1 = local_18;                                              // 0x0010dd8c: lw $v1, 0x18($sp)
    v0 = v0 + 1;                                                // 0x0010dd90: addiu $v0, $v0, 1
    v1 = v1 + 0x10;                                             // 0x0010dd94: addiu $v1, $v1, 0x10
    a0 = (v0 < 8) ? 1 : 0;                                      // 0x0010dd98: slti $a0, $v0, 8
    local_18 = v1;                                              // 0x0010dd9c: sw $v1, 0x18($sp)
    if (a0 != 0) goto label_0x10ddc8;                           // 0x0010dda0: bnez $a0, 0x10ddc8
    local_14 = v0;                                              // 0x0010dda4: sw $v0, 0x14($sp)
    a0 = local_1e8;                                             // 0x0010dda8: lw $a0, 0x1e8($sp)
    a1 = sp + 0x10;                                             // 0x0010ddac: addiu $a1, $sp, 0x10
    func_0010cd58();  // 0x10cd10                                // 0x0010ddb0: jal 0x10cd10
    /* FPU: dpax.w.ph $ac0, $sp, $a3 */                         // 0x0010ddb4: dpax.w.ph $ac0, $sp, $a3
    if (v0 != 0) goto label_0x10e4b0;                           // 0x0010ddb8: bnez $v0, 0x10e4b0
    a2 = sp + 0x20;                                             // 0x0010ddc0: addiu $a2, $sp, 0x20
label_0x10ddc8:
    s0 = s0 + -0x10;                                            // 0x0010ddc8: addiu $s0, $s0, -0x10
    v0 = (s0 < 0x11) ? 1 : 0;                                   // 0x0010ddcc: slti $v0, $s0, 0x11
    /* beqzl $v0, 0x10dd80 */                                   // 0x0010ddd0: beqzl $v0, 0x10dd80
    *(uint32_t*)((s3) + 4) = s4;                                // 0x0010ddd4: sw $s4, 4($s3)
    goto label_0x10dde4;                                        // 0x0010ddd8: b 0x10dde4
    *(uint32_t*)((s3) + 4) = s0;                                // 0x0010dddc: sw $s0, 4($s3)
label_0x10dde0:
    *(uint32_t*)((s3) + 4) = s0;                                // 0x0010dde0: sw $s0, 4($s3)
label_0x10dde4:
    v0 = a3 + 0x3b0;                                            // 0x0010dde4: addiu $v0, $a3, 0x3b0
    *(uint32_t*)(s3) = v0;                                      // 0x0010dde8: sw $v0, 0($s3)
    s3 = s3 + 8;                                                // 0x0010ddec: addiu $s3, $s3, 8
    v1 = local_14;                                              // 0x0010ddf0: lw $v1, 0x14($sp)
    v0 = local_18;                                              // 0x0010ddf4: lw $v0, 0x18($sp)
    v1 = v1 + 1;                                                // 0x0010ddf8: addiu $v1, $v1, 1
    v0 = v0 + s0;                                               // 0x0010ddfc: addu $v0, $v0, $s0
    a0 = (v1 < 8) ? 1 : 0;                                      // 0x0010de00: slti $a0, $v1, 8
    local_18 = v0;                                              // 0x0010de04: sw $v0, 0x18($sp)
    if (a0 != 0) goto label_0x10de2c;                           // 0x0010de08: bnez $a0, 0x10de2c
    local_14 = v1;                                              // 0x0010de0c: sw $v1, 0x14($sp)
    a0 = local_1e8;                                             // 0x0010de10: lw $a0, 0x1e8($sp)
    func_0010cd58();  // 0x10cd10                                // 0x0010de14: jal 0x10cd10
    a1 = sp + 0x10;                                             // 0x0010de18: addiu $a1, $sp, 0x10
    if (v0 != 0) goto label_0x10e4b4;                           // 0x0010de1c: bnez $v0, 0x10e4b4
    v0 = local_1e8;                                             // 0x0010de20: lw $v0, 0x1e8($sp)
    v0 = sp + 0x20;                                             // 0x0010de24: addiu $v0, $sp, 0x20
label_0x10de2c:
    *(uint32_t*)(s3) = s5;                                      // 0x0010de2c: sw $s5, 0($s3)
label_0x10de30:
    v0 = local_1e0;                                             // 0x0010de30: lw $v0, 0x1e0($sp)
    *(uint32_t*)((s3) + 4) = v0;                                // 0x0010de34: sw $v0, 4($s3)
    s3 = s3 + 8;                                                // 0x0010de38: addiu $s3, $s3, 8
    v0 = local_14;                                              // 0x0010de3c: lw $v0, 0x14($sp)
    v1 = local_18;                                              // 0x0010de40: lw $v1, 0x18($sp)
    a0 = local_1e0;                                             // 0x0010de44: lw $a0, 0x1e0($sp)
    v0 = v0 + 1;                                                // 0x0010de48: addiu $v0, $v0, 1
    a1 = (v0 < 8) ? 1 : 0;                                      // 0x0010de4c: slti $a1, $v0, 8
    local_14 = v0;                                              // 0x0010de50: sw $v0, 0x14($sp)
    v1 = v1 + a0;                                               // 0x0010de54: addu $v1, $v1, $a0
    if (a1 != 0) goto label_0x10e368;                           // 0x0010de58: bnez $a1, 0x10e368
    local_18 = v1;                                              // 0x0010de5c: sw $v1, 0x18($sp)
    a0 = local_1e8;                                             // 0x0010de60: lw $a0, 0x1e8($sp)
    func_0010cd58();  // 0x10cd10                                // 0x0010de64: jal 0x10cd10
    a1 = sp + 0x10;                                             // 0x0010de68: addiu $a1, $sp, 0x10
    if (v0 != 0) goto label_0x10e4b4;                           // 0x0010de6c: bnez $v0, 0x10e4b4
    v0 = local_1e8;                                             // 0x0010de70: lw $v0, 0x1e8($sp)
    v1 = sp + 0x20;                                             // 0x0010de74: addiu $v1, $sp, 0x20
    goto label_0x10e368;                                        // 0x0010de78: b 0x10e368
label_0x10de80:
    v0 = (v1 < v0) ? 1 : 0;                                     // 0x0010de80: slt $v0, $v1, $v0
    if (v0 != 0) goto label_0x10dff8;                           // 0x0010de84: bnez $v0, 0x10dff8
    *(uint32_t*)(s3) = s5;                                      // 0x0010de88: sw $s5, 0($s3)
    v0 = local_1e0;                                             // 0x0010de8c: lw $v0, 0x1e0($sp)
    *(uint32_t*)((s3) + 4) = v0;                                // 0x0010de90: sw $v0, 4($s3)
    s3 = s3 + 8;                                                // 0x0010de94: addiu $s3, $s3, 8
    v0 = local_14;                                              // 0x0010de98: lw $v0, 0x14($sp)
    v1 = local_18;                                              // 0x0010de9c: lw $v1, 0x18($sp)
    a1 = local_1e0;                                             // 0x0010dea0: lw $a1, 0x1e0($sp)
    v0 = v0 + 1;                                                // 0x0010dea4: addiu $v0, $v0, 1
    a0 = (v0 < 8) ? 1 : 0;                                      // 0x0010dea8: slti $a0, $v0, 8
    local_14 = v0;                                              // 0x0010deac: sw $v0, 0x14($sp)
    v1 = v1 + a1;                                               // 0x0010deb0: addu $v1, $v1, $a1
    if (a0 != 0) goto label_0x10dedc;                           // 0x0010deb4: bnez $a0, 0x10dedc
    local_18 = v1;                                              // 0x0010deb8: sw $v1, 0x18($sp)
    a0 = local_1e8;                                             // 0x0010debc: lw $a0, 0x1e8($sp)
    func_0010cd58();  // 0x10cd10                                // 0x0010dec0: jal 0x10cd10
    a1 = sp + 0x10;                                             // 0x0010dec4: addiu $a1, $sp, 0x10
    if (v0 != 0) goto label_0x10e4b4;                           // 0x0010dec8: bnez $v0, 0x10e4b4
    v0 = local_1e8;                                             // 0x0010decc: lw $v0, 0x1e8($sp)
    a0 = sp + 0x20;                                             // 0x0010ded0: addiu $a0, $sp, 0x20
    a1 = local_1e0;                                             // 0x0010ded4: lw $a1, 0x1e0($sp)
label_0x10dedc:
    v0 = local_1dc;                                             // 0x0010dedc: lw $v0, 0x1dc($sp)
    s0 = v0 - a1;                                               // 0x0010dee0: subu $s0, $v0, $a1
    if (s0 <= 0) goto label_0x10dfb8;                           // 0x0010dee4: blez $s0, 0x10dfb8
    v0 = s7 & 1;                                                // 0x0010dee8: andi $v0, $s7, 1
    v0 = (s0 < 0x11) ? 1 : 0;                                   // 0x0010deec: slti $v0, $s0, 0x11
    if (v0 != 0) goto label_0x10df68;                           // 0x0010def0: bnez $v0, 0x10df68
    a3 = 0x22 << 16;                                            // 0x0010def4: lui $a3, 0x22
    s4 = 0x10;                                                  // 0x0010def8: addiu $s4, $zero, 0x10
    s1 = a3 + 0x3b0;                                            // 0x0010defc: addiu $s1, $a3, 0x3b0
    *(uint32_t*)((s3) + 4) = s4;                                // 0x0010df00: sw $s4, 4($s3)
    /* nop */                                                   // 0x0010df04: nop 
    *(uint32_t*)(s3) = s1;                                      // 0x0010df08: sw $s1, 0($s3)
    s3 = s3 + 8;                                                // 0x0010df0c: addiu $s3, $s3, 8
    v0 = local_14;                                              // 0x0010df10: lw $v0, 0x14($sp)
    v1 = local_18;                                              // 0x0010df14: lw $v1, 0x18($sp)
    v0 = v0 + 1;                                                // 0x0010df18: addiu $v0, $v0, 1
    v1 = v1 + 0x10;                                             // 0x0010df1c: addiu $v1, $v1, 0x10
    a0 = (v0 < 8) ? 1 : 0;                                      // 0x0010df20: slti $a0, $v0, 8
    local_18 = v1;                                              // 0x0010df24: sw $v1, 0x18($sp)
    if (a0 != 0) goto label_0x10df50;                           // 0x0010df28: bnez $a0, 0x10df50
    local_14 = v0;                                              // 0x0010df2c: sw $v0, 0x14($sp)
    a0 = local_1e8;                                             // 0x0010df30: lw $a0, 0x1e8($sp)
    a1 = sp + 0x10;                                             // 0x0010df34: addiu $a1, $sp, 0x10
    func_0010cd58();  // 0x10cd10                                // 0x0010df38: jal 0x10cd10
    /* FPU: dpax.w.ph $ac0, $sp, $a3 */                         // 0x0010df3c: dpax.w.ph $ac0, $sp, $a3
    if (v0 != 0) goto label_0x10e4b0;                           // 0x0010df40: bnez $v0, 0x10e4b0
    a1 = sp + 0x20;                                             // 0x0010df48: addiu $a1, $sp, 0x20
label_0x10df50:
    s0 = s0 + -0x10;                                            // 0x0010df50: addiu $s0, $s0, -0x10
    v0 = (s0 < 0x11) ? 1 : 0;                                   // 0x0010df54: slti $v0, $s0, 0x11
    /* beqzl $v0, 0x10df08 */                                   // 0x0010df58: beqzl $v0, 0x10df08
    *(uint32_t*)((s3) + 4) = s4;                                // 0x0010df5c: sw $s4, 4($s3)
    goto label_0x10df6c;                                        // 0x0010df60: b 0x10df6c
    *(uint32_t*)((s3) + 4) = s0;                                // 0x0010df64: sw $s0, 4($s3)
label_0x10df68:
    *(uint32_t*)((s3) + 4) = s0;                                // 0x0010df68: sw $s0, 4($s3)
label_0x10df6c:
    v0 = a3 + 0x3b0;                                            // 0x0010df6c: addiu $v0, $a3, 0x3b0
    *(uint32_t*)(s3) = v0;                                      // 0x0010df70: sw $v0, 0($s3)
    s3 = s3 + 8;                                                // 0x0010df74: addiu $s3, $s3, 8
    v1 = local_14;                                              // 0x0010df78: lw $v1, 0x14($sp)
    v0 = local_18;                                              // 0x0010df7c: lw $v0, 0x18($sp)
    v1 = v1 + 1;                                                // 0x0010df80: addiu $v1, $v1, 1
    v0 = v0 + s0;                                               // 0x0010df84: addu $v0, $v0, $s0
    a0 = (v1 < 8) ? 1 : 0;                                      // 0x0010df88: slti $a0, $v1, 8
    local_18 = v0;                                              // 0x0010df8c: sw $v0, 0x18($sp)
    if (a0 != 0) goto label_0x10dfb4;                           // 0x0010df90: bnez $a0, 0x10dfb4
    local_14 = v1;                                              // 0x0010df94: sw $v1, 0x14($sp)
    a0 = local_1e8;                                             // 0x0010df98: lw $a0, 0x1e8($sp)
    func_0010cd58();  // 0x10cd10                                // 0x0010df9c: jal 0x10cd10
    a1 = sp + 0x10;                                             // 0x0010dfa0: addiu $a1, $sp, 0x10
    if (v0 != 0) goto label_0x10e4b4;                           // 0x0010dfa4: bnez $v0, 0x10e4b4
    v0 = local_1e8;                                             // 0x0010dfa8: lw $v0, 0x1e8($sp)
    a2 = sp + 0x20;                                             // 0x0010dfac: addiu $a2, $sp, 0x20
label_0x10dfb4:
    v0 = s7 & 1;                                                // 0x0010dfb4: andi $v0, $s7, 1
label_0x10dfb8:
    if (v0 == 0) goto label_0x10e368;                           // 0x0010dfb8: beqz $v0, 0x10e368
    v1 = 1;                                                     // 0x0010dfbc: addiu $v1, $zero, 1
    v0 = 0x22 << 16;                                            // 0x0010dfc0: lui $v0, 0x22
    *(uint32_t*)((s3) + 4) = v1;                                // 0x0010dfc4: sw $v1, 4($s3)
    v0 = v0 + 0x430;                                            // 0x0010dfc8: addiu $v0, $v0, 0x430
    *(uint32_t*)(s3) = v0;                                      // 0x0010dfcc: sw $v0, 0($s3)
    s3 = s3 + 8;                                                // 0x0010dfd0: addiu $s3, $s3, 8
    v1 = local_14;                                              // 0x0010dfd4: lw $v1, 0x14($sp)
    v0 = local_18;                                              // 0x0010dfd8: lw $v0, 0x18($sp)
    v1 = v1 + 1;                                                // 0x0010dfdc: addiu $v1, $v1, 1
    v0 = v0 + 1;                                                // 0x0010dfe0: addiu $v0, $v0, 1
    a0 = (v1 < 8) ? 1 : 0;                                      // 0x0010dfe4: slti $a0, $v1, 8
    local_18 = v0;                                              // 0x0010dfe8: sw $v0, 0x18($sp)
    goto label_0x10e344;                                        // 0x0010dfec: b 0x10e344
    local_14 = v1;                                              // 0x0010dff0: sw $v1, 0x14($sp)
    /* nop */                                                   // 0x0010dff4: nop 
label_0x10dff8:
    v0 = local_1dc;                                             // 0x0010dff8: lw $v0, 0x1dc($sp)
    *(uint32_t*)((s3) + 4) = v0;                                // 0x0010dffc: sw $v0, 4($s3)
    s3 = s3 + 8;                                                // 0x0010e000: addiu $s3, $s3, 8
    v0 = local_14;                                              // 0x0010e004: lw $v0, 0x14($sp)
    v1 = local_18;                                              // 0x0010e008: lw $v1, 0x18($sp)
    a3 = local_1dc;                                             // 0x0010e00c: lw $a3, 0x1dc($sp)
    v0 = v0 + 1;                                                // 0x0010e010: addiu $v0, $v0, 1
    a0 = (v0 < 8) ? 1 : 0;                                      // 0x0010e014: slti $a0, $v0, 8
    local_14 = v0;                                              // 0x0010e018: sw $v0, 0x14($sp)
    v1 = v1 + a3;                                               // 0x0010e01c: addu $v1, $v1, $a3
    if (a0 != 0) goto label_0x10e048;                           // 0x0010e020: bnez $a0, 0x10e048
    local_18 = v1;                                              // 0x0010e024: sw $v1, 0x18($sp)
    a0 = local_1e8;                                             // 0x0010e028: lw $a0, 0x1e8($sp)
    func_0010cd58();  // 0x10cd10                                // 0x0010e02c: jal 0x10cd10
    a1 = sp + 0x10;                                             // 0x0010e030: addiu $a1, $sp, 0x10
    if (v0 != 0) goto label_0x10e4b4;                           // 0x0010e034: bnez $v0, 0x10e4b4
    v0 = local_1e8;                                             // 0x0010e038: lw $v0, 0x1e8($sp)
    v1 = sp + 0x20;                                             // 0x0010e03c: addiu $v1, $sp, 0x20
    a3 = local_1dc;                                             // 0x0010e040: lw $a3, 0x1dc($sp)
label_0x10e048:
    v1 = 1;                                                     // 0x0010e048: addiu $v1, $zero, 1
    v0 = 0x22 << 16;                                            // 0x0010e04c: lui $v0, 0x22
    *(uint32_t*)((s3) + 4) = v1;                                // 0x0010e050: sw $v1, 4($s3)
    v0 = v0 + 0x430;                                            // 0x0010e054: addiu $v0, $v0, 0x430
    *(uint32_t*)(s3) = v0;                                      // 0x0010e058: sw $v0, 0($s3)
    s3 = s3 + 8;                                                // 0x0010e05c: addiu $s3, $s3, 8
    v1 = local_14;                                              // 0x0010e060: lw $v1, 0x14($sp)
    s5 = s5 + a3;                                               // 0x0010e064: addu $s5, $s5, $a3
    v0 = local_18;                                              // 0x0010e068: lw $v0, 0x18($sp)
    v1 = v1 + 1;                                                // 0x0010e06c: addiu $v1, $v1, 1
    v0 = v0 + 1;                                                // 0x0010e070: addiu $v0, $v0, 1
    a0 = (v1 < 8) ? 1 : 0;                                      // 0x0010e074: slti $a0, $v1, 8
    local_18 = v0;                                              // 0x0010e078: sw $v0, 0x18($sp)
    if (a0 != 0) goto label_0x10e0a0;                           // 0x0010e07c: bnez $a0, 0x10e0a0
    local_14 = v1;                                              // 0x0010e080: sw $v1, 0x14($sp)
    a0 = local_1e8;                                             // 0x0010e084: lw $a0, 0x1e8($sp)
    func_0010cd58();  // 0x10cd10                                // 0x0010e088: jal 0x10cd10
    a1 = sp + 0x10;                                             // 0x0010e08c: addiu $a1, $sp, 0x10
    if (v0 != 0) goto label_0x10e4b4;                           // 0x0010e090: bnez $v0, 0x10e4b4
    v0 = local_1e8;                                             // 0x0010e094: lw $v0, 0x1e8($sp)
    a0 = sp + 0x20;                                             // 0x0010e098: addiu $a0, $sp, 0x20
label_0x10e0a0:
    *(uint32_t*)(s3) = s5;                                      // 0x0010e0a0: sw $s5, 0($s3)
    v1 = local_1dc;                                             // 0x0010e0a4: lw $v1, 0x1dc($sp)
    v0 = local_1e0;                                             // 0x0010e0a8: lw $v0, 0x1e0($sp)
    v0 = v0 - v1;                                               // 0x0010e0ac: subu $v0, $v0, $v1
    *(uint32_t*)((s3) + 4) = v0;                                // 0x0010e0b0: sw $v0, 4($s3)
    s3 = s3 + 8;                                                // 0x0010e0b4: addiu $s3, $s3, 8
    v1 = local_14;                                              // 0x0010e0b8: lw $v1, 0x14($sp)
    a0 = local_1e0;                                             // 0x0010e0bc: lw $a0, 0x1e0($sp)
    a1 = local_1dc;                                             // 0x0010e0c0: lw $a1, 0x1dc($sp)
    v1 = v1 + 1;                                                // 0x0010e0c4: addiu $v1, $v1, 1
    v0 = local_18;                                              // 0x0010e0c8: lw $v0, 0x18($sp)
    a2 = (v1 < 8) ? 1 : 0;                                      // 0x0010e0cc: slti $a2, $v1, 8
    a0 = a0 - a1;                                               // 0x0010e0d0: subu $a0, $a0, $a1
    local_14 = v1;                                              // 0x0010e0d4: sw $v1, 0x14($sp)
    v0 = v0 + a0;                                               // 0x0010e0d8: addu $v0, $v0, $a0
    if (a2 != 0) goto label_0x10e368;                           // 0x0010e0dc: bnez $a2, 0x10e368
    local_18 = v0;                                              // 0x0010e0e0: sw $v0, 0x18($sp)
    a0 = local_1e8;                                             // 0x0010e0e4: lw $a0, 0x1e8($sp)
    func_0010cd58();  // 0x10cd10                                // 0x0010e0e8: jal 0x10cd10
    a1 = sp + 0x10;                                             // 0x0010e0ec: addiu $a1, $sp, 0x10
    if (v0 != 0) goto label_0x10e4b4;                           // 0x0010e0f0: bnez $v0, 0x10e4b4
    v0 = local_1e8;                                             // 0x0010e0f4: lw $v0, 0x1e8($sp)
    a1 = sp + 0x20;                                             // 0x0010e0f8: addiu $a1, $sp, 0x20
    goto label_0x10e368;                                        // 0x0010e0fc: b 0x10e368
    /* nop */                                                   // 0x0010e104: nop 
label_0x10e108:
    v0 = (v0 < 2) ? 1 : 0;                                      // 0x0010e108: slti $v0, $v0, 2
    /* beqzl $v0, 0x10e124 */                                   // 0x0010e10c: beqzl $v0, 0x10e124
    v1 = g_00220403;  // Global at 0x00220403                   // 0x0010e110: lbu $v1, 0($s5)
    v0 = s7 & 1;                                                // 0x0010e114: andi $v0, $s7, 1
    if (v0 == 0) goto label_0x10e2d0;                           // 0x0010e118: beqz $v0, 0x10e2d0
    v0 = 1;                                                     // 0x0010e11c: addiu $v0, $zero, 1
    v1 = g_00220403;  // Global at 0x00220403                   // 0x0010e120: lbu $v1, 0($s5)
    s5 = s5 + 1;                                                // 0x0010e124: addiu $s5, $s5, 1
    a0 = 0x2e;                                                  // 0x0010e128: addiu $a0, $zero, 0x2e
    a1 = 2;                                                     // 0x0010e12c: addiu $a1, $zero, 2
    local_1c0 = v1;                                             // 0x0010e130: sb $v1, 0x1c0($sp)
    v0 = sp + 0x1c0;                                            // 0x0010e134: addiu $v0, $sp, 0x1c0
    local_1c1 = a0;                                             // 0x0010e138: sb $a0, 0x1c1($sp)
    *(uint32_t*)((s3) + 4) = a1;                                // 0x0010e13c: sw $a1, 4($s3)
    *(uint32_t*)(s3) = v0;                                      // 0x0010e140: sw $v0, 0($s3)
    s3 = s3 + 8;                                                // 0x0010e144: addiu $s3, $s3, 8
    v1 = local_14;                                              // 0x0010e148: lw $v1, 0x14($sp)
    v0 = local_18;                                              // 0x0010e14c: lw $v0, 0x18($sp)
    v1 = &str_002203f0;  // "bug in vfprintf: bad base"         // 0x0010e150: addiu $v1, $v1, 1
    v0 = v0 + 2;                                                // 0x0010e154: addiu $v0, $v0, 2
    a0 = (v1 < 8) ? 1 : 0;                                      // 0x0010e158: slti $a0, $v1, 8
    local_18 = v0;                                              // 0x0010e15c: sw $v0, 0x18($sp)
    if (a0 != 0) goto label_0x10e184;                           // 0x0010e160: bnez $a0, 0x10e184
    local_14 = v1;                                              // 0x0010e164: sw $v1, 0x14($sp)
    a0 = local_1e8;                                             // 0x0010e168: lw $a0, 0x1e8($sp)
    func_0010cd58();  // 0x10cd10                                // 0x0010e16c: jal 0x10cd10
    a1 = sp + 0x10;                                             // 0x0010e170: addiu $a1, $sp, 0x10
    if (v0 != 0) goto label_0x10e4b4;                           // 0x0010e174: bnez $v0, 0x10e4b4
    v0 = local_1e8;                                             // 0x0010e178: lw $v0, 0x1e8($sp)
    a2 = sp + 0x20;                                             // 0x0010e17c: addiu $a2, $sp, 0x20
label_0x10e184:
    func_00111f90();  // 0x111f40                                // 0x0010e18c: jal 0x111f40
    /* nop */                                                   // 0x0010e190: nop 
    if (v0 == 0) goto label_0x10e1f8;                           // 0x0010e194: beqz $v0, 0x10e1f8
    v0 = local_1e0;                                             // 0x0010e198: lw $v0, 0x1e0($sp)
    *(uint32_t*)(s3) = s5;                                      // 0x0010e19c: sw $s5, 0($s3)
    v0 = local_1e0;                                             // 0x0010e1a0: lw $v0, 0x1e0($sp)
    v0 = v0 + -1;                                               // 0x0010e1a4: addiu $v0, $v0, -1
    *(uint32_t*)((s3) + 4) = v0;                                // 0x0010e1a8: sw $v0, 4($s3)
    s3 = s3 + 8;                                                // 0x0010e1ac: addiu $s3, $s3, 8
    v1 = local_18;                                              // 0x0010e1b0: lw $v1, 0x18($sp)
    v0 = local_14;                                              // 0x0010e1b4: lw $v0, 0x14($sp)
    a0 = local_1e0;                                             // 0x0010e1b8: lw $a0, 0x1e0($sp)
    v0 = v0 + 1;                                                // 0x0010e1bc: addiu $v0, $v0, 1
    v1 = v1 + a0;                                               // 0x0010e1c0: addu $v1, $v1, $a0
    a1 = (v0 < 8) ? 1 : 0;                                      // 0x0010e1c4: slti $a1, $v0, 8
    v1 = v1 + -1;                                               // 0x0010e1c8: addiu $v1, $v1, -1
    local_14 = v0;                                              // 0x0010e1cc: sw $v0, 0x14($sp)
    if (a1 != 0) goto label_0x10e318;                           // 0x0010e1d0: bnez $a1, 0x10e318
    local_18 = v1;                                              // 0x0010e1d4: sw $v1, 0x18($sp)
    a0 = local_1e8;                                             // 0x0010e1d8: lw $a0, 0x1e8($sp)
    func_0010cd58();  // 0x10cd10                                // 0x0010e1dc: jal 0x10cd10
    a1 = sp + 0x10;                                             // 0x0010e1e0: addiu $a1, $sp, 0x10
    if (v0 != 0) goto label_0x10e4b4;                           // 0x0010e1e4: bnez $v0, 0x10e4b4
    v0 = local_1e8;                                             // 0x0010e1e8: lw $v0, 0x1e8($sp)
    v0 = sp + 0x20;                                             // 0x0010e1ec: addiu $v0, $sp, 0x20
    goto label_0x10e318;                                        // 0x0010e1f0: b 0x10e318
label_0x10e1f8:
    s0 = v0 + -1;                                               // 0x0010e1f8: addiu $s0, $v0, -1
    if (s0 <= 0) goto label_0x10e31c;                           // 0x0010e1fc: blez $s0, 0x10e31c
    a2 = local_200;                                             // 0x0010e200: lw $a2, 0x200($sp)
    v0 = (s0 < 0x11) ? 1 : 0;                                   // 0x0010e204: slti $v0, $s0, 0x11
    if (v0 != 0) goto label_0x10e280;                           // 0x0010e208: bnez $v0, 0x10e280
    a3 = 0x22 << 16;                                            // 0x0010e20c: lui $a3, 0x22
    s4 = 0x10;                                                  // 0x0010e210: addiu $s4, $zero, 0x10
    s1 = a3 + 0x3b0;                                            // 0x0010e214: addiu $s1, $a3, 0x3b0
    *(uint32_t*)((s3) + 4) = s4;                                // 0x0010e218: sw $s4, 4($s3)
    /* nop */                                                   // 0x0010e21c: nop 
    *(uint32_t*)(s3) = s1;                                      // 0x0010e220: sw $s1, 0($s3)
    s3 = s3 + 8;                                                // 0x0010e224: addiu $s3, $s3, 8
    v0 = local_14;                                              // 0x0010e228: lw $v0, 0x14($sp)
    v1 = local_18;                                              // 0x0010e22c: lw $v1, 0x18($sp)
    v0 = v0 + 1;                                                // 0x0010e230: addiu $v0, $v0, 1
    v1 = v1 + 0x10;                                             // 0x0010e234: addiu $v1, $v1, 0x10
    a0 = (v0 < 8) ? 1 : 0;                                      // 0x0010e238: slti $a0, $v0, 8
    local_18 = v1;                                              // 0x0010e23c: sw $v1, 0x18($sp)
    if (a0 != 0) goto label_0x10e268;                           // 0x0010e240: bnez $a0, 0x10e268
    local_14 = v0;                                              // 0x0010e244: sw $v0, 0x14($sp)
    a0 = local_1e8;                                             // 0x0010e248: lw $a0, 0x1e8($sp)
    a1 = sp + 0x10;                                             // 0x0010e24c: addiu $a1, $sp, 0x10
    func_0010cd58();  // 0x10cd10                                // 0x0010e250: jal 0x10cd10
    /* FPU: dpax.w.ph $ac0, $sp, $a3 */                         // 0x0010e254: dpax.w.ph $ac0, $sp, $a3
    if (v0 != 0) goto label_0x10e4b0;                           // 0x0010e258: bnez $v0, 0x10e4b0
    v1 = sp + 0x20;                                             // 0x0010e260: addiu $v1, $sp, 0x20
label_0x10e268:
    s0 = s0 + -0x10;                                            // 0x0010e268: addiu $s0, $s0, -0x10
    v0 = (s0 < 0x11) ? 1 : 0;                                   // 0x0010e26c: slti $v0, $s0, 0x11
    /* beqzl $v0, 0x10e220 */                                   // 0x0010e270: beqzl $v0, 0x10e220
    *(uint32_t*)((s3) + 4) = s4;                                // 0x0010e274: sw $s4, 4($s3)
    goto label_0x10e284;                                        // 0x0010e278: b 0x10e284
    *(uint32_t*)((s3) + 4) = s0;                                // 0x0010e27c: sw $s0, 4($s3)
label_0x10e280:
    *(uint32_t*)((s3) + 4) = s0;                                // 0x0010e280: sw $s0, 4($s3)
label_0x10e284:
    v0 = a3 + 0x3b0;                                            // 0x0010e284: addiu $v0, $a3, 0x3b0
    *(uint32_t*)(s3) = v0;                                      // 0x0010e288: sw $v0, 0($s3)
    s3 = s3 + 8;                                                // 0x0010e28c: addiu $s3, $s3, 8
    v1 = local_14;                                              // 0x0010e290: lw $v1, 0x14($sp)
    v0 = local_18;                                              // 0x0010e294: lw $v0, 0x18($sp)
    v1 = v1 + 1;                                                // 0x0010e298: addiu $v1, $v1, 1
    v0 = v0 + s0;                                               // 0x0010e29c: addu $v0, $v0, $s0
    a0 = (v1 < 8) ? 1 : 0;                                      // 0x0010e2a0: slti $a0, $v1, 8
    local_18 = v0;                                              // 0x0010e2a4: sw $v0, 0x18($sp)
    if (a0 != 0) goto label_0x10e318;                           // 0x0010e2a8: bnez $a0, 0x10e318
    local_14 = v1;                                              // 0x0010e2ac: sw $v1, 0x14($sp)
    a0 = local_1e8;                                             // 0x0010e2b0: lw $a0, 0x1e8($sp)
    func_0010cd58();  // 0x10cd10                                // 0x0010e2b4: jal 0x10cd10
    a1 = sp + 0x10;                                             // 0x0010e2b8: addiu $a1, $sp, 0x10
    if (v0 != 0) goto label_0x10e4b4;                           // 0x0010e2bc: bnez $v0, 0x10e4b4
    v0 = local_1e8;                                             // 0x0010e2c0: lw $v0, 0x1e8($sp)
    a0 = sp + 0x20;                                             // 0x0010e2c4: addiu $a0, $sp, 0x20
    goto label_0x10e318;                                        // 0x0010e2c8: b 0x10e318
label_0x10e2d0:
    *(uint32_t*)(s3) = s5;                                      // 0x0010e2d0: sw $s5, 0($s3)
    *(uint32_t*)((s3) + 4) = v0;                                // 0x0010e2d4: sw $v0, 4($s3)
    s3 = s3 + 8;                                                // 0x0010e2d8: addiu $s3, $s3, 8
    v1 = local_14;                                              // 0x0010e2dc: lw $v1, 0x14($sp)
    v0 = local_18;                                              // 0x0010e2e0: lw $v0, 0x18($sp)
    v1 = v1 + 1;                                                // 0x0010e2e4: addiu $v1, $v1, 1
    v0 = v0 + 1;                                                // 0x0010e2e8: addiu $v0, $v0, 1
    a0 = (v1 < 8) ? 1 : 0;                                      // 0x0010e2ec: slti $a0, $v1, 8
    local_18 = v0;                                              // 0x0010e2f0: sw $v0, 0x18($sp)
    if (a0 != 0) goto label_0x10e318;                           // 0x0010e2f4: bnez $a0, 0x10e318
    local_14 = v1;                                              // 0x0010e2f8: sw $v1, 0x14($sp)
    a0 = local_1e8;                                             // 0x0010e2fc: lw $a0, 0x1e8($sp)
    func_0010cd58();  // 0x10cd10                                // 0x0010e300: jal 0x10cd10
    a1 = sp + 0x10;                                             // 0x0010e304: addiu $a1, $sp, 0x10
    if (v0 != 0) goto label_0x10e4b4;                           // 0x0010e308: bnez $v0, 0x10e4b4
    v0 = local_1e8;                                             // 0x0010e30c: lw $v0, 0x1e8($sp)
    a1 = sp + 0x20;                                             // 0x0010e310: addiu $a1, $sp, 0x20
label_0x10e318:
    a2 = local_200;                                             // 0x0010e318: lw $a2, 0x200($sp)
label_0x10e31c:
    *(uint32_t*)(s3) = sp;                                      // 0x0010e31c: sw $sp, 0($s3)
    *(uint32_t*)((s3) + 4) = a2;                                // 0x0010e320: sw $a2, 4($s3)
    s3 = s3 + 8;                                                // 0x0010e324: addiu $s3, $s3, 8
    v0 = local_14;                                              // 0x0010e328: lw $v0, 0x14($sp)
    v1 = local_18;                                              // 0x0010e32c: lw $v1, 0x18($sp)
    v0 = v0 + 1;                                                // 0x0010e330: addiu $v0, $v0, 1
    v1 = v1 + a2;                                               // 0x0010e334: addu $v1, $v1, $a2
label_0x10e338:
    a0 = (v0 < 8) ? 1 : 0;                                      // 0x0010e338: slti $a0, $v0, 8
    local_18 = v1;                                              // 0x0010e33c: sw $v1, 0x18($sp)
    local_14 = v0;                                              // 0x0010e340: sw $v0, 0x14($sp)
label_0x10e344:
    if (a0 != 0) goto label_0x10e36c;                           // 0x0010e344: bnez $a0, 0x10e36c
    v0 = s7 & 4;                                                // 0x0010e348: andi $v0, $s7, 4
    a0 = local_1e8;                                             // 0x0010e34c: lw $a0, 0x1e8($sp)
    func_0010cd58();  // 0x10cd10                                // 0x0010e350: jal 0x10cd10
    a1 = sp + 0x10;                                             // 0x0010e354: addiu $a1, $sp, 0x10
    if (v0 != 0) goto label_0x10e4b4;                           // 0x0010e358: bnez $v0, 0x10e4b4
    v0 = local_1e8;                                             // 0x0010e35c: lw $v0, 0x1e8($sp)
    v0 = sp + 0x20;                                             // 0x0010e360: addiu $v0, $sp, 0x20
label_0x10e368:
    v0 = s7 & 4;                                                // 0x0010e368: andi $v0, $s7, 4
label_0x10e36c:
    if (v0 == 0) goto label_0x10e440;                           // 0x0010e36c: beqz $v0, 0x10e440
    v1 = local_1f0;                                             // 0x0010e370: lw $v1, 0x1f0($sp)
    a0 = local_208;                                             // 0x0010e374: lw $a0, 0x208($sp)
    s0 = v1 - a0;                                               // 0x0010e378: subu $s0, $v1, $a0
    if (s0 <= 0) goto label_0x10e448;                           // 0x0010e37c: blez $s0, 0x10e448
    a2 = local_208;                                             // 0x0010e380: lw $a2, 0x208($sp)
    v0 = (s0 < 0x11) ? 1 : 0;                                   // 0x0010e384: slti $v0, $s0, 0x11
    if (v0 != 0) goto label_0x10e400;                           // 0x0010e388: bnez $v0, 0x10e400
    a3 = 0x22 << 16;                                            // 0x0010e38c: lui $a3, 0x22
    s4 = 0x10;                                                  // 0x0010e390: addiu $s4, $zero, 0x10
    s1 = a3 + 0x3a0;                                            // 0x0010e394: addiu $s1, $a3, 0x3a0
    *(uint32_t*)((s3) + 4) = s4;                                // 0x0010e398: sw $s4, 4($s3)
    /* nop */                                                   // 0x0010e39c: nop 
    *(uint32_t*)(s3) = s1;                                      // 0x0010e3a0: sw $s1, 0($s3)
    s3 = s3 + 8;                                                // 0x0010e3a4: addiu $s3, $s3, 8
    v0 = local_14;                                              // 0x0010e3a8: lw $v0, 0x14($sp)
    v1 = local_18;                                              // 0x0010e3ac: lw $v1, 0x18($sp)
    v0 = v0 + 1;                                                // 0x0010e3b0: addiu $v0, $v0, 1
    v1 = v1 + 0x10;                                             // 0x0010e3b4: addiu $v1, $v1, 0x10
    a0 = (v0 < 8) ? 1 : 0;                                      // 0x0010e3b8: slti $a0, $v0, 8
    local_18 = v1;                                              // 0x0010e3bc: sw $v1, 0x18($sp)
    if (a0 != 0) goto label_0x10e3e8;                           // 0x0010e3c0: bnez $a0, 0x10e3e8
    local_14 = v0;                                              // 0x0010e3c4: sw $v0, 0x14($sp)
    a0 = local_1e8;                                             // 0x0010e3c8: lw $a0, 0x1e8($sp)
    a1 = sp + 0x10;                                             // 0x0010e3cc: addiu $a1, $sp, 0x10
    func_0010cd58();  // 0x10cd10                                // 0x0010e3d0: jal 0x10cd10
    /* FPU: dpax.w.ph $ac0, $sp, $a3 */                         // 0x0010e3d4: dpax.w.ph $ac0, $sp, $a3
    if (v0 != 0) goto label_0x10e4b0;                           // 0x0010e3d8: bnez $v0, 0x10e4b0
    a1 = sp + 0x20;                                             // 0x0010e3e0: addiu $a1, $sp, 0x20
label_0x10e3e8:
    s0 = s0 + -0x10;                                            // 0x0010e3e8: addiu $s0, $s0, -0x10
    v0 = (s0 < 0x11) ? 1 : 0;                                   // 0x0010e3ec: slti $v0, $s0, 0x11
    /* beqzl $v0, 0x10e3a0 */                                   // 0x0010e3f0: beqzl $v0, 0x10e3a0
    *(uint32_t*)((s3) + 4) = s4;                                // 0x0010e3f4: sw $s4, 4($s3)
    goto label_0x10e404;                                        // 0x0010e3f8: b 0x10e404
    *(uint32_t*)((s3) + 4) = s0;                                // 0x0010e3fc: sw $s0, 4($s3)
label_0x10e400:
    *(uint32_t*)((s3) + 4) = s0;                                // 0x0010e400: sw $s0, 4($s3)
label_0x10e404:
    v0 = a3 + 0x3a0;                                            // 0x0010e404: addiu $v0, $a3, 0x3a0
    *(uint32_t*)(s3) = v0;                                      // 0x0010e408: sw $v0, 0($s3)
    v1 = local_14;                                              // 0x0010e40c: lw $v1, 0x14($sp)
    v0 = local_18;                                              // 0x0010e410: lw $v0, 0x18($sp)
    v1 = v1 + 1;                                                // 0x0010e414: addiu $v1, $v1, 1
    v0 = v0 + s0;                                               // 0x0010e418: addu $v0, $v0, $s0
    a0 = (v1 < 8) ? 1 : 0;                                      // 0x0010e41c: slti $a0, $v1, 8
    local_18 = v0;                                              // 0x0010e420: sw $v0, 0x18($sp)
    if (a0 != 0) goto label_0x10e440;                           // 0x0010e424: bnez $a0, 0x10e440
    local_14 = v1;                                              // 0x0010e428: sw $v1, 0x14($sp)
    a0 = local_1e8;                                             // 0x0010e42c: lw $a0, 0x1e8($sp)
    func_0010cd58();  // 0x10cd10                                // 0x0010e430: jal 0x10cd10
    a1 = sp + 0x10;                                             // 0x0010e434: addiu $a1, $sp, 0x10
    if (v0 != 0) goto label_0x10e4b4;                           // 0x0010e438: bnez $v0, 0x10e4b4
    v0 = local_1e8;                                             // 0x0010e43c: lw $v0, 0x1e8($sp)
label_0x10e440:
    a2 = local_208;                                             // 0x0010e440: lw $a2, 0x208($sp)
    v1 = local_1f0;                                             // 0x0010e444: lw $v1, 0x1f0($sp)
label_0x10e448:
    a0 = local_1f0;                                             // 0x0010e448: lw $a0, 0x1f0($sp)
    v0 = (a2 < v1) ? 1 : 0;                                     // 0x0010e44c: slt $v0, $a2, $v1
    v1 = local_18;                                              // 0x0010e450: lw $v1, 0x18($sp)
    a1 = local_1ec;                                             // 0x0010e454: lw $a1, 0x1ec($sp)
    if (v0 == 0) a0 = a2;                                       // 0x0010e458: movz $a0, $a2, $v0
    a1 = a1 + a0;                                               // 0x0010e45c: addu $a1, $a1, $a0
    if (v1 == 0) goto label_0x10e47c;                           // 0x0010e460: beqz $v1, 0x10e47c
    local_1ec = a1;                                             // 0x0010e464: sw $a1, 0x1ec($sp)
    a0 = local_1e8;                                             // 0x0010e468: lw $a0, 0x1e8($sp)
    func_0010cd58();  // 0x10cd10                                // 0x0010e46c: jal 0x10cd10
    a1 = sp + 0x10;                                             // 0x0010e470: addiu $a1, $sp, 0x10
    if (v0 != 0) goto label_0x10e4b4;                           // 0x0010e474: bnez $v0, 0x10e4b4
    v0 = local_1e8;                                             // 0x0010e478: lw $v0, 0x1e8($sp)
label_0x10e47c:
    a2 = sp + 0x20;                                             // 0x0010e47c: addiu $a2, $sp, 0x20
    local_14 = 0;                                               // 0x0010e480: sw $zero, 0x14($sp)
    goto label_0x10cf58;                                        // 0x0010e484: b 0x10cf58
    /* nop */                                                   // 0x0010e48c: nop 
label_0x10e490:
    v0 = local_18;                                              // 0x0010e490: lw $v0, 0x18($sp)
label_0x10e494:
    if (v0 == 0) goto label_0x10e4ac;                           // 0x0010e494: beqz $v0, 0x10e4ac
    a0 = local_1e8;                                             // 0x0010e498: lw $a0, 0x1e8($sp)
    func_0010cd58();  // 0x10cd10                                // 0x0010e49c: jal 0x10cd10
    a1 = sp + 0x10;                                             // 0x0010e4a0: addiu $a1, $sp, 0x10
    if (v0 != 0) goto label_0x10e4b4;                           // 0x0010e4a4: bnez $v0, 0x10e4b4
    v0 = local_1e8;                                             // 0x0010e4a8: lw $v0, 0x1e8($sp)
label_0x10e4ac:
    local_14 = 0;                                               // 0x0010e4ac: sw $zero, 0x14($sp)
label_0x10e4b0:
    v0 = local_1e8;                                             // 0x0010e4b0: lw $v0, 0x1e8($sp)
label_0x10e4b4:
    a0 = local_1ec;                                             // 0x0010e4b4: lw $a0, 0x1ec($sp)
    v1 = g_002203ac;  // Global at 0x002203ac                   // 0x0010e4b8: lhu $v1, 0xc($v0)
    v0 = -1;                                                    // 0x0010e4bc: addiu $v0, $zero, -1
    v1 = v1 & 0x40;                                             // 0x0010e4c0: andi $v1, $v1, 0x40
    if (v1 == 0) v0 = a0;                                       // 0x0010e4c4: movz $v0, $a0, $v1
label_0x10e4c8:
label_0x10e4cc:
    return;                                                     // 0x0010e4f0: jr $ra
    sp = sp + 0x290;                                            // 0x0010e4f4: addiu $sp, $sp, 0x290
}