void func_001763e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001763e0: addiu $sp, $sp, -0x20
    func_00169b10();  // 0x169af0                                // 0x001763f4: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x001763fc: lui $a1, 0xff00
    if (v0 == 0) goto label_0x176420;                           // 0x00176400: beqz $v0, 0x176420
    a1 = a1 | 0x124;                                            // 0x0017640c: ori $a1, $a1, 0x124
    return func_00169940();  // Tail call                        // 0x00176418: j 0x1698d0
    sp = sp + 0x20;                                             // 0x0017641c: addiu $sp, $sp, 0x20
label_0x176420:
    *(uint32_t*)((s0) + 0xcd8) = s1;                            // 0x00176420: sw $s1, 0xcd8($s0)
    return;                                                     // 0x00176430: jr $ra
    sp = sp + 0x20;                                             // 0x00176434: addiu $sp, $sp, 0x20
}