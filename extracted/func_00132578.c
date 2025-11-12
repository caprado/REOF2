void func_00132578() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00132578: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x132598;                           // 0x0013257c: bnez $a0, 0x132598
    a0 = 0x22 << 16;                                            // 0x00132584: lui $a0, 0x22
    a0 = &str_00223a58;  // "E02080838 ADXT_SetReloadTime: parameter error" // 0x0013258c: addiu $a0, $a0, 0x3a58
    return func_00127de8();  // Tail call                        // 0x00132590: j 0x127d90
    sp = sp + 0x10;                                             // 0x00132594: addiu $sp, $sp, 0x10
label_0x132598:
    g_00223a90 = a1;  // Global at 0x00223a90                   // 0x0013259c: sw $a1, 0x38($a0)
    return;                                                     // 0x001325a0: jr $ra
    sp = sp + 0x10;                                             // 0x001325a4: addiu $sp, $sp, 0x10
}