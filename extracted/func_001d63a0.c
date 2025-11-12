void func_001d63a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001d63a0: addiu $sp, $sp, -0x20
    a1 = a1 & 0xffff;                                           // 0x001d63a4: andi $a1, $a1, 0xffff
    a0 = a0 & 0xffff;                                           // 0x001d63ac: andi $a0, $a0, 0xffff
    s0 = 0x33 << 16;                                            // 0x001d63b8: lui $s0, 0x33
    goto label_0x1d641c;                                        // 0x001d63bc: b 0x1d641c
    s0 = s0 + -0x1570;                                          // 0x001d63c0: addiu $s0, $s0, -0x1570
label_0x1d63c4:
    v1 = g_0032ea90;  // Global at 0x0032ea90                   // 0x001d63c4: lbu $v1, 0($s0)
    if (v1 == 0) goto label_0x1d6414;                           // 0x001d63c8: beqz $v1, 0x1d6414
    /* nop */                                                   // 0x001d63cc: nop 
    v1 = g_0032ea9c;  // Global at 0x0032ea9c                   // 0x001d63d0: lhu $v1, 0xc($s0)
    if (v1 != a1) goto label_0x1d6414;                          // 0x001d63d4: bne $v1, $a1, 0x1d6414
    /* nop */                                                   // 0x001d63d8: nop 
    v1 = g_0032ea98;  // Global at 0x0032ea98                   // 0x001d63dc: lhu $v1, 8($s0)
    if (v1 != a0) goto label_0x1d6414;                          // 0x001d63e0: bne $v1, $a0, 0x1d6414
    /* nop */                                                   // 0x001d63e4: nop 
    v0 = g_0032ea94;  // Global at 0x0032ea94                   // 0x001d63e8: lw $v0, 4($s0)
    func_001b18f0();  // 0x1b18e0                                // 0x001d63ec: jal 0x1b18e0
    a0 = v0 + 4;                                                // 0x001d63f0: addiu $a0, $v0, 4
    v0 = g_0032ea94;  // Global at 0x0032ea94                   // 0x001d63f4: lw $v0, 4($s0)
    a2 = 0xc80;                                                 // 0x001d63fc: addiu $a2, $zero, 0xc80
    func_00107d30();  // 0x107c70                                // 0x001d6400: jal 0x107c70
    a0 = v0 + 4;                                                // 0x001d6404: addiu $a0, $v0, 4
    g_0032ea90 = 0;  // Global at 0x0032ea90                    // 0x001d6408: sb $zero, 0($s0)
    goto label_0x1d6428;                                        // 0x001d640c: b 0x1d6428
    g_0032ea9a = 0;  // Global at 0x0032ea9a                    // 0x001d6410: sh $zero, 0xa($s0)
label_0x1d6414:
    a2 = a2 + 1;                                                // 0x001d6414: addiu $a2, $a2, 1
    s0 = s0 + 0x10;                                             // 0x001d6418: addiu $s0, $s0, 0x10
label_0x1d641c:
    v1 = (a2 < 4) ? 1 : 0;                                      // 0x001d641c: slti $v1, $a2, 4
    if (v1 != 0) goto label_0x1d63c4;                           // 0x001d6420: bnez $v1, 0x1d63c4
    /* nop */                                                   // 0x001d6424: nop 
label_0x1d6428:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d642c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d6430: jr $ra
    sp = sp + 0x20;                                             // 0x001d6434: addiu $sp, $sp, 0x20
}