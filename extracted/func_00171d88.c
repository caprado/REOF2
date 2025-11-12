void func_00171d88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00171d88: addiu $sp, $sp, -0x20
    func_00169b10();  // 0x169af0                                // 0x00171d9c: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00171da4: lui $a1, 0xff00
    a1 = a1 | 0x142;                                            // 0x00171dac: ori $a1, $a1, 0x142
    if (v0 == 0) goto label_0x171dd0;                           // 0x00171db0: beqz $v0, 0x171dd0
    a2 = 1;                                                     // 0x00171db4: addiu $a2, $zero, 1
    return func_00169940();  // Tail call                        // 0x00171dc4: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00171dc8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00171dcc: nop 
label_0x171dd0:
    a0 = *(int32_t*)((s0) + 0x50);                              // 0x00171dd0: lw $a0, 0x50($s0)
    v1 = 2;                                                     // 0x00171dd4: addiu $v1, $zero, 2
    if (s1 != 0) goto label_0x171de8;                           // 0x00171dd8: bnez $s1, 0x171de8
    if (a0 != 0) a2 = v1;                                       // 0x00171ddc: movn $a2, $v1, $a0
    if (a0 == 0) goto label_0x171e00;                           // 0x00171de0: beqz $a0, 0x171e00
label_0x171de8:
    *(uint32_t*)((s0) + 0x50) = s1;                             // 0x00171de8: sw $s1, 0x50($s0)
    func_00171ea8();  // 0x171e18                                // 0x00171df0: jal 0x171e18
    v1 = 1;                                                     // 0x00171df8: addiu $v1, $zero, 1
    *(uint32_t*)((s0) + 0x44) = v1;                             // 0x00171dfc: sw $v1, 0x44($s0)
label_0x171e00:
    return;                                                     // 0x00171e0c: jr $ra
    sp = sp + 0x20;                                             // 0x00171e10: addiu $sp, $sp, 0x20
}