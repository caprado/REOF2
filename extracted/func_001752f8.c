void func_001752f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001752f8: addiu $sp, $sp, -0x20
    func_00169af0();  // 169af0                                // 0x0017530c: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00175314: lui $a1, 0xff00
    if (v0 == 0) goto label_0x175338;                           // 0x00175318: beqz $v0, 0x175338
    a1 = a1 | 0x114;                                            // 0x00175324: ori $a1, $a1, 0x114
    return func_00169940();  // Tail call                        // 0x00175330: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00175334: addiu $sp, $sp, 0x20
label_0x175338:
    return;                                                     // 0x001753c4: jr $ra
    sp = sp + 0x20;                                             // 0x001753c8: addiu $sp, $sp, 0x20
}