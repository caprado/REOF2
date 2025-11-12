void func_00129c90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00129c90: addiu $sp, $sp, -0x10
    if (a0 == 0) goto label_0x129cb8;                           // 0x00129c98: beqz $a0, 0x129cb8
    v1 = *(int32_t*)((a0) + 4);                                 // 0x00129ca0: lw $v1, 4($a0)
    if (v1 == 0) goto label_0x129cb8;                           // 0x00129ca4: beqz $v1, 0x129cb8
    return func_00130ca0();  // Tail call                       // 0x00129cb0: j 0x130ca0
    sp = sp + 0x10;                                             // 0x00129cb4: addiu $sp, $sp, 0x10
label_0x129cb8:
    return;                                                     // 0x00129cbc: jr $ra
    sp = sp + 0x10;                                             // 0x00129cc0: addiu $sp, $sp, 0x10
}