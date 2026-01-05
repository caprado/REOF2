void func_00132e18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00132e18: addiu $sp, $sp, -0x10
    a0 = g_00223d9c;  // Global at 0x00223d9c                   // 0x00132e20: lw $a0, 4($a0)
    return func_0012d3e8();  // Tail call                       // 0x00132e28: j 0x12d3e8
    sp = sp + 0x10;                                             // 0x00132e2c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00132e30: addiu $sp, $sp, -0x10
    if (a0 != 0) return;  // Branch to 0x132e58                 // 0x00132e34: bnez $a0, 0x132e58
    a0 = 0x22 << 16;                                            // 0x00132e3c: lui $a0, 0x22
    func_00127d90();  // 127d90                                // 0x00132e40: jal 0x127d90
    a0 = &str_00223d98;  // "E02080860 ADXT_SetKeyString: parameter error" // 0x00132e44: addiu $a0, $a0, 0x3d98
    v0 = -1;                                                    // 0x00132e48: addiu $v0, $zero, -1
    return;                                                     // 0x00132e50: jr $ra
    sp = sp + 0x10;                                             // 0x00132e54: addiu $sp, $sp, 0x10
}