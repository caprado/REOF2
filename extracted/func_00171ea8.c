void func_00171ea8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00171ea8: addiu $sp, $sp, -0x20
    v1 = *(int32_t*)((s0) + 0x4c);                              // 0x00171ec0: lw $v1, 0x4c($s0)
    v1 = v1 + -3;                                               // 0x00171ec4: addiu $v1, $v1, -3
    v1 = ((unsigned)v1 < (unsigned)2) ? 1 : 0;                  // 0x00171ec8: sltiu $v1, $v1, 2
    if (v1 == 0) goto label_0x171ef8;                           // 0x00171ecc: beqz $v1, 0x171ef8
    func_001769c8();  // 1769c8                                // 0x00171ed4: jal 0x1769c8
    /* nop */                                                   // 0x00171ed8: nop 
    return func_00171f38();  // Tail call                        // 0x00171ef0: j 0x171f10
    sp = sp + 0x20;                                             // 0x00171ef4: addiu $sp, $sp, 0x20
label_0x171ef8:
    return;                                                     // 0x00171f04: jr $ra
    sp = sp + 0x20;                                             // 0x00171f08: addiu $sp, $sp, 0x20
}