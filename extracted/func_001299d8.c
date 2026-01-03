void func_001299d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001299d8: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x1299f8;                           // 0x001299dc: bnez $a0, 0x1299f8
    a0 = 0x22 << 16;                                            // 0x001299e4: lui $a0, 0x22
    func_00127d90();  // 127d90                                // 0x001299e8: jal 0x127d90
    a0 = &str_00222a60;  // "E9040832:'adxf' is NULL.(ADXF_GetStat)" // 0x001299ec: addiu $a0, $a0, 0x2a60
    goto label_0x1299fc;                                        // 0x001299f0: b 0x1299fc
    v0 = -3;                                                    // 0x001299f4: addiu $v0, $zero, -3
label_0x1299f8:
    v0 = g_00222a80;  // Global at 0x00222a80                   // 0x001299f8: lw $v0, 0x20($a0)
label_0x1299fc:
    return;                                                     // 0x00129a00: jr $ra
    sp = sp + 0x10;                                             // 0x00129a04: addiu $sp, $sp, 0x10
}