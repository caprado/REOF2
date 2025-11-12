void func_001d6560() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x33 << 16;                                            // 0x001d6560: lui $v0, 0x33
    a0 = a0 & 0xffff;                                           // 0x001d6564: andi $a0, $a0, 0xffff
    v0 = v0 + -0x1570;                                          // 0x001d6568: addiu $v0, $v0, -0x1570
    goto label_0x1d659c;                                        // 0x001d656c: b 0x1d659c
label_0x1d6574:
    v1 = g_0032ea90;  // Global at 0x0032ea90                   // 0x001d6574: lbu $v1, 0($v0)
    if (v1 == 0) goto label_0x1d6594;                           // 0x001d6578: beqz $v1, 0x1d6594
    /* nop */                                                   // 0x001d657c: nop 
    v1 = g_0032ea98;  // Global at 0x0032ea98                   // 0x001d6580: lhu $v1, 8($v0)
    if (v1 != a0) goto label_0x1d6594;                          // 0x001d6584: bne $v1, $a0, 0x1d6594
    /* nop */                                                   // 0x001d6588: nop 
    goto label_0x1d65ac;                                        // 0x001d658c: b 0x1d65ac
    /* nop */                                                   // 0x001d6590: nop 
label_0x1d6594:
    a1 = a1 + 1;                                                // 0x001d6594: addiu $a1, $a1, 1
    v0 = v0 + 0x10;                                             // 0x001d6598: addiu $v0, $v0, 0x10
label_0x1d659c:
    v1 = (a1 < 4) ? 1 : 0;                                      // 0x001d659c: slti $v1, $a1, 4
    if (v1 != 0) goto label_0x1d6574;                           // 0x001d65a0: bnez $v1, 0x1d6574
    /* nop */                                                   // 0x001d65a4: nop 
label_0x1d65ac:
    return;                                                     // 0x001d65ac: jr $ra
    /* nop */                                                   // 0x001d65b0: nop 
}