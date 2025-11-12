void func_00160398() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00160398: addiu $sp, $sp, -0x10
    a1 = 0x25;                                                  // 0x001603a4: addiu $a1, $zero, 0x25
    if (a0 == 0) goto label_0x1603c0;                           // 0x001603a8: beqz $a0, 0x1603c0
    v0 = *(int32_t*)((a0) + 0x40);                              // 0x001603ac: lw $v0, 0x40($a0)
    return func_001750b0();  // Tail call                        // 0x001603b8: j 0x174ff8
    sp = sp + 0x10;                                             // 0x001603bc: addiu $sp, $sp, 0x10
label_0x1603c0:
    return;                                                     // 0x001603c4: jr $ra
    sp = sp + 0x10;                                             // 0x001603c8: addiu $sp, $sp, 0x10
}