void func_00168f38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00168f38: addiu $sp, $sp, -0x20
    func_00168fa0();  // 168fa0                                // 0x00168f4c: jal 0x168fa0
    s0 = s1 + 0x78;                                             // 0x00168f50: addiu $s0, $s1, 0x78
    if (v0 == 0) goto label_0x168f88;                           // 0x00168f58: beqz $v0, 0x168f88
    func_00168e68();  // 168e68                                // 0x00168f60: jal 0x168e68
    /* nop */                                                   // 0x00168f64: nop 
    func_00168ff0();  // 168ff0                                // 0x00168f68: jal 0x168ff0
    return func_00169640();  // Tail call                        // 0x00168f80: j 0x169610
    sp = sp + 0x20;                                             // 0x00168f84: addiu $sp, $sp, 0x20
label_0x168f88:
    return;                                                     // 0x00168f94: jr $ra
    sp = sp + 0x20;                                             // 0x00168f98: addiu $sp, $sp, 0x20
}