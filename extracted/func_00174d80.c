void func_00174d80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00174d80: addiu $sp, $sp, -0x20
    func_00169af0();  // 169af0                                // 0x00174d94: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00174d9c: lui $a1, 0xff00
    if (v0 == 0) goto label_0x174dc0;                           // 0x00174da0: beqz $v0, 0x174dc0
    a1 = a1 | 0x15c;                                            // 0x00174dac: ori $a1, $a1, 0x15c
    return func_00169940();  // Tail call                        // 0x00174db8: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00174dbc: addiu $sp, $sp, 0x20
label_0x174dc0:
    a0 = *(int32_t*)((s0) + 0x2ab0);                            // 0x00174dc0: lw $a0, 0x2ab0($s0)
    /* bnezl $a0, 0x174dcc */                                   // 0x00174dc4: bnezl $a0, 0x174dcc
    *(uint32_t*)((a0) + 0xdc0) = s1;                            // 0x00174dc8: sw $s1, 0xdc0($a0)
    return;                                                     // 0x00174dd8: jr $ra
    sp = sp + 0x20;                                             // 0x00174ddc: addiu $sp, $sp, 0x20
}