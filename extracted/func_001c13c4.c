void func_001c13c4() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_1;
    
    sp = sp + -0x10;                                            // 0x001c13c4: addiu $sp, $sp, -0x10
    v1 = *(uint8_t*)((a1) + 5);                                 // 0x001c13c8: lbu $v1, 5($a1)
    v0 = 0x24 << 16;                                            // 0x001c13cc: lui $v0, 0x24
    a0 = *(uint8_t*)((a1) + 7);                                 // 0x001c13d0: lbu $a0, 7($a1)
    v1 = v1 + -1;                                               // 0x001c13d4: addiu $v1, $v1, -1
    t1 = v0 + -0x1e38;                                          // 0x001c13d8: addiu $t1, $v0, -0x1e38
    /* lwl $a3, 0xb($t1) */                                     // 0x001c13e4: lwl $a3, 0xb($t1)
    /* lwr $a3, 8($t1) */                                       // 0x001c13e8: lwr $a3, 8($t1)
    /* swl $a3, 0xb($sp) */                                     // 0x001c13f4: swl $a3, 0xb($sp)
    /* swr $a3, 8($sp) */                                       // 0x001c13f8: swr $a3, 8($sp)
    a0 = a0 & 3;                                                // 0x001c13fc: andi $a0, $a0, 3
    if (a0 != 0) goto label_0x1c1410;                           // 0x001c1400: bnez $a0, 0x1c1410
    *(uint8_t*)((a1) + 5) = v1;                                 // 0x001c1404: sb $v1, 5($a1)
    v0 = 0x1d;                                                  // 0x001c1408: addiu $v0, $zero, 0x1d
    local_1 = v0;                                               // 0x001c140c: sb $v0, 1($sp)
label_0x1c1410:
    v0 = *(uint8_t*)((a1) + 5);                                 // 0x001c1410: lbu $v0, 5($a1)
    if (v0 != 0) goto label_0x1c145c;                           // 0x001c1414: bnez $v0, 0x1c145c
    /* nop */                                                   // 0x001c1418: nop 
    v0 = *(uint8_t*)((a1) + 6);                                 // 0x001c141c: lbu $v0, 6($a1)
    v0 = v0 + -1;                                               // 0x001c1420: addiu $v0, $v0, -1
    v1 = v0 & 0xff;                                             // 0x001c1424: andi $v1, $v0, 0xff
    if (v1 != 0) goto label_0x1c144c;                           // 0x001c1428: bnez $v1, 0x1c144c
    *(uint8_t*)((a1) + 6) = v0;                                 // 0x001c142c: sb $v0, 6($a1)
    v0 = *(uint8_t*)((a1) + 7);                                 // 0x001c1430: lbu $v0, 7($a1)
    if (v0 != 0) goto label_0x1c1440;                           // 0x001c1434: bnez $v0, 0x1c1440
    v0 = v0 + -1;                                               // 0x001c1438: addiu $v0, $v0, -1
    v0 = 0x63;                                                  // 0x001c143c: addiu $v0, $zero, 0x63
label_0x1c1440:
    *(uint8_t*)((a1) + 7) = v0;                                 // 0x001c1440: sb $v0, 7($a1)
    v0 = 0xc;                                                   // 0x001c1444: addiu $v0, $zero, 0xc
    *(uint8_t*)((a1) + 6) = v0;                                 // 0x001c1448: sb $v0, 6($a1)
label_0x1c144c:
    v0 = *(uint8_t*)((a1) + 6);                                 // 0x001c144c: lbu $v0, 6($a1)
    v0 = v0 + sp;                                               // 0x001c1450: addu $v0, $v0, $sp
    v1 = g_0023fffd;  // Global at 0x0023fffd                   // 0x001c1454: lbu $v1, -1($v0)
    *(uint8_t*)((a1) + 5) = v1;                                 // 0x001c1458: sb $v1, 5($a1)
label_0x1c145c:
    return;                                                     // 0x001c145c: jr $ra
    sp = sp + 0x10;                                             // 0x001c1460: addiu $sp, $sp, 0x10
}