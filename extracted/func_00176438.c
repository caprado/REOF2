void func_00176438() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00176438: addiu $sp, $sp, -0x10
    return func_0014fef0();  // Tail call                        // 0x00176444: j 0x14fea8
    sp = sp + 0x10;                                             // 0x00176448: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017644c: nop 
    sp = sp + -0x20;                                            // 0x00176450: addiu $sp, $sp, -0x20
    func_00169af0();  // 169af0                                // 0x00176464: jal 0x169af0
    if (v0 == 0) goto label_0x176498;                           // 0x00176474: beqz $v0, 0x176498
    a2 = 4;                                                     // 0x00176478: addiu $a2, $zero, 4
    a1 = 0xff00 << 16;                                          // 0x0017647c: lui $a1, 0xff00
    a1 = a1 | 0x123;                                            // 0x00176488: ori $a1, $a1, 0x123
    return func_00169940();  // Tail call                        // 0x00176490: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00176494: addiu $sp, $sp, 0x20
label_0x176498:
    func_00176670();  // 176670                                // 0x00176498: jal 0x176670
    a1 = 0xf;                                                   // 0x001764a4: addiu $a1, $zero, 0xf
    func_00175120();  // 175120                                // 0x001764a8: jal 0x175120
    a2 = 4;                                                     // 0x001764ac: addiu $a2, $zero, 4
    return;                                                     // 0x001764c0: jr $ra
    sp = sp + 0x20;                                             // 0x001764c4: addiu $sp, $sp, 0x20
}