void func_0016b4b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0016b4b0: addiu $sp, $sp, -0x20
    s2 = s1 + 0x1d04;                                           // 0x0016b4c0: addiu $s2, $s1, 0x1d04
    func_0016b578();  // 16b578                                // 0x0016b4d0: jal 0x16b578
    *(uint32_t*)((s1) + 0x1aec) = s2;                           // 0x0016b4d4: sw $s2, 0x1aec($s1)
    func_001580b0();  // 1580b0                                // 0x0016b4d8: jal 0x1580b0
    /* nop */                                                   // 0x0016b4dc: nop 
    a1 = 0xff00 << 16;                                          // 0x0016b4e4: lui $a1, 0xff00
    a1 = a1 | 0xd08;                                            // 0x0016b4ec: ori $a1, $a1, 0xd08
    if (s0 != 0) goto label_0x16b510;                           // 0x0016b4f0: bnez $s0, 0x16b510
    return func_00169940();  // Tail call                        // 0x0016b508: j 0x1698d0
    sp = sp + 0x20;                                             // 0x0016b50c: addiu $sp, $sp, 0x20
label_0x16b510:
    a1 = 0x17 << 16;                                            // 0x0016b510: lui $a1, 0x17
    func_00157f40();  // 157f40                                // 0x0016b518: jal 0x157f40
    a1 = a1 + -0x4a18;                                          // 0x0016b51c: addiu $a1, $a1, -0x4a18
    if (v0 == 0) goto label_0x16b558;                           // 0x0016b520: beqz $v0, 0x16b558
    func_0016b650();  // 16b650                                // 0x0016b528: jal 0x16b650
    /* nop */                                                   // 0x0016b52c: nop 
    a1 = 0xff00 << 16;                                          // 0x0016b534: lui $a1, 0xff00
    a1 = a1 | 0xd09;                                            // 0x0016b540: ori $a1, $a1, 0xd09
    return func_00169940();  // Tail call                        // 0x0016b54c: j 0x1698d0
    sp = sp + 0x20;                                             // 0x0016b550: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0016b554: nop 
label_0x16b558:
    *(uint32_t*)(s2) = s0;                                      // 0x0016b558: sw $s0, 0($s2)
    return;                                                     // 0x0016b56c: jr $ra
    sp = sp + 0x20;                                             // 0x0016b570: addiu $sp, $sp, 0x20
}