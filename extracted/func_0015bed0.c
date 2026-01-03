void func_0015bed0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_10, local_28, local_2c, local_30, local_34, local_38, local_3c, local_4;
    uint32_t local_40, local_8, local_a0, local_a4, local_a8, local_ac, local_b0, local_b4;
    uint32_t local_b8, local_bc, local_c, local_c0, local_c4, local_c8, local_cc, local_d0;
    uint32_t local_d4;
    
    sp = sp + -0x130;                                           // 0x0015bed0: addiu $sp, $sp, -0x130
    v0 = 0x26 << 16;                                            // 0x0015bed4: lui $v0, 0x26
    s0 = 0x26 << 16;                                            // 0x0015bedc: lui $s0, 0x26
    s1 = 0x26 << 16;                                            // 0x0015bee4: lui $s1, 0x26
    v1 = 0x26 << 16;                                            // 0x0015beec: lui $v1, 0x26
    s2 = v1 + -0x6368;                                          // 0x0015bef4: addiu $s2, $v1, -0x6368
    a2 = 0x26 << 16;                                            // 0x0015befc: lui $a2, 0x26
    s5 = v0 + -0x636c;                                          // 0x0015bf04: addiu $s5, $v0, -0x636c
    a1 = 0x26 << 16;                                            // 0x0015bf1c: lui $a1, 0x26
    s3 = a1 + -0x6364;                                          // 0x0015bf24: addiu $s3, $a1, -0x6364
    s4 = a2 + -0x6360;                                          // 0x0015bf28: addiu $s4, $a2, -0x6360
    v0 = *(int32_t*)((s7) + 0x10);                              // 0x0015bf30: lw $v0, 0x10($s7)
    s0 = s0 + -0x6350;                                          // 0x0015bf34: addiu $s0, $s0, -0x6350
    fp = *(int32_t*)(s7);                                       // 0x0015bf38: lw $fp, 0($s7)
    s1 = s1 + -0x6354;                                          // 0x0015bf3c: addiu $s1, $s1, -0x6354
    local_c0 = v0;                                              // 0x0015bf40: sw $v0, 0xc0($sp)
    v1 = *(int32_t*)((s7) + 8);                                 // 0x0015bf50: lw $v1, 8($s7)
    local_c4 = v1;                                              // 0x0015bf60: sw $v1, 0xc4($sp)
    v0 = *(int32_t*)((s7) + 0xc);                               // 0x0015bf64: lw $v0, 0xc($s7)
    func_0015b860();  // 15b860                                // 0x0015bf68: jal 0x15b860
    local_c8 = v0;                                              // 0x0015bf6c: sw $v0, 0xc8($sp)
    a1 = 0x26 << 16;                                            // 0x0015bf70: lui $a1, 0x26
    a2 = 0x26 << 16;                                            // 0x0015bf74: lui $a2, 0x26
    a1 = a1 + -0x635c;                                          // 0x0015bf78: addiu $a1, $a1, -0x635c
    a2 = a2 + -0x6358;                                          // 0x0015bf7c: addiu $a2, $a2, -0x6358
    func_0015b998();  // 15b998                                // 0x0015bf80: jal 0x15b998
    a1 = sp + 0xa0;                                             // 0x0015bf8c: addiu $a1, $sp, 0xa0
    func_0015bad0();  // 15bad0                                // 0x0015bf90: jal 0x15bad0
    a2 = sp + 0xa4;                                             // 0x0015bf94: addiu $a2, $sp, 0xa4
    func_0015baf0();  // 15baf0                                // 0x0015bf98: jal 0x15baf0
    /* nop */                                                   // 0x0015bf9c: nop 
    local_d0 = v0;                                              // 0x0015bfa0: sw $v0, 0xd0($sp)
    a1 = g_00259c98;  // Global at 0x00259c98                   // 0x0015bfa8: lw $a1, 0($s2)
    v0 = g_00259c9c;  // Global at 0x00259c9c                   // 0x0015bfac: lw $v0, 0($s3)
    v1 = g_00259ca0;  // Global at 0x00259ca0                   // 0x0015bfb0: lw $v1, 0($s4)
    a1 = a1 + v0;                                               // 0x0015bfb4: addu $a1, $a1, $v0
    a1 = a1 + v1;                                               // 0x0015bfb8: addu $a1, $a1, $v1
    func_0015d260();  // 15d260                                // 0x0015bfbc: jal 0x15d260
    a1 = a1 + 0x40;                                             // 0x0015bfc0: addiu $a1, $a1, 0x40
    local_b8 = v0;                                              // 0x0015bfc8: sw $v0, 0xb8($sp)
    a1 = g_00259c94;  // Global at 0x00259c94                   // 0x0015bfcc: lw $a1, 0($s5)
    func_0015d260();  // 15d260                                // 0x0015bfd0: jal 0x15d260
    a1 = a1 + 0x40;                                             // 0x0015bfd4: addiu $a1, $a1, 0x40
    v1 = sp + 0x50;                                             // 0x0015bfdc: addiu $v1, $sp, 0x50
    func_0015bd38();  // 15bd38                                // 0x0015bfe8: jal 0x15bd38
    a3 = sp + 0x60;                                             // 0x0015bff4: addiu $a3, $sp, 0x60
    func_0015bde0();  // 15bde0                                // 0x0015c000: jal 0x15bde0
    a1 = g_00259cb0;  // Global at 0x00259cb0                   // 0x0015c00c: lw $a1, 0($s0)
    func_0015d260();  // 15d260                                // 0x0015c010: jal 0x15d260
    a1 = g_00259cac;  // Global at 0x00259cac                   // 0x0015c01c: lw $a1, 0($s1)
    func_0015d260();  // 15d260                                // 0x0015c020: jal 0x15d260
    a1 = 0x800;                                                 // 0x0015c02c: addiu $a1, $zero, 0x800
    func_0015d260();  // 15d260                                // 0x0015c030: jal 0x15d260
    a1 = local_a0;                                              // 0x0015c03c: lw $a1, 0xa0($sp)
    func_0015d260();  // 15d260                                // 0x0015c040: jal 0x15d260
    local_bc = v0;                                              // 0x0015c044: sw $v0, 0xbc($sp)
    a1 = local_a4;                                              // 0x0015c04c: lw $a1, 0xa4($sp)
    func_0015d260();  // 15d260                                // 0x0015c050: jal 0x15d260
    local_cc = v0;                                              // 0x0015c054: sw $v0, 0xcc($sp)
    a1 = local_d0;                                              // 0x0015c05c: lw $a1, 0xd0($sp)
    func_0015d260();  // 15d260                                // 0x0015c060: jal 0x15d260
    t0 = local_b8;                                              // 0x0015c068: lw $t0, 0xb8($sp)
    if (t0 == 0) goto label_0x15c0bc;                           // 0x0015c06c: beqz $t0, 0x15c0bc
    local_d4 = v0;                                              // 0x0015c070: sw $v0, 0xd4($sp)
    if (s3 == 0) goto label_0x15c0c0;                           // 0x0015c074: beqz $s3, 0x15c0c0
    a0 = 0x22 << 16;                                            // 0x0015c078: lui $a0, 0x22
    if (s4 != 0) goto label_0x15c0c0;                           // 0x0015c07c: bnez $s4, 0x15c0c0
    /* nop */                                                   // 0x0015c080: nop 
    if (s2 != 0) goto label_0x15c0c0;                           // 0x0015c084: bnez $s2, 0x15c0c0
    /* nop */                                                   // 0x0015c088: nop 
    if (s5 == 0) goto label_0x15c0c0;                           // 0x0015c08c: beqz $s5, 0x15c0c0
    /* nop */                                                   // 0x0015c090: nop 
    if (s1 == 0) goto label_0x15c0c0;                           // 0x0015c094: beqz $s1, 0x15c0c0
    t1 = local_bc;                                              // 0x0015c098: lw $t1, 0xbc($sp)
    if (t1 == 0) goto label_0x15c0c0;                           // 0x0015c09c: beqz $t1, 0x15c0c0
    t2 = local_cc;                                              // 0x0015c0a0: lw $t2, 0xcc($sp)
    if (t2 == 0) goto label_0x15c0c0;                           // 0x0015c0a4: beqz $t2, 0x15c0c0
    /* nop */                                                   // 0x0015c0a8: nop 
    if (v0 == 0) goto label_0x15c0c0;                           // 0x0015c0ac: beqz $v0, 0x15c0c0
    /* nop */                                                   // 0x0015c0b0: nop 
    if (s0 != 0) goto label_0x15c0d8;                           // 0x0015c0b4: bnez $s0, 0x15c0d8
    v0 = -0x40;                                                 // 0x0015c0b8: addiu $v0, $zero, -0x40
label_0x15c0bc:
    a0 = 0x22 << 16;                                            // 0x0015c0bc: lui $a0, 0x22
label_0x15c0c0:
    func_00163410();  // 163410                                // 0x0015c0c0: jal 0x163410
    a0 = &str_00227018;  // "E20010703C mwPlyCreateSofdec: create error" // 0x0015c0c4: addiu $a0, $a0, 0x7018
    func_0015d400();  // 15d400                                // 0x0015c0c8: jal 0x15d400
    goto label_0x15c51c;                                        // 0x0015c0d0: b 0x15c51c
label_0x15c0d8:
    v1 = s3 + 0x3f;                                             // 0x0015c0d8: addiu $v1, $s3, 0x3f
    v1 = v1 & v0;                                               // 0x0015c0dc: and $v1, $v1, $v0
    a1 = sp + 0xa8;                                             // 0x0015c0e4: addiu $a1, $sp, 0xa8
    a2 = sp + 0xac;                                             // 0x0015c0e8: addiu $a2, $sp, 0xac
    a3 = sp + 0xb0;                                             // 0x0015c0ec: addiu $a3, $sp, 0xb0
    t0 = sp + 0xb4;                                             // 0x0015c0f0: addiu $t0, $sp, 0xb4
    s0 = 0x26 << 16;                                            // 0x0015c0f4: lui $s0, 0x26
    s3 = 0x21 << 16;                                            // 0x0015c0f8: lui $s3, 0x21
    func_0015b948();  // 15b948                                // 0x0015c0fc: jal 0x15b948
    g_00259c90 = v1;  // Global at 0x00259c90                   // 0x0015c100: sw $v1, -0x6370($s0)
    v1 = local_b4;                                              // 0x0015c104: lw $v1, 0xb4($sp)
    s4 = 0x21 << 16;                                            // 0x0015c108: lui $s4, 0x21
    a3 = local_a8;                                              // 0x0015c10c: lw $a3, 0xa8($sp)
    v0 = s3 + 0x4408;                                           // 0x0015c110: addiu $v0, $s3, 0x4408
    a2 = local_ac;                                              // 0x0015c114: lw $a2, 0xac($sp)
    a0 = s4 + 0x4430;                                           // 0x0015c118: addiu $a0, $s4, 0x4430
    a1 = local_b0;                                              // 0x0015c11c: lw $a1, 0xb0($sp)
    t0 = 2;                                                     // 0x0015c120: addiu $t0, $zero, 2
    g_00214448 = s1;  // Global at 0x00214448                   // 0x0015c124: sw $s1, 0x18($a0)
    g_00214408 = a1;  // Global at 0x00214408                   // 0x0015c128: sw $a1, 0($v0)
    g_00214428 = 0;  // Global at 0x00214428                    // 0x0015c12c: sw $zero, 0x20($v0)
    g_0021440c = v1;  // Global at 0x0021440c                   // 0x0015c130: sw $v1, 4($v0)
    g_00214438 = s5;  // Global at 0x00214438                   // 0x0015c134: sw $s5, 8($a0)
    g_0021441c = a3;  // Global at 0x0021441c                   // 0x0015c138: sw $a3, 0x14($v0)
    g_00214420 = a2;  // Global at 0x00214420                   // 0x0015c13c: sw $a2, 0x18($v0)
    g_00214410 = a3;  // Global at 0x00214410                   // 0x0015c140: sw $a3, 8($v0)
    g_00214414 = a2;  // Global at 0x00214414                   // 0x0015c144: sw $a2, 0xc($v0)
    g_00214418 = 0;  // Global at 0x00214418                    // 0x0015c148: sw $zero, 0x10($v0)
    v1 = local_c0;                                              // 0x0015c14c: lw $v1, 0xc0($sp)
    if (fp == t0) goto label_0x15c240;                          // 0x0015c150: beq $fp, $t0, 0x15c240
    g_00214424 = v1;  // Global at 0x00214424                   // 0x0015c154: sw $v1, 0x1c($v0)
    v0 = (fp < 3) ? 1 : 0;                                      // 0x0015c158: slti $v0, $fp, 3
    if (v0 == 0) goto label_0x15c178;                           // 0x0015c15c: beqz $v0, 0x15c178
    v0 = 3;                                                     // 0x0015c160: addiu $v0, $zero, 3
    v0 = 1;                                                     // 0x0015c164: addiu $v0, $zero, 1
    if (fp == v0) goto label_0x15c188;                          // 0x0015c168: beq $fp, $v0, 0x15c188
    v1 = 0x26 << 16;                                            // 0x0015c16c: lui $v1, 0x26
    goto label_0x15c3d8;                                        // 0x0015c170: b 0x15c3d8
    v0 = 0x21 << 16;                                            // 0x0015c174: lui $v0, 0x21
label_0x15c178:
    if (fp == v0) goto label_0x15c2f8;                          // 0x0015c178: beq $fp, $v0, 0x15c2f8
    v1 = 0x26 << 16;                                            // 0x0015c17c: lui $v1, 0x26
    goto label_0x15c3d8;                                        // 0x0015c180: b 0x15c3d8
    v0 = 0x21 << 16;                                            // 0x0015c184: lui $v0, 0x21
label_0x15c188:
    v1 = 0x21 << 16;                                            // 0x0015c188: lui $v1, 0x21
    v1 = v1 + 0x4330;                                           // 0x0015c18c: addiu $v1, $v1, 0x4330
    v0 = v1 & 7;                                                // 0x0015c190: andi $v0, $v1, 7
    if (v0 == 0) goto label_0x15c200;                           // 0x0015c194: beqz $v0, 0x15c200
    v0 = v1 + 0x40;                                             // 0x0015c19c: addiu $v0, $v1, 0x40
label_0x15c1a0:
    v1 = v1 + 0x20;                                             // 0x0015c1e0: addiu $v1, $v1, 0x20
    /* nop */                                                   // 0x0015c1e4: nop 
    /* nop */                                                   // 0x0015c1e8: nop 
    if (v1 != v0) goto label_0x15c1a0;                          // 0x0015c1ec: bne $v1, $v0, 0x15c1a0
    a1 = a1 + 0x20;                                             // 0x0015c1f0: addiu $a1, $a1, 0x20
    goto label_0x15c3ac;                                        // 0x0015c1f4: b 0x15c3ac
    v0 = g_00259c90;  // Global at 0x00259c90                   // 0x0015c1f8: lw $v0, -0x6370($s0)
    /* nop */                                                   // 0x0015c1fc: nop 
label_0x15c200:
    v0 = v1 + 0x40;                                             // 0x0015c200: addiu $v0, $v1, 0x40
label_0x15c204:
    v1 = v1 + 0x20;                                             // 0x0015c224: addiu $v1, $v1, 0x20
    /* nop */                                                   // 0x0015c228: nop 
    /* nop */                                                   // 0x0015c22c: nop 
    if (v1 != v0) goto label_0x15c204;                          // 0x0015c230: bne $v1, $v0, 0x15c204
    a1 = a1 + 0x20;                                             // 0x0015c234: addiu $a1, $a1, 0x20
    goto label_0x15c3ac;                                        // 0x0015c238: b 0x15c3ac
    v0 = g_00259c90;  // Global at 0x00259c90                   // 0x0015c23c: lw $v0, -0x6370($s0)
label_0x15c240:
    v1 = 0x21 << 16;                                            // 0x0015c240: lui $v1, 0x21
    v1 = v1 + 0x4378;                                           // 0x0015c244: addiu $v1, $v1, 0x4378
    v0 = v1 & 7;                                                // 0x0015c248: andi $v0, $v1, 7
    if (v0 == 0) goto label_0x15c2b8;                           // 0x0015c24c: beqz $v0, 0x15c2b8
    v0 = v1 + 0x40;                                             // 0x0015c254: addiu $v0, $v1, 0x40
label_0x15c258:
    v1 = v1 + 0x20;                                             // 0x0015c298: addiu $v1, $v1, 0x20
    /* nop */                                                   // 0x0015c29c: nop 
    /* nop */                                                   // 0x0015c2a0: nop 
    if (v1 != v0) goto label_0x15c258;                          // 0x0015c2a4: bne $v1, $v0, 0x15c258
    a1 = a1 + 0x20;                                             // 0x0015c2a8: addiu $a1, $a1, 0x20
    goto label_0x15c3ac;                                        // 0x0015c2ac: b 0x15c3ac
    v0 = g_00259c90;  // Global at 0x00259c90                   // 0x0015c2b0: lw $v0, -0x6370($s0)
    /* nop */                                                   // 0x0015c2b4: nop 
label_0x15c2b8:
    v0 = v1 + 0x40;                                             // 0x0015c2b8: addiu $v0, $v1, 0x40
label_0x15c2bc:
    v1 = v1 + 0x20;                                             // 0x0015c2dc: addiu $v1, $v1, 0x20
    /* nop */                                                   // 0x0015c2e0: nop 
    /* nop */                                                   // 0x0015c2e4: nop 
    if (v1 != v0) goto label_0x15c2bc;                          // 0x0015c2e8: bne $v1, $v0, 0x15c2bc
    a1 = a1 + 0x20;                                             // 0x0015c2ec: addiu $a1, $a1, 0x20
    goto label_0x15c3ac;                                        // 0x0015c2f0: b 0x15c3ac
    v0 = g_00259c90;  // Global at 0x00259c90                   // 0x0015c2f4: lw $v0, -0x6370($s0)
label_0x15c2f8:
    v1 = 0x21 << 16;                                            // 0x0015c2f8: lui $v1, 0x21
    v1 = v1 + 0x43c0;                                           // 0x0015c2fc: addiu $v1, $v1, 0x43c0
    v0 = v1 & 7;                                                // 0x0015c300: andi $v0, $v1, 7
    if (v0 == 0) goto label_0x15c370;                           // 0x0015c304: beqz $v0, 0x15c370
    v0 = v1 + 0x40;                                             // 0x0015c30c: addiu $v0, $v1, 0x40
label_0x15c310:
    v1 = v1 + 0x20;                                             // 0x0015c350: addiu $v1, $v1, 0x20
    /* nop */                                                   // 0x0015c354: nop 
    /* nop */                                                   // 0x0015c358: nop 
    if (v1 != v0) goto label_0x15c310;                          // 0x0015c35c: bne $v1, $v0, 0x15c310
    a1 = a1 + 0x20;                                             // 0x0015c360: addiu $a1, $a1, 0x20
    goto label_0x15c3ac;                                        // 0x0015c364: b 0x15c3ac
    v0 = g_00259c90;  // Global at 0x00259c90                   // 0x0015c368: lw $v0, -0x6370($s0)
    /* nop */                                                   // 0x0015c36c: nop 
label_0x15c370:
    v0 = v1 + 0x40;                                             // 0x0015c370: addiu $v0, $v1, 0x40
label_0x15c374:
    v1 = v1 + 0x20;                                             // 0x0015c394: addiu $v1, $v1, 0x20
    /* nop */                                                   // 0x0015c398: nop 
    /* nop */                                                   // 0x0015c39c: nop 
    if (v1 != v0) goto label_0x15c374;                          // 0x0015c3a0: bne $v1, $v0, 0x15c374
    a1 = a1 + 0x20;                                             // 0x0015c3a4: addiu $a1, $a1, 0x20
    v0 = g_00259c90;  // Global at 0x00259c90                   // 0x0015c3a8: lw $v0, -0x6370($s0)
label_0x15c3ac:
    a0 = 0x800;                                                 // 0x0015c3ac: addiu $a0, $zero, 0x800
    a3 = g_00214400;  // Global at 0x00214400                   // 0x0015c3b0: lw $a3, 0($v1)
    g_00259de4 = a3;  // Global at 0x00259de4                   // 0x0015c3b4: sw $a3, 0($a1)
    *(uint32_t*)((s6) + 0x130) = v0;                            // 0x0015c3b8: sw $v0, 0x130($s6)
    v0 = 0x26 << 16;                                            // 0x0015c3bc: lui $v0, 0x26
    v1 = g_00259c94;  // Global at 0x00259c94                   // 0x0015c3c0: lw $v1, -0x636c($v0)
    *(uint32_t*)((s6) + 0x138) = a0;                            // 0x0015c3c4: sw $a0, 0x138($s6)
    v1 = v1 + -0x800;                                           // 0x0015c3c8: addiu $v1, $v1, -0x800
    *(uint32_t*)((s6) + 0x134) = v1;                            // 0x0015c3cc: sw $v1, 0x134($s6)
    v1 = 0x26 << 16;                                            // 0x0015c3d0: lui $v1, 0x26
    v0 = 0x21 << 16;                                            // 0x0015c3d4: lui $v0, 0x21
label_0x15c3d8:
    s2 = v1 + -0x6368;                                          // 0x0015c3d8: addiu $s2, $v1, -0x6368
    v1 = g_0021444c;  // Global at 0x0021444c                   // 0x0015c3dc: lw $v1, 0x444c($v0)
    a0 = g_00259c98;  // Global at 0x00259c98                   // 0x0015c3e0: lw $a0, 0($s2)
    if (a0 == 0) goto label_0x15c404;                           // 0x0015c3e4: beqz $a0, 0x15c404
    local_28 = v1;                                              // 0x0015c3e8: sw $v1, 0x28($sp)
    /* divide: a0 / v1 -> hi:lo */                              // 0x0015c3ec: div $zero, $a0, $v1
    /* beqzl $v1, 0x15c3f8 */                                   // 0x0015c3f0: beqzl $v1, 0x15c3f8
    /* break (trap) */                                          // 0x0015c3f4: break 0, 7
    /* mfhi $v0 */                                              // 0x0015c3f8
    v0 = a0 - v0;                                               // 0x0015c3fc: subu $v0, $a0, $v0
    g_00259c98 = v0;  // Global at 0x00259c98                   // 0x0015c400: sw $v0, 0($s2)
label_0x15c404:
    func_0015ba80();  // 15ba80                                // 0x0015c404: jal 0x15ba80
    a0 = *(int32_t*)((s7) + 0x24);                              // 0x0015c408: lw $a0, 0x24($s7)
    a3 = g_00259c98;  // Global at 0x00259c98                   // 0x0015c40c: lw $a3, 0($s2)
    a2 = sp + 0x50;                                             // 0x0015c410: addiu $a2, $sp, 0x50
    t2 = sp + 0x60;                                             // 0x0015c414: addiu $t2, $sp, 0x60
    v1 = 0x26 << 16;                                            // 0x0015c418: lui $v1, 0x26
    a1 = 0x26 << 16;                                            // 0x0015c41c: lui $a1, 0x26
    t0 = g_00259c9c;  // Global at 0x00259c9c                   // 0x0015c420: lw $t0, -0x6364($v1)
    a0 = s3 + 0x4408;                                           // 0x0015c424: addiu $a0, $s3, 0x4408
    v1 = g_00259ca0;  // Global at 0x00259ca0                   // 0x0015c428: lw $v1, -0x6360($a1)
    t2 = local_b8;                                              // 0x0015c434: lw $t2, 0xb8($sp)
    t1 = local_a0;                                              // 0x0015c438: lw $t1, 0xa0($sp)
    local_4 = t2;                                               // 0x0015c43c: sw $t2, 4($sp)
    local_8 = a3;                                               // 0x0015c440: sw $a3, 8($sp)
    local_c = t0;                                               // 0x0015c444: sw $t0, 0xc($sp)
    local_10 = v1;                                              // 0x0015c448: sw $v1, 0x10($sp)
    a3 = local_c4;                                              // 0x0015c44c: lw $a3, 0xc4($sp)
    v1 = local_c0;                                              // 0x0015c450: lw $v1, 0xc0($sp)
    t0 = local_c8;                                              // 0x0015c454: lw $t0, 0xc8($sp)
    t2 = local_cc;                                              // 0x0015c458: lw $t2, 0xcc($sp)
    local_38 = v0;                                              // 0x0015c45c: sw $v0, 0x38($sp)
    local_2c = v1;                                              // 0x0015c460: sw $v1, 0x2c($sp)
    local_30 = a3;                                              // 0x0015c464: sw $a3, 0x30($sp)
    local_34 = t0;                                              // 0x0015c468: sw $t0, 0x34($sp)
    local_3c = t2;                                              // 0x0015c46c: sw $t2, 0x3c($sp)
    func_0016b968();  // 16b968                                // 0x0015c470: jal 0x16b968
    local_40 = t1;                                              // 0x0015c474: sw $t1, 0x40($sp)
    v0 = 1;                                                     // 0x0015c478: addiu $v0, $zero, 1
    if (fp != v0) goto label_0x15c48c;                          // 0x0015c47c: bne $fp, $v0, 0x15c48c
    /* nop */                                                   // 0x0015c480: nop 
    func_001645c0();  // 1645c0                                // 0x0015c484: jal 0x1645c0
    a0 = s4 + 0x4430;                                           // 0x0015c488: addiu $a0, $s4, 0x4430
label_0x15c48c:
    func_001711e0();  // 1711e0                                // 0x0015c48c: jal 0x1711e0
    a0 = 1;                                                     // 0x0015c490: addiu $a0, $zero, 1
    func_00173178();  // 173178                                // 0x0015c498: jal 0x173178
    if (s0 != 0) goto label_0x15c4c0;                           // 0x0015c4a4: bnez $s0, 0x15c4c0
    a1 = 0x16 << 16;                                            // 0x0015c4a8: lui $a1, 0x16
    func_0015e7b0();  // 15e7b0                                // 0x0015c4ac: jal 0x15e7b0
    a0 = -0x131;                                                // 0x0015c4b0: addiu $a0, $zero, -0x131
    a0 = 0x22 << 16;                                            // 0x0015c4b4: lui $a0, 0x22
    goto label_0x15c4e8;                                        // 0x0015c4b8: b 0x15c4e8
    a0 = &str_00227038;  // "E20010703D mwPlyCreateSofdec: set errcb" // 0x0015c4bc: addiu $a0, $a0, 0x7038
label_0x15c4c0:
    a1 = a1 + -0x1738;                                          // 0x0015c4c4: addiu $a1, $a1, -0x1738
    func_00169980();  // 169980                                // 0x0015c4c8: jal 0x169980
    /* beqzl $v0, 0x15c4f8 */                                   // 0x0015c4d0: beqzl $v0, 0x15c4f8
    v0 = local_d4;                                              // 0x0015c4d4: lw $v0, 0xd4($sp)
    func_0015e7b0();  // 15e7b0                                // 0x0015c4d8: jal 0x15e7b0
    a0 = -0x12f;                                                // 0x0015c4dc: addiu $a0, $zero, -0x12f
    a0 = 0x22 << 16;                                            // 0x0015c4e0: lui $a0, 0x22
    a0 = &str_00227068;  // "E02120501: Internal Error: mwsfcre_AttachPicUsrBuf()." // 0x0015c4e4: addiu $a0, $a0, 0x7068
label_0x15c4e8:
    func_00163410();  // 163410                                // 0x0015c4e8: jal 0x163410
    /* nop */                                                   // 0x0015c4ec: nop 
    goto label_0x15c51c;                                        // 0x0015c4f0: b 0x15c51c
    a2 = 0x800;                                                 // 0x0015c4fc: addiu $a2, $zero, 0x800
    a3 = 0x40;                                                  // 0x0015c500: addiu $a3, $zero, 0x40
    *(uint32_t*)((s6) + 0x110) = v0;                            // 0x0015c504: sw $v0, 0x110($s6)
    v1 = local_d0;                                              // 0x0015c508: lw $v1, 0xd0($sp)
    *(uint32_t*)((s6) + 0x114) = v1;                            // 0x0015c50c: sw $v1, 0x114($s6)
    func_0015c550();  // 15c550                                // 0x0015c510: jal 0x15c550
    a1 = local_bc;                                              // 0x0015c514: lw $a1, 0xbc($sp)
label_0x15c51c:
    return;                                                     // 0x0015c544: jr $ra
    sp = sp + 0x130;                                            // 0x0015c548: addiu $sp, $sp, 0x130
}