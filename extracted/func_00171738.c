void func_00171738() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00171738: addiu $sp, $sp, -0x10
    a2 = 0x48;                                                  // 0x0017173c: addiu $a2, $zero, 0x48
    a1 = g_00269d88;  // Global at 0x00269d88                   // 0x00171744: lw $a1, 0x1b30($a0)
    a0 = 0x26 << 16;                                            // 0x00171748: lui $a0, 0x26
    a0 = a0 + 0x7858;                                           // 0x00171750: addiu $a0, $a0, 0x7858
    a1 = a1 + 0xa00;                                            // 0x00171754: addiu $a1, $a1, 0xa00
    return func_00155be0();  // Tail call                       // 0x00171758: j 0x155be0
    sp = sp + 0x10;                                             // 0x0017175c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00171760: addiu $sp, $sp, -0x10
    a1 = 0x26 << 16;                                            // 0x00171764: lui $a1, 0x26
    a1 = a1 + 0x7858;                                           // 0x0017176c: addiu $a1, $a1, 0x7858
    a2 = 0x48;                                                  // 0x00171770: addiu $a2, $zero, 0x48
    a0 = g_00269388;  // Global at 0x00269388                   // 0x00171774: lw $a0, 0x1b30($a0)
    a0 = a0 + 0xa00;                                            // 0x0017177c: addiu $a0, $a0, 0xa00
    return func_00155be0();  // Tail call                       // 0x00171780: j 0x155be0
    sp = sp + 0x10;                                             // 0x00171784: addiu $sp, $sp, 0x10
    sp = sp + -0x20;                                            // 0x00171788: addiu $sp, $sp, -0x20
    func_001711f0();  // 1711f0                                // 0x001717a4: jal 0x1711f0
    if (v0 != 0) return;  // Branch to 0x1717d8                 // 0x001717b0: bnez $v0, 0x1717d8
    return;                                                     // 0x001717cc: jr $ra
    sp = sp + 0x20;                                             // 0x001717d0: addiu $sp, $sp, 0x20
}