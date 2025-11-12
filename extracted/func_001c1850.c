void func_001c1850() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (a0 < 0) goto label_0x1c1868;                            // 0x001c1850: bltz $a0, 0x1c1868
    v0 = (a0 < 0x5d) ? 1 : 0;                                   // 0x001c1858: slti $v0, $a0, 0x5d
    if (v0 != 0) goto label_0x1c1870;                           // 0x001c185c: bnez $v0, 0x1c1870
    v1 = a0 << 2;                                               // 0x001c1860: sll $v1, $a0, 2
label_0x1c1868:
    goto label_0x1c1894;                                        // 0x001c1868: b 0x1c1894
    /* nop */                                                   // 0x001c186c: nop 
label_0x1c1870:
    at = 0x31 << 16;                                            // 0x001c1870: lui $at, 0x31
    a0 = g_003137dd;  // Global at 0x003137dd                   // 0x001c1874: lbu $a0, 0x37dd($at)
    v0 = 0x22 << 16;                                            // 0x001c1878: lui $v0, 0x22
    v0 = v0 + -0x1320;                                          // 0x001c187c: addiu $v0, $v0, -0x1320
    a0 = a0 << 2;                                               // 0x001c1880: sll $a0, $a0, 2
    v0 = v0 + a0;                                               // 0x001c1884: addu $v0, $v0, $a0
    v0 = g_0021ece0;  // Global at 0x0021ece0                   // 0x001c1888: lw $v0, 0($v0)
    v0 = v0 + v1;                                               // 0x001c188c: addu $v0, $v0, $v1
    v0 = g_0021ece0;  // Global at 0x0021ece0                   // 0x001c1890: lw $v0, 0($v0)
label_0x1c1894:
    return;                                                     // 0x001c1894: jr $ra
    /* nop */                                                   // 0x001c1898: nop 
}