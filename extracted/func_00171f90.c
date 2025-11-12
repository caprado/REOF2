void func_00171f90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00171f90: addiu $sp, $sp, -0x20
    func_00169b10();  // 0x169af0                                // 0x00171fa4: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00171fac: lui $a1, 0xff00
    if (v0 == 0) goto label_0x171fd0;                           // 0x00171fb0: beqz $v0, 0x171fd0
    a1 = a1 | 0x144;                                            // 0x00171fbc: ori $a1, $a1, 0x144
    return func_00169940();  // Tail call                        // 0x00171fc8: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00171fcc: addiu $sp, $sp, 0x20
label_0x171fd0:
    func_00177108();  // 0x177100                                // 0x00171fd4: jal 0x177100
    func_00166078();  // 0x166010                                // 0x00171fe0: jal 0x166010
    return;                                                     // 0x00171ff8: jr $ra
    sp = sp + 0x20;                                             // 0x00171ffc: addiu $sp, $sp, 0x20
}