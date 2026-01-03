void func_00168ff0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00168ff0: addiu $sp, $sp, -0x20
    a0 = s0 + 0x94;                                             // 0x00169000: addiu $a0, $s0, 0x94
    func_00178db0();  // 178db0                                // 0x00169008: jal 0x178db0
    a1 = *(int32_t*)((s0) + 0x90);                              // 0x0016900c: lw $a1, 0x90($s0)
    if (s1 == 0) goto label_0x169040;                           // 0x00169018: beqz $s1, 0x169040
    func_00169058();  // 169058                                // 0x00169020: jal 0x169058
    /* nop */                                                   // 0x00169024: nop 
    return func_00178ec8();  // Tail call                        // 0x00169038: j 0x178e78
    sp = sp + 0x20;                                             // 0x0016903c: addiu $sp, $sp, 0x20
label_0x169040:
    return;                                                     // 0x0016904c: jr $ra
    sp = sp + 0x20;                                             // 0x00169050: addiu $sp, $sp, 0x20
}