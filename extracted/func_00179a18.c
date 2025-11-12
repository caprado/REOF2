void func_00179a18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00179a18: addiu $sp, $sp, -0x20
    func_00178fa0();  // 0x178f58                                // 0x00179a2c: jal 0x178f58
    s1 = *(int32_t*)((a0) + 4);                                 // 0x00179a30: lw $s1, 4($a0)
    if (v0 == 0) goto label_0x179a58;                           // 0x00179a38: beqz $v0, 0x179a58
    return func_00179240();  // Tail call                        // 0x00179a4c: j 0x1791f8
    sp = sp + 0x20;                                             // 0x00179a50: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00179a54: nop 
label_0x179a58:
    return;                                                     // 0x00179a64: jr $ra
    sp = sp + 0x20;                                             // 0x00179a68: addiu $sp, $sp, 0x20
}