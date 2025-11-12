void func_001281b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x1f << 16;                                            // 0x001281b8: lui $v0, 0x1f
    t4 = v0 + 0x3828;                                           // 0x001281c0: addiu $t4, $v0, 0x3828
    v1 = g_001f3828;  // Global at 0x001f3828                   // 0x001281c8: lw $v1, 0($t4)
    t1 = t2 << 1;                                               // 0x001281cc: sll $t1, $t2, 1
    t3 = 0x1f << 16;                                            // 0x001281d0: lui $t3, 0x1f
    t3 = t3 + 0x3808;                                           // 0x001281d4: addiu $t3, $t3, 0x3808
    t3 = t3 + t1;                                               // 0x001281d8: addu $t3, $t3, $t1
    a1 = v1 + 0xf;                                              // 0x001281dc: addiu $a1, $v1, 0xf
    a0 = (v1 < 0) ? 1 : 0;                                      // 0x001281e0: slti $a0, $v1, 0
    if (a0 != 0) v0 = a1;                                       // 0x001281e8: movn $v0, $a1, $a0
    v0 = v0 >> 4;                                               // 0x001281ec: sra $v0, $v0, 4
    v0 = v0 << 4;                                               // 0x001281f0: sll $v0, $v0, 4
    v1 = v1 - v0;                                               // 0x001281f4: subu $v1, $v1, $v0
    a0 = v1 << 4;                                               // 0x001281f8: sll $a0, $v1, 4
    a1 = 0x1f << 16;                                            // 0x001281fc: lui $a1, 0x1f
    a1 = a1 + 0x3708;                                           // 0x00128200: addiu $a1, $a1, 0x3708
    a1 = a1 + a0;                                               // 0x00128204: addu $a1, $a1, $a0
    if (t5 != 0) goto label_0x128228;                           // 0x00128208: bnez $t5, 0x128228
    g_001f3828 = v1;  // Global at 0x001f3828                   // 0x0012820c: sw $v1, 0($t4)
    v0 = g_001f3808;  // Global at 0x001f3808                   // 0x00128210: lhu $v0, 0($t3)
    a0 = 0x1f << 16;                                            // 0x00128214: lui $a0, 0x1f
    v0 = v0 + 1;                                                // 0x00128218: addiu $v0, $v0, 1
    goto label_0x128230;                                        // 0x0012821c: b 0x128230
    g_001f3808 = v0;  // Global at 0x001f3808                   // 0x00128220: sh $v0, 0($t3)
    /* nop */                                                   // 0x00128224: nop 
label_0x128228:
    a0 = 0x1f << 16;                                            // 0x00128228: lui $a0, 0x1f
    t1 = t2 << 1;                                               // 0x0012822c: sll $t1, $t2, 1
label_0x128230:
    v1 = g_001f3828;  // Global at 0x001f3828                   // 0x00128230: lw $v1, 0($t4)
    a0 = a0 + 0x3808;                                           // 0x00128234: addiu $a0, $a0, 0x3808
    g_001f3708 = t2;  // Global at 0x001f3708                   // 0x00128238: sb $t2, 0($a1)
    a0 = t1 + a0;                                               // 0x0012823c: addu $a0, $t1, $a0
    v1 = v1 + 1;                                                // 0x00128240: addiu $v1, $v1, 1
    g_001f3709 = t5;  // Global at 0x001f3709                   // 0x00128244: sb $t5, 1($a1)
    g_001f3714 = t0;  // Global at 0x001f3714                   // 0x00128248: sw $t0, 0xc($a1)
    g_001f370c = a2;  // Global at 0x001f370c                   // 0x0012824c: sw $a2, 4($a1)
    g_001f3710 = a3;  // Global at 0x001f3710                   // 0x00128250: sw $a3, 8($a1)
    g_001f3828 = v1;  // Global at 0x001f3828                   // 0x00128254: sw $v1, 0($t4)
    v0 = g_001f3808;  // Global at 0x001f3808                   // 0x00128258: lhu $v0, 0($a0)
    return;                                                     // 0x0012825c: jr $ra
    g_001f370a = v0;  // Global at 0x001f370a                   // 0x00128260: sh $v0, 2($a1)
}