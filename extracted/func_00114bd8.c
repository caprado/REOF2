void func_00114bd8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00114bd8: addiu $sp, $sp, -0x40
    s0 = COP0_REG12;  // Read system control register           // 0x00114bf4: mfc0 $s0, $12, 0
    v0 = 1 << 16;                                               // 0x00114bf8: lui $v0, 1
    s0 = s0 & v0;                                               // 0x00114bfc: and $s0, $s0, $v0
    if (s0 == 0) goto label_0x114c10;                           // 0x00114c00: beqz $s0, 0x114c10
    /* nop */                                                   // 0x00114c04: nop 
    func_0011d320();  // 11d320                                // 0x00114c08: jal 0x11d320
    /* nop */                                                   // 0x00114c0c: nop 
label_0x114c10:
    a0 = 0xffff << 16;                                          // 0x00114c10: lui $a0, 0xffff
    a0 = a0 | 0xffc0;                                           // 0x00114c14: ori $a0, $a0, 0xffc0
    a1 = s1 & a0;                                               // 0x00114c18: and $a1, $s1, $a0
    func_00114b30();  // 114b30                                // 0x00114c1c: jal 0x114b30
    a0 = s2 & a0;                                               // 0x00114c20: and $a0, $s2, $a0
    if (s0 == 0) goto label_0x114c40;                           // 0x00114c24: beqz $s0, 0x114c40
    return func_0011d390();  // Tail call                        // 0x00114c38: j 0x11d378
    sp = sp + 0x40;                                             // 0x00114c3c: addiu $sp, $sp, 0x40
label_0x114c40:
    return;                                                     // 0x00114c4c: jr $ra
    sp = sp + 0x40;                                             // 0x00114c50: addiu $sp, $sp, 0x40
}