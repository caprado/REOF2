void func_00176bf0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00176bf0: addiu $sp, $sp, -0x10
    if (a1 == 0) goto label_0x176c18;                           // 0x00176bf8: beqz $a1, 0x176c18
    a2 = *(int32_t*)((a1) + 0x18);                              // 0x00176c00: lw $a2, 0x18($a1)
    a1 = *(int32_t*)((a1) + 0x14);                              // 0x00176c08: lw $a1, 0x14($a1)
    return func_00176c60();  // Tail call                        // 0x00176c0c: j 0x176c28
    sp = sp + 0x10;                                             // 0x00176c10: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00176c14: nop 
label_0x176c18:
    return;                                                     // 0x00176c1c: jr $ra
    sp = sp + 0x10;                                             // 0x00176c20: addiu $sp, $sp, 0x10
}