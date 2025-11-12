void func_00132168() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00132168: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x132188;                           // 0x0013216c: bnez $a0, 0x132188
    a0 = 0x22 << 16;                                            // 0x00132174: lui $a0, 0x22
    func_00127de8();  // 0x127d90                                // 0x00132178: jal 0x127d90
    a0 = &str_00223818;  // "E02080819 ADXT_GetSfreq: parameter error" // 0x0013217c: addiu $a0, $a0, 0x3818
    goto label_0x1321a8;                                        // 0x00132180: b 0x1321a8
    v0 = -1;                                                    // 0x00132184: addiu $v0, $zero, -1
label_0x132188:
    v0 = g_00223819;  // Global at 0x00223819                   // 0x00132188: lb $v0, 1($a0)
    v0 = (v0 < 2) ? 1 : 0;                                      // 0x0013218c: slti $v0, $v0, 2
    /* bnezl $v0, 0x1321a8 */                                   // 0x00132190: bnezl $v0, 0x1321a8
    a0 = g_0022381c;  // Global at 0x0022381c                   // 0x00132198: lw $a0, 4($a0)
    return func_0012d4e0();  // Tail call                        // 0x001321a0: j 0x12d4c8
    sp = sp + 0x10;                                             // 0x001321a4: addiu $sp, $sp, 0x10
label_0x1321a8:
    return;                                                     // 0x001321ac: jr $ra
    sp = sp + 0x10;                                             // 0x001321b0: addiu $sp, $sp, 0x10
}