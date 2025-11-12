void func_00132208() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00132208: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x132228;                           // 0x0013220c: bnez $a0, 0x132228
    a0 = 0x22 << 16;                                            // 0x00132214: lui $a0, 0x22
    func_00127de8();  // 0x127d90                                // 0x00132218: jal 0x127d90
    a0 = &str_00223878;  // "E02080822 ADXT_GetHdrLen: parameter error" // 0x0013221c: addiu $a0, $a0, 0x3878
    goto label_0x132248;                                        // 0x00132220: b 0x132248
    v0 = -1;                                                    // 0x00132224: addiu $v0, $zero, -1
label_0x132228:
    v0 = g_00223879;  // Global at 0x00223879                   // 0x00132228: lb $v0, 1($a0)
    v0 = (v0 < 2) ? 1 : 0;                                      // 0x0013222c: slti $v0, $v0, 2
    /* bnezl $v0, 0x132248 */                                   // 0x00132230: bnezl $v0, 0x132248
    a0 = g_0022387c;  // Global at 0x0022387c                   // 0x00132238: lw $a0, 4($a0)
    return func_0012d480();  // Tail call                        // 0x00132240: j 0x12d468
    sp = sp + 0x10;                                             // 0x00132244: addiu $sp, $sp, 0x10
label_0x132248:
    return;                                                     // 0x0013224c: jr $ra
    sp = sp + 0x10;                                             // 0x00132250: addiu $sp, $sp, 0x10
}