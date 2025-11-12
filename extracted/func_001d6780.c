void func_001d6780() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t3 = 0x33 << 16;                                            // 0x001d6780: lui $t3, 0x33
    t2 = 0x33 << 16;                                            // 0x001d6784: lui $t2, 0x33
    t1 = 0x33 << 16;                                            // 0x001d6788: lui $t1, 0x33
    t3 = t3 + -0x1530;                                          // 0x001d678c: addiu $t3, $t3, -0x1530
    t2 = t2 + -0x1470;                                          // 0x001d6790: addiu $t2, $t2, -0x1470
    t1 = t1 + -0x1570;                                          // 0x001d6794: addiu $t1, $t1, -0x1570
    a3 = 1;                                                     // 0x001d679c: addiu $a3, $zero, 1
label_0x1d67a0:
    v1 = g_0032ead0;  // Global at 0x0032ead0                   // 0x001d67a0: lbu $v1, 0($t3)
    if (v1 == 0) goto label_0x1d67d4;                           // 0x001d67a4: beqz $v1, 0x1d67d4
    /* nop */                                                   // 0x001d67a8: nop 
    v1 = g_0032ead8;  // Global at 0x0032ead8                   // 0x001d67ac: lbu $v1, 8($t3)
    if (v1 != a3) goto label_0x1d67d4;                          // 0x001d67b0: bne $v1, $a3, 0x1d67d4
    /* nop */                                                   // 0x001d67b4: nop 
    v1 = g_0032ead3;  // Global at 0x0032ead3                   // 0x001d67b8: lbu $v1, 3($t3)
    v1 = v1 & 4;                                                // 0x001d67bc: andi $v1, $v1, 4
    if (v1 == 0) goto label_0x1d67d4;                           // 0x001d67c0: beqz $v1, 0x1d67d4
    /* nop */                                                   // 0x001d67c4: nop 
    v1 = g_0032eada;  // Global at 0x0032eada                   // 0x001d67c8: lhu $v1, 0xa($t3)
    *(uint16_t*)(a0) = v1;                                      // 0x001d67cc: sh $v1, 0($a0)
    a0 = a0 + 2;                                                // 0x001d67d0: addiu $a0, $a0, 2
label_0x1d67d4:
    v1 = g_0032eb90;  // Global at 0x0032eb90                   // 0x001d67d4: lbu $v1, 0($t2)
    if (v1 == 0) goto label_0x1d680c;                           // 0x001d67d8: beqz $v1, 0x1d680c
    at = (t0 < 4) ? 1 : 0;                                      // 0x001d67dc: slti $at, $t0, 4
    v1 = g_0032eba0;  // Global at 0x0032eba0                   // 0x001d67e0: lbu $v1, 0x10($t2)
    if (v1 != a3) goto label_0x1d6808;                          // 0x001d67e4: bne $v1, $a3, 0x1d6808
    /* nop */                                                   // 0x001d67e8: nop 
    v1 = g_0032ead3;  // Global at 0x0032ead3                   // 0x001d67ec: lbu $v1, 3($t3)
    v1 = v1 & 4;                                                // 0x001d67f0: andi $v1, $v1, 4
    if (v1 == 0) goto label_0x1d6808;                           // 0x001d67f4: beqz $v1, 0x1d6808
    /* nop */                                                   // 0x001d67f8: nop 
    v1 = g_0032eba2;  // Global at 0x0032eba2                   // 0x001d67fc: lhu $v1, 0x12($t2)
    *(uint16_t*)(a1) = v1;                                      // 0x001d6800: sh $v1, 0($a1)
    a1 = a1 + 2;                                                // 0x001d6804: addiu $a1, $a1, 2
label_0x1d6808:
    at = (t0 < 4) ? 1 : 0;                                      // 0x001d6808: slti $at, $t0, 4
label_0x1d680c:
    if (at == 0) goto label_0x1d6838;                           // 0x001d680c: beqz $at, 0x1d6838
    /* nop */                                                   // 0x001d6810: nop 
    v1 = g_0032ea90;  // Global at 0x0032ea90                   // 0x001d6814: lbu $v1, 0($t1)
    if (v1 == 0) goto label_0x1d6834;                           // 0x001d6818: beqz $v1, 0x1d6834
    /* nop */                                                   // 0x001d681c: nop 
    v1 = g_0032ea98;  // Global at 0x0032ea98                   // 0x001d6820: lhu $v1, 8($t1)
    *(uint16_t*)(a2) = v1;                                      // 0x001d6824: sh $v1, 0($a2)
    v1 = g_0032ea9c;  // Global at 0x0032ea9c                   // 0x001d6828: lhu $v1, 0xc($t1)
    *(uint16_t*)((a2) + 2) = v1;                                // 0x001d682c: sh $v1, 2($a2)
    a2 = a2 + 4;                                                // 0x001d6830: addiu $a2, $a2, 4
label_0x1d6834:
    t1 = t1 + 0x10;                                             // 0x001d6834: addiu $t1, $t1, 0x10
label_0x1d6838:
    t0 = t0 + 1;                                                // 0x001d6838: addiu $t0, $t0, 1
    t3 = t3 + 0xc;                                              // 0x001d683c: addiu $t3, $t3, 0xc
    v1 = (t0 < 0x10) ? 1 : 0;                                   // 0x001d6840: slti $v1, $t0, 0x10
    if (v1 != 0) goto label_0x1d67a0;                           // 0x001d6844: bnez $v1, 0x1d67a0
    t2 = t2 + 0x14;                                             // 0x001d6848: addiu $t2, $t2, 0x14
    return;                                                     // 0x001d684c: jr $ra
    /* nop */                                                   // 0x001d6850: nop 
}