void func_001322a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001322a8: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x1322c8;                           // 0x001322ac: bnez $a0, 0x1322c8
    a0 = 0x22 << 16;                                            // 0x001322b4: lui $a0, 0x22
    func_00127d90();  // 127d90                                // 0x001322b8: jal 0x127d90
    a0 = &str_002238d8;  // "E02080825 ADXT_SetOutPan: parameter error" // 0x001322bc: addiu $a0, $a0, 0x38d8
    goto label_0x1322e8;                                        // 0x001322c0: b 0x1322e8
    v0 = -1;                                                    // 0x001322c4: addiu $v0, $zero, -1
label_0x1322c8:
    v0 = g_002238d9;  // Global at 0x002238d9                   // 0x001322c8: lb $v0, 1($a0)
    v0 = (v0 < 2) ? 1 : 0;                                      // 0x001322cc: slti $v0, $v0, 2
    /* bnezl $v0, 0x1322e8 */                                   // 0x001322d0: bnezl $v0, 0x1322e8
    a0 = g_002238dc;  // Global at 0x002238dc                   // 0x001322d8: lw $a0, 4($a0)
    return func_0012d6f0();  // Tail call                        // 0x001322e0: j 0x12d6d8
    sp = sp + 0x10;                                             // 0x001322e4: addiu $sp, $sp, 0x10
label_0x1322e8:
    return;                                                     // 0x001322ec: jr $ra
    sp = sp + 0x10;                                             // 0x001322f0: addiu $sp, $sp, 0x10
}