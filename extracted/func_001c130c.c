void func_001c130c() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_1;
    
    sp = sp + -0x10;                                            // 0x001c130c: addiu $sp, $sp, -0x10
    v1 = *(uint8_t*)((a1) + 5);                                 // 0x001c1310: lbu $v1, 5($a1)
    v0 = 0x24 << 16;                                            // 0x001c1314: lui $v0, 0x24
    a0 = *(uint8_t*)((a1) + 7);                                 // 0x001c1318: lbu $a0, 7($a1)
    v1 = v1 + 1;                                                // 0x001c131c: addiu $v1, $v1, 1
    t1 = v0 + -0x1e38;                                          // 0x001c1320: addiu $t1, $v0, -0x1e38
    /* lwl $a3, 0xb($t1) */                                     // 0x001c132c: lwl $a3, 0xb($t1)
    /* lwr $a3, 8($t1) */                                       // 0x001c1330: lwr $a3, 8($t1)
    /* swl $a3, 0xb($sp) */                                     // 0x001c133c: swl $a3, 0xb($sp)
    /* swr $a3, 8($sp) */                                       // 0x001c1340: swr $a3, 8($sp)
    a0 = a0 & 3;                                                // 0x001c1344: andi $a0, $a0, 3
    if (a0 != 0) goto label_0x1c1358;                           // 0x001c1348: bnez $a0, 0x1c1358
    *(uint8_t*)((a1) + 5) = v1;                                 // 0x001c134c: sb $v1, 5($a1)
    v0 = 0x1d;                                                  // 0x001c1350: addiu $v0, $zero, 0x1d
    local_1 = v0;                                               // 0x001c1354: sb $v0, 1($sp)
label_0x1c1358:
    v0 = *(uint8_t*)((a1) + 6);                                 // 0x001c1358: lbu $v0, 6($a1)
    a0 = *(uint8_t*)((a1) + 5);                                 // 0x001c135c: lbu $a0, 5($a1)
    v0 = v0 + sp;                                               // 0x001c1360: addu $v0, $v0, $sp
    v1 = g_0023ffff;  // Global at 0x0023ffff                   // 0x001c1364: lb $v1, -1($v0)
    v1 = (v1 < a0) ? 1 : 0;                                     // 0x001c1368: slt $v1, $v1, $a0
    if (v1 == 0) goto label_0x1c13b4;                           // 0x001c136c: beqz $v1, 0x1c13b4
    v0 = 1;                                                     // 0x001c1370: addiu $v0, $zero, 1
    v1 = *(uint8_t*)((a1) + 6);                                 // 0x001c1374: lbu $v1, 6($a1)
    *(uint8_t*)((a1) + 5) = v0;                                 // 0x001c1378: sb $v0, 5($a1)
    a0 = 0xd;                                                   // 0x001c137c: addiu $a0, $zero, 0xd
    v1 = v1 + 1;                                                // 0x001c1380: addiu $v1, $v1, 1
    v0 = v1 & 0xff;                                             // 0x001c1384: andi $v0, $v1, 0xff
    if (v0 != a0) goto label_0x1c13b4;                          // 0x001c1388: bne $v0, $a0, 0x1c13b4
    *(uint8_t*)((a1) + 6) = v1;                                 // 0x001c138c: sb $v1, 6($a1)
    v1 = *(uint8_t*)((a1) + 7);                                 // 0x001c1390: lbu $v1, 7($a1)
    v0 = 0x63;                                                  // 0x001c1394: addiu $v0, $zero, 0x63
    if (v1 != v0) goto label_0x1c13a8;                          // 0x001c1398: bne $v1, $v0, 0x1c13a8
    v0 = v1 + 1;                                                // 0x001c139c: addiu $v0, $v1, 1
    goto label_0x1c13ac;                                        // 0x001c13a0: b 0x1c13ac
    *(uint8_t*)((a1) + 7) = 0;                                  // 0x001c13a4: sb $zero, 7($a1)
label_0x1c13a8:
    *(uint8_t*)((a1) + 7) = v0;                                 // 0x001c13a8: sb $v0, 7($a1)
label_0x1c13ac:
    v0 = 1;                                                     // 0x001c13ac: addiu $v0, $zero, 1
    *(uint8_t*)((a1) + 6) = v0;                                 // 0x001c13b0: sb $v0, 6($a1)
label_0x1c13b4:
    return;                                                     // 0x001c13b4: jr $ra
    sp = sp + 0x10;                                             // 0x001c13b8: addiu $sp, $sp, 0x10
}