void func_001d64f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x33 << 16;                                            // 0x001d64f0: lui $v0, 0x33
    a1 = a1 & 0xffff;                                           // 0x001d64f4: andi $a1, $a1, 0xffff
    a0 = a0 & 0xffff;                                           // 0x001d64f8: andi $a0, $a0, 0xffff
    v0 = v0 + -0x1570;                                          // 0x001d64fc: addiu $v0, $v0, -0x1570
    goto label_0x1d653c;                                        // 0x001d6500: b 0x1d653c
label_0x1d6508:
    v1 = g_0032ea90;  // Global at 0x0032ea90                   // 0x001d6508: lbu $v1, 0($v0)
    if (v1 == 0) goto label_0x1d6534;                           // 0x001d650c: beqz $v1, 0x1d6534
    /* nop */                                                   // 0x001d6510: nop 
    v1 = g_0032ea9c;  // Global at 0x0032ea9c                   // 0x001d6514: lhu $v1, 0xc($v0)
    if (v1 != a1) goto label_0x1d6534;                          // 0x001d6518: bne $v1, $a1, 0x1d6534
    /* nop */                                                   // 0x001d651c: nop 
    v1 = g_0032ea98;  // Global at 0x0032ea98                   // 0x001d6520: lhu $v1, 8($v0)
    if (v1 != a0) goto label_0x1d6534;                          // 0x001d6524: bne $v1, $a0, 0x1d6534
    /* nop */                                                   // 0x001d6528: nop 
    goto label_0x1d654c;                                        // 0x001d652c: b 0x1d654c
    /* nop */                                                   // 0x001d6530: nop 
label_0x1d6534:
    a2 = a2 + 1;                                                // 0x001d6534: addiu $a2, $a2, 1
    v0 = v0 + 0x10;                                             // 0x001d6538: addiu $v0, $v0, 0x10
label_0x1d653c:
    v1 = (a2 < 4) ? 1 : 0;                                      // 0x001d653c: slti $v1, $a2, 4
    if (v1 != 0) goto label_0x1d6508;                           // 0x001d6540: bnez $v1, 0x1d6508
    /* nop */                                                   // 0x001d6544: nop 
label_0x1d654c:
    return;                                                     // 0x001d654c: jr $ra
    /* nop */                                                   // 0x001d6550: nop 
}