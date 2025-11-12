void func_001ba3c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001ba3c0: addiu $sp, $sp, -0x10
    at = 0x31 << 16;                                            // 0x001ba3c4: lui $at, 0x31
    v0 = 1;                                                     // 0x001ba3cc: addiu $v0, $zero, 1
    g_003137dd = 0;  // Global at 0x003137dd                    // 0x001ba3d0: sb $zero, 0x37dd($at)
    at = 0x31 << 16;                                            // 0x001ba3d4: lui $at, 0x31
    g_003137a3 = 0;  // Global at 0x003137a3                    // 0x001ba3d8: sb $zero, 0x37a3($at)
    at = 0x31 << 16;                                            // 0x001ba3dc: lui $at, 0x31
    g_003137af = v0;  // Global at 0x003137af                   // 0x001ba3e0: sb $v0, 0x37af($at)
    at = 0x31 << 16;                                            // 0x001ba3e4: lui $at, 0x31
    g_003137ac = v0;  // Global at 0x003137ac                   // 0x001ba3e8: sb $v0, 0x37ac($at)
    at = 0x31 << 16;                                            // 0x001ba3ec: lui $at, 0x31
    g_00313865 = v0;  // Global at 0x00313865                   // 0x001ba3f0: sb $v0, 0x3865($at)
    at = 0x31 << 16;                                            // 0x001ba3f4: lui $at, 0x31
    g_003137a4 = v0;  // Global at 0x003137a4                   // 0x001ba3f8: sb $v0, 0x37a4($at)
    at = 0x31 << 16;                                            // 0x001ba3fc: lui $at, 0x31
    g_003137a7 = 0;  // Global at 0x003137a7                    // 0x001ba400: sb $zero, 0x37a7($at)
    at = 0x31 << 16;                                            // 0x001ba404: lui $at, 0x31
    g_003137a8 = 0;  // Global at 0x003137a8                    // 0x001ba408: sb $zero, 0x37a8($at)
    at = 0x31 << 16;                                            // 0x001ba40c: lui $at, 0x31
    g_003137a2 = v0;  // Global at 0x003137a2                   // 0x001ba410: sb $v0, 0x37a2($at)
    at = 0x31 << 16;                                            // 0x001ba414: lui $at, 0x31
    g_003137a1 = 0;  // Global at 0x003137a1                    // 0x001ba418: sb $zero, 0x37a1($at)
    at = 0x31 << 16;                                            // 0x001ba41c: lui $at, 0x31
    g_003137a6 = v0;  // Global at 0x003137a6                   // 0x001ba420: sb $v0, 0x37a6($at)
    at = 0x31 << 16;                                            // 0x001ba424: lui $at, 0x31
    g_003137ab = v0;  // Global at 0x003137ab                   // 0x001ba428: sb $v0, 0x37ab($at)
    at = 0x31 << 16;                                            // 0x001ba42c: lui $at, 0x31
    a3 = g_003135a0;  // Global at 0x003135a0                   // 0x001ba430: lb $a3, 0x35a0($at)
    at = 0x31 << 16;                                            // 0x001ba434: lui $at, 0x31
    a2 = g_003135a1;  // Global at 0x003135a1                   // 0x001ba438: lb $a2, 0x35a1($at)
    at = 0x31 << 16;                                            // 0x001ba43c: lui $at, 0x31
    a1 = g_003135a2;  // Global at 0x003135a2                   // 0x001ba440: lb $a1, 0x35a2($at)
    at = 0x31 << 16;                                            // 0x001ba444: lui $at, 0x31
    a0 = g_003135a3;  // Global at 0x003135a3                   // 0x001ba448: lb $a0, 0x35a3($at)
    at = 0x31 << 16;                                            // 0x001ba44c: lui $at, 0x31
    v1 = g_003135a4;  // Global at 0x003135a4                   // 0x001ba450: lb $v1, 0x35a4($at)
    at = 0x31 << 16;                                            // 0x001ba454: lui $at, 0x31
    v0 = g_003135a6;  // Global at 0x003135a6                   // 0x001ba458: lb $v0, 0x35a6($at)
    at = 0x31 << 16;                                            // 0x001ba45c: lui $at, 0x31
    g_003137a5 = a3;  // Global at 0x003137a5                   // 0x001ba460: sb $a3, 0x37a5($at)
    at = 0x31 << 16;                                            // 0x001ba464: lui $at, 0x31
    g_003137a9 = a2;  // Global at 0x003137a9                   // 0x001ba468: sb $a2, 0x37a9($at)
    at = 0x31 << 16;                                            // 0x001ba46c: lui $at, 0x31
    g_003137aa = a1;  // Global at 0x003137aa                   // 0x001ba470: sb $a1, 0x37aa($at)
    at = 0x31 << 16;                                            // 0x001ba474: lui $at, 0x31
    g_003137cc = a0;  // Global at 0x003137cc                   // 0x001ba478: sb $a0, 0x37cc($at)
    at = 0x31 << 16;                                            // 0x001ba47c: lui $at, 0x31
    g_003137cf = v1;  // Global at 0x003137cf                   // 0x001ba480: sb $v1, 0x37cf($at)
    at = 0x31 << 16;                                            // 0x001ba484: lui $at, 0x31
    g_003137cd = v0;  // Global at 0x003137cd                   // 0x001ba488: sb $v0, 0x37cd($at)
    at = 0x31 << 16;                                            // 0x001ba48c: lui $at, 0x31
    v1 = g_003135a7;  // Global at 0x003135a7                   // 0x001ba490: lb $v1, 0x35a7($at)
    at = 0x31 << 16;                                            // 0x001ba494: lui $at, 0x31
    v0 = g_003135a5;  // Global at 0x003135a5                   // 0x001ba498: lb $v0, 0x35a5($at)
    at = 0x31 << 16;                                            // 0x001ba49c: lui $at, 0x31
    g_003137ce = v1;  // Global at 0x003137ce                   // 0x001ba4a0: sb $v1, 0x37ce($at)
    at = 0x31 << 16;                                            // 0x001ba4a4: lui $at, 0x31
    func_001ae830();  // 0x1ae770                                // 0x001ba4a8: jal 0x1ae770
    g_003137d0 = v0;  // Global at 0x003137d0                   // 0x001ba4ac: sb $v0, 0x37d0($at)
    at = 0x31 << 16;                                            // 0x001ba4b0: lui $at, 0x31
    v0 = 0 | 0xffff;                                            // 0x001ba4b4: ori $v0, $zero, 0xffff
    g_003137d2 = 0;  // Global at 0x003137d2                    // 0x001ba4b8: sb $zero, 0x37d2($at)
    a0 = 0x1b;                                                  // 0x001ba4bc: addiu $a0, $zero, 0x1b
    at = 0x31 << 16;                                            // 0x001ba4c0: lui $at, 0x31
    g_003137ba = v0;  // Global at 0x003137ba                   // 0x001ba4c4: sh $v0, 0x37ba($at)
    at = 0x31 << 16;                                            // 0x001ba4c8: lui $at, 0x31
    g_003137b8 = 0;  // Global at 0x003137b8                    // 0x001ba4cc: sb $zero, 0x37b8($at)
    at = 0x31 << 16;                                            // 0x001ba4d0: lui $at, 0x31
    g_003137b9 = 0;  // Global at 0x003137b9                    // 0x001ba4d4: sb $zero, 0x37b9($at)
    at = 0x31 << 16;                                            // 0x001ba4d8: lui $at, 0x31
    g_003137bc = 0;  // Global at 0x003137bc                    // 0x001ba4dc: sh $zero, 0x37bc($at)
    at = 0x31 << 16;                                            // 0x001ba4e0: lui $at, 0x31
    g_003137be = 0;  // Global at 0x003137be                    // 0x001ba4e4: sh $zero, 0x37be($at)
    at = 0x31 << 16;                                            // 0x001ba4e8: lui $at, 0x31
    g_003137c0 = 0;  // Global at 0x003137c0                    // 0x001ba4ec: sh $zero, 0x37c0($at)
    at = 0x31 << 16;                                            // 0x001ba4f0: lui $at, 0x31
    g_003137c2 = 0;  // Global at 0x003137c2                    // 0x001ba4f4: sh $zero, 0x37c2($at)
    at = 0x31 << 16;                                            // 0x001ba4f8: lui $at, 0x31
    g_003137c4 = 0;  // Global at 0x003137c4                    // 0x001ba4fc: sh $zero, 0x37c4($at)
    at = 0x31 << 16;                                            // 0x001ba500: lui $at, 0x31
    g_003137c6 = 0;  // Global at 0x003137c6                    // 0x001ba504: sh $zero, 0x37c6($at)
    at = 0x31 << 16;                                            // 0x001ba508: lui $at, 0x31
    g_003137c8 = 0;  // Global at 0x003137c8                    // 0x001ba50c: sb $zero, 0x37c8($at)
    at = 0x31 << 16;                                            // 0x001ba510: lui $at, 0x31
    g_003137c9 = 0;  // Global at 0x003137c9                    // 0x001ba514: sb $zero, 0x37c9($at)
    at = 0x31 << 16;                                            // 0x001ba518: lui $at, 0x31
    g_003137ca = 0;  // Global at 0x003137ca                    // 0x001ba51c: sb $zero, 0x37ca($at)
    at = 0x31 << 16;                                            // 0x001ba520: lui $at, 0x31
    g_003137da = 0;  // Global at 0x003137da                    // 0x001ba524: sb $zero, 0x37da($at)
    at = 0x31 << 16;                                            // 0x001ba528: lui $at, 0x31
    func_001b7aa0();  // 0x1b7a80                                // 0x001ba52c: jal 0x1b7a80
    g_003137db = 0;  // Global at 0x003137db                    // 0x001ba530: sb $zero, 0x37db($at)
    func_001b7aa0();  // 0x1b7a80                                // 0x001ba534: jal 0x1b7a80
    a0 = 0x50;                                                  // 0x001ba538: addiu $a0, $zero, 0x50
    func_001b7aa0();  // 0x1b7a80                                // 0x001ba53c: jal 0x1b7a80
    a0 = 0x51;                                                  // 0x001ba540: addiu $a0, $zero, 0x51
    func_001b7aa0();  // 0x1b7a80                                // 0x001ba544: jal 0x1b7a80
    a0 = 0x54;                                                  // 0x001ba548: addiu $a0, $zero, 0x54
    at = 0x31 << 16;                                            // 0x001ba54c: lui $at, 0x31
    a0 = g_003137cd;  // Global at 0x003137cd                   // 0x001ba550: lb $a0, 0x37cd($at)
    at = 0x31 << 16;                                            // 0x001ba554: lui $at, 0x31
    func_001af020();  // 0x1af010                                // 0x001ba558: jal 0x1af010
    a1 = g_003137ce;  // Global at 0x003137ce                   // 0x001ba55c: lb $a1, 0x37ce($at)
    at = 0x31 << 16;                                            // 0x001ba560: lui $at, 0x31
    func_001b7e90();  // 0x1b7e60                                // 0x001ba564: jal 0x1b7e60
    a0 = g_003137a5;  // Global at 0x003137a5                   // 0x001ba568: lbu $a0, 0x37a5($at)
    at = 0x31 << 16;                                            // 0x001ba56c: lui $at, 0x31
    func_001b7f10();  // 0x1b7e90                                // 0x001ba570: jal 0x1b7e90
    a0 = g_003137aa;  // Global at 0x003137aa                   // 0x001ba574: lbu $a0, 0x37aa($at)
    at = 0x31 << 16;                                            // 0x001ba578: lui $at, 0x31
    func_001b7f80();  // 0x1b7f10                                // 0x001ba57c: jal 0x1b7f10
    a0 = g_003137a9;  // Global at 0x003137a9                   // 0x001ba580: lbu $a0, 0x37a9($at)
    return;                                                     // 0x001ba588: jr $ra
    sp = sp + 0x10;                                             // 0x001ba58c: addiu $sp, $sp, 0x10
}