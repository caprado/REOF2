void func_0016c8d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0016c8d0: addiu $sp, $sp, -0x20
    s2 = *(int32_t*)((s0) + 0x1b38);                            // 0x0016c8e8: lw $s2, 0x1b38($s0)
    func_001671e8();  // 0x1671c8                                // 0x0016c8ec: jal 0x1671c8
    func_00167a08();  // 0x1679e0                                // 0x0016c8fc: jal 0x1679e0
    v1 = *(int32_t*)((s0) + 0x28);                              // 0x0016c908: lw $v1, 0x28($s0)
    s1 = s1 - v0;                                               // 0x0016c90c: subu $s1, $s1, $v0
    a1 = 0xff00 << 16;                                          // 0x0016c910: lui $a1, 0xff00
    s1 = (s1 < v1) ? 1 : 0;                                     // 0x0016c918: slt $s1, $s1, $v1
    if (s1 == 0) goto label_0x16c940;                           // 0x0016c91c: beqz $s1, 0x16c940
    a1 = a1 | 0xf1c;                                            // 0x0016c920: ori $a1, $a1, 0xf1c
    return func_00169940();  // Tail call                        // 0x0016c934: j 0x1698d0
    sp = sp + 0x20;                                             // 0x0016c938: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0016c93c: nop 
label_0x16c940:
    return;                                                     // 0x0016c950: jr $ra
    sp = sp + 0x20;                                             // 0x0016c954: addiu $sp, $sp, 0x20
}