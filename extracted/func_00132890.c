void func_00132890() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00132890: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x1328b0;                           // 0x00132894: bnez $a0, 0x1328b0
    a0 = 0x22 << 16;                                            // 0x0013289c: lui $a0, 0x22
    func_00127de8();  // 0x127d90                                // 0x001328a0: jal 0x127d90
    a0 = &str_00223bb0;  // "E02080843 ADXT_GetErrCode: parameter error" // 0x001328a4: addiu $a0, $a0, 0x3bb0
    goto label_0x1328bc;                                        // 0x001328a8: b 0x1328bc
    v0 = -1;                                                    // 0x001328ac: addiu $v0, $zero, -1
label_0x1328b0:
    v0 = g_00223bb1;  // Global at 0x00223bb1                   // 0x001328b0: lb $v0, 1($a0)
    v0 = v0 ^ 5;                                                // 0x001328b4: xori $v0, $v0, 5
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x001328b8: sltiu $v0, $v0, 1
label_0x1328bc:
    return;                                                     // 0x001328c0: jr $ra
    sp = sp + 0x10;                                             // 0x001328c4: addiu $sp, $sp, 0x10
}