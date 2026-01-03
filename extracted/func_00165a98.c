void func_00165a98() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00165a98: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((a0) + 0x1b74);                            // 0x00165aa0: lw $v0, 0x1b74($a0)
    func_00131af8();  // 131af8                                // 0x00165aa4: jal 0x131af8
    a0 = *(int32_t*)(v0);                                       // 0x00165aa8: lw $a0, 0($v0)
    return;                                                     // 0x00165ab4: jr $ra
    sp = sp + 0x10;                                             // 0x00165ab8: addiu $sp, $sp, 0x10
}