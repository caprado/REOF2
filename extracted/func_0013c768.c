void func_0013c768() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013c768: addiu $sp, $sp, -0x10
    if (a0 != 0) return;  // Branch to 0x13c7b8                 // 0x0013c770: bnez $a0, 0x13c7b8
    v1 = 0x20 << 16;                                            // 0x0013c778: lui $v1, 0x20
    v0 = 0x22 << 16;                                            // 0x0013c77c: lui $v0, 0x22
    a3 = &str_00225b80;  // "E0001: Illigal parameter=sj (LSC_Create)\n" // 0x0013c780: addiu $a3, $v0, 0x5b80
    a2 = v1 + 0x45b0;                                           // 0x0013c784: addiu $a2, $v1, 0x45b0
    /* lwl $a0, 3($a3) */                                       // 0x0013c788: lwl $a0, 3($a3)
    /* lwr $a0, 0($a3) */                                       // 0x0013c78c: lwr $a0, 0($a3)
    a1 = g_00225b84;  // Global at 0x00225b84                   // 0x0013c790: lb $a1, 4($a3)
    /* swl $a0, 3($a2) */                                       // 0x0013c794: swl $a0, 3($a2)
    /* swr $a0, 0($a2) */                                       // 0x0013c798: swr $a0, 0($a2)
    g_002045b4 = a1;  // Global at 0x002045b4                   // 0x0013c79c: sb $a1, 4($a2)
    a0 = g_00225b85;  // Global at 0x00225b85                   // 0x0013c7a0: lb $a0, 5($a3)
    g_002045b5 = a0;  // Global at 0x002045b5                   // 0x0013c7a4: sb $a0, 5($a2)
    return;                                                     // 0x0013c7ac: jr $ra
    sp = sp + 0x10;                                             // 0x0013c7b0: addiu $sp, $sp, 0x10
}