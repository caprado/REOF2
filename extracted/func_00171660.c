void func_00171660() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00171660: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a2) + 0x1b30);                            // 0x00171668: lw $a0, 0x1b30($a2)
    func_00170d20();  // 170d20                                // 0x0017166c: jal 0x170d20
    a0 = a0 + 0xa48;                                            // 0x00171670: addiu $a0, $a0, 0xa48
    v0 = 1;                                                     // 0x00171674: addiu $v0, $zero, 1
    return;                                                     // 0x0017167c: jr $ra
    sp = sp + 0x10;                                             // 0x00171680: addiu $sp, $sp, 0x10
}