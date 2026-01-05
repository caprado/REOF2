void func_001d4140() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0xffff << 16;                                          // 0x001d4140: lui $v0, 0xffff
    sp = sp + -0x10;                                            // 0x001d4144: addiu $sp, $sp, -0x10
    v0 = a1 & v0;                                               // 0x001d4148: and $v0, $a1, $v0
    v1 = (a0 < 0x100) ? 1 : 0;                                  // 0x001d414c: slti $v1, $a0, 0x100
    if (v1 != 0) goto label_0x1d41a0;                           // 0x001d4154: bnez $v1, 0x1d41a0
    v0 = (unsigned)v0 >> 0x10;                                  // 0x001d4158: srl $v0, $v0, 0x10
    at = (a0 < 0xff0) ? 1 : 0;                                  // 0x001d415c: slti $at, $a0, 0xff0
    if (at == 0) goto label_0x1d41a4;                           // 0x001d4160: beqz $at, 0x1d41a4
    v1 = (a0 < 0x1000) ? 1 : 0;                                 // 0x001d4164: slti $v1, $a0, 0x1000
    if (a2 != 0) goto label_0x1d4188;                           // 0x001d4168: bnez $a2, 0x1d4188
    v1 = a1 & 0xffff;                                           // 0x001d416c: andi $v1, $a1, 0xffff
    v1 = a1 & 0xffff;                                           // 0x001d4170: andi $v1, $a1, 0xffff
    v0 = gp + -0x7b38;                                          // 0x001d4174: addiu $v0, $gp, -0x7b38
    v1 = v1 << 2;                                               // 0x001d4178: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d417c: addu $v0, $v0, $v1
    goto label_0x1d4198;                                        // 0x001d4180: b 0x1d4198
    v0 = g_ffff0000;  // Global at 0xffff0000                   // 0x001d4184: lw $v0, 0($v0)
label_0x1d4188:
    v0 = gp + -0x7ae8;                                          // 0x001d4188: addiu $v0, $gp, -0x7ae8
    v1 = v1 << 2;                                               // 0x001d418c: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d4190: addu $v0, $v0, $v1
    v0 = g_ffff0000;  // Global at 0xffff0000                   // 0x001d4194: lw $v0, 0($v0)
label_0x1d4198:
    goto label_0x1d4a2c;                                        // 0x001d4198: b 0x1d4a2c
label_0x1d41a0:
    v1 = (a0 < 0x1000) ? 1 : 0;                                 // 0x001d41a0: slti $v1, $a0, 0x1000
label_0x1d41a4:
    if (v1 != 0) goto label_0x1d4270;                           // 0x001d41a4: bnez $v1, 0x1d4270
    v1 = (a0 < 0x1100) ? 1 : 0;                                 // 0x001d41a8: slti $v1, $a0, 0x1100
    at = (a0 < 0x1100) ? 1 : 0;                                 // 0x001d41ac: slti $at, $a0, 0x1100
    if (at == 0) goto label_0x1d4270;                           // 0x001d41b0: beqz $at, 0x1d4270
    /* nop */                                                   // 0x001d41b4: nop 
    v1 = a1 & 0x8000;                                           // 0x001d41b8: andi $v1, $a1, 0x8000
    if (v1 == 0) goto label_0x1d4208;                           // 0x001d41bc: beqz $v1, 0x1d4208
    /* nop */                                                   // 0x001d41c0: nop 
    if (a2 != 0) goto label_0x1d41ec;                           // 0x001d41c4: bnez $a2, 0x1d41ec
    a3 = 0x24 << 16;                                            // 0x001d41d0: lui $a3, 0x24
    a1 = a1 & 0xffff;                                           // 0x001d41d4: andi $a1, $a1, 0xffff
    func_001d3e40();  // 1d3e40                                // 0x001d41dc: jal 0x1d3e40
    a3 = &str_002472e8;  // "NPC\\N"                            // 0x001d41e0: addiu $a3, $a3, 0x72e8
    goto label_0x1d4200;                                        // 0x001d41e4: b 0x1d4200
    /* nop */                                                   // 0x001d41e8: nop 
label_0x1d41ec:
    a3 = 0x24 << 16;                                            // 0x001d41ec: lui $a3, 0x24
    a1 = a1 & 0xffff;                                           // 0x001d41f0: andi $a1, $a1, 0xffff
    func_001d3e40();  // 1d3e40                                // 0x001d41f8: jal 0x1d3e40
    a3 = &str_002472f8;  // "PL\\LOW\\P"                        // 0x001d41fc: addiu $a3, $a3, 0x72f8
label_0x1d4200:
    goto label_0x1d4a28;                                        // 0x001d4200: b 0x1d4a28
    /* nop */                                                   // 0x001d4204: nop 
label_0x1d4208:
    if (a2 != 0) goto label_0x1d422c;                           // 0x001d4208: bnez $a2, 0x1d422c
    a3 = 0x24 << 16;                                            // 0x001d4210: lui $a3, 0x24
    a1 = a1 & 0xffff;                                           // 0x001d4214: andi $a1, $a1, 0xffff
    func_001d3e40();  // 1d3e40                                // 0x001d421c: jal 0x1d3e40
    a3 = &str_00247300;  // "PL\\EP"                            // 0x001d4220: addiu $a3, $a3, 0x7300
    goto label_0x1d4a28;                                        // 0x001d4224: b 0x1d4a28
    /* nop */                                                   // 0x001d4228: nop 
label_0x1d422c:
    if (a3 != 0) goto label_0x1d4254;                           // 0x001d422c: bnez $a3, 0x1d4254
    a3 = 0x24 << 16;                                            // 0x001d4238: lui $a3, 0x24
    a1 = a1 & 0xffff;                                           // 0x001d423c: andi $a1, $a1, 0xffff
    func_001d3e40();  // 1d3e40                                // 0x001d4244: jal 0x1d3e40
    a3 = a3 + 0x7310;                                           // 0x001d4248: addiu $a3, $a3, 0x7310
    goto label_0x1d4268;                                        // 0x001d424c: b 0x1d4268
    /* nop */                                                   // 0x001d4250: nop 
label_0x1d4254:
    a3 = 0x24 << 16;                                            // 0x001d4254: lui $a3, 0x24
    a1 = a1 & 0xffff;                                           // 0x001d4258: andi $a1, $a1, 0xffff
    func_001d3e40();  // 1d3e40                                // 0x001d4260: jal 0x1d3e40
    a3 = &str_00247318;  // "PL\\HIGH\\HP"                      // 0x001d4264: addiu $a3, $a3, 0x7318
label_0x1d4268:
    goto label_0x1d4a28;                                        // 0x001d4268: b 0x1d4a28
    /* nop */                                                   // 0x001d426c: nop 
label_0x1d4270:
    if (v1 != 0) goto label_0x1d42bc;                           // 0x001d4270: bnez $v1, 0x1d42bc
    at = (a0 < 0x1200) ? 1 : 0;                                 // 0x001d4274: slti $at, $a0, 0x1200
    if (at == 0) goto label_0x1d42c0;                           // 0x001d4278: beqz $at, 0x1d42c0
    v1 = (a0 < 0x1200) ? 1 : 0;                                 // 0x001d427c: slti $v1, $a0, 0x1200
    if (a2 != 0) goto label_0x1d42a4;                           // 0x001d4280: bnez $a2, 0x1d42a4
    a1 = a1 & 0xffff;                                           // 0x001d428c: andi $a1, $a1, 0xffff
    a2 = 0x24 << 16;                                            // 0x001d4290: lui $a2, 0x24
    func_001d3da0();  // 1d3da0                                // 0x001d4294: jal 0x1d3da0
    a2 = &str_00247320;  // "PL\\HP"                            // 0x001d4298: addiu $a2, $a2, 0x7320
    goto label_0x1d42b4;                                        // 0x001d429c: b 0x1d42b4
    /* nop */                                                   // 0x001d42a0: nop 
label_0x1d42a4:
    a1 = a1 & 0xffff;                                           // 0x001d42a4: andi $a1, $a1, 0xffff
    a2 = 0x24 << 16;                                            // 0x001d42a8: lui $a2, 0x24
    func_001d3da0();  // 1d3da0                                // 0x001d42ac: jal 0x1d3da0
    a2 = &str_00247330;  // "NPC\\HIGH\\HN"                     // 0x001d42b0: addiu $a2, $a2, 0x7330
label_0x1d42b4:
    goto label_0x1d4a28;                                        // 0x001d42b4: b 0x1d4a28
    /* nop */                                                   // 0x001d42b8: nop 
label_0x1d42bc:
    v1 = (a0 < 0x1200) ? 1 : 0;                                 // 0x001d42bc: slti $v1, $a0, 0x1200
label_0x1d42c0:
    if (v1 != 0) goto label_0x1d4314;                           // 0x001d42c0: bnez $v1, 0x1d4314
    v1 = (a0 < 0x1300) ? 1 : 0;                                 // 0x001d42c4: slti $v1, $a0, 0x1300
    at = (a0 < 0x1300) ? 1 : 0;                                 // 0x001d42c8: slti $at, $a0, 0x1300
    if (at == 0) goto label_0x1d4314;                           // 0x001d42cc: beqz $at, 0x1d4314
    /* nop */                                                   // 0x001d42d0: nop 
    if (a2 != 0) goto label_0x1d42f8;                           // 0x001d42d4: bnez $a2, 0x1d42f8
    v1 = a1 & 0xffff;                                           // 0x001d42d8: andi $v1, $a1, 0xffff
    v1 = a1 & 0xffff;                                           // 0x001d42dc: andi $v1, $a1, 0xffff
    v0 = 0x22 << 16;                                            // 0x001d42e0: lui $v0, 0x22
    v0 = v0 + -0xbe0;                                           // 0x001d42e4: addiu $v0, $v0, -0xbe0
    v1 = v1 << 2;                                               // 0x001d42e8: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d42ec: addu $v0, $v0, $v1
    goto label_0x1d430c;                                        // 0x001d42f0: b 0x1d430c
    v0 = g_0021f420;  // Global at 0x0021f420                   // 0x001d42f4: lw $v0, 0($v0)
label_0x1d42f8:
    v0 = 0x22 << 16;                                            // 0x001d42f8: lui $v0, 0x22
    v0 = v0 + -0x8f0;                                           // 0x001d42fc: addiu $v0, $v0, -0x8f0
    v1 = v1 << 2;                                               // 0x001d4300: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d4304: addu $v0, $v0, $v1
    v0 = g_0021f710;  // Global at 0x0021f710                   // 0x001d4308: lw $v0, 0($v0)
label_0x1d430c:
    goto label_0x1d4a28;                                        // 0x001d430c: b 0x1d4a28
    /* nop */                                                   // 0x001d4310: nop 
label_0x1d4314:
    if (v1 != 0) goto label_0x1d4364;                           // 0x001d4314: bnez $v1, 0x1d4364
    at = (a0 < 0x1400) ? 1 : 0;                                 // 0x001d4318: slti $at, $a0, 0x1400
    if (at == 0) goto label_0x1d4368;                           // 0x001d431c: beqz $at, 0x1d4368
    v1 = (a0 < 0x1400) ? 1 : 0;                                 // 0x001d4320: slti $v1, $a0, 0x1400
    if (a2 != 0) goto label_0x1d4348;                           // 0x001d4324: bnez $a2, 0x1d4348
    v1 = a1 & 0xffff;                                           // 0x001d4328: andi $v1, $a1, 0xffff
    v1 = a1 & 0xffff;                                           // 0x001d432c: andi $v1, $a1, 0xffff
    v0 = 0x22 << 16;                                            // 0x001d4330: lui $v0, 0x22
    v0 = v0 + -0x980;                                           // 0x001d4334: addiu $v0, $v0, -0x980
    v1 = v1 << 2;                                               // 0x001d4338: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d433c: addu $v0, $v0, $v1
    goto label_0x1d435c;                                        // 0x001d4340: b 0x1d435c
    v0 = g_0021f680;  // Global at 0x0021f680                   // 0x001d4344: lw $v0, 0($v0)
label_0x1d4348:
    v0 = 0x22 << 16;                                            // 0x001d4348: lui $v0, 0x22
    v0 = v0 + -0x660;                                           // 0x001d434c: addiu $v0, $v0, -0x660
    v1 = v1 << 2;                                               // 0x001d4350: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d4354: addu $v0, $v0, $v1
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d4358: lw $v0, 0($v0)
label_0x1d435c:
    goto label_0x1d4a28;                                        // 0x001d435c: b 0x1d4a28
    /* nop */                                                   // 0x001d4360: nop 
label_0x1d4364:
    v1 = (a0 < 0x1400) ? 1 : 0;                                 // 0x001d4364: slti $v1, $a0, 0x1400
label_0x1d4368:
    if (v1 != 0) goto label_0x1d43b8;                           // 0x001d4368: bnez $v1, 0x1d43b8
    v1 = (a0 < 0x1600) ? 1 : 0;                                 // 0x001d436c: slti $v1, $a0, 0x1600
    at = (a0 < 0x1600) ? 1 : 0;                                 // 0x001d4370: slti $at, $a0, 0x1600
    if (at == 0) goto label_0x1d43b8;                           // 0x001d4374: beqz $at, 0x1d43b8
    /* nop */                                                   // 0x001d4378: nop 
    if (a2 != 0) goto label_0x1d43a0;                           // 0x001d437c: bnez $a2, 0x1d43a0
    a1 = a1 & 0xffff;                                           // 0x001d4388: andi $a1, $a1, 0xffff
    a2 = 0x24 << 16;                                            // 0x001d438c: lui $a2, 0x24
    func_001d3da0();  // 1d3da0                                // 0x001d4390: jal 0x1d3da0
    a2 = &str_002472e8;  // "NPC\\N"                            // 0x001d4394: addiu $a2, $a2, 0x72e8
    goto label_0x1d43b0;                                        // 0x001d4398: b 0x1d43b0
    /* nop */                                                   // 0x001d439c: nop 
label_0x1d43a0:
    a1 = a1 & 0xffff;                                           // 0x001d43a0: andi $a1, $a1, 0xffff
    a2 = 0x24 << 16;                                            // 0x001d43a4: lui $a2, 0x24
    func_001d3da0();  // 1d3da0                                // 0x001d43a8: jal 0x1d3da0
    a2 = &str_002472f8;  // "PL\\LOW\\P"                        // 0x001d43ac: addiu $a2, $a2, 0x72f8
label_0x1d43b0:
    goto label_0x1d4a28;                                        // 0x001d43b0: b 0x1d4a28
    /* nop */                                                   // 0x001d43b4: nop 
label_0x1d43b8:
    if (v1 != 0) goto label_0x1d4404;                           // 0x001d43b8: bnez $v1, 0x1d4404
    at = (a0 < 0x1800) ? 1 : 0;                                 // 0x001d43bc: slti $at, $a0, 0x1800
    if (at == 0) goto label_0x1d4408;                           // 0x001d43c0: beqz $at, 0x1d4408
    v1 = (a0 < 0x1800) ? 1 : 0;                                 // 0x001d43c4: slti $v1, $a0, 0x1800
    if (a2 != 0) goto label_0x1d43ec;                           // 0x001d43c8: bnez $a2, 0x1d43ec
    a1 = a1 & 0xffff;                                           // 0x001d43d4: andi $a1, $a1, 0xffff
    a2 = 0x24 << 16;                                            // 0x001d43d8: lui $a2, 0x24
    func_001d3da0();  // 1d3da0                                // 0x001d43dc: jal 0x1d3da0
    a2 = &str_00247338;  // "NPC\\HN"                           // 0x001d43e0: addiu $a2, $a2, 0x7338
    goto label_0x1d43fc;                                        // 0x001d43e4: b 0x1d43fc
    /* nop */                                                   // 0x001d43e8: nop 
label_0x1d43ec:
    a1 = a1 & 0xffff;                                           // 0x001d43ec: andi $a1, $a1, 0xffff
    a2 = 0x24 << 16;                                            // 0x001d43f0: lui $a2, 0x24
    func_001d3da0();  // 1d3da0                                // 0x001d43f4: jal 0x1d3da0
    a2 = &str_00247348;  // "MOVIE64.TM2"                       // 0x001d43f8: addiu $a2, $a2, 0x7348
label_0x1d43fc:
    goto label_0x1d4a28;                                        // 0x001d43fc: b 0x1d4a28
    /* nop */                                                   // 0x001d4400: nop 
label_0x1d4404:
    v1 = (a0 < 0x1800) ? 1 : 0;                                 // 0x001d4404: slti $v1, $a0, 0x1800
label_0x1d4408:
    if (v1 != 0) goto label_0x1d442c;                           // 0x001d4408: bnez $v1, 0x1d442c
    v1 = (a0 < 0x2100) ? 1 : 0;                                 // 0x001d440c: slti $v1, $a0, 0x2100
    at = (a0 < 0x2000) ? 1 : 0;                                 // 0x001d4410: slti $at, $a0, 0x2000
    if (at == 0) goto label_0x1d442c;                           // 0x001d4414: beqz $at, 0x1d442c
    /* nop */                                                   // 0x001d4418: nop 
    func_001d3f60();  // 1d3f60                                // 0x001d441c: jal 0x1d3f60
    goto label_0x1d4a28;                                        // 0x001d4424: b 0x1d4a28
    /* nop */                                                   // 0x001d4428: nop 
label_0x1d442c:
    if (v1 != 0) goto label_0x1d4450;                           // 0x001d442c: bnez $v1, 0x1d4450
    at = (a0 < 0x2400) ? 1 : 0;                                 // 0x001d4430: slti $at, $a0, 0x2400
    if (at == 0) goto label_0x1d4454;                           // 0x001d4434: beqz $at, 0x1d4454
    v1 = (a0 < 0x2000) ? 1 : 0;                                 // 0x001d4438: slti $v1, $a0, 0x2000
    func_001d3fe0();  // 1d3fe0                                // 0x001d4440: jal 0x1d3fe0
    a1 = a1 & 0xffff;                                           // 0x001d4444: andi $a1, $a1, 0xffff
    goto label_0x1d4a28;                                        // 0x001d4448: b 0x1d4a28
    /* nop */                                                   // 0x001d444c: nop 
label_0x1d4450:
    v1 = (a0 < 0x2000) ? 1 : 0;                                 // 0x001d4450: slti $v1, $a0, 0x2000
label_0x1d4454:
    if (v1 != 0) goto label_0x1d447c;                           // 0x001d4454: bnez $v1, 0x1d447c
    v1 = (a0 < 0x2400) ? 1 : 0;                                 // 0x001d4458: slti $v1, $a0, 0x2400
    at = (a0 < 0x2100) ? 1 : 0;                                 // 0x001d445c: slti $at, $a0, 0x2100
    if (at == 0) goto label_0x1d447c;                           // 0x001d4460: beqz $at, 0x1d447c
    /* nop */                                                   // 0x001d4464: nop 
    a0 = a1 & 0xffff;                                           // 0x001d4468: andi $a0, $a1, 0xffff
    func_001d4060();  // 1d4060                                // 0x001d446c: jal 0x1d4060
    goto label_0x1d4a28;                                        // 0x001d4474: b 0x1d4a28
    /* nop */                                                   // 0x001d4478: nop 
label_0x1d447c:
    if (v1 != 0) goto label_0x1d44a0;                           // 0x001d447c: bnez $v1, 0x1d44a0
    at = (a0 < 0x2500) ? 1 : 0;                                 // 0x001d4480: slti $at, $a0, 0x2500
    if (at == 0) goto label_0x1d44a4;                           // 0x001d4484: beqz $at, 0x1d44a4
    v1 = (a0 < 0x2a00) ? 1 : 0;                                 // 0x001d4488: slti $v1, $a0, 0x2a00
    a0 = a1 & 0xffff;                                           // 0x001d448c: andi $a0, $a1, 0xffff
    func_001d40d0();  // 1d40d0                                // 0x001d4490: jal 0x1d40d0
    goto label_0x1d4a28;                                        // 0x001d4498: b 0x1d4a28
    /* nop */                                                   // 0x001d449c: nop 
label_0x1d44a0:
    v1 = (a0 < 0x2a00) ? 1 : 0;                                 // 0x001d44a0: slti $v1, $a0, 0x2a00
label_0x1d44a4:
    if (v1 != 0) goto label_0x1d49ac;                           // 0x001d44a4: bnez $v1, 0x1d49ac
    at = (a0 < 0x3000) ? 1 : 0;                                 // 0x001d44a8: slti $at, $a0, 0x3000
    if (at == 0) goto label_0x1d49ac;                           // 0x001d44ac: beqz $at, 0x1d49ac
    /* nop */                                                   // 0x001d44b0: nop 
    if (a2 != 0) goto label_0x1d4734;                           // 0x001d44b4: bnez $a2, 0x1d4734
    v1 = 0x29;                                                  // 0x001d44b8: addiu $v1, $zero, 0x29
    v1 = 0x29;                                                  // 0x001d44bc: addiu $v1, $zero, 0x29
    if (v0 == v1) goto label_0x1d470c;                          // 0x001d44c0: beq $v0, $v1, 0x1d470c
    v1 = a1 & 0xffff;                                           // 0x001d44c4: andi $v1, $a1, 0xffff
    v1 = 0x28;                                                  // 0x001d44c8: addiu $v1, $zero, 0x28
    if (v0 == v1) goto label_0x1d46f8;                          // 0x001d44cc: beq $v0, $v1, 0x1d46f8
    v1 = a1 & 0xffff;                                           // 0x001d44d0: andi $v1, $a1, 0xffff
    v1 = 0x23;                                                  // 0x001d44d4: addiu $v1, $zero, 0x23
    if (v0 == v1) goto label_0x1d46e4;                          // 0x001d44d8: beq $v0, $v1, 0x1d46e4
    v1 = a1 & 0xffff;                                           // 0x001d44dc: andi $v1, $a1, 0xffff
    v1 = 0x1e;                                                  // 0x001d44e0: addiu $v1, $zero, 0x1e
    if (v0 == v1) goto label_0x1d46d0;                          // 0x001d44e4: beq $v0, $v1, 0x1d46d0
    v1 = a1 & 0xffff;                                           // 0x001d44e8: andi $v1, $a1, 0xffff
    v1 = 0x1d;                                                  // 0x001d44ec: addiu $v1, $zero, 0x1d
    if (v0 == v1) goto label_0x1d46bc;                          // 0x001d44f0: beq $v0, $v1, 0x1d46bc
    v1 = a1 & 0xffff;                                           // 0x001d44f4: andi $v1, $a1, 0xffff
    v1 = 0x1c;                                                  // 0x001d44f8: addiu $v1, $zero, 0x1c
    if (v0 == v1) goto label_0x1d46a8;                          // 0x001d44fc: beq $v0, $v1, 0x1d46a8
    v1 = a1 & 0xffff;                                           // 0x001d4500: andi $v1, $a1, 0xffff
    v1 = 0x1b;                                                  // 0x001d4504: addiu $v1, $zero, 0x1b
    if (v0 == v1) goto label_0x1d4694;                          // 0x001d4508: beq $v0, $v1, 0x1d4694
    v1 = a1 & 0xffff;                                           // 0x001d450c: andi $v1, $a1, 0xffff
    v1 = 0x1a;                                                  // 0x001d4510: addiu $v1, $zero, 0x1a
    if (v0 == v1) goto label_0x1d4680;                          // 0x001d4514: beq $v0, $v1, 0x1d4680
    v1 = a1 & 0xffff;                                           // 0x001d4518: andi $v1, $a1, 0xffff
    v1 = 0x18;                                                  // 0x001d451c: addiu $v1, $zero, 0x18
    if (v0 == v1) goto label_0x1d466c;                          // 0x001d4520: beq $v0, $v1, 0x1d466c
    v1 = a1 & 0xffff;                                           // 0x001d4524: andi $v1, $a1, 0xffff
    v1 = 0x17;                                                  // 0x001d4528: addiu $v1, $zero, 0x17
    if (v0 == v1) goto label_0x1d4658;                          // 0x001d452c: beq $v0, $v1, 0x1d4658
    v1 = a1 & 0xffff;                                           // 0x001d4530: andi $v1, $a1, 0xffff
    v1 = 0x16;                                                  // 0x001d4534: addiu $v1, $zero, 0x16
    if (v0 == v1) goto label_0x1d4644;                          // 0x001d4538: beq $v0, $v1, 0x1d4644
    v1 = a1 & 0xffff;                                           // 0x001d453c: andi $v1, $a1, 0xffff
    v1 = 0x15;                                                  // 0x001d4540: addiu $v1, $zero, 0x15
    if (v0 == v1) goto label_0x1d4630;                          // 0x001d4544: beq $v0, $v1, 0x1d4630
    v1 = a1 & 0xffff;                                           // 0x001d4548: andi $v1, $a1, 0xffff
    v1 = 0x14;                                                  // 0x001d454c: addiu $v1, $zero, 0x14
    if (v0 == v1) goto label_0x1d461c;                          // 0x001d4550: beq $v0, $v1, 0x1d461c
    v1 = a1 & 0xffff;                                           // 0x001d4554: andi $v1, $a1, 0xffff
    v1 = 0xf;                                                   // 0x001d4558: addiu $v1, $zero, 0xf
    if (v0 == v1) goto label_0x1d4608;                          // 0x001d455c: beq $v0, $v1, 0x1d4608
    v1 = a1 & 0xffff;                                           // 0x001d4560: andi $v1, $a1, 0xffff
    v1 = 0xa;                                                   // 0x001d4564: addiu $v1, $zero, 0xa
    if (v0 == v1) goto label_0x1d45f4;                          // 0x001d4568: beq $v0, $v1, 0x1d45f4
    v1 = a1 & 0xffff;                                           // 0x001d456c: andi $v1, $a1, 0xffff
    v1 = 6;                                                     // 0x001d4570: addiu $v1, $zero, 6
    if (v0 == v1) goto label_0x1d45e0;                          // 0x001d4574: beq $v0, $v1, 0x1d45e0
    v1 = a1 & 0xffff;                                           // 0x001d4578: andi $v1, $a1, 0xffff
    v1 = 2;                                                     // 0x001d457c: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1d45cc;                          // 0x001d4580: beq $v0, $v1, 0x1d45cc
    v1 = a1 & 0xffff;                                           // 0x001d4584: andi $v1, $a1, 0xffff
    v1 = 1;                                                     // 0x001d4588: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1d45b8;                          // 0x001d458c: beq $v0, $v1, 0x1d45b8
    v1 = a1 & 0xffff;                                           // 0x001d4590: andi $v1, $a1, 0xffff
    if (v0 == 0) goto label_0x1d45a4;                           // 0x001d4594: beqz $v0, 0x1d45a4
    v1 = a1 & 0xffff;                                           // 0x001d4598: andi $v1, $a1, 0xffff
    goto label_0x1d4720;                                        // 0x001d459c: b 0x1d4720
    v1 = a1 & 0xffff;                                           // 0x001d45a0: andi $v1, $a1, 0xffff
label_0x1d45a4:
    v0 = gp + -0x7b40;                                          // 0x001d45a4: addiu $v0, $gp, -0x7b40
    v1 = v1 << 2;                                               // 0x001d45a8: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d45ac: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d45b0: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d45b4: lw $v0, 0($v0)
label_0x1d45b8:
    v0 = gp + -0x7b80;                                          // 0x001d45b8: addiu $v0, $gp, -0x7b80
    v1 = v1 << 2;                                               // 0x001d45bc: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d45c0: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d45c4: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d45c8: lw $v0, 0($v0)
label_0x1d45cc:
    v0 = gp + -0x7b7c;                                          // 0x001d45cc: addiu $v0, $gp, -0x7b7c
    v1 = v1 << 2;                                               // 0x001d45d0: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d45d4: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d45d8: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d45dc: lw $v0, 0($v0)
label_0x1d45e0:
    v0 = gp + -0x7b78;                                          // 0x001d45e0: addiu $v0, $gp, -0x7b78
    v1 = v1 << 2;                                               // 0x001d45e4: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d45e8: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d45ec: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d45f0: lw $v0, 0($v0)
label_0x1d45f4:
    v0 = gp + -0x7b74;                                          // 0x001d45f4: addiu $v0, $gp, -0x7b74
    v1 = v1 << 2;                                               // 0x001d45f8: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d45fc: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d4600: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d4604: lw $v0, 0($v0)
label_0x1d4608:
    v0 = gp + -0x7b70;                                          // 0x001d4608: addiu $v0, $gp, -0x7b70
    v1 = v1 << 2;                                               // 0x001d460c: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d4610: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d4614: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d4618: lw $v0, 0($v0)
label_0x1d461c:
    v0 = gp + -0x7b6c;                                          // 0x001d461c: addiu $v0, $gp, -0x7b6c
    v1 = v1 << 2;                                               // 0x001d4620: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d4624: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d4628: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d462c: lw $v0, 0($v0)
label_0x1d4630:
    v0 = gp + -0x7b68;                                          // 0x001d4630: addiu $v0, $gp, -0x7b68
    v1 = v1 << 2;                                               // 0x001d4634: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d4638: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d463c: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d4640: lw $v0, 0($v0)
label_0x1d4644:
    v0 = gp + -0x7b64;                                          // 0x001d4644: addiu $v0, $gp, -0x7b64
    v1 = v1 << 2;                                               // 0x001d4648: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d464c: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d4650: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d4654: lw $v0, 0($v0)
label_0x1d4658:
    v0 = gp + -0x7b60;                                          // 0x001d4658: addiu $v0, $gp, -0x7b60
    v1 = v1 << 2;                                               // 0x001d465c: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d4660: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d4664: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d4668: lw $v0, 0($v0)
label_0x1d466c:
    v0 = gp + -0x7b5c;                                          // 0x001d466c: addiu $v0, $gp, -0x7b5c
    v1 = v1 << 2;                                               // 0x001d4670: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d4674: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d4678: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d467c: lw $v0, 0($v0)
label_0x1d4680:
    v0 = gp + -0x7b58;                                          // 0x001d4680: addiu $v0, $gp, -0x7b58
    v1 = v1 << 2;                                               // 0x001d4684: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d4688: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d468c: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d4690: lw $v0, 0($v0)
label_0x1d4694:
    v0 = gp + -0x7b54;                                          // 0x001d4694: addiu $v0, $gp, -0x7b54
    v1 = v1 << 2;                                               // 0x001d4698: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d469c: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d46a0: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d46a4: lw $v0, 0($v0)
label_0x1d46a8:
    v0 = gp + -0x7b50;                                          // 0x001d46a8: addiu $v0, $gp, -0x7b50
    v1 = v1 << 2;                                               // 0x001d46ac: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d46b0: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d46b4: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d46b8: lw $v0, 0($v0)
label_0x1d46bc:
    v0 = gp + -0x7b4c;                                          // 0x001d46bc: addiu $v0, $gp, -0x7b4c
    v1 = v1 << 2;                                               // 0x001d46c0: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d46c4: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d46c8: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d46cc: lw $v0, 0($v0)
label_0x1d46d0:
    v0 = gp + -0x7b48;                                          // 0x001d46d0: addiu $v0, $gp, -0x7b48
    v1 = v1 << 2;                                               // 0x001d46d4: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d46d8: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d46dc: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d46e0: lw $v0, 0($v0)
label_0x1d46e4:
    v0 = gp + -0x7b44;                                          // 0x001d46e4: addiu $v0, $gp, -0x7b44
    v1 = v1 << 2;                                               // 0x001d46e8: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d46ec: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d46f0: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d46f4: lw $v0, 0($v0)
label_0x1d46f8:
    v0 = gp + -0x7b40;                                          // 0x001d46f8: addiu $v0, $gp, -0x7b40
    v1 = v1 << 2;                                               // 0x001d46fc: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d4700: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d4704: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d4708: lw $v0, 0($v0)
label_0x1d470c:
    v0 = gp + -0x7b3c;                                          // 0x001d470c: addiu $v0, $gp, -0x7b3c
    v1 = v1 << 2;                                               // 0x001d4710: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d4714: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d4718: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d471c: lw $v0, 0($v0)
label_0x1d4720:
    v0 = gp + -0x7b5c;                                          // 0x001d4720: addiu $v0, $gp, -0x7b5c
    v1 = v1 << 2;                                               // 0x001d4724: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d4728: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d472c: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d4730: lw $v0, 0($v0)
label_0x1d4734:
    if (v0 == v1) goto label_0x1d4980;                          // 0x001d4734: beq $v0, $v1, 0x1d4980
    /* nop */                                                   // 0x001d4738: nop 
    v1 = 0x28;                                                  // 0x001d473c: addiu $v1, $zero, 0x28
    if (v0 == v1) goto label_0x1d496c;                          // 0x001d4740: beq $v0, $v1, 0x1d496c
    v1 = a1 & 0xffff;                                           // 0x001d4744: andi $v1, $a1, 0xffff
    v1 = 0x23;                                                  // 0x001d4748: addiu $v1, $zero, 0x23
    if (v0 == v1) goto label_0x1d4958;                          // 0x001d474c: beq $v0, $v1, 0x1d4958
    v1 = a1 & 0xffff;                                           // 0x001d4750: andi $v1, $a1, 0xffff
    v1 = 0x1e;                                                  // 0x001d4754: addiu $v1, $zero, 0x1e
    if (v0 == v1) goto label_0x1d4944;                          // 0x001d4758: beq $v0, $v1, 0x1d4944
    v1 = a1 & 0xffff;                                           // 0x001d475c: andi $v1, $a1, 0xffff
    v1 = 0x1d;                                                  // 0x001d4760: addiu $v1, $zero, 0x1d
    if (v0 == v1) goto label_0x1d4930;                          // 0x001d4764: beq $v0, $v1, 0x1d4930
    v1 = a1 & 0xffff;                                           // 0x001d4768: andi $v1, $a1, 0xffff
    v1 = 0x1c;                                                  // 0x001d476c: addiu $v1, $zero, 0x1c
    if (v0 == v1) goto label_0x1d491c;                          // 0x001d4770: beq $v0, $v1, 0x1d491c
    v1 = a1 & 0xffff;                                           // 0x001d4774: andi $v1, $a1, 0xffff
    v1 = 0x1b;                                                  // 0x001d4778: addiu $v1, $zero, 0x1b
    if (v0 == v1) goto label_0x1d4908;                          // 0x001d477c: beq $v0, $v1, 0x1d4908
    v1 = a1 & 0xffff;                                           // 0x001d4780: andi $v1, $a1, 0xffff
    v1 = 0x1a;                                                  // 0x001d4784: addiu $v1, $zero, 0x1a
    if (v0 == v1) goto label_0x1d48f4;                          // 0x001d4788: beq $v0, $v1, 0x1d48f4
    v1 = a1 & 0xffff;                                           // 0x001d478c: andi $v1, $a1, 0xffff
    v1 = 0x18;                                                  // 0x001d4790: addiu $v1, $zero, 0x18
    if (v0 == v1) goto label_0x1d48e0;                          // 0x001d4794: beq $v0, $v1, 0x1d48e0
    v1 = a1 & 0xffff;                                           // 0x001d4798: andi $v1, $a1, 0xffff
    v1 = 0x17;                                                  // 0x001d479c: addiu $v1, $zero, 0x17
    if (v0 == v1) goto label_0x1d48cc;                          // 0x001d47a0: beq $v0, $v1, 0x1d48cc
    v1 = a1 & 0xffff;                                           // 0x001d47a4: andi $v1, $a1, 0xffff
    v1 = 0x16;                                                  // 0x001d47a8: addiu $v1, $zero, 0x16
    if (v0 == v1) goto label_0x1d48b8;                          // 0x001d47ac: beq $v0, $v1, 0x1d48b8
    v1 = a1 & 0xffff;                                           // 0x001d47b0: andi $v1, $a1, 0xffff
    v1 = 0x15;                                                  // 0x001d47b4: addiu $v1, $zero, 0x15
    if (v0 == v1) goto label_0x1d48a4;                          // 0x001d47b8: beq $v0, $v1, 0x1d48a4
    v1 = a1 & 0xffff;                                           // 0x001d47bc: andi $v1, $a1, 0xffff
    v1 = 0x14;                                                  // 0x001d47c0: addiu $v1, $zero, 0x14
    if (v0 == v1) goto label_0x1d4890;                          // 0x001d47c4: beq $v0, $v1, 0x1d4890
    v1 = a1 & 0xffff;                                           // 0x001d47c8: andi $v1, $a1, 0xffff
    v1 = 0xf;                                                   // 0x001d47cc: addiu $v1, $zero, 0xf
    if (v0 == v1) goto label_0x1d487c;                          // 0x001d47d0: beq $v0, $v1, 0x1d487c
    v1 = a1 & 0xffff;                                           // 0x001d47d4: andi $v1, $a1, 0xffff
    v1 = 0xa;                                                   // 0x001d47d8: addiu $v1, $zero, 0xa
    if (v0 == v1) goto label_0x1d4868;                          // 0x001d47dc: beq $v0, $v1, 0x1d4868
    v1 = a1 & 0xffff;                                           // 0x001d47e0: andi $v1, $a1, 0xffff
    v1 = 6;                                                     // 0x001d47e4: addiu $v1, $zero, 6
    if (v0 == v1) goto label_0x1d4854;                          // 0x001d47e8: beq $v0, $v1, 0x1d4854
    v1 = a1 & 0xffff;                                           // 0x001d47ec: andi $v1, $a1, 0xffff
    v1 = 2;                                                     // 0x001d47f0: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1d4840;                          // 0x001d47f4: beq $v0, $v1, 0x1d4840
    v1 = a1 & 0xffff;                                           // 0x001d47f8: andi $v1, $a1, 0xffff
    v1 = 1;                                                     // 0x001d47fc: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1d482c;                          // 0x001d4800: beq $v0, $v1, 0x1d482c
    v1 = a1 & 0xffff;                                           // 0x001d4804: andi $v1, $a1, 0xffff
    if (v0 == 0) goto label_0x1d4818;                           // 0x001d4808: beqz $v0, 0x1d4818
    v1 = a1 & 0xffff;                                           // 0x001d480c: andi $v1, $a1, 0xffff
    goto label_0x1d4998;                                        // 0x001d4810: b 0x1d4998
    v1 = a1 & 0xffff;                                           // 0x001d4814: andi $v1, $a1, 0xffff
label_0x1d4818:
    v0 = gp + -0x7af0;                                          // 0x001d4818: addiu $v0, $gp, -0x7af0
    v1 = v1 << 2;                                               // 0x001d481c: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d4820: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d4824: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d4828: lw $v0, 0($v0)
label_0x1d482c:
    v0 = gp + -0x7b30;                                          // 0x001d482c: addiu $v0, $gp, -0x7b30
    v1 = v1 << 2;                                               // 0x001d4830: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d4834: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d4838: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d483c: lw $v0, 0($v0)
label_0x1d4840:
    v0 = gp + -0x7b2c;                                          // 0x001d4840: addiu $v0, $gp, -0x7b2c
    v1 = v1 << 2;                                               // 0x001d4844: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d4848: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d484c: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d4850: lw $v0, 0($v0)
label_0x1d4854:
    v0 = gp + -0x7b28;                                          // 0x001d4854: addiu $v0, $gp, -0x7b28
    v1 = v1 << 2;                                               // 0x001d4858: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d485c: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d4860: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d4864: lw $v0, 0($v0)
label_0x1d4868:
    v0 = gp + -0x7b24;                                          // 0x001d4868: addiu $v0, $gp, -0x7b24
    v1 = v1 << 2;                                               // 0x001d486c: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d4870: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d4874: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d4878: lw $v0, 0($v0)
label_0x1d487c:
    v0 = gp + -0x7b20;                                          // 0x001d487c: addiu $v0, $gp, -0x7b20
    v1 = v1 << 2;                                               // 0x001d4880: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d4884: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d4888: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d488c: lw $v0, 0($v0)
label_0x1d4890:
    v0 = gp + -0x7b1c;                                          // 0x001d4890: addiu $v0, $gp, -0x7b1c
    v1 = v1 << 2;                                               // 0x001d4894: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d4898: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d489c: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d48a0: lw $v0, 0($v0)
label_0x1d48a4:
    v0 = gp + -0x7b18;                                          // 0x001d48a4: addiu $v0, $gp, -0x7b18
    v1 = v1 << 2;                                               // 0x001d48a8: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d48ac: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d48b0: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d48b4: lw $v0, 0($v0)
label_0x1d48b8:
    v0 = gp + -0x7b14;                                          // 0x001d48b8: addiu $v0, $gp, -0x7b14
    v1 = v1 << 2;                                               // 0x001d48bc: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d48c0: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d48c4: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d48c8: lw $v0, 0($v0)
label_0x1d48cc:
    v0 = gp + -0x7b10;                                          // 0x001d48cc: addiu $v0, $gp, -0x7b10
    v1 = v1 << 2;                                               // 0x001d48d0: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d48d4: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d48d8: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d48dc: lw $v0, 0($v0)
label_0x1d48e0:
    v0 = gp + -0x7b0c;                                          // 0x001d48e0: addiu $v0, $gp, -0x7b0c
    v1 = v1 << 2;                                               // 0x001d48e4: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d48e8: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d48ec: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d48f0: lw $v0, 0($v0)
label_0x1d48f4:
    v0 = gp + -0x7b08;                                          // 0x001d48f4: addiu $v0, $gp, -0x7b08
    v1 = v1 << 2;                                               // 0x001d48f8: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d48fc: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d4900: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d4904: lw $v0, 0($v0)
label_0x1d4908:
    v0 = gp + -0x7b04;                                          // 0x001d4908: addiu $v0, $gp, -0x7b04
    v1 = v1 << 2;                                               // 0x001d490c: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d4910: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d4914: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d4918: lw $v0, 0($v0)
label_0x1d491c:
    v0 = gp + -0x7b00;                                          // 0x001d491c: addiu $v0, $gp, -0x7b00
    v1 = v1 << 2;                                               // 0x001d4920: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d4924: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d4928: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d492c: lw $v0, 0($v0)
label_0x1d4930:
    v0 = gp + -0x7afc;                                          // 0x001d4930: addiu $v0, $gp, -0x7afc
    v1 = v1 << 2;                                               // 0x001d4934: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d4938: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d493c: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d4940: lw $v0, 0($v0)
label_0x1d4944:
    v0 = gp + -0x7af8;                                          // 0x001d4944: addiu $v0, $gp, -0x7af8
    v1 = v1 << 2;                                               // 0x001d4948: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d494c: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d4950: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d4954: lw $v0, 0($v0)
label_0x1d4958:
    v0 = gp + -0x7af4;                                          // 0x001d4958: addiu $v0, $gp, -0x7af4
    v1 = v1 << 2;                                               // 0x001d495c: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d4960: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d4964: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d4968: lw $v0, 0($v0)
label_0x1d496c:
    v0 = gp + -0x7af0;                                          // 0x001d496c: addiu $v0, $gp, -0x7af0
    v1 = v1 << 2;                                               // 0x001d4970: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d4974: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d4978: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d497c: lw $v0, 0($v0)
label_0x1d4980:
    v1 = a1 & 0xffff;                                           // 0x001d4980: andi $v1, $a1, 0xffff
    v0 = gp + -0x7aec;                                          // 0x001d4984: addiu $v0, $gp, -0x7aec
    v1 = v1 << 2;                                               // 0x001d4988: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d498c: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d4990: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d4994: lw $v0, 0($v0)
label_0x1d4998:
    v0 = gp + -0x7b0c;                                          // 0x001d4998: addiu $v0, $gp, -0x7b0c
    v1 = v1 << 2;                                               // 0x001d499c: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d49a0: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d49a4: b 0x1d4a28
    v0 = g_0021f9a0;  // Global at 0x0021f9a0                   // 0x001d49a8: lw $v0, 0($v0)
label_0x1d49ac:
    v0 = (a0 < 0x3000) ? 1 : 0;                                 // 0x001d49ac: slti $v0, $a0, 0x3000
    if (v0 != 0) goto label_0x1d49fc;                           // 0x001d49b0: bnez $v0, 0x1d49fc
    v0 = (a0 < 0x2500) ? 1 : 0;                                 // 0x001d49b4: slti $v0, $a0, 0x2500
    at = (a0 < 0x3100) ? 1 : 0;                                 // 0x001d49b8: slti $at, $a0, 0x3100
    if (at == 0) goto label_0x1d49fc;                           // 0x001d49bc: beqz $at, 0x1d49fc
    /* nop */                                                   // 0x001d49c0: nop 
    if (a2 != 0) goto label_0x1d49e4;                           // 0x001d49c4: bnez $a2, 0x1d49e4
    v1 = a1 & 0xffff;                                           // 0x001d49c8: andi $v1, $a1, 0xffff
    v1 = a1 & 0xffff;                                           // 0x001d49cc: andi $v1, $a1, 0xffff
    v0 = 0x33 << 16;                                            // 0x001d49d0: lui $v0, 0x33
    v0 = v0 + -0x1970;                                          // 0x001d49d4: addiu $v0, $v0, -0x1970
    v1 = v1 << 6;                                               // 0x001d49d8: sll $v1, $v1, 6
    goto label_0x1d49f4;                                        // 0x001d49dc: b 0x1d49f4
    v0 = v0 + v1;                                               // 0x001d49e0: addu $v0, $v0, $v1
label_0x1d49e4:
    v0 = 0x33 << 16;                                            // 0x001d49e4: lui $v0, 0x33
    v0 = v0 + -0x1d70;                                          // 0x001d49e8: addiu $v0, $v0, -0x1d70
    v1 = v1 << 6;                                               // 0x001d49ec: sll $v1, $v1, 6
    v0 = v0 + v1;                                               // 0x001d49f0: addu $v0, $v0, $v1
label_0x1d49f4:
    goto label_0x1d4a28;                                        // 0x001d49f4: b 0x1d4a28
    /* nop */                                                   // 0x001d49f8: nop 
label_0x1d49fc:
    if (v0 != 0) goto label_0x1d4a24;                           // 0x001d49fc: bnez $v0, 0x1d4a24
    at = (a0 < 0x2510) ? 1 : 0;                                 // 0x001d4a00: slti $at, $a0, 0x2510
    if (at == 0) goto label_0x1d4a28;                           // 0x001d4a04: beqz $at, 0x1d4a28
    v1 = a1 & 0xffff;                                           // 0x001d4a0c: andi $v1, $a1, 0xffff
    v0 = gp + -0x7b34;                                          // 0x001d4a10: addiu $v0, $gp, -0x7b34
    v1 = v1 << 2;                                               // 0x001d4a14: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d4a18: addu $v0, $v0, $v1
    goto label_0x1d4a28;                                        // 0x001d4a1c: b 0x1d4a28
    v0 = g_0032e290;  // Global at 0x0032e290                   // 0x001d4a20: lw $v0, 0($v0)
label_0x1d4a24:
label_0x1d4a28:
label_0x1d4a2c:
    return;                                                     // 0x001d4a2c: jr $ra
    sp = sp + 0x10;                                             // 0x001d4a30: addiu $sp, $sp, 0x10
}