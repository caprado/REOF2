void func_00132510() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00132510: addiu $sp, $sp, -0x10
    func_0012d610();  // 0x12d5b8                                // 0x00132518: jal 0x12d5b8
    a0 = *(int32_t*)((a0) + 4);                                 // 0x0013251c: lw $a0, 4($a0)
    return;                                                     // 0x00132524: jr $ra
    sp = sp + 0x10;                                             // 0x00132528: addiu $sp, $sp, 0x10
}