void func_00130098() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001300a0: addiu $sp, $sp, -0x10
    v0 = (a1 < 0x100) ? 1 : 0;                                  // 0x001300a4: slti $v0, $a1, 0x100
    if (v0 == 0) goto label_0x1300c8;                           // 0x001300b0: beqz $v0, 0x1300c8
    func_0012fed8();  // 12fed8                                // 0x001300b8: jal 0x12fed8
    goto label_0x1300d4;                                        // 0x001300c0: b 0x1300d4
label_0x1300c8:
    func_0012ffb8();  // 12ffb8                                // 0x001300c8: jal 0x12ffb8
label_0x1300d4:
    return;                                                     // 0x001300d4: jr $ra
    sp = sp + 0x10;                                             // 0x001300d8: addiu $sp, $sp, 0x10
}