void func_00179400() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00179400: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((a0) + 4);                                 // 0x00179414: lw $v0, 4($a0)
    func_00178fa0();  // 0x178f58                                // 0x00179418: jal 0x178f58
    s1 = v0 + 0xe0;                                             // 0x0017941c: addiu $s1, $v0, 0xe0
    if (v0 == 0) goto label_0x1794bc;                           // 0x00179428: beqz $v0, 0x1794bc
    a2 = 0x41;                                                  // 0x0017942c: addiu $a2, $zero, 0x41
    func_00107d30();  // 0x107c70                                // 0x00179430: jal 0x107c70
    /* nop */                                                   // 0x00179434: nop 
    v0 = 1;                                                     // 0x00179438: addiu $v0, $zero, 1
label_0x1794bc:
    return;                                                     // 0x001794c8: jr $ra
    sp = sp + 0x20;                                             // 0x001794cc: addiu $sp, $sp, 0x20
}