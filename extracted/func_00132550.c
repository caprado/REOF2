void func_00132550() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00132550: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 4);                                 // 0x00132558: lw $a0, 4($a0)
    return func_0012d6d8();  // Tail call                        // 0x00132560: j 0x12d678
    sp = sp + 0x10;                                             // 0x00132564: addiu $sp, $sp, 0x10
    v0 = 0x20 << 16;                                            // 0x00132568: lui $v0, 0x20
    return;                                                     // 0x0013256c: jr $ra
    g_00201d58 = a0;  // Global at 0x00201d58                   // 0x00132570: sw $a0, 0x1d58($v0)
}