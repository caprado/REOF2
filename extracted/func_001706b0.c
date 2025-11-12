void func_001706b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001706b0: addiu $sp, $sp, -0x10
    func_0011d378();  // 0x11d320                                // 0x001706bc: jal 0x11d320
    a1 = 0x1000 << 16;                                          // 0x001706c4: lui $a1, 0x1000
    a3 = 1 << 16;                                               // 0x001706c8: lui $a3, 1
    a1 = a1 | 0xf520;                                           // 0x001706cc: ori $a1, $a1, 0xf520
    a2 = 0x1000 << 16;                                          // 0x001706d0: lui $a2, 0x1000
    v0 = g_10000000;  // Global at 0x10000000                   // 0x001706d4: lw $v0, 0($a1)
    a0 = 0x1000 << 16;                                          // 0x001706d8: lui $a0, 0x1000
    a2 = a2 | 0xf590;                                           // 0x001706dc: ori $a2, $a2, 0xf590
    a0 = a0 | 0xb000;                                           // 0x001706e0: ori $a0, $a0, 0xb000
    v0 = v0 | a3;                                               // 0x001706e4: or $v0, $v0, $a3
    v1 = 0xfffe << 16;                                          // 0x001706e8: lui $v1, 0xfffe
    g_10000000 = v0;  // Global at 0x10000000                   // 0x001706ec: sw $v0, 0($a2)
    v1 = v1 | 0xffff;                                           // 0x001706f0: ori $v1, $v1, 0xffff
    g_10000000 = s0;  // Global at 0x10000000                   // 0x001706f4: sw $s0, 0($a0)
    v0 = g_10000000;  // Global at 0x10000000                   // 0x001706fc: lw $v0, 0($a1)
    v0 = v0 & v1;                                               // 0x00170704: and $v0, $v0, $v1
    g_10000000 = v0;  // Global at 0x10000000                   // 0x00170708: sw $v0, 0($a2)
    return func_0011d390();  // Tail call                        // 0x0017070c: j 0x11d378
    sp = sp + 0x10;                                             // 0x00170710: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00170714: nop 
    sp = sp + -0x10;                                            // 0x00170718: addiu $sp, $sp, -0x10
    func_0011d378();  // 0x11d320                                // 0x00170724: jal 0x11d320
    a1 = 0x1000 << 16;                                          // 0x0017072c: lui $a1, 0x1000
    a3 = 1 << 16;                                               // 0x00170730: lui $a3, 1
    a1 = a1 | 0xf520;                                           // 0x00170734: ori $a1, $a1, 0xf520
    a2 = 0x1000 << 16;                                          // 0x00170738: lui $a2, 0x1000
    v0 = g_10000000;  // Global at 0x10000000                   // 0x0017073c: lw $v0, 0($a1)
    a0 = 0x1000 << 16;                                          // 0x00170740: lui $a0, 0x1000
    a2 = a2 | 0xf590;                                           // 0x00170744: ori $a2, $a2, 0xf590
    a0 = a0 | 0xb400;                                           // 0x00170748: ori $a0, $a0, 0xb400
    v0 = v0 | a3;                                               // 0x0017074c: or $v0, $v0, $a3
    v1 = 0xfffe << 16;                                          // 0x00170750: lui $v1, 0xfffe
    g_10000000 = v0;  // Global at 0x10000000                   // 0x00170754: sw $v0, 0($a2)
    v1 = v1 | 0xffff;                                           // 0x00170758: ori $v1, $v1, 0xffff
    g_10000000 = s0;  // Global at 0x10000000                   // 0x0017075c: sw $s0, 0($a0)
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00170764: lw $v0, 0($a1)
    v0 = v0 & v1;                                               // 0x0017076c: and $v0, $v0, $v1
    g_10000000 = v0;  // Global at 0x10000000                   // 0x00170770: sw $v0, 0($a2)
    return func_0011d390();  // Tail call                        // 0x00170774: j 0x11d378
    sp = sp + 0x10;                                             // 0x00170778: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017077c: nop 
    a1 = a1 | a2;                                               // 0x00170790: or $a1, $a1, $a2
    a1 = a1 | a3;                                               // 0x00170798: or $a1, $a1, $a3
    return;                                                     // 0x0017079c: jr $ra
}