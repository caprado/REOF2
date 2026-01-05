void func_00113850() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00113850: addiu $sp, $sp, -0x20
    func_0011d320();  // 11d320                                // 0x0011385c: jal 0x11d320
    a2 = 0x1000 << 16;                                          // 0x00113864: lui $a2, 0x1000
    a3 = 0x1000 << 16;                                          // 0x00113868: lui $a3, 0x1000
    a2 = a2 | 0xf520;                                           // 0x0011386c: ori $a2, $a2, 0xf520
    t0 = 1 << 16;                                               // 0x00113870: lui $t0, 1
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00113874: lw $v1, 0($a2)
    a3 = a3 | 0xf590;                                           // 0x00113878: ori $a3, $a3, 0xf590
    a0 = 0x1000 << 16;                                          // 0x0011387c: lui $a0, 0x1000
    a1 = 0xfffe << 16;                                          // 0x00113880: lui $a1, 0xfffe
    v1 = v1 | t0;                                               // 0x00113884: or $v1, $v1, $t0
    a0 = a0 | 0xb000;                                           // 0x00113888: ori $a0, $a0, 0xb000
    g_10000000 = v1;  // Global at 0x10000000                   // 0x0011388c: sw $v1, 0($a3)
    a1 = a1 | 0xffff;                                           // 0x00113890: ori $a1, $a1, 0xffff
    g_10000000 = s0;  // Global at 0x10000000                   // 0x00113894: sw $s0, 0($a0)
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00113898: lw $v1, 0($a2)
    v1 = v1 & a1;                                               // 0x0011389c: and $v1, $v1, $a1
    g_10000000 = v1;  // Global at 0x10000000                   // 0x001138a0: sw $v1, 0($a3)
    if (v0 == 0) goto label_0x1138b8;                           // 0x001138a4: beqz $v0, 0x1138b8
    return func_0011d390();  // Tail call                        // 0x001138b0: j 0x11d378
    sp = sp + 0x20;                                             // 0x001138b4: addiu $sp, $sp, 0x20
label_0x1138b8:
    return;                                                     // 0x001138bc: jr $ra
    sp = sp + 0x20;                                             // 0x001138c0: addiu $sp, $sp, 0x20
}