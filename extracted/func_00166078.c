void func_00166078() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00166078: addiu $sp, $sp, -0x10
    a1 = 6;                                                     // 0x0016607c: addiu $a1, $zero, 6
    func_001752f8();  // 0x1752e8                                // 0x00166088: jal 0x1752e8
    if (v0 == 0) goto label_0x1660a8;                           // 0x00166090: beqz $v0, 0x1660a8
    return func_001660e8();  // Tail call                        // 0x001660a0: j 0x1660b8
    sp = sp + 0x10;                                             // 0x001660a4: addiu $sp, $sp, 0x10
label_0x1660a8:
    return;                                                     // 0x001660b0: jr $ra
    sp = sp + 0x10;                                             // 0x001660b4: addiu $sp, $sp, 0x10
}