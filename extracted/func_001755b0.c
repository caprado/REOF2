void func_001755b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001755b0: addiu $sp, $sp, -0x20
    func_00169af0();  // 169af0                                // 0x001755cc: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x001755d4: lui $a1, 0xff00
    if (v0 == 0) goto label_0x175608;                           // 0x001755e0: beqz $v0, 0x175608
    a1 = a1 | 0x117;                                            // 0x001755e4: ori $a1, $a1, 0x117
    return func_00169940();  // Tail call                        // 0x001755fc: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00175600: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00175604: nop 
label_0x175608:
    func_00175630();  // 175630                                // 0x00175608: jal 0x175630
    return;                                                     // 0x00175624: jr $ra
    sp = sp + 0x20;                                             // 0x00175628: addiu $sp, $sp, 0x20
}