void func_00162758() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00162758: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((a0) + 0x4c);                              // 0x00162760: lw $v0, 0x4c($a0)
    if (v0 == 0) goto label_0x162778;                           // 0x00162764: beqz $v0, 0x162778
    return func_0013d080();  // Tail call                        // 0x00162770: j 0x13d018
    sp = sp + 0x10;                                             // 0x00162774: addiu $sp, $sp, 0x10
label_0x162778:
    return;                                                     // 0x0016277c: jr $ra
    sp = sp + 0x10;                                             // 0x00162780: addiu $sp, $sp, 0x10
}