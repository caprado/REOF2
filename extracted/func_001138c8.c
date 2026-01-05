void func_001138c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001138c8: addiu $sp, $sp, -0x20
    func_0011d320();  // 11d320                                // 0x001138d4: jal 0x11d320
    a2 = 0x1000 << 16;                                          // 0x001138dc: lui $a2, 0x1000
    a3 = 0x1000 << 16;                                          // 0x001138e0: lui $a3, 0x1000
    a2 = a2 | 0xf520;                                           // 0x001138e4: ori $a2, $a2, 0xf520
    t0 = 1 << 16;                                               // 0x001138e8: lui $t0, 1
    v1 = g_10000000;  // Global at 0x10000000                   // 0x001138ec: lw $v1, 0($a2)
    a3 = a3 | 0xf590;                                           // 0x001138f0: ori $a3, $a3, 0xf590
    a0 = 0x1000 << 16;                                          // 0x001138f4: lui $a0, 0x1000
    a1 = 0xfffe << 16;                                          // 0x001138f8: lui $a1, 0xfffe
    v1 = v1 | t0;                                               // 0x001138fc: or $v1, $v1, $t0
    a0 = a0 | 0xb400;                                           // 0x00113900: ori $a0, $a0, 0xb400
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00113904: sw $v1, 0($a3)
    a1 = a1 | 0xffff;                                           // 0x00113908: ori $a1, $a1, 0xffff
    g_10000000 = s0;  // Global at 0x10000000                   // 0x0011390c: sw $s0, 0($a0)
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00113910: lw $v1, 0($a2)
    v1 = v1 & a1;                                               // 0x00113914: and $v1, $v1, $a1
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00113918: sw $v1, 0($a3)
    if (v0 == 0) goto label_0x113930;                           // 0x0011391c: beqz $v0, 0x113930
    return func_0011d390();  // Tail call                        // 0x00113928: j 0x11d378
    sp = sp + 0x20;                                             // 0x0011392c: addiu $sp, $sp, 0x20
label_0x113930:
    return;                                                     // 0x00113934: jr $ra
    sp = sp + 0x20;                                             // 0x00113938: addiu $sp, $sp, 0x20
}