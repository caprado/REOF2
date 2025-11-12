void func_001476e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001476e8: addiu $sp, $sp, -0x10
    func_0011d378();  // 0x11d320                                // 0x001476f0: jal 0x11d320
    /* nop */                                                   // 0x001476f4: nop 
    t1 = 0x1000 << 16;                                          // 0x001476f8: lui $t1, 0x1000
    a0 = 1 << 16;                                               // 0x001476fc: lui $a0, 1
    t1 = t1 | 0xf520;                                           // 0x00147700: ori $t1, $t1, 0xf520
    t2 = 0x1000 << 16;                                          // 0x00147704: lui $t2, 0x1000
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00147708: lw $v1, 0($t1)
    t2 = t2 | 0xf590;                                           // 0x0014770c: ori $t2, $t2, 0xf590
    a2 = 0x1000 << 16;                                          // 0x00147710: lui $a2, 0x1000
    t0 = 0xffff << 16;                                          // 0x00147714: lui $t0, 0xffff
    v1 = v1 | a0;                                               // 0x00147718: or $v1, $v1, $a0
    a2 = a2 | 0xb000;                                           // 0x0014771c: ori $a2, $a2, 0xb000
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00147720: sw $v1, 0($t2)
    t0 = t0 | 0xfeff;                                           // 0x00147724: ori $t0, $t0, 0xfeff
    a1 = 0x1000 << 16;                                          // 0x00147728: lui $a1, 0x1000
    a3 = 0xfffe << 16;                                          // 0x0014772c: lui $a3, 0xfffe
    a0 = g_10000000;  // Global at 0x10000000                   // 0x00147730: lw $a0, 0($a2)
    a1 = a1 | 0xb400;                                           // 0x00147734: ori $a1, $a1, 0xb400
    a3 = a3 | 0xffff;                                           // 0x00147738: ori $a3, $a3, 0xffff
    a0 = a0 & t0;                                               // 0x0014773c: and $a0, $a0, $t0
    g_10000000 = a0;  // Global at 0x10000000                   // 0x00147740: sw $a0, 0($a2)
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00147744: lw $v1, 0($a1)
    v1 = v1 & t0;                                               // 0x00147748: and $v1, $v1, $t0
    g_10000000 = v1;  // Global at 0x10000000                   // 0x0014774c: sw $v1, 0($a1)
    a0 = g_10000000;  // Global at 0x10000000                   // 0x00147750: lw $a0, 0($t1)
    a0 = a0 & a3;                                               // 0x00147754: and $a0, $a0, $a3
    g_10000000 = a0;  // Global at 0x10000000                   // 0x00147758: sw $a0, 0($t2)
    if (v0 == 0) goto label_0x147770;                           // 0x0014775c: beqz $v0, 0x147770
    v0 = 0x1000 << 16;                                          // 0x00147760: lui $v0, 0x1000
    func_0011d390();  // 0x11d378                                // 0x00147764: jal 0x11d378
    /* nop */                                                   // 0x00147768: nop 
    v0 = 0x1000 << 16;                                          // 0x0014776c: lui $v0, 0x1000
label_0x147770:
    v1 = 0x1000 << 16;                                          // 0x00147770: lui $v1, 0x1000
    v0 = v0 | 0xb020;                                           // 0x00147774: ori $v0, $v0, 0xb020
    v1 = v1 | 0xb420;                                           // 0x00147778: ori $v1, $v1, 0xb420
    g_10000000 = 0;  // Global at 0x10000000                    // 0x0014777c: sw $zero, 0($v0)
    SetVTLBRefillHandler();  // 0x113c58                        // 0x00147780: jal 0x113c58
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00147784: sw $zero, 0($v1)
    v0 = 1;                                                     // 0x0014778c: addiu $v0, $zero, 1
    return;                                                     // 0x00147790: jr $ra
    sp = sp + 0x10;                                             // 0x00147794: addiu $sp, $sp, 0x10
}