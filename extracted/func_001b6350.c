void func_001b6350() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_50, local_5c;
    
    sp = sp + -0x60;                                            // 0x001b6350: addiu $sp, $sp, -0x60
    at = 0x2b << 16;                                            // 0x001b6354: lui $at, 0x2b
    v0 = 2;                                                     // 0x001b635c: addiu $v0, $zero, 2
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001b6360: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b6368: addu.qb $zero, $sp, $s1
    s1 = 0x2b << 16;                                            // 0x001b6370: lui $s1, 0x2b
    v1 = g_002ac548;  // Global at 0x002ac548                   // 0x001b6374: lw $v1, -0x3ab8($at)
    if (v1 == v0) goto label_0x1b6390;                          // 0x001b6378: beq $v1, $v0, 0x1b6390
    s1 = s1 + -0x3ac0;                                          // 0x001b637c: addiu $s1, $s1, -0x3ac0
    func_001b6220();  // 1b6220                                // 0x001b6380: jal 0x1b6220
    /* nop */                                                   // 0x001b6384: nop 
    goto label_0x1b65b4;                                        // 0x001b6388: b 0x1b65b4
label_0x1b6390:
    local_5c = a0;                                              // 0x001b6390: sw $a0, 0x5c($sp)
    s0 = sp + 0x52;                                             // 0x001b6398: addiu $s0, $sp, 0x52
label_0x1b639c:
    func_001b5fa0();  // 1b5fa0                                // 0x001b639c: jal 0x1b5fa0
    a0 = sp + 0x5c;                                             // 0x001b63a0: addiu $a0, $sp, 0x5c
    if (s2 == 0) goto label_0x1b65ac;                           // 0x001b63a8: beqz $s2, 0x1b65ac
    /* nop */                                                   // 0x001b63ac: nop 
    v0 = 0xa;                                                   // 0x001b63b0: addiu $v0, $zero, 0xa
    if (s2 == v0) goto label_0x1b639c;                          // 0x001b63b4: beq $s2, $v0, 0x1b639c
    /* nop */                                                   // 0x001b63b8: nop 
    v0 = g_002ac5d4;  // Global at 0x002ac5d4                   // 0x001b63bc: lw $v0, 0x94($s1)
    if (v0 != 0) goto label_0x1b64c4;                           // 0x001b63c0: bnez $v0, 0x1b64c4
    at = (s2 < 0x80) ? 1 : 0;                                   // 0x001b63c4: slti $at, $s2, 0x80
    at = (s2 < 0x10) ? 1 : 0;                                   // 0x001b63c8: slti $at, $s2, 0x10
    if (at == 0) goto label_0x1b63dc;                           // 0x001b63cc: beqz $at, 0x1b63dc
    at = (s2 < 0x80) ? 1 : 0;                                   // 0x001b63d0: slti $at, $s2, 0x80
    goto label_0x1b639c;                                        // 0x001b63d4: b 0x1b639c
    s3 = s3 + 2;                                                // 0x001b63d8: addiu $s3, $s3, 2
label_0x1b63dc:
    if (at == 0) goto label_0x1b657c;                           // 0x001b63dc: beqz $at, 0x1b657c
    v0 = 0x3c;                                                  // 0x001b63e4: addiu $v0, $zero, 0x3c
    if (s2 != v0) goto label_0x1b64bc;                          // 0x001b63e8: bne $s2, $v0, 0x1b64bc
    /* nop */                                                   // 0x001b63ec: nop 
    a1 = local_5c;                                              // 0x001b63f0: lw $a1, 0x5c($sp)
    a2 = 1;                                                     // 0x001b63f4: addiu $a2, $zero, 1
    local_50 = s2;                                              // 0x001b63f8: sb $s2, 0x50($sp)
    a0 = (s2 < 0x80) ? 1 : 0;                                   // 0x001b63fc: slti $a0, $s2, 0x80
    goto label_0x1b644c;                                        // 0x001b6400: b 0x1b644c
    v1 = (s2 < 0xe0) ? 1 : 0;                                   // 0x001b6404: slti $v1, $s2, 0xe0
label_0x1b6408:
    v0 = *(uint8_t*)((v0) + -1);                                // 0x001b6408: lbu $v0, -1($v0)
    if (v0 == 0) goto label_0x1b645c;                           // 0x001b640c: beqz $v0, 0x1b645c
    v0 = a2 + sp;                                               // 0x001b6410: addu $v0, $a2, $sp
    v0 = a2 + -1;                                               // 0x001b6414: addiu $v0, $a2, -1
    v0 = a1 + v0;                                               // 0x001b6418: addu $v0, $a1, $v0
    if (a0 != 0) goto label_0x1b6430;                           // 0x001b641c: bnez $a0, 0x1b6430
    a3 = *(uint8_t*)(v0);                                       // 0x001b6420: lbu $a3, 0($v0)
    at = (s2 < 0xa0) ? 1 : 0;                                   // 0x001b6424: slti $at, $s2, 0xa0
    if (at != 0) goto label_0x1b6458;                           // 0x001b6428: bnez $at, 0x1b6458
    /* nop */                                                   // 0x001b642c: nop 
label_0x1b6430:
    if (v1 != 0) goto label_0x1b6444;                           // 0x001b6430: bnez $v1, 0x1b6444
    v0 = a2 + sp;                                               // 0x001b6434: addu $v0, $a2, $sp
    at = (s2 < 0x100) ? 1 : 0;                                  // 0x001b6438: slti $at, $s2, 0x100
    if (at != 0) goto label_0x1b6458;                           // 0x001b643c: bnez $at, 0x1b6458
    /* nop */                                                   // 0x001b6440: nop 
label_0x1b6444:
    *(uint8_t*)((v0) + 0x50) = a3;                              // 0x001b6444: sb $a3, 0x50($v0)
    a2 = a2 + 1;                                                // 0x001b6448: addiu $a2, $a2, 1
label_0x1b644c:
    v0 = (a2 < 4) ? 1 : 0;                                      // 0x001b644c: slti $v0, $a2, 4
    if (v0 != 0) goto label_0x1b6408;                           // 0x001b6450: bnez $v0, 0x1b6408
    v0 = a1 + a2;                                               // 0x001b6454: addu $v0, $a1, $a2
label_0x1b6458:
    v0 = a2 + sp;                                               // 0x001b6458: addu $v0, $a2, $sp
label_0x1b645c:
    *(uint8_t*)((v0) + 0x50) = 0;                               // 0x001b645c: sb $zero, 0x50($v0)
    v0 = *(int8_t*)(s0);                                        // 0x001b6460: lb $v0, 0($s0)
    if (v0 == 0) goto label_0x1b6474;                           // 0x001b6464: beqz $v0, 0x1b6474
    a1 = 0x24 << 16;                                            // 0x001b6468: lui $a1, 0x24
    v0 = 0x20;                                                  // 0x001b646c: addiu $v0, $zero, 0x20
    *(uint8_t*)(s0) = v0;                                       // 0x001b6470: sb $v0, 0($s0)
label_0x1b6474:
    a0 = sp + 0x50;                                             // 0x001b6474: addiu $a0, $sp, 0x50
    func_0010ab20();  // 10ab20                                // 0x001b6478: jal 0x10ab20
    a1 = a1 + -0x2438;                                          // 0x001b647c: addiu $a1, $a1, -0x2438
    if (v0 != 0) goto label_0x1b6498;                           // 0x001b6480: bnez $v0, 0x1b6498
    a1 = 0x24 << 16;                                            // 0x001b6484: lui $a1, 0x24
    v0 = local_5c;                                              // 0x001b6488: lw $v0, 0x5c($sp)
    v0 = v0 + 3;                                                // 0x001b648c: addiu $v0, $v0, 3
    goto label_0x1b639c;                                        // 0x001b6490: b 0x1b639c
    local_5c = v0;                                              // 0x001b6494: sw $v0, 0x5c($sp)
label_0x1b6498:
    a0 = sp + 0x50;                                             // 0x001b6498: addiu $a0, $sp, 0x50
    func_0010ab20();  // 10ab20                                // 0x001b649c: jal 0x10ab20
    a1 = a1 + -0x2430;                                          // 0x001b64a0: addiu $a1, $a1, -0x2430
    if (v0 != 0) goto label_0x1b64bc;                           // 0x001b64a4: bnez $v0, 0x1b64bc
    /* nop */                                                   // 0x001b64a8: nop 
    v0 = local_5c;                                              // 0x001b64ac: lw $v0, 0x5c($sp)
    v0 = v0 + 3;                                                // 0x001b64b0: addiu $v0, $v0, 3
    goto label_0x1b639c;                                        // 0x001b64b4: b 0x1b639c
    local_5c = v0;                                              // 0x001b64b8: sw $v0, 0x5c($sp)
label_0x1b64bc:
    goto label_0x1b639c;                                        // 0x001b64bc: b 0x1b639c
    s3 = s3 + 1;                                                // 0x001b64c0: addiu $s3, $s3, 1
label_0x1b64c4:
    if (at == 0) goto label_0x1b6578;                           // 0x001b64c4: beqz $at, 0x1b6578
    v0 = 0x3c;                                                  // 0x001b64c8: addiu $v0, $zero, 0x3c
    if (s2 != v0) goto label_0x1b6578;                          // 0x001b64cc: bne $s2, $v0, 0x1b6578
    /* nop */                                                   // 0x001b64d0: nop 
    a1 = local_5c;                                              // 0x001b64d4: lw $a1, 0x5c($sp)
    a0 = 1;                                                     // 0x001b64d8: addiu $a0, $zero, 1
    goto label_0x1b6508;                                        // 0x001b64dc: b 0x1b6508
    local_50 = s2;                                              // 0x001b64e0: sb $s2, 0x50($sp)
label_0x1b64e4:
    v0 = *(uint8_t*)((v0) + -1);                                // 0x001b64e4: lbu $v0, -1($v0)
    if (v0 == 0) goto label_0x1b6518;                           // 0x001b64e8: beqz $v0, 0x1b6518
    v0 = a0 + sp;                                               // 0x001b64ec: addu $v0, $a0, $sp
    v1 = a0 + -1;                                               // 0x001b64f0: addiu $v1, $a0, -1
    v0 = a0 + sp;                                               // 0x001b64f4: addu $v0, $a0, $sp
    v1 = a1 + v1;                                               // 0x001b64f8: addu $v1, $a1, $v1
    a0 = a0 + 1;                                                // 0x001b64fc: addiu $a0, $a0, 1
    v1 = *(uint8_t*)(v1);                                       // 0x001b6500: lbu $v1, 0($v1)
    *(uint8_t*)((v0) + 0x50) = v1;                              // 0x001b6504: sb $v1, 0x50($v0)
label_0x1b6508:
    v0 = (a0 < 4) ? 1 : 0;                                      // 0x001b6508: slti $v0, $a0, 4
    if (v0 != 0) goto label_0x1b64e4;                           // 0x001b650c: bnez $v0, 0x1b64e4
    v0 = a1 + a0;                                               // 0x001b6510: addu $v0, $a1, $a0
    v0 = a0 + sp;                                               // 0x001b6514: addu $v0, $a0, $sp
label_0x1b6518:
    *(uint8_t*)((v0) + 0x50) = 0;                               // 0x001b6518: sb $zero, 0x50($v0)
    v0 = *(int8_t*)(s0);                                        // 0x001b651c: lb $v0, 0($s0)
    if (v0 == 0) goto label_0x1b6530;                           // 0x001b6520: beqz $v0, 0x1b6530
    a1 = 0x24 << 16;                                            // 0x001b6524: lui $a1, 0x24
    v0 = 0x20;                                                  // 0x001b6528: addiu $v0, $zero, 0x20
    *(uint8_t*)(s0) = v0;                                       // 0x001b652c: sb $v0, 0($s0)
label_0x1b6530:
    a0 = sp + 0x50;                                             // 0x001b6530: addiu $a0, $sp, 0x50
    func_0010ab20();  // 10ab20                                // 0x001b6534: jal 0x10ab20
    a1 = a1 + -0x2438;                                          // 0x001b6538: addiu $a1, $a1, -0x2438
    if (v0 != 0) goto label_0x1b6554;                           // 0x001b653c: bnez $v0, 0x1b6554
    a1 = 0x24 << 16;                                            // 0x001b6540: lui $a1, 0x24
    v0 = local_5c;                                              // 0x001b6544: lw $v0, 0x5c($sp)
    v0 = v0 + 3;                                                // 0x001b6548: addiu $v0, $v0, 3
    goto label_0x1b639c;                                        // 0x001b654c: b 0x1b639c
    local_5c = v0;                                              // 0x001b6550: sw $v0, 0x5c($sp)
label_0x1b6554:
    a0 = sp + 0x50;                                             // 0x001b6554: addiu $a0, $sp, 0x50
    func_0010ab20();  // 10ab20                                // 0x001b6558: jal 0x10ab20
    a1 = a1 + -0x2430;                                          // 0x001b655c: addiu $a1, $a1, -0x2430
    if (v0 != 0) goto label_0x1b6578;                           // 0x001b6560: bnez $v0, 0x1b6578
    /* nop */                                                   // 0x001b6564: nop 
    v0 = local_5c;                                              // 0x001b6568: lw $v0, 0x5c($sp)
    v0 = v0 + 3;                                                // 0x001b656c: addiu $v0, $v0, 3
    goto label_0x1b639c;                                        // 0x001b6570: b 0x1b639c
    local_5c = v0;                                              // 0x001b6574: sw $v0, 0x5c($sp)
label_0x1b6578:
label_0x1b657c:
    func_001b60d0();  // 1b60d0                                // 0x001b657c: jal 0x1b60d0
    func_001b6140();  // 1b6140                                // 0x001b6588: jal 0x1b6140
    if (v0 != 0) goto label_0x1b65a0;                           // 0x001b6590: bnez $v0, 0x1b65a0
    /* nop */                                                   // 0x001b6594: nop 
    goto label_0x1b65a4;                                        // 0x001b6598: b 0x1b65a4
    v0 = 2;                                                     // 0x001b659c: addiu $v0, $zero, 2
label_0x1b65a0:
    v0 = 1;                                                     // 0x001b65a0: addiu $v0, $zero, 1
label_0x1b65a4:
    goto label_0x1b639c;                                        // 0x001b65a4: b 0x1b639c
    s3 = s3 + v0;                                               // 0x001b65a8: addu $s3, $s3, $v0
label_0x1b65ac:
label_0x1b65b4:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b65b8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b65bc: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b65c0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b65c4: jr $ra
    sp = sp + 0x60;                                             // 0x001b65c8: addiu $sp, $sp, 0x60
}