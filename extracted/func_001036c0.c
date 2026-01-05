void func_001036c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001036c0: addiu $sp, $sp, -0x30
    func_0011d320();  // 11d320                                // 0x001036d0: jal 0x11d320
    a0 = 1 << 16;                                               // 0x001036dc: lui $a0, 1
    v0 = 0x1000 << 16;                                          // 0x001036e0: lui $v0, 0x1000
    v0 = v0 | 0xf520;                                           // 0x001036e4: ori $v0, $v0, 0xf520
    a2 = g_10000000;  // Global at 0x10000000                   // 0x001036e8: lw $a2, 0($v0)
    v1 = a2 & a0;                                               // 0x001036ec: and $v1, $a2, $a0
    if (v1 != 0) goto label_0x103708;                           // 0x001036f0: bnez $v1, 0x103708
    v0 = 0x1000 << 16;                                          // 0x001036f4: lui $v0, 0x1000
    v1 = a2 | a0;                                               // 0x001036f8: or $v1, $a2, $a0
    v0 = v0 | 0xf590;                                           // 0x001036fc: ori $v0, $v0, 0xf590
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00103700: sw $v1, 0($v0)
    v0 = 0x1000 << 16;                                          // 0x00103704: lui $v0, 0x1000
label_0x103708:
    a0 = 0xffff << 16;                                          // 0x00103708: lui $a0, 0xffff
    v0 = v0 | 0xe000;                                           // 0x0010370c: ori $v0, $v0, 0xe000
    a0 = a0 | 0xfeff;                                           // 0x00103710: ori $a0, $a0, 0xfeff
    a1 = g_10000000;  // Global at 0x10000000                   // 0x00103714: lw $a1, 0($v0)
    v1 = 0x1000 << 16;                                          // 0x00103718: lui $v1, 0x1000
    s0 = *(int32_t*)(s1);                                       // 0x0010371c: lw $s0, 0($s1)
    v1 = v1 | 0xf590;                                           // 0x00103720: ori $v1, $v1, 0xf590
    a0 = s0 & a0;                                               // 0x00103724: and $a0, $s0, $a0
    *(uint32_t*)(s1) = a0;                                      // 0x00103728: sw $a0, 0($s1)
    g_10000000 = a2;  // Global at 0x10000000                   // 0x0010372c: sw $a2, 0($v1)
    if (a3 == 0) goto label_0x103744;                           // 0x00103730: beqz $a3, 0x103744
    func_0011d378();  // 11d378                                // 0x00103738: jal 0x11d378
    /* nop */                                                   // 0x0010373c: nop 
label_0x103744:
    return;                                                     // 0x00103750: jr $ra
    sp = sp + 0x30;                                             // 0x00103754: addiu $sp, $sp, 0x30
}