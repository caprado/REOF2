void func_00171688() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00171688: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a2) + 0x1b30);                            // 0x00171690: lw $a0, 0x1b30($a2)
    func_00171138();  // 0x170e20                                // 0x00171694: jal 0x170e20
    a0 = a0 + 0xa48;                                            // 0x00171698: addiu $a0, $a0, 0xa48
    v0 = 1;                                                     // 0x0017169c: addiu $v0, $zero, 1
    return;                                                     // 0x001716a4: jr $ra
    sp = sp + 0x10;                                             // 0x001716a8: addiu $sp, $sp, 0x10
}