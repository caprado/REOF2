void func_00168e28() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00168e28: addiu $sp, $sp, -0x10
    func_00168fa0();  // 168fa0                                // 0x00168e34: jal 0x168fa0
    if (v0 == 0) goto label_0x168e58;                           // 0x00168e40: beqz $v0, 0x168e58
    a1 = s0 + 0x78;                                             // 0x00168e44: addiu $a1, $s0, 0x78
    return func_00168f38();  // Tail call                        // 0x00168e50: j 0x168e68
    sp = sp + 0x10;                                             // 0x00168e54: addiu $sp, $sp, 0x10
label_0x168e58:
    return;                                                     // 0x00168e60: jr $ra
    sp = sp + 0x10;                                             // 0x00168e64: addiu $sp, $sp, 0x10
}