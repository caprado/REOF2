void func_00163518() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00163518: addiu $sp, $sp, -0x10
    v0 = 1;                                                     // 0x0016351c: addiu $v0, $zero, 1
    v1 = *(int32_t*)((a0) + 0x60);                              // 0x00163524: lw $v1, 0x60($a0)
    if (v1 != v0) goto label_0x163538;                          // 0x00163528: bne $v1, $v0, 0x163538
    return func_001635a8();  // Tail call                        // 0x00163530: j 0x163540
    sp = sp + 0x10;                                             // 0x00163534: addiu $sp, $sp, 0x10
label_0x163538:
    return;                                                     // 0x00163538: jr $ra
    sp = sp + 0x10;                                             // 0x0016353c: addiu $sp, $sp, 0x10
}