void func_001d1210() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_90, local_94, local_9c;
    
    sp = sp + -0xa0;                                            // 0x001d1210: addiu $sp, $sp, -0xa0
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x001d1218: dps.w.ph $ac0, $sp, $s7
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001d1224: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d1234: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d1244: addu.qb $zero, $sp, $s1
    func_001d1050();  // 0x1d0fa0                                // 0x001d1254: jal 0x1d0fa0
    if (v0 >= 0) goto label_0x1d1294;                           // 0x001d125c: bgez $v0, 0x1d1294
    at = 0x33 << 16;                                            // 0x001d1260: lui $at, 0x33
    v0 = -0x51;                                                 // 0x001d1264: addiu $v0, $zero, -0x51
    v1 = 2;                                                     // 0x001d1268: addiu $v1, $zero, 2
    *(uint8_t*)(s7) = v0;                                       // 0x001d126c: sb $v0, 0($s7)
    *(uint8_t*)(s6) = v1;                                       // 0x001d1270: sb $v1, 0($s6)
    *(uint8_t*)(s4) = 0;                                        // 0x001d1278: sb $zero, 0($s4)
    *(uint8_t*)(s3) = 0;                                        // 0x001d127c: sb $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d1280: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d1284: sh $zero, 0($s1)
    *(uint16_t*)(s0) = 0;                                       // 0x001d1288: sh $zero, 0($s0)
    goto label_0x1d1c30;                                        // 0x001d128c: b 0x1d1c30
    *(uint16_t*)(s5) = 0;                                       // 0x001d1290: sh $zero, 0($s5)
label_0x1d1294:
    v1 = g_0032ceac;  // Global at 0x0032ceac                   // 0x001d1294: lbu $v1, -0x3154($at)
    at = 0x33 << 16;                                            // 0x001d1298: lui $at, 0x33
    v0 = g_0032cead;  // Global at 0x0032cead                   // 0x001d129c: lbu $v0, -0x3153($at)
    at = (v0 < v1) ? 1 : 0;                                     // 0x001d12a0: slt $at, $v0, $v1
    if (at == 0) goto label_0x1d12b0;                           // 0x001d12a4: beqz $at, 0x1d12b0
    /* nop */                                                   // 0x001d12a8: nop 
    v1 = v0 + 1;                                                // 0x001d12ac: addiu $v1, $v0, 1
label_0x1d12b0:
    at = 0x33 << 16;                                            // 0x001d12b0: lui $at, 0x33
    a0 = 0x64;                                                  // 0x001d12b4: addiu $a0, $zero, 0x64
    g_0032cead = v1;  // Global at 0x0032cead                   // 0x001d12b8: sb $v1, -0x3153($at)
    t0 = *(int8_t*)(s4);                                        // 0x001d12bc: lb $t0, 0($s4)
    if (t0 == a0) goto label_0x1d1be8;                          // 0x001d12c0: beq $t0, $a0, 0x1d1be8
    v0 = 0x63;                                                  // 0x001d12c4: addiu $v0, $zero, 0x63
    if (t0 == v0) goto label_0x1d1bd4;                          // 0x001d12c8: beq $t0, $v0, 0x1d1bd4
    v1 = t0 + 1;                                                // 0x001d12cc: addiu $v1, $t0, 1
    v0 = 7;                                                     // 0x001d12d0: addiu $v0, $zero, 7
    if (t0 == v0) goto label_0x1d1ba0;                          // 0x001d12d4: beq $t0, $v0, 0x1d1ba0
    at = 0x33 << 16;                                            // 0x001d12d8: lui $at, 0x33
    v1 = 6;                                                     // 0x001d12dc: addiu $v1, $zero, 6
    if (t0 == v1) goto label_0x1d1b60;                          // 0x001d12e0: beq $t0, $v1, 0x1d1b60
    at = 0x33 << 16;                                            // 0x001d12e4: lui $at, 0x33
    v0 = 5;                                                     // 0x001d12e8: addiu $v0, $zero, 5
    if (t0 == v0) goto label_0x1d1734;                          // 0x001d12ec: beq $t0, $v0, 0x1d1734
    v0 = 4;                                                     // 0x001d12f0: addiu $v0, $zero, 4
    if (t0 == v0) goto label_0x1d16e0;                          // 0x001d12f4: beq $t0, $v0, 0x1d16e0
    a2 = 3;                                                     // 0x001d12f8: addiu $a2, $zero, 3
    if (t0 == a2) goto label_0x1d1600;                          // 0x001d12fc: beq $t0, $a2, 0x1d1600
    at = 0x33 << 16;                                            // 0x001d1300: lui $at, 0x33
    a3 = 2;                                                     // 0x001d1304: addiu $a3, $zero, 2
    if (t0 == a3) goto label_0x1d1598;                          // 0x001d1308: beq $t0, $a3, 0x1d1598
    at = 0x33 << 16;                                            // 0x001d130c: lui $at, 0x33
    a1 = 1;                                                     // 0x001d1310: addiu $a1, $zero, 1
    if (t0 == a1) goto label_0x1d1514;                          // 0x001d1314: beq $t0, $a1, 0x1d1514
    a0 = 0xa;                                                   // 0x001d1318: addiu $a0, $zero, 0xa
    if (t0 == a0) goto label_0x1d13cc;                          // 0x001d131c: beq $t0, $a0, 0x1d13cc
    /* nop */                                                   // 0x001d1320: nop 
    if (t0 == 0) goto label_0x1d1334;                           // 0x001d1324: beqz $t0, 0x1d1334
    /* nop */                                                   // 0x001d1328: nop 
    goto label_0x1d1c30;                                        // 0x001d132c: b 0x1d1c30
label_0x1d1334:
    v1 = *(int32_t*)((gp) + -0x6260);                           // 0x001d1334: lw $v1, -0x6260($gp)
    if (v1 != 0) goto label_0x1d134c;                           // 0x001d1338: bnez $v1, 0x1d134c
    at = 0x33 << 16;                                            // 0x001d133c: lui $at, 0x33
    v1 = -0x51;                                                 // 0x001d1340: addiu $v1, $zero, -0x51
    goto label_0x1d1c30;                                        // 0x001d1344: b 0x1d1c30
    *(uint8_t*)(s7) = v1;                                       // 0x001d1348: sb $v1, 0($s7)
label_0x1d134c:
    g_0032ceae = a0;  // Global at 0x0032ceae                   // 0x001d134c: sb $a0, -0x3152($at)
    at = 0x33 << 16;                                            // 0x001d1350: lui $at, 0x33
    g_0032ceac = 0;  // Global at 0x0032ceac                    // 0x001d1354: sb $zero, -0x3154($at)
    at = 0x33 << 16;                                            // 0x001d1358: lui $at, 0x33
    g_0032cead = 0;  // Global at 0x0032cead                    // 0x001d135c: sb $zero, -0x3153($at)
    *(uint8_t*)(s3) = 0;                                        // 0x001d1360: sb $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d1364: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d1368: sh $zero, 0($s1)
    *(uint16_t*)(s0) = a2;                                      // 0x001d136c: sh $a2, 0($s0)
    *(uint16_t*)(s5) = a3;                                      // 0x001d1370: sh $a3, 0($s5)
    v0 = *(int32_t*)((gp) + -0x6260);                           // 0x001d1374: lw $v0, -0x6260($gp)
    v0 = g_0032cfaf;  // Global at 0x0032cfaf                   // 0x001d1378: lw $v0, 0($v0)
    if (v0 != a1) goto label_0x1d13bc;                          // 0x001d137c: bne $v0, $a1, 0x1d13bc
    /* nop */                                                   // 0x001d1380: nop 
    v0 = *(int8_t*)((gp) + -0x627c);                            // 0x001d1384: lb $v0, -0x627c($gp)
    if (v0 == 0) goto label_0x1d13b0;                           // 0x001d1388: beqz $v0, 0x1d13b0
    /* nop */                                                   // 0x001d138c: nop 
    if (v0 == a1) goto label_0x1d13b0;                          // 0x001d1390: beq $v0, $a1, 0x1d13b0
    /* nop */                                                   // 0x001d1394: nop 
    if (v0 == a3) goto label_0x1d13a8;                          // 0x001d1398: beq $v0, $a3, 0x1d13a8
    /* nop */                                                   // 0x001d139c: nop 
    goto label_0x1d13c4;                                        // 0x001d13a0: b 0x1d13c4
label_0x1d13a8:
    goto label_0x1d13c0;                                        // 0x001d13a8: b 0x1d13c0
    *(uint8_t*)(s4) = a0;                                       // 0x001d13ac: sb $a0, 0($s4)
label_0x1d13b0:
    v0 = 1;                                                     // 0x001d13b0: addiu $v0, $zero, 1
    goto label_0x1d13c0;                                        // 0x001d13b4: b 0x1d13c0
    *(uint8_t*)(s6) = v0;                                       // 0x001d13b8: sb $v0, 0($s6)
label_0x1d13bc:
    *(uint8_t*)(s4) = a0;                                       // 0x001d13bc: sb $a0, 0($s4)
label_0x1d13c0:
label_0x1d13c4:
    goto label_0x1d1c34;                                        // 0x001d13c4: b 0x1d1c34
label_0x1d13cc:
    v0 = *(int32_t*)((gp) + -0x6260);                           // 0x001d13cc: lw $v0, -0x6260($gp)
    a0 = g_0032cfaf;  // Global at 0x0032cfaf                   // 0x001d13d4: lw $a0, 0($v0)
    a1 = g_0032cfb3;  // Global at 0x0032cfb3                   // 0x001d13d8: lw $a1, 4($v0)
    func_001c97a0();  // 0x1c9670                                // 0x001d13dc: jal 0x1c9670
    t0 = sp + 0x90;                                             // 0x001d13e0: addiu $t0, $sp, 0x90
    t0 = 1;                                                     // 0x001d13e4: addiu $t0, $zero, 1
    v1 = 0x33 << 16;                                            // 0x001d13e8: lui $v1, 0x33
    *(uint8_t*)(s4) = t0;                                       // 0x001d13ec: sb $t0, 0($s4)
    v0 = 0x33 << 16;                                            // 0x001d13f0: lui $v0, 0x33
    v1 = v1 + -0x1f40;                                          // 0x001d13f4: addiu $v1, $v1, -0x1f40
    v0 = v0 + -0x1f50;                                          // 0x001d13f8: addiu $v0, $v0, -0x1f50
    at = 0x33 << 16;                                            // 0x001d13fc: lui $at, 0x33
    *(uint32_t*)((gp) + -0x6248) = v1;                          // 0x001d1400: sw $v1, -0x6248($gp)
    g_0032e0c0 = v0;  // Global at 0x0032e0c0                   // 0x001d1404: sw $v0, -0x1f40($at)
    v1 = gp + -0x6250;                                          // 0x001d1408: addiu $v1, $gp, -0x6250
    at = 0x33 << 16;                                            // 0x001d140c: lui $at, 0x33
    v0 = 0x33 << 16;                                            // 0x001d1410: lui $v0, 0x33
    g_0032e0c4 = v1;  // Global at 0x0032e0c4                   // 0x001d1414: sw $v1, -0x1f3c($at)
    v0 = v0 + -0x1f20;                                          // 0x001d1418: addiu $v0, $v0, -0x1f20
    at = 0x33 << 16;                                            // 0x001d141c: lui $at, 0x33
    v1 = 0x33 << 16;                                            // 0x001d1420: lui $v1, 0x33
    g_0032e0c8 = v0;  // Global at 0x0032e0c8                   // 0x001d1424: sw $v0, -0x1f38($at)
    v1 = v1 + -0x2d40;                                          // 0x001d1428: addiu $v1, $v1, -0x2d40
    at = 0x33 << 16;                                            // 0x001d142c: lui $at, 0x33
    v0 = 0x33 << 16;                                            // 0x001d1430: lui $v0, 0x33
    g_0032e0d4 = v1;  // Global at 0x0032e0d4                   // 0x001d1434: sw $v1, -0x1f2c($at)
    v0 = v0 + -0x2f50;                                          // 0x001d1438: addiu $v0, $v0, -0x2f50
    at = 0x33 << 16;                                            // 0x001d143c: lui $at, 0x33
    v1 = 0x33 << 16;                                            // 0x001d1440: lui $v1, 0x33
    g_0032e0d8 = v0;  // Global at 0x0032e0d8                   // 0x001d1444: sw $v0, -0x1f28($at)
    v1 = v1 + -0x3050;                                          // 0x001d1448: addiu $v1, $v1, -0x3050
    at = 0x33 << 16;                                            // 0x001d144c: lui $at, 0x33
    v0 = 4;                                                     // 0x001d1450: addiu $v0, $zero, 4
    g_0032e0dc = v1;  // Global at 0x0032e0dc                   // 0x001d1454: sw $v1, -0x1f24($at)
    at = 0x33 << 16;                                            // 0x001d1458: lui $at, 0x33
    a3 = *(int8_t*)((gp) + -0x627c);                            // 0x001d145c: lb $a3, -0x627c($gp)
    g_0032e0b0 = v0;  // Global at 0x0032e0b0                   // 0x001d1460: sh $v0, -0x1f50($at)
    at = 0x33 << 16;                                            // 0x001d1464: lui $at, 0x33
    a2 = *(uint8_t*)((gp) + -0x628c);                           // 0x001d1468: lbu $a2, -0x628c($gp)
    g_0032e0b2 = 0;  // Global at 0x0032e0b2                    // 0x001d146c: sh $zero, -0x1f4e($at)
    at = 0x33 << 16;                                            // 0x001d1470: lui $at, 0x33
    v1 = *(uint8_t*)((gp) + -0x6280);                           // 0x001d1474: lbu $v1, -0x6280($gp)
    g_0032e0b4 = 0;  // Global at 0x0032e0b4                    // 0x001d1478: sh $zero, -0x1f4c($at)
    at = 0x33 << 16;                                            // 0x001d147c: lui $at, 0x33
    a1 = local_90;                                              // 0x001d1480: lw $a1, 0x90($sp)
    g_0032e0b6 = t0;  // Global at 0x0032e0b6                   // 0x001d1484: sh $t0, -0x1f4a($at)
    a3 = a3 ^ 2;                                                // 0x001d1488: xori $a3, $a3, 2
    at = 0x33 << 16;                                            // 0x001d148c: lui $at, 0x33
    *(uint8_t*)((gp) + -0x6241) = a2;                           // 0x001d1490: sb $a2, -0x6241($gp)
    g_0032e0b8 = t0;  // Global at 0x0032e0b8                   // 0x001d1494: sh $t0, -0x1f48($at)
    a2 = ((unsigned)a3 < (unsigned)1) ? 1 : 0;                  // 0x001d1498: sltiu $a2, $a3, 1
    at = 0x33 << 16;                                            // 0x001d149c: lui $at, 0x33
    a0 = local_94;                                              // 0x001d14a0: lw $a0, 0x94($sp)
    v0 = g_0032d2b0;  // Global at 0x0032d2b0                   // 0x001d14a4: lb $v0, -0x2d50($at)
    *(uint16_t*)((gp) + -0x6244) = 0;                           // 0x001d14a8: sh $zero, -0x6244($gp)
    *(uint8_t*)((gp) + -0x6242) = a2;                           // 0x001d14ac: sb $a2, -0x6242($gp)
    *(uint16_t*)((gp) + -0x6250) = v1;                          // 0x001d14b0: sh $v1, -0x6250($gp)
    at = 0x33 << 16;                                            // 0x001d14b4: lui $at, 0x33
    g_0032e0cc = a1;  // Global at 0x0032e0cc                   // 0x001d14b8: sw $a1, -0x1f34($at)
    at = 0x33 << 16;                                            // 0x001d14bc: lui $at, 0x33
    if (v0 != 0) goto label_0x1d14dc;                           // 0x001d14c0: bnez $v0, 0x1d14dc
    g_0032e0d0 = a0;  // Global at 0x0032e0d0                   // 0x001d14c4: sw $a0, -0x1f30($at)
    v0 = 0x24 << 16;                                            // 0x001d14c8: lui $v0, 0x24
    *(uint16_t*)((gp) + -0x624e) = 0;                           // 0x001d14cc: sh $zero, -0x624e($gp)
    v0 = v0 + 0x3b08;                                           // 0x001d14d0: addiu $v0, $v0, 0x3b08
    goto label_0x1d14ec;                                        // 0x001d14d4: b 0x1d14ec
    *(uint32_t*)((gp) + -0x624c) = v0;                          // 0x001d14d8: sw $v0, -0x624c($gp)
label_0x1d14dc:
    v0 = 0x33 << 16;                                            // 0x001d14dc: lui $v0, 0x33
    *(uint16_t*)((gp) + -0x624e) = t0;                          // 0x001d14e0: sh $t0, -0x624e($gp)
    v0 = v0 + -0x2d50;                                          // 0x001d14e4: addiu $v0, $v0, -0x2d50
    *(uint32_t*)((gp) + -0x624c) = v0;                          // 0x001d14e8: sw $v0, -0x624c($gp)
label_0x1d14ec:
    a0 = 0x33 << 16;                                            // 0x001d14ec: lui $a0, 0x33
    a0 = a0 + -0x1f20;                                          // 0x001d14f4: addiu $a0, $a0, -0x1f20
    func_00107d30();  // 0x107c70                                // 0x001d14f8: jal 0x107c70
    a2 = 0x10;                                                  // 0x001d14fc: addiu $a2, $zero, 0x10
    v1 = *(uint8_t*)((gp) + -0x6290);                           // 0x001d1500: lbu $v1, -0x6290($gp)
    at = 0x33 << 16;                                            // 0x001d1504: lui $at, 0x33
    goto label_0x1d1c30;                                        // 0x001d150c: b 0x1d1c30
    g_0032e0e0 = v1;  // Global at 0x0032e0e0                   // 0x001d1510: sh $v1, -0x1f20($at)
label_0x1d1514:
    v1 = *(int16_t*)(s2);                                       // 0x001d1514: lh $v1, 0($s2)
    v0 = v1 + -1;                                               // 0x001d1518: addiu $v0, $v1, -1
    at = (0 < v1) ? 1 : 0;                                      // 0x001d151c: slt $at, $zero, $v1
    if (at == 0) goto label_0x1d1530;                           // 0x001d1520: beqz $at, 0x1d1530
    *(uint16_t*)(s2) = v0;                                      // 0x001d1524: sh $v0, 0($s2)
    goto label_0x1d1c30;                                        // 0x001d1528: b 0x1d1c30
label_0x1d1530:
    *(uint16_t*)(s2) = 0;                                       // 0x001d1530: sh $zero, 0($s2)
    at = 0x33 << 16;                                            // 0x001d1534: lui $at, 0x33
    v0 = *(int32_t*)((gp) + -0x6260);                           // 0x001d1538: lw $v0, -0x6260($gp)
    g_0032ceac = a3;  // Global at 0x0032ceac                   // 0x001d153c: sb $a3, -0x3154($at)
    a1 = g_0032cfb3;  // Global at 0x0032cfb3                   // 0x001d1540: lw $a1, 4($v0)
    func_001c8f60();  // 0x1c8e60                                // 0x001d1544: jal 0x1c8e60
    a0 = g_0032cfaf;  // Global at 0x0032cfaf                   // 0x001d1548: lw $a0, 0($v0)
    if (v0 >= 0) goto label_0x1d1584;                           // 0x001d154c: bgez $v0, 0x1d1584
    /* nop */                                                   // 0x001d1550: nop 
    v0 = -0x52;                                                 // 0x001d1554: addiu $v0, $zero, -0x52
    v1 = 2;                                                     // 0x001d1558: addiu $v1, $zero, 2
    *(uint8_t*)(s7) = v0;                                       // 0x001d155c: sb $v0, 0($s7)
    *(uint8_t*)(s6) = v1;                                       // 0x001d1560: sb $v1, 0($s6)
    *(uint8_t*)(s4) = 0;                                        // 0x001d1568: sb $zero, 0($s4)
    *(uint8_t*)(s3) = 0;                                        // 0x001d156c: sb $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d1570: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d1574: sh $zero, 0($s1)
    *(uint16_t*)(s0) = 0;                                       // 0x001d1578: sh $zero, 0($s0)
    goto label_0x1d1c30;                                        // 0x001d157c: b 0x1d1c30
    *(uint16_t*)(s5) = 0;                                       // 0x001d1580: sh $zero, 0($s5)
label_0x1d1584:
    v1 = *(int8_t*)(s4);                                        // 0x001d1584: lb $v1, 0($s4)
    v1 = v1 + 1;                                                // 0x001d158c: addiu $v1, $v1, 1
    goto label_0x1d1c30;                                        // 0x001d1590: b 0x1d1c30
    *(uint8_t*)(s4) = v1;                                       // 0x001d1594: sb $v1, 0($s4)
label_0x1d1598:
    func_001c95c0();  // 0x1c9590                                // 0x001d1598: jal 0x1c9590
    g_0032ceac = v0;  // Global at 0x0032ceac                   // 0x001d159c: sb $v0, -0x3154($at)
    if (v0 >= 0) goto label_0x1d15d8;                           // 0x001d15a0: bgez $v0, 0x1d15d8
    /* nop */                                                   // 0x001d15a4: nop 
    v0 = -0x52;                                                 // 0x001d15a8: addiu $v0, $zero, -0x52
    v1 = 2;                                                     // 0x001d15ac: addiu $v1, $zero, 2
    *(uint8_t*)(s7) = v0;                                       // 0x001d15b0: sb $v0, 0($s7)
    *(uint8_t*)(s6) = v1;                                       // 0x001d15b4: sb $v1, 0($s6)
    *(uint8_t*)(s4) = 0;                                        // 0x001d15bc: sb $zero, 0($s4)
    *(uint8_t*)(s3) = 0;                                        // 0x001d15c0: sb $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d15c4: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d15c8: sh $zero, 0($s1)
    *(uint16_t*)(s0) = 0;                                       // 0x001d15cc: sh $zero, 0($s0)
    goto label_0x1d1c30;                                        // 0x001d15d0: b 0x1d1c30
    *(uint16_t*)(s5) = 0;                                       // 0x001d15d4: sh $zero, 0($s5)
label_0x1d15d8:
    v0 = 0xa;                                                   // 0x001d15d8: addiu $v0, $zero, 0xa
    a0 = sp + 0x9c;                                             // 0x001d15dc: addiu $a0, $sp, 0x9c
    func_001c95f0();  // 0x1c95c0                                // 0x001d15e0: jal 0x1c95c0
    local_9c = v0;                                              // 0x001d15e4: sw $v0, 0x9c($sp)
    v1 = *(int8_t*)(s4);                                        // 0x001d15e8: lb $v1, 0($s4)
    v1 = v1 + 1;                                                // 0x001d15f0: addiu $v1, $v1, 1
    *(uint8_t*)(s4) = v1;                                       // 0x001d15f4: sb $v1, 0($s4)
    goto label_0x1d1c30;                                        // 0x001d15f8: b 0x1d1c30
    *(uint16_t*)(s2) = 0;                                       // 0x001d15fc: sh $zero, 0($s2)
label_0x1d1600:
    v0 = 2;                                                     // 0x001d1600: addiu $v0, $zero, 2
    g_0032ceac = v1;  // Global at 0x0032ceac                   // 0x001d1604: sb $v1, -0x3154($at)
    v1 = *(int32_t*)((gp) + -0x6260);                           // 0x001d1608: lw $v1, -0x6260($gp)
    v1 = g_0032cfb2;  // Global at 0x0032cfb2                   // 0x001d160c: lw $v1, 0($v1)
    if (v1 == v0) goto label_0x1d1620;                          // 0x001d1610: beq $v1, $v0, 0x1d1620
    /* nop */                                                   // 0x001d1614: nop 
    if (v1 != a2) goto label_0x1d1674;                          // 0x001d1618: bne $v1, $a2, 0x1d1674
    a0 = gp + -0x6248;                                          // 0x001d161c: addiu $a0, $gp, -0x6248
label_0x1d1620:
    func_001c97e0();  // 0x1c97a0                                // 0x001d1620: jal 0x1c97a0
    /* nop */                                                   // 0x001d1624: nop 
    v1 = *(int32_t*)((gp) + -0x6260);                           // 0x001d1628: lw $v1, -0x6260($gp)
    g_0032cfc2 = v0;  // Global at 0x0032cfc2                   // 0x001d162c: sw $v0, 0x10($v1)
    v0 = *(int32_t*)((gp) + -0x6260);                           // 0x001d1630: lw $v0, -0x6260($gp)
    v0 = g_0032cfbf;  // Global at 0x0032cfbf                   // 0x001d1634: lw $v0, 0x10($v0)
    if (v0 >= 0) goto label_0x1d1670;                           // 0x001d1638: bgez $v0, 0x1d1670
    /* nop */                                                   // 0x001d163c: nop 
    v0 = -0x51;                                                 // 0x001d1640: addiu $v0, $zero, -0x51
    v1 = 2;                                                     // 0x001d1644: addiu $v1, $zero, 2
    *(uint8_t*)(s7) = v0;                                       // 0x001d1648: sb $v0, 0($s7)
    *(uint8_t*)(s6) = v1;                                       // 0x001d164c: sb $v1, 0($s6)
    *(uint8_t*)(s4) = 0;                                        // 0x001d1654: sb $zero, 0($s4)
    *(uint8_t*)(s3) = 0;                                        // 0x001d1658: sb $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d165c: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d1660: sh $zero, 0($s1)
    *(uint16_t*)(s0) = 0;                                       // 0x001d1664: sh $zero, 0($s0)
    goto label_0x1d1c30;                                        // 0x001d1668: b 0x1d1c30
    *(uint16_t*)(s5) = 0;                                       // 0x001d166c: sh $zero, 0($s5)
label_0x1d1670:
    a0 = gp + -0x6248;                                          // 0x001d1670: addiu $a0, $gp, -0x6248
label_0x1d1674:
    func_001c9ab0();  // 0x1c97e0                                // 0x001d1674: jal 0x1c97e0
    /* nop */                                                   // 0x001d1678: nop 
    if (v0 >= 0) goto label_0x1d16b4;                           // 0x001d167c: bgez $v0, 0x1d16b4
    a0 = 0x33 << 16;                                            // 0x001d1680: lui $a0, 0x33
    v0 = -0x52;                                                 // 0x001d1684: addiu $v0, $zero, -0x52
    v1 = 2;                                                     // 0x001d1688: addiu $v1, $zero, 2
    *(uint8_t*)(s7) = v0;                                       // 0x001d168c: sb $v0, 0($s7)
    *(uint8_t*)(s6) = v1;                                       // 0x001d1690: sb $v1, 0($s6)
    *(uint8_t*)(s4) = 0;                                        // 0x001d1698: sb $zero, 0($s4)
    *(uint8_t*)(s3) = 0;                                        // 0x001d169c: sb $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d16a0: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d16a4: sh $zero, 0($s1)
    *(uint16_t*)(s0) = 0;                                       // 0x001d16a8: sh $zero, 0($s0)
    goto label_0x1d1c30;                                        // 0x001d16ac: b 0x1d1c30
    *(uint16_t*)(s5) = 0;                                       // 0x001d16b0: sh $zero, 0($s5)
label_0x1d16b4:
    a0 = a0 + -0x41d0;                                          // 0x001d16b8: addiu $a0, $a0, -0x41d0
    func_00107d30();  // 0x107c70                                // 0x001d16bc: jal 0x107c70
    a2 = 0x14;                                                  // 0x001d16c0: addiu $a2, $zero, 0x14
    a0 = *(int8_t*)(s4);                                        // 0x001d16c4: lb $a0, 0($s4)
    v1 = 0x3b;                                                  // 0x001d16c8: addiu $v1, $zero, 0x3b
    a0 = a0 + 2;                                                // 0x001d16d0: addiu $a0, $a0, 2
    *(uint8_t*)(s4) = a0;                                       // 0x001d16d4: sb $a0, 0($s4)
    goto label_0x1d1c30;                                        // 0x001d16d8: b 0x1d1c30
    *(uint16_t*)(s2) = v1;                                      // 0x001d16dc: sh $v1, 0($s2)
label_0x1d16e0:
    v0 = *(int16_t*)(s1);                                       // 0x001d16e0: lh $v0, 0($s1)
    at = (v0 < 0x1f) ? 1 : 0;                                   // 0x001d16e4: slti $at, $v0, 0x1f
    if (at != 0) goto label_0x1d1720;                           // 0x001d16e8: bnez $at, 0x1d1720
    v0 = t0 + 1;                                                // 0x001d16ec: addiu $v0, $t0, 1
    v0 = -0x56;                                                 // 0x001d16f0: addiu $v0, $zero, -0x56
    v1 = 2;                                                     // 0x001d16f4: addiu $v1, $zero, 2
    *(uint8_t*)(s7) = v0;                                       // 0x001d16f8: sb $v0, 0($s7)
    *(uint8_t*)(s6) = v1;                                       // 0x001d16fc: sb $v1, 0($s6)
    *(uint8_t*)(s4) = 0;                                        // 0x001d1704: sb $zero, 0($s4)
    *(uint8_t*)(s3) = 0;                                        // 0x001d1708: sb $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d170c: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d1710: sh $zero, 0($s1)
    *(uint16_t*)(s0) = 0;                                       // 0x001d1714: sh $zero, 0($s0)
    goto label_0x1d1c30;                                        // 0x001d1718: b 0x1d1c30
    *(uint16_t*)(s5) = 0;                                       // 0x001d171c: sh $zero, 0($s5)
label_0x1d1720:
    v1 = 0x1d;                                                  // 0x001d1720: addiu $v1, $zero, 0x1d
    *(uint8_t*)(s4) = v0;                                       // 0x001d1724: sb $v0, 0($s4)
    goto label_0x1d1c30;                                        // 0x001d172c: b 0x1d1c30
    *(uint16_t*)(s2) = v1;                                      // 0x001d1730: sh $v1, 0($s2)
label_0x1d1734:
    v0 = *(int16_t*)(s1);                                       // 0x001d1734: lh $v0, 0($s1)
    at = (v0 < 0x1f) ? 1 : 0;                                   // 0x001d1738: slti $at, $v0, 0x1f
    if (at != 0) goto label_0x1d1770;                           // 0x001d173c: bnez $at, 0x1d1770
    v0 = -0x56;                                                 // 0x001d1740: addiu $v0, $zero, -0x56
    v1 = 2;                                                     // 0x001d1744: addiu $v1, $zero, 2
    *(uint8_t*)(s7) = v0;                                       // 0x001d1748: sb $v0, 0($s7)
    *(uint8_t*)(s6) = v1;                                       // 0x001d174c: sb $v1, 0($s6)
    *(uint8_t*)(s4) = 0;                                        // 0x001d1754: sb $zero, 0($s4)
    *(uint8_t*)(s3) = 0;                                        // 0x001d1758: sb $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d175c: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d1760: sh $zero, 0($s1)
    *(uint16_t*)(s0) = 0;                                       // 0x001d1764: sh $zero, 0($s0)
    goto label_0x1d1c30;                                        // 0x001d1768: b 0x1d1c30
    *(uint16_t*)(s5) = 0;                                       // 0x001d176c: sh $zero, 0($s5)
label_0x1d1770:
    v1 = *(int16_t*)(s2);                                       // 0x001d1770: lh $v1, 0($s2)
    v0 = 0x1e;                                                  // 0x001d1774: addiu $v0, $zero, 0x1e
    /* divide: v1 / v0 -> hi:lo */                              // 0x001d1778: div $zero, $v1, $v0
    /* nop */                                                   // 0x001d177c: nop 
    /* nop */                                                   // 0x001d1780: nop 
    /* mfhi $v0 */                                              // 0x001d1784
    if (v0 != 0) goto label_0x1d17b4;                           // 0x001d1788: bnez $v0, 0x1d17b4
    at = 0x33 << 16;                                            // 0x001d178c: lui $at, 0x33
    v1 = g_0032ceae;  // Global at 0x0032ceae                   // 0x001d1790: lbu $v1, -0x3152($at)
    at = 0x33 << 16;                                            // 0x001d1794: lui $at, 0x33
    v0 = g_0032ceac;  // Global at 0x0032ceac                   // 0x001d1798: lbu $v0, -0x3154($at)
    at = (v0 < v1) ? 1 : 0;                                     // 0x001d179c: slt $at, $v0, $v1
    if (at == 0) goto label_0x1d17ac;                           // 0x001d17a0: beqz $at, 0x1d17ac
    /* nop */                                                   // 0x001d17a4: nop 
    v1 = v0 + 1;                                                // 0x001d17a8: addiu $v1, $v0, 1
label_0x1d17ac:
    at = 0x33 << 16;                                            // 0x001d17ac: lui $at, 0x33
    g_0032ceac = v1;  // Global at 0x0032ceac                   // 0x001d17b0: sb $v1, -0x3154($at)
label_0x1d17b4:
    v1 = *(int16_t*)(s2);                                       // 0x001d17b4: lh $v1, 0($s2)
    v0 = v1 + -1;                                               // 0x001d17b8: addiu $v0, $v1, -1
    at = (0 < v1) ? 1 : 0;                                      // 0x001d17bc: slt $at, $zero, $v1
    if (at == 0) goto label_0x1d17d0;                           // 0x001d17c0: beqz $at, 0x1d17d0
    *(uint16_t*)(s2) = v0;                                      // 0x001d17c4: sh $v0, 0($s2)
    goto label_0x1d1c30;                                        // 0x001d17c8: b 0x1d1c30
label_0x1d17d0:
    a0 = 0x33 << 16;                                            // 0x001d17d0: lui $a0, 0x33
    *(uint16_t*)(s2) = 0;                                       // 0x001d17d4: sh $zero, 0($s2)
    func_001c9d10();  // 0x1c9b00                                // 0x001d17d8: jal 0x1c9b00
    a0 = a0 + -0x41d0;                                          // 0x001d17dc: addiu $a0, $a0, -0x41d0
    if (v0 >= 0) goto label_0x1d1818;                           // 0x001d17e0: bgez $v0, 0x1d1818
    at = 0x33 << 16;                                            // 0x001d17e4: lui $at, 0x33
    v0 = -0x52;                                                 // 0x001d17e8: addiu $v0, $zero, -0x52
    v1 = 2;                                                     // 0x001d17ec: addiu $v1, $zero, 2
    *(uint8_t*)(s7) = v0;                                       // 0x001d17f0: sb $v0, 0($s7)
    *(uint8_t*)(s6) = v1;                                       // 0x001d17f4: sb $v1, 0($s6)
    *(uint8_t*)(s4) = 0;                                        // 0x001d17fc: sb $zero, 0($s4)
    *(uint8_t*)(s3) = 0;                                        // 0x001d1800: sb $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d1804: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d1808: sh $zero, 0($s1)
    *(uint16_t*)(s0) = 0;                                       // 0x001d180c: sh $zero, 0($s0)
    goto label_0x1d1c30;                                        // 0x001d1810: b 0x1d1c30
    *(uint16_t*)(s5) = 0;                                       // 0x001d1814: sh $zero, 0($s5)
label_0x1d1818:
    v0 = g_0032be3c;  // Global at 0x0032be3c                   // 0x001d1818: lh $v0, -0x41c4($at)
    at = ((unsigned)v0 < (unsigned)0xa) ? 1 : 0;                // 0x001d181c: sltiu $at, $v0, 0xa
    if (at == 0) goto label_0x1d1b2c;                           // 0x001d1820: beqz $at, 0x1d1b2c
    v1 = -0x52;                                                 // 0x001d1824: addiu $v1, $zero, -0x52
    v1 = 0x24 << 16;                                            // 0x001d1828: lui $v1, 0x24
    v0 = v0 << 2;                                               // 0x001d182c: sll $v0, $v0, 2
    v1 = v1 + 0x3b10;                                           // 0x001d1830: addiu $v1, $v1, 0x3b10
    v0 = v0 + v1;                                               // 0x001d1834: addu $v0, $v0, $v1
    v0 = g_0032cfaf;  // Global at 0x0032cfaf                   // 0x001d1838: lw $v0, 0($v0)
    /* jump to address in v0 */                                 // 0x001d183c: jr $v0
    /* nop */                                                   // 0x001d1840: nop 
    at = 0x33 << 16;                                            // 0x001d1844: lui $at, 0x33
    v1 = 0xc;                                                   // 0x001d1848: addiu $v1, $zero, 0xc
    v0 = g_0032ceac;  // Global at 0x0032ceac                   // 0x001d184c: lbu $v0, -0x3154($at)
    at = 0x33 << 16;                                            // 0x001d1850: lui $at, 0x33
    g_0032ceae = v1;  // Global at 0x0032ceae                   // 0x001d1854: sb $v1, -0x3152($at)
    at = (v0 < 0xb) ? 1 : 0;                                    // 0x001d1858: slti $at, $v0, 0xb
    if (at == 0) goto label_0x1d1b54;                           // 0x001d185c: beqz $at, 0x1d1b54
    v1 = 0x1d;                                                  // 0x001d1860: addiu $v1, $zero, 0x1d
    v0 = 0xb;                                                   // 0x001d1864: addiu $v0, $zero, 0xb
    at = 0x33 << 16;                                            // 0x001d1868: lui $at, 0x33
    goto label_0x1d1b50;                                        // 0x001d186c: b 0x1d1b50
    g_0032ceac = v0;  // Global at 0x0032ceac                   // 0x001d1870: sb $v0, -0x3154($at)
    at = 0x33 << 16;                                            // 0x001d1874: lui $at, 0x33
    v1 = 0x3c;                                                  // 0x001d1878: addiu $v1, $zero, 0x3c
    v0 = g_0032ceac;  // Global at 0x0032ceac                   // 0x001d187c: lbu $v0, -0x3154($at)
    at = 0x33 << 16;                                            // 0x001d1880: lui $at, 0x33
    g_0032ceae = v1;  // Global at 0x0032ceae                   // 0x001d1884: sb $v1, -0x3152($at)
    at = (v0 < 0xc) ? 1 : 0;                                    // 0x001d1888: slti $at, $v0, 0xc
    if (at == 0) goto label_0x1d1b50;                           // 0x001d188c: beqz $at, 0x1d1b50
    v0 = 0xc;                                                   // 0x001d1890: addiu $v0, $zero, 0xc
    at = 0x33 << 16;                                            // 0x001d1894: lui $at, 0x33
    goto label_0x1d1b50;                                        // 0x001d1898: b 0x1d1b50
    g_0032ceac = v0;  // Global at 0x0032ceac                   // 0x001d189c: sb $v0, -0x3154($at)
    at = 0x33 << 16;                                            // 0x001d18a0: lui $at, 0x33
    v1 = 0x46;                                                  // 0x001d18a4: addiu $v1, $zero, 0x46
    v0 = g_0032ceac;  // Global at 0x0032ceac                   // 0x001d18a8: lbu $v0, -0x3154($at)
    at = 0x33 << 16;                                            // 0x001d18ac: lui $at, 0x33
    g_0032ceae = v1;  // Global at 0x0032ceae                   // 0x001d18b0: sb $v1, -0x3152($at)
    at = (v0 < 0x3c) ? 1 : 0;                                   // 0x001d18b4: slti $at, $v0, 0x3c
    if (at == 0) goto label_0x1d1b50;                           // 0x001d18b8: beqz $at, 0x1d1b50
    v0 = 0x3c;                                                  // 0x001d18bc: addiu $v0, $zero, 0x3c
    at = 0x33 << 16;                                            // 0x001d18c0: lui $at, 0x33
    goto label_0x1d1b50;                                        // 0x001d18c4: b 0x1d1b50
    g_0032ceac = v0;  // Global at 0x0032ceac                   // 0x001d18c8: sb $v0, -0x3154($at)
    at = 0x33 << 16;                                            // 0x001d18cc: lui $at, 0x33
    v1 = 0x50;                                                  // 0x001d18d0: addiu $v1, $zero, 0x50
    v0 = g_0032ceac;  // Global at 0x0032ceac                   // 0x001d18d4: lbu $v0, -0x3154($at)
    at = 0x33 << 16;                                            // 0x001d18d8: lui $at, 0x33
    g_0032ceae = v1;  // Global at 0x0032ceae                   // 0x001d18dc: sb $v1, -0x3152($at)
    at = (v0 < 0x46) ? 1 : 0;                                   // 0x001d18e0: slti $at, $v0, 0x46
    if (at == 0) goto label_0x1d18f4;                           // 0x001d18e4: beqz $at, 0x1d18f4
    v0 = 0x46;                                                  // 0x001d18e8: addiu $v0, $zero, 0x46
    at = 0x33 << 16;                                            // 0x001d18ec: lui $at, 0x33
    g_0032ceac = v0;  // Global at 0x0032ceac                   // 0x001d18f0: sb $v0, -0x3154($at)
label_0x1d18f4:
    v0 = *(int8_t*)(s4);                                        // 0x001d18f4: lb $v0, 0($s4)
    v0 = v0 + 1;                                                // 0x001d18f8: addiu $v0, $v0, 1
    goto label_0x1d1b50;                                        // 0x001d18fc: b 0x1d1b50
    *(uint8_t*)(s4) = v0;                                       // 0x001d1900: sb $v0, 0($s4)
    at = 0x33 << 16;                                            // 0x001d1904: lui $at, 0x33
    v0 = 0xd;                                                   // 0x001d1908: addiu $v0, $zero, 0xd
    a0 = g_0032be40;  // Global at 0x0032be40                   // 0x001d190c: lh $a0, -0x41c0($at)
    if (a0 == v0) goto label_0x1d1ad8;                          // 0x001d1910: beq $a0, $v0, 0x1d1ad8
    v1 = -2;                                                    // 0x001d1914: addiu $v1, $zero, -2
    v0 = 6;                                                     // 0x001d1918: addiu $v0, $zero, 6
    if (a0 == v0) goto label_0x1d1ab0;                          // 0x001d191c: beq $a0, $v0, 0x1d1ab0
    v1 = -0x55;                                                 // 0x001d1920: addiu $v1, $zero, -0x55
    v0 = 3;                                                     // 0x001d1924: addiu $v0, $zero, 3
    if (a0 == v0) goto label_0x1d1a88;                          // 0x001d1928: beq $a0, $v0, 0x1d1a88
    v1 = -5;                                                    // 0x001d192c: addiu $v1, $zero, -5
    v0 = 5;                                                     // 0x001d1930: addiu $v0, $zero, 5
    if (a0 == v0) goto label_0x1d1a44;                          // 0x001d1934: beq $a0, $v0, 0x1d1a44
    v0 = 1;                                                     // 0x001d1938: addiu $v0, $zero, 1
    if (a0 == v0) goto label_0x1d19f4;                          // 0x001d193c: beq $a0, $v0, 0x1d19f4
    /* nop */                                                   // 0x001d1940: nop 
    v0 = 0xc;                                                   // 0x001d1944: addiu $v0, $zero, 0xc
    if (a0 == v0) goto label_0x1d19a4;                          // 0x001d1948: beq $a0, $v0, 0x1d19a4
    v1 = 2;                                                     // 0x001d194c: addiu $v1, $zero, 2
    if (a0 == v1) goto label_0x1d1960;                          // 0x001d1950: beq $a0, $v1, 0x1d1960
    /* nop */                                                   // 0x001d1954: nop 
    goto label_0x1d1b00;                                        // 0x001d1958: b 0x1d1b00
    v0 = -0x52;                                                 // 0x001d195c: addiu $v0, $zero, -0x52
label_0x1d1960:
    func_001d10a0();  // 0x1d1050                                // 0x001d1960: jal 0x1d1050
    /* nop */                                                   // 0x001d1964: nop 
    if (v0 != 0) goto label_0x1d197c;                           // 0x001d1968: bnez $v0, 0x1d197c
    v1 = -3;                                                    // 0x001d196c: addiu $v1, $zero, -3
    v0 = 0x63;                                                  // 0x001d1970: addiu $v0, $zero, 0x63
    goto label_0x1d1b20;                                        // 0x001d1974: b 0x1d1b20
    *(uint8_t*)(s4) = v0;                                       // 0x001d1978: sb $v0, 0($s4)
label_0x1d197c:
    v0 = 2;                                                     // 0x001d197c: addiu $v0, $zero, 2
    *(uint8_t*)(s7) = v1;                                       // 0x001d1980: sb $v1, 0($s7)
    *(uint8_t*)(s6) = v0;                                       // 0x001d1984: sb $v0, 0($s6)
    *(uint8_t*)(s4) = 0;                                        // 0x001d1988: sb $zero, 0($s4)
    *(uint8_t*)(s3) = 0;                                        // 0x001d198c: sb $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d1990: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d1994: sh $zero, 0($s1)
    *(uint16_t*)(s0) = 0;                                       // 0x001d1998: sh $zero, 0($s0)
    goto label_0x1d1b20;                                        // 0x001d199c: b 0x1d1b20
    *(uint16_t*)(s5) = 0;                                       // 0x001d19a0: sh $zero, 0($s5)
label_0x1d19a4:
    v0 = *(int16_t*)(s5);                                       // 0x001d19a4: lh $v0, 0($s5)
    v0 = v0 + -1;                                               // 0x001d19a8: addiu $v0, $v0, -1
    *(uint16_t*)(s5) = v0;                                      // 0x001d19ac: sh $v0, 0($s5)
    if (v0 != 0) goto label_0x1d19ec;                           // 0x001d19b8: bnez $v0, 0x1d19ec
    v0 = 0x63;                                                  // 0x001d19bc: addiu $v0, $zero, 0x63
    v1 = -2;                                                    // 0x001d19c0: addiu $v1, $zero, -2
    v0 = 2;                                                     // 0x001d19c4: addiu $v0, $zero, 2
    *(uint8_t*)(s7) = v1;                                       // 0x001d19c8: sb $v1, 0($s7)
    *(uint8_t*)(s6) = v0;                                       // 0x001d19cc: sb $v0, 0($s6)
    *(uint8_t*)(s4) = 0;                                        // 0x001d19d0: sb $zero, 0($s4)
    *(uint8_t*)(s3) = 0;                                        // 0x001d19d4: sb $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d19d8: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d19dc: sh $zero, 0($s1)
    *(uint16_t*)(s0) = 0;                                       // 0x001d19e0: sh $zero, 0($s0)
    goto label_0x1d1b20;                                        // 0x001d19e4: b 0x1d1b20
    *(uint16_t*)(s5) = 0;                                       // 0x001d19e8: sh $zero, 0($s5)
label_0x1d19ec:
    goto label_0x1d1b20;                                        // 0x001d19ec: b 0x1d1b20
    *(uint8_t*)(s4) = v0;                                       // 0x001d19f0: sb $v0, 0($s4)
label_0x1d19f4:
    v0 = *(int16_t*)(s0);                                       // 0x001d19f4: lh $v0, 0($s0)
    v0 = v0 + -1;                                               // 0x001d19f8: addiu $v0, $v0, -1
    *(uint16_t*)(s0) = v0;                                      // 0x001d19fc: sh $v0, 0($s0)
    if (v0 != 0) goto label_0x1d1a3c;                           // 0x001d1a08: bnez $v0, 0x1d1a3c
    v0 = 0x63;                                                  // 0x001d1a0c: addiu $v0, $zero, 0x63
    v1 = -0x52;                                                 // 0x001d1a10: addiu $v1, $zero, -0x52
    v0 = 2;                                                     // 0x001d1a14: addiu $v0, $zero, 2
    *(uint8_t*)(s7) = v1;                                       // 0x001d1a18: sb $v1, 0($s7)
    *(uint8_t*)(s6) = v0;                                       // 0x001d1a1c: sb $v0, 0($s6)
    *(uint8_t*)(s4) = 0;                                        // 0x001d1a20: sb $zero, 0($s4)
    *(uint8_t*)(s3) = 0;                                        // 0x001d1a24: sb $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d1a28: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d1a2c: sh $zero, 0($s1)
    *(uint16_t*)(s0) = 0;                                       // 0x001d1a30: sh $zero, 0($s0)
    goto label_0x1d1b20;                                        // 0x001d1a34: b 0x1d1b20
    *(uint16_t*)(s5) = 0;                                       // 0x001d1a38: sh $zero, 0($s5)
label_0x1d1a3c:
    goto label_0x1d1b20;                                        // 0x001d1a3c: b 0x1d1b20
    *(uint8_t*)(s4) = v0;                                       // 0x001d1a40: sb $v0, 0($s4)
label_0x1d1a44:
    func_001d1130();  // 0x1d10b0                                // 0x001d1a44: jal 0x1d10b0
    /* nop */                                                   // 0x001d1a48: nop 
    if (v0 != 0) goto label_0x1d1a60;                           // 0x001d1a4c: bnez $v0, 0x1d1a60
    v1 = -0x52;                                                 // 0x001d1a50: addiu $v1, $zero, -0x52
    v0 = 0x63;                                                  // 0x001d1a54: addiu $v0, $zero, 0x63
    goto label_0x1d1b20;                                        // 0x001d1a58: b 0x1d1b20
    *(uint8_t*)(s4) = v0;                                       // 0x001d1a5c: sb $v0, 0($s4)
label_0x1d1a60:
    v0 = 2;                                                     // 0x001d1a60: addiu $v0, $zero, 2
    *(uint8_t*)(s7) = v1;                                       // 0x001d1a64: sb $v1, 0($s7)
    *(uint8_t*)(s6) = v0;                                       // 0x001d1a68: sb $v0, 0($s6)
    *(uint8_t*)(s4) = 0;                                        // 0x001d1a6c: sb $zero, 0($s4)
    *(uint8_t*)(s3) = 0;                                        // 0x001d1a70: sb $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d1a74: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d1a78: sh $zero, 0($s1)
    *(uint16_t*)(s0) = 0;                                       // 0x001d1a7c: sh $zero, 0($s0)
    goto label_0x1d1b20;                                        // 0x001d1a80: b 0x1d1b20
    *(uint16_t*)(s5) = 0;                                       // 0x001d1a84: sh $zero, 0($s5)
label_0x1d1a88:
    v0 = 2;                                                     // 0x001d1a88: addiu $v0, $zero, 2
    *(uint8_t*)(s7) = v1;                                       // 0x001d1a8c: sb $v1, 0($s7)
    *(uint8_t*)(s6) = v0;                                       // 0x001d1a90: sb $v0, 0($s6)
    *(uint8_t*)(s4) = 0;                                        // 0x001d1a94: sb $zero, 0($s4)
    *(uint8_t*)(s3) = 0;                                        // 0x001d1a98: sb $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d1a9c: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d1aa0: sh $zero, 0($s1)
    *(uint16_t*)(s0) = 0;                                       // 0x001d1aa4: sh $zero, 0($s0)
    goto label_0x1d1b20;                                        // 0x001d1aa8: b 0x1d1b20
    *(uint16_t*)(s5) = 0;                                       // 0x001d1aac: sh $zero, 0($s5)
label_0x1d1ab0:
    v0 = 2;                                                     // 0x001d1ab0: addiu $v0, $zero, 2
    *(uint8_t*)(s7) = v1;                                       // 0x001d1ab4: sb $v1, 0($s7)
    *(uint8_t*)(s6) = v0;                                       // 0x001d1ab8: sb $v0, 0($s6)
    *(uint8_t*)(s4) = 0;                                        // 0x001d1abc: sb $zero, 0($s4)
    *(uint8_t*)(s3) = 0;                                        // 0x001d1ac0: sb $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d1ac4: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d1ac8: sh $zero, 0($s1)
    *(uint16_t*)(s0) = 0;                                       // 0x001d1acc: sh $zero, 0($s0)
    goto label_0x1d1b20;                                        // 0x001d1ad0: b 0x1d1b20
    *(uint16_t*)(s5) = 0;                                       // 0x001d1ad4: sh $zero, 0($s5)
label_0x1d1ad8:
    v0 = 2;                                                     // 0x001d1ad8: addiu $v0, $zero, 2
    *(uint8_t*)(s7) = v1;                                       // 0x001d1adc: sb $v1, 0($s7)
    *(uint8_t*)(s6) = v0;                                       // 0x001d1ae0: sb $v0, 0($s6)
    *(uint8_t*)(s4) = 0;                                        // 0x001d1ae4: sb $zero, 0($s4)
    *(uint8_t*)(s3) = 0;                                        // 0x001d1ae8: sb $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d1aec: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d1af0: sh $zero, 0($s1)
    *(uint16_t*)(s0) = 0;                                       // 0x001d1af4: sh $zero, 0($s0)
    goto label_0x1d1b20;                                        // 0x001d1af8: b 0x1d1b20
    *(uint16_t*)(s5) = 0;                                       // 0x001d1afc: sh $zero, 0($s5)
label_0x1d1b00:
    *(uint8_t*)(s7) = v0;                                       // 0x001d1b00: sb $v0, 0($s7)
    *(uint8_t*)(s6) = v1;                                       // 0x001d1b04: sb $v1, 0($s6)
    *(uint8_t*)(s4) = 0;                                        // 0x001d1b08: sb $zero, 0($s4)
    *(uint8_t*)(s3) = 0;                                        // 0x001d1b0c: sb $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d1b10: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d1b14: sh $zero, 0($s1)
    *(uint16_t*)(s0) = 0;                                       // 0x001d1b18: sh $zero, 0($s0)
    *(uint16_t*)(s5) = 0;                                       // 0x001d1b1c: sh $zero, 0($s5)
label_0x1d1b20:
    goto label_0x1d1c30;                                        // 0x001d1b20: b 0x1d1c30
    v1 = -0x52;                                                 // 0x001d1b28: addiu $v1, $zero, -0x52
label_0x1d1b2c:
    v0 = 2;                                                     // 0x001d1b2c: addiu $v0, $zero, 2
    *(uint8_t*)(s7) = v1;                                       // 0x001d1b30: sb $v1, 0($s7)
    *(uint8_t*)(s6) = v0;                                       // 0x001d1b34: sb $v0, 0($s6)
    *(uint8_t*)(s4) = 0;                                        // 0x001d1b38: sb $zero, 0($s4)
    *(uint8_t*)(s3) = 0;                                        // 0x001d1b3c: sb $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d1b40: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d1b44: sh $zero, 0($s1)
    *(uint16_t*)(s0) = 0;                                       // 0x001d1b48: sh $zero, 0($s0)
    *(uint16_t*)(s5) = 0;                                       // 0x001d1b4c: sh $zero, 0($s5)
label_0x1d1b50:
    v1 = 0x1d;                                                  // 0x001d1b50: addiu $v1, $zero, 0x1d
label_0x1d1b54:
    goto label_0x1d1c30;                                        // 0x001d1b58: b 0x1d1c30
    *(uint16_t*)(s2) = v1;                                      // 0x001d1b5c: sh $v1, 0($s2)
label_0x1d1b60:
    g_0032ceae = a0;  // Global at 0x0032ceae                   // 0x001d1b60: sb $a0, -0x3152($at)
    at = 0x33 << 16;                                            // 0x001d1b64: lui $at, 0x33
    g_0032ceac = a0;  // Global at 0x0032ceac                   // 0x001d1b68: sb $a0, -0x3154($at)
    v0 = *(int8_t*)(s4);                                        // 0x001d1b6c: lb $v0, 0($s4)
    v0 = v0 + 1;                                                // 0x001d1b70: addiu $v0, $v0, 1
    func_001d10b0();  // 0x1d10a0                                // 0x001d1b74: jal 0x1d10a0
    *(uint8_t*)(s4) = v0;                                       // 0x001d1b78: sb $v0, 0($s4)
    func_001d0fa0();  // 0x1d0e40                                // 0x001d1b7c: jal 0x1d0e40
    /* nop */                                                   // 0x001d1b80: nop 
    func_001c9ae0();  // 0x1c9ab0                                // 0x001d1b84: jal 0x1c9ab0
    at = 0x33 << 16;                                            // 0x001d1b8c: lui $at, 0x33
    v1 = g_0032be30;  // Global at 0x0032be30                   // 0x001d1b94: lw $v1, -0x41d0($at)
    goto label_0x1d1c30;                                        // 0x001d1b98: b 0x1d1c30
    *(uint32_t*)((gp) + -0x6294) = v1;                          // 0x001d1b9c: sw $v1, -0x6294($gp)
label_0x1d1ba0:
    v0 = g_0032cead;  // Global at 0x0032cead                   // 0x001d1ba0: lbu $v0, -0x3153($at)
    if (v0 != a0) goto label_0x1d1bcc;                          // 0x001d1ba4: bne $v0, $a0, 0x1d1bcc
    *(uint8_t*)(s6) = 0;                                        // 0x001d1bac: sb $zero, 0($s6)
    v0 = 2;                                                     // 0x001d1bb0: addiu $v0, $zero, 2
    *(uint8_t*)(s4) = 0;                                        // 0x001d1bb4: sb $zero, 0($s4)
    *(uint16_t*)(s2) = 0;                                       // 0x001d1bb8: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d1bbc: sh $zero, 0($s1)
    *(uint16_t*)(s0) = 0;                                       // 0x001d1bc0: sh $zero, 0($s0)
    goto label_0x1d1c30;                                        // 0x001d1bc4: b 0x1d1c30
    *(uint16_t*)(s5) = 0;                                       // 0x001d1bc8: sh $zero, 0($s5)
label_0x1d1bcc:
    goto label_0x1d1c30;                                        // 0x001d1bcc: b 0x1d1c30
    /* nop */                                                   // 0x001d1bd0: nop 
label_0x1d1bd4:
    *(uint8_t*)(s4) = v1;                                       // 0x001d1bd8: sb $v1, 0($s4)
    *(uint8_t*)(s3) = 0;                                        // 0x001d1bdc: sb $zero, 0($s3)
    goto label_0x1d1c30;                                        // 0x001d1be0: b 0x1d1c30
    *(uint16_t*)(s2) = 0;                                       // 0x001d1be4: sh $zero, 0($s2)
label_0x1d1be8:
    func_001d2fa0();  // 0x1d29a0                                // 0x001d1bec: jal 0x1d29a0
    if (v0 == 0) goto label_0x1d1c2c;                           // 0x001d1bf4: beqz $v0, 0x1d1c2c
    at = 0x33 << 16;                                            // 0x001d1bf8: lui $at, 0x33
    v0 = 0xa;                                                   // 0x001d1bfc: addiu $v0, $zero, 0xa
    g_0032ceac = 0;  // Global at 0x0032ceac                    // 0x001d1c00: sb $zero, -0x3154($at)
    v1 = 0x5a;                                                  // 0x001d1c04: addiu $v1, $zero, 0x5a
    at = 0x33 << 16;                                            // 0x001d1c08: lui $at, 0x33
    g_0032ceae = v0;  // Global at 0x0032ceae                   // 0x001d1c0c: sb $v0, -0x3152($at)
    v0 = 1;                                                     // 0x001d1c10: addiu $v0, $zero, 1
    *(uint8_t*)(s4) = v0;                                       // 0x001d1c14: sb $v0, 0($s4)
    *(uint8_t*)(s3) = 0;                                        // 0x001d1c18: sb $zero, 0($s3)
    v0 = 5;                                                     // 0x001d1c1c: addiu $v0, $zero, 5
    *(uint16_t*)(s2) = v1;                                      // 0x001d1c20: sh $v1, 0($s2)
    goto label_0x1d1c30;                                        // 0x001d1c24: b 0x1d1c30
    *(uint16_t*)(s1) = 0;                                       // 0x001d1c28: sh $zero, 0($s1)
label_0x1d1c2c:
label_0x1d1c30:
label_0x1d1c34:
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001d1c38: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001d1c3c: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001d1c40: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d1c48: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d1c4c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d1c50: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d1c54: jr $ra
    sp = sp + 0xa0;                                             // 0x001d1c58: addiu $sp, $sp, 0xa0
}