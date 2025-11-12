void func_001a1310() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t0 = *(int32_t*)((a0) + 8);                                 // 0x001a1310: lw $t0, 8($a0)
    a2 = a1 << 4;                                               // 0x001a1314: sll $a2, $a1, 4
    v1 = *(int32_t*)((a0) + 0x24);                              // 0x001a1318: lw $v1, 0x24($a0)
    t2 = 0 | 0xffff;                                            // 0x001a131c: ori $t2, $zero, 0xffff
    if (v1 != t2) goto label_0x1a1338;                          // 0x001a1320: bne $v1, $t2, 0x1a1338
    t4 = t0 + a2;                                               // 0x001a1324: addu $t4, $t0, $a2
    *(uint32_t*)((a0) + 0x24) = a1;                             // 0x001a1328: sw $a1, 0x24($a0)
    *(uint16_t*)((t4) + 0xc) = t2;                              // 0x001a132c: sh $t2, 0xc($t4)
    goto label_0x1a1434;                                        // 0x001a1330: b 0x1a1434
    *(uint16_t*)((t4) + 0xe) = t2;                              // 0x001a1334: sh $t2, 0xe($t4)
label_0x1a1338:
    a2 = *(int32_t*)((a0) + 0xc);                               // 0x001a1338: lw $a2, 0xc($a0)
    a3 = v1 << 4;                                               // 0x001a133c: sll $a3, $v1, 4
    if (a2 == 0) goto label_0x1a1394;                           // 0x001a1340: beqz $a2, 0x1a1394
    t3 = t0 + a3;                                               // 0x001a1344: addu $t3, $t0, $a3
    t1 = *(int32_t*)(t4);                                       // 0x001a1348: lw $t1, 0($t4)
    a2 = *(int32_t*)(t3);                                       // 0x001a134c: lw $a2, 0($t3)
    at = ((unsigned)t1 < (unsigned)a2) ? 1 : 0;                 // 0x001a1350: sltu $at, $t1, $a2
    if (at == 0) goto label_0x1a142c;                           // 0x001a1354: beqz $at, 0x1a142c
    goto label_0x1a13dc;                                        // 0x001a135c: b 0x1a13dc
    *(uint16_t*)((t4) + 0xc) = t2;                              // 0x001a1360: sh $t2, 0xc($t4)
label_0x1a1364:
    v1 = *(uint16_t*)((t3) + 0xe);                              // 0x001a1368: lhu $v1, 0xe($t3)
    if (v1 == a3) goto label_0x1a13d8;                          // 0x001a136c: beq $v1, $a3, 0x1a13d8
    /* nop */                                                   // 0x001a1370: nop 
    a2 = v1 << 4;                                               // 0x001a1374: sll $a2, $v1, 4
    t3 = t0 + a2;                                               // 0x001a1378: addu $t3, $t0, $a2
    a2 = *(int32_t*)(t3);                                       // 0x001a137c: lw $a2, 0($t3)
label_0x1a1380:
    a2 = ((unsigned)a2 < (unsigned)t1) ? 1 : 0;                 // 0x001a1380: sltu $a2, $a2, $t1
    if (a2 != 0) goto label_0x1a1364;                           // 0x001a1384: bnez $a2, 0x1a1364
    /* nop */                                                   // 0x001a1388: nop 
    goto label_0x1a13d8;                                        // 0x001a138c: b 0x1a13d8
    /* nop */                                                   // 0x001a1390: nop 
label_0x1a1394:
    t1 = *(int32_t*)(t4);                                       // 0x001a1394: lw $t1, 0($t4)
    a2 = *(int32_t*)(t3);                                       // 0x001a1398: lw $a2, 0($t3)
    at = ((unsigned)a2 < (unsigned)t1) ? 1 : 0;                 // 0x001a139c: sltu $at, $a2, $t1
    if (at == 0) goto label_0x1a1420;                           // 0x001a13a0: beqz $at, 0x1a1420
    goto label_0x1a13d8;                                        // 0x001a13a8: b 0x1a13d8
    /* nop */                                                   // 0x001a13ac: nop 
label_0x1a13b0:
    v1 = *(uint16_t*)((t3) + 0xe);                              // 0x001a13b4: lhu $v1, 0xe($t3)
    if (v1 == a3) goto label_0x1a13d8;                          // 0x001a13b8: beq $v1, $a3, 0x1a13d8
    /* nop */                                                   // 0x001a13bc: nop 
    a2 = v1 << 4;                                               // 0x001a13c0: sll $a2, $v1, 4
    t3 = t0 + a2;                                               // 0x001a13c4: addu $t3, $t0, $a2
    a2 = *(int32_t*)(t3);                                       // 0x001a13c8: lw $a2, 0($t3)
label_0x1a13cc:
    at = ((unsigned)t1 < (unsigned)a2) ? 1 : 0;                 // 0x001a13cc: sltu $at, $t1, $a2
    if (at != 0) goto label_0x1a13b0;                           // 0x001a13d0: bnez $at, 0x1a13b0
    /* nop */                                                   // 0x001a13d4: nop 
label_0x1a13d8:
    *(uint16_t*)((t4) + 0xc) = t2;                              // 0x001a13d8: sh $t2, 0xc($t4)
label_0x1a13dc:
    a2 = 0 | 0xffff;                                            // 0x001a13dc: ori $a2, $zero, 0xffff
    if (t2 == a2) goto label_0x1a13f8;                          // 0x001a13e0: beq $t2, $a2, 0x1a13f8
    *(uint16_t*)((t4) + 0xe) = v1;                              // 0x001a13e4: sh $v1, 0xe($t4)
    a2 = *(int32_t*)((a0) + 8);                                 // 0x001a13e8: lw $a2, 8($a0)
    a3 = t2 << 4;                                               // 0x001a13ec: sll $a3, $t2, 4
    a2 = a2 + a3;                                               // 0x001a13f0: addu $a2, $a2, $a3
    *(uint16_t*)((a2) + 0xe) = a1;                              // 0x001a13f4: sh $a1, 0xe($a2)
label_0x1a13f8:
    a2 = 0 | 0xffff;                                            // 0x001a13f8: ori $a2, $zero, 0xffff
    if (v1 == a2) goto label_0x1a1434;                          // 0x001a13fc: beq $v1, $a2, 0x1a1434
    /* nop */                                                   // 0x001a1400: nop 
    a2 = v1 << 4;                                               // 0x001a1404: sll $a2, $v1, 4
    v1 = *(int32_t*)((a0) + 8);                                 // 0x001a1408: lw $v1, 8($a0)
    v1 = v1 + a2;                                               // 0x001a140c: addu $v1, $v1, $a2
    *(uint16_t*)((v1) + 0xc) = a1;                              // 0x001a1410: sh $a1, 0xc($v1)
    goto label_0x1a1434;                                        // 0x001a1414: b 0x1a1434
    /* nop */                                                   // 0x001a1418: nop 
label_0x1a1420:
    goto label_0x1a13cc;                                        // 0x001a1420: b 0x1a13cc
    a2 = *(int32_t*)(t3);                                       // 0x001a1424: lw $a2, 0($t3)
label_0x1a142c:
    goto label_0x1a1380;                                        // 0x001a142c: b 0x1a1380
    a2 = *(int32_t*)(t3);                                       // 0x001a1430: lw $a2, 0($t3)
label_0x1a1434:
    return;                                                     // 0x001a1434: jr $ra
    /* nop */                                                   // 0x001a1438: nop 
}