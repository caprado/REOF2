void func_00164200() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00164200: addiu $sp, $sp, -0x10
    if (a0 == 0) goto label_0x164218;                           // 0x00164204: beqz $a0, 0x164218
    return func_00130ae8();  // Tail call                        // 0x00164210: j 0x130ad8
    sp = sp + 0x10;                                             // 0x00164214: addiu $sp, $sp, 0x10
label_0x164218:
    return;                                                     // 0x0016421c: jr $ra
    sp = sp + 0x10;                                             // 0x00164220: addiu $sp, $sp, 0x10
}