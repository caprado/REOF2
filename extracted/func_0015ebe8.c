void func_0015ebe8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015ebe8: addiu $sp, $sp, -0x10
    if (a1 < 0) goto label_0x15ec08;                            // 0x0015ebf0: bltz $a1, 0x15ec08
    a0 = *(int32_t*)((a0) + 0x40);                              // 0x0015ebf4: lw $a0, 0x40($a0)
    return func_00173be8();  // Tail call                        // 0x0015ebfc: j 0x173b68
    sp = sp + 0x10;                                             // 0x0015ec00: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0015ec04: nop 
label_0x15ec08:
    return;                                                     // 0x0015ec0c: jr $ra
    sp = sp + 0x10;                                             // 0x0015ec10: addiu $sp, $sp, 0x10
}